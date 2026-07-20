/*
 * chat.c — A minimal ChatGPT/Claude-style terminal chat client in C.
 *
 * Talks to the Anthropic Messages API over HTTPS using libcurl,
 * builds/parses JSON with cJSON, and keeps a running conversation
 * history so the model remembers earlier turns (like a real chat app).
 *
 * Build:   make
 * Run:     export ANTHROPIC_API_KEY="sk-ant-..."
 *          ./chat
 *
 * Type your message and press Enter. Type "exit" or "quit" to stop.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include "cJSON.h"

#define API_URL "https://api.anthropic.com/v1/messages"
#define MODEL "claude-sonnet-4-6"
#define MAX_TOKENS 1024
#define INPUT_BUF_SIZE 4096

/* ---- Growable buffer used to collect curl's response body ---- */
typedef struct {
    char *data;
    size_t len;
} Buffer;

static size_t write_callback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t total = size * nmemb;
    Buffer *buf = (Buffer *)userp;

    char *ptr = realloc(buf->data, buf->len + total + 1);
    if (!ptr) {
        fprintf(stderr, "Out of memory while receiving response.\n");
        return 0; /* signals an error to curl */
    }
    buf->data = ptr;
    memcpy(buf->data + buf->len, contents, total);
    buf->len += total;
    buf->data[buf->len] = '\0';
    return total;
}

/* ---- Conversation history: array of {role, content} kept as a JSON array ---- */
static cJSON *history = NULL;

static void history_init(void) {
    history = cJSON_CreateArray();
}

static void history_add(const char *role, const char *content) {
    cJSON *msg = cJSON_CreateObject();
    cJSON_AddStringToObject(msg, "role", role);
    cJSON_AddStringToObject(msg, "content", content);
    cJSON_AddItemToArray(history, msg);
}

/* ---- Send the whole conversation to the API and return the assistant's reply.
 *      Caller must free() the returned string. Returns NULL on error. ---- */
static char *send_message(const char *api_key) {
    CURL *curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "Failed to initialize curl.\n");
        return NULL;
    }

    /* Build the JSON request body: { model, max_tokens, messages: [...] } */
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "model", MODEL);
    cJSON_AddNumberToObject(root, "max_tokens", MAX_TOKENS);
    cJSON_AddItemToObject(root, "messages", cJSON_Duplicate(history, 1));

    char *body = cJSON_PrintUnformatted(root);
    cJSON_Delete(root);

    /* HTTP headers required by the Anthropic API */
    struct curl_slist *headers = NULL;
    char auth_header[512];
    snprintf(auth_header, sizeof(auth_header), "x-api-key: %s", api_key);
    headers = curl_slist_append(headers, auth_header);
    headers = curl_slist_append(headers, "anthropic-version: 2023-06-01");
    headers = curl_slist_append(headers, "content-type: application/json");

    Buffer response = { .data = malloc(1), .len = 0 };
    response.data[0] = '\0';

    curl_easy_setopt(curl, CURLOPT_URL, API_URL);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, body);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 60L);

    CURLcode res = curl_easy_perform(curl);

    char *reply = NULL;

    if (res != CURLE_OK) {
        fprintf(stderr, "\n[network error] %s\n", curl_easy_strerror(res));
    } else {
        long status = 0;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &status);

        cJSON *json = cJSON_Parse(response.data);
        if (!json) {
            fprintf(stderr, "\n[error] Could not parse API response.\n");
        } else if (status != 200) {
            cJSON *err = cJSON_GetObjectItem(json, "error");
            cJSON *msg = err ? cJSON_GetObjectItem(err, "message") : NULL;
            fprintf(stderr, "\n[api error %ld] %s\n", status,
                    msg && cJSON_IsString(msg) ? msg->valuestring : "unknown error");
            cJSON_Delete(json);
        } else {
            /* Success: content is an array of blocks; concatenate any "text" blocks */
            cJSON *content = cJSON_GetObjectItem(json, "content");
            size_t total_len = 0;
            reply = malloc(1);
            reply[0] = '\0';

            cJSON *block;
            cJSON_ArrayForEach(block, content) {
                cJSON *type = cJSON_GetObjectItem(block, "type");
                if (type && cJSON_IsString(type) && strcmp(type->valuestring, "text") == 0) {
                    cJSON *text = cJSON_GetObjectItem(block, "text");
                    if (text && cJSON_IsString(text)) {
                        size_t add_len = strlen(text->valuestring);
                        reply = realloc(reply, total_len + add_len + 1);
                        memcpy(reply + total_len, text->valuestring, add_len);
                        total_len += add_len;
                        reply[total_len] = '\0';
                    }
                }
            }
            cJSON_Delete(json);
        }
    }

    free(body);
    free(response.data);
    curl_slist_free_all(headers);
    curl_easy_cleanup(curl);
    return reply;
}

int main(void) {
    const char *api_key = getenv("ANTHROPIC_API_KEY");
    if (!api_key || strlen(api_key) == 0) {
        fprintf(stderr,
            "Error: ANTHROPIC_API_KEY environment variable is not set.\n"
            "Set it first, e.g.:\n"
            "  export ANTHROPIC_API_KEY=\"sk-ant-...\"\n");
        return 1;
    }

    curl_global_init(CURL_GLOBAL_DEFAULT);
    history_init();

    printf("=====================================\n");
    printf("  C Chat Client (powered by Claude)\n");
    printf("  Type 'exit' or 'quit' to stop.\n");
    printf("=====================================\n\n");

    char input[INPUT_BUF_SIZE];

    while (1) {
        printf("You: ");
        fflush(stdout);

        if (!fgets(input, sizeof(input), stdin)) break;

        /* Strip trailing newline */
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') input[len - 1] = '\0';

        if (strlen(input) == 0) continue;
        if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0) break;

        history_add("user", input);

        printf("Claude: ");
        fflush(stdout);

        char *reply = send_message(api_key);
        if (reply) {
            printf("%s\n\n", reply);
            history_add("assistant", reply);
            free(reply);
        } else {
            printf("(no response — see error above)\n\n");
            /* Remove the user turn so a failed request doesn't corrupt history */
            cJSON_DeleteItemFromArray(history, cJSON_GetArraySize(history) - 1);
        }
    }

    cJSON_Delete(history);
    curl_global_cleanup();
    printf("Goodbye!\n");
    return 0;
}

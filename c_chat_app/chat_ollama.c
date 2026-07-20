/*
 * chat_ollama.c — Terminal chat client using a local Ollama model (llama3).
 * No API key needed. Requires `ollama serve` running locally (usually automatic).
 *
 * Build:   gcc -Wall -O2 -o chat_ollama chat_ollama.c cJSON.c -lcurl
 * Run:     ./chat_ollama
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include "cJSON.h"

#define API_URL "http://localhost:11434/api/chat"
#define MODEL "llama3"
#define INPUT_BUF_SIZE 4096

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
        return 0;
    }
    buf->data = ptr;
    memcpy(buf->data + buf->len, contents, total);
    buf->len += total;
    buf->data[buf->len] = '\0';
    return total;
}

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

/* Send whole conversation to Ollama, return assistant's reply (caller frees). */
static char *send_message(void) {
    CURL *curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "Failed to initialize curl.\n");
        return NULL;
    }

    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "model", MODEL);
    cJSON_AddItemToObject(root, "messages", cJSON_Duplicate(history, 1));
    cJSON_AddBoolToObject(root, "stream", 0);
    char *body = cJSON_PrintUnformatted(root);
    cJSON_Delete(root);

    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "content-type: application/json");

    Buffer response = { .data = malloc(1), .len = 0 };
    response.data[0] = '\0';

    curl_easy_setopt(curl, CURLOPT_URL, API_URL);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, body);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 120L);

    CURLcode res = curl_easy_perform(curl);
    char *reply = NULL;

    if (res != CURLE_OK) {
        fprintf(stderr, "\n[network error] %s\n"
                        "(Is Ollama running? Try: ollama serve)\n",
                curl_easy_strerror(res));
    } else {
        cJSON *json = cJSON_Parse(response.data);
        if (!json) {
            fprintf(stderr, "\n[error] Could not parse Ollama response.\n");
        } else {
            cJSON *message = cJSON_GetObjectItem(json, "message");
            cJSON *content = message ? cJSON_GetObjectItem(message, "content") : NULL;
            if (content && cJSON_IsString(content)) {
                reply = strdup(content->valuestring);
            } else {
                cJSON *err = cJSON_GetObjectItem(json, "error");
                fprintf(stderr, "\n[ollama error] %s\n",
                        err && cJSON_IsString(err) ? err->valuestring : "unknown error");
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
    curl_global_init(CURL_GLOBAL_DEFAULT);
    history_init();

    printf("=====================================\n");
    printf("  C Chat Client (powered by Ollama/llama3)\n");
    printf("  Type 'exit' or 'quit' to stop.\n");
    printf("=====================================\n\n");

    char input[INPUT_BUF_SIZE];
    while (1) {
        printf("You: ");
        fflush(stdout);
        if (!fgets(input, sizeof(input), stdin)) break;

        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') input[len - 1] = '\0';
        if (strlen(input) == 0) continue;
        if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0) break;

        history_add("user", input);
        printf("llama3: ");
        fflush(stdout);

        char *reply = send_message();
        if (reply) {
            printf("%s\n\n", reply);
            history_add("assistant", reply);
            free(reply);
        } else {
            printf("(no response — see error above)\n\n");
            cJSON_DeleteItemFromArray(history, cJSON_GetArraySize(history) - 1);
        }
    }

    cJSON_Delete(history);
    curl_global_cleanup();
    printf("Goodbye!\n");
    return 0;
}

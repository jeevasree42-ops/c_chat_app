# C Chat Client (ChatGPT/Claude-style, pure C)

A minimal terminal chat app written entirely in C. It talks to the
Anthropic Claude API over HTTPS and keeps conversation history in memory,
so it works like a real chatbot session.

## How it works

- **libcurl** — sends HTTPS POST requests to the Claude API
- **cJSON** — builds the JSON request and parses the JSON response
  (single-file library, included as `cJSON.c` / `cJSON.h`)
- Conversation history is kept as a growing JSON array in memory and
  resent with every request (this is how the model "remembers" context —
  the API itself is stateless)

## Requirements

- gcc (or any C compiler)
- libcurl development headers

On Ubuntu/Debian:
```bash
sudo apt-get install gcc make libcurl4-openssl-dev
```

On Fedora / RHEL / CentOS:
```bash
sudo dnf install gcc make libcurl-devel
```

## Build

```bash
make
```

This produces a `chat` executable.

## Run

You need an Anthropic API key (get one at https://console.anthropic.com/).

```bash
export ANTHROPIC_API_KEY="sk-ant-your-key-here"
./chat
```

Then just type messages at the `You:` prompt. Type `exit` or `quit` to stop.

## Files

| File       | Purpose                                      |
|------------|-----------------------------------------------|
| `chat.c`   | Main program: HTTP calls, JSON handling, chat loop |
| `cJSON.c` / `cJSON.h` | JSON library (third-party, MIT licensed) |
| `Makefile` | Build script                                  |

## Customizing

- **Model**: change the `MODEL` macro at the top of `chat.c` (currently
  `claude-sonnet-4-6`).
- **Response length**: change `MAX_TOKENS`.
- **Switch to a different provider** (e.g. OpenAI): you'd change `API_URL`,
  the auth header (`x-api-key` → `Authorization: Bearer ...`), and the
  request/response JSON shape to match that provider's API — the overall
  structure (curl + cJSON) stays the same.

## Notes

- This is a **command-line** app, not a GUI. Building a graphical version
  in pure C would mean adding a UI toolkit like GTK — happy to extend this
  if you want that next.
- Your API key is read from an environment variable, never hard-coded, so
  it's safe to share this code.

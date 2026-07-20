#!/bin/bash
set -e
echo "=== C Chat App (Ollama) setup ==="
if command -v dnf >/dev/null 2>&1; then
    echo "Installing libcurl-devel via dnf..."
    sudo dnf install -y libcurl-devel gcc make
elif command -v apt >/dev/null 2>&1; then
    echo "Installing libcurl4-openssl-dev via apt..."
    sudo apt update && sudo apt install -y libcurl4-openssl-dev gcc make
else
    echo "Unsupported package manager. Please install libcurl dev headers, gcc, and make manually."
fi
if ! command -v ollama >/dev/null 2>&1; then
    echo "Installing Ollama..."
    curl -fsSL https://ollama.com/install.sh | sh
else
    echo "Ollama already installed."
fi
echo "Pulling llama3 model (this may take a while)..."
ollama pull llama3
echo "Building chat_ollama..."
make
echo ""
echo "=== Setup complete! ==="
echo "Run the app with: ./chat_ollama"

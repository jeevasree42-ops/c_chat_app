CC = gcc
CFLAGS = -Wall -O2
LIBS = -lcurl

all: chat

chat: chat.c cJSON.c cJSON.h
	$(CC) $(CFLAGS) -o chat chat.c cJSON.c $(LIBS)

clean:
	rm -f chat

.PHONY: all clean

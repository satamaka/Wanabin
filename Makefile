CC = gcc
CFLAGS = -Wall -Wextra -O2

all: cat

cat: src/cat.c
	$(CC) $(CFLAGS) -o cat src/cat.c

clean:
	rm -f cat
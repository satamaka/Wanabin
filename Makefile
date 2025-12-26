CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGETS = cat echo

all: $(TARGETS)

cat: src/cat.c
	$(CC) $(CFLAGS) -o cat src/cat.c

echo: src/echo.c
	$(CC) $(CFLAGS) -o echo src/echo.c

clean:
	rm -f $(TARGETS)

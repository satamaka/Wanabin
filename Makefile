CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGETS = cat echo pwd

all: $(TARGETS)

cat: src/cat.c
	$(CC) $(CFLAGS) -o cat src/cat.c

echo: src/echo.c
	$(CC) $(CFLAGS) -o echo src/echo.c

pwd: src/pwd.c
	$(CC) $(CFLAGS) -o pwd src/pwd.c
	
clean:
	rm -f $(TARGETS)

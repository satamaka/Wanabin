CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGETS = basename cat echo false hostname logname pwd sleep true tty uname yes

all: $(TARGETS)

%: src/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

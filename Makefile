CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGETS = cat echo false logname pwd sleep true tty yes

all: $(TARGETS)

%: src/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

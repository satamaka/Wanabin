CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGETS = basename cat dirname echo env false hostname logname pwd sleep true tty uname whoami yes

all: $(TARGETS)

%: src/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

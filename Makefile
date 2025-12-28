CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGETS = basename cat cp dirname echo env false hostname logname mv pwd sleep true tty uname whoami yes

all: $(TARGETS)

%: src/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

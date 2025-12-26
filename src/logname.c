/*
 * Wanabin - logname.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *u = getlogin();
	
	if (!u) {
        u = getenv("LOGNAME");
    }

	if (!u)
		return EXIT_FAILURE;
	puts(u);
	return 0;
}


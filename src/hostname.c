/*
 * Wanabin - hostname.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* 
 * Note: If HOST_NAME_MAX is not defined by the system, provide a fallback value.
 * _POSIX_HOST_NAME_MAX is defined as 255 by POSIX standards.
 */
#ifndef HOST_NAME_MAX
#  ifdef _POSIX_HOST_NAME_MAX
#    define HOST_NAME_MAX _POSIX_HOST_NAME_MAX
#  else
#    define HOST_NAME_MAX 255
#  endif
#endif

int main(void)
{
	char name[HOST_NAME_MAX + 1] = { 0 };

	if (gethostname(name, HOST_NAME_MAX)) {
		perror("gethostname");
		return EXIT_FAILURE;
	}

	name[HOST_NAME_MAX] = '\0';
	
	if (puts(name) == EOF)
		return EXIT_FAILURE;

	return EXIT_SUCCESS;
}

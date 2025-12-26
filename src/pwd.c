/*
 * Wanabin - pwd.c
 * Copyright (c) 2025 Satamaka
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *pwd;
	int allocated = 0;

	pwd = getenv("PWD");
	if (!pwd) {
		pwd = getcwd(NULL, 0);
		if (!pwd) {
			perror("pwd");
			return EXIT_FAILURE;
		}
		
		allocated = 1;
	}

	printf("%s\n", pwd);

	if (allocated)
		free(pwd);

	return EXIT_SUCCESS;
}

/*
 * wanabin - cat.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>

static void do_cat(FILE *fp);


int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc < 2) {
        do_cat(stdin);
        return EXIT_SUCCESS;
    }

    for (int i = 1; i < argc; i++) {
        fp = fopen(argv[i], "rb");
        if (!fp) {
            perror(argv[i]); 
            fprintf(stderr, "Skipping file: %s\n", argv[i]);
            /* 
             * My mistake: I used printf here before.
             * The error message went into my file and ruined it.
             * So, use fprintf(stderr, ...) to save your files!
             */
            continue;
        }

        do_cat(fp);
        fclose(fp);
    }

    return EXIT_SUCCESS;
}


static void do_cat(FILE *fp)
{
	char buf[4096];
	size_t n;

	while ((n = fread(buf, 1, sizeof(buf), fp)) > 0) {
		if (fwrite(buf, 1, n, stdout) != n) {
			perror("fwrite");
			exit(EXIT_FAILURE);
		}
	}
}
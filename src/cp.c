/*
 * Wanabin - cp.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "usage: cp source_file destination_file\n");
        return EXIT_FAILURE;
    }

    FILE *src = fopen(argv[1], "rb");
    if (src == NULL) {
        perror(argv[1]);
        return EXIT_FAILURE;
    }

    FILE *dst = fopen(argv[2], "wb");
    if (dst == NULL) {
        perror(argv[2]);
        fclose(src);
        return EXIT_FAILURE;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            perror("fputc");
            fclose(src);
            fclose(dst);
            return EXIT_FAILURE;
        }
    }

    fclose(src);
    fclose(dst);
    return EXIT_SUCCESS;
}

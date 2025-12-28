/*
 * Wanabin - mv.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "usage: mv source destination\n");
        return EXIT_FAILURE;
    }

    if (rename(argv[1], argv[2]) == -1) {
        perror("mv");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

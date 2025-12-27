/*
 * Wanabin - basename.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "usage: basename string\n");
        return EXIT_FAILURE;
    }

    char *path = argv[1];
    char *base = strrchr(path, '/');

    if (base != NULL) {
        printf("%s\n", base + 1);
    } else {
        printf("%s\n", path);
    }

    return EXIT_SUCCESS;
}
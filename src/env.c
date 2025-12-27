/*
 * Wanabin - env.c
 * Copyright (c) 2025 Satamaka
 */

/* Becoming tired. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {
    if (argc > 1) {
        fprintf(stderr, "usage: env\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; envp[i] != NULL; i++) {
        if (puts(envp[i]) == EOF) {
            perror("env");
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
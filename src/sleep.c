/*
 * Wanabin - sleep.c
 * Copyright (c) 2025 Satamaka
 */


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s seconds\n", argv[0]);
        return EXIT_FAILURE;
    }

    unsigned int seconds = (unsigned int)atoi(argv[1]);
    sleep(seconds);

    return EXIT_SUCCESS;
}

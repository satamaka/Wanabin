/*
 * Wanabin - yes.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int a, char **v) {
    char b[8192], *s = a > 1 ? v[1] : "y";
    int l = strlen(s), p = 0;

    while (p < 4096) {
        memcpy(b + p, s, l);
        p += l;
        b[p++] = '\n';
    }

    while (write(1, b, p) > 0);
    return EXIT_FAILURE;
}

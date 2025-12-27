/*
 * Wanabin - uname.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main(void) {
    struct utsname sn;

    if (uname(&sn) == -1) {
        perror("uname");
        return EXIT_FAILURE;
    }

    puts(sn.sysname);
    return EXIT_SUCCESS;
}

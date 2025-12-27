/*
 * Wanabin - whoami.c
 * Copyright (c) 2025 Satamaka
 */

/* Becoming tired. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>

int main(void) {
    uid_t uid = geteuid();
    struct passwd *pw = getpwuid(uid);

    if (pw == NULL) {
        fprintf(stderr, "whoami: cannot find name for user ID %u\n", (unsigned int)uid);
        return EXIT_FAILURE;
    }

    puts(pw->pw_name);
    return EXIT_SUCCESS;
}
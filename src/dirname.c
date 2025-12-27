/*
 * Wanabin - dirname.c
 * Copyright (c) 2025 Satamaka
 */

/* Whoops, I added too many comments. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "usage: dirname path\n");
        return EXIT_FAILURE;
    }

    const char *path = argv[1];
    const char *end, *slash;

    /* Find the end of the string */
    end = path + strlen(path);

    /* Strip trailing slashes, but keep at least one character */
    while (end > path + 1 && end[-1] == '/')
        end--;

    /* Find the last slash before the trailing slashes we skipped */
    slash = end;
    while (slash > path && slash[-1] != '/')
        slash--;

    /* Handle multiple slashes before the component (e.g., //usr -> /) */
    const char *root = slash;
    while (root > path + 1 && root[-1] == '/')
        root--;

    /* 
     * If no slash remains, the directory is ".".
     * If slashes remain at the start, the directory is "/".
     * Otherwise, the directory is the substring before the last slash.
     */
    if (slash == path) {
        printf("%s\n", *path == '/' ? "/" : ".");
    } else {
        /* Use precision to print only the required part without modifying path */
        printf("%.*s\n", (int)(root - path), path);
    }

    return EXIT_SUCCESS;
}

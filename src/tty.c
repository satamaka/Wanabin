/*
 * Wanabin - tty.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int s_flag = 0;
    int opt;

    while ((opt = getopt(argc, argv, "s")) != -1) {
        switch (opt) {
            case 's':
                s_flag = 1;
                break;
            default:
                return 2; 
        }
    }

    char *t = ttyname(STDIN_FILENO);

    if (!s_flag) {
        puts(t ? t : "not a tty");
    }

    return t ? EXIT_SUCCESS : EXIT_FAILURE;
}
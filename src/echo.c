/*
 * wanabin - echo.c
 * Copyright (c) 2025 Satamaka
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 1;
    int newline = 1;

    while(i < argc && argv[i][0] == '-' && argv[i][1] == 'n' && argv[i][2] == '\0') {
        newline = 0;
        i++;
    }

    for (; i < argc; i++) {
        fputs(argv[i], stdout);
        if (i < argc - 1)
            putchar(' ');
    }
    
    if(newline) 
        putchar('\n');

    return EXIT_SUCCESS;
}
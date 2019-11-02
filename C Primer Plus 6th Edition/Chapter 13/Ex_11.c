/*
    Write a program that takes two command-line arguments. The first is a string; the
        second is the name of a file. The program should then search the file, printing all lines
        containing the string. Because this task is line oriented rather than character oriented,
        use fgets() instead of getc() . Use the standard C library function strstr() (briefly
        described in exercise 7 of Chapter 11 ) to search each line for the string. Assume no lines
        are longer than 255 characters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 256


int main(int argc, char **argv){
    if(argc != 3){
        fprintf(stderr, "Not enough args program takes [string][file]\n");
        exit(EXIT_FAILURE);
    }

    FILE *pf;
    if(!(pf = fopen(argv[2], "r"))){
        fprintf(stderr, "Unable to Open File [%s]\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char line[LEN];
    while(fgets(line, LEN, pf)){
        if(strstr(line, argv[1])){
            fputs(line, stdout);
        }
    }
    fclose(pf);

    return 0;
}
/*
    Write a file-copy program that takes the original filename and the copy file from the
        command line. Use standard I/O and the binary mode, if possible.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 80


int main(int argc, char **argv){
    if(argc != 3){
        fputs("Not enough arguments, program takes source and destination of copy file\n",
            stderr);
        exit(EXIT_FAILURE);
    }

    FILE *psrc,
        *pdest;

    if(!(psrc = fopen(argv[1], "rb+"))){
        fprintf(stderr, "Cannot open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if(!(pdest = fopen(argv[2], "wb+"))){
        fprintf(stderr, "Cannot open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char str[MAXLEN];
    while(!feof(psrc)){
        if(fgets(str, MAXLEN, psrc)){
            fputs(str, pdest);
        }
    }

        
    fclose(psrc);
    fclose(pdest);

    return 0;
}
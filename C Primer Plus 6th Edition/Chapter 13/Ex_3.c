/*
    Write a file copy program that prompts the user to enter the name of a text file to act as
        the source file and the name of an output file. The program should use the toupper()
        function from ctype.h to convert all text to uppercase as it’s written to the output file.
        Use standard I/O and the text mode.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXLEN 80


int main(void){
    char src[MAXLEN],
        dest[MAXLEN];
    
    printf("Enter source file name: ");
    fgets(src, MAXLEN, stdin);
    src[strlen(src)-1] = '\0';
    printf("Enter destination file name: ");
    fgets(dest, MAXLEN, stdin);
    dest[strlen(dest)-1] = '\0';

    FILE *psrc,
        *pdest;

    if(!(psrc = fopen(src, "rb+"))){
        fprintf(stderr, "Cannot open files %s\n", src);
        exit(EXIT_FAILURE);
    }
    if(!(pdest = fopen(dest, "wb+"))){
        fprintf(stderr, "Cannot open files %s\n", dest);
        exit(EXIT_FAILURE);
    }

    char str[MAXLEN];
    while(!feof(psrc)){
        if(fgets(str, MAXLEN, psrc)){
            for(int i = 0; i < strlen(str); ++i){
                str[i] = toupper(str[i]);
            }
            fputs(str, pdest);
        }
    }

        
    fclose(psrc);
    fclose(pdest);

    return 0;
}
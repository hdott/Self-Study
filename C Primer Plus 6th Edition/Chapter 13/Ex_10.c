/*
    Write a program that opens a text file whose name is obtained interactively. Set up a
        loop that asks the user to enter a file position. The program then should print the part of
        the file starting at that position and proceed to the next newline character. Let negative
        or nonnumeric input terminate the user-input loop.
*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 100


int main(void){
    char str[LEN];
    printf("Enter text file name: ");
    scanf("%s", str);

    FILE *pf;
    if(!(pf = fopen(str, "r"))){
        fprintf(stderr, "Error openning file %d\n", str);
        exit(EXIT_FAILURE);
    }

    printf("Enter a number for location: ");
    int loc;
    while(scanf("%d", &loc) == 1){
        fseek(pf, loc, SEEK_SET);
        char ch;
        while((ch = fgetc(pf)) != '\n'){
            putchar(ch);
        }       
        putchar('\n'); 

        printf("Enter a number for location: ");
    }
    fclose(pf);
    

    return 0;
}
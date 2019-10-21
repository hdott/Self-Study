/*
    Write a program that reads characters from the standard input to EOF. For each
        character, have the program report whether it is a letter. If it is a letter,
        also report its numerical location in the alphabet. For example, c and C would
        both be letter 3. Incorporate a function that takes a character as an argument
        and returns the numerical location if the character is a letter and that returns
        -1 otherwise.
*/

#include <stdio.h>

int isLetter(char);


int main(void){
    int ch;

    while((ch = getchar()) != EOF){
        if(isLetter(ch) >= 0){
            printf("[%c,%d] ", ch, isLetter(ch));
        }
    }
    putchar('\n');


    return 0;
}

int isLetter(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch - 'a';
    }

    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A';
    }

    return -1;
}
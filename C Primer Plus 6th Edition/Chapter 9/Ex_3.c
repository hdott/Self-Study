/*
    Write a function that takes three arguments: a character and two integers. The
        character is to be printed. The first integer specifies the number of times
        that the character is to be printed on a line, and the second integer specifies
        the number of lines that are to be printed. Write a program that makes use
        of this function.
*/

#include <stdio.h>

void printChar(char, int, int);


int main(void){
    printChar('A', 10, 20);


    return 0;
}

void printChar(char ch, int collumns, int rows){
    for(int i=0; i<rows; ++i){
        for(int j=0; j<collumns; ++j){
            putchar(ch);
        }
        putchar('\n');
    }
}
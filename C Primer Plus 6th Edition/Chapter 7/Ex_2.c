/*
    Write a program that reads input until encountering # . Have the program print each
        input character and its ASCII decimal code. Print eight character-code pairs per line.
        Suggestion: Use a character count and the modulus operator ( % ) to print a newline
        character for every eight cycles of the loop.
*/

#include <stdio.h>


int main(void){
    int count = 0;
    char ch;

    while((ch = getchar()) != '#'){
        if(!(++count % 8)){
            putchar('\n');
        }
        printf("[%c,%d]", ch, ch);
    }


    return 0;
}
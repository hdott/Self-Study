/*
    Write a program that reads input until encountering the # character and then reports
        the number of spaces read, the number of newline characters read, and the number of all
        other characters read.
*/

#include <stdio.h>


int main(void){
    int spaces = 0,
        newlines = 0,
        others = 0;
    char ch;

    while((ch = getchar()) != '#'){
        if(ch == ' '){
            spaces++;
        } else if(ch == '\n'){
            newlines++;
        } else{
            others++;
        }
    }
    
    printf("spaces = %d\n", spaces);
    printf("newlines = %d\n", newlines);
    printf("others = %d\n", others);


    return 0;
}
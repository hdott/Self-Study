/*
    Design and test a function that fetches the next n characters from input (including
        blanks, tabs, and newlines), storing the results in an array whose address is passed as an
        argument.
*/

#include <stdio.h>

char* getChars(char *str, int n);


int main(void){
    char str[20];

    puts(getChars(str, 20));


    return 0;
}

char* getChars(char *str, int n){
    int ch,
        i = 0;
    for(; i<n-1 && (ch = getchar()) != '\n' && ch != EOF; ++i){
        *(str+i) = ch;
    }
    *(str+i) = '\0';

    return str;
}
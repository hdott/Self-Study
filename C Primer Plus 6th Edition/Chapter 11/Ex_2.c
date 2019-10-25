/*
    Modify and test the function in exercise 1 so that it stops after n characters or after the
        first blank, tab, or newline, whichever comes first. (Don’t just use scanf() .)
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
    for(; i<n-1 && (ch = getchar()) != '\n' && ch != EOF &&
            ch != ' ' && ch != '\t'; ++i){
        *(str+i) = ch;
    }
    *(str+i) = '\0';

    return str;
}
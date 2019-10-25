/*
    Write a function that takes a string as an argument and removes the spaces from the
        string. Test it in a program that uses a loop to read lines until you enter an empty line.
        The program should apply the function to each input string and display the result.
*/

#include <stdio.h>

char* getChars(char *str, int n);
char* removeSpaces(char *str);


int main(void){
    char str[40];

    getChars(str, 40);
    puts(removeSpaces(str));


    return 0;
}

char* getChars(char *str, int n){
    int ch,
        i = 0;
    for(; i<n-1 && (ch = getchar()) != '\n' && ch != EOF; ++i){
        *(str+i) = (char)ch;
    }
    *(str+i) = '\0';

    return str;
}

char* removeSpaces(char *str){
    int i=0,
        j=0;

    while(*(str+i) != '\0'){
        if(*(str+i) == ' ' || *(str+i) == '\t'){
            ++i;
            continue;
        }
        *(str+j) = *(str+i);
        // puts(str);
        ++i;
        ++j;
    }
    *(str+j) = '\0';

    return str;
}
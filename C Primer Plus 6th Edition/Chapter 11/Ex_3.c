/*
    Design and test a function that reads the first word from a line of input into an array and
        discards the rest of the line. It should skip over leading whitespace. Define a word as a
        sequence of characters with no blanks, tabs, or newlines in it. Use getchar() , not
*/

#include <stdio.h>

char* getWord(char *word, int n);


int main(void){
    char word[20];

    puts(getWord(word, 20));


    return 0;
}

char* getWord(char *word, int n){
    int ch,
        i = 0;
    for(; i<n-1 && (ch = getchar()) != '\n' && ch != EOF &&
            ch != ' ' && ch != '\t'; ++i){
        *(word+i) = ch;
    }
    *(word+i) = '\0';

    while((ch = getchar()) != '\n'){
        continue;
    }


    return word;
}
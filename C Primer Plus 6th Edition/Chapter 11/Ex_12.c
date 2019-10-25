/*
    Write a program that reads input up to EOF and reports the number of words, the
        number of uppercase letters, the number of lowercase letters, the number of punctuation
        characters, and the number of digits. Use the ctype.h family of functions.
*/

#include <stdio.h>
#include <ctype.h>


int main(void){
    char ch;
    int words=0,
        upLetter=0,
        lowLetter=0,
        punct=0,
        digits=0;

    while((ch = getchar()) != EOF){
        if(isupper(ch)){
            upLetter++;
            continue;
        }
        if(islower(ch)){
            lowLetter++;
            continue;
        }
        if(isdigit(ch)){
            digits++;
            continue;
        }
        if(ispunct(ch)){
            punct++;
            words++;
            continue;
        }
        if(isspace(ch)){
            words++;
        }
    }

    printf("word->%d\n", words);
    printf("upLetter->%d\n", upLetter);
    printf("lowLetter->%d\n", lowLetter);
    printf("punct->%d\n", punct);
    printf("digits->%d\n", digits);


    return 0;
}


/*
    Write a program that reads a single word into a character array and then prints
        the word backwards. Hint: Use strlen() to compute the index of the last 
        character in the array.
*/

#include <stdio.h>
#include <string.h>


int main(void){
    const int MAXL = 40;

    printf("Enter a single word: ");
    char word[MAXL];
    scanf("%s", word);

    printf("The word backwards is: ");
    for(int i=strlen(word)-1; i>=0; --i){
        putchar(word[i]);
    }
    putchar('\n');


    return 0;
}
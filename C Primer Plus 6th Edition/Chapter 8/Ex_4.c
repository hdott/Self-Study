/*
    Write a program that reads input as a stream of characters until encountering EOF . Have
        it report the average number of letters per word. Don’t count whitespace as being letters
        in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that
        now. (If you do want to worry about it, consider using the ispunct() function from the
        ctype.h family.)
*/

#include <stdio.h>
#include <ctype.h>


int main(void){
    int word_count = 0,
        char_count = 0,
        ch;
    
    while((ch = getchar()) != EOF){
        if(isspace(ch) || ispunct(ch)){
            word_count++;
        } else{
            char_count++;
        }
    }

    printf("The average characters per word is: %.2lf\n",
            (double)char_count / word_count);


    return 0;
}
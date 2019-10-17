/*
    Using if else statements, write a program that reads input up to # , replaces each period
        with an exclamation mark, replaces each exclamation mark initially present with two
        exclamation marks, and reports at the end the number of substitutions it has made.
*/

#include <stdio.h>


int main(void){
    int nr_of_sub = 0;
    char ch;

    while((ch = getchar()) != '#'){
        if(ch == '.'){
            putchar('!');
            nr_of_sub++;
        } else if(ch == '!'){
            putchar(ch);
            putchar('!');
            nr_of_sub++;
        } else{
            putchar(ch);
        }
    }
    printf("Nr of substitutions [%d]\n", nr_of_sub);

    
    return 0;
}
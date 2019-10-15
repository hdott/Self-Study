/*
    Use nested loops to produce the following patter:
    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU
*/

#include <stdio.h>


int main(void){
    for(int i=1, ch=65; i<=6; ++i){
        for(int j=1; j<=i; ++j, ++ch){
            putchar(ch);
        }
        putchar('\n');
    }
    

    return 0;
}
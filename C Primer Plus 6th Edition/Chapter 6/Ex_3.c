/*
    Use nested loops to produce the following pattern:
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA
*/

#include <stdio.h>


int main(void){
    for(int i=1; i<=6; ++i){
        for(int j=1, ch=70; j<=i; ++j, --ch){
            putchar(ch);
        }
        putchar('\n');
    }
    

    return 0;
}
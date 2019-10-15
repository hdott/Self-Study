/*
    Use nested loops to produce the following pattern:
    $
    $$
    $$$
    $$$$
    $$$$$
*/

#include <stdio.h>


int main(void){
    for(int i=1; i<=5; ++i){
        for(int j=1; j<=i; ++j){
            putchar('$');
        }
        putchar('\n');
    }
    

    return 0;
}
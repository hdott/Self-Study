/*
    Redo Ex_4.c using a switch .
*/

#include <stdio.h>


int main(void){
    int nr_of_sub = 0;
    char ch;

    while((ch = getchar()) != '#'){
        switch(ch){
            case '.':
                putchar('!');
                nr_of_sub++;
                break;
            case '!':
                putchar(ch);
                putchar('!');
                nr_of_sub++;
                break;
            default:
                putchar(ch);
                break;
        }
    }
    printf("Nr of substitutions [%d]\n", nr_of_sub);

    
    return 0;
}
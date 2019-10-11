/*
    Write a program that creates an integer variable called toes. Have the program
        set toes to 10. Also have the program calculate what twice toes is an what
        toes squared is. Tha program should print all three values, identifying them.
*/

#include <stdio.h>


int main(void){
    int toes = 10,
        twice_toes = toes * 2,
        toes_squared = toes * toes;

    printf("%d -- %d -- %d\n", toes, twice_toes, toes_squared);

    return 0;
}
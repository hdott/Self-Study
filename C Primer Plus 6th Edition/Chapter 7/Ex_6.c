/*
    Write a program that reads input up to # and reports the number of times that the
        sequence ei occurs.
*/

#include <stdio.h>


int main(void){
    int count = 0;
    char ch,
        _tmp = 'a';

    while((ch = getchar()) != '#'){
        if(_tmp == 'e' && ch == 'i'){
            count++;
        }

        _tmp = ch;
    }

    printf("[ei] sequence ocurred [%d] times\n", count);


    return 0;
}
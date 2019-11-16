/*
    Write a function that takes two int arguments: a value and a bit position. Have the
        function return 1 if that particular bit position is 1, and have it return 0 otherwise. Test
        the function in a program.
*/

#include <stdio.h>
#include <stdbool.h>

bool isOn(int x, int _pos_);


int main(void){
    int x = 2,
        pos = 1;
    printf("%d, %d -> %d\n", x, pos, isOn(x, pos));


    return 0;
}

bool isOn(int x, int _pos_){
    return (x & (1 << _pos_));
}
/*
    Write a function that takes an int argument and returns the number of “on” bits in the
        argument. Test the function in a program.
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int bits_on(int x);


int main(int argc, char **argv){
    if(argc == 2){
        int x = strtol(argv[1], NULL, 10);
        printf("Nr. of bits in %d -> %d\n", x, bits_on(x));
    }


    return 0;
}

int bits_on(int x){
    int bo = 0,
        size = sizeof(x) * CHAR_BIT;

    for(int i = 0; i < size; ++i){
        if(x & (1 << i)){
            bo++;
        }
    }

    return bo;
}
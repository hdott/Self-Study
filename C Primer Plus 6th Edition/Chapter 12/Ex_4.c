/*
    Write and test in a loop a function that returns the number of times it has
        been called.
*/

#include <stdio.h>

int called(void);


int main(void){
    for(int i=0; i< 1000; ++i){
        called();
    }

    printf("Times called -> %d\n", called());
    

    return 0;
}

int called(void){
    static int nr;
    
    return ++nr;
}
/*
    Write and test a Fibonacci() function that uses a loop instead of recursion to
        calculate Fibonacci numbers.
*/

#include <stdio.h>

long long Fibonacci(int);


int main(void){
    for(int i=1; i<10; ++i)
        printf("The %dth Fibonacci nr is: %ld\n", i, Fibonacci(i));


    return 0;
}

long long Fibonacci(int nr){
    if(nr == 1 || nr == 2){
        return 1;
    }
    int nr1 = 1,
        nr2 = 1,
        nr3 = 1;

    for(int i=2; i<nr; ++i){
        nr1 = nr2;
        nr2 = nr3;
        nr3 = nr2 + nr1;
    }
    
    return nr3;
}
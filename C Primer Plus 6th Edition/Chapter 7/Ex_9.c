/*
    Write a program that accepts a positive integer as input and then displays all the prime
        numbers smaller than or equal to that number.
*/

#include <stdio.h>

int isPrime(int);


int main(void){
    int nr;

    printf("Enter a positive integer: ");
    scanf("%d", &nr);
    while(nr < 0){
        printf("The number is not a positive integer!\n");
        printf("Enter a positive integer: ");
        scanf("%d", &nr);
    }

    for(int i=1; i<=nr; ++i){
        if(isPrime(i)){
            printf("%d ", i);
        }
    }
    putchar('\n');


    return 0;
}

int isPrime(int nr){
    if(nr == 1 || nr == 2){
        return 1;
    }

    for(int i=2; i<nr; ++i){
        if(!(nr%i)){
            return 0;
        }
    }

    return 1;
}
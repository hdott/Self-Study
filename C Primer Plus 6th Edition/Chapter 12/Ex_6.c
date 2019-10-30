/*
    Write a program that generates 1,000 random numbers in the range 1–10. Don’t save or
        print the numbers, but do print how many times each number was produced. Have the
        program do this for 10 different seed values. Do the numbers appear in equal amounts?
        You can use the functions from this chapter or the ANSI C rand() and srand()
        functions, which follow the same format that our functions do. This is one way to
        examine the randomness of a particular random-number generator.
*/

#include <stdio.h>
#include <stdlib.h>

void getRandCount(int []);
void printArr(int []);
void setArr0(int []);

const int MAX = 10;


int main(void){
    int arr[MAX];
    int seed;
    setArr0(arr);

    for(int i = 0; i < MAX; ++i){
        printf("Enter seed: ");
            scanf("%u", &seed);
        srand(seed);
        getRandCount(arr);
        printArr(arr);
        setArr0(arr);
    }


    return 0;
}

void getRandCount(int arr[]){
    for(int i = 0; i < 1000; ++i){
        int _tmp = rand() % 10;
        arr[_tmp]++;
    }
}

void printArr(int arr[]){
    for(int i = 0; i < MAX; ++i){
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

void setArr0(int arr[]){
    for(int i = 0; i < MAX; ++i){
        arr[i] = 0;
    }
}
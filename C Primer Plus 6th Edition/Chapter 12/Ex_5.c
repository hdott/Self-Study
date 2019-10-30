/*
    Write a program that generates a list of 100 random numbers in the range 1–10
        in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11 ,
        “Character Strings and String Functions,” to type int . In this case, just sort the numbers
        themselves.)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom10(void);
void sortArr(int []);
void printArr(int  []);

const int MAX = 100;


int main(void){
    srand((unsigned) time(0));

    int arr[MAX];

    for(int i = 0; i < MAX; ++i){
        arr[i] = getRandom10();
    }
    sortArr(arr);
    printArr(arr);
    

    return 0;
}

int getRandom10(void){
    return random() % 10 + 1;
}

void sortArr(int arr[]){
    for(int i = 0; i < MAX-1; ++i){
        for(int j = i+1; j < MAX; ++j){
            if(arr[i] < arr[j]){
                int _tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = _tmp;
            }
        }
    }
}

void printArr(int  arr[]){
    for(int i = 0; i < MAX; ++i){
        printf("%d ", arr[i]);
    }
    putchar('\n');
}
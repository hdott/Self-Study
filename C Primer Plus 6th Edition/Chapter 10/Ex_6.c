/*
    Write a function that reverses the contents of an array of double and test it
        in a simple program.
*/
#include <stdio.h>

void reverseArr(double arr[], int size);


int main(void){
    double arr[5] = {1.2, 3.4, 5.2, 2.3, 4.3};
    
    reverseArr(arr, 5);
    printf("reversed arr -> ");
    for(int i=0; i<5; ++i){
        printf("%lg ", arr[i]);
    }
    putchar('\n');


    return 0;
}

void reverseArr(double arr[], int size){
    for(int i=0, j=size-1; i<size/2; ++i, --j){
        double _tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = _tmp;
    }
}
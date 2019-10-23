/*
    Write a function that returns the largest value stored in an array-of-int. Test
        the function in a simple program.
*/

#include <stdio.h>

int largest(int arr[], int size);


int main(void){
    int arr[5] = {1,2,3,4,5};
    printf("largest -> %d\n", largest(arr, 5));


    return 0;
}

int largest(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}
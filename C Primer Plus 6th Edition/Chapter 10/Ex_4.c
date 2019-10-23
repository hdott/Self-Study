/*
    Write a function that returns the index to the largest value stored in an
        array-of-double. Test the function in a simple program.
*/

#include <stdio.h>

int indexToLargest(double arr[], int size);


int main(void){
    double arr[5] = {1.2, 3.4, 5.2, 2.3, 4.3};
    printf("index of largest -> %d\n", indexToLargest(arr, 5));


    return 0;
}

int indexToLargest(double arr[], int size){
    int index = 0;
    double max = arr[0];
    for(int i=1; i<size; ++i){
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }

    return index;
}
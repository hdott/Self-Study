/*
    Write a function that returns the difference between the largest and smallest
        elements of an array-of-double. Test the function in a simple program.
*/

#include <stdio.h>

double differenceSmallestLargest(double arr[], int size);


int main(void){
    double arr[5] = {1.2, 3.4, 5.2, 2.3, 4.3};
    printf("difference between largest and smallest -> %lg\n",
            differenceSmallestLargest(arr, 5));


    return 0;
}

double differenceSmallestLargest(double arr[], int size){
    double min, max;
    min = max = arr[0];
    for(int i=1; i<size; ++i){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    return max-min;
}
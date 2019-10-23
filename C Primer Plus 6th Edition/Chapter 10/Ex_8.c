/*
    Use a copy function from Programming Exercise 2 to copy the third through fifth
        elements of a seven-element array into a three-element array. The function itself need
        not be altered; just choose the right actual arguments. (The actual arguments need not be
        an array name and array size. They only have to be the address of an array element and a
        number of elements to be processed.)
*/

#include <stdio.h>

void copy_ptr(double *target, double *source, int size);


int main(void){
    double arr[7] = {1,2,3,4,5,6,7};
    double arr3[3];

    copy_ptr(arr3, arr+2, 3);
    for(int i=0; i<3; ++i){
        printf("%lg ", arr3[i]);
    }
    putchar('\n');


    return 0;
}

void copy_ptr(double *target, double *source, int size){
    for(int i=0; target+i<target+size; ++i){
        *(target+i) = *(source+i);
    }
}
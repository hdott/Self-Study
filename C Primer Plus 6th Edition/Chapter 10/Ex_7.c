/*
    Write a program that initializes a two-dimensional array-of- double and uses one of the
        copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a
        two-dimensional array is an array of arrays, a one-dimensional copy function can be used
        with each subarray.)
*/

#include <stdio.h>
#define size  5

void copy_arr(double target[][size], double source[][size], int row, int col);


int main(void){
    double arr[size][size] = {{1.2, 3.4, 5.2, 2.3, 4.3},
                            {1.2, 3.4, 5.2, 2.3, 4.3},
                            {1.2, 3.4, 5.2, 2.3, 4.3},
                            {1.2, 3.4, 5.2, 2.3, 4.3},
                            {1.2, 3.4, 5.2, 2.3, 4.3}};
    double arr2[size][size];

    for(int i=0; i<size; ++i){
        copy_arr(arr2, arr, i, size);
    }

    for(int i=0; i<size; ++i){
        for(int j=0; j<size; ++j){
            printf("%lg ", arr2[i][j]);
        }
        putchar('\n');
    }
    

    return 0;
}

void copy_arr(double target[][size], double source[][size], int row, int col){
    for(int i=0; i<col; ++i){
        target[row][i] = source[row][i];
    }
}
/*
    Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLA-
        based function to copy it to a second two-dimensional array. Also provide a VLA-based
        function to display the contents of the two arrays. The two functions should be capable,
        in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable
        compiler, use the traditional C approach of functions that can process an N×5 array).
*/

#include <stdio.h>

void copyArr(int row, int col, double target[row][col], double source[row][col]);
void printArr(int row, int col, double arX2[row][col]);


int main(void){
    double arr[3][5] = {{1.2, 2.3, 3.4, 4.5, 5.6},
                        {1.2, 2.3, 3.4, 4.5, 5.6},
                        {1.2, 2.3, 3.4, 4.5, 5.6}};

    int row = 3,
        col = 5;

    double arr2[row][col];
    copyArr(row, col, arr2, arr);
    printArr(row, col, arr2);


    return 0;
}

void copyArr(int row, int col, double target[row][col], double source[row][col]){
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            target[i][j] = source[i][j];
        }
    }
}

void printArr(int row, int col, double arX2[row][col]){
    for(int i=0; i<row; ++i){
        for (int j=0; j<col; ++j){
            printf("%lg ", arX2[i][j]);
        }
        putchar('\n');
    }
}
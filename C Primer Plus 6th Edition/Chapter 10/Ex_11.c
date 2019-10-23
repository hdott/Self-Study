/*
    Write a program that declares a 3×5 array of int and initializes it to some values of
        your choice. Have the program print the values, double all the values, and then display
        the new values. Write a function to do the displaying and a second function to do the
        doubling. Have the functions take the array name and the number of rows as arguments.
*/

#include <stdio.h>

void printArr(int row, int col, int arX2[row][col]);
void doubleValuesArX2(int row, int col, int arX2[row][col]);


int main(void){
    int ar[3][5] = {{1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15}};

    printArr(3, 5, ar);
    doubleValuesArX2(3, 5, ar);
    printArr(3, 5, ar);


    return 0;
}

void printArr(int row, int col, int arX2[row][col]){
    for(int i=0; i<row; ++i){
        for (int j=0; j<col; ++j){
            printf("%d ", arX2[i][j]);
        }
        putchar('\n');
    }
}

void doubleValuesArX2(int row, int col, int arX2[row][col]){
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            arX2[i][j] *= 2;
        }
    }
}

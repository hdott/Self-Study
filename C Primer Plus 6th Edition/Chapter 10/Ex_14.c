/*
    Do Ex_13.c, but use variable-length array function parameters.
*/

#include <stdio.h>

void getAr3X5(int row, int col, double ar[row][col]);
double averageRow(int row, int col, double ar[row][col]);
double averageAr3X5(int row, int col, double ar[row][col]);
double getMaxAr3X5(int row, int col, double ar[row][col]);


int main(void){
    int row = 3,
        col = 5;
    double ar[row][col];
    getAr3X5(row, col, ar);

    for(int i=0; i<row; ++i){
        printf("average of row[%d] -> %lg\n", i+1, averageRow(i, col, ar));
    }

    printf("average of arr3X5 -> %lg\n", averageAr3X5(row, col ,ar));

    printf("max of arr3X5 -> %lg\n", getMaxAr3X5(row, col, ar));

    
    return 0;
}

void getAr3X5(int row, int col, double ar[row][col]){
    printf("Enter 3 sets of 5 double numbers:\n");
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            printf("[%d][%d] = ", i+1, j+1);
            scanf("%lf", &ar[i][j]);
        }
    }
}

double averageRow(int row, int col, double ar[row][col]){
    double avr = 0;
    for(int i=0; i<col; ++i){
        avr += ar[row][i];
    }

    return avr / col;
}

double averageAr3X5(int row, int col, double ar[row][col]){
    double avr = 0;
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            avr += ar[i][j];
        }
    }

    return avr / (row*col);
}

double getMaxAr3X5(int row, int col, double ar[row][col]){
    double max = ar[0][0];
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            if(max > ar[i][j]){
                max = ar[i][j];
            }
        }
    }

    return max;
}
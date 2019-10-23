/*
    Write a program that prompts the user to enter three sets of five double numbers each.
        (You may assume the user responds correctly and doesn’t enter non-numeric data.) The
        program should accomplish all of the following:
        a. Store the information in a 3×5 array.
        b. Compute the average of each set of five values.
        c. Compute the average of all the values.
        d. Determine the largest value of the 15 values.
        e. Report the results.
        Each major task should be handled by a separate function using the traditional C
        approach to handling arrays. Accomplish task “b” by using a function that computes
        and returns the average of a one-dimensional array; use a loop to call this function three
        times. The other tasks should take the entire array as an argument, and the functions
        performing tasks “c” and “d” should return the answer to the calling program.
*/

#include <stdio.h>
#define ROW 3
#define COL 5

void getAr3X5(double ar[][COL]);
double averageRow(double ar[][COL], int row);
double averageAr3X5(double ar[][COL]);
double getMaxAr3X5(double ar[][COL]);


int main(void){
    double ar[ROW][COL];
    getAr3X5(ar);

    for(int i=0; i<ROW; ++i){
        printf("average of row[%d] -> %lg\n", i+1, averageRow(ar, i));
    }

    printf("average of arr3X5 -> %lg\n", averageAr3X5(ar));

    printf("max of arr3X5 -> %lg\n", getMaxAr3X5(ar));

    
    return 0;
}

void getAr3X5(double ar[][COL]){
    printf("Enter 3 sets of 5 double numbers:\n");
    for(int i=0; i<ROW; ++i){
        for(int j=0; j<COL; ++j){
            printf("[%d][%d] = ", i+1, j+1);
            scanf("%lf", &ar[i][j]);
        }
    }
}

double averageRow(double ar[][COL], int row){
    double avr = 0;
    for(int i=0; i<COL; ++i){
        avr += ar[row][i];
    }

    return avr / COL;
}

double averageAr3X5(double ar[][COL]){
    double avr = 0;
    for(int i=0; i<ROW; ++i){
        for(int j=0; j<COL; ++j){
            avr += ar[i][j];
        }
    }

    return avr / (ROW*COL);
}

double getMaxAr3X5(double ar[][COL]){
    double max = ar[0][0];
    for(int i=0; i<ROW; ++i){
        for(int j=0; j<COL; ++j){
            if(max > ar[i][j]){
                max = ar[i][j];
            }
        }
    }

    return max;
}
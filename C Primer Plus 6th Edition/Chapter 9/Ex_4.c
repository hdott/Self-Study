/*
    The harmonic mean of two numbers is obtained by taking the inverses of the two
        numbers, averaging them, and taking the inverse of the result. Write a function
        that takes two double arguments and returns the harmonic mean of the two numbers.
*/

#include <stdio.h>

double harmonicMeanOfTwoDoubles(double, double);


int main(void){
    printf("Harmonic Mean of (%lg,%lg) -> %lg\n", 5.0, 6.2, harmonicMeanOfTwoDoubles(5,6));


    return 0;
}

double harmonicMeanOfTwoDoubles(double x, double y){
    double _tmp = (1/x + 1/y) / 2;

    return 1/_tmp;
}
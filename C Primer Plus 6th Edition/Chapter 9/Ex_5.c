/*
    Write and test a function called larger_of() that replaces the contents of two
        double variables with the maximum of the two values. For example, larger_of(x,y)
        would reset both x and y to the larger of the two.
*/

#include <stdio.h>

void larger_of(double *, double *);


int main(void){
    double x = 5.5,
            y = 6.432;
    printf("Larger of (%lg,%lg) is:\n", x, y);
    larger_of(&x, &y);
    printf("(%lg,%lg)\n", x, y);


    return 0;
}

void larger_of(double *x, double *y){
    if(*x > *y){
        *y = *x;
    } else{
        *x = *y;
    }
}
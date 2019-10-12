/*
    Write a program that sets a type double variable to 1.0/3.0 and a type float
        variable to 1.0/3.0. Display each result three times - once showing four
        digits to the right of the decimal, once showing 12 digits to the right
        of the decimal, and once showing 16 digits to the right of the decimal.
        Also have the program include float.h and display the values of FLT_DIG
        and DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?
*/

#include <stdio.h>
#include <float.h>


int main(void){
    double var_double = 1.0 / 3.0;
    float var_float = 1.0 / 3.0;

    printf("float - %.4f\ndouble - %.4lf\n", var_float, var_double);
    printf("float - %.12f\ndouble - %.12lf\n", var_float, var_double);
    printf("float - %.16f\ndouble - %.16lf\n", var_float, var_double);
    printf("FLT_DIG - %.4f\nDBL_DIG - %.4lf\n", FLT_DIG, DBL_DIG);
    printf("FLT_DIG - %.12f\nDBL_DIG - %.12lf\n", FLT_DIG, DBL_DIG);
    printf("FLT_DIG - %.16f\nDBL_DIG - %.16lf\n", FLT_DIG, DBL_DIG);

    return 0;
}
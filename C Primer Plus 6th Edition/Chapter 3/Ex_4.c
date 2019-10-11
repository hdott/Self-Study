/*
    Write a program that reads in a floating-point number and prints it first in
        decimal-point notation, then in exponential notation, and then, if your
        system supports it, p notation. Have the output use the following format:
    Enter a floating-point value: 64.25
    fixed-point notation: 64.2500000
    exponential notation: 6.425000e+01
    p notation: 0x1.01p+6
*/

#include <stdio.h>


int main(void){
    float value;

    printf("Enter a floating-point value: ");
    scanf("%f", &value);

    printf("fixed-point notation: %.6f\n", value);
    printf("exponential notation: %.6e\n", value);
    printf("p notation: %a\n", value);

    return 0;
}
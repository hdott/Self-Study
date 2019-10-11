/*
    There are 2.54 centimeters to the inch. Write a program that asks you to enter
        your height in inches and then displays your height in centimeters. Or, if
        if you prefer, ask for the height in centimeters and convert that to inches.
*/

#include <stdio.h>


int main(void){
    const float cm_in_inch = 2.54;
    float height_cm;

    printf("Enter your height in cm: ");
    scanf("%f", &height_cm);

    printf("Your height in inches is: %.2f\n", height_cm * cm_in_inch);

    return 0;
}
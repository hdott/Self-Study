/*
    Write a program that converts your age in years to days and diplays both values.
    At this point, don't worry about fractional years and leap years.
*/

#include <stdio.h>


int main(void){
    int age = 27,
        day_in_year = 365;
    
    int age_to_days = age * day_in_year;
    printf("Age in years [%d] and days [%d]\n", age, age_to_days);

    return 0;
}
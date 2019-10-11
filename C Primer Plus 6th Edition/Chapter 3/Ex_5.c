/*
    There are approximately 3.156 x 10^7 seconds in a year. Write a program that
        requests your age in years and then displays the equivalent number of
        seconds.
*/

#include <stdio.h>


int main(void){
    const long double seconds_in_year = 3.156e+7;
    int age;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    printf("[%d] years equals [%.3lle] seconds\n", age, (long double)age*seconds_in_year);

    return 0;
}
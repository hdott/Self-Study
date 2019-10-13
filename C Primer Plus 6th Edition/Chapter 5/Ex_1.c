/*
    Write a program that converts time in minutes to time in hours and minutes. Use
        #define or const to create a symbolic constant for 60. Use a while loop to
        allow the user to enter values repeatedly and terminate the loop if a value
        for the time is 0 or less is entered.
*/

#include <stdio.h>


int main(void){
    const int MININHOUR = 60;
    int input_minutes,
        minutes,
        hours;

    printf("Enter a time in minutes: ");
    scanf("%d", &input_minutes);
    while(input_minutes > 0){
        hours = input_minutes / MININHOUR;
        minutes = input_minutes % MININHOUR;

        printf("Time: %d:%d\n", hours, minutes);
        printf("Enter a time in minutes: ");
        scanf("%d", &input_minutes);
    }
    

    return 0;
}
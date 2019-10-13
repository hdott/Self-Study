/*
    Write a program that asks the user to enter the number of days and then converts
        that value to weeks and days. For example, it would convert 18 days to 2 weeks,
        4 days. Display the results in the following format:
    18 days are 2 weeks, 4 days.
        Use a while loop to allow the user to repeatedly enter day values; terminate
        the loop when the user enters a nonpositive value, such as 0 or -20.
*/

#include <stdio.h>


int main(void){
    const int DAYSINWEEK = 7;
    int input_days,
        weeks,
        days;

    printf("Enter a number of days: ");
    scanf("%d", &input_days);

    while(input_days > 0){
        weeks = input_days / DAYSINWEEK;
        days = input_days % DAYSINWEEK;

        printf("%d days are %d weeks, %d days\n", input_days, weeks, days);
        printf("Enter a number of days: ");
        scanf("%d", &input_days);
    }


    return 0;
}
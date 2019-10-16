/*
    Chuckie Lucky won a million dollars (after taxes), which he places in an account that
        earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a
        program that finds out how many years it takes for Chuckie to empty his account.
*/

#include <stdio.h>


int main(void){
    const double interest = 0.08,
                withdraw = 100000;

    double chuckie_lucky = 1000000;
    int year = 0;

    while(chuckie_lucky > 0){
        chuckie_lucky -= withdraw;
        chuckie_lucky += chuckie_lucky * interest;
        ++year;
    }

    printf("Years passed: %d\n", year);


    return 0;
}
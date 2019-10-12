/*
    Write a program that asks the user to enter the number of miles traveled and the
        number of agllons of gasoline consumed. It should then calculate and display
        the miles-per-gallon value, showing one place to the right of the decimal.
        Next, using the fact that one gallon is about 3.785 liters and one mile is
        about 1.609 km, it should convert the mile-per-gallon value to a 
        liters-per-100-km value, the usual European way of expressing fuel consumption,
        and display the result, showing one place to the right of the decimal. Note
        that the U.S. scheme measures the distance traveled per amount of fuel, whereas
        the European scheme measures the amount of fuel per distance. Use symbolic
        constants for the two conversion factors.
*/

#include <stdio.h>


int main(void){
    const double liters_in_gallon = 3.785,
                kms_in_mile = 1.609;
    double miles_traveled,
            gallons_consumed;

    printf("Enter the distance traveled in miles: ");
    scanf("%lf", &miles_traveled);
    printf("Enter the number of gallons consumed: ");
    scanf("%lf", &gallons_consumed);

    printf("Consumption in mpg is %.1lf\n", miles_traveled / gallons_consumed);

    // l/100km = 100 / ((mpg * 1.609) / 3.785)
    printf("Consumption in l/100km is %.1lf\n",
            100 / ((miles_traveled / gallons_consumed * kms_in_mile) / liters_in_gallon));
    

    return 0;
}
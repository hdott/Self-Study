/*
    Write a program that has main() call a user-defined function that takes a
        Celsius temperature value as an argument and then returns the equivalent 
        Fahrenheit value.
        Fahrenheit = 1.8 x degrees Celsius + 32.0
*/

#include <iostream>

double Celsius_to_Fahrenheit(double degrees);


int main(void){
    double degrees_in_Celsius,
            degrees_in_Fahrenheit;

    std::cout << "Enter temperature in Celsius degrees: ";
    std::cin >> degrees_in_Celsius;

    std::cout << degrees_in_Celsius << " Celsius = "
                << Celsius_to_Fahrenheit(degrees_in_Celsius) << " Fahrenheit" 
                << std::endl;

    return 0;
}

double Celsius_to_Fahrenheit(double degrees){
    return (1.8 * degrees + 32.0);
}
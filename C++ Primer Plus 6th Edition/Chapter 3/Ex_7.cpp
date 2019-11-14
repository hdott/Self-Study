/*
    Write a program that asks you to enter an automobile gasoline consumption figure
        in the European style (l/100km) and converts to the U.S. style of miles per
        gallon. Note that in addition to using different units of measurement, the
        U.S. approach (distance / fuel) is the inverse of the European approach
        (fuel / distance). Note that 100km is 62.14 miles, and 1 gallon is 3.875
        liters. Thus, 19mpg is about 12.4 l/100km, and 27mpg is about 8.7 l/100km.
*/

#include <iostream>


int main(void){
    double auto_gas_consumption_EU;

    std::cout << "Enter the European automobile gasoline consuption: ";
    std::cin >> auto_gas_consumption_EU;

    const double km_in_mile{100.0 / 62.14},
                litres_in_gallon{3.875};

    std::cout << auto_gas_consumption_EU << " l/100km = "
            // mpg = (3.785 * (100 / l per 100km)) / 1.609
            << (litres_in_gallon * (100 / auto_gas_consumption_EU)) / km_in_mile
            << "mpg" << std::endl;

    return 0;
}
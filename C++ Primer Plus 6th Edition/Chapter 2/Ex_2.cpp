/*
    Write a program that asks for a distance in furlongs and converts it to yards.
    1 furlong = 220 yards
*/

#include <iostream>


int main(void){
    int furlong,
        yards_in_furlong = 220;

    std::cout << "Enter a distance in furlongs: ";
    std::cin >> furlong;

    std::cout << "The distance in yards is: " << furlong*yards_in_furlong << std::endl;

    return 0;
}
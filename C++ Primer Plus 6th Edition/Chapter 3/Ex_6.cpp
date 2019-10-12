/*
    Write a program that asks how many minles you have driven and how many gallons
        of gasoline you have used and then reports the miles per gallon your car
        has gotten. Or, if you prefer, the program can request distance in km and
        petrol in liters and then report the result European style, in liters per
        100 km.
*/

#include <iostream>


int main(void){
    double km_driven,
            liters_petrol;

    std::cout << "Enter the distance drive in km: ";
    std::cin >> km_driven;
    std::cout << "Enter the petrol used in liters: ";
    std::cin >> liters_petrol;

    const double set_km{100.0};
    std::cout << "liters used per 100km = "
            << set_km * liters_petrol / km_driven << std::endl;

    return 0;
}
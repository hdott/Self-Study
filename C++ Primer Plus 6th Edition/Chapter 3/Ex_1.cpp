/*
    Write a short program that asks or your height in integer inches and then
        converts your height to feet and inches. Have the program use the underscore
        character to indicate where to type the response. Also use a const symbolic
        constant to represent the conversion factor.
*/

#include <iostream>


int main(void){
    int height;

    std::cout << "Enter your height in integer inches: ";
    std::cin >> height;

    const int conversion_factor = 12;
    int feet = height / conversion_factor,
        inches = height % conversion_factor;

    std::cout << "Your height in feet and inches is: " << feet << " feet and "
                << inches << " inches" << std::endl;

    return 0;
}
/*
    Write a program that requests the user to enter three times for the 40-yd dash
        (or 40-meter, if your prefer) and then displays the times and the average.
        Use an array of object to hold the data.
*/

#include <iostream>
#include <array>


int main(void){
    std::array<int, 3> yd_40_dash;

    std::cout << "Enter a time in seconds: ";
    std::cin >> yd_40_dash[0];
    std::cout << "Enter a time in seconds: ";
    std::cin >> yd_40_dash[1];
    std::cout << "Enter a time in seconds: ";
    std::cin >> yd_40_dash[2];

    std::cout << "The times are: " << yd_40_dash[0] << ", " << yd_40_dash[1]
            << ", " << yd_40_dash[2] << std::endl;
    std::cout << "The average is: "
            << (yd_40_dash[0] + yd_40_dash[1] + yd_40_dash[2]) / 3 << std::endl;     

    return 0;
}
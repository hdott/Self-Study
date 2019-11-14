/*
    Write a program that has main() call a user-defined function that takes a
        distance in light years as an argumentand then returns the distance
        in astronomical units. 
        1 light year - 63240 astronomical units
*/

#include <iostream>

double LightYear_to_AU(double distance);


int main(void){
    int lightY;

    std::cout << "Enter distance in Light Years: ";
    std::cin >> lightY;

    std::cout << lightY << " Light Year = " << LightYear_to_AU(lightY)
                << " Astronomical Units" << std::endl;

    return 0;
}

double LightYear_to_AU(double distance){
    return (distance * 63240);
}
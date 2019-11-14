/*
    Write a short program that asks for your height in feet and inches and your
        weight in pounds. Have the program report your body mass index (BMI). To
        calculate the BMI, first convert your height in feet and inches to your
        height in inches (1 foot = 12 inches). Then convert your height in inches
        to your height in meters by multiplying by (0.0254). Then conver your weight
        in pounds into your mass in kg by dividing by 2.2. Finally, compute your BMI
        by dividing your mass in kg by the square of your height in meters. Use
        symbolic constants to represent  the various conversion factors.
*/

#include <iostream>
#include <cmath>


int main(void){
    int height_feet,
        height_inches;
    double weight_pounds;
    
    std::cout << "Enter your height in feet and inches and your weight in pounds: ";
    std::cin >> height_feet >> height_inches >> weight_pounds;

    const int inches_in_foot = 12;
    const double inches_to_meters = 0.0254,
                pound_to_kg = 2.2;
    
    double mass_kg,
            height_meters;

    mass_kg = weight_pounds / pound_to_kg;
    height_meters = height_feet * inches_in_foot + height_inches;
    height_meters *= inches_to_meters; 

    std::cout << "Your BMI is: " << mass_kg / pow(height_inches, 2) << std::endl;

    return 0;
}
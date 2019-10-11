/*
    Write a program that asks the user to enter his or her age. The program
        should display the age in months.
*/

#include <iostream>


int main(void){
    int age,
        months_in_year = 12;

    std::cout << "Enter your age in years: ";
    std::cin >> age;

    std::cout << "Your age in months is: " << age*months_in_year << std::endl;

    return 0;
}
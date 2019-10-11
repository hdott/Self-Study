/*
    Write a program that asks the user to enter an hour value and a minute value.
        The main() function should then pass these two values to a type void
        function that displays the two values in the format shown in the
        format shown in the following sample run:
        Enter the number of hours: 9
        Enter the numbers of minutes: 28
        Time: 9:28
*/

#include <iostream>

void PrintTime(int hours,  int minutes);


int main(void){
    int hours,
        minutes;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;

    PrintTime(hours, minutes);

    return 0;
}

void PrintTime(int hours,  int minutes){
    std::cout << hours << ":" << minutes << std::endl;
}
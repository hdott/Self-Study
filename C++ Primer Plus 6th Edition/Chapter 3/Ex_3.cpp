/*
    Write a program that asks the user to enter a latitude in degrees, minutes, and
        seconds and that then displays the latitude in decimal format. There are 60
        seconds of arc to minute and 60 minutes of arc to a degree; represent these
        values with symbolic constants. You should use a separate variable for each
        input value. A sample should look like this:
    Enter a latitude in degrees, minutes, and seconds:
    First, enter the degrees: 37
    Next, enter the minutes of arc: 51
    Finally, enter the seconds of arc: 19
    37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>


int main(void){
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    
    int degrees;
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;

    int minutes;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;

    int seconds;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;

    const int arc{60};
    double result = static_cast<double> (degrees) +
                    static_cast<double> (minutes) / double (arc) +
                    static_cast<double> (seconds) / double (arc*arc);
    
    std::cout << degrees << " degrees, " << minutes << " minutes, "
            << seconds << " sconds = " << result << " degrees" << std::endl;

            
    return 0;
}
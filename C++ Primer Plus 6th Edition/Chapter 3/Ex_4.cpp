/*
    Write a program that asks the user to enter the number of seconds as an integer
        value (user type long, or long long) and that then displays the equivalent
        time in das, hours, minutes, and seconds. Use symbolic constants to represent
        the number of hours in the day, the number of minutes in an hour, and the 
        number of seconds in a minute. The output should look like this:
    Enter the number of seconds: 31600000
    31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>


int main(void){
    long long seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    const int hours_in_day{24},
            minutes_in_hour{60},
            seconds_in_minute{60};
    
    int days,
        hours,
        minutes,
        seconds_result;
    
    seconds_result = seconds % seconds_in_minute;
    
    auto tmp = seconds / seconds_in_minute;
    minutes = tmp % minutes_in_hour;

    tmp /= minutes_in_hour;
    hours = tmp % hours_in_day;

    days = tmp / hours_in_day;

    std::cout << seconds << " seconds = " << days << " days, "
            << hours << " hours, " << minutes << " minutes, "
            << seconds_result << " seconds" << std::endl;

    return 0;
}
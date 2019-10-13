/*
    Write a program that requests the user to enter two integers. The program should
        then calculate and report the sum of all the integers between and including
        the two integers. At this point, assume that the smaller integer is entered
        first. For example, if the user enters 2 and 9, the program should report
        that the sum of all integers from 2 through 9 is 44.
*/

#include <iostream>


int main(void){
    int min,
        max;

    std::cout << "Enter two integers: ";
    std::cin >> min >> max;

    int sum{0};
    for(int i=min; i<=max; ++i){
        sum += i;
    }
    std::cout << "The sum of all integers from " << min << " through "
            << max << " is " << sum << "." << std::endl;


    return 0;
}
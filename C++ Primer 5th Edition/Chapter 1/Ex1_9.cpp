/*
    Write a program that uses a while to sum the numbers from 50 to 100.
*/

#include <iostream>

int main(void){
    int sum = 0,
        iter = 50;

    while(iter <= 100){
        sum += iter;
        ++iter;
    }

    std::cout << "The sum of number from 50 to 100 is: " << sum << std::endl;

    return 0;
}
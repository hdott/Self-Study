/*
    Write a program that promts the user for two integers. Print each number
        in the range specified by those two integers.
*/

#include <iostream>

int main(void){
    int min,
        max;

    std::cout << "Input two integers to specify a range: " << std::endl;
    std::cout << "min = ";
    std::cin >> min;
    std::cout << "max = ";
    std::cin >> max;

    std::cout << "The numbers are:" << std::endl;
    while(min <= max){
        std::cout << min++ << " ";
    }
    std::cout << std::endl;

    return 0;
}
/*
    Write a program that asks the user to type in numbers. After each entry, the
        program should report the cumulative sum o the entries to date. The program
        should terminate when the user enters 0.
*/

#include <iostream>


int main(void){
    int input_nr,
        sum{0};

    do{
        std::cout << "Enter an integer (0 to quit): ";
        std::cin >> input_nr;
        std::cout << "The sum so far is: " << (sum += input_nr) << std::endl;
    } while(input_nr != 0);

    return 0;
}
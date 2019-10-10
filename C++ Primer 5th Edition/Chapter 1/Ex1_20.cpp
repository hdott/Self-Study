/*
    Write a program that reads a set of book sales transactions,
        writing each transaction to the standard output.
*/

#include <iostream>
#include "/home/hdott/Git/SStudy/C++ Primer 5th Edition/Book Exercises/1/Sales_item.h"

int main(void){
    Sales_item item;

    while(std::cin >> item){
        std::cout << item;
    }
    
    return 0;
}
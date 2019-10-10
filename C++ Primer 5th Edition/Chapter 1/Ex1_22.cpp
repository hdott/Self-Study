/*
    Write a program that reads several transactions for the same ISBN.
    Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "/home/hdott/Git/SStudy/C++ Primer 5th Edition/Book Exercises/1/Sales_item.h"

int main(void){
    Sales_item item,
                sum;

    while(std::cin >> item){
        sum += item;
    }
    std::cout << sum << std::endl;

    return 0;
}
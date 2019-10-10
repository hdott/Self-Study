/*
    Write a program that reads two Sales_item objects that have the
        same ISBN and produces their sum.
*/

#include <iostream>
#include "/home/hdott/Git/SStudy/C++ Primer 5th Edition/Book Exercises/1/Sales_item.h"

int main(void){
    Sales_item item1,
                item2;

    std::cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn()){
        std::cout << item1 + item2 << std::endl;
    }

    return 0;
}
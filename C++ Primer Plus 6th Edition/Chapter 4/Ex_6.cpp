/*
    The CandyBar structure contains three members, as described in Ex_5.cpp. Write
        a program that creates an array of three CandyBar structures, initializes
        them to values of your choice, and then displays the contents of each structure.
*/

#include <iostream>


struct CandyBar{
    std::string brand;
    double weight;
    int calories;
};

int main(void){
    CandyBar snacks[3];
    snacks[0] = {"Reeses", 10.5, 230};
    snacks[1] = {"Mounds", 52.3, 430};
    snacks[2] = {"Charleston Chew", 44.5, 1234};

    std::cout << snacks[0].brand << ", " << snacks[0].weight << ", "
            << snacks[0].calories << std::endl;
    std::cout << snacks[1].brand << ", " << snacks[1].weight << ", "
            << snacks[1].calories << std::endl;
    std::cout << snacks[2].brand << ", " << snacks[2].weight << ", "
            << snacks[2].calories << std::endl;

    return 0;
}
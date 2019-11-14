/*
    Do Ex_6.cpp, but instead of declaring an array of three CandyBar structures,
        use new to allocate the array dinamically.
*/

#include <iostream>


struct CandyBar{
    std::string brand;
    double weight;
    int calories;
};

int main(void){
    CandyBar *snacks = new CandyBar[3];
    snacks[0] = {"Reeses", 10.5, 230};
    snacks[1] = {"Mounds", 52.3, 430};
    snacks[2] = {"Charleston Chew", 44.5, 1234};

    std::cout << snacks[0].brand << ", " << snacks[0].weight << ", "
            << snacks[0].calories << std::endl;
    std::cout << snacks[1].brand << ", " << snacks[1].weight << ", "
            << snacks[1].calories << std::endl;
    std::cout << snacks[2].brand << ", " << snacks[2].weight << ", "
            << snacks[2].calories << std::endl;

    delete []snacks;
    return 0;
}
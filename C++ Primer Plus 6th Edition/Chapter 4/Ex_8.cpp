/*
    Do Ex_7.cpp but use new to allocate a structure instead of declaring a structure
        variable. Also have the program request the pizza diameter before it requests
        the pizza company name.
*/

#include <iostream>


struct Pizza{
    std::string company;
    double diameter,
            weight;
};

int main(void){
    Pizza *pizza = new Pizza;

    std::cout << "Enter the diameter: ";
    (std::cin >> pizza->diameter).get();
    std::cout << "Enter the company name: ";
    getline(std::cin, pizza->company);
    std::cout << "Enter the weight: ";
    std::cin >> pizza->weight;

    std::cout << pizza->company << ", " << pizza->diameter << ", "
            << pizza->weight << std::endl;

    
    delete pizza;
    return 0;
}
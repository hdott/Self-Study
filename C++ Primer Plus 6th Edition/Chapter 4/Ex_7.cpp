/*
    William Wingate runs a pizza-analysis service. For each pizza, he needs to
        record the following information:
    - The name of the pizza company, which can consist of more than one word
    - The diameter of the pizza
    - The weight of the pizza
        Devise a structure that can hold this information and write a program that
        uses a structure variable of that type. The program should ask the user to
        enter each of the preceeding items of information, and then the program should
        display that information.
*/

#include <iostream>

struct Pizza{
    std::string company;
    double diameter,
            weight;
};

int main(void){
    Pizza pizza;

    std::cout << "Enter the company name: ";
    getline(std::cin, pizza.company);
    std::cout << "Enter the diameter: ";
    (std::cin >> pizza.diameter).get();
    std::cout << "Enter the weight: ";
    std::cin >> pizza.weight;

    std::cout << pizza.company << ", " << pizza.diameter << ", "
            << pizza.weight << std::endl;


    return 0;
}
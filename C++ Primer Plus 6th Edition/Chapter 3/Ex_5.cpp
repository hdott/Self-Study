/*
    Write a program that requests the user to enter the current world population
        and the current population of the U.S.. Store the information variables of
        type long long. Have the program display the percent that the U.S. population
        is of the world's population. The output should looke something like this:
    Enter the world's population: 6898758899
    Enter the population of the US: 310783781
    The population of the US is 4.50492% of the world population.
*/

#include <iostream>


int main(void){
    long long world_population,
            us_population;

    std::cout << "Enter the world's population: ";
    std::cin >> world_population;
    std::cout << "Enter the population of the US: ";
    std::cin >> us_population;
    std::cout << "The population of the US is " 
            << us_population * 100.0 / world_population
            << "\% of the world population" << std::endl;


    return 0;
}
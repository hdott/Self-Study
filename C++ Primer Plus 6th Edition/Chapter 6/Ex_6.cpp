/*
    Put together a program that keeps track of monetary contributions to the Society
        for the Preservation of Rightful Influence. It should ask the user to enter the num-
        ber of contributors and then solicit the user to enter the name and contribution of
        each contributor.The information should be stored in a dynamically allocated array
        of structures. Each structure should have two members: a character array (or else a
        string object) to store the name and a double member to hold the amount of the
        contribution.After reading all the data, the program should display the names and
        amounts donated for all donors who contributed $10,000 or more.This list should
        be headed by the label Grand Patrons.After that, the program should list the
        remaining donors.That list should be headed Patrons. If there are no donors in one
        of the categories, the program should print the word “none.”Aside from displaying
        two categories, the program need do no sorting.
*/

#include <iostream>


struct sprf{
    std::string name;
    double contribution;
}; 


int main(void){
    std::cout << "Enter the number of contributors: ";
    int size;
    (std::cin >> size).get();

    sprf *arr = new sprf[size];
    for(int i=0; i<size; ++i){
        std::cout << "Enter the name and contribution: " << std::endl;
        std::cout << "name: ";
        getline(std::cin, arr[i].name);
        std::cout << "contribution: ";
        (std::cin >> arr[i].contribution).get();
    }

    std::cout << "Grand Patrons" << std::endl;
    bool condition{false};
    for(int i=0; i<size; ++i){
        if(arr[i].contribution >= 10000){
            std::cout << arr[i].name << ", " << arr[i].contribution << std::endl;
            condition = true;
        }
    }
    if(!condition){
        std::cout << "none" << std::endl;
    }

    std::cout << "headed Patrons" << std::endl;
    condition = false;
    for(int i=0; i<size; ++i){
        if(arr[i].contribution < 10000){
            std::cout << arr[i].name << ", " << arr[i].contribution << std::endl;
            condition = true;
        }
    }
    if(!condition){
        std::cout << "none" << std::endl;
    }


    return 0;
}
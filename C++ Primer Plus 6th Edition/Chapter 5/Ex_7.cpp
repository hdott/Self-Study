/*
    Design a structure called car that holds the following information about an
        automobile: its make, as a string in a character array or in a string object,
        and the year it was built, as an integer. Write a program that asks the user
        how many cars to catalog. The program should then use new to create a dynamic
        array of the many car structures. Next, it should prompt the user to input the
        make (which might consist of more than one word) and year information for each
        structure. Note that this requires some care because it alternates reading
        strings with numeric data. Finally, it should display the contents of each
        structure. A sample run should look something like the following:
    How many cars do you wish to catalog? 2
    Car #1:
    Please enter the make: Hudson Hornet
    Please enter the year made: 1952
    Car #2:
    Please enter the make: Kaiser
    Please enter the year made: 1951
    Here is your collection:
    1952 Hudson Hornet
    1951 Kaiser
*/

#include <iostream>


struct car{
    std::string make;
    int year_made;
};

int main(void){
    int size;

    std::cout << "How many cars do you wish to catalog? ";
    (std::cin >> size).get();

    car *arr = new car[size];

    for(int i=0; i<size; ++i){
        std::cout << "Car #" << i+1 << std::endl;
        std::cout << "Please enter the make: ";
        getline(std::cin, arr[i].make);
        std::cout << "Please enter the year made: ";
        (std::cin >> arr[i].year_made).get();
    }

    std::cout << "Here is your collection:" << std::endl;
    for(int i=0; i<size; ++i){
        std::cout << arr[i].year_made << " " << arr[i].make << std::endl;
    }


    delete []arr;
    return 0;
}
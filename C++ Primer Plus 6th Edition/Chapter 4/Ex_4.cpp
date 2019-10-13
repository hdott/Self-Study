/*
    Write a program that asks the user to enter his or her first name and then last
        name, and then constructs, stores, and displays a third string consisting of
        the user's last name followed by a comma, a space, and first name. Use string
        objects and methods from the string header file. A sample run could look like
        this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a singe string: Fleming, Flip
*/

#include <iostream>


int main(void){
    std::string first_name,
                last_name;

    std::cout << "Enter your first name: ";
    getline(std::cin, first_name);
    std::cout << "Enter your last name: ";
    getline(std::cin, last_name);

    std::string full_name = last_name + ", " + first_name;
    std::cout << "Here's the information in a single string: " << full_name << std::endl; 


    return 0;
}
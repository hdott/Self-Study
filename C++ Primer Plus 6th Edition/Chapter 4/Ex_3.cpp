/*
    Write a program that asks the user to enter his or her first name and then
        last name, and that then constructs, stores, and displays a third string,
        consisting of the user's last name followed by a comma, a space, and first
        name. Use char arrays and functions from the cstring header file. A simple
        run could look like this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a singe string: Fleming, Flip
*/

#include <iostream>
#include <cstring>


int main(void){
    const int LEN = 40;
    char first_name[LEN],
        last_name[LEN];

    std::cout << "Enter your first name: ";
    std::cin.getline(first_name, LEN);
    std::cout << "Enter your last name: ";
    std::cin.getline(last_name, LEN);
    
    char full_name[LEN];
    strncpy(full_name, last_name, LEN);
    strcat(full_name, ", ");
    strncat(full_name, first_name, LEN-strlen(full_name));

    std::cout << "Here's the information in a single string: " << full_name << std::endl;

    return 0;
}
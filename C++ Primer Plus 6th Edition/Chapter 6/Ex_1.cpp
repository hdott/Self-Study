/*
    Write a program that reads keyboard input to the @ symbol and that echoes the
        input except for digits, converting each uppercase character to lowercase, and vice
        versa. (Don’t forget the cctype family.)
*/

#include <iostream>
#include <cctype>


int main(void){
    char ch;

    std::cout << "This program reads input untill '@'" << std::endl;
    std::cin.get(ch);
    while(ch != '@'){
        if(islower(ch)){
            std::cout << (char)toupper(ch);   
        } else if(isupper(ch)){
            std::cout << (char)tolower(ch);
        } else if(isspace(ch)){
            std::cout << ch;
        }

        std::cin.get(ch);
    }


    return 0;
}
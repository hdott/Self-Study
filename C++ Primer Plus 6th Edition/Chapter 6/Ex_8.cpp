/*
    Write a program that opens a text file, reads it character-by-character to the end of
        the file, and reports the number of characters in the file.
*/

#include <iostream>
#include <fstream>


int main(void){
    std::ifstream input;
    input.open("Ex_7.cpp");

    char ch;
    int number_of_chars{0};
    while(!input.eof()){
        input >> ch;
        number_of_chars++;
    }
    input.close();

    std::cout << "Number of characters read: " << number_of_chars << std::endl;
    

    return 0;
}
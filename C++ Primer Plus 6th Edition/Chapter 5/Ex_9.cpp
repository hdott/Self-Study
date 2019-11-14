/*
    Write a program that matches the description of the program in Ex_8.cpp, but
        uses a string class object instead of an array. Include the string header
        file and use a relational operator to make the comparison test.
*/

#include <iostream>


int main(void){
    std::string word;
    int count{0};
    
    std::cout << "Enter words (to stop, type the word done):" << std::endl;
    std::cin >> word;

    while(word != "done"){
        count++;
        std::cin >> word;
    }
    
    std::cout << "You entered a total of " << count << " words." << std::endl;


    return 0;
}
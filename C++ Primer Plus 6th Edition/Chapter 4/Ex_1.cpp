/*
    Write a C++ Program that requests and displays information as shown in the
        following example of output:
    What is your first name? Betty Sue
    What is your last name? Yewe
    What letter grade do you deserve? B
    What is your age? 22
    Name: Yewe, Betty Sue
    Grade: C
    Age: 22
        Note that the program adjusts the grade downward. Assume that the user
        requests an A, B, or C so that you don't have to worry about the gap between
        D and F.
*/

#include <iostream>


int main(void){
    std::string first_name,
                last_name;
    
    std::cout << "What is your first name? ";
    getline(std::cin, first_name);
    std::cout << "What is your last name? ";
    getline(std::cin, last_name);

    char grade;
    std::cout << "What letter grade do you deserve? ";
    std::cin.get(grade);

    int age;
    std::cout << "What is your age? ";
    std::cin >> age;


    std::cout << "Name: " << last_name << ", " << first_name << std::endl;
    std::cout << "Grade: ";
    if(grade == 'A'){
        std::cout.put('B') << std::endl;
    } else if(grade == 'B'){
        std::cout.put('C') << std::endl;
    } else if(grade == 'C'){
        std::cout.put('D') << std::endl;
    }
    std::cout << "Age: " << age << std::endl;


    return 0;
}
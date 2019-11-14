/*
    Write a program using nested loops that asks the user to enter a value for the
        number of rows to display. It should then display that many rows of asterisks,
        with one asterisk in the first row, two in the second row, and so on. For each
        row, the asterisks are preceded by the number of periods needed to make all
        the rows display a total number of character equal to the number of rows. A
        sample run would look like this:
    Enter the number of rows: 5
    ....*
    ...**
    ..***
    .****
    *****
*/

#include <iostream>


int main(void){
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=rows-i; ++j){
            std::cout.put('.');
        }
        for(int k=1; k<=i; ++k){
            std::cout.put('*');
        }
        std::cout << std::endl;
    }

    return 0;
}
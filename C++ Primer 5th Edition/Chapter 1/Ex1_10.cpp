/*
    Use the decrement operator to write a while that prints the numbers from ten
        down to zero.
*/

#include <iostream>

int main(void){
    int nr = 10;

    while(nr >= 0){
        std::cout << nr-- << std::endl;
    }

    return 0;
}
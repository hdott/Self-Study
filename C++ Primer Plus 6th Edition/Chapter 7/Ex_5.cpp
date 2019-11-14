/*
    Define a recursive function that takes an integer argument and returns the factorial
        of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
        defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
        in a program that uses a loop to allow the user to enter various values for which the
        program reports the factorial.
*/

#include <iostream>

int factorial(int);


int main(void){
    std::cout << "Enter a number to find its factorial: ";
    int nr;
    while((std::cin >> nr) && nr >= 0){
        std::cout << "Factorial of [" << nr << "] is ["
                << factorial(nr) << "]" << std::endl;
        
        std::cout << "Enter another number: ";
    }


    return 0;
}

int factorial(int x){
    if(!x){
        return 1;
    }

    return x * factorial(x-1);
}
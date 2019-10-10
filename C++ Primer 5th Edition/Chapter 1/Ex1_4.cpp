/*
    Write a program that uses the multiplicator operator, *, to print the product
        instead.
*/

#include <iostream>

int main(void){
    int a,
        b;
    
    std::cin >> a >> b;
    std::cout << "The product of " << a << " and " << b
                << " is " << a*b << std::endl;

    return 0;
}
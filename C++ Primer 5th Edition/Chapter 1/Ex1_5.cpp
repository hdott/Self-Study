/*
    Rewrite the program to use a separate statement to print each operand.
*/

#include <iostream>

int main(void){
    int a,
        b;

    std::cin >> a >> b;
    std::cout << "The sum of " << a;
    std::cout << " and " << b;
    std::cout << " is " << a+b << std::endl;

    return 0;
}
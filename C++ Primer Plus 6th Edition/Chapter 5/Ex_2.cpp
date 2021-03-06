/*
    Redo Listing 5.4 using a type array object instead of a built-in array and type
        long double instead of long long. Find the value of 100!
*/

#include <iostream>
#include <array>


int main(void){
    const int size{101};
    std::array<long double, size> factorials;

    factorials[1] = factorials[0] = 1;

    for(int i=2; i<size; ++i){
        factorials[i] = i * factorials[i-1];
    }

    for(int i=0; i<size; ++i){
        std::cout << i << "! = " << factorials[i] << std::endl;
    }


    return 0;
}
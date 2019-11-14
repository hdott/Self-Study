/*
    Write a program that repeatedly asks the user to enter pairs of numbers until at
        least one of the pair is 0 . For each pair, the program should use a function to calcu-
        late the harmonic mean of the numbers.The function should return the answer to
        main() , which should report the result.The harmonic mean of the numbers is the
        inverse of the average of the inverses and can be calculated as follows:
        harmonic mean = 2.0 × x × y / (x + y)
*/

#include <iostream>

double HarmonicMean(int, int);


int main(void){
    int x, y;

    std::cout << "Enter a pair of numbers: ";
    std::cin >> x >> y;

    std::cout << "Harmonic Mean of (" << x << "," << y << ") is: "
            << HarmonicMean(x, y) << std::endl;


    return 0;
}

double HarmonicMean(int nr1, int nr2){
    return (2.0 * nr1 * nr2) / (nr1 + nr2);
}
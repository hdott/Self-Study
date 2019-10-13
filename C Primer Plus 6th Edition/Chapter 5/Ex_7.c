/*
    Write a program that requests a type double number and prints the value of the
        number cubed. Use a function of your own design to cube the value and print
        it. The main() program should pass the entered value to this function.
*/

#include <stdio.h>

void PrintCube(double nr);


int main(void){
    double number;

    printf("Enter a number (double): ");
    scanf("%lf", &number);
    PrintCube(number);

    return 0;
}

void PrintCube(double nr){
    printf("The cube is: %lf\n", nr * nr * nr);
}
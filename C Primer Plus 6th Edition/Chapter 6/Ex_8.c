/*
    Write a program that requests two floating-point nmbers and prints the value of
        their difference divided by their product. Have the program loop through pairs
        of input values until the user enters nonnumeric input.
*/

#include <stdio.h>


int main(void){
    float nr1,
            nr2;
    
    printf("Enter two floating-point numbers: ");
    while(scanf("%f %f", &nr1, &nr2) == 2){
        printf("Value: %.2f\n", (nr1-nr2) / (nr1*nr2));
        printf("Enter two floating-point numbers (non-numeric to exit): ");
    }


    return 0;
}
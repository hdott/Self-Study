/*
    Modify Ex_8.c so that it uses a function to return the value of the calculation.
*/

#include <stdio.h>

float ComputeExpr(float nr1, float nr2);


int main(void){
    float nr1,
            nr2;
    
    printf("Enter two floating-point numbers: ");
    while(scanf("%f %f", &nr1, &nr2) == 2){
        printf("Value: %.2f\n", ComputeExpr(nr1, nr2));
        printf("Enter two floating-point numbers (non-numeric to exit): ");
    }


    return 0;
}

float ComputeExpr(float nr1, float nr2){
    return (nr1-nr2) / (nr1*nr2);
}
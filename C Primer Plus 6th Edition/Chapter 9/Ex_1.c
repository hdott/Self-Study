/*
    Devise a function called min(x,y) that returns the smaller of two double values.
        Test the function with a simple driver.
*/


#include <stdio.h>

double min(double, double);


int main(void){
    double x = 22.4,
            y = 55.3452;

    printf("Smalles -> %lg\n", min(x,y));


    return 0;
}

double min(double x, double y){
    if(x < y){
        return x;
    }

    return y;
}
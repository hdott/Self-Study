/*
    Write a power-law program that works on a command-line basis. The first command-line
        argument should be the type double number to be raised to a certain power, and the
        second argument should be the integer power.
*/

#include <stdio.h>
#include <stdlib.h>

double power(double x, int pw);


int main(int argc, char **argv){
    if(argc == 3){
        printf("%lg\n", power(atof(*(argv+1)), atoi(*(argv+2))));
    }


    return 0;
}

double power(double x, int pw){
    double _tmp = 1;
    for(int i=0; i<pw; ++i){
        _tmp *= x;
    }

    return _tmp;
}
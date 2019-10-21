/*
    Chapter 6 , “C Control Statements: Looping,” ( Listing 6.20 ) shows a power() function
        that returned the result of raising a type double number to a positive integer value.
        Improve the function so that it correctly handles negative powers. Also, build into the
        function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
        (It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) Use a loop.
        Test the function in a program.
*/

#include <stdio.h>

double power(double, int);


int main(void){
    printf("power(3.432,3) = %g\n", power(3.432,3));
    printf("power(0,3) = %g\n", power(0,3));
    printf("power(3.543,0) = %g\n", power(3.543,0));


    return 0;
}

double power(double x, int y){
    if(x == 0 && y != 0){
        return 0;
    }
    if(y == 0){
        return 1;
    }

    double _tmp = x;

    for(int i=1; i<y; ++i){
        _tmp *= x;
    }

    if(y > 0){
        return _tmp;
    }

    return 1 / _tmp;
}
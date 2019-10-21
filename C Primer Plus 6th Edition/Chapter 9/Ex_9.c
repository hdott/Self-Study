/*
    Redo Ex_8.c, but this time use a recursive function.
*/

#include <stdio.h>

double power(double, int);


int main(void){
    printf("power(3.432,5) = %g\n", power(3.432,5));
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

    double _tmp;

    if(y >= 1){
        _tmp = x * power(x, y-1);
    }

    if(y > 0){
        return _tmp;
    }

    return 1 / _tmp;
}
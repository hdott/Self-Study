/*
    Write and test a function that takes the addresses of three double variabls as
        arguments and that moves the value of the smallest variable into the first
        variable, the middle value to the second variable, and the largest value into
        the third variable.
*/

#include <stdio.h>

void OrderValues(double *, double *, double *);


int main(void){
    double x = 4.5,
            y = 2.3,
            z = 1.25;
    
    OrderValues(&x, &y, &z);
    printf("Ordered values are: %g %g %g\n", x, y, z);


    return 0;
}

void OrderValues(double *first, double *second, double *third){
    double _tmp[3] = {*first, *second, *third};
    
    for(int i=0; i<3; ++i){
        for(int j=i+1; j<3; ++j){
            if(_tmp[i] > _tmp[j]){
                double _aux = _tmp[i];
                _tmp[i] = _tmp[j];
                _tmp[j] = _aux;
            }
        }
    }

    *first = _tmp[0];
    *second = _tmp[1];
    *third = _tmp[2];
}
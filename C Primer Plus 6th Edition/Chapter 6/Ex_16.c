/*
    Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns
        an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest
        compounded annually. (That is, interest is 5% of the current balance, including previous
        addition of interest.) Write a program that finds how many years it takes for the value
        of Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two
        values at that time.
*/

#include <stdio.h>


int main(void){
    const double simple_interst = 0.1,
                compound_interest = 0.05;
    
    double daphne_initial = 100,
            daphne = 100,
            deidre = 100;
    
    int i=0;
    while(daphne >= deidre){
        daphne += daphne_initial * simple_interst;
        deidre += deidre * compound_interest;
        ++i;
    }

    printf("Year passed: %d\n", i);
    printf("daphne = %lf\ndeidre = %lf\n", daphne, deidre);
    

    return 0;
}
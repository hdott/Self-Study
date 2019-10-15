/*
    Conside these two infinite series:
    1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
    1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
        Write a program that evaluates running totals of these two series up to some
        limit of number of terms. Hint: -1 times itsef an odd number of times is -1,
        and -1 times itself an even number of times is 1. Have the user enter the limit
        interactively; let a zero or negative value terminate input. Look at the running
        totals after 100 terms, 1000 terms, 10000 terms. Does either series appear to
        be convergin to some value?
*/

#include <stdio.h>


int main(void){
    const double it = 1.0;
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    while(terms > 0){
        double series1 = 0,
            series2 = 0;
        for(int i=1; i<=100; ++i){
            series1 += it/(double)i; 
            
            if(i%2){
                series2 += it/(double)i;
            } else{
                series2 -= it/(double)i;
            }

            printf("%lf %lf\n", series1, series2);
        }

        printf("Enter the number of terms (<=0 to exit): ");
        scanf("%d", &terms);
    }
    

    return 0;
}
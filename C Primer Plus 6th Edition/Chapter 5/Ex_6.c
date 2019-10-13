/*
    Modify the Ex_5.c so that it computes the sum of the squares of the integers.
        (If you prefer, how much money you receive if you get $1 the first day,
        $4 the scond day, $9 the third day, and so on. This looks like a much better
        deal!) C doesn't have a squaring function, but you can use the fac that the
        square of n is n*n.
*/

#include <stdio.h>


int main(void){
    int days,
        sum = 0;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    for(int i=1; i<=days; ++i){
        sum += i*i;
    }
    
    printf("Total sum received is: %d$\n",sum);

    return 0;
}
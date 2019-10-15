/*
    Write a program that prints a table with each line giving an integer, its square,
        and its cube. Ask the user to input the lower and upper limits for the table.
        Use a for loop.
*/

#include <stdio.h>


int main(void){
    int low,
        up;

    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &low, &up);
    for(int i=low; i<=up; ++i){
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    

    return 0;
}
/*
    Generalize the to_binary() function of Listing 9.8 to a to_base_n() function that
        takes a second argument in the range 2-10. It then should print the number
        that is its first argument to the number base given by the second argument.
        For example, to_base_n(129, 8) would display 201, the base-8 equivalent of
        129. Test the function in a complete program.
*/

#include <stdio.h>

void to_base_n(int, int);


int main(void){
    int n,
        base;

    printf("Enter a number and a base to be transformed to: ");
    while(scanf("%d %d", &n, &base) == 2){
        to_base_n(n, base);
        putchar('\n');
        printf("Enter the next number and base: ");
    }


    return 0;
}

void to_base_n(int n, int base){
    int ch = n % base;

    if(n >= base){
        to_base_n(n/base, base);
    }

    printf("%d", ch);
}
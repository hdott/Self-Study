/*
    Have a program request the user to enter an uppercase letter. Use nested loops
        to produce a pyramid pattern like this:
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
        The pattern should extend to the character entered. For example, the preceeding
        pattern would result from an input value of E. Hint: Use an outer loop to
        handle the rows. Use three inner loops in a row, one to handle the spaces, one
        for printing letters in ascending order, and one for printing letters in
        descending order.
*/

#include <stdio.h>


int main(void){
    int ch;
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);

    int rows = ch - 'A' + 1;
    
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=rows-i; ++j){
            putchar(' ');
        }

        int letter = 'A';
        for(int j=1; j<=i; ++j){
            putchar(letter++);
        }
        --letter;
        for(int j=1; j<=i-1; ++j){
            putchar(--letter);
        }

        putchar('\n');
    }


    return 0;
}
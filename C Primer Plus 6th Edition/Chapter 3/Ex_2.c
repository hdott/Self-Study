/*
    Write a program that asks you to enter an ASCII code value, such as 66, and
        then prints the character having that ASCII code.
*/

#include <stdio.h>


int main(void){
    char ch;

    printf("Enter an ASCII code: ");
    scanf("%d", &ch);
    printf("The character is [ %c ]\n", ch);

    return 0;
}
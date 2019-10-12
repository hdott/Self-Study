/*
    Write a program that asks for your first name, your last name, and then prints
        the names in the format last, first.
*/

#include <stdio.h>


int main(void){
    const int LEN = 40;
    char last_name[LEN],
        first_name[LEN];

    printf("Enter your last and first name: ");
    scanf("%s %s", last_name, first_name);

    printf("%s, %s\n", last_name, first_name);

    return 0;
}
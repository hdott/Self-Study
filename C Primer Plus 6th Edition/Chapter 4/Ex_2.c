/*
    Write a program that requests your first name and does the following with it:
    - Prints it enclosed in double quotation marks
    - Prints it in a field of 20 characters wide, with the whole field in quotes and
        the name at the right end of the field
    - Prints it at the left end of a field 20 characters wide, with the whole field
        enclosed in quotes
    - Prints it in a field three characters wider than the name
*/

#include <stdio.h>
#include <string.h>


int main(void){
    const int LEN = 40;
    char first_name[LEN];
    
    printf("Enter your first name: ");
    scanf("%s", first_name);

    printf("\"%s\"\n", first_name);
    printf("\"%20s\"\n", first_name);
    printf("\"%-20s\"\n", first_name);
    printf("\"%*s\"\n", strlen(first_name)*3, first_name);

    return 0;
}
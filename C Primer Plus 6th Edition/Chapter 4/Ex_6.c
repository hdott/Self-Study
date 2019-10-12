/*
    Write a program that requests the user's first name and then the user's
        last name. Have it print the entered names on one line and the number of
        letters in each name on the following line. Align each letter count with
        the end of the corresponding name, as in the following:
    Melissa Honeybee
          7        8
        Next, have it print the same information, but with the counts aligned with
        the beginning of each name.
    Melissa Honeybee
    7       8
*/

#include <stdio.h>
#include <string.h>


int main(void){
    const int LEN = 40;
    char first_name[LEN],
        last_name[LEN];

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", strlen(first_name), strlen(first_name),
                        strlen(last_name), strlen(last_name));

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", -strlen(first_name), strlen(first_name),
                        -strlen(last_name), strlen(last_name));

    return 0;
}
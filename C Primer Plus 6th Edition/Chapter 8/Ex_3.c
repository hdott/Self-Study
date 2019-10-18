/*
    Write a program that reads input as a stream of characters until encountering EOF .
        Have it report the number of uppercase letters, the number of lowercase letters, and the
        number of other characters in the input. You may assume that the numeric values for the
        lowercase letters are sequential and assume the same for uppercase. Or, more portably,
        you can use appropriate classification functions from the ctype.h library.
*/

#include <stdio.h>
#include <ctype.h>


int main(void){
    int upper = 0,
        lower = 0,
        others = 0,
        ch;

    while((ch = getchar()) != EOF){
        if(isupper(ch)){
            upper++;
        } else if(islower(ch)){
            lower++;
        } else{
            others++;
        }
    }

    printf("Upper characters [%d]\n"
            "Lower characters [%d]\n"
            "Other characters [%d]\n", upper, lower, others);


    return 0;
}
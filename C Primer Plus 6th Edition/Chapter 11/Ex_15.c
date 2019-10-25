/*
    Use the character classification functions to prepare an implementation of atoi() ; have
        this version return the value of 0 if the input string is not a pure number.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int idematoi(char *str);


int main(int argc, char **argv){
    if(argc == 2){
        printf("%d\n", idematoi(*(argv+1)));
    }


    return 0;
}

int idematoi(char *str){
    int nr = 0,
        pow = 1,
        i=strlen(str)-1;

    while(i >= 0){
        if(isdigit(*(str+i))){
            nr += (*(str+i) - '0') * pow;
        } else{
            return 0;
        }
        --i;
        pow *= 10;
    }

    return nr;
}
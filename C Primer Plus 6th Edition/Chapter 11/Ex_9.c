/*
    Write a function that replaces the contents of a string with the string reversed. Test the
        function in a complete program that uses a loop to provide input values for feeding to
        the function.
*/

#include <stdio.h>
#include <string.h>

void reverstr(char *str);


int main(void){
    char str[20];

    while(scanf("%20s",str) > 0){
        reverstr(str);
        puts(str);
    }


    return 0;
}

void reverstr(char *str){
    int i=0,
        j=strlen(str)-1;
    
    for(; i<strlen(str)/2; ++i, --j){
        char _aux = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = _aux;
    }
}
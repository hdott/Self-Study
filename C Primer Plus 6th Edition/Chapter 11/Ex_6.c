/*
    Write a function called is_within() that takes a character and a string pointer as its two
        function parameters. Have the function return a nonzero value (true) if the character is
        in the string and zero (false) otherwise. Test the function in a complete program that uses
        a loop to provide input values for feeding to the function.
*/

#include <stdio.h>

int is_within(char ch, char *str);


int main(void){
    char str[20],
        ch;

    printf("Enter a word and a char:\n");
    while(scanf("%20s", str) == 1){
        getchar();
        ch = getchar();
        printf("ocurrences -> %d\n", is_within(ch, str));
    }


    return 0;
}

int is_within(char ch, char *str){
    int i = 0,
        count = 0;
    while(*(str+i) != '\0'){
        if(*(str+i++) == ch){
            count++;
        }
    }

    return count;
}
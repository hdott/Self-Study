/*
    Design and test a function that searches the string specified by the first function
        parameter for the first occurrence of a character specified by the second function
        parameter. Have the function return a pointer to the character if successful, and a null
        if the character is not found in the string. (This duplicates the way that the library
        strchr() function works.) Test the function in a complete program that uses a loop to
        provide input values for feeding to the function.
*/

#include <stdio.h>

char* findChar(char *str, char ch);


int main(void){
    char str[20],
        ch;

    printf("Enter a word and a char:\n");
    while(scanf("%20s", str) == 1){
        getchar();
        ch = getchar();
        puts(findChar(str,ch));
    }
    
    
    return 0;
}

char* findChar(char *str, char ch){
    int i = 0;
    while(*(str+i) != '\0'){
        if(*(str+i) == ch){
            return str+i;
        }
        ++i;
    }

    return NULL;
}
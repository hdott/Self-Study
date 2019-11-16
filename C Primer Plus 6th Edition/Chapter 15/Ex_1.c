/*
    Write a function that converts a binary string to a numeric value. That is, if you have
        char * pbin = "01001001"; you can pass pbin as an argument to the function and have the function return an int
        value of 25 .
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int bstoi(char * s);


int main(int argc, char **argv){
    
    if(argc == 2){
        printf("%s -> %d\n", argv[1], bstoi(argv[1]));
    } else{    
        char * pbin = "01001001";
        printf("%d\n", bstoi(pbin));
    }

    

    return 0;
}

int bstoi(char * s){
    int result = 0;
    int powr = strlen(s)-1;
    for(int i = strlen(s)-1; i >= 0; --i){
        if(s[i] == '1'){
            result += pow(2, powr-i);
        }
    }

    return result;
}
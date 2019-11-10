/*
    Write a program that implements a menu by using an array of pointers to functions. For
        instance, choosing a from the menu would activate the function pointed to by the first
        element of the array.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char String[255];
void printFN(String name);
void printLN(String name);
void printMN(String name);


int main(void){
    void (*pfunct[3])(String);
    pfunct[0] = printFN;
    pfunct[1] = printMN;
    pfunct[2] = printLN;

    String name;
    printf("Enter your full name: ");
    fgets(name, 255, stdin);
    name[strlen(name)] = '\0';

    int opt;
    do{
        // system("clear");
        printf("Enter 0, 1 or 2: ");
        if(scanf("%d", &opt) != 1){
            break;
        };
        getchar();
        if(!(opt >= 0 && opt < 3)){
            break;
        }
        pfunct[opt](name);
    } while(1);
    
    

    return 0;
}

void printFN(String name){
    String tmp;
    sscanf(name, "%s", tmp);
    printf("First Name: %s\n", tmp);
}

void printLN(String name){
    String tmp;
    for(int i = 0; i < 2; ++i){
        sscanf(name, "%*s %s", tmp);
    }
    printf("Last Name: %s\n", tmp);
}

void printMN(String name){
    String tmp;
    for(int i = 0; i < 3; ++i){
        sscanf(name, "%*s %*s %s", tmp);
    }
    printf("Middle Name: %s\n", tmp);
}
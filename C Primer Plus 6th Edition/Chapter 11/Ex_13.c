/*
    Write a program that echoes the command-line arguments in reverse word order. That
        is, if the command-line arguments are see you later , the program should print later
        you see .
*/

#include <stdio.h>


int main(int arc, char **argv){
    for(int i=arc-1; i>0; --i){
        puts(*(argv+i));
    }


    return 0;
}
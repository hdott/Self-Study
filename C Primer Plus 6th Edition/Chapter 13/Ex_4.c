/*
    Write a program that sequentially displays onscreen all the files listed in the command
        line. Use argc to control a loop.
*/

#include <stdio.h>


int main(int argc, char **argv){
    for(int i = 0; i < argc; ++i){
        puts(argv[i]);
    }


    return 0;
}
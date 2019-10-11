/*
    Write a program that produces the following output:
        For he's a jolly good fellow!
        For he's a jolly good fellow!
        For he's a jolly good fellow!
        Which nobody can deny!
    Have the program use two user-defined functionsin addition to main(): one
        names jolly() that prints the "jolly good" message once, and one named
        deny() that prints the final line once.
*/

#include <stdio.h>

void jolly();
void deny();


int main(void){
    jolly();
    deny();

    return 0;
}

void jolly(){
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void deny(){
    printf("Which nobody can deny!\n");
}
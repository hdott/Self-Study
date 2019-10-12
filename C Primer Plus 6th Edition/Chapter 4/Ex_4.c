/*
    Write a program that requests your height in inches and your name, and then
        displays the information in the following form:
    Dabney, you are 6.208 feet tall
        If you prefer, request the height in centimeters and display it in meters.
*/

#include <stdio.h>


int main(void){
    const int LEN = 40;
    const int INCH_inFoot = 12;
    int height;
    char name[LEN];

    printf("Enter your name and your height in inches: ");
    scanf("%s %d", name, &height);

    printf("%s, you are %.3f feet tall\n", name, (float) height / INCH_inFoot);

    return 0;
}
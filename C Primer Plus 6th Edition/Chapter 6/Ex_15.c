/*
    Write a program that reads in a line of input and then prints the line in reverse order.
        You can store the input in an array of char ; assume that the line is no longer than 255
        characters. Recall that you can use scanf() with the %c specifier to read a character at
        a time from input and that the newline character ( \n ) is generated when you press the
        Enter key.
*/

#include <stdio.h>


int main(void){
    char line[255],
        ch;
    int i = 0;

    printf("Enter a line of chars:\n");
    scanf("%c", &ch);
    while(ch != '\n'){
        line[i++] = ch;
        scanf("%c", &ch);
    }
    
    for(--i; i>=0; --i){
        printf("%c", line[i]);
    }
    putchar('\n');


    return 0;
}
/*
    Write a program that creates an eight-element array of ints and set the elements
        to the first eight powers of 2 and then prints the values. Use a for loop to
        set the values, and, for variety, use a do while loop to display the values.
*/

#include <stdio.h>


int main(void){
    int arr[8];

    arr[0] = 2;
    for(int i=1; i<8; ++i){
        arr[i] = arr[i-1]*2;
    }

    int i=0;
    do{
        printf("%d ", arr[i++]);
    } while(i<8);
    putchar('\n');
    

    return 0;
}
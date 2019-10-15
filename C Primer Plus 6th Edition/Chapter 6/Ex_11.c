/*
    Write a progam that reads eight integers into an array and then prints them in
        reverse order.
*/

#include <stdio.h>


int main(void){
    int arr[8];

    printf("Enter 8 integers: ");
    for(int i=0; i<8; ++i){
        scanf("%d", &arr[i]);
    }

    printf("Reverse order: ");
    for(int i=8-1; i>=0; --i){
        printf("%d ", arr[i]);
    }
    putchar('\n');
    

    return 0;
}
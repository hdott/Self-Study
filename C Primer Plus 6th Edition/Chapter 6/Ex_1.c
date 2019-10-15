/*
    Write a program that creates an array with 26 elements and stores the 26 lowercase
        letters in it. Also have it show the array contents.
*/

#include <stdio.h>


int main(void){
    int arr[26];

    for(int i=0, j=97; i<26; ++i, ++j){
        arr[i] = j;
    }

    for(int i=0; i<26; ++i){
        printf("%c ", arr[i]);
    }
    putchar('\n');


    return 0;
}
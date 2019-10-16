/*
    Write a program that creates a two eight-element arrays of doubles and uses a
        loop to let the user enter values for the eight elements of the first array.
        Have the program set the elements of the second array to the cumulative totals
        of the elements of the first array. For example, the fourth element of the
        second array should equal the sum of the first four elements of the first array,
        and the fifth element of the second array should equal the sum of the first
        five elements of the first array. (It’s possible to do this with nested
        loops, but by using the fact that the fifth element of the second array equals the fourth
        element of the second array plus the fifth element of the first array, you can avoid
        nesting and just use a single loop for this task.) Finally, use loops to display the contents
        of the two arrays, with the first array displayed on one line and with each element of the
        second array displayed below the corresponding element of the first array.
*/

#include <stdio.h>


int main(void){
    double arr1[8],
            arr2[8];

    printf("Enter 8 integers:\n");
    for(int i=0; i<8; ++i){
        printf("[%d]: ", i+1);
        scanf("%lf", &arr1[i]);
    }

    arr2[0] = arr1[0];
    for(int i=1; i<8; ++i){
        arr2[i] = arr2[i-1] + arr1[i];
    }

    for(int i=0; i<8; ++i){
        printf("%lf ", arr1[i]);
    }
    putchar('\n');

    for(int i=0; i<8; ++i){
        printf("%lf ", arr2[i]);
    }
    putchar('\n');


    return 0;
}
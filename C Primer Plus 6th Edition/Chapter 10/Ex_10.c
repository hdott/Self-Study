/*
    Write a function that sets each element in an array to the sum of the corresponding
        elements in two other arrays. That is, if array 1 has the values 2 , 4 , 5 , and 8 and array 2
        has the values 1 , 0 , 4 , and 6 , the function assigns array 3 the values 3 , 4 , 9 , and 14 . The
        function should take three array names and an array size as arguments. Test the function
        in a simple program.
*/

#include <stdio.h>

void addAr(int ar1[], int ar2[], int ar3[], int size);
void printAr(int ar[], int size);


int main(void){
    int ar1[] = {2,4,5,8},
        ar2[] = {1,0,4,6},
        ar3[4];
    addAr(ar1, ar2, ar3, 4);
    printAr(ar3, 4);
    

    return 0;
}

void addAr(int ar1[], int ar2[], int ar3[], int size){
    for(int i=0; i<size; ++i){
        ar3[i] = ar1[i] + ar2[i];
    }
}

void printAr(int ar[], int size){
    for(int i=0; i<size; ++i){
        printf("%d ", ar[i]);
    }
    putchar('\n');
}
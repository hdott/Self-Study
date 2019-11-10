/*
    Write a function called transform() that takes four arguments: the name of a source
        array containing type double data, the name of a target array of type double , an int
        representing the number of array elements, and the name of a function (or, equivalently,
        a pointer to a function). The transform() function should apply the indicated function
        to each element in the source array, placing the return value in the target array. For
        example, the call
        transform(source, target, 100, sin);
        would set target[0] to sin(source[0]) , and so on, for 100 elements. Test the function
        in a program that calls transform() four times, using two functions from the math.h
        library and two suitable functions of your own devising as arguments to successive calls
        of the transform() function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAXE 100

void transform(const double *source, double *destination, int size, double (*pfunction)(const double));
void init_arr(double *src, int size);
void print_arr(double *src, int size);
double increment(double x);
double integerPart(double x);


int main(void){
    double *src = (double*) malloc(MAXE * sizeof(double));
    double *dest = (double*) malloc(MAXE * sizeof(double));
    srand((unsigned) time(0));
    init_arr(src, MAXE);

    printf("*** INITIAL ARR ***\n");
    print_arr(src, MAXE);

    transform(src, dest, MAXE, sin);
    printf("*** SIN ***\n");
    print_arr(dest, MAXE);

    transform(src, dest, MAXE, tan);
    printf("*** TAN ***\n");
    print_arr(dest, MAXE);

    transform(src, dest, MAXE, increment);
    printf("*** INCR ***\n");
    print_arr(dest, MAXE);

    transform(src, dest, MAXE, integerPart);
    printf("*** INTP ***\n");
    print_arr(dest, MAXE);


    free(src);
    free(dest);
    return 0;
}

void transform(const double *source, double *destination, int size, double (*pfunction)(const double)){
    for(int i = 0; i < size; ++i){
        destination[i] = pfunction(source[i]);
    }
}

void init_arr(double *src, int size){
    for(int i = 0; i < size; ++i){
        src[i] = (random() % size) / 2.0;
    }
}

void print_arr(double *src, int size){
    for(int i = 0; i < size;  ++i){
        printf("%g ", src[i]);
    }
    putchar('\n');
}

double increment(double x){
    return ++x;
}

double integerPart(double x){
    return (int)x;
}
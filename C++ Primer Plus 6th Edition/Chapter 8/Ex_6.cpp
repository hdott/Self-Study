/*
    Write a template function maxn() that takes as its arguments an array of items of
        type T and an integer representing the number of elements in the array and that
        returns the largest item in the array.Test it in a program that uses the function tem-
        plate with an array of six int value and an array of four double values.The pro-
        gram should also include a specialization that takes an array of pointers-to- char as
        an argument and the number of pointers as a second argument and that returns the
        address of the longest string. If multiple strings are tied for having the longest
        length, the function should return the address of the first one tied for longest.Test
        the specialization with an array of five string pointers.
*/

#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int size);
template <> char* maxn<char*>(char* arr[], int size);


int main(void){
    int arrI[6]{1, 2, 3, 4, 5 , 6};
    double arrD[4]{1, 2, 3, 4};
    // the compiler throws an error for converting const char* to char
    // but the example works for testing the template
    char* arrS[5]{"Test the", "specialization", "with an array",
                "of five", "string pointers"};
    
    std::cout << "Max int: " << maxn(arrI, 6) << std::endl;
    std::cout << "Max double: " << maxn(arrD, 4) << std::endl;
    std::cout << "Longest string:\n" << maxn(arrS, 5) << std::endl;


    return 0;
}

template <typename T>
T maxn(T arr[], int size){
    T max{arr[0]};

    for(int i=1; i<size; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}

template <> char* maxn<char*>(char* arr[], int size){
    int max{strlen(arr[0])};
    char* _tmp;

    for(int i=1; i<size; ++i){
        if(max < strlen(arr[i])){
            max = strlen(arr[i]);
            _tmp = arr[i];
        }
    }

    return _tmp;
}
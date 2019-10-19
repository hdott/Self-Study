/*
    Write a template function max5() that takes as its argument an array of five items
        of type T and returns the largest item in the array. (Because the size is fixed, it can
        be hard-coded into the loop instead of being passed as an argument.) Test it in a
        program that uses the function with an array of five int value and an array of five
        double values.
*/

#include <iostream>
template <typename T>
T max5(const T[5]);

int main(void){
    int arrI[]{1, 2, 3, 4, 5};
    double arrD[]{1.5, 3.2, 0.1, 1.2, 1.3};

    std::cout << "Max int: " << max5(arrI) << std::endl;
    std::cout << "Max double: " << max5(arrD) << std::endl;


    return 0;
}

template <typename T>
T max5(const T arr[5]){
    T max{arr[0]};

    for(int i=1; i<5; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}
/*
    Write a program that uses the following functions:
        Fill_array() takes as arguments the name of an array of double values and an
        array size. It prompts the user to enter double values to be entered in the array. It
        ceases taking input when the array is full or when the user enters non-numeric
        input, and it returns the actual number of entries.
        Show_array() takes as arguments the name of an array of double values and an
        array size and displays the contents of the array.
        Reverse_array() takes as arguments the name of an array of double values and an
        array size and reverses the order of the values stored in the array.
        The program should use these functions to fill an array, show the array, reverse the
        array, show the array, reverse all but the first and last elements of the array, and then
        show the array.
*/

#include <iostream>

int Fill_array(double [], int);
void Show_array(double [], int);
void Reverse_array(double [], int);


int main(void){
    std::cout << "Fill the array:" << std::endl;
    double arr[10];
    int size = Fill_array(arr, 10);
    std::cout << "The array entered is:" << std::endl;
    Show_array(arr, size);
    Reverse_array(arr, size);
    std::cout << "The reversed array is:" << std::endl;
    Show_array(arr, size);
    Reverse_array(arr+1, size-2);
    std::cout << "The reversed array except 1st and last is:" << std::endl;
    Show_array(arr, size);

    
    return 0;
}

int Fill_array(double arr[], int max){
    int i{-1};

    do{
        ++i;
        std::cout << "arr[" << i+1 << "] = ";
    } while(i<max && (std::cin >> arr[i]));

    return i;
}

void Show_array(double arr[], int size){
    for(int i=0; i<size; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Reverse_array(double arr[], int size){
    for(int i=0, j=size-1; i<size/2; ++i, --j){
        int _tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = _tmp;
    }
}
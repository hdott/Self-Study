/*
    Write a program that asks the user to enter up to 10 golf scores, which are to be
        stored in an array.You should provide a means for the user to terminate input prior
        to entering 10 scores.The program should display all the scores on one line and
        report the average score. Handle input, display, and the average calculation with
        three separate array-processing functions.
*/

#include <iostream>

int readArr(int [], int);
void printArr(int [], int);
double averageArr(int [], int);


int main(void){
    int arr[10];

    std::cout << "Enter up to 10 golf scores: " << std::endl;
    int size = readArr(arr, 10);

    std::cout << "The array is: ";
    printArr(arr, size);

    std::cout << "The average is: " << averageArr(arr, size) << std::endl;


    return 0;
}

int readArr(int arr[], int max){
    int i{0};
    for( ; i<max && std::cin; ++i){
        std::cout << "arr[" << i+1 << "] = ";
        std::cin >> arr[i];
    }

    if(i == 10){
        return 10;
    } else{
        return i-1;
    }
}

void printArr(int arr[], int size){
    for(int i=0; i<size; ++i){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}

double averageArr(int arr[], int size){
    double avr{0};
    for(int i=0; i<size; ++i){
        avr += arr[i];
    }

    return avr / size;
}
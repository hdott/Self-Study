/*
    Write a program that reads up to 10 donation values into an array of double . (Or, if
        you prefer, use an array template object.) The program should terminate input on
        non-numeric input. It should report the average of the numbers and also report
        how many numbers in the array are larger than the average.
*/

#include <iostream>


int main(void){
    double arr[10]{0},
            tmp;
    

    for(int i=0 ; i<10 && !std::cin.fail(); ++i){
        std::cin >> arr[i];
    }

    double average{0};
    int count_higher_than_average{0},
        iterator{0};

    while(arr[iterator] != 0 && iterator < 10){
        average += arr[iterator++];
    }
    --iterator;

    average /= (double)iterator;

    for( ; iterator>=0; --iterator){
        if(arr[iterator] > average){
            ++count_higher_than_average;
        }
    }

    std::cout << "Average is: " << average << std::endl;
    std::cout << "Numbers larger than the average: "
                << count_higher_than_average << std::endl;
    

    return 0;
}
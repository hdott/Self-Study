/*
    You sell the book C++ for Fools. Write a program that has you enter a year's
        worth of monthly sales (in terms of number of books, not of money). The
        program should use a loop to prompt you by month, using an array of char *
        (or an array of string objects, if you prefer) initialized to the month
        strings and storing the input data in an array of int. Then, the program
        should find the sum of the array contents and report the total sales for
        the year.
*/

#include <iostream>


int main(void){
    int monthly_sales,
        arr[12];
    std::string months[12]{"January", "February", "March", "April", "May",
                        "June", "July", "August", "September", "October", "November",
                        "December"};

    for(int i=0; i<12; ++i){
        std::cout << "Enter your monthly sales for " << months[i] << ": ";
        std::cin >> monthly_sales;
        arr[i] = monthly_sales;
    }

    int sum{0};
    for(int x : arr){
        sum += x;
    }

    std::cout << "Your yearly sales are: " << sum << std::endl;


    return 0;
}
/*
    Do Ex_5.cpp but use a two-dimensional array to store input for 3 years of
        monthly sales. Report the total sales for each individual year and for the
        combined years.
*/

#include <iostream>


int main(void){
    int monthly_sales,
        arr[3][12];
    std::string months[12]{"January", "February", "March", "April", "May",
                        "June", "July", "August", "September", "October", "November",
                        "December"};

    for(int i=0; i<3; ++i){
        for(int j=0; j<12; ++j){
            std::cout << "Enter your monthly sales for " << months[j]
                    << " of Year " << i+1 << ": ";
            std::cin >> monthly_sales;
            arr[i][j] = monthly_sales;
        }
    }

    int yearly_sales[3]{0};
    for(int i=0; i<3; ++i){
        for(int j=0; j<12; ++j){
            yearly_sales[i] += arr[i][j];
        }
    }

    int sum{0};
    for(int i=0; i<3; ++i){
        std::cout << "Yearly sales for Year " << i+1 << " are: "
                << yearly_sales[i] << std::endl;
        sum += yearly_sales[i];
    }

    std::cout << "Your total sales are: " << sum << std::endl;


    return 0;
}
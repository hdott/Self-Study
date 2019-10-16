/*
    The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol-
        lowing income tax code:
    First 5,000 tvarps: 0% tax
    Next 10,000 tvarps: 10% tax
    Next 20,000 tvarps: 15% tax
    Tvarps after 35,000: 20% tax
        For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
        0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
        loop to solicit incomes and to report tax owed.The loop should terminate when
        the user enters a negative number or non-numeric input.
*/

#include <iostream>


int main(void){
    const int firstI{5000},
            secondI{10000},
            thirdI{20000},
            lastI{35000};
    const double firstD{0.0},
                secondD{0.1},
                thirdD{0.15},
                lastD{0.2};

    std::cout << "Enter your income: ";
    int income;
    std::cin >> income;
    while(income > 0 && !std::cin.fail()){
        double tax{0};
        for(int i=0; i<4; ++i){
            switch(i){
                case 0:
                    if(income > firstI){
                        tax += firstI * firstD;
                        income -= firstI;
                    } else{
                        tax += income * firstD;
                        income -= income;
                    }
                    break;
                case 1:
                    if(income > secondI){
                        tax += secondI * secondD;
                        income -= secondI;
                    } else{
                        tax += income * secondD;
                        income -= income;
                    }
                    break;
                case 2:
                    if(income > thirdI){
                        tax += thirdI * thirdD;
                        income -= thirdI;
                    } else{
                        tax += income * thirdD;
                        income -= income;
                    }
                    break;
                case 3:
                    if(income > 0){
                        tax += income * lastD;
                    }
                    break;
            }       
        }

        std::cout << "Your tax is: " << tax << std::endl;
        std::cout << "Enter another income: ";
        std::cin >> income;
    }


    return 0;
}
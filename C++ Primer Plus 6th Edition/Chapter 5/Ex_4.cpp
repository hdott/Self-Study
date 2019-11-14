/*
    Daphne invests $100 at 10% simple interest. That is, every year, the investment
        earns 10% of the original investment, or $10 each and every year.
    interest = 0.10 x original balance
        At the same time, Cleo invests $100 at 5% compound interest. That is, interest
        is 5% of the current balance, including previous additions of interest:
    interest = 0.05 x current balance
        Cleo earn 5% of $100 the first year, giving her $105. The next year she earns
        5% of $105, or $5.25, and so on. Write a program that find how many years
        it takes for the value of Cleo's investment to exceed the value of Daphne's
        investment and then displays the value of both investments at that time.
*/

#include <iostream>


int main(void){
    const float simple_interest{0.10},
                compound_interest{0.05};
    
    float daphne{100},
            daphne_original_investment{100},
            cleo{100};

    int years{0};
    while(cleo <= daphne){
        daphne += simple_interest * daphne_original_investment;
        cleo += compound_interest * cleo;
        ++years;
    }

    std::cout << "Daphne's earnings are: " << daphne << std::endl;
    std::cout << "Cleo's earnings are: " << cleo << std::endl;
    std::cout << "Years passed: " << years << std::endl;


    return 0;
}
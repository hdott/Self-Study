#include "winec.h"
#include <iostream>

typedef std::pair<std::valarray<int>, std::valarray<int>> pair;

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : label(l), years(y){
    std::valarray<int> y1(yr, y),
                        b1(bot, y);
    pair::operator=(pair(y1, b1));
}

void Wine::GetBottles(void){
    int year[this->years],
        bottle[this->years];
    
    std::cout << "Enter " << label << " data for " << years << " year(s):" << std::endl;
    for(int i = 0; i < this->years; ++i){
        std::cout << "Enter year: ";
        std::cin >> year[i];

        std::cout << "Enter bottles for that year: ";
        std::cin >> bottle[i];
    }

    std::valarray<int> y(year, this->years),
                        b(bottle, this->years);
    pair::operator=(pair(y, b));
}

void Wine::Show(void) const{
    std::cout << "Wine: " << label << std::endl;
    std::cout << "\tYear\tBottles" << std::endl;
    for(int i = 0; i < this->years; ++i){
        std::cout << "\t" << pair::first[i] << "\t" << pair::second[i] << std::endl;
    }
}

int Wine::sum(void) const{
    return pair::second.sum();
}
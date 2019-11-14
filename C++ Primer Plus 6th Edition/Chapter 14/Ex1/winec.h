#pragma once
#include <valarray>
#include <iostream>


class Wine{
        std::string label;
        std::pair<std::valarray<int>, std::valarray<int>> pair;
        int years;
    public:
        Wine(const char *l, int y, const int yr[], const int bot[]);
        Wine(const char *l, int y) : label(l), years(y) {};

        void GetBottles(void);
        void Show(void) const;
        std::string Label(void) {return label;};
        int sum(void) const;
};
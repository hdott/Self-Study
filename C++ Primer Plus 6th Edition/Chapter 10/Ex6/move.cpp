#include <iostream>
#include "move.h"


Move::Move(double a, double b): x(a), y(b){};

void Move::showmove() const{
    std::cout << "x[" << this->x << "] y[" << this->y << "]" << std::endl;
}

Move Move::add(const Move &m) const{
    double x{m.x + this->x},
            y{m.y + this->y};
    
    return Move(x, y);
}

void Move::reset(double a, double b){
    this->x = a;
    this->y = b;
}
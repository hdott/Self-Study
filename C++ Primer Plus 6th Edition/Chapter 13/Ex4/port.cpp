#include <cstring>
#include "port.h"



Port::Port(const char * br, const char * st, int b) : bottles(b){
    brand = new char[strlen(br)+1];
    strcpy(brand, br);
    strcpy(style, st);
}

Port::Port(const Port & p){   // copy constructor
    // std::cerr << strlen(p.brand) << std::endl;
    brand = new char[strlen(p.brand)+1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p){
    if(this == &p){
        return *this;
    }
    
    delete[] brand;
    brand = new char[strlen(p.brand)+1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;

    return *this;
}

Port & Port::operator+=(int b){   // adds b to bottles
    bottles += b;

    return *this;
}

Port & Port::operator-=(int b){   // subtracts b from bottles, if available
    if(bottles < b){
        return *this;
    }
    
    bottles -= b;
    
    return *this;
}

void Port::Show() const{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

ostream & operator<<(ostream & os, const Port & p){
    os << p.brand << ", " << p.style << ", " << p.bottles;

    return os;
}
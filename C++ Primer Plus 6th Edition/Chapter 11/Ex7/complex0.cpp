#include <iostream>
#include "complex0.h"


complex::~complex(){}

complex complex::operator+(const complex & ri) const{
    return complex(real + ri.real, imaginary + ri.imaginary);
}

complex complex::operator-(const complex & ri) const{
    return complex(real - ri.real, imaginary - ri.imaginary);
}

complex complex::operator*(const complex & ri) const{
    return complex((real * ri.real) - (imaginary * ri.imaginary),
                    (real * ri.imaginary) + (imaginary * ri.real));
}

complex complex::operator~() const{
    return complex(real, -imaginary);
}

complex operator*(double x, const complex & ri){
    return complex(x * ri.real, x * ri.imaginary);
}

std::ostream& operator<<(std::ostream& os, const complex& ri){
    os << "(" << ri.real << "," << ri.imaginary << "i)";

    return os;
}

std::istream& operator>>(std::istream& is, complex& ri){
    std::cout << "real: ";
    is >> ri.real;
    std::cout << "imaginary: ";
    is >> ri.imaginary;

    return is;
}
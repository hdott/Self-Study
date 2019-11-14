#pragma once


class complex{
    private:
        double real,
                imaginary;
    
    public:
        complex(double r = 0.0, double i = 0.0):real(r), imaginary(i){};
        ~complex();

        complex operator+(const complex & ri) const;
        complex operator-(const complex & ri) const;
        complex operator*(const complex & ri) const;
        complex operator~() const;

        friend complex operator*(double x, const complex & ri);
        friend std::ostream& operator<<(std::ostream& os, const complex& ri);
        friend std::istream& operator>>(std::istream& is, complex& ri);
};
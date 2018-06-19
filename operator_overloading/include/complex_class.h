#ifndef COMPLEX_CLASS_H
#define COMPLEX_CLASS_H

#include <iostream>

namespace operatorOverloading {
class Complex{
private:
    double real;
    double imaginary;

public:
    Complex();
    Complex(double r, double i);

    void print() const;

    const Complex &operator + (const Complex &other);

    const Complex &operator - (const Complex &other);

    const Complex &operator * (const Complex &other);

    friend const std::ostream &operator << (std::ostream &out, const Complex &complex);
};

std::ostream const &operator << (std::ostream &out, const Complex &complex);

}

#endif // COMPLEX_CLASS_H

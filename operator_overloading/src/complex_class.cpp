#include "complex_class.h"

namespace operatorOverloading {

Complex::Complex() : real(0), imaginary(0) {

}

Complex::Complex(double r, double i) : real(r), imaginary(i) {

}

void Complex::print() const {
    std::cout << "(" << real << ") + (" << imaginary << ")i" << std::endl;
}

const Complex &Complex::operator + (const Complex &other) {
    real = real + other.real;
    imaginary = imaginary + other.imaginary;

    return *this;
}

const Complex &Complex::operator - (const Complex &other) {
    real = real - other.real;
    imaginary = imaginary - other.imaginary;

    return *this;
}

const Complex &Complex::operator * (const Complex &other) {
    real = (real * other.real) - (imaginary * other.imaginary);
    imaginary = (real * other.imaginary) + (imaginary + other.real);

    return *this;
}

const std::ostream &operator << (std::ostream &out, const Complex &complex) {
    std::cout << "(" << complex.real << ") + (" << complex.imaginary << ")i";
}

}

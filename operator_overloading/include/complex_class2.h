#ifndef COMPLEX_CLASS2_H
#define COMPLEX_CLASS2_H

#include <iostream>

namespace operatorOverloading2 {

class ComplexClass{
private:
    double real;
    double imaginary;

public:
    ComplexClass();
    ComplexClass(double real, double imaginary);

    double getReal();
    double getImaginary();

    void print();
};

std::ostream &operator << (std::ostream &out, ComplexClass complex);
bool operator == (ComplexClass complex, ComplexClass other);
}

#endif // COMPLEX_CLASS2_H

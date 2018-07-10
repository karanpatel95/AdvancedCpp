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

    double getReal() const;
    double getImaginary() const;

    void print();

    ComplexClass operator *() const;
};

std::ostream &operator << (std::ostream &out, ComplexClass complex);
bool operator == (ComplexClass complex, ComplexClass other);
}

#endif // COMPLEX_CLASS2_H

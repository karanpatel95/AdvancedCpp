#include <complex_class2.h>

namespace operatorOverloading2 {

ComplexClass::ComplexClass() : real(0), imaginary(0){

}

ComplexClass::ComplexClass(double real, double imaginary) : real(real), imaginary(imaginary){

}

void ComplexClass::print(){
    std::cout << "(" << real << ") + (" << imaginary << ")i" << std::endl;
}

double ComplexClass::getReal(){
    return real;
}

double ComplexClass::getImaginary(){
    return imaginary;
}

std::ostream &operator << (std::ostream &out, ComplexClass complex){
    out << "(" << complex.getReal() << ") + (" << complex.getImaginary() << "i)";
    return out;
}

bool operator == (ComplexClass complex, ComplexClass other){
    return (complex.getReal() == other.getReal()) && (complex.getImaginary() && other.getImaginary());
}
}

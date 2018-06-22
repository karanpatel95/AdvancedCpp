#include "complex_class2.h"

using namespace operatorOverloading2;

int main(){
    ComplexClass complex(34, 2);
    complex.print();

    std::cout << complex.getReal() << " + " << complex.getImaginary() << std::endl;

    std::cout << complex << std::endl;

    return 0;
}

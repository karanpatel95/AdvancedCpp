#include "complex_class.h"

using namespace operatorOverloading;

int main(){
    Complex complex(34,64);
    Complex complex2(32.3, 43.3);
    complex.print();

    // <<  and  + operators are overloaded
    std::cout << complex + complex2 << std::endl;

    // -, * operators overloading
    std::cout << complex - complex2 << std::endl;
    std::cout << complex * complex2 << std::endl;

    return 0;
}

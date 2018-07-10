#include "complex_class2.h"

using namespace operatorOverloading2;

int main(){
    ComplexClass complex(3, 4);
    ComplexClass complex2(3, 4);

    if(complex == complex2){
        std::cout << complex << " and " << complex2 << " are equal" << std::endl;
    }
    else{
        std::cout << complex << " and " << complex2 << " are NOT equal" << std::endl;
    }

    std::cout << complex << " : " << complex2 << std::endl;

    // overloading dereference operator as a complex conjugate

    std::cout << "conjugate: " << *complex << std::endl;

    return 0;
}

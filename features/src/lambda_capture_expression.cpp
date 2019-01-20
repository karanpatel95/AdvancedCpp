#include <iostream>

int main() {

    int one = 1;
    int two = 2;
    int three = 3;

    // getting one and two by value
    [one, two](){std::cout << one << " : " << two << std:: endl;}();

    // getting all variables by value
    [=](){std::cout << one << " : " << two << std::endl;}();

    // getting all variable by reference
    [&](){
        std::cout << one << " : " << two << std::endl;
        three = 8;
    }();
    std::cout << three << std::endl;

    // getting all variable by value, but one by reference
    [=, &one](){
        one = 4;
        std::cout << one << " : " << two << std::endl;
    }();

    return 0;
}

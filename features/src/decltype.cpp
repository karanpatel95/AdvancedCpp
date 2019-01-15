#include <iostream>
#include <typeinfo>

int main() {
    std::string value;
    std::cout << typeid(value).name() << std::endl;

    decltype(value) otherValue = "check";
    std::cout << typeid(otherValue).name() << std::endl;

    return 0;
}

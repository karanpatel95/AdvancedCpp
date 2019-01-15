#include <iostream>

template <class T>
auto test1(T value) -> decltype(value){
    return value;
}

template <class T, class S>
auto test2(T value, S value2) -> decltype(value + value2) {
    return value + value2;
}

auto test() -> int{
    return 5;
}

int main() {

    auto value = 48;
    std::cout << value << std::endl;

    auto stringValue = "string";
    std::cout << stringValue << std::endl;

    std::cout << test() << std::endl;

    std::cout << test1(3) << std::endl;
    std::cout << test1("stringTest") << std::endl;

    std::cout << test2(4, 5) << std::endl;
    std::cout << test2<std::string, std::string>("check", "string") << std::endl;

    return 0;
}

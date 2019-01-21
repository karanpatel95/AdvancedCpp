#include <iostream>

int main() {

    int number = 3;

    [number]() mutable {
        number = 29;
        std::cout << number << std::endl;
    }();

    std::cout << number << std::endl;

    return 0;
}

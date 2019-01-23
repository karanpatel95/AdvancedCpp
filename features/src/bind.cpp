#include <iostream>
#include <functional>

class Test {
public:
    int add(int a, int b, int c) {
        std::cout << a << " , " << b << " , " << c << std::endl;
        return a + b + c;
    }
};

int add(int a, int b, int c) {
    std::cout << a << " , " << b << " , " << c << std::endl;
    return a + b + c;
}

int run(std::function<int(int , int)> func) {
    return func(4, 5);
}

int main() {

    auto calculate = std::bind(add, 12, 2, 4);
    std::cout << calculate() << std::endl;

    auto calculate2 = std::bind(add, std::placeholders::_3, std::placeholders::_2, std::placeholders::_1);
    std::cout << calculate2(1, 2, 3) << std::endl;

    auto calculate3 = std::bind(add, std::placeholders::_1, 100, std::placeholders::_2);
    std::cout << calculate3(2, 3) << std::endl;

    std::cout << run(calculate3) << std::endl;

    Test test;
    auto calculate4 = std::bind(&Test::add, test, 1, 2, 3);
    std::cout << calculate4() << std::endl;

    return 0;
}

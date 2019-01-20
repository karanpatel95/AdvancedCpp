#include <iostream>

void testGreet(void (*pGreet)(std::string name)) {
    pGreet("test");
}

void runDivide(double (*pDivide)(double a, double b)) {
    std::cout << pDivide(9, 3) << std::endl;
}

int main() {

    auto pGreet = [](std::string name) {
        std::cout << "Hello " << name << "!!" << std::endl;
    };

    pGreet("John");

    testGreet(pGreet);

    auto divide = [](double a, double b) -> double{
        if (b == 0) {
            return 0;
        }
        return a / b;
    };

    std::cout << divide(4, 2) << std::endl;
    std::cout << divide(3, 0) << std::endl;

    runDivide(divide);

    return 0;
}

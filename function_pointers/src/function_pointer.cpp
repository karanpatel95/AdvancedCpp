#include <iostream>

void print() {
    std::cout << "Hello!" << std::endl;
}

void printNumber(int n) {
    std::cout << n << std::endl;
}

double returnDouble(double n) {
    return 2 * n;
}

int main() {

    print();

    // declaration of the function pointer
    void (*pFunction)();

    // assigning pointer var to function
    pFunction = &print;

    // dereference pointer function
    (*pFunction)();

    // only function name points to the function
    void(*pFunctionEasy)() = print;
    pFunctionEasy();

    void (*pNumberFunction)(int) = printNumber;
    pNumberFunction(3);

    double (*pReturnDoubleFunction)(double) = returnDouble;
    double result = pReturnDoubleFunction(34);
    std::cout << "return value is: " << result << std::endl;

    return 0;
}

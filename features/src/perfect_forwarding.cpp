#include <iostream>

class Test {

};

void check(Test &test) {
    std::cout << "lvalue" << std::endl;
}

void check(Test &&test) {
    std::cout << "rvalue" << std::endl;
}

template<class T>
void call(T &&arg) {
    // check(arg); // does not work
    // check(static_cast<T>(arg)); // works
    check(std::forward<T>(arg)); // works
}

int main() {

    Test test;
    call(test);
    call(Test());

    return 0;
}

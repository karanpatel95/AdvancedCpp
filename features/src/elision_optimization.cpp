#include <iostream>

class Test {
public:
    Test() {
        std::cout << "constructor without parameter" << std::endl;
    }

    Test(std::string text) {
        std::cout << "parameterized constructor" << std::endl;
    }

    Test(const Test &other) {
        std::cout << "copy constructor" << std::endl;
    }

    ~Test() {
        std::cout << "destructor" << std::endl;
    }

    Test &operator =(const Test &other) {
        std::cout << " = operator" << std::endl;
        return *this;
    }

    friend std::ostream &operator <<(std::ostream &out, const Test &other);
};

std::ostream &operator <<(std::ostream &out, const Test &other) {
    out << "hello Test class";
    return out;
}

Test getTest() {
    return Test();
}

int main() {
    Test test = getTest();
    std::cout << test << std::endl;
    return 0;
}

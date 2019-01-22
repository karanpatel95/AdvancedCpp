#include <iostream>
#include <memory.h>

class Test {

private:
    int _size = 100;
    int *_pbuffer;

public:
    Test() {
        std::cout << "constructor" << std::endl;
        _pbuffer = new int[_size];
    }

    Test(std::string str) {
        std::cout << "parameterized constructor" << std::endl;
        _pbuffer = new int[_size];
        for(int i = 0; i < _size; i++) {
            _pbuffer[i] = i * 9;
        }
    }

    Test(const Test &other) {
        std::cout << "copy constructor" << std::endl;
        _pbuffer = new int[_size];
        memcpy(_pbuffer, other._pbuffer, sizeof(int)*_size);
    }

    Test &operator =(const Test &other) {
        std::cout << "assignment operator" << std::endl;
        memcpy(_pbuffer, other._pbuffer, sizeof(int)*_size);
        return *this;
    }

    friend std::ostream &operator <<(std::ostream &out, Test &test);

    ~Test() {
        std::cout << "destructor" << std::endl;
        delete[] _pbuffer;
    }
};

std::ostream &operator <<(std::ostream &out, Test &test) {
    out << "Test class print" << std::endl;
    for (int i = 0; i < test._size; i++) {
        std::cout << test._pbuffer[i] << " ";
    }
    return out;
}

Test getTest() {
    return Test();
}

void checkTest(const Test &test) {
    std::cout << "LValue reference!" << std::endl;
}

void checkTest(Test &&test) {
    std::cout << "RValue reference!" << std::endl;
}

void intValueTest(const int &value) {
    std::cout << "LValue reference" << std::endl;
}

void intValueTest(int &&value) {
    std::cout << "RValue reference" << std::endl;
}

int main() {

    Test test;
    std::cout << test << std::endl;

    Test test2("second");
    std::cout << test2 << std::endl;

    test = test2;
    std::cout << test << std::endl;

    Test test3 = test;
    std::cout << test3 << std::endl;

    int check = 8;
    int *pCheck = &check;
    int &rCheck = check;
    std::cout << pCheck << std::endl;
    std::cout << &rCheck << std::endl;

    Test &rTest = test;
    // Test &rFunTest = getTest(); // this does not work
    const Test &rFunTest = getTest();

    // -----------------------------------------

    Test &lValue = test;
    Test &&rValue = Test(); // RValue referece
    Test &&rValue2 = getTest(); // RValue

    checkTest(test);
    checkTest(Test());
    checkTest(getTest());

    int number = 44;
    intValueTest(++number); // LValue reference
    intValueTest(number++); // RValue reference

    return 0;
}

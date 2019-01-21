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

int main() {

    Test test;
    std::cout << test << std::endl;

    Test test2("second");
    std::cout << test2 << std::endl;

    test = test2;
    std::cout << test << std::endl;

    Test test3 = test;
    std::cout << test3 << std::endl;

    return 0;
}

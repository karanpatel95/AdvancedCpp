#include <iostream>
#include <vector>
#include <memory.h>

class Test {

private:
    int _size = 100;
    int *_pBuffer = nullptr;

public:

    Test() {
        _pBuffer = new int[_size];
    }

    Test(int j) {
        _pBuffer = new int[_size];
        for (int i = 0; i < j; i++) {
            _pBuffer[i] = 8 * i;
        }
    }

    Test(const Test &other) {
        _pBuffer = new int[_size];
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*_size);
    }

    Test(Test &&other) {
        std::cout << "move constructor" << std::endl;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
    }

    Test &operator =(const Test &other) {
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*_size);
        return *this;
    }

    friend std::ostream &operator <<(std::ostream &out, Test &test);

    ~Test() {
        std::cout << "destructor" << std::endl;
        delete[] _pBuffer;
    }
};

std::ostream &operator <<(std::ostream &out, Test &test) {
    out << "print Test class" << std::endl;
    for(int i = 0; i < test._size; i++) {
        std::cout << test._pBuffer[i] << " ";
    }
    return out;
}

int main() {
    Test test;
    std::cout << test << std::endl;

    Test test2(3);
    std::cout << test2 << std::endl;

    test = test2;
    std::cout << test << std::endl;

    Test test3 = test2;
    std::cout << test3 << std::endl;

    std::vector<Test> vec;
    vec.push_back(Test(10));
    std::cout << vec[0] << std::endl;

    return 0;
}

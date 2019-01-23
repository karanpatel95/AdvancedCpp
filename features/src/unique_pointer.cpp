#include <iostream>
#include <memory>

class Test {
public:
    Test() {
        std::cout << "created" << std::endl;
    }
    void greet() {
        std::cout << "hello" << std::endl;
    }
    ~Test() {
        std::cout << "destroyed" << std::endl;
    }
};

class Temp {
private:
    std::unique_ptr<Test[]> ptest;
public:
    Temp() : ptest(new Test[2]) {}
};

int main() {

    std::unique_ptr<int> pint(new int);
    *pint = 3;
    std::cout << *pint << std::endl;

    {
        std::unique_ptr<Test[]> ptest(new Test[2]);
        ptest[1].greet();
    }

    Temp temp;

    std::cout << "finished" << std::endl;
    return 0;
}

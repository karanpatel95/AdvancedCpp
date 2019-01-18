#include <iostream>

class Test {
private:
    int id = 4;
    std::string name = "name";

public:
    Test() = default;

    Test(int id, std::string name) : id(id), name(name) {}

    Test(const Test &other) = default;
//    Test(const Test &other) = delete;

    Test &operator =(const Test &other) = default;
//    Test &operator =(const Test &other) = delete;

    void print() {
        std::cout << id << " : " << name << std::endl;
    }


};

int main() {
    Test test;
    test.print();

    Test test2(3,"new");
    test2.print();

    Test test3 = test2; // will invoke copy constructor
    test3 = test; // this will use = operator

    return 0;
}

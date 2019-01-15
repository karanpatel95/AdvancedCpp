#include <iostream>

class Parent {
private:
    int one;
public:
    Parent() : one(1) {

    }

    Parent(const Parent& other) : one(3) {
        one = other.one;
        std::cout << "Copy parent" << std::endl;
        // other.two -- this is not available
        std::cout << one << std::endl;
    }

    virtual void print() {
        std::cout << "Parent class" << std::endl;
    }
};

class Child : public Parent {
private:
    int two;
public:
    Child() : two(2) {

    }
    void print() {
        std::cout << "Child class" << std::endl;
    }
};

int main() {
    Child c;
    Parent& p1 = c;
    p1.print();

    Parent p = Child(); // calling copy constructor
    p.print();

    Parent p3 = Parent();

    return 0;
}

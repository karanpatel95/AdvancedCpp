#include <iostream>

class Parent {
public:
    Parent() {
        std::cout << "Parent constructor" << std::endl;
    }
    virtual void name() {
        std::cout << "Parent class" << std::endl;
    }
    virtual ~Parent() {
        std::cout << "Parent destructor" << std::endl;
    }
};

class Child : public Parent {
public:
    Child() {
        std::cout << "Child constructor" << std::endl;
    }
    void name() {
        std::cout << "Child class" << std::endl;
    }
    ~Child() {
        std::cout << "Child destructor" << std::endl;
    }
};

int main() {
//    Parent parent;
//    Child child;
    Parent* parent = new Child();
    parent->name();
    delete parent;
    return 0;
}

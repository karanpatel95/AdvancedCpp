#include <iostream>

class Parent {
private:
    int number = 4;
    std::string text = "Hello";
public:
    // delegating constructor
    Parent() : Parent("hello"){
        std::cout << "no parameter constructor" << std::endl;
    }
    Parent(std::string text) {
        this->text = text;
        std::cout << "constructor with a string parameter" << std::endl;
    }
};

class Child : public Parent {
public:
    Child() : Parent("Hi"){}
};

int main() {
    Parent parent;
    Child child;
    return 0;
}

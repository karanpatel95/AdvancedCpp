#include <iostream>

class Parent {
public:
    void speak() {
        std::cout << "Parent!" << std::endl;
    }
};

class Brother : public Parent {

};

class Sister : public Parent {

};

int main() {

    Parent parent;
    Brother brother;

    Parent *ppb = &brother;
    Brother *pbb = &brother;

    // pbb = ppb; // this does not work
    pbb = static_cast<Brother *>(ppb);
    std::cout << ppb << std::endl;
    std::cout << pbb << std::endl;

    // Parent &&rRef = parent; // this does not work
    Parent &&rRef = static_cast<Parent &&>(parent);
    rRef.speak();

    return 0;
}

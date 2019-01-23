#include <iostream>

class Parent {
public:
    virtual void speak() {
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

    //-----------------------Dynamic Cast------
    ppb = &parent;
    pbb = static_cast<Brother *>(ppb); // this could be wrong

    ppb = &parent;
    pbb = dynamic_cast<Brother *>(ppb); // checks at runtime

    if(pbb == nullptr) {
        std::cout << "wrong casting" << std::endl;
    }

    Sister sister;
    Sister *pss = &sister;

    ppb = &brother;
//    pss = static_cast<Sister *>(ppb);
    pss = reinterpret_cast<Sister *>(ppb);

    std::cout << pss << std::endl;

    return 0;
}

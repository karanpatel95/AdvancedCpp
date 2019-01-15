#include <iostream>

class Animal {
public:
    virtual void speak() = 0;
    virtual void run() = 0;
};

class Dog : public Animal {
public:
    virtual void speak() {
        std::cout << "Woof!!" << std::endl;
    }
};

class Labrador : public Dog {
public:
    virtual void run() {
        std::cout << "Labrador running!" << std::endl;
    }
};

void test(Animal &animal) {
    animal.run();
}

int main() {
    Labrador lab;
    lab.speak();
    lab.run();

    test(lab);

    Animal *animals[5];
    animals[0] = &lab;
    animals[0]->run();
    animals[0]->speak();

    return 0;
}

#include <iostream>

class Test{
private:
    int id;
    std::string name;

public:
    Test(int id, std::string name) : id(id), name(name) {

    }

    void print() const {
        std::cout << id << " : " << name << std::endl;
    }

    const Test &operator = (const Test &other) {
        id = other.id;
        name = other.name;
        std::cout << "assignment operator called!" << std::endl;
        return *this;
    }

    Test(const Test &other){
        id = other.id;
        name = other.name;
        std::cout << "copy constructor called!" << std::endl;
    }

    ~Test(){
//        std::cout << "destructor called" << std::endl;
    }
};

int main(){

    Test test1(21, "karan");
    Test test2(10, "Mike");

    std::cout << "test 1" << std::endl;
    test1 = test2;
    test1.print();

    std::cout << "test 2" << std::endl;
    Test test3(14, "Jack");
    test1 = test2 = test3;
    test1.print();

    std::cout << "test 3" << std::endl;
    test1.operator =(test3);
    test1.print();

    // implicit copy constructor is called here
    // copy initialization
    std::cout << "test 4" << std::endl;
    Test test4 = test3;
    test4.print();

    return 0;
}

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

    friend std::ostream &operator << (std::ostream &out, Test &test);
};

std::ostream &operator << (std::ostream &out, Test &test) {
    std::cout << test.id << " : " << test.name;
    return out;
}

int main(){
    Test test(2, "karan");
    test.print();

    // overloaded print operator
    std::cout << test << std::endl;
    return 0;
}

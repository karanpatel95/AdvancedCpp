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

int main() {

    std::shared_ptr<Test> pTest1(nullptr);

    {
        std::shared_ptr<Test> pTest2 = std::make_shared<Test>();
        pTest1 = pTest2;
    }

    std::cout << "finished" << std::endl;
    return 0;
}

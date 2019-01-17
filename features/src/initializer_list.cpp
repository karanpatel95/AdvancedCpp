#include <iostream>
#include <vector>
#include <initializer_list>

class Test{
public:
    Test(std::initializer_list<std::string> texts) {
        for(auto text : texts) {
            std::cout << text << std::endl;
        }
    }

    void print(std::initializer_list<std::string> texts) {
        for(auto text : texts) {
            std::cout << text << std::endl;
        }
    }
};

int main() {

    std::vector<int> numbers {1,3,4,5,6};
    std::cout << numbers[4] << std::endl;

    Test test{"one", "two", "three"};

    test.print({"four", "five", "six"});

    return 0;
}

#include <iostream>
#include <vector>

int main() {

    int simple_array[] = {1, 3, 4, 5};
    std::cout << simple_array[0] << std::endl;

    class C{
    public:
        std::string text;
        int index;
    };

    C c = {"hello", 3};
    std::cout << c.text << std::endl;

    struct S{
        std::string text;
        int index;
    };
    S s = {"hello struct", 4};
    std::cout << s.text << std::endl;

    struct S2{
        std::string text;
        int index;
    } s1 = {"first", 3}, s2 = {"second", 34};

    std::cout << s1.text << std::endl;
    std::cout << s2.text << std::endl;

    std::vector<std::string> numbers;
    numbers.push_back("one");
    numbers.push_back("second");
    numbers.push_back("three");

    return 0;
}

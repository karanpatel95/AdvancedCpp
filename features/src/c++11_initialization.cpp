#include <iostream>
#include <vector>

int main() {
    std::string text{"hello"};
    std::cout << text << std::endl;

    int numbers[5]{1,3,5,3,2};
    std::cout << numbers[3] << std::endl;

    int *pInt = new int[3]{1,3,5};
    std::cout << *pInt << std::endl;

    int value1{};
    std::cout << value1 << std::endl;

    int *pSomething{};
    std::cout << pSomething << std::endl;

    int *pSomething2{nullptr};
    std::cout << pSomething2 << std::endl;

    int numbers2[4]{};
    std::cout << numbers2[2] << std::endl;

    struct{
        int index;
        std::string text;
    } s1{2, "structure"};
    std::cout << s1.index << " : " << s1.text << std::endl;

    std::vector<std::string> strings{"one", "two", "three", "four"};
    std::cout << strings[2] << std::endl;

    return 0;
}

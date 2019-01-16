#include <iostream>
#include <vector>

int main() {

    std::string texts[] = {"one", "two", "three"};
    auto strings = {"one", "two", "three"};

    for(std::string text : texts) {
        std::cout << text << std::endl;
    }

    for(auto str : strings) {
        std::cout << str << std::endl;
    }

    std::string s = "hello!";
    for(auto c : s) {
        std::cout << c << std::endl;
    }

    std::vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    for (auto num : numbers){
        std::cout << num << std::endl;
    }

    return 0;
}

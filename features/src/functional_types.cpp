#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool check(std::string str) {
    return str.size() == 3;
}

class Check {
private:
    int size = 3;
public:
    bool operator ()(const std::string &str) const {
        return str.size() == size;
    }
} check1;

void run(std::function<bool(std::string&)> func) {
    std::string str = "seven";
    std::cout << func(str) << std::endl;
}

int main() {

    int size = 5;
    std::vector<std::string> numbers = {"one", "two", "three"};

    auto pLambda = [size](std::string str){
        return str.size() == size;
    };

    std::cout << std::count_if(numbers.begin(), numbers.end(), pLambda) << std::endl; // using lambda function
    std::cout << std::count_if(numbers.begin(), numbers.end(), check) << std::endl; // using function pointer
    std::cout << std::count_if(numbers.begin(), numbers.end(), check1) << std::endl; // using functor

    std::cout << " ============== " << std::endl;

    run(pLambda);
    run(check);
    run(check1);

    std::function<int(int, int)> add = [](int a, int b){return a + b;};
    std::cout << add(3, 4) << std::endl;

    return 0;
}

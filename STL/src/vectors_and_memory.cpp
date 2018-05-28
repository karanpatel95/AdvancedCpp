#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    std::cout << "vector size is : " << numbers.size() << std::endl;
    int capacity = numbers.capacity();

    std::cout << "capacity is : " << capacity << std::endl;

    for(int i = 0; i < 20000; i++){
        numbers.push_back(i);
        if(capacity != numbers.capacity()){
             capacity = numbers.capacity();
             std::cout << "capacity is : " << capacity << std::endl;
        }
    }

//    numbers.clear();
//    numbers.reserve(3000000);
    numbers.resize(200);
    std::cout << "vector size is : " << numbers.size() << std::endl;
    std::cout << "element at index 2 is " << numbers[2] << std::endl;
    std::cout << "vector capcatiy is : " << numbers.capacity() << std::endl;

    return 0;
}

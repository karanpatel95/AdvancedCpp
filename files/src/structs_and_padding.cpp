#include <iostream>

#pragma pack(push, 1)
struct Example{
    char cards[50];
    int number;
    double weight;
};
#pragma pack(pop)

int main(){
//    Example structExample;
//    std::cout << sizeof(structExample) << std::endl;
    std::cout << sizeof(Example) << std::endl;

    return 0;
}

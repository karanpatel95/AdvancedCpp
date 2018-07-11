#include <iostream>

template <class T>
void print(T arg){
    std::cout << arg << std::endl;
}

int main(){
    print<std::string>("Hello!");
    print<int>(342);
    print<double>(32.323);

    return 0;
}

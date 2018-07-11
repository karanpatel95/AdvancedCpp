#include <iostream>

template<class T>
void print(T arg){
    std::cout << "templated function - " << arg << std::endl;
}

void print(int arg){
    std::cout << "nontemplated function - " << arg << std::endl;
}

// function where important to specify type
template<class T>
void show(){
    std::cout << T() << std::endl;
}

template<class T, class K>
K templateReturnFunction(T arg, K out){
    std::cout << "taken as input: " << arg << std::endl;
    std::cout << "output: " << out << std::endl;
    return out;
}

int main(){
    print<std::string>("Hello!");
    print<int>(342);
    print<double>(32.323);

    print<>(4);
    print<int>(4);
    print(4);

    show<std::string>();
    show<int>();

    int output = templateReturnFunction<std::string, int>("INPUT STRING", 2);
    std::cout << output << std::endl;

    std::string output2 = templateReturnFunction<>("INPUT STRING", "2");
    std::cout << output2 << std::endl;

    return 0;
}

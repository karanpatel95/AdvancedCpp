#include <iostream>

template <class T, class K, class J>
class Test{
private:
    T obj;
    K other_obj;
    J third_obj;

public:
    Test(T obj, K other_obj, J third_obj){
        this->obj = obj;
        this->other_obj = other_obj;
        this->third_obj = third_obj;
    }


    void print(){
        std::cout << obj << " & " << other_obj << " & " << third_obj << std::endl;
    }
};

int main(){
    Test<std::string, int, std::string> test("Hello!", 43, "string!");
    test.print();

    Test<double, char, std::string> test2(323.43, 'c', "string");
    test2.print();

    return 0;
}

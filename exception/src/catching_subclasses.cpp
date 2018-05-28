#include <iostream>
#include <exception>

class MyException : public std::exception{
public:

    bool error1Detected, error2Detected;

    MyException(){
        error1Detected = true;
        error2Detected = false;
    }
    void goesWrong(){
        if(error1Detected){
            throw std::bad_alloc();
        }
        if(error2Detected){
            throw std::exception();
        }
    }
};

int main(){
    try{
        MyException e;
        e.goesWrong();
    }
    catch(std::bad_alloc &e){
        std::cout << "catching bad_alloc " << e.what() << std::endl;
    }
    catch(std::exception &e){
        std::cout << "catching exception " << e.what() << std::endl;
    }
    return 0;
}

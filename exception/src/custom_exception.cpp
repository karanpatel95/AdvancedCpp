#include <iostream>
#include <exception>

class MyException : public std::exception{
public:
    virtual const char* what() const throw(){
        return "Something bad happened!!";
    }
};

class Test{
public:
    void somethingWentWrong() throw(){
        throw MyException();
    }
};
int main(){
    Test t;
    try{
        t.somethingWentWrong();
    }
    catch(MyException &e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}

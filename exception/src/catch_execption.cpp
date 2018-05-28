#include <iostream>

void mightGoWrong(){

    bool error1 = false;
    bool error2 = true;

    if(error1){
        throw "Something went wrong";
    }

    if(error2){
        throw std::string("Something else went wrong");
    }
}

void usageMightGoWrong(){
    mightGoWrong();
}

int main(){
    try{
        usageMightGoWrong();
    }
    catch(int e){
        std::cout << "Error code: " << e << std::endl;
    }
    catch(char const *e){
        std::cout << "Error message: " << e << std::endl;
    }
    catch(std::string &e){
        std::cout << "string error message: " << e << std::endl;
    }

    std::cout << "Still Running" << std::endl;

    return 0;
}

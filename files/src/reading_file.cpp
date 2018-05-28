#include <iostream>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::string inFileName = "test.txt";

    inFile.open(inFileName);

    if(inFile.is_open()){
        std::string line;
        while(inFile){
            std::getline(inFile, line);
            std::cout << line << std::endl;
        }
        inFile.close();
    }
    else{
        std::cout << "Could not open file " << inFileName << std::endl;
    }

    return 0;
}

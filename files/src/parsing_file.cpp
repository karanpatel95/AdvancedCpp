#include <iostream>
#include <fstream>

int main(){
    std::ifstream inputFile;
    std::string inputFileName = "stats.txt";

    inputFile.open(inputFileName);
    if(inputFile.is_open()){
        while(inputFile){
            std::string line;
            std::getline(inputFile, line, ':');
            int number;
            inputFile >> number;

            inputFile >> std::ws;

            if(!inputFile){
                break;
            }

            std::cout << line << " -- " << number << std::endl;
        }
        inputFile.close();
    }
    else{
        std::cout << "Couldn't open the file " << inputFileName << std::endl;
    }

    return 0;
}

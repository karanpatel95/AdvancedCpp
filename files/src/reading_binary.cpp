#include <iostream>
#include <fstream>

struct Person{
    char name[50];
    int age;
    double height;
};

int main(){

    /// Writing binary file ///

    Person someone = {"karan", 23, 5.5};
    std::ofstream outputFile;
    std::string outputFileName = "test.bin";
    outputFile.open(outputFileName, std::ios::binary);

    if(outputFile.is_open()){
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outputFile.close();
    }
    else{
        std::cout << "couldn't able to open file name " << outputFileName << std::endl;
    }

    /// Reading binary file ///

    Person someoneElse;
    std::ifstream inputFile;
    std::string inputFileName = "test.bin";
    inputFile.open(inputFileName, std::ios::binary);

    if(inputFile.is_open()){
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        std::cout << "name: "  << someoneElse.name << std::endl;
        std::cout << "age: " << someoneElse.age << std::endl;
        std::cout << "height: " << someoneElse.height << std::endl;
        inputFile.close();
    }
    else{
        std::cout << "couldn't able to read file name " << inputFileName << std::endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>

int main(){

//    std::ofstream outFile;
    std::fstream outFile;
    std::string outFileName = "test.txt";
//    outFile.open(outFileName);
    outFile.open(outFileName, std::ios::out);

    if(outFile.is_open()){
        outFile << "First line" << std::endl;
        outFile << "Second line" << std::endl;
        outFile.close();
    }
    else{
        std::cout << "Could not open file " << outFileName << std::endl;
    }

    return 0;
}

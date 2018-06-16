#include <iostream>
#include <vector>
#include <map>

int main(){
    std::map<std::string, std::vector<int> > conv_structure;
    conv_structure["karan"].push_back(12);
    conv_structure["karan"].push_back(22);
    conv_structure["Raj"].push_back(34);
    conv_structure["Rock"].push_back(44);

    for(std::map<std::string, std::vector<int> >::iterator it = conv_structure.begin(); it != conv_structure.end(); it++){
        std::cout << it->first;
        for(int i = 0; i < (it->second).size(); i++){
            std::cout << "-" << (it->second)[i];
        }
        std::cout << std::endl;
    }

    return 0;
}

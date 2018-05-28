#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("four");
    strings.push_back("five");

    /// 1st method to iterate through vectors ///

    for(int i = 0; i < strings.size(); i++){
        std::cout << strings[i] << std::endl;
    }

    /// 2nd method to iterate through vectors ///

    for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++){
        std::cout << *it << std::endl;
    }
    return 0;
}

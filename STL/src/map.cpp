#include <iostream>
#include <map>

int main(){
    std::map<std::string, int> ages;
    ages["Karan"] = 23;
    ages["AB"] = 43;
    ages["Vicky"] = 32;

    // changes the existing value
    ages["Karan"] = 24;

//    std::pair<std::string, int> addToMap("Peter", 100);
//    ages.insert(addToMap);

//    ages.insert(std::pair<std::string, int>("Peter", 100));

    ages.insert(std::make_pair("Peter", 100));

    /// wrong -- creates empty key  ///
//    std::cout << ages["karan"] << std::endl;

    /// find ///
    if(ages.find("AB") != ages.end()){
        std::cout << "Value of the key is " << ages["AB"] << std::endl;
    }
    else{
        std::cout << "couldn't able to find" << std::endl;
    }

    for(std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        std::cout << it->first << " : " << it->second << std::endl;
    }

    /// using pair ///
    std::cout << "--------using pair--------" << std::endl;

    for(std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        std::pair<std::string, int> age = *it;

        std::cout << age.first << " : " << age.second << std::endl;

    }


    return 0;
}

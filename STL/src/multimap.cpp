#include <iostream>
#include <map>

int main(){
    std::multimap<int, std::string> lookup;

    lookup.insert(std::make_pair(12,"karan"));
    lookup.insert(std::make_pair(32,"vicky"));
    lookup.insert(std::make_pair(21,"john"));
    lookup.insert(std::make_pair(32,"vicky"));
    lookup.insert(std::make_pair(32,"vicky"));

    std::cout << "we can have same key value pairs" << std::endl;

    for(std::multimap<int, std::string>::iterator it = lookup.begin(); it != lookup.end(); it++){
        std::cout << it->first << " : " << it->second << std::endl;
    }

    std::cout << "------------------" << std::endl;

    for(std::multimap<int, std::string>::iterator it = lookup.find(21); it != lookup.end(); it++){
        std::cout << it->first << " : " << it->second << std::endl;
    }

    std::cout << "------------------" << std::endl;

    std::pair<std::multimap<int, std::string>::iterator, std::multimap<int, std::string>::iterator> its = lookup.equal_range(32);

    for(std::multimap<int, std::string>::iterator it = its.first; it != its.second; it++){
        std::cout << it->first << " : " << it->second << std::endl;
    }

    std::cout << "------------------" << std::endl;

    auto its2 = lookup.equal_range(32);

    for(auto it = its2.first; it != its2.second; it++){
        std::cout << it->first << " : " << it->second << std::endl;
    }


    return 0;
}

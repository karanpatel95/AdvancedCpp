#include <iostream>
#include <set>

class Test{

private:
    int id;
    std::string name;

public:

    Test(int id, std::string name) : id(id), name(name){

    }

    Test() : id(0), name(""){

    }

    void print() const {
        std::cout << id << " : " << name << std::endl;
    }

    bool operator < (const Test &other) const {
        if(name != other.name){
            return name < other.name;
        }
        else{
            return id < other.id;
        }
    }
};

int main(){

    std::set<int> numbers;

    numbers.insert(21);
    numbers.insert(22);
    numbers.insert(25);
    numbers.insert(32);
    numbers.insert(22);
    numbers.insert(21);

    for(std::set<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl;
    }

    /// finding a number ///

    std::set<int>::iterator it = numbers.find(32);
    if(it != numbers.end()){
        std::cout << "found number " << *it << std::endl;
    }
    else{
        std::cout << "couldn't find" << std::endl;
    }

    if(numbers.count(32)){
        std::cout << "found number." << std::endl;
    }
    else{
        std::cout << "couldn't find" << std::endl;
    }

    /// using custom class as a set type ///

    std::set<Test> people;
    people.insert(Test(1, "karan"));
    people.insert(Test(3, "vicky"));
    people.insert(Test(4, "kp"));
    people.insert(Test(1, "karan"));
    people.insert(Test(3, "start"));
    people.insert(Test(5, "kp"));

    for(std::set<Test>::iterator it = people.begin(); it != people.end(); it++){
        it->print();
    }

    return 0;
}

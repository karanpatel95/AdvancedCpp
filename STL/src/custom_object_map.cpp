#include <iostream>
#include <map>

class Person{
private:
    std::string name;
    int age;

public:
    Person():name(""),age(0){

    }

    Person(const Person &other){
        std::cout << "Copy constructor running!" << std::endl;
        name = other.name;
        age  = other.age;
    }

    Person(std::string name, int age) :
        name(name), age(age){

    }

    void print() const {
        std::cout << name << ": " << age << std::endl;
    }
};

int main(){

    std::map<int, Person> people;

    people[07] = Person("Mike", 43);
    people[12] = Person("Karan", 23);
    people[2] = Person("Vicky", 42);

    people.insert(std::make_pair(9, Person("Peter", 100)));
    people.insert(std::make_pair(34, Person("unknown", 3)));

    for(std::map<int, Person>::iterator it = people.begin(); it != people.end(); it++){
        std::cout << it->first << " : " ;
        it->second.print();
    }

    return 0;
}

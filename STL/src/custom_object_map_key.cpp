#include <iostream>
#include <map>

class Person{

private:
    std::string name;
    int age;

public:
    Person(): name(""), age(0){

    }

    Person(std::string name, int age) : name(name), age(age){

    }

    Person(const Person &other){
        name = other.name;
        age = other.age;
    }

    void print() const {
        std::cout << name << " : " << age << std::endl;
    }

    bool operator <(const Person &other) const {
        if(name != other.name){
            return name < other.name;
        }
        else{
            return age < other.age;
        }
    }
};

int main(){

    std::map<Person, int> people;
    people[Person("karan", 23)] = 3;
    people[Person("Rock", 40)] = 23;
    people[Person("Vicky", 34)] = 42;
    people[Person("karan", 21)] = 23;

    for(std::map<Person, int>::iterator it = people.begin(); it != people.end(); it++){
        std::cout << it->second << " : ";
        it->first.print();
    }

    return 0;
}

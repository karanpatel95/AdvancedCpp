#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

class Test{
private:
    std::string name;
    int id;

public:
    Test(std::string name, int id) : name(name), id(id)
    {

    }

    ~Test()
    {

    }

//    bool operator < (const Test &other) const{
//        if(this->name != other.name){
//            return this->name < other.name;
//        }
//        else{
//            return this->id < other.id;
//        }
//    }

    void print() const {
        std::cout << this->id << " : " << this->name << std::endl;
    }

    friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b) {
    if(a.name != b.name){
        return a.name < b.name;
    }
    else{
        return a.id < b.id;
    }
}

int main(){
    std::vector<Test> people;

    people.push_back(Test("karan", 34));
    people.push_back(Test("karan", 2));
    people.push_back(Test("Rock", 55));
    people.push_back(Test("Jack", 43));
    people.push_back(Test("Rohan", 22));

    std::sort(people.begin(), people.end(), comp);

    for(std::vector<Test>::iterator it = people.begin(); it != people.end(); it++){
        it->print();
    }

    std::deque<Test> students;
    students.push_back(Test("karan", 34));
    students.push_back(Test("karan", 2));
    students.push_back(Test("Rock", 55));
    students.push_back(Test("Jack", 43));
    students.push_back(Test("Rohan", 22));

    students.pop_front();
    students.pop_back();

    std::sort(students.begin(), students.end(), comp);
    std::cout << "--------- DEQUE ---------" << std::endl;

    for(std::deque<Test>::iterator it = students.begin(); it != students.end(); it++){
        it->print();
    }
    return 0;
}

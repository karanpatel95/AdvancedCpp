#include <iostream>
#include <list>

int main(){
    std::list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    for(std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl;
    }

    /// inserting element into the list ///

    std::cout << "----------Inserting an Element---------" << std::endl;
    std::list<int>::iterator it = numbers.begin();
    it++;
    it++;
    numbers.insert(it, 21);

    for(std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl;
    }

    /// removing element from the list ///

    std::cout << "-----------Removing Element----------" << std::endl;

    std::list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    numbers.erase(eraseIt);

    for(std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl;
    }

    /// using loop to insert and remove element ///

    std::cout << "-----------Using loop to remove and insert-----------" << std::endl;

    std::list<int>::iterator loopIt = numbers.begin();
    while(loopIt != numbers.end()){
        if(*loopIt == 2){
            numbers.insert(loopIt, 222);
        }

        if(*loopIt == 21){
            loopIt = numbers.erase(loopIt);
        }
        else{
            loopIt++;
        }
    }

    for(std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl;
    }

    return 0;
}

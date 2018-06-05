#include <iostream>
#include <stack>
#include <queue>

class Test{
private:
    std::string name;
public:
    Test(std::string name) : name(name){

    }

    ~Test(){
//        std::cout << "destructor called!" << std::endl;
    }

    void print(){
        std::cout << name << std::endl;
    }
};

int main(){

    /// stack implementation

    std::stack<Test> testStack;
    testStack.push(Test("karan"));
    testStack.push(Test("Rocky"));
    testStack.push(Test("John"));

    /// Wrong method : object is destroyed
    /*Test &test1 = testStack.top();
    test1.print();
    testStack.pop();
    test1.print();*/ // test1 in pointing to the destroyed object

    std::cout << std::endl;

    while(testStack.size() != 0){
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    /// queue implementation

    std::queue<Test> testQueue;
    testQueue.push(Test("karan"));
    testQueue.push(Test("Rocky"));
    testQueue.push(Test("John"));

    std::cout << std::endl;
    testQueue.back().print();
    std::cout << std::endl;

    while(testQueue.size() != 0){
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}

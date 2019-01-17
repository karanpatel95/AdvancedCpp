#include <iostream>
#include <ring.h>

int main() {

    ring<std::string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");
    textring.add("five");

    for(int i = 0; i < textring.size(); i++) {
        std::cout << textring.get(i) << std::endl;
    }

    std::cout << "=========" << std::endl;

    for(ring<std::string>::iterator it = textring.begin(); it != textring.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << "=========" << std::endl;

    for(std::string text : textring) {
        std::cout << text << std::endl;
    }

    std::cout << "==========" << std::endl;
    textring.add({"nine", "ten", "eleven", "twelve"});
    for(auto text : textring) {
        std::cout << text << std::endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

bool matchSize(std::string arg) {
    return(arg.size() == 3);
}

int countStringSize(std::vector<std::string> text, bool (*pMatchSize)(std::string)) {
    int count = 0;
    for(int i = 0; i < text.size(); i++) {
        if(pMatchSize(text[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<std::string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("five");
    texts.push_back("six");
    texts.push_back("seven");

    std::cout << matchSize(texts[0]) << std::endl;

    std::cout << std::count_if(texts.begin(), texts.end(), matchSize) << std::endl;

    std::cout << countStringSize(texts, matchSize) << std::endl;

    return 0;
}

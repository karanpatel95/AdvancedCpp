#include <iostream>

struct Test {
    virtual bool operator ()(std::string text) = 0;
};

struct MatchTest : public Test{
    bool operator ()(std::string text) {
        return text == "checkString";
    }
};

void test(std::string text, Test &testobj) {
    if (testobj(text)) {
        std::cout << "string matches!" << std::endl;
    }
    else {
        std::cout << "no match!" << std::endl;
    }
}

int main() {
    MatchTest match;
    std::cout << match("checkString") << std::endl;

    test("checkString", match);

    Test *t = new MatchTest;
    test("string", *t);

    return 0;
}

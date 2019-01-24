#include <iostream>
#include "bitmap.h"

int main() {

    bitmap::Bitmap bmp(600, 800);
    bool val = bmp.write("test.bmp");
    std::cout << val << std::endl;
    std::cout << "finished" << std::endl;
    return 0;
}

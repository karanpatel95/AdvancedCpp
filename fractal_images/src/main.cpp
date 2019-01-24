#include <iostream>
#include "bitmap.h"

int main() {

    const int WIDTH = 600;
    const int HEIGHT = 800;

    bitmap::Bitmap bmp(WIDTH, HEIGHT);
    bmp.setPixel(0, 0, 255, 0, 0);

    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            bmp.setPixel(i, j, 255, 0, 0);
        }
    }

    bool val = bmp.write("test.bmp");
    std::cout << val << std::endl;
    std::cout << "finished" << std::endl;
    return 0;
}

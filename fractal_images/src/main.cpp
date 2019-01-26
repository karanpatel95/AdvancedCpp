#include <iostream>
#include "bitmap.h"
#include "mandelbrot.h"

int main() {

    const int WIDTH = 600;
    const int HEIGHT = 800;

    bitmap::Bitmap bmp(WIDTH, HEIGHT);

    double min = 999999;
    double max = -999999;

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            double xFractal = ((2.0 * x) / WIDTH) - 1;
            double yFractal = ((2.0 * y) / HEIGHT) - 1;

            int iterations = bitmap::Mandelbrot::getIterations(xFractal, yFractal);
            bmp.setPixel(x, y, iterations, iterations, iterations);

            if(iterations < min) min = xFractal;
            if(iterations > max) max = xFractal;

        }
    }

    std::cout << min << " : " << max << std::endl;
    bool val = bmp.write("test.bmp");

    std::cout << "finished" << std::endl;
    return 0;
}

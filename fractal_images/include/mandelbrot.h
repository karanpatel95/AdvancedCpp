#ifndef MANDELBROT_H
#define MANDELBROT_H

namespace bitmap {

class Mandelbrot
{
public:
    static const int MAX_ITERATIONS = 10000;

public:
    Mandelbrot();
    static int getIterations(double x, double y);
};

}

#endif // MANDELBROT_H

#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <cstdint>

namespace bitmap {

class Bitmap {

private:
    int _width;
    int _height;

public:
    Bitmap(int width, int height);
    bool write(std::string filename);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    ~Bitmap();
};

}

#endif // BITMAP_H

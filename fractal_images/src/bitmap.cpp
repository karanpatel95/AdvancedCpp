#include <fstream>
#include "bitmap.h"
#include "bitmapheaderfile.h"
#include "bitmapinfoheader.h"

namespace bitmap {

Bitmap::Bitmap(int width, int height) : _width(width), _height(height), _pPixels(new uint8_t[width*height*3]{}) {

}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

}

bool Bitmap::write(std::string filename) {

    BitMapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;

    fileHeader.fileSize = sizeof(BitMapFileHeader) + sizeof(BitmapInfoHeader) + _width*_height*3;
    fileHeader.dataOffset = sizeof(BitMapFileHeader) + sizeof(BitmapInfoHeader);

    infoHeader.width = _width;
    infoHeader.height = _height;

    std::ofstream file;
    file.open(filename, std::ios::out | std::ios::binary);

    if(!file) {
        return false;
    }

    file.write((char *) &fileHeader, sizeof(BitMapFileHeader));
    file.write((char *) &infoHeader, sizeof(BitmapInfoHeader));
    file.write((char *) _pPixels.get(), _width*_height*3);

    file.close();

    if(!file) {
        return false;
    }

    return true;
}

Bitmap::~Bitmap() {

}

}

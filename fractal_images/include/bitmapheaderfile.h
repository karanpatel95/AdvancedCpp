#ifndef BITMAPHEADERFILE_H
#define BITMAPHEADERFILE_H

#include<cstdint>

#pragma pack(2)

namespace bitmap {

struct BitMapFileHeader {
    char header[2]{'B', 'M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffset;
};

}

#endif // BITMAPHEADERFILE_H

// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class RegionFile {
public:
    virtual ~RegionFile();

public:
    MCAPI bool open();
    MCAPI bool readChunk(int, int, class RakNet::BitStream**);
};
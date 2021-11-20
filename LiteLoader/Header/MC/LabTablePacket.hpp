// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/LabTablePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LabTablePacket : public Packet {
#include "Extra/LabTablePacketAPI.hpp"
public:
    virtual ~LabTablePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};
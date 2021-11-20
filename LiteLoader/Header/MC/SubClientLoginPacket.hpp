// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SubClientLoginPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SubClientLoginPacket : public Packet {
#include "Extra/SubClientLoginPacketAPI.hpp"
public:
    virtual ~SubClientLoginPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};
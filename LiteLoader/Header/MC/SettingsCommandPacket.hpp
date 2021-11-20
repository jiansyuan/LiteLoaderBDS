// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SettingsCommandPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SettingsCommandPacket : public Packet {
#include "Extra/SettingsCommandPacketAPI.hpp"
public:
    virtual ~SettingsCommandPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI std::string const& getCommandString() const;
    MCAPI bool getSupressOutput() const;
};
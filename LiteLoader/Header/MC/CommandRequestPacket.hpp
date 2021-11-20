// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/CommandRequestPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandRequestPacket : public Packet {
#include "Extra/CommandRequestPacketAPI.hpp"
public:
    virtual ~CommandRequestPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI std::unique_ptr<class CommandContext> createCommandContext(class NetworkIdentifier const&, class Bedrock::NonOwnerPointer<class ILevel> const&, int) const;
    MCAPI bool getInternalSource() const;
};
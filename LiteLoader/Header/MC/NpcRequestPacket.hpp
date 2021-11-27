// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/NpcRequestPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NpcRequestPacket : public Packet {
#include "Extra/NpcRequestPacketAPI.hpp"
public:
    virtual ~NpcRequestPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI NpcRequestPacket();
    MCAPI std::string const& getInteractText() const;
    MCAPI std::string const& getNpcName() const;
    MCAPI std::string const& getSceneName() const;
    MCAPI int getSkin() const;

    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int);

private:
    MCAPI NpcRequestPacket(class ActorRuntimeID, enum NpcRequestPacket::RequestType, std::string, unsigned char);
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/TextPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TextPacket : public Packet {
#include "Extra/TextPacketAPI.hpp"
public:
    virtual ~TextPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI static class TextPacket createAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    MCAPI static class TextPacket createChat(std::string const&, std::string const&, std::string const&, std::string const&);
    MCAPI static class TextPacket createSystemMessage(std::string const&);
    MCAPI static class TextPacket createTextObjectMessage(class ResolvedTextObject const&, std::string, std::string);
    MCAPI static class TextPacket createTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    MCAPI static class TextPacket createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    MCAPI static class TextPacket createWhisper(std::string const&, std::string const&, std::string const&, std::string const&);
};
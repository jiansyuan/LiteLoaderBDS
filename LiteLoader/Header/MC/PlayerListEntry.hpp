// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

enum PlayerListPacketType { Add,
                            Remove };

#undef BEFORE_EXTRA //DO NOT EDIT THIS LINE

class PlayerListEntry {

#define AFTER_EXTRA
// Add Member There
public:
    std::vector<class PlayerListEntry> entries;
    enum PlayerListPacketType type;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTENTRY
public:
    class PlayerListEntry& operator=(class PlayerListEntry const&) = delete;
    PlayerListEntry(class PlayerListEntry const&) = delete;
    PlayerListEntry() = delete;
#endif

public:
    MCAPI PlayerListEntry(class Player const&);
    MCAPI class PlayerListEntry clone() const;
    MCAPI bool read(class ReadOnlyBinaryStream&);
    MCAPI void write(class BinaryStream&) const;
    MCAPI ~PlayerListEntry();

protected:

private:

};
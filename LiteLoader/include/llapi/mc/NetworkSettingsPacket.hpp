/**
 * @file  MC/NetworkSettingsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkSettingsPacket.
 *
 */
class NetworkSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSETTINGSPACKET
public:
    class NetworkSettingsPacket& operator=(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NetworkSettingsPacket();
    /**
     * @hash   113220293
     * @vftbl  1
     * @symbol ?getId@NetworkSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -764339982
     * @vftbl  2
     * @symbol ?getName@NetworkSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1829875163
     * @vftbl  3
     * @symbol ?write@NetworkSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2110276069
     * @vftbl  6
     * @symbol ?_read@NetworkSettingsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};
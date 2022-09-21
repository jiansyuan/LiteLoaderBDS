/**
 * @file  MC/PositionTrackingDBClientRequestPacket.hpp
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
 * @brief MC class PositionTrackingDBClientRequestPacket.
 *
 */
class PositionTrackingDBClientRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDBCLIENTREQUESTPACKET
public:
    class PositionTrackingDBClientRequestPacket& operator=(class PositionTrackingDBClientRequestPacket const &) = delete;
    PositionTrackingDBClientRequestPacket(class PositionTrackingDBClientRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PositionTrackingDBClientRequestPacket();
    /**
     * @hash   -1688849440
     * @vftbl  1
     * @symbol ?getId@PositionTrackingDBClientRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1790218611
     * @vftbl  2
     * @symbol ?getName@PositionTrackingDBClientRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1744831642
     * @vftbl  3
     * @symbol ?write@PositionTrackingDBClientRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1830356058
     * @vftbl  6
     * @symbol ?_read@PositionTrackingDBClientRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1927639958
     * @symbol ??0PositionTrackingDBClientRequestPacket@@QEAA@XZ
     */
    MCAPI PositionTrackingDBClientRequestPacket();

};
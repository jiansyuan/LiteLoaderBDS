/**
 * @file  CameraPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class CameraPacket.
 *
 */
class CameraPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPACKET
public:
    class CameraPacket& operator=(class CameraPacket const &) = delete;
    CameraPacket(class CameraPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1276887
     */
    virtual ~CameraPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CameraPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   696752145
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CameraPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1438562626
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CameraPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1022086247
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CameraPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1355592089
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CameraPacket@@QEAA@XZ
     * @hash   -1373970567
     */
    MCAPI CameraPacket();
    /**
     * @symbol ??0CameraPacket@@QEAA@UActorUniqueID@@0@Z
     * @hash   -878879941
     */
    MCAPI CameraPacket(struct ActorUniqueID, struct ActorUniqueID);

};
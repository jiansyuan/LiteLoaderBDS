/**
 * @file  PurchaseReceiptPacket.hpp
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
 * @brief MC class PurchaseReceiptPacket.
 *
 */
class PurchaseReceiptPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PURCHASERECEIPTPACKET
public:
    class PurchaseReceiptPacket& operator=(class PurchaseReceiptPacket const &) = delete;
    PurchaseReceiptPacket(class PurchaseReceiptPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1127469907
     */
    virtual ~PurchaseReceiptPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PurchaseReceiptPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -334280049
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PurchaseReceiptPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1825053380
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PurchaseReceiptPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1263673163
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1741209195
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PurchaseReceiptPacket@@QEAA@XZ
     * @hash   49219067
     */
    MCAPI PurchaseReceiptPacket();
    /**
     * @symbol ?sMaxReceiptsPerPacket@PurchaseReceiptPacket@@2_KB
     * @hash   1600278590
     */
    MCAPI static unsigned __int64 const sMaxReceiptsPerPacket;

};
/**
 * @file  FireChargeItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireChargeItem.
 *
 */
class FireChargeItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIRECHARGEITEM
public:
    class FireChargeItem& operator=(class FireChargeItem const &) = delete;
    FireChargeItem(class FireChargeItem const &) = delete;
    FireChargeItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -584759545
     */
    virtual ~FireChargeItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  56
     * @symbol ?isDestructive@FireChargeItem@@UEBA_NH@Z
     * @hash   -861180150
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  85
     * @symbol ?dispense@FireChargeItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -1143641655
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  131
     * @symbol ?_calculatePlacePos@FireChargeItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   -439699740
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@FireChargeItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   1703610395
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0FireChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1792887269
     */
    MCAPI FireChargeItem(std::string const &, int);
    /**
     * @symbol ?LEVEL_SOUND_EVENT_VOLUME@FireChargeItem@@2HB
     * @hash   -1841009127
     */
    MCAPI static int const LEVEL_SOUND_EVENT_VOLUME;

};
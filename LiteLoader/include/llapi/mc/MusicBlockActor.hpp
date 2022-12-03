/**
 * @file  MusicBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MusicBlockActor.
 *
 */
class MusicBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICBLOCKACTOR
public:
    class MusicBlockActor& operator=(class MusicBlockActor const &) = delete;
    MusicBlockActor(class MusicBlockActor const &) = delete;
    MusicBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1023289147
     */
    virtual ~MusicBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@MusicBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1633916092
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@MusicBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1754998147
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @symbol ??0MusicBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -628055552
     */
    MCAPI MusicBlockActor(class BlockPos const &);
    /**
     * @symbol ?playNote@MusicBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1100526213
     */
    MCAPI void playNote(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?tune@MusicBlockActor@@QEAAXXZ
     * @hash   1878823539
     */
    MCAPI void tune();

};
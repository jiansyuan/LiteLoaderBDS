/**
 * @file  MC/TopSnowBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TopSnowBlock.
 *
 */
class TopSnowBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOPSNOWBLOCK
public:
    class TopSnowBlock& operator=(class TopSnowBlock const &) = delete;
    TopSnowBlock(class TopSnowBlock const &) = delete;
    TopSnowBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TopSnowBlock();
    /**
     * @hash   -101993317
     * @vftbl  5
     * @symbol ?getCollisionShape@TopSnowBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -517845899
     * @vftbl  10
     * @symbol ?getAABB@TopSnowBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   287115013
     * @vftbl  35
     * @symbol ?isWaterBlocking@TopSnowBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -1552893853
     * @vftbl  62
     * @symbol ?canContainLiquid@TopSnowBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   1308713737
     * @vftbl  68
     * @symbol ?checkIsPathable@TopSnowBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1224034859
     * @vftbl  83
     * @symbol ?isPreservingMediumWhenPlaced@TopSnowBlock@@UEBA_NPEBVBlockLegacy@@@Z
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /**
     * @hash   -73205381
     * @vftbl  91
     * @symbol ?mayPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -923804670
     * @vftbl  93
     * @symbol ?tryToPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @hash   -580328106
     * @vftbl  95
     * @symbol ?breaksFallingBlocks@TopSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   1923944921
     * @vftbl  97
     * @symbol ?playerWillDestroy@TopSnowBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -15345193
     * @vftbl  99
     * @symbol ?neighborChanged@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -627874213
     * @vftbl  101
     * @symbol ?getResourceCount@TopSnowBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1708685629
     * @vftbl  102
     * @symbol ?getResourceItem@TopSnowBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1042128312
     * @vftbl  103
     * @symbol ?asItemInstance@TopSnowBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   1336099668
     * @vftbl  107
     * @symbol ?getPlacementBlock@TopSnowBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -1241753361
     * @vftbl  115
     * @symbol ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @hash   1763289832
     * @vftbl  116
     * @symbol ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1205409040
     * @vftbl  123
     * @symbol ?shouldStopFalling@TopSnowBlock@@UEBA_NAEAVActor@@@Z
     */
    virtual bool shouldStopFalling(class Actor &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @hash   2000678437
     * @vftbl  125
     * @symbol ?calcGroundFriction@TopSnowBlock@@UEBAMAEBUIMobMovementProxy@@AEBVBlockPos@@@Z
     */
    virtual float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1253769073
     * @vftbl  144
     * @symbol ?getVisualShape@TopSnowBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   -325190536
     * @vftbl  166
     * @symbol ?onExploded@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -251345745
     * @vftbl  171
     * @symbol ?onPlace@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -909820263
     * @vftbl  173
     * @symbol ?playerDestroy@TopSnowBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   461461915
     * @vftbl  174
     * @symbol ?tick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   957636440
     * @vftbl  175
     * @symbol ?randomTick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   -614002095
     * @vftbl  192
     * @symbol ?getDustColor@TopSnowBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @hash   844673148
     * @vftbl  193
     * @symbol ?getDustParticleName@TopSnowBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl  194
     * @symbol __unk_vfn_194
     */
    virtual void __unk_vfn_194();
    /**
     * @hash   1165942446
     * @vftbl  196
     * @symbol ?isFreeToFall@TopSnowBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   576827493
     * @vftbl  197
     * @symbol ?startFalling@TopSnowBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TOPSNOWBLOCK
    /**
     * @hash   -1485105552
     * @symbol ?canBeDestroyedByWaterSpread@TopSnowBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @hash   -615294414
     * @symbol ?canBeSilkTouched@TopSnowBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   637984741
     * @symbol ?canHaveExtraData@TopSnowBlock@@UEBA_NXZ
     */
    MCVAPI bool canHaveExtraData() const;
    /**
     * @hash   -2042863766
     * @symbol ?waterSpreadCausesSpawn@TopSnowBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   1004950211
     * @symbol ??0TopSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI TopSnowBlock(std::string const &, int);
    /**
     * @symbol ?getResourceItemFromFalling@TopSnowBlock@@QEBA?AVItemInstance@@XZ
     */
    MCAPI class ItemInstance getResourceItemFromFalling() const;
    /**
     * @hash   241556629
     * @symbol ?melt@TopSnowBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI bool melt(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   557465394
     * @symbol ?startFallingIfLostSupport@TopSnowBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI void startFallingIfLostSupport(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -585179510
     * @symbol ?buildSnowBlock@TopSnowBlock@@SAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    MCAPI static class Block const & buildSnowBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @hash   -586501040
     * @symbol ?getCoveredBlock@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class Block const & getCoveredBlock(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   271703500
     * @symbol ?getSnowBlockToBuild@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    MCAPI static class Block const & getSnowBlockToBuild(class BlockSource const &, class BlockPos const &, int, bool);

//private:
    /**
     * @hash   227063383
     * @symbol ?_canBeBuiltOver@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBVBlockItem@@@Z
     */
    MCAPI bool _canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const *) const;
    /**
     * @hash   1524716127
     * @symbol ?_canSurvive@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _canSurvive(class BlockSource &, class BlockPos const &) const;

private:

};
/**
 * @file  MC/HeavyBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HeavyBlock.
 *
 */
class HeavyBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEAVYBLOCK
public:
    class HeavyBlock& operator=(class HeavyBlock const &) = delete;
    HeavyBlock(class HeavyBlock const &) = delete;
    HeavyBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HeavyBlock();
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
     * @hash   -668974376
     * @vftbl  99
     * @symbol ?neighborChanged@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
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
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -750616821
     * @vftbl  152
     * @symbol ?animateTick@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
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
     * @hash   -995649426
     * @vftbl  171
     * @symbol ?onPlace@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1313643964
     * @vftbl  174
     * @symbol ?tick@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
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
     * @hash   -1403806291
     * @vftbl  192
     * @symbol ?getDustColor@TopSnowBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     */
    virtual class mce::Color getDustColor(class Block const &) const = 0;
    /**
     * @hash   1086664648
     * @vftbl  193
     * @symbol ?getDustParticleName@TopSnowBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string getDustParticleName(class Block const &) const = 0;
    /**
     * @vftbl  194
     * @symbol __unk_vfn_194
     */
    virtual void __unk_vfn_194();
    /**
     * @hash   -1256733408
     * @vftbl  195
     * @symbol ?onLand@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1803346076
     * @vftbl  196
     * @symbol ?isFreeToFall@HeavyBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1727877684
     * @vftbl  197
     * @symbol ?startFalling@HeavyBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEAVYBLOCK
    /**
     * @hash   1685041337
     * @symbol ?falling@HeavyBlock@@UEBA_NXZ
     */
    MCVAPI bool falling() const;
#endif
    /**
     * @hash   579672045
     * @symbol ??0HeavyBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI HeavyBlock(std::string const &, int, class Material const &);
    /**
     * @hash   -570056623
     * @symbol ?triggerFallCheck@HeavyBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void triggerFallCheck(class BlockSource &, class BlockPos const &) const;

//protected:
    /**
     * @hash   671410143
     * @symbol ?_tickBlocksAround2D@HeavyBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void _tickBlocksAround2D(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   2045501651
     * @symbol ?checkSlide@HeavyBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void checkSlide(class BlockSource &, class BlockPos const &) const;

protected:

};
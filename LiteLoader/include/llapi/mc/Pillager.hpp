/**
 * @file  Pillager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Pillager.
 *
 */
class Pillager : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGER
public:
    class Pillager& operator=(class Pillager const &) = delete;
    Pillager(class Pillager const &) = delete;
    Pillager() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   1804860246
     */
    virtual ~Pillager();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  63
     * @hash   -89434495
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  264
     * @symbol ?updateEntitySpecificMolangVariables@Pillager@@UEAAXAEAVRenderParams@@@Z
     * @hash   442467972
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@Pillager@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1856287829
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  344
     * @symbol ?_getWalkTargetValue@Pillager@@UEAAMAEBVBlockPos@@@Z
     * @hash   1585577943
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @vftbl  362
     * @symbol ?isDarkEnoughToSpawn@Pillager@@UEBA_NXZ
     * @hash   -783474164
     */
    virtual bool isDarkEnoughToSpawn() const;
    /**
     * @symbol ??0Pillager@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1958556616
     */
    MCAPI Pillager(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};
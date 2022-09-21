/**
 * @file  MC/SpawnAoECloudSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnAoECloudSubcomponent.
 *
 */
class SpawnAoECloudSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNAOECLOUDSUBCOMPONENT
public:
    class SpawnAoECloudSubcomponent& operator=(class SpawnAoECloudSubcomponent const &) = delete;
    SpawnAoECloudSubcomponent(class SpawnAoECloudSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SpawnAoECloudSubcomponent();
    /**
     * @hash   -537705342
     * @vftbl  1
     * @symbol ?readfromJSON@SpawnAoECloudSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1880505655
     * @vftbl  2
     * @symbol ?writetoJSON@SpawnAoECloudSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   392584748
     * @vftbl  3
     * @symbol ?doOnHitEffect@SpawnAoECloudSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -1452072249
     * @vftbl  4
     * @symbol ?getName@SpawnAoECloudSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   1975620898
     * @symbol ??0SpawnAoECloudSubcomponent@@QEAA@XZ
     */
    MCAPI SpawnAoECloudSubcomponent();

};
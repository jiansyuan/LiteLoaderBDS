/**
 * @file  InstantDespawnSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantDespawnSystem.
 *
 */
class InstantDespawnSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTDESPAWNSYSTEM
public:
    class InstantDespawnSystem& operator=(class InstantDespawnSystem const &) = delete;
    InstantDespawnSystem(class InstantDespawnSystem const &) = delete;
    InstantDespawnSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -442372526
     */
    virtual ~InstantDespawnSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@InstantDespawnSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1576380744
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ?createInstantDespawningPlayerCleanupSystem@InstantDespawnSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1335117258
     */
    MCAPI static struct TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem();

};
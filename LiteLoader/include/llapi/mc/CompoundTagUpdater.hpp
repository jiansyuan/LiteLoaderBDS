/**
 * @file  CompoundTagUpdater.hpp
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
 * @brief MC class CompoundTagUpdater.
 *
 */
class CompoundTagUpdater {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATER
public:
    class CompoundTagUpdater& operator=(class CompoundTagUpdater const &) = delete;
    CompoundTagUpdater(class CompoundTagUpdater const &) = delete;
    CompoundTagUpdater() = delete;
#endif

public:
    /**
     * @symbol ?update@CompoundTagUpdater@@QEBA_NAEAVCompoundTag@@@Z
     * @hash   -767309907
     */
    MCAPI bool update(class CompoundTag &) const;
    /**
     * @symbol ??1CompoundTagUpdater@@QEAA@XZ
     * @hash   -1278903980
     */
    MCAPI ~CompoundTagUpdater();

};
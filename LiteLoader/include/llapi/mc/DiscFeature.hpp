/**
 * @file  MC/DiscFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DiscFeature.
 *
 */
class DiscFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISCFEATURE
public:
    class DiscFeature& operator=(class DiscFeature const &) = delete;
    DiscFeature(class DiscFeature const &) = delete;
    DiscFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DiscFeature();
    /**
     * @hash   1630203531
     * @vftbl  3
     * @symbol ?place@DiscFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -118325755
     * @symbol ??0DiscFeature@@QEAA@AEBVBlock@@H@Z
     */
    MCAPI DiscFeature(class Block const &, int);

};
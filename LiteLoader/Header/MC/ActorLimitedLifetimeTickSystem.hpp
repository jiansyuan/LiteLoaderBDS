// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ActorLimitedLifetimeTickSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorLimitedLifetimeTickSystem : public ITickingSystem {
#include "Extra/ActorLimitedLifetimeTickSystemAPI.hpp"
public:
    virtual ~ActorLimitedLifetimeTickSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};
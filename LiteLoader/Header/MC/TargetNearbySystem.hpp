// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/TargetNearbySystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TargetNearbySystem : public ITickingSystem {
#include "Extra/TargetNearbySystemAPI.hpp"
public:
    virtual ~TargetNearbySystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};
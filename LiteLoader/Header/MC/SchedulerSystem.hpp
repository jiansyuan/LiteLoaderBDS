// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SchedulerSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SchedulerSystem : public ITickingSystem {
#include "Extra/SchedulerSystemAPI.hpp"
public:
    virtual ~SchedulerSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};
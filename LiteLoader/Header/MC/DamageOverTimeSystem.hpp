// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/DamageOverTimeSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DamageOverTimeSystem : public ITickingSystem {
#include "Extra/DamageOverTimeSystemAPI.hpp"
public:
    virtual ~DamageOverTimeSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};
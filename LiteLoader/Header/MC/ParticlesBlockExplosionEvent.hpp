// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ParticlesBlockExplosionEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ParticlesBlockExplosionEvent {
#include "Extra/ParticlesBlockExplosionEventAPI.hpp"

public:
    MCAPI void addExplodePosition(class Vec3 const&);
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI ~ParticlesBlockExplosionEvent();
};
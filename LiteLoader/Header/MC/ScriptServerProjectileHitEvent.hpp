// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerProjectileHitEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerProjectileHitEvent {
#include "Extra/ScriptServerProjectileHitEventAPI.hpp"
public:
    virtual ~ScriptServerProjectileHitEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI ScriptServerProjectileHitEvent();
    MCAPI void setHitId(struct ActorUniqueID const&);
    MCAPI void setHitPosition(class Vec3 const&);
    MCAPI void setOwnerId(struct ActorUniqueID const&);
    MCAPI void setProjectileId(struct ActorUniqueID const&);


private:
    MCAPI static class HashedString const mHash;
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptFlyingSpeedComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptFlyingSpeedComponent : public ScriptActorComponent {
#include "Extra/ScriptFlyingSpeedComponentAPI.hpp"
public:
    virtual ~ScriptFlyingSpeedComponent();
    virtual class Scripting::Result<float> getValue();
    virtual class Scripting::Result<void> setValue(float const&);

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptFlyingSpeedComponent> bind(struct Scripting::Version);
};
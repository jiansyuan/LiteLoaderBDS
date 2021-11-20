// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptAddPassengerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptAddPassengerComponent : public ScriptActorComponent {
#include "Extra/ScriptAddPassengerComponentAPI.hpp"
public:
    virtual ~ScriptAddPassengerComponent();

public:
    MCAPI class Scripting::Result<std::string> getEntityType() const;
    MCAPI class Scripting::Result<std::string> getSpawnEvent() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptAddPassengerComponent> bind(struct Scripting::Version);
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptHealableComponent2API.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptHealableComponent2 : public ScriptActorComponent {
#include "Extra/ScriptHealableComponent2API.hpp"
public:
    virtual ~ScriptHealableComponent2();

public:
    MCAPI class Scripting::Result<class ActorFilterGroup> getFilters() const;
    MCAPI class Scripting::Result<bool> getForceUse() const;
    MCAPI class Scripting::Result<std::vector<struct FeedItem>> getItems() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptHealableComponent2> bind(struct Scripting::Version);
};
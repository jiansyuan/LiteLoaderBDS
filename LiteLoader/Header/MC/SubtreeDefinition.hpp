// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SubtreeDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SubtreeDefinition : public BehaviorDefinition {
#include "Extra/SubtreeDefinitionAPI.hpp"
public:
    virtual ~SubtreeDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RepeatUntilSuccessDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RepeatUntilSuccessDefinition : public BehaviorDefinition {
#include "Extra/RepeatUntilSuccessDefinitionAPI.hpp"
public:
    virtual ~RepeatUntilSuccessDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};
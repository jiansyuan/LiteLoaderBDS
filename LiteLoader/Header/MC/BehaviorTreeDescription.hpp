// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Description.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/BehaviorTreeDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BehaviorTreeDescription : public Description {
#include "Extra/BehaviorTreeDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~BehaviorTreeDescription();
    virtual void unk_vfn_3();
};
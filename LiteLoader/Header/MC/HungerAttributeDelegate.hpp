// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "AttributeInstanceDelegate.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/HungerAttributeDelegateAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HungerAttributeDelegate : public AttributeInstanceDelegate {
#include "Extra/HungerAttributeDelegateAPI.hpp"
public:
    virtual ~HungerAttributeDelegate();
    virtual void tick();
    virtual void notify(__int64);
    virtual void unk_vfn_3();
};
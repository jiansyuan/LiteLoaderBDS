// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ShootBowNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ShootBowNode {
#include "Extra/ShootBowNodeAPI.hpp"
public:
    virtual ~ShootBowNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void unk_vfn_2();

public:
    MCAPI ShootBowNode();
};
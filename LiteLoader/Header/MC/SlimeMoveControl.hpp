// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveControl.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SlimeMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SlimeMoveControl : public MoveControl {
#include "Extra/SlimeMoveControlAPI.hpp"
public:
    virtual ~SlimeMoveControl();
    virtual void tick(class MoveControlComponent&, class Mob&);

public:
    MCAPI SlimeMoveControl();
};
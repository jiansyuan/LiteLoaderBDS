// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AdmireItemGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AdmireItemGoal {
#include "Extra/AdmireItemGoalAPI.hpp"
public:
    virtual ~AdmireItemGoal();
    virtual bool canUse();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI AdmireItemGoal(class Mob&, enum LevelSoundEvent, struct FloatRange, class DefinitionTrigger const&, class DefinitionTrigger const&);
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RandomStrollGoal.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RandomBreachingGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RandomBreachingGoal : public RandomStrollGoal {
#include "Extra/RandomBreachingGoalAPI.hpp"
public:
    virtual ~RandomBreachingGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool _setWantedPosition();

public:
    MCAPI RandomBreachingGoal(class Mob&, float, int, int, int, float);
};
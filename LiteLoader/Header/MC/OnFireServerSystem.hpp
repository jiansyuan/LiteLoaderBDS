// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ONFIRESERVERSYSTEM
#include "Extra/OnFireServerSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONFIRESERVERSYSTEM
class OnFireServerSystem {
#include "Extra/OnFireServerSystemAPI.hpp"
public:
    /*0*/ virtual ~OnFireServerSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);

private:
    MCAPI static void _tickServer(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class OnFireComponent>&);
};
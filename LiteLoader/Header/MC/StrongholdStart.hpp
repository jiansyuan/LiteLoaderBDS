// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureStart.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/StrongholdStartAPI.hpp"
#undef EXTRA_INCLUDE_PART
class StrongholdStart : public StructureStart {
#include "Extra/StrongholdStartAPI.hpp"
public:
    virtual ~StrongholdStart();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();

private:
    MCAPI void _initializePieceSet(class Random&);
};
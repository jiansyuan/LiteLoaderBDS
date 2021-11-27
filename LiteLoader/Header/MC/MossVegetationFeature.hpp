// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MossVegetationFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MossVegetationFeature : public Feature {
#include "Extra/MossVegetationFeatureAPI.hpp"
public:
    virtual ~MossVegetationFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI MossVegetationFeature();
};
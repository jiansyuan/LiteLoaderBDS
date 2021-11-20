// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/BasaltColumnsFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BasaltColumnsFeature : public Feature {
#include "Extra/BasaltColumnsFeatureAPI.hpp"
public:
    virtual ~BasaltColumnsFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

private:
    MCAPI bool _placeColumnCluster(class BlockSource&, class BlockPos, int, int) const;
};
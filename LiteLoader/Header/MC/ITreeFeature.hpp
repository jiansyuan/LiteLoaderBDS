// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ITreeFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ITreeFeature {
#include "Extra/ITreeFeatureAPI.hpp"


protected:
    MCAPI class std::optional<class BlockPos> _place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
};
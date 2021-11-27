// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SparseContainerServerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SparseContainerServer {
#include "Extra/SparseContainerServerAPI.hpp"

public:
    MCAPI SparseContainerServer(class Container&, enum SparseContainerBackingSetType, std::unique_ptr<class IPlayerContainerSetter>);
    MCAPI class ItemStack serverTakeItems(int, int);
};
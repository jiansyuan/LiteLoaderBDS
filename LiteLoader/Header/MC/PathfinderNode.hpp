// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PathfinderNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PathfinderNode {
#include "Extra/PathfinderNodeAPI.hpp"

public:
    MCAPI PathfinderNode(class BlockPos const&, enum NodeType);
    MCAPI PathfinderNode(class PathfinderNode const&);
    MCAPI float distanceTo(class PathfinderNode*) const;
    MCAPI float distanceToSqr(class PathfinderNode*) const;
    MCAPI bool equals(class PathfinderNode*);
    MCAPI enum NodeType getType() const;
    MCAPI bool inOpenSet();
};
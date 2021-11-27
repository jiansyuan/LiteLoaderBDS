// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MineshaftPiece.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MineshaftCrossingAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MineshaftCrossing : public MineshaftPiece {
#include "Extra/MineshaftCrossingAPI.hpp"
public:
    virtual ~MineshaftCrossing();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual int getWorldZ(int, int);

public:
    MCAPI void _placeSupportPillar(class BlockSource&, class BoundingBox const&, int, int, int, int);
};
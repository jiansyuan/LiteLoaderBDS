// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetherFortressPiece.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/NBCastleEntranceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NBCastleEntrance : public NetherFortressPiece {
#include "Extra/NBCastleEntranceAPI.hpp"
public:
    virtual ~NBCastleEntrance();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void unk_vfn_6();
    virtual void unk_vfn_10();
};
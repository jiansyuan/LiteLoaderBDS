// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ItemReleaseInventoryTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ItemReleaseInventoryTransaction {
#include "Extra/ItemReleaseInventoryTransactionAPI.hpp"
public:
    virtual ~ItemReleaseInventoryTransaction();
    virtual void read(class ReadOnlyBinaryStream&);
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_3();
    virtual int /*enum InventoryTransactionError*/ handle(class Player&, bool);
    virtual void unk_vfn_5();
};
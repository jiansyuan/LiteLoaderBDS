// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Types.h"
#define EXTRA_INCLUDE_PART
#include "Extra/ItemStackRequestActionCraftRecipeOptionalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ItemStackRequestActionCraftRecipeOptional : public ItemStackRequestActionCraft<struct ItemStackNetIdVariant, 14> {
#include "Extra/ItemStackRequestActionCraftRecipeOptionalAPI.hpp"
public:
    virtual ~ItemStackRequestActionCraftRecipeOptional();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void _write(class BinaryStream&);
    virtual bool _read(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const& getRecipeNetId() const;
};
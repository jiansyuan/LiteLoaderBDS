// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Recipe.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MapExtendingRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MapExtendingRecipe : public Recipe {
#include "Extra/MapExtendingRecipeAPI.hpp"
public:
    virtual ~MapExtendingRecipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&);
    virtual int getCraftingSize();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual bool matches(class CraftingContainer&, class Level&);
    virtual int size();
    virtual class mce::UUID const& getId();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_15();

public:
    MCAPI static class mce::UUID const CartographyTableID;
    MCAPI static class mce::UUID const CraftingTableID;

private:
    MCAPI void _updateMapInstance(class ItemInstance&) const;
};
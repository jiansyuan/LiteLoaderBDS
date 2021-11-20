// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Container.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/CraftingContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CraftingContainer : public Container {
#include "Extra/CraftingContainerAPI.hpp"
public:
    virtual ~CraftingContainer();
    virtual void init();
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    virtual class ItemStack const& getItem(int);
    virtual void setItem(int, class ItemStack const&);
    virtual void unk_vfn_14();
    virtual int getMaxStackSize();
    virtual void startOpen(class Player&);
    virtual void stopOpen(class Player&);
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void setContainerChanged(int);
    virtual void unk_vfn_31();

public:
    MCAPI class ItemStack const& getItem(int, int) const;
};
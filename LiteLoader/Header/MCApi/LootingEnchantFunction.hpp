// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class LootingEnchantFunction : public LootItemFunction {
public:
    virtual ~LootingEnchantFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
};
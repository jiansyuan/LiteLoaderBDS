// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LootItemRandomChanceWithSpecialModifierConditionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LootItemRandomChanceWithSpecialModifierCondition {
#include "Extra/LootItemRandomChanceWithSpecialModifierConditionAPI.hpp"
public:
    virtual ~LootItemRandomChanceWithSpecialModifierCondition();
    virtual bool applies(class Random&, class LootTableContext&);
};
/**
 * @file  BoostItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoostItem.
 *
 */
class BoostItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTITEM
public:
    class BoostItem& operator=(class BoostItem const &) = delete;
    BoostItem(class BoostItem const &) = delete;
    BoostItem() = delete;
#endif

public:
    /**
     * @symbol ?setReplacementItemDescriptor@BoostItem@@QEAAXAEBVItemDescriptor@@@Z
     * @hash   807258320
     */
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const &);
    /**
     * @symbol ??1BoostItem@@QEAA@XZ
     * @hash   1680611634
     */
    MCAPI ~BoostItem();

};
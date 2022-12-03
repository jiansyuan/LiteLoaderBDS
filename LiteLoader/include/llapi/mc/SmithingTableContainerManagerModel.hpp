/**
 * @file  SmithingTableContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SmithingTableContainerManagerModel.
 *
 */
class SmithingTableContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMITHINGTABLECONTAINERMANAGERMODEL
public:
    class SmithingTableContainerManagerModel& operator=(class SmithingTableContainerManagerModel const &) = delete;
    SmithingTableContainerManagerModel(class SmithingTableContainerManagerModel const &) = delete;
    SmithingTableContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1520947352
     */
    virtual ~SmithingTableContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@SmithingTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -1425314879
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@SmithingTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1410860018
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@SmithingTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   1714366391
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@SmithingTableContainerManagerModel@@UEAAXHH@Z
     * @hash   848401285
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@SmithingTableContainerManagerModel@@UEAAXXZ
     * @hash   1586899707
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@SmithingTableContainerManagerModel@@UEAA_NM@Z
     * @hash   -950817595
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@SmithingTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   165159896
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0SmithingTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -1906767225
     */
    MCAPI SmithingTableContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?INPUT_SLOT@SmithingTableContainerManagerModel@@2HB
     * @hash   -2080267203
     */
    MCAPI static int const INPUT_SLOT;
    /**
     * @symbol ?MATERIAL_SLOT@SmithingTableContainerManagerModel@@2HB
     * @hash   1920236223
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @symbol ?RESULT_SLOT@SmithingTableContainerManagerModel@@2HB
     * @hash   537457603
     */
    MCAPI static int const RESULT_SLOT;

};
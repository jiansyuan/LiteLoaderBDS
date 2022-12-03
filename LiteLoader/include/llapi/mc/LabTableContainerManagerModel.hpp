/**
 * @file  LabTableContainerManagerModel.hpp
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
 * @brief MC class LabTableContainerManagerModel.
 *
 */
class LabTableContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLECONTAINERMANAGERMODEL
public:
    class LabTableContainerManagerModel& operator=(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -468275798
     */
    virtual ~LabTableContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@LabTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -2058921933
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@LabTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -917771892
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@LabTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   -1690523019
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@LabTableContainerManagerModel@@UEAAXHH@Z
     * @hash   1259280375
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@LabTableContainerManagerModel@@UEAAXXZ
     * @hash   -1249585427
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@LabTableContainerManagerModel@@UEAA_NM@Z
     * @hash   599760403
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@LabTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   1991065642
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0LabTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   59866409
     */
    MCAPI LabTableContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?INPUT_SLOTS@LabTableContainerManagerModel@@2HB
     * @hash   1395378941
     */
    MCAPI static int const INPUT_SLOTS;

};
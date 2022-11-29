/**
 * @file  SideBySideConstBlockSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideConstBlockSource.
 *
 */
class SideBySideConstBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECONSTBLOCKSOURCE
public:
    class SideBySideConstBlockSource& operator=(class SideBySideConstBlockSource const &) = delete;
    SideBySideConstBlockSource(class SideBySideConstBlockSource const &) = delete;
    SideBySideConstBlockSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1469070612
     */
    virtual ~SideBySideConstBlockSource();
    /**
     * @vftbl  1
     * @symbol ?getBlock@SideBySideConstBlockSource@@UEBAAEBVBlock@@HHH@Z
     * @hash   789324120
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @vftbl  2
     * @symbol ?getBlock@SideBySideConstBlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   1184890867
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @vftbl  3
     * @symbol ?getBlock@SideBySideConstBlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@I@Z
     * @hash   183267125
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @vftbl  4
     * @symbol ?getBlockEntity@SideBySideConstBlockSource@@UEBAPEBVBlockActor@@AEBVBlockPos@@@Z
     * @hash   1548404807
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @vftbl  5
     * @symbol ?getExtraBlock@SideBySideConstBlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -559905737
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol ?getLiquidBlock@SideBySideConstBlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   1026951503
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol ?hasBlock@SideBySideConstBlockSource@@UEBA_NAEBVBlockPos@@@Z
     * @hash   158886887
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @vftbl  8
     * @symbol ?containsAnyLiquid@SideBySideConstBlockSource@@UEBA_NAEBVAABB@@@Z
     * @hash   -645422984
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @vftbl  9
     * @symbol ?containsMaterial@SideBySideConstBlockSource@@UEBA_NAEBVAABB@@W4MaterialType@@@Z
     * @hash   1539440614
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @vftbl  10
     * @symbol ?getMaterial@SideBySideConstBlockSource@@UEBAAEBVMaterial@@AEBVBlockPos@@@Z
     * @hash   369617951
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @vftbl  11
     * @symbol ?getMaterial@SideBySideConstBlockSource@@UEBAAEBVMaterial@@HHH@Z
     * @hash   -928476604
     */
    virtual class Material const & getMaterial(int, int, int) const;
    /**
     * @vftbl  12
     * @hash   -233503771
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -232580250
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol ?getDimensionId@SideBySideConstBlockSource@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
     * @hash   -1459762531
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @vftbl  16
     * @symbol ?fetchAABBs@SideBySideConstBlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
     * @hash   1638167094
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @vftbl  17
     * @symbol ?fetchCollisionShapes@SideBySideConstBlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   -1674789099
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  18
     * @symbol ?getTallestCollisionShape@SideBySideConstBlockSource@@UEBA?AVAABB@@AEBV2@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   -1680920238
     */
    virtual class AABB getTallestCollisionShape(class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEBYSIDECONSTBLOCKSOURCE
    /**
     * @symbol ?hasChunksAt@SideBySideConstBlockSource@@UEBA_NAEBUBounds@@_N@Z
     * @hash   543252820
     */
    MCVAPI bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @symbol ?hasChunksAt@SideBySideConstBlockSource@@UEBA_NAEBVAABB@@_N@Z
     * @hash   1314718300
     */
    MCVAPI bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @symbol ?hasChunksAt@SideBySideConstBlockSource@@UEBA_NAEBVBlockPos@@H_N@Z
     * @hash   1524454164
     */
    MCVAPI bool hasChunksAt(class BlockPos const &, int, bool) const;
#endif
    /**
     * @symbol ??0SideBySideConstBlockSource@@QEAA@V?$not_null@PEBUAccessedBlockSourceBlocks@@@gsl@@_K@Z
     * @hash   -1451467274
     */
    MCAPI SideBySideConstBlockSource(class gsl::not_null<struct AccessedBlockSourceBlocks const *>, unsigned __int64);
    /**
     * @symbol ?getCurrentIndex@SideBySideConstBlockSource@@QEBA_KXZ
     * @hash   -985566635
     */
    MCAPI unsigned __int64 getCurrentIndex() const;

};
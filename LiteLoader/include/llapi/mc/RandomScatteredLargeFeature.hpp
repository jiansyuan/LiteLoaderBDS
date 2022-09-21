/**
 * @file  MC/RandomScatteredLargeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomScatteredLargeFeature.
 *
 */
class RandomScatteredLargeFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSCATTEREDLARGEFEATURE
public:
    class RandomScatteredLargeFeature& operator=(class RandomScatteredLargeFeature const &) = delete;
    RandomScatteredLargeFeature(class RandomScatteredLargeFeature const &) = delete;
    RandomScatteredLargeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomScatteredLargeFeature();
    /**
     * @hash   823382476
     * @vftbl  1
     * @symbol ?shouldAddHardcodedSpawnAreas@RandomScatteredLargeFeature@@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @hash   363376690
     * @vftbl  2
     * @symbol ?shouldPostProcessMobs@RandomScatteredLargeFeature@@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @hash   1708904994
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@RandomScatteredLargeFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   -1265322629
     * @vftbl  4
     * @symbol ?initMobSpawnTypes@RandomScatteredLargeFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @hash   1452506588
     * @vftbl  5
     * @symbol ?isFeatureChunk@RandomScatteredLargeFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1171792270
     * @vftbl  6
     * @symbol ?createStructureStart@RandomScatteredLargeFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   473952628
     * @symbol ??0RandomScatteredLargeFeature@@QEAA@I@Z
     */
    MCAPI RandomScatteredLargeFeature(unsigned int);

};
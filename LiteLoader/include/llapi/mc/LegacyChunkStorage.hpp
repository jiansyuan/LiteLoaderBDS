/**
 * @file  MC/LegacyChunkStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyChunkStorage.
 *
 */
class LegacyChunkStorage : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYCHUNKSTORAGE
public:
    class LegacyChunkStorage& operator=(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LegacyChunkStorage();
    /**
     * @hash   -299278440
     * @vftbl  11
     * @symbol ?loadChunk@LegacyChunkStorage@@UEAAXAEAVLevelChunk@@_N@Z
     */
    virtual void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   -1610101851
     * @vftbl  13
     * @symbol ?saveLiveChunk@LegacyChunkStorage@@UEAA_NAEAVLevelChunk@@@Z
     */
    virtual bool saveLiveChunk(class LevelChunk &);
    /**
     * @hash   4310013
     * @vftbl  18
     * @symbol ?acquireDiscarded@LegacyChunkStorage@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @hash   490026035
     * @symbol ??0LegacyChunkStorage@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEAVLevelStorage@@W4StorageVersion@@AEAVBiome@@@Z
     */
    MCAPI LegacyChunkStorage(std::unique_ptr<class ChunkSource>, class LevelStorage &, enum StorageVersion, class Biome &);

//private:
    /**
     * @hash   -1296888442
     * @symbol ?_isImported@LegacyChunkStorage@@AEAA_NAEBVChunkPos@@@Z
     */
    MCAPI bool _isImported(class ChunkPos const &);
    /**
     * @hash   -1546371428
     * @symbol ?_loadChunk@LegacyChunkStorage@@AEAA_NAEAVLevelChunk@@@Z
     */
    MCAPI bool _loadChunk(class LevelChunk &);
    /**
     * @hash   756805387
     * @symbol ?_loadEntities@LegacyChunkStorage@@AEAAXXZ
     */
    MCAPI void _loadEntities();
    /**
     * @hash   -10303226
     * @symbol ?_markChunkAsImported@LegacyChunkStorage@@AEAAXAEBVChunkPos@@@Z
     */
    MCAPI void _markChunkAsImported(class ChunkPos const &);
    /**
     * @hash   1568135960
     * @symbol ?_openRegionFile@LegacyChunkStorage@@AEAA_NXZ
     */
    MCAPI bool _openRegionFile();

private:

};
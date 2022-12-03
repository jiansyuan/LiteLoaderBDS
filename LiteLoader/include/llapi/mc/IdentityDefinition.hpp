/**
 * @file  IdentityDefinition.hpp
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
 * @brief MC class IdentityDefinition.
 *
 */
class IdentityDefinition {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type : char
{
    Invalid = 0,
    Player = 1,
    Actor = 2,
    Fake = 3
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDEFINITION
public:
    IdentityDefinition() = delete;
#endif

public:
    /**
     * @symbol ??0IdentityDefinition@@QEAA@AEBV0@@Z
     * @hash   -2132456271
     */
    MCAPI IdentityDefinition(class IdentityDefinition const &);
    /**
     * @symbol ??0IdentityDefinition@@QEAA@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -687083721
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, std::string const &);
    /**
     * @symbol ??0IdentityDefinition@@QEAA@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     * @hash   -654820601
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ??0IdentityDefinition@@QEAA@AEBUScoreboardId@@AEBUActorUniqueID@@@Z
     * @hash   -2045214501
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @symbol ??0IdentityDefinition@@QEAA@$$QEAV0@@Z
     * @hash   549044603
     */
    MCAPI IdentityDefinition(class IdentityDefinition &&);
    /**
     * @symbol ?getEntityId@IdentityDefinition@@QEBAAEBUActorUniqueID@@XZ
     * @hash   887898592
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @symbol ?getFakePlayerName@IdentityDefinition@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   543390812
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @symbol ?getIdentityType@IdentityDefinition@@QEBA?AW4Type@1@XZ
     * @hash   18632730
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const;
    /**
     * @symbol ?getName@IdentityDefinition@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
     * @hash   1495611706
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @symbol ?getPlayerId@IdentityDefinition@@QEBAAEBUPlayerScoreboardId@@XZ
     * @hash   -1470257828
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @symbol ?getScoreboardId@IdentityDefinition@@QEBAAEBUScoreboardId@@XZ
     * @hash   -1242442028
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @symbol ?isEntityType@IdentityDefinition@@QEBA_NXZ
     * @hash   1070974762
     */
    MCAPI bool isEntityType() const;
    /**
     * @symbol ?isFakeType@IdentityDefinition@@QEBA_NXZ
     * @hash   -2079849378
     */
    MCAPI bool isFakeType() const;
    /**
     * @symbol ?isHiddenFakePlayerType@IdentityDefinition@@QEBA_NXZ
     * @hash   1600633348
     */
    MCAPI bool isHiddenFakePlayerType() const;
    /**
     * @symbol ?isPlayerType@IdentityDefinition@@QEBA_NXZ
     * @hash   55117798
     */
    MCAPI bool isPlayerType() const;
    /**
     * @symbol ?isValid@IdentityDefinition@@QEBA_NXZ
     * @hash   -1705466446
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??BIdentityDefinition@@QEBA_NXZ
     * @hash   1328472270
     */
    MCAPI operator bool() const;
    /**
     * @symbol ??4IdentityDefinition@@QEAAAEAV0@AEBV0@@Z
     * @hash   -689968956
     */
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition const &);
    /**
     * @symbol ??4IdentityDefinition@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -1808242
     */
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition &&);
    /**
     * @symbol ??1IdentityDefinition@@QEAA@XZ
     * @hash   1924410027
     */
    MCAPI ~IdentityDefinition();
    /**
     * @symbol ?Invalid@IdentityDefinition@@2V1@B
     * @hash   2039105119
     */
    MCAPI static class IdentityDefinition const Invalid;
    /**
     * @symbol ?convertFakeToReal@IdentityDefinition@@SA_NAEAV1@AEBUPlayerScoreboardId@@@Z
     * @hash   1037217982
     */
    MCAPI static bool convertFakeToReal(class IdentityDefinition &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?isHiddenFakePlayerNameString@IdentityDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1057864733
     */
    MCAPI static bool isHiddenFakePlayerNameString(std::string const &);

};
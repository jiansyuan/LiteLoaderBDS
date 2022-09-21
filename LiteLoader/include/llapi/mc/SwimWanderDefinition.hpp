/**
 * @file  MC/SwimWanderDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimWanderDefinition.
 *
 */
class SwimWanderDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWANDERDEFINITION
public:
    class SwimWanderDefinition& operator=(class SwimWanderDefinition const &) = delete;
    SwimWanderDefinition(class SwimWanderDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1128321180
     * @symbol ??0SwimWanderDefinition@@QEAA@XZ
     */
    MCAPI SwimWanderDefinition();
    /**
     * @hash   -2009027309
     * @symbol ?initialize@SwimWanderDefinition@@QEAAXAEAVEntityContext@@AEAVSwimWanderGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SwimWanderGoal &);
    /**
     * @hash   -922106957
     * @symbol ?buildSchema@SwimWanderDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSwimWanderDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWanderDefinition>> &);

};
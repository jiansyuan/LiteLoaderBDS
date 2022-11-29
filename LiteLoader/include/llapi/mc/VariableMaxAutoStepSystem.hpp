/**
 * @file  VariableMaxAutoStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VariableMaxAutoStepSystem.
 *
 */
class VariableMaxAutoStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIABLEMAXAUTOSTEPSYSTEM
public:
    class VariableMaxAutoStepSystem& operator=(class VariableMaxAutoStepSystem const &) = delete;
    VariableMaxAutoStepSystem(class VariableMaxAutoStepSystem const &) = delete;
    VariableMaxAutoStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@VariableMaxAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -119602918
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tickEntity@VariableMaxAutoStepSystem@@CAXAEBVStrictEntityContext@@AEBUVariableMaxAutoStepComponent@@AEAUMaxAutoStepComponent@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@AEBVActorMovementProxyComponent@@@Z
     * @hash   192424619
     */
    MCAPI static void _tickEntity(class StrictEntityContext const &, struct VariableMaxAutoStepComponent const &, struct MaxAutoStepComponent &, struct AABBShapeComponent const &, struct StateVectorComponent const &, class ActorMovementProxyComponent const &);

private:

};
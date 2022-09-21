/**
 * @file  MC/ActorUpdatePositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorUpdatePositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATEPOSITIONSYSTEM
public:
    class ActorUpdatePositionSystem& operator=(class ActorUpdatePositionSystem const &) = delete;
    ActorUpdatePositionSystem(class ActorUpdatePositionSystem const &) = delete;
    ActorUpdatePositionSystem() = delete;
#endif

public:
    /**
     * @symbol ?createActorUpdatePositionSystem@ActorUpdatePositionSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorUpdatePositionSystem();

};
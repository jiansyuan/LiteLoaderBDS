/**
 * @file  AgentDetectCommandSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentDetectCommandSystem.
 *
 */
class AgentDetectCommandSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTDETECTCOMMANDSYSTEM
public:
    class AgentDetectCommandSystem& operator=(class AgentDetectCommandSystem const &) = delete;
    AgentDetectCommandSystem(class AgentDetectCommandSystem const &) = delete;
    AgentDetectCommandSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   612364412
     */
    virtual ~AgentDetectCommandSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@AgentDetectCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1950108606
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ?initializeObstacle@AgentDetectCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@VAgent@AgentComponents@@UActionDetails@4@V?$FlagComponent@UInitializingFlag@AgentComponents@@@@VDetectObstacle@4@@@@Z
     * @hash   558867359
     */
    MCAPI static void initializeObstacle(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentComponents::Agent, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::InitializingFlag>, class AgentComponents::DetectObstacle> &);
    /**
     * @symbol ?initializeRedstone@AgentDetectCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@VAgent@AgentComponents@@UActionDetails@4@V?$FlagComponent@UInitializingFlag@AgentComponents@@@@VDetectRedstone@4@@@@Z
     * @hash   -430320103
     */
    MCAPI static void initializeRedstone(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentComponents::Agent, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::InitializingFlag>, class AgentComponents::DetectRedstone> &);

};
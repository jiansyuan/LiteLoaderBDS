// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ProducerComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RepeaterCapacitorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RepeaterCapacitor : public ProducerComponent {
#include "Extra/RepeaterCapacitorAPI.hpp"
public:
    virtual ~RepeaterCapacitor();
    virtual int getStrength();
    virtual void unk_vfn_2();
    virtual void setStrength(int);
    virtual void unk_vfn_4();
    virtual bool canConsumePowerAnyDirection();
    virtual void unk_vfn_7();
    virtual bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_20();
    virtual void unk_vfn_21();
    virtual int /*enum CircuitComponentType*/ getCircuitComponentType();
    virtual void unk_vfn_24();

public:
    MCAPI void setDelay(int);
};
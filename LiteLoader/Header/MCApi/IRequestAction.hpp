// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class IRequestAction {
public:
    virtual ~IRequestAction();
    virtual void execute(class ServerLevel&, class Dimension&);
    virtual void serialize(class CompoundTag&);
    virtual bool operator==(class IRequestAction&);

public:
    MCAPI static bool isValidTag(class CompoundTag const&);
};
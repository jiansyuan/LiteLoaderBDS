// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptBinderLevelTickingAreaTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptBinderLevelTickingAreaTemplate {
#include "Extra/ScriptBinderLevelTickingAreaTemplateAPI.hpp"
public:
    virtual ~ScriptBinderLevelTickingAreaTemplate();
    virtual std::string const& getTemplateIdentifier();
    virtual void applyTemplate(class ScriptObjectBinder&);

public:
    MCAPI ScriptBinderLevelTickingAreaTemplate();

    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class ITickingArea const&);
};
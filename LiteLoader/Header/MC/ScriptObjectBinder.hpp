// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptObjectBinderAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptObjectBinder {
#include "Extra/ScriptObjectBinderAPI.hpp"

public:
    MCAPI ScriptObjectBinder(std::string const&);
    MCAPI bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
    MCAPI ~ScriptObjectBinder();

    MCAPI static std::string const TYPE_TAG;
    MCAPI static std::unique_ptr<class ScriptObjectBinder> extract(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

private:
    MCAPI unsigned int _getComponentIndex(unsigned short) const;
    MCAPI bool _hasComponent(unsigned short) const;
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommandFunctionEntryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandFunctionEntry {
#include "Extra/CommandFunctionEntryAPI.hpp"
public:
    virtual ~CommandFunctionEntry();
    virtual void execute(class FunctionManager&, class CommandOrigin const&);
};
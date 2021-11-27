// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommandOutputMessageAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandOutputMessage {
#include "Extra/CommandOutputMessageAPI.hpp"

public:
    MCAPI CommandOutputMessage(class CommandOutputMessage const&);
    MCAPI CommandOutputMessage(class CommandOutputMessage&&);
    MCAPI std::string const& getMessageId() const;
    MCAPI std::vector<std::string> const& getParams() const;
    MCAPI enum CommandOutputMessageType getType() const;
    MCAPI ~CommandOutputMessage();
};
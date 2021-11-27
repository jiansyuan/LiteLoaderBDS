// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TextObjectRootAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TextObjectRoot {
#include "Extra/TextObjectRootAPI.hpp"
public:
    virtual ~TextObjectRoot();
    virtual std::string asString();
    virtual class Json::Value asJsonValue();
    virtual class Json::Value resolve(struct ResolveData const&);

public:
    MCAPI void addChild(std::unique_ptr<class ITextObject>);
    MCAPI void clear();
    MCAPI bool isEmpty() const;
    MCAPI class ResolvedTextObject resolveRoot(class Actor const&, class Scoreboard const&) const;
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NavigationDescription.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/NavigationGenericDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NavigationGenericDescription : public NavigationDescription {
#include "Extra/NavigationGenericDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~NavigationGenericDescription();
};
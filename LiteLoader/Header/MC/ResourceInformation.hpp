// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ResourceInformationAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ResourceInformation {
#include "Extra/ResourceInformationAPI.hpp"

public:
    MCAPI ResourceInformation(std::string const&, class SemVersion const&, class mce::UUID const&, enum ResourceInformation::ResourceType, std::string const&);
    MCAPI ResourceInformation(std::string const&, class SemVersion const&, class mce::UUID const&, std::string const&, std::string const&);
    MCAPI ResourceInformation(class ResourceInformation const&);
    MCAPI bool satisfies(struct PackIdVersion const&) const;
    MCAPI ~ResourceInformation();

    MCAPI static enum ResourceInformation::ResourceType ResourceTypeFromString(std::string const&);
    MCAPI static std::string const& StringFromResourceType(enum ResourceInformation::ResourceType);
};
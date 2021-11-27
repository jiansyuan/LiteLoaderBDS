// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PackInstanceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PackInstance {
#include "Extra/PackInstanceAPI.hpp"

public:
    MCAPI void forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, bool) const;
    MCAPI bool operator==(class PackInstance const&);
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, int, bool, class PackSettings*);
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, std::string const&, bool, class PackSettings*);
    MCAPI PackInstance(class PackInstance const&);
    MCAPI PackInstance(class PackInstance&&);
    MCAPI std::string const& getFolderName() const;
    MCAPI double getLoadTime() const;
    MCAPI class PackManifest& getManifest();
    MCAPI class PackManifest const& getManifest() const;
    MCAPI enum PackCategory getPackCategory() const;
    MCAPI class mce::UUID const getPackId() const;
    MCAPI enum PackOrigin getPackOrigin() const;
    MCAPI class PackStats& getPackStats();
    MCAPI class PackStats const& getPackStats() const;
    MCAPI bool getResource(class Core::Path const&, std::string&) const;
    MCAPI class ResourceLocation const& getResourceLocation() const;
    MCAPI std::string const& getSubpackFolderName() const;
    MCAPI class ContentTierInfo getTierInfo() const;
    MCAPI class SemVersion const& getVersion() const;
    MCAPI bool hasResource(class Core::Path const&) const;
    MCAPI bool isBaseGamePack() const;
    MCAPI bool isZipped() const;
    MCAPI ~PackInstance();


private:
    MCAPI bool _isPackPointerValid() const;
};
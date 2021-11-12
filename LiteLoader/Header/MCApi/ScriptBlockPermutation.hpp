// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptBlockPermutation : public ScriptObject {
public:
    virtual ~ScriptBlockPermutation();

public:
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation> clone() const;
    MCAPI std::vector<class Scripting::StrongObjectHandle> getAllProperties();
    MCAPI class Block const& getBlock() const;
    MCAPI class Scripting::Result<class Scripting::StrongObjectHandle> getProperty(std::string const&);
    MCAPI std::vector<std::string> getTags() const;
    MCAPI bool hasTag(std::string const&) const;
    MCAPI void setBlock(class Block const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockPermutation> bind(struct Scripting::Version);

private:
    MCAPI class Scripting::Result<class Scripting::StrongObjectHandle> _createProperty(std::string const&);
};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ExtendedCertificate {
public:
    MCAPI static class mce::UUID getIdentity(class Certificate const&);
    MCAPI static std::string     getIdentityName(class Certificate const&);
    MCAPI static std::string     getXuid(class Certificate const&);
    MCAPI static std::string     getXuid(class Certificate const*);

}; // namespace ExtendedCertificate
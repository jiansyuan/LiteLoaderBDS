// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CertificateAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Certificate {
#include "Extra/CertificateAPI.hpp"

public:
    MCAPI Certificate(class Certificate const&);
    MCAPI __int64 getExpirationDate() const;
    MCAPI class Json::Value getExtraData(std::string const&, class Json::Value const&) const;
    MCAPI std::string getIdentityPublicKey() const;
    MCAPI __int64 getNotBeforeDate() const;
    MCAPI bool isValid() const;
    MCAPI std::string toString() const;
    MCAPI bool validate(__int64);
    MCAPI ~Certificate();


private:
    MCAPI Certificate(class UnverifiedCertificate const&, std::unique_ptr<class Certificate>);
};
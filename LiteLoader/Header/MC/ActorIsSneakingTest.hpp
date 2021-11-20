// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ActorIsSneakingTestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorIsSneakingTest : public FilterTest {
#include "Extra/ActorIsSneakingTestAPI.hpp"
public:
    virtual ~ActorIsSneakingTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};
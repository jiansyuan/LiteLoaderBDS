// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/FilterTestGameRuleAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FilterTestGameRule : public FilterTest {
#include "Extra/FilterTestGameRuleAPI.hpp"
public:
    virtual ~FilterTestGameRule();
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
    virtual class Json::Value _serializeValue();
};
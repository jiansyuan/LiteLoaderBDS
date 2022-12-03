/**
 * @file  ActorInBlockTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInBlockTest.
 *
 */
class ActorInBlockTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINBLOCKTEST
public:
    class ActorInBlockTest& operator=(class ActorInBlockTest const &) = delete;
    ActorInBlockTest(class ActorInBlockTest const &) = delete;
    ActorInBlockTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -831774033
     */
    virtual ~ActorInBlockTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorInBlockTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   916893751
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorInBlockTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   739859051
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
/**
 * @file  AttributeInstanceHandle.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeInstanceHandle.
 *
 */
class AttributeInstanceHandle {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEHANDLE
public:
    class AttributeInstanceHandle& operator=(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle() = delete;
#endif

public:
    /**
     * @symbol ?getAttributeID@AttributeInstanceHandle@@QEBA?BIXZ
     * @hash   874940594
     */
    MCAPI unsigned int const getAttributeID() const;
    /**
     * @symbol ?getInstance@AttributeInstanceHandle@@QEBAAEBVAttributeInstance@@XZ
     * @hash   -464900442
     */
    MCAPI class AttributeInstance const & getInstance() const;
    /**
     * @symbol ?getMutableInstance@AttributeInstanceHandle@@QEBAPEAVAttributeInstance@@XZ
     * @hash   1586189721
     */
    MCAPI class AttributeInstance * getMutableInstance() const;
    /**
     * @symbol ?inheritFrom@AttributeInstanceHandle@@QEAAXAEBV1@PEAVBaseAttributeMap@@@Z
     * @hash   -170021332
     */
    MCAPI void inheritFrom(class AttributeInstanceHandle const &, class BaseAttributeMap *);
    /**
     * @symbol ??8AttributeInstanceHandle@@QEBA_NAEBV0@@Z
     * @hash   -1066846450
     */
    MCAPI bool operator==(class AttributeInstanceHandle const &) const;

};
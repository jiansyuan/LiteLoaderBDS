/**
 * @file  MC/SparseContainerClient.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SparseContainerClient.
 *
 */
class SparseContainerClient {

#define AFTER_EXTRA
// Add Member There
public:
enum class PushSlotPredictionResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINERCLIENT
public:
    class SparseContainerClient& operator=(class SparseContainerClient const &) = delete;
    SparseContainerClient(class SparseContainerClient const &) = delete;
    SparseContainerClient() = delete;
#endif

public:
    /**
     * @hash   362640305
     * @symbol ?_networkUpdateItem@SparseContainerClient@@QEAAXHAEBVItemStack@@@Z
     */
    MCAPI void _networkUpdateItem(int, class ItemStack const &);

//private:

private:
    /**
     * @hash   -1357243731
     * @symbol ?pushSlotPredictionResultMap@SparseContainerClient@@0V?$BidirectionalUnorderedMap@W4PushSlotPredictionResult@SparseContainerClient@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum SparseContainerClient::PushSlotPredictionResult, std::string> const pushSlotPredictionResultMap;

};
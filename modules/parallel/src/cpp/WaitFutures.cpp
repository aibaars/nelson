//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include <limits>
#include <thread>
#include <chrono>
#include "WaitFutures.hpp"
#include "ProcessEventsDynamicFunction.hpp"
#include "NelsonConfiguration.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
static bool
allAreFinished(const std::vector<FutureObject*>& futures)
{
    return std::all_of(futures.begin(), futures.end(),
        [](FutureObject* f) { return (f->state == THREAD_STATE::FINISHED); });
}
//=============================================================================
static bool
allAreRunningOrFinished(const std::vector<FutureObject*>& futures)
{
    return std::all_of(futures.begin(), futures.end(), [](FutureObject* f) {
        return (f->state == THREAD_STATE::RUNNING) || (f->state == THREAD_STATE::FINISHED);
    });
}
//=============================================================================
bool
WaitFutures(Evaluator* eval, const std::vector<FutureObject*>& futures, THREAD_STATE expectedState,
    double timeoutSeconds)
{
    if (futures.empty()) {
        return true;
    }
    std::chrono::nanoseconds begin_time
        = std::chrono::high_resolution_clock::now().time_since_epoch();

    while (true) {
        if (expectedState == THREAD_STATE::FINISHED) {
            if (allAreFinished(futures)) {
                return true;
            }
        } else {
            if (allAreRunningOrFinished(futures)) {
                return true;
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(uint64(1)));
        std::chrono::nanoseconds current_time
            = std::chrono::high_resolution_clock::now().time_since_epoch();
        std::chrono::nanoseconds difftime = (current_time - begin_time);
        if (!std::isinf(timeoutSeconds) && (difftime.count() > int64(timeoutSeconds * 1e9))) {
            return false;
        }
        if (eval != nullptr) {
            bool isInterrupted
                = NelsonConfiguration::getInstance()->getInterruptPending(eval->getID());
            if (isInterrupted) {
                return false;
            }
        }
        if (eval != nullptr && eval->haveEventsLoop()) {
            ProcessEventsDynamicFunctionWithoutWait();
        }
    }
    return false;
}
//=============================================================================
}
//=============================================================================

#pragma once
#include "Basic.hpp"
#include "OnlineSubsystem_structs.hpp"

namespace SDK {

// Function: OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// Size: 0x0011
struct TurnBasedMatchInterface_OnMatchReceivedTurn_Params {
public:
    struct FString Match; // 0x0000 (0x0010)
    bool bDidBecomeActive; // 0x0010 (0x0001)
};

// Function: OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// Size: 0x0010
struct TurnBasedMatchInterface_OnMatchEnded_Params {
public:
    struct FString Match; // 0x0000 (0x0010)
};

} // namespace SDK

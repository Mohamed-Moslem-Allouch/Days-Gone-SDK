#include "Basic.hpp"
#include "OnlineSubsystem_classes.hpp"
#include "OnlineSubsystem_parameters.hpp"

namespace SDK {

// Function: OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
void TurnBasedMatchInterface::OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive) {
    static class UFunction* Func = nullptr;
    TurnBasedMatchInterface_OnMatchReceivedTurn_Params Parms{};
    Parms.Match = Match;
    Parms.bDidBecomeActive = bDidBecomeActive;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
void TurnBasedMatchInterface::OnMatchEnded(struct FString Match) {
    static class UFunction* Func = nullptr;
    TurnBasedMatchInterface_OnMatchEnded_Params Parms{};
    Parms.Match = Match;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

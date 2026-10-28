#include "Basic.hpp"
#include "GameplayDebugger_classes.hpp"
#include "GameplayDebugger_parameters.hpp"

namespace SDK {

// Function: GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
void GameplayDebuggingComponent::ServerReplicateData(uint8_t InMessage, uint8_t DataView) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingComponent_ServerReplicateData_Params Parms{};
    Parms.InMessage = InMessage;
    Parms.DataView = DataView;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
void GameplayDebuggingComponent::ServerDiscardNavmeshData() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
void GameplayDebuggingComponent::ServerCollectNavmeshData(uint8_t TargetLocation) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingComponent_ServerCollectNavmeshData_Params Parms{};
    Parms.TargetLocation = TargetLocation;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
void GameplayDebuggingComponent::OnRep_UpdateNavmesh() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
void GameplayDebuggingComponent::OnRep_UpdateEQS() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
void GameplayDebuggingComponent::OnRep_UpdateBlackboard() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
void GameplayDebuggingComponent::OnRep_PathCorridorData() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_ActivationCounter
void GameplayDebuggingComponent::OnRep_ActivationCounter() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
void GameplayDebuggingComponent::OnCycleDetailsView() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
void GameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingComponent_ClientEnableTargetSelection_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
void GameplayDebuggingReplicator::ServerSetActorToDebug(class UObject* InActor) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingReplicator_ServerSetActorToDebug_Params Parms{};
    Parms.InActor = InActor;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
void GameplayDebuggingReplicator::ServerReplicateMessage(class UObject* Actor, uint8_t InMessage, uint8_t DataView) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingReplicator_ServerReplicateMessage_Params Parms{};
    Parms.Actor = Actor;
    Parms.InMessage = InMessage;
    Parms.DataView = DataView;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
void GameplayDebuggingReplicator::OnRep_AutoActivate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
void GameplayDebuggingReplicator::ClientReplicateMessage(class UObject* Actor, uint8_t InMessage, uint8_t DataView) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingReplicator_ClientReplicateMessage_Params Parms{};
    Parms.Actor = Actor;
    Parms.InMessage = InMessage;
    Parms.DataView = DataView;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
void GameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class UObject* Context) {
    static class UFunction* Func = nullptr;
    GameplayDebuggingReplicator_ClientEnableTargetSelection_Params Parms{};
    Parms.bEnable = bEnable;
    Parms.Context = Context;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
void GameplayDebuggingReplicator::ClientAutoActivate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

} // namespace SDK

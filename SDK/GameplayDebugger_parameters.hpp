#pragma once
#include "Basic.hpp"
#include "GameplayDebugger_structs.hpp"

namespace SDK {

// Function: GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
// Size: 0x0008
struct GameplayDebuggingComponent_ServerReplicateData_Params {
public:
    uint8_t InMessage[0x4]; // 0x0000 (0x0004)
    uint8_t DataView[0x4]; // 0x0004 (0x0004)
};

// Function: GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
// Size: 0x0000
struct GameplayDebuggingComponent_ServerDiscardNavmeshData_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
// Size: 0x000C
struct GameplayDebuggingComponent_ServerCollectNavmeshData_Params {
public:
    uint8_t TargetLocation[0xC]; // 0x0000 (0x000C)
};

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
// Size: 0x0000
struct GameplayDebuggingComponent_OnRep_UpdateNavmesh_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
// Size: 0x0000
struct GameplayDebuggingComponent_OnRep_UpdateEQS_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
// Size: 0x0000
struct GameplayDebuggingComponent_OnRep_UpdateBlackboard_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
// Size: 0x0000
struct GameplayDebuggingComponent_OnRep_PathCorridorData_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.OnRep_ActivationCounter
// Size: 0x0000
struct GameplayDebuggingComponent_OnRep_ActivationCounter_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
// Size: 0x0000
struct GameplayDebuggingComponent_OnCycleDetailsView_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
// Size: 0x0001
struct GameplayDebuggingComponent_ClientEnableTargetSelection_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
// Size: 0x0008
struct GameplayDebuggingReplicator_ServerSetActorToDebug_Params {
public:
    class UObject* InActor; // 0x0000 (0x0008)
};

// Function: GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
// Size: 0x0010
struct GameplayDebuggingReplicator_ServerReplicateMessage_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t InMessage[0x4]; // 0x0008 (0x0004)
    uint8_t DataView[0x4]; // 0x000C (0x0004)
};

// Function: GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
// Size: 0x0000
struct GameplayDebuggingReplicator_OnRep_AutoActivate_Params {
public:
};

// Function: GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
// Size: 0x0010
struct GameplayDebuggingReplicator_ClientReplicateMessage_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t InMessage[0x4]; // 0x0008 (0x0004)
    uint8_t DataView[0x4]; // 0x000C (0x0004)
};

// Function: GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
// Size: 0x0010
struct GameplayDebuggingReplicator_ClientEnableTargetSelection_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* Context; // 0x0008 (0x0008)
};

// Function: GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
// Size: 0x0000
struct GameplayDebuggingReplicator_ClientAutoActivate_Params {
public:
};

} // namespace SDK

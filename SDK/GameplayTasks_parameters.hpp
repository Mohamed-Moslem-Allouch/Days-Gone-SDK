#pragma once
#include "Basic.hpp"
#include "GameplayTasks_structs.hpp"

namespace SDK {

// Function: GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// Size: 0x0000
struct GameplayTasksComponent_OnRep_SimulatedTasks_Params {
public:
};

// Function: GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// Size: 0x0041
struct GameplayTasksComponent_K2_RunGameplayTask_Params {
public:
    uint8_t TaskOwner[0x10]; // 0x0000 (0x0010)
    class UObject* Task; // 0x0010 (0x0008)
    uint8_t Priority; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> AdditionalRequiredResources; // 0x0020 (0x0010)
    struct TArray<uint8_t> AdditionalClaimedResources; // 0x0030 (0x0010)
    uint8_t ReturnValue; // 0x0040 (0x0001)
};

// Function: GameplayTasks.GameplayTask.ReadyForActivation
// Size: 0x0000
struct GameplayTask_ReadyForActivation_Params {
public:
};

// Function: GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// Size: 0x0000
struct GameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params {
public:
};

// Function: GameplayTasks.GameplayTask.EndTask
// Size: 0x0000
struct GameplayTask_EndTask_Params {
public:
};

// Function: GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// Size: 0x0040
struct GameplayTask_SpawnActor_SpawnActor_Params {
public:
    uint8_t TaskOwner[0x10]; // 0x0000 (0x0010)
    uint8_t SpawnLocation[0xC]; // 0x0010 (0x000C)
    uint8_t SpawnRotation[0xC]; // 0x001C (0x000C)
    class UClass* Class; // 0x0028 (0x0008)
    bool bSpawnOnlyOnAuthority; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// Size: 0x0010
struct GameplayTask_SpawnActor_FinishSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* SpawnedActor; // 0x0008 (0x0008)
};

// Function: GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// Size: 0x0011
struct GameplayTask_SpawnActor_BeginSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* SpawnedActor; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// Size: 0x0020
struct GameplayTask_WaitDelay_TaskWaitDelay_Params {
public:
    uint8_t TaskOwner[0x10]; // 0x0000 (0x0010)
    float Time; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// Size: 0x0000
struct GameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params {
public:
};

} // namespace SDK

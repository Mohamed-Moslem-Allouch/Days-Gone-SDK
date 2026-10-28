#pragma once
#include "Basic.hpp"
#include "GameplayTasks_structs.hpp"

namespace SDK {

// Class: GameplayTasks.GameplayTasksComponent
class GameplayTasksComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xB0]; // 0x0028 (0x00B0)
    struct TArray<uint8_t> SimulatedTasks; // 0x00D8 (0x0010)
    struct TArray<uint8_t> TaskPriorityQueue; // 0x00E8 (0x0010)
    uint8_t Pad_1[0x10]; // 0x00F8 (0x0010)
    struct TArray<uint8_t> TickingTasks; // 0x0108 (0x0010)
    uint8_t Pad_2[0x8]; // 0x0118 (0x0008)
    uint8_t OnClaimedResourcesChange[0x10]; // 0x0120 (0x0010)

public:
    void OnRep_SimulatedTasks();
    uint8_t K2_RunGameplayTask(uint8_t TaskOwner, class UObject* Task, uint8_t Priority, struct TArray<uint8_t> AdditionalRequiredResources, struct TArray<uint8_t> AdditionalClaimedResources);
};

// Class: GameplayTasks.GameplayTaskOwnerInterface
class GameplayTaskOwnerInterface : public Interface {
public:
};

// Class: GameplayTasks.GameplayTask
class GameplayTask : public Object {
public:
    struct FName InstanceName; // 0x0028 (0x0008)

public:
    void ReadyForActivation();
    void GenericGameplayTaskDelegate__DelegateSignature();
    void EndTask();
};

// Class: GameplayTasks.GameplayTask_SpawnActor
class GameplayTask_SpawnActor : public GameplayTask {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    uint8_t Success[0x10]; // 0x0058 (0x0010)
    uint8_t DidNotSpawn[0x10]; // 0x0068 (0x0010)
    uint8_t Pad_1[0x18]; // 0x0078 (0x0018)
    class UClass* ClassToSpawn; // 0x0090 (0x0008)

public:
    class UObject* SpawnActor(uint8_t TaskOwner, uint8_t SpawnLocation, uint8_t SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
    void FinishSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor);
    bool BeginSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor);
};

// Class: GameplayTasks.GameplayTask_WaitDelay
class GameplayTask_WaitDelay : public GameplayTask {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    uint8_t OnFinish[0x10]; // 0x0058 (0x0010)

public:
    class UObject* TaskWaitDelay(uint8_t TaskOwner, float Time);
    void TaskDelayDelegate__DelegateSignature();
};

// Class: GameplayTasks.GameplayTaskResource
class GameplayTaskResource : public Object {
public:
    int32_t ManualResourceID; // 0x0028 (0x0004)
    uint8_t AutoResourceID; // 0x002C (0x0001)
    uint8_t Pad_0[0x3]; // 0x002D (0x0003)
    bool bManuallySetID; // 0x0030 (0x0001)
};

} // namespace SDK

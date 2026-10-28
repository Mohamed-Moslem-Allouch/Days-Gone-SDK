#include "Basic.hpp"
#include "GameplayTasks_classes.hpp"
#include "GameplayTasks_parameters.hpp"

namespace SDK {

// Function: GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
void GameplayTasksComponent::OnRep_SimulatedTasks() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
uint8_t GameplayTasksComponent::K2_RunGameplayTask(uint8_t TaskOwner, class UObject* Task, uint8_t Priority, struct TArray<uint8_t> AdditionalRequiredResources, struct TArray<uint8_t> AdditionalClaimedResources) {
    static class UFunction* Func = nullptr;
    GameplayTasksComponent_K2_RunGameplayTask_Params Parms{};
    Parms.TaskOwner = TaskOwner;
    Parms.Task = Task;
    Parms.Priority = Priority;
    Parms.AdditionalRequiredResources = AdditionalRequiredResources;
    Parms.AdditionalClaimedResources = AdditionalClaimedResources;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTasks.GameplayTask.ReadyForActivation
void GameplayTask::ReadyForActivation() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
void GameplayTask::GenericGameplayTaskDelegate__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayTasks.GameplayTask.EndTask
void GameplayTask::EndTask() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayTasks.GameplayTask_SpawnActor.SpawnActor
class UObject* GameplayTask_SpawnActor::SpawnActor(uint8_t TaskOwner, uint8_t SpawnLocation, uint8_t SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority) {
    static class UFunction* Func = nullptr;
    GameplayTask_SpawnActor_SpawnActor_Params Parms{};
    Parms.TaskOwner = TaskOwner;
    Parms.SpawnLocation = SpawnLocation;
    Parms.SpawnRotation = SpawnRotation;
    Parms.Class = Class;
    Parms.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
void GameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    GameplayTask_SpawnActor_FinishSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
bool GameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    GameplayTask_SpawnActor_BeginSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
class UObject* GameplayTask_WaitDelay::TaskWaitDelay(uint8_t TaskOwner, float Time) {
    static class UFunction* Func = nullptr;
    GameplayTask_WaitDelay_TaskWaitDelay_Params Parms{};
    Parms.TaskOwner = TaskOwner;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
void GameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

} // namespace SDK

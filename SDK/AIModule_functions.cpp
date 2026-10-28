#include "Basic.hpp"
#include "AIModule_classes.hpp"
#include "AIModule_parameters.hpp"

namespace SDK {

// Function: AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
void PawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_SetSensingUpdatesEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnSensingComponent.SetSensingInterval
void PawnSensingComponent::SetSensingInterval(float NewSensingInterval) {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_SetSensingInterval_Params Parms{};
    Parms.NewSensingInterval = NewSensingInterval;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnSensingComponent.SetPeripheralVisionAngle
void PawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle) {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_SetPeripheralVisionAngle_Params Parms{};
    Parms.NewPeripheralVisionAngle = NewPeripheralVisionAngle;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
void PawnSensingComponent::SeePawnDelegate__DelegateSignature(class UObject* Pawn) {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_SeePawnDelegate__DelegateSignature_Params Parms{};
    Parms.Pawn = Pawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
void PawnSensingComponent::HearNoiseDelegate__DelegateSignature(class UObject* Instigator, uint8_t Location, float Volume) {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params Parms{};
    Parms.Instigator = Instigator;
    Parms.Location = Location;
    Parms.Volume = Volume;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnSensingComponent.GetPeripheralVisionCosine
float PawnSensingComponent::GetPeripheralVisionCosine() {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_GetPeripheralVisionCosine_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PawnSensingComponent.GetPeripheralVisionAngle
float PawnSensingComponent::GetPeripheralVisionAngle() {
    static class UFunction* Func = nullptr;
    PawnSensingComponent_GetPeripheralVisionAngle_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PathFollowingComponent.OnActorBump
void PathFollowingComponent::OnActorBump(class UObject* SelfActor, class UObject* OtherActor, uint8_t NormalImpulse, uint8_t Hit) {
    static class UFunction* Func = nullptr;
    PathFollowingComponent_OnActorBump_Params Parms{};
    Parms.SelfActor = SelfActor;
    Parms.OtherActor = OtherActor;
    Parms.NormalImpulse = NormalImpulse;
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PathFollowingComponent.GetPathDestination
uint8_t PathFollowingComponent::GetPathDestination() {
    static class UFunction* Func = nullptr;
    PathFollowingComponent_GetPathDestination_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PathFollowingComponent.GetPathActionType
uint8_t PathFollowingComponent::GetPathActionType() {
    static class UFunction* Func = nullptr;
    PathFollowingComponent_GetPathActionType_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.CrowdFollowingComponent.SuspendCrowdSteering
void CrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend) {
    static class UFunction* Func = nullptr;
    CrowdFollowingComponent_SuspendCrowdSteering_Params Parms{};
    Parms.bSuspend = bSuspend;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.UseBlackboard
bool AIController::UseBlackboard(class UObject* BlackboardAsset, class UObject* BlackboardComponent) {
    static class UFunction* Func = nullptr;
    AIController_UseBlackboard_Params Parms{};
    Parms.BlackboardAsset = BlackboardAsset;
    Parms.BlackboardComponent = BlackboardComponent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.SetMoveBlockDetection
void AIController::SetMoveBlockDetection(bool bEnable) {
    static class UFunction* Func = nullptr;
    AIController_SetMoveBlockDetection_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.RunBehaviorTree
bool AIController::RunBehaviorTree(class UObject* BTAsset) {
    static class UFunction* Func = nullptr;
    AIController_RunBehaviorTree_Params Parms{};
    Parms.BTAsset = BTAsset;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.OnUsingBlackBoard
void AIController::OnUsingBlackBoard(class UObject* BlackboardComp, class UObject* BlackboardAsset) {
    static class UFunction* Func = nullptr;
    AIController_OnUsingBlackBoard_Params Parms{};
    Parms.BlackboardComp = BlackboardComp;
    Parms.BlackboardAsset = BlackboardAsset;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.OnUnpossess
void AIController::OnUnpossess(class UObject* UnpossessedPawn) {
    static class UFunction* Func = nullptr;
    AIController_OnUnpossess_Params Parms{};
    Parms.UnpossessedPawn = UnpossessedPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.OnPossess
void AIController::OnPossess(class UObject* PossessedPawn) {
    static class UFunction* Func = nullptr;
    AIController_OnPossess_Params Parms{};
    Parms.PossessedPawn = PossessedPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.OnGameplayTaskResourcesClaimed
void AIController::OnGameplayTaskResourcesClaimed(uint8_t NewlyClaimed, uint8_t FreshlyReleased) {
    static class UFunction* Func = nullptr;
    AIController_OnGameplayTaskResourcesClaimed_Params Parms{};
    Parms.NewlyClaimed = NewlyClaimed;
    Parms.FreshlyReleased = FreshlyReleased;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.MoveToLocation
uint8_t AIController::MoveToLocation(uint8_t Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath) {
    static class UFunction* Func = nullptr;
    AIController_MoveToLocation_Params Parms{};
    Parms.Dest = Dest;
    Parms.AcceptanceRadius = AcceptanceRadius;
    Parms.bStopOnOverlap = bStopOnOverlap;
    Parms.bUsePathfinding = bUsePathfinding;
    Parms.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
    Parms.bCanStrafe = bCanStrafe;
    Parms.FilterClass = FilterClass;
    Parms.bAllowPartialPath = bAllowPartialPath;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.MoveToActor
uint8_t AIController::MoveToActor(class UObject* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath) {
    static class UFunction* Func = nullptr;
    AIController_MoveToActor_Params Parms{};
    Parms.Goal = Goal;
    Parms.AcceptanceRadius = AcceptanceRadius;
    Parms.bStopOnOverlap = bStopOnOverlap;
    Parms.bUsePathfinding = bUsePathfinding;
    Parms.bCanStrafe = bCanStrafe;
    Parms.FilterClass = FilterClass;
    Parms.bAllowPartialPath = bAllowPartialPath;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.K2_SetFocus
void AIController::K2_SetFocus(class UObject* NewFocus) {
    static class UFunction* Func = nullptr;
    AIController_K2_SetFocus_Params Parms{};
    Parms.NewFocus = NewFocus;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.K2_SetFocalPoint
void AIController::K2_SetFocalPoint(uint8_t FP) {
    static class UFunction* Func = nullptr;
    AIController_K2_SetFocalPoint_Params Parms{};
    Parms.FP = FP;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIController.K2_ClearFocus
void AIController::K2_ClearFocus() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.AIController.HasPartialPath
bool AIController::HasPartialPath() {
    static class UFunction* Func = nullptr;
    AIController_HasPartialPath_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetPathFollowingComponent
class UObject* AIController::GetPathFollowingComponent() {
    static class UFunction* Func = nullptr;
    AIController_GetPathFollowingComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetMoveStatus
uint8_t AIController::GetMoveStatus() {
    static class UFunction* Func = nullptr;
    AIController_GetMoveStatus_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetImmediateMoveDestination
uint8_t AIController::GetImmediateMoveDestination() {
    static class UFunction* Func = nullptr;
    AIController_GetImmediateMoveDestination_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetFocusActor
class UObject* AIController::GetFocusActor() {
    static class UFunction* Func = nullptr;
    AIController_GetFocusActor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetFocalPointOnActor
uint8_t AIController::GetFocalPointOnActor(class UObject* Actor) {
    static class UFunction* Func = nullptr;
    AIController_GetFocalPointOnActor_Params Parms{};
    Parms.Actor = Actor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetFocalPoint
uint8_t AIController::GetFocalPoint() {
    static class UFunction* Func = nullptr;
    AIController_GetFocalPoint_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIController.GetAIPerceptionComponent
class UObject* AIController::GetAIPerceptionComponent() {
    static class UFunction* Func = nullptr;
    AIController_GetAIPerceptionComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AISystem.AILoggingVerbose
void AISystem::AILoggingVerbose() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.AISystem.AIIgnorePlayers
void AISystem::AIIgnorePlayers() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
void AIAsyncTaskBlueprintProxy::OnMoveCompleted(uint8_t RequestID, uint8_t MovementResult) {
    static class UFunction* Func = nullptr;
    AIAsyncTaskBlueprintProxy_OnMoveCompleted_Params Parms{};
    Parms.RequestID = RequestID;
    Parms.MovementResult = MovementResult;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
void AIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UObject* AnimInstance, bool bUnlockMovement, bool UnlockAILogic) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params Parms{};
    Parms.AnimInstance = AnimInstance;
    Parms.bUnlockMovement = bUnlockMovement;
    Parms.UnlockAILogic = UnlockAILogic;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
class UObject* AIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UObject* BehaviorTree, uint8_t Location, uint8_t Rotation, bool bNoCollisionFail) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_SpawnAIFromClass_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PawnClass = PawnClass;
    Parms.BehaviorTree = BehaviorTree;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.bNoCollisionFail = bNoCollisionFail;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIBlueprintHelperLibrary.SendAIMessage
void AIBlueprintHelperLibrary::SendAIMessage(class UObject* Target, struct FName Message, class UObject* MessageSource, bool bSuccess) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_SendAIMessage_Params Parms{};
    Parms.Target = Target;
    Parms.Message = Message;
    Parms.MessageSource = MessageSource;
    Parms.bSuccess = bSuccess;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
void AIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UObject* AnimInstance, bool bLockMovement, bool LockAILogic) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params Parms{};
    Parms.AnimInstance = AnimInstance;
    Parms.bLockMovement = bLockMovement;
    Parms.LockAILogic = LockAILogic;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
bool AIBlueprintHelperLibrary::IsValidAIRotation(uint8_t Rotation) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_IsValidAIRotation_Params Parms{};
    Parms.Rotation = Rotation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIBlueprintHelperLibrary.IsValidAILocation
bool AIBlueprintHelperLibrary::IsValidAILocation(uint8_t Location) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_IsValidAILocation_Params Parms{};
    Parms.Location = Location;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
bool AIBlueprintHelperLibrary::IsValidAIDirection(uint8_t DirectionVector) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_IsValidAIDirection_Params Parms{};
    Parms.DirectionVector = DirectionVector;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIBlueprintHelperLibrary.GetBlackboard
class UObject* AIBlueprintHelperLibrary::GetBlackboard(class UObject* Target) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_GetBlackboard_Params Parms{};
    Parms.Target = Target;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIBlueprintHelperLibrary.GetAIController
class UObject* AIBlueprintHelperLibrary::GetAIController(class UObject* ControlledActor) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_GetAIController_Params Parms{};
    Parms.ControlledActor = ControlledActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
class UObject* AIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* WorldContextObject, class UObject* Pawn, uint8_t Destination, class UObject* TargetActor, float AcceptanceRadius, bool bStopOnOverlap) {
    static class UFunction* Func = nullptr;
    AIBlueprintHelperLibrary_CreateMoveToProxyObject_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Pawn = Pawn;
    Parms.Destination = Destination;
    Parms.TargetActor = TargetActor;
    Parms.AcceptanceRadius = AcceptanceRadius;
    Parms.bStopOnOverlap = bStopOnOverlap;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PawnActionsComponent.K2_PushAction
bool PawnActionsComponent::K2_PushAction(class UObject* NewAction, uint8_t Priority, class UObject* Instigator) {
    static class UFunction* Func = nullptr;
    PawnActionsComponent_K2_PushAction_Params Parms{};
    Parms.NewAction = NewAction;
    Parms.Priority = Priority;
    Parms.Instigator = Instigator;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PawnActionsComponent.K2_ForceAbortAction
uint8_t PawnActionsComponent::K2_ForceAbortAction(class UObject* ActionToAbort) {
    static class UFunction* Func = nullptr;
    PawnActionsComponent_K2_ForceAbortAction_Params Parms{};
    Parms.ActionToAbort = ActionToAbort;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PawnActionsComponent.K2_BeginAction
bool PawnActionsComponent::K2_BeginAction(class UObject* Pawn, class UObject* Action, uint8_t Priority) {
    static class UFunction* Func = nullptr;
    PawnActionsComponent_K2_BeginAction_Params Parms{};
    Parms.Pawn = Pawn;
    Parms.Action = Action;
    Parms.Priority = Priority;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PawnActionsComponent.K2_AbortAction
uint8_t PawnActionsComponent::K2_AbortAction(class UObject* ActionToAbort) {
    static class UFunction* Func = nullptr;
    PawnActionsComponent_K2_AbortAction_Params Parms{};
    Parms.ActionToAbort = ActionToAbort;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIPerceptionSystem.ReportPerceptionEvent
void AIPerceptionSystem::ReportPerceptionEvent(class UObject* WorldContext, class UObject* PerceptionEvent) {
    static class UFunction* Func = nullptr;
    AIPerceptionSystem_ReportPerceptionEvent_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.PerceptionEvent = PerceptionEvent;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionSystem.ReportEvent
void AIPerceptionSystem::ReportEvent(class UObject* PerceptionEvent) {
    static class UFunction* Func = nullptr;
    AIPerceptionSystem_ReportEvent_Params Parms{};
    Parms.PerceptionEvent = PerceptionEvent;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
bool AIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class UObject* Target) {
    static class UFunction* Func = nullptr;
    AIPerceptionSystem_RegisterPerceptionStimuliSource_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.Sense = Sense;
    Parms.Target = Target;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
void AIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(uint8_t EndPlayReason) {
    static class UFunction* Func = nullptr;
    AIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params Parms{};
    Parms.EndPlayReason = EndPlayReason;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionSystem.GetSenseClassForStimulus
class UClass* AIPerceptionSystem::GetSenseClassForStimulus(class UObject* WorldContext, uint8_t Stimulus) {
    static class UFunction* Func = nullptr;
    AIPerceptionSystem_GetSenseClassForStimulus_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.Stimulus = Stimulus;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
void AIPerceptionComponent::RequestStimuliListenerUpdate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.AIPerceptionComponent.OnOwnerEndPlay
void AIPerceptionComponent::OnOwnerEndPlay(uint8_t EndPlayReason) {
    static class UFunction* Func = nullptr;
    AIPerceptionComponent_OnOwnerEndPlay_Params Parms{};
    Parms.EndPlayReason = EndPlayReason;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionComponent.GetPerceivedHostileActors
void AIPerceptionComponent::GetPerceivedHostileActors(struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    AIPerceptionComponent_GetPerceivedHostileActors_Params Parms{};
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionComponent.GetPerceivedActors
void AIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    AIPerceptionComponent_GetPerceivedActors_Params Parms{};
    Parms.SenseToUse = SenseToUse;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionComponent.GetActorsPerception
bool AIPerceptionComponent::GetActorsPerception(class UObject* Actor, uint8_t Info) {
    static class UFunction* Func = nullptr;
    AIPerceptionComponent_GetActorsPerception_Params Parms{};
    Parms.Actor = Actor;
    Parms.Info = Info;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
void AIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass) {
    static class UFunction* Func = nullptr;
    AIPerceptionStimuliSourceComponent_UnregisterFromSense_Params Parms{};
    Parms.SenseClass = SenseClass;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
void AIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
void AIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
void AIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass) {
    static class UFunction* Func = nullptr;
    AIPerceptionStimuliSourceComponent_RegisterForSense_Params Parms{};
    Parms.SenseClass = SenseClass;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Blueprint.OnUpdate
float AISense_Blueprint::OnUpdate(struct TArray<uint8_t> EventsToProcess) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_OnUpdate_Params Parms{};
    Parms.EventsToProcess = EventsToProcess;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.AISense_Blueprint.OnListenerUpdated
void AISense_Blueprint::OnListenerUpdated(class UObject* ActorListener, class UObject* PerceptionComponent) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_OnListenerUpdated_Params Parms{};
    Parms.ActorListener = ActorListener;
    Parms.PerceptionComponent = PerceptionComponent;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Blueprint.OnListenerUnregistered
void AISense_Blueprint::OnListenerUnregistered(class UObject* ActorListener, class UObject* PerceptionComponent) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_OnListenerUnregistered_Params Parms{};
    Parms.ActorListener = ActorListener;
    Parms.PerceptionComponent = PerceptionComponent;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Blueprint.OnListenerRegistered
void AISense_Blueprint::OnListenerRegistered(class UObject* ActorListener, class UObject* PerceptionComponent) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_OnListenerRegistered_Params Parms{};
    Parms.ActorListener = ActorListener;
    Parms.PerceptionComponent = PerceptionComponent;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Blueprint.K2_OnNewPawn
void AISense_Blueprint::K2_OnNewPawn(class UObject* NewPawn) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_K2_OnNewPawn_Params Parms{};
    Parms.NewPawn = NewPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Blueprint.GetAllListenerComponents
void AISense_Blueprint::GetAllListenerComponents(struct TArray<uint8_t> ListenerComponents) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_GetAllListenerComponents_Params Parms{};
    Parms.ListenerComponents = ListenerComponents;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Blueprint.GetAllListenerActors
void AISense_Blueprint::GetAllListenerActors(struct TArray<uint8_t> ListenerActors) {
    static class UFunction* Func = nullptr;
    AISense_Blueprint_GetAllListenerActors_Params Parms{};
    Parms.ListenerActors = ListenerActors;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Damage.ReportDamageEvent
void AISense_Damage::ReportDamageEvent(class UObject* WorldContext, class UObject* DamagedActor, class UObject* Instigator, float DamageAmount, uint8_t EventLocation, uint8_t HitLocation) {
    static class UFunction* Func = nullptr;
    AISense_Damage_ReportDamageEvent_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.DamagedActor = DamagedActor;
    Parms.Instigator = Instigator;
    Parms.DamageAmount = DamageAmount;
    Parms.EventLocation = EventLocation;
    Parms.HitLocation = HitLocation;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Hearing.ReportNoiseEvent
void AISense_Hearing::ReportNoiseEvent(class UObject* WorldContext, uint8_t NoiseLocation, float Loudness, class UObject* Instigator, float MaxRange, struct FName Tag) {
    static class UFunction* Func = nullptr;
    AISense_Hearing_ReportNoiseEvent_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.NoiseLocation = NoiseLocation;
    Parms.Loudness = Loudness;
    Parms.Instigator = Instigator;
    Parms.MaxRange = MaxRange;
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Prediction.RequestPawnPredictionEvent
void AISense_Prediction::RequestPawnPredictionEvent(class UObject* Requestor, class UObject* PredictedActor, float PredictionTime) {
    static class UFunction* Func = nullptr;
    AISense_Prediction_RequestPawnPredictionEvent_Params Parms{};
    Parms.Requestor = Requestor;
    Parms.PredictedActor = PredictedActor;
    Parms.PredictionTime = PredictionTime;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AISense_Prediction.RequestControllerPredictionEvent
void AISense_Prediction::RequestControllerPredictionEvent(class UObject* Requestor, class UObject* PredictedActor, float PredictionTime) {
    static class UFunction* Func = nullptr;
    AISense_Prediction_RequestControllerPredictionEvent_Params Parms{};
    Parms.Requestor = Requestor;
    Parms.PredictedActor = PredictedActor;
    Parms.PredictionTime = PredictionTime;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.AITask_MoveTo.AIMoveTo
class UObject* AITask_MoveTo::AIMoveTo(class UObject* Controller, uint8_t GoalLocation, class UObject* GoalActor, float AcceptanceRadius, uint8_t StopOnOverlap, uint8_t AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic) {
    static class UFunction* Func = nullptr;
    AITask_MoveTo_AIMoveTo_Params Parms{};
    Parms.Controller = Controller;
    Parms.GoalLocation = GoalLocation;
    Parms.GoalActor = GoalActor;
    Parms.AcceptanceRadius = AcceptanceRadius;
    Parms.StopOnOverlap = StopOnOverlap;
    Parms.AcceptPartialPath = AcceptPartialPath;
    Parms.bUsePathfinding = bUsePathfinding;
    Parms.bLockAILogic = bLockAILogic;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BrainComponent.StopLogic
void BrainComponent::StopLogic(struct FString Reason) {
    static class UFunction* Func = nullptr;
    BrainComponent_StopLogic_Params Parms{};
    Parms.Reason = Reason;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BrainComponent.RestartLogic
void BrainComponent::RestartLogic() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.BehaviorTreeComponent.SetDynamicSubtree
void BehaviorTreeComponent::SetDynamicSubtree(uint8_t InjectTag, class UObject* BehaviorAsset) {
    static class UFunction* Func = nullptr;
    BehaviorTreeComponent_SetDynamicSubtree_Params Parms{};
    Parms.InjectTag = InjectTag;
    Parms.BehaviorAsset = BehaviorAsset;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
float BehaviorTreeComponent::GetTagCooldownEndTime(uint8_t CooldownTag) {
    static class UFunction* Func = nullptr;
    BehaviorTreeComponent_GetTagCooldownEndTime_Params Parms{};
    Parms.CooldownTag = CooldownTag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BehaviorTreeComponent.AddCooldownTagDuration
void BehaviorTreeComponent::AddCooldownTagDuration(uint8_t CooldownTag, float CoolDownDuration, bool bAddToExistingDuration) {
    static class UFunction* Func = nullptr;
    BehaviorTreeComponent_AddCooldownTagDuration_Params Parms{};
    Parms.CooldownTag = CooldownTag;
    Parms.CoolDownDuration = CoolDownDuration;
    Parms.bAddToExistingDuration = bAddToExistingDuration;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsVector
void BlackboardComponent::SetValueAsVector(struct FName KeyName, uint8_t VectorValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsVector_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.VectorValue = VectorValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsString
void BlackboardComponent::SetValueAsString(struct FName KeyName, struct FString StringValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsString_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.StringValue = StringValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsRotator
void BlackboardComponent::SetValueAsRotator(struct FName KeyName, uint8_t VectorValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsRotator_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.VectorValue = VectorValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsObject
void BlackboardComponent::SetValueAsObject(struct FName KeyName, class UObject* ObjectValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsObject_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.ObjectValue = ObjectValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsName
void BlackboardComponent::SetValueAsName(struct FName KeyName, struct FName NameValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsName_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.NameValue = NameValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsInt
void BlackboardComponent::SetValueAsInt(struct FName KeyName, int32_t IntValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsInt_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.IntValue = IntValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsFloat
void BlackboardComponent::SetValueAsFloat(struct FName KeyName, float FloatValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsFloat_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.FloatValue = FloatValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsEnum
void BlackboardComponent::SetValueAsEnum(struct FName KeyName, uint8_t EnumValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsEnum_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.EnumValue = EnumValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsClass
void BlackboardComponent::SetValueAsClass(struct FName KeyName, class UClass* ClassValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsClass_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.ClassValue = ClassValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.SetValueAsBool
void BlackboardComponent::SetValueAsBool(struct FName KeyName, bool BoolValue) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_SetValueAsBool_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.BoolValue = BoolValue;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BlackboardComponent.IsVectorValueSet
bool BlackboardComponent::IsVectorValueSet(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_IsVectorValueSet_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsVector
uint8_t BlackboardComponent::GetValueAsVector(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsVector_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsString
struct FString BlackboardComponent::GetValueAsString(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsString_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsRotator
uint8_t BlackboardComponent::GetValueAsRotator(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsRotator_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsObject
class UObject* BlackboardComponent::GetValueAsObject(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsObject_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsName
struct FName BlackboardComponent::GetValueAsName(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsName_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsInt
int32_t BlackboardComponent::GetValueAsInt(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsInt_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsFloat
float BlackboardComponent::GetValueAsFloat(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsFloat_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsEnum
uint8_t BlackboardComponent::GetValueAsEnum(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsEnum_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsClass
class UClass* BlackboardComponent::GetValueAsClass(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsClass_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetValueAsBool
bool BlackboardComponent::GetValueAsBool(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetValueAsBool_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetRotationFromEntry
bool BlackboardComponent::GetRotationFromEntry(struct FName KeyName, uint8_t ResultRotation) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetRotationFromEntry_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.ResultRotation = ResultRotation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.GetLocationFromEntry
bool BlackboardComponent::GetLocationFromEntry(struct FName KeyName, uint8_t ResultLocation) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_GetLocationFromEntry_Params Parms{};
    Parms.KeyName = KeyName;
    Parms.ResultLocation = ResultLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BlackboardComponent.ClearValue
void BlackboardComponent::ClearValue(struct FName KeyName) {
    static class UFunction* Func = nullptr;
    BlackboardComponent_ClearValue_Params Parms{};
    Parms.KeyName = KeyName;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.StopUsingExternalEvent
void BTFunctionLibrary::StopUsingExternalEvent(class UObject* NodeOwner) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_StopUsingExternalEvent_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.StartUsingExternalEvent
void BTFunctionLibrary::StartUsingExternalEvent(class UObject* NodeOwner, class UObject* OwningActor) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_StartUsingExternalEvent_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.OwningActor = OwningActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
void BTFunctionLibrary::SetBlackboardValueAsVector(class UObject* NodeOwner, uint8_t Key, uint8_t Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsVector_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsString
void BTFunctionLibrary::SetBlackboardValueAsString(class UObject* NodeOwner, uint8_t Key, struct FString Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsString_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
void BTFunctionLibrary::SetBlackboardValueAsRotator(class UObject* NodeOwner, uint8_t Key, uint8_t Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsRotator_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
void BTFunctionLibrary::SetBlackboardValueAsObject(class UObject* NodeOwner, uint8_t Key, class UObject* Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsObject_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsName
void BTFunctionLibrary::SetBlackboardValueAsName(class UObject* NodeOwner, uint8_t Key, struct FName Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsName_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
void BTFunctionLibrary::SetBlackboardValueAsInt(class UObject* NodeOwner, uint8_t Key, int32_t Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsInt_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
void BTFunctionLibrary::SetBlackboardValueAsFloat(class UObject* NodeOwner, uint8_t Key, float Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsFloat_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
void BTFunctionLibrary::SetBlackboardValueAsEnum(class UObject* NodeOwner, uint8_t Key, uint8_t Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsEnum_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
void BTFunctionLibrary::SetBlackboardValueAsClass(class UObject* NodeOwner, uint8_t Key, class UClass* Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsClass_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
void BTFunctionLibrary::SetBlackboardValueAsBool(class UObject* NodeOwner, uint8_t Key, bool Value) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_SetBlackboardValueAsBool_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.GetOwnersBlackboard
class UObject* BTFunctionLibrary::GetOwnersBlackboard(class UObject* NodeOwner) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetOwnersBlackboard_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetOwnerComponent
class UObject* BTFunctionLibrary::GetOwnerComponent(class UObject* NodeOwner) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetOwnerComponent_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
uint8_t BTFunctionLibrary::GetBlackboardValueAsVector(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsVector_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct FString BTFunctionLibrary::GetBlackboardValueAsString(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsString_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
uint8_t BTFunctionLibrary::GetBlackboardValueAsRotator(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsRotator_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
class UObject* BTFunctionLibrary::GetBlackboardValueAsObject(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsObject_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct FName BTFunctionLibrary::GetBlackboardValueAsName(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsName_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
int32_t BTFunctionLibrary::GetBlackboardValueAsInt(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsInt_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
float BTFunctionLibrary::GetBlackboardValueAsFloat(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsFloat_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
uint8_t BTFunctionLibrary::GetBlackboardValueAsEnum(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsEnum_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
class UClass* BTFunctionLibrary::GetBlackboardValueAsClass(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsClass_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
bool BTFunctionLibrary::GetBlackboardValueAsBool(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsBool_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
class UObject* BTFunctionLibrary::GetBlackboardValueAsActor(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_GetBlackboardValueAsActor_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
void BTFunctionLibrary::ClearBlackboardValueAsVector(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_ClearBlackboardValueAsVector_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTFunctionLibrary.ClearBlackboardValue
void BTFunctionLibrary::ClearBlackboardValue(class UObject* NodeOwner, uint8_t Key) {
    static class UFunction* Func = nullptr;
    BTFunctionLibrary_ClearBlackboardValue_Params Parms{};
    Parms.NodeOwner = NodeOwner;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
void BTDecorator_BlueprintBase::ReceiveTickAI(class UObject* OwnerController, class UObject* ControlledPawn, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveTickAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveTick
void BTDecorator_BlueprintBase::ReceiveTick(class UObject* OwnerActor, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveTick_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
void BTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
void BTDecorator_BlueprintBase::ReceiveObserverDeactivated(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
void BTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
void BTDecorator_BlueprintBase::ReceiveObserverActivated(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveObserverActivated_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
void BTDecorator_BlueprintBase::ReceiveExecutionStartAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
void BTDecorator_BlueprintBase::ReceiveExecutionStart(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveExecutionStart_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
void BTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class UObject* OwnerController, class UObject* ControlledPawn, uint8_t NodeResult) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    Parms.NodeResult = NodeResult;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
void BTDecorator_BlueprintBase::ReceiveExecutionFinish(class UObject* OwnerActor, uint8_t NodeResult) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveExecutionFinish_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    Parms.NodeResult = NodeResult;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
void BTDecorator_BlueprintBase::ReceiveConditionCheck(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_ReceiveConditionCheck_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
bool BTDecorator_BlueprintBase::PerformConditionCheckAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_PerformConditionCheckAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
bool BTDecorator_BlueprintBase::PerformConditionCheck(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_PerformConditionCheck_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
bool BTDecorator_BlueprintBase::IsDecoratorObserverActive() {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_IsDecoratorObserverActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
bool BTDecorator_BlueprintBase::IsDecoratorExecutionActive() {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
void BTDecorator_BlueprintBase::FinishConditionCheck(bool bAllowExecution) {
    static class UFunction* Func = nullptr;
    BTDecorator_BlueprintBase_FinishConditionCheck_Params Parms{};
    Parms.bAllowExecution = bAllowExecution;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveTickAI
void BTService_BlueprintBase::ReceiveTickAI(class UObject* OwnerController, class UObject* ControlledPawn, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveTickAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveTick
void BTService_BlueprintBase::ReceiveTick(class UObject* OwnerActor, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveTick_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
void BTService_BlueprintBase::ReceiveSearchStartAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveSearchStartAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveSearchStart
void BTService_BlueprintBase::ReceiveSearchStart(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveSearchStart_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
void BTService_BlueprintBase::ReceiveDeactivationAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveDeactivationAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveDeactivation
void BTService_BlueprintBase::ReceiveDeactivation(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveDeactivation_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveActivationAI
void BTService_BlueprintBase::ReceiveActivationAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveActivationAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.ReceiveActivation
void BTService_BlueprintBase::ReceiveActivation(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_ReceiveActivation_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTService_BlueprintBase.IsServiceActive
bool BTService_BlueprintBase::IsServiceActive() {
    static class UFunction* Func = nullptr;
    BTService_BlueprintBase_IsServiceActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
void BTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_SetFinishOnMessageWithId_Params Parms{};
    Parms.MessageName = MessageName;
    Parms.RequestID = RequestID;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.SetFinishOnMessage
void BTTask_BlueprintBase::SetFinishOnMessage(struct FName MessageName) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_SetFinishOnMessage_Params Parms{};
    Parms.MessageName = MessageName;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.ReceiveTickAI
void BTTask_BlueprintBase::ReceiveTickAI(class UObject* OwnerController, class UObject* ControlledPawn, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_ReceiveTickAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.ReceiveTick
void BTTask_BlueprintBase::ReceiveTick(class UObject* OwnerActor, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_ReceiveTick_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
void BTTask_BlueprintBase::ReceiveExecuteAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_ReceiveExecuteAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.ReceiveExecute
void BTTask_BlueprintBase::ReceiveExecute(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_ReceiveExecute_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.ReceiveAbortAI
void BTTask_BlueprintBase::ReceiveAbortAI(class UObject* OwnerController, class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_ReceiveAbortAI_Params Parms{};
    Parms.OwnerController = OwnerController;
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.ReceiveAbort
void BTTask_BlueprintBase::ReceiveAbort(class UObject* OwnerActor) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_ReceiveAbort_Params Parms{};
    Parms.OwnerActor = OwnerActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.IsTaskExecuting
bool BTTask_BlueprintBase::IsTaskExecuting() {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_IsTaskExecuting_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTTask_BlueprintBase.IsTaskAborting
bool BTTask_BlueprintBase::IsTaskAborting() {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_IsTaskAborting_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.BTTask_BlueprintBase.FinishExecute
void BTTask_BlueprintBase::FinishExecute(bool bSuccess) {
    static class UFunction* Func = nullptr;
    BTTask_BlueprintBase_FinishExecute_Params Parms{};
    Parms.bSuccess = bSuccess;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.BTTask_BlueprintBase.FinishAbort
void BTTask_BlueprintBase::FinishAbort() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.PawnAction.GetActionPriority
uint8_t PawnAction::GetActionPriority() {
    static class UFunction* Func = nullptr;
    PawnAction_GetActionPriority_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.PawnAction.Finish
void PawnAction::Finish(uint8_t WithResult) {
    static class UFunction* Func = nullptr;
    PawnAction_Finish_Params Parms{};
    Parms.WithResult = WithResult;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnAction.CreateActionInstance
class UObject* PawnAction::CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass) {
    static class UFunction* Func = nullptr;
    PawnAction_CreateActionInstance_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.ActionClass = ActionClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
void EnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierActor, uint8_t ResultingLocation) {
    static class UFunction* Func = nullptr;
    EnvQueryContext_BlueprintBase_ProvideSingleLocation_Params Parms{};
    Parms.QuerierActor = QuerierActor;
    Parms.ResultingLocation = ResultingLocation;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
void EnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierActor, class UObject* ResultingActor) {
    static class UFunction* Func = nullptr;
    EnvQueryContext_BlueprintBase_ProvideSingleActor_Params Parms{};
    Parms.QuerierActor = QuerierActor;
    Parms.ResultingActor = ResultingActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
void EnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierActor, struct TArray<uint8_t> ResultingLocationSet) {
    static class UFunction* Func = nullptr;
    EnvQueryContext_BlueprintBase_ProvideLocationsSet_Params Parms{};
    Parms.QuerierActor = QuerierActor;
    Parms.ResultingLocationSet = ResultingLocationSet;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
void EnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierActor, struct TArray<uint8_t> ResultingActorsSet) {
    static class UFunction* Func = nullptr;
    EnvQueryContext_BlueprintBase_ProvideActorsSet_Params Parms{};
    Parms.QuerierActor = QuerierActor;
    Parms.ResultingActorsSet = ResultingActorsSet;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct TArray<uint8_t> EnvQueryInstanceBlueprintWrapper::GetResultsAsLocations() {
    static class UFunction* Func = nullptr;
    EnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct TArray<uint8_t> EnvQueryInstanceBlueprintWrapper::GetResultsAsActors() {
    static class UFunction* Func = nullptr;
    EnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
float EnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex) {
    static class UFunction* Func = nullptr;
    EnvQueryInstanceBlueprintWrapper_GetItemScore_Params Parms{};
    Parms.ItemIndex = ItemIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
void EnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UObject* QueryInstance, uint8_t QueryStatus) {
    static class UFunction* Func = nullptr;
    EnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params Parms{};
    Parms.QueryInstance = QueryInstance;
    Parms.QueryStatus = QueryStatus;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryManager.RunEQSQuery
class UObject* EnvQueryManager::RunEQSQuery(class UObject* WorldContext, class UObject* QueryTemplate, class UObject* Querier, uint8_t RunMode, class UClass* WrapperClass) {
    static class UFunction* Func = nullptr;
    EnvQueryManager_RunEQSQuery_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.QueryTemplate = QueryTemplate;
    Parms.Querier = Querier;
    Parms.RunMode = RunMode;
    Parms.WrapperClass = WrapperClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
class UObject* EnvQueryGenerator_BlueprintBase::GetQuerier() {
    static class UFunction* Func = nullptr;
    EnvQueryGenerator_BlueprintBase_GetQuerier_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
void EnvQueryGenerator_BlueprintBase::DoItemGeneration(struct TArray<uint8_t> ContextLocations) {
    static class UFunction* Func = nullptr;
    EnvQueryGenerator_BlueprintBase_DoItemGeneration_Params Parms{};
    Parms.ContextLocations = ContextLocations;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
void EnvQueryGenerator_BlueprintBase::AddGeneratedVector(uint8_t GeneratedVector) {
    static class UFunction* Func = nullptr;
    EnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params Parms{};
    Parms.GeneratedVector = GeneratedVector;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
void EnvQueryGenerator_BlueprintBase::AddGeneratedActor(class UObject* GeneratedActor) {
    static class UFunction* Func = nullptr;
    EnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params Parms{};
    Parms.GeneratedActor = GeneratedActor;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.EQSGameplayDebuggerObject.OnCycleDetailsView
void EQSGameplayDebuggerObject::OnCycleDetailsView() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.NavMeshGameplayDebuggerObject.ServerDiscardNavmeshData
void NavMeshGameplayDebuggerObject::ServerDiscardNavmeshData() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: AIModule.PawnAction_BlueprintBase.ActionTick
void PawnAction_BlueprintBase::ActionTick(class UObject* ControlledPawn, float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    PawnAction_BlueprintBase_ActionTick_Params Parms{};
    Parms.ControlledPawn = ControlledPawn;
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnAction_BlueprintBase.ActionStart
void PawnAction_BlueprintBase::ActionStart(class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    PawnAction_BlueprintBase_ActionStart_Params Parms{};
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnAction_BlueprintBase.ActionResume
void PawnAction_BlueprintBase::ActionResume(class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    PawnAction_BlueprintBase_ActionResume_Params Parms{};
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnAction_BlueprintBase.ActionPause
void PawnAction_BlueprintBase::ActionPause(class UObject* ControlledPawn) {
    static class UFunction* Func = nullptr;
    PawnAction_BlueprintBase_ActionPause_Params Parms{};
    Parms.ControlledPawn = ControlledPawn;
    ProcessEvent(Func, &Parms);
}

// Function: AIModule.PawnAction_BlueprintBase.ActionFinished
void PawnAction_BlueprintBase::ActionFinished(class UObject* ControlledPawn, uint8_t WithResult) {
    static class UFunction* Func = nullptr;
    PawnAction_BlueprintBase_ActionFinished_Params Parms{};
    Parms.ControlledPawn = ControlledPawn;
    Parms.WithResult = WithResult;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

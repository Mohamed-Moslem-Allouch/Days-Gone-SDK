#pragma once
#include "Basic.hpp"
#include "AIModule_structs.hpp"

namespace SDK {

// Function: AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// Size: 0x0001
struct PawnSensingComponent_SetSensingUpdatesEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: AIModule.PawnSensingComponent.SetSensingInterval
// Size: 0x0004
struct PawnSensingComponent_SetSensingInterval_Params {
public:
    float NewSensingInterval; // 0x0000 (0x0004)
};

// Function: AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// Size: 0x0004
struct PawnSensingComponent_SetPeripheralVisionAngle_Params {
public:
    float NewPeripheralVisionAngle; // 0x0000 (0x0004)
};

// Function: AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// Size: 0x0008
struct PawnSensingComponent_SeePawnDelegate__DelegateSignature_Params {
public:
    class UObject* Pawn; // 0x0000 (0x0008)
};

// Function: AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// Size: 0x0018
struct PawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params {
public:
    class UObject* Instigator; // 0x0000 (0x0008)
    uint8_t Location[0xC]; // 0x0008 (0x000C)
    float Volume; // 0x0014 (0x0004)
};

// Function: AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// Size: 0x0004
struct PawnSensingComponent_GetPeripheralVisionCosine_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// Size: 0x0004
struct PawnSensingComponent_GetPeripheralVisionAngle_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: AIModule.PathFollowingComponent.OnActorBump
// Size: 0x00A8
struct PathFollowingComponent_OnActorBump_Params {
public:
    class UObject* SelfActor; // 0x0000 (0x0008)
    class UObject* OtherActor; // 0x0008 (0x0008)
    uint8_t NormalImpulse[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t Hit[0x88]; // 0x0020 (0x0088)
};

// Function: AIModule.PathFollowingComponent.GetPathDestination
// Size: 0x000C
struct PathFollowingComponent_GetPathDestination_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: AIModule.PathFollowingComponent.GetPathActionType
// Size: 0x0001
struct PathFollowingComponent_GetPathActionType_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// Size: 0x0001
struct CrowdFollowingComponent_SuspendCrowdSteering_Params {
public:
    bool bSuspend; // 0x0000 (0x0001)
};

// Function: AIModule.AIController.UseBlackboard
// Size: 0x0011
struct AIController_UseBlackboard_Params {
public:
    class UObject* BlackboardAsset; // 0x0000 (0x0008)
    class UObject* BlackboardComponent; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: AIModule.AIController.SetMoveBlockDetection
// Size: 0x0001
struct AIController_SetMoveBlockDetection_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: AIModule.AIController.RunBehaviorTree
// Size: 0x0009
struct AIController_RunBehaviorTree_Params {
public:
    class UObject* BTAsset; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.AIController.OnUsingBlackBoard
// Size: 0x0010
struct AIController_OnUsingBlackBoard_Params {
public:
    class UObject* BlackboardComp; // 0x0000 (0x0008)
    class UObject* BlackboardAsset; // 0x0008 (0x0008)
};

// Function: AIModule.AIController.OnUnpossess
// Size: 0x0008
struct AIController_OnUnpossess_Params {
public:
    class UObject* UnpossessedPawn; // 0x0000 (0x0008)
};

// Function: AIModule.AIController.OnPossess
// Size: 0x0008
struct AIController_OnPossess_Params {
public:
    class UObject* PossessedPawn; // 0x0000 (0x0008)
};

// Function: AIModule.AIController.OnGameplayTaskResourcesClaimed
// Size: 0x0004
struct AIController_OnGameplayTaskResourcesClaimed_Params {
public:
    uint8_t NewlyClaimed[0x2]; // 0x0000 (0x0002)
    uint8_t FreshlyReleased[0x2]; // 0x0002 (0x0002)
};

// Function: AIModule.AIController.MoveToLocation
// Size: 0x0022
struct AIController_MoveToLocation_Params {
public:
    uint8_t Dest[0xC]; // 0x0000 (0x000C)
    float AcceptanceRadius; // 0x000C (0x0004)
    bool bStopOnOverlap; // 0x0010 (0x0001)
    bool bUsePathfinding; // 0x0011 (0x0001)
    bool bProjectDestinationToNavigation; // 0x0012 (0x0001)
    bool bCanStrafe; // 0x0013 (0x0001)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UClass* FilterClass; // 0x0018 (0x0008)
    bool bAllowPartialPath; // 0x0020 (0x0001)
    uint8_t ReturnValue; // 0x0021 (0x0001)
};

// Function: AIModule.AIController.MoveToActor
// Size: 0x001A
struct AIController_MoveToActor_Params {
public:
    class UObject* Goal; // 0x0000 (0x0008)
    float AcceptanceRadius; // 0x0008 (0x0004)
    bool bStopOnOverlap; // 0x000C (0x0001)
    bool bUsePathfinding; // 0x000D (0x0001)
    bool bCanStrafe; // 0x000E (0x0001)
    uint8_t Pad_0[0x1]; // 0x000F (0x0001)
    class UClass* FilterClass; // 0x0010 (0x0008)
    bool bAllowPartialPath; // 0x0018 (0x0001)
    uint8_t ReturnValue; // 0x0019 (0x0001)
};

// Function: AIModule.AIController.K2_SetFocus
// Size: 0x0008
struct AIController_K2_SetFocus_Params {
public:
    class UObject* NewFocus; // 0x0000 (0x0008)
};

// Function: AIModule.AIController.K2_SetFocalPoint
// Size: 0x000C
struct AIController_K2_SetFocalPoint_Params {
public:
    uint8_t FP[0xC]; // 0x0000 (0x000C)
};

// Function: AIModule.AIController.K2_ClearFocus
// Size: 0x0000
struct AIController_K2_ClearFocus_Params {
public:
};

// Function: AIModule.AIController.HasPartialPath
// Size: 0x0001
struct AIController_HasPartialPath_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.AIController.GetPathFollowingComponent
// Size: 0x0008
struct AIController_GetPathFollowingComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: AIModule.AIController.GetMoveStatus
// Size: 0x0001
struct AIController_GetMoveStatus_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.AIController.GetImmediateMoveDestination
// Size: 0x000C
struct AIController_GetImmediateMoveDestination_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: AIModule.AIController.GetFocusActor
// Size: 0x0008
struct AIController_GetFocusActor_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: AIModule.AIController.GetFocalPointOnActor
// Size: 0x0014
struct AIController_GetFocalPointOnActor_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: AIModule.AIController.GetFocalPoint
// Size: 0x000C
struct AIController_GetFocalPoint_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: AIModule.AIController.GetAIPerceptionComponent
// Size: 0x0008
struct AIController_GetAIPerceptionComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: AIModule.AISystem.AILoggingVerbose
// Size: 0x0000
struct AISystem_AILoggingVerbose_Params {
public:
};

// Function: AIModule.AISystem.AIIgnorePlayers
// Size: 0x0000
struct AISystem_AIIgnorePlayers_Params {
public:
};

// Function: AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// Size: 0x0005
struct AIAsyncTaskBlueprintProxy_OnMoveCompleted_Params {
public:
    uint8_t RequestID[0x4]; // 0x0000 (0x0004)
    uint8_t MovementResult; // 0x0004 (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// Size: 0x000A
struct AIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params {
public:
    class UObject* AnimInstance; // 0x0000 (0x0008)
    bool bUnlockMovement; // 0x0008 (0x0001)
    bool UnlockAILogic; // 0x0009 (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// Size: 0x0040
struct AIBlueprintHelperLibrary_SpawnAIFromClass_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* PawnClass; // 0x0008 (0x0008)
    class UObject* BehaviorTree; // 0x0010 (0x0008)
    uint8_t Location[0xC]; // 0x0018 (0x000C)
    uint8_t Rotation[0xC]; // 0x0024 (0x000C)
    bool bNoCollisionFail; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: AIModule.AIBlueprintHelperLibrary.SendAIMessage
// Size: 0x0019
struct AIBlueprintHelperLibrary_SendAIMessage_Params {
public:
    class UObject* Target; // 0x0000 (0x0008)
    struct FName Message; // 0x0008 (0x0008)
    class UObject* MessageSource; // 0x0010 (0x0008)
    bool bSuccess; // 0x0018 (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// Size: 0x000A
struct AIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params {
public:
    class UObject* AnimInstance; // 0x0000 (0x0008)
    bool bLockMovement; // 0x0008 (0x0001)
    bool LockAILogic; // 0x0009 (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// Size: 0x000D
struct AIBlueprintHelperLibrary_IsValidAIRotation_Params {
public:
    uint8_t Rotation[0xC]; // 0x0000 (0x000C)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// Size: 0x000D
struct AIBlueprintHelperLibrary_IsValidAILocation_Params {
public:
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// Size: 0x000D
struct AIBlueprintHelperLibrary_IsValidAIDirection_Params {
public:
    uint8_t DirectionVector[0xC]; // 0x0000 (0x000C)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: AIModule.AIBlueprintHelperLibrary.GetBlackboard
// Size: 0x0010
struct AIBlueprintHelperLibrary_GetBlackboard_Params {
public:
    class UObject* Target; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.AIBlueprintHelperLibrary.GetAIController
// Size: 0x0010
struct AIBlueprintHelperLibrary_GetAIController_Params {
public:
    class UObject* ControlledActor; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// Size: 0x0038
struct AIBlueprintHelperLibrary_CreateMoveToProxyObject_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Pawn; // 0x0008 (0x0008)
    uint8_t Destination[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* TargetActor; // 0x0020 (0x0008)
    float AcceptanceRadius; // 0x0028 (0x0004)
    bool bStopOnOverlap; // 0x002C (0x0001)
    uint8_t Pad_1[0x3]; // 0x002D (0x0003)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: AIModule.PawnActionsComponent.K2_PushAction
// Size: 0x0019
struct PawnActionsComponent_K2_PushAction_Params {
public:
    class UObject* NewAction; // 0x0000 (0x0008)
    uint8_t Priority; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    class UObject* Instigator; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: AIModule.PawnActionsComponent.K2_ForceAbortAction
// Size: 0x0009
struct PawnActionsComponent_K2_ForceAbortAction_Params {
public:
    class UObject* ActionToAbort; // 0x0000 (0x0008)
    uint8_t ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.PawnActionsComponent.K2_BeginAction
// Size: 0x0012
struct PawnActionsComponent_K2_BeginAction_Params {
public:
    class UObject* Pawn; // 0x0000 (0x0008)
    class UObject* Action; // 0x0008 (0x0008)
    uint8_t Priority; // 0x0010 (0x0001)
    bool ReturnValue; // 0x0011 (0x0001)
};

// Function: AIModule.PawnActionsComponent.K2_AbortAction
// Size: 0x0009
struct PawnActionsComponent_K2_AbortAction_Params {
public:
    class UObject* ActionToAbort; // 0x0000 (0x0008)
    uint8_t ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.AIPerceptionSystem.ReportPerceptionEvent
// Size: 0x0010
struct AIPerceptionSystem_ReportPerceptionEvent_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    class UObject* PerceptionEvent; // 0x0008 (0x0008)
};

// Function: AIModule.AIPerceptionSystem.ReportEvent
// Size: 0x0008
struct AIPerceptionSystem_ReportEvent_Params {
public:
    class UObject* PerceptionEvent; // 0x0000 (0x0008)
};

// Function: AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// Size: 0x0019
struct AIPerceptionSystem_RegisterPerceptionStimuliSource_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    class UClass* Sense; // 0x0008 (0x0008)
    class UObject* Target; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// Size: 0x0001
struct AIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params {
public:
    uint8_t EndPlayReason; // 0x0000 (0x0001)
};

// Function: AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// Size: 0x0058
struct AIPerceptionSystem_GetSenseClassForStimulus_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t Stimulus[0x48]; // 0x0008 (0x0048)
    class UClass* ReturnValue; // 0x0050 (0x0008)
};

// Function: AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// Size: 0x0000
struct AIPerceptionComponent_RequestStimuliListenerUpdate_Params {
public:
};

// Function: AIModule.AIPerceptionComponent.OnOwnerEndPlay
// Size: 0x0001
struct AIPerceptionComponent_OnOwnerEndPlay_Params {
public:
    uint8_t EndPlayReason; // 0x0000 (0x0001)
};

// Function: AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// Size: 0x0010
struct AIPerceptionComponent_GetPerceivedHostileActors_Params {
public:
    struct TArray<uint8_t> OutActors; // 0x0000 (0x0010)
};

// Function: AIModule.AIPerceptionComponent.GetPerceivedActors
// Size: 0x0018
struct AIPerceptionComponent_GetPerceivedActors_Params {
public:
    class UClass* SenseToUse; // 0x0000 (0x0008)
    struct TArray<uint8_t> OutActors; // 0x0008 (0x0010)
};

// Function: AIModule.AIPerceptionComponent.GetActorsPerception
// Size: 0x0029
struct AIPerceptionComponent_GetActorsPerception_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t Info[0x20]; // 0x0008 (0x0020)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// Size: 0x0008
struct AIPerceptionStimuliSourceComponent_UnregisterFromSense_Params {
public:
    class UClass* SenseClass; // 0x0000 (0x0008)
};

// Function: AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// Size: 0x0000
struct AIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params {
public:
};

// Function: AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// Size: 0x0000
struct AIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params {
public:
};

// Function: AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// Size: 0x0008
struct AIPerceptionStimuliSourceComponent_RegisterForSense_Params {
public:
    class UClass* SenseClass; // 0x0000 (0x0008)
};

// Function: AIModule.AISense_Blueprint.OnUpdate
// Size: 0x0014
struct AISense_Blueprint_OnUpdate_Params {
public:
    struct TArray<uint8_t> EventsToProcess; // 0x0000 (0x0010)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: AIModule.AISense_Blueprint.OnListenerUpdated
// Size: 0x0010
struct AISense_Blueprint_OnListenerUpdated_Params {
public:
    class UObject* ActorListener; // 0x0000 (0x0008)
    class UObject* PerceptionComponent; // 0x0008 (0x0008)
};

// Function: AIModule.AISense_Blueprint.OnListenerUnregistered
// Size: 0x0010
struct AISense_Blueprint_OnListenerUnregistered_Params {
public:
    class UObject* ActorListener; // 0x0000 (0x0008)
    class UObject* PerceptionComponent; // 0x0008 (0x0008)
};

// Function: AIModule.AISense_Blueprint.OnListenerRegistered
// Size: 0x0010
struct AISense_Blueprint_OnListenerRegistered_Params {
public:
    class UObject* ActorListener; // 0x0000 (0x0008)
    class UObject* PerceptionComponent; // 0x0008 (0x0008)
};

// Function: AIModule.AISense_Blueprint.K2_OnNewPawn
// Size: 0x0008
struct AISense_Blueprint_K2_OnNewPawn_Params {
public:
    class UObject* NewPawn; // 0x0000 (0x0008)
};

// Function: AIModule.AISense_Blueprint.GetAllListenerComponents
// Size: 0x0010
struct AISense_Blueprint_GetAllListenerComponents_Params {
public:
    struct TArray<uint8_t> ListenerComponents; // 0x0000 (0x0010)
};

// Function: AIModule.AISense_Blueprint.GetAllListenerActors
// Size: 0x0010
struct AISense_Blueprint_GetAllListenerActors_Params {
public:
    struct TArray<uint8_t> ListenerActors; // 0x0000 (0x0010)
};

// Function: AIModule.AISense_Damage.ReportDamageEvent
// Size: 0x0034
struct AISense_Damage_ReportDamageEvent_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    class UObject* DamagedActor; // 0x0008 (0x0008)
    class UObject* Instigator; // 0x0010 (0x0008)
    float DamageAmount; // 0x0018 (0x0004)
    uint8_t EventLocation[0xC]; // 0x001C (0x000C)
    uint8_t HitLocation[0xC]; // 0x0028 (0x000C)
};

// Function: AIModule.AISense_Hearing.ReportNoiseEvent
// Size: 0x0030
struct AISense_Hearing_ReportNoiseEvent_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t NoiseLocation[0xC]; // 0x0008 (0x000C)
    float Loudness; // 0x0014 (0x0004)
    class UObject* Instigator; // 0x0018 (0x0008)
    float MaxRange; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FName Tag; // 0x0028 (0x0008)
};

// Function: AIModule.AISense_Prediction.RequestPawnPredictionEvent
// Size: 0x0014
struct AISense_Prediction_RequestPawnPredictionEvent_Params {
public:
    class UObject* Requestor; // 0x0000 (0x0008)
    class UObject* PredictedActor; // 0x0008 (0x0008)
    float PredictionTime; // 0x0010 (0x0004)
};

// Function: AIModule.AISense_Prediction.RequestControllerPredictionEvent
// Size: 0x0014
struct AISense_Prediction_RequestControllerPredictionEvent_Params {
public:
    class UObject* Requestor; // 0x0000 (0x0008)
    class UObject* PredictedActor; // 0x0008 (0x0008)
    float PredictionTime; // 0x0010 (0x0004)
};

// Function: AIModule.AITask_MoveTo.AIMoveTo
// Size: 0x0030
struct AITask_MoveTo_AIMoveTo_Params {
public:
    class UObject* Controller; // 0x0000 (0x0008)
    uint8_t GoalLocation[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UObject* GoalActor; // 0x0018 (0x0008)
    float AcceptanceRadius; // 0x0020 (0x0004)
    uint8_t StopOnOverlap; // 0x0024 (0x0001)
    uint8_t AcceptPartialPath; // 0x0025 (0x0001)
    bool bUsePathfinding; // 0x0026 (0x0001)
    bool bLockAILogic; // 0x0027 (0x0001)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: AIModule.BrainComponent.StopLogic
// Size: 0x0010
struct BrainComponent_StopLogic_Params {
public:
    struct FString Reason; // 0x0000 (0x0010)
};

// Function: AIModule.BrainComponent.RestartLogic
// Size: 0x0000
struct BrainComponent_RestartLogic_Params {
public:
};

// Function: AIModule.BehaviorTreeComponent.SetDynamicSubtree
// Size: 0x0010
struct BehaviorTreeComponent_SetDynamicSubtree_Params {
public:
    uint8_t InjectTag[0x8]; // 0x0000 (0x0008)
    class UObject* BehaviorAsset; // 0x0008 (0x0008)
};

// Function: AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// Size: 0x000C
struct BehaviorTreeComponent_GetTagCooldownEndTime_Params {
public:
    uint8_t CooldownTag[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// Size: 0x000D
struct BehaviorTreeComponent_AddCooldownTagDuration_Params {
public:
    uint8_t CooldownTag[0x8]; // 0x0000 (0x0008)
    float CoolDownDuration; // 0x0008 (0x0004)
    bool bAddToExistingDuration; // 0x000C (0x0001)
};

// Function: AIModule.BlackboardComponent.SetValueAsVector
// Size: 0x0014
struct BlackboardComponent_SetValueAsVector_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t VectorValue[0xC]; // 0x0008 (0x000C)
};

// Function: AIModule.BlackboardComponent.SetValueAsString
// Size: 0x0018
struct BlackboardComponent_SetValueAsString_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    struct FString StringValue; // 0x0008 (0x0010)
};

// Function: AIModule.BlackboardComponent.SetValueAsRotator
// Size: 0x0014
struct BlackboardComponent_SetValueAsRotator_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t VectorValue[0xC]; // 0x0008 (0x000C)
};

// Function: AIModule.BlackboardComponent.SetValueAsObject
// Size: 0x0010
struct BlackboardComponent_SetValueAsObject_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    class UObject* ObjectValue; // 0x0008 (0x0008)
};

// Function: AIModule.BlackboardComponent.SetValueAsName
// Size: 0x0010
struct BlackboardComponent_SetValueAsName_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    struct FName NameValue; // 0x0008 (0x0008)
};

// Function: AIModule.BlackboardComponent.SetValueAsInt
// Size: 0x000C
struct BlackboardComponent_SetValueAsInt_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    int32_t IntValue; // 0x0008 (0x0004)
};

// Function: AIModule.BlackboardComponent.SetValueAsFloat
// Size: 0x000C
struct BlackboardComponent_SetValueAsFloat_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    float FloatValue; // 0x0008 (0x0004)
};

// Function: AIModule.BlackboardComponent.SetValueAsEnum
// Size: 0x0009
struct BlackboardComponent_SetValueAsEnum_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t EnumValue; // 0x0008 (0x0001)
};

// Function: AIModule.BlackboardComponent.SetValueAsClass
// Size: 0x0010
struct BlackboardComponent_SetValueAsClass_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    class UClass* ClassValue; // 0x0008 (0x0008)
};

// Function: AIModule.BlackboardComponent.SetValueAsBool
// Size: 0x0009
struct BlackboardComponent_SetValueAsBool_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    bool BoolValue; // 0x0008 (0x0001)
};

// Function: AIModule.BlackboardComponent.IsVectorValueSet
// Size: 0x0009
struct BlackboardComponent_IsVectorValueSet_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.BlackboardComponent.GetValueAsVector
// Size: 0x0014
struct BlackboardComponent_GetValueAsVector_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: AIModule.BlackboardComponent.GetValueAsString
// Size: 0x0018
struct BlackboardComponent_GetValueAsString_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: AIModule.BlackboardComponent.GetValueAsRotator
// Size: 0x0014
struct BlackboardComponent_GetValueAsRotator_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: AIModule.BlackboardComponent.GetValueAsObject
// Size: 0x0010
struct BlackboardComponent_GetValueAsObject_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.BlackboardComponent.GetValueAsName
// Size: 0x0010
struct BlackboardComponent_GetValueAsName_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.BlackboardComponent.GetValueAsInt
// Size: 0x000C
struct BlackboardComponent_GetValueAsInt_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: AIModule.BlackboardComponent.GetValueAsFloat
// Size: 0x000C
struct BlackboardComponent_GetValueAsFloat_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: AIModule.BlackboardComponent.GetValueAsEnum
// Size: 0x0009
struct BlackboardComponent_GetValueAsEnum_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.BlackboardComponent.GetValueAsClass
// Size: 0x0010
struct BlackboardComponent_GetValueAsClass_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    class UClass* ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.BlackboardComponent.GetValueAsBool
// Size: 0x0009
struct BlackboardComponent_GetValueAsBool_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.BlackboardComponent.GetRotationFromEntry
// Size: 0x0015
struct BlackboardComponent_GetRotationFromEntry_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t ResultRotation[0xC]; // 0x0008 (0x000C)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: AIModule.BlackboardComponent.GetLocationFromEntry
// Size: 0x0015
struct BlackboardComponent_GetLocationFromEntry_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
    uint8_t ResultLocation[0xC]; // 0x0008 (0x000C)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: AIModule.BlackboardComponent.ClearValue
// Size: 0x0008
struct BlackboardComponent_ClearValue_Params {
public:
    struct FName KeyName; // 0x0000 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.StopUsingExternalEvent
// Size: 0x0008
struct BTFunctionLibrary_StopUsingExternalEvent_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.StartUsingExternalEvent
// Size: 0x0010
struct BTFunctionLibrary_StartUsingExternalEvent_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    class UObject* OwningActor; // 0x0008 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// Size: 0x003C
struct BTFunctionLibrary_SetBlackboardValueAsVector_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    uint8_t Value[0xC]; // 0x0030 (0x000C)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// Size: 0x0040
struct BTFunctionLibrary_SetBlackboardValueAsString_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    struct FString Value; // 0x0030 (0x0010)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// Size: 0x003C
struct BTFunctionLibrary_SetBlackboardValueAsRotator_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    uint8_t Value[0xC]; // 0x0030 (0x000C)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// Size: 0x0038
struct BTFunctionLibrary_SetBlackboardValueAsObject_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    class UObject* Value; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// Size: 0x0038
struct BTFunctionLibrary_SetBlackboardValueAsName_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    struct FName Value; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// Size: 0x0034
struct BTFunctionLibrary_SetBlackboardValueAsInt_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    int32_t Value; // 0x0030 (0x0004)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// Size: 0x0034
struct BTFunctionLibrary_SetBlackboardValueAsFloat_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    float Value; // 0x0030 (0x0004)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// Size: 0x0031
struct BTFunctionLibrary_SetBlackboardValueAsEnum_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    uint8_t Value; // 0x0030 (0x0001)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// Size: 0x0038
struct BTFunctionLibrary_SetBlackboardValueAsClass_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    class UClass* Value; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// Size: 0x0031
struct BTFunctionLibrary_SetBlackboardValueAsBool_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    bool Value; // 0x0030 (0x0001)
};

// Function: AIModule.BTFunctionLibrary.GetOwnersBlackboard
// Size: 0x0010
struct BTFunctionLibrary_GetOwnersBlackboard_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.GetOwnerComponent
// Size: 0x0010
struct BTFunctionLibrary_GetOwnerComponent_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// Size: 0x003C
struct BTFunctionLibrary_GetBlackboardValueAsVector_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    uint8_t ReturnValue[0xC]; // 0x0030 (0x000C)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// Size: 0x0040
struct BTFunctionLibrary_GetBlackboardValueAsString_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    struct FString ReturnValue; // 0x0030 (0x0010)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// Size: 0x003C
struct BTFunctionLibrary_GetBlackboardValueAsRotator_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    uint8_t ReturnValue[0xC]; // 0x0030 (0x000C)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// Size: 0x0038
struct BTFunctionLibrary_GetBlackboardValueAsObject_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// Size: 0x0038
struct BTFunctionLibrary_GetBlackboardValueAsName_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    struct FName ReturnValue; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// Size: 0x0034
struct BTFunctionLibrary_GetBlackboardValueAsInt_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    int32_t ReturnValue; // 0x0030 (0x0004)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// Size: 0x0034
struct BTFunctionLibrary_GetBlackboardValueAsFloat_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    float ReturnValue; // 0x0030 (0x0004)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// Size: 0x0031
struct BTFunctionLibrary_GetBlackboardValueAsEnum_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    uint8_t ReturnValue; // 0x0030 (0x0001)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// Size: 0x0038
struct BTFunctionLibrary_GetBlackboardValueAsClass_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    class UClass* ReturnValue; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// Size: 0x0031
struct BTFunctionLibrary_GetBlackboardValueAsBool_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// Size: 0x0038
struct BTFunctionLibrary_GetBlackboardValueAsActor_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// Size: 0x0030
struct BTFunctionLibrary_ClearBlackboardValueAsVector_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
};

// Function: AIModule.BTFunctionLibrary.ClearBlackboardValue
// Size: 0x0030
struct BTFunctionLibrary_ClearBlackboardValue_Params {
public:
    class UObject* NodeOwner; // 0x0000 (0x0008)
    uint8_t Key[0x28]; // 0x0008 (0x0028)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// Size: 0x0014
struct BTDecorator_BlueprintBase_ReceiveTickAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
    float DeltaSeconds; // 0x0010 (0x0004)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveTick
// Size: 0x000C
struct BTDecorator_BlueprintBase_ReceiveTick_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
    float DeltaSeconds; // 0x0008 (0x0004)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// Size: 0x0010
struct BTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// Size: 0x0008
struct BTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// Size: 0x0010
struct BTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// Size: 0x0008
struct BTDecorator_BlueprintBase_ReceiveObserverActivated_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// Size: 0x0010
struct BTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// Size: 0x0008
struct BTDecorator_BlueprintBase_ReceiveExecutionStart_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// Size: 0x0011
struct BTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
    uint8_t NodeResult; // 0x0010 (0x0001)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// Size: 0x0009
struct BTDecorator_BlueprintBase_ReceiveExecutionFinish_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
    uint8_t NodeResult; // 0x0008 (0x0001)
};

// Function: AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
// Size: 0x0008
struct BTDecorator_BlueprintBase_ReceiveConditionCheck_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// Size: 0x0011
struct BTDecorator_BlueprintBase_PerformConditionCheckAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// Size: 0x0009
struct BTDecorator_BlueprintBase_PerformConditionCheck_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// Size: 0x0001
struct BTDecorator_BlueprintBase_IsDecoratorObserverActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// Size: 0x0001
struct BTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
// Size: 0x0001
struct BTDecorator_BlueprintBase_FinishConditionCheck_Params {
public:
    bool bAllowExecution; // 0x0000 (0x0001)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveTickAI
// Size: 0x0014
struct BTService_BlueprintBase_ReceiveTickAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
    float DeltaSeconds; // 0x0010 (0x0004)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveTick
// Size: 0x000C
struct BTService_BlueprintBase_ReceiveTick_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
    float DeltaSeconds; // 0x0008 (0x0004)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// Size: 0x0010
struct BTService_BlueprintBase_ReceiveSearchStartAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveSearchStart
// Size: 0x0008
struct BTService_BlueprintBase_ReceiveSearchStart_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// Size: 0x0010
struct BTService_BlueprintBase_ReceiveDeactivationAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveDeactivation
// Size: 0x0008
struct BTService_BlueprintBase_ReceiveDeactivation_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveActivationAI
// Size: 0x0010
struct BTService_BlueprintBase_ReceiveActivationAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTService_BlueprintBase.ReceiveActivation
// Size: 0x0008
struct BTService_BlueprintBase_ReceiveActivation_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTService_BlueprintBase.IsServiceActive
// Size: 0x0001
struct BTService_BlueprintBase_IsServiceActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// Size: 0x000C
struct BTTask_BlueprintBase_SetFinishOnMessageWithId_Params {
public:
    struct FName MessageName; // 0x0000 (0x0008)
    int32_t RequestID; // 0x0008 (0x0004)
};

// Function: AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// Size: 0x0008
struct BTTask_BlueprintBase_SetFinishOnMessage_Params {
public:
    struct FName MessageName; // 0x0000 (0x0008)
};

// Function: AIModule.BTTask_BlueprintBase.ReceiveTickAI
// Size: 0x0014
struct BTTask_BlueprintBase_ReceiveTickAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
    float DeltaSeconds; // 0x0010 (0x0004)
};

// Function: AIModule.BTTask_BlueprintBase.ReceiveTick
// Size: 0x000C
struct BTTask_BlueprintBase_ReceiveTick_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
    float DeltaSeconds; // 0x0008 (0x0004)
};

// Function: AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// Size: 0x0010
struct BTTask_BlueprintBase_ReceiveExecuteAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTTask_BlueprintBase.ReceiveExecute
// Size: 0x0008
struct BTTask_BlueprintBase_ReceiveExecute_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// Size: 0x0010
struct BTTask_BlueprintBase_ReceiveAbortAI_Params {
public:
    class UObject* OwnerController; // 0x0000 (0x0008)
    class UObject* ControlledPawn; // 0x0008 (0x0008)
};

// Function: AIModule.BTTask_BlueprintBase.ReceiveAbort
// Size: 0x0008
struct BTTask_BlueprintBase_ReceiveAbort_Params {
public:
    class UObject* OwnerActor; // 0x0000 (0x0008)
};

// Function: AIModule.BTTask_BlueprintBase.IsTaskExecuting
// Size: 0x0001
struct BTTask_BlueprintBase_IsTaskExecuting_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.BTTask_BlueprintBase.IsTaskAborting
// Size: 0x0001
struct BTTask_BlueprintBase_IsTaskAborting_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.BTTask_BlueprintBase.FinishExecute
// Size: 0x0001
struct BTTask_BlueprintBase_FinishExecute_Params {
public:
    bool bSuccess; // 0x0000 (0x0001)
};

// Function: AIModule.BTTask_BlueprintBase.FinishAbort
// Size: 0x0000
struct BTTask_BlueprintBase_FinishAbort_Params {
public:
};

// Function: AIModule.PawnAction.GetActionPriority
// Size: 0x0001
struct PawnAction_GetActionPriority_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: AIModule.PawnAction.Finish
// Size: 0x0001
struct PawnAction_Finish_Params {
public:
    uint8_t WithResult; // 0x0000 (0x0001)
};

// Function: AIModule.PawnAction.CreateActionInstance
// Size: 0x0018
struct PawnAction_CreateActionInstance_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* ActionClass; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// Size: 0x0014
struct EnvQueryContext_BlueprintBase_ProvideSingleLocation_Params {
public:
    class UObject* QuerierActor; // 0x0000 (0x0008)
    uint8_t ResultingLocation[0xC]; // 0x0008 (0x000C)
};

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// Size: 0x0010
struct EnvQueryContext_BlueprintBase_ProvideSingleActor_Params {
public:
    class UObject* QuerierActor; // 0x0000 (0x0008)
    class UObject* ResultingActor; // 0x0008 (0x0008)
};

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// Size: 0x0018
struct EnvQueryContext_BlueprintBase_ProvideLocationsSet_Params {
public:
    class UObject* QuerierActor; // 0x0000 (0x0008)
    struct TArray<uint8_t> ResultingLocationSet; // 0x0008 (0x0010)
};

// Function: AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// Size: 0x0018
struct EnvQueryContext_BlueprintBase_ProvideActorsSet_Params {
public:
    class UObject* QuerierActor; // 0x0000 (0x0008)
    struct TArray<uint8_t> ResultingActorsSet; // 0x0008 (0x0010)
};

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// Size: 0x0010
struct EnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// Size: 0x0010
struct EnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// Size: 0x0008
struct EnvQueryInstanceBlueprintWrapper_GetItemScore_Params {
public:
    int32_t ItemIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// Size: 0x0009
struct EnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params {
public:
    class UObject* QueryInstance; // 0x0000 (0x0008)
    uint8_t QueryStatus; // 0x0008 (0x0001)
};

// Function: AIModule.EnvQueryManager.RunEQSQuery
// Size: 0x0030
struct EnvQueryManager_RunEQSQuery_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    class UObject* QueryTemplate; // 0x0008 (0x0008)
    class UObject* Querier; // 0x0010 (0x0008)
    uint8_t RunMode; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UClass* WrapperClass; // 0x0020 (0x0008)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// Size: 0x0008
struct EnvQueryGenerator_BlueprintBase_GetQuerier_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// Size: 0x0010
struct EnvQueryGenerator_BlueprintBase_DoItemGeneration_Params {
public:
    struct TArray<uint8_t> ContextLocations; // 0x0000 (0x0010)
};

// Function: AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// Size: 0x000C
struct EnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params {
public:
    uint8_t GeneratedVector[0xC]; // 0x0000 (0x000C)
};

// Function: AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// Size: 0x0008
struct EnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params {
public:
    class UObject* GeneratedActor; // 0x0000 (0x0008)
};

// Function: AIModule.EQSGameplayDebuggerObject.OnCycleDetailsView
// Size: 0x0000
struct EQSGameplayDebuggerObject_OnCycleDetailsView_Params {
public:
};

// Function: AIModule.NavMeshGameplayDebuggerObject.ServerDiscardNavmeshData
// Size: 0x0000
struct NavMeshGameplayDebuggerObject_ServerDiscardNavmeshData_Params {
public:
};

// Function: AIModule.PawnAction_BlueprintBase.ActionTick
// Size: 0x000C
struct PawnAction_BlueprintBase_ActionTick_Params {
public:
    class UObject* ControlledPawn; // 0x0000 (0x0008)
    float DeltaSeconds; // 0x0008 (0x0004)
};

// Function: AIModule.PawnAction_BlueprintBase.ActionStart
// Size: 0x0008
struct PawnAction_BlueprintBase_ActionStart_Params {
public:
    class UObject* ControlledPawn; // 0x0000 (0x0008)
};

// Function: AIModule.PawnAction_BlueprintBase.ActionResume
// Size: 0x0008
struct PawnAction_BlueprintBase_ActionResume_Params {
public:
    class UObject* ControlledPawn; // 0x0000 (0x0008)
};

// Function: AIModule.PawnAction_BlueprintBase.ActionPause
// Size: 0x0008
struct PawnAction_BlueprintBase_ActionPause_Params {
public:
    class UObject* ControlledPawn; // 0x0000 (0x0008)
};

// Function: AIModule.PawnAction_BlueprintBase.ActionFinished
// Size: 0x0009
struct PawnAction_BlueprintBase_ActionFinished_Params {
public:
    class UObject* ControlledPawn; // 0x0000 (0x0008)
    uint8_t WithResult; // 0x0008 (0x0001)
};

} // namespace SDK

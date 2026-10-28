#pragma once
#include "Basic.hpp"
#include "AIModule_structs.hpp"

namespace SDK {

// Class: AIModule.PawnSensingComponent
class PawnSensingComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    float HearingThreshold; // 0x00D0 (0x0004)
    float LOSHearingThreshold; // 0x00D4 (0x0004)
    float SightRadius; // 0x00D8 (0x0004)
    float SensingInterval; // 0x00DC (0x0004)
    float HearingMaxSoundAge; // 0x00E0 (0x0004)
    bool bEnableSensingUpdates; // 0x00E4 (0x0001)
    bool bOnlySensePlayers; // 0x00E4 (0x0001)
    bool bSeePawns; // 0x00E4 (0x0001)
    bool bHearNoises; // 0x00E4 (0x0001)
    uint8_t Pad_1[0xB]; // 0x00E5 (0x000B)
    uint8_t OnSeePawn[0x10]; // 0x00F0 (0x0010)
    uint8_t OnHearNoise[0x10]; // 0x0100 (0x0010)
    float PeripheralVisionAngle; // 0x0110 (0x0004)
    float PeripheralVisionCosine; // 0x0114 (0x0004)

public:
    void SetSensingUpdatesEnabled(bool bEnabled);
    void SetSensingInterval(float NewSensingInterval);
    void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
    void SeePawnDelegate__DelegateSignature(class UObject* Pawn);
    void HearNoiseDelegate__DelegateSignature(class UObject* Instigator, uint8_t Location, float Volume);
    float GetPeripheralVisionCosine();
    float GetPeripheralVisionAngle();
};

// Class: AIModule.PathFollowingComponent
class PathFollowingComponent : public ActorComponent {
public:
    uint8_t Pad_0[0x1D8]; // 0x0028 (0x01D8)
    class UObject* MovementComp; // 0x0200 (0x0008)
    uint8_t Pad_1[0x8]; // 0x0208 (0x0008)
    class UObject* MyNavData; // 0x0210 (0x0008)
    uint8_t Pad_2[0xEC]; // 0x0218 (0x00EC)
    bool bUseVisibilityTestsSimplification; // 0x0304 (0x0001)

public:
    void OnActorBump(class UObject* SelfActor, class UObject* OtherActor, uint8_t NormalImpulse, uint8_t Hit);
    uint8_t GetPathDestination();
    uint8_t GetPathActionType();
};

// Class: AIModule.CrowdFollowingComponent
class CrowdFollowingComponent : public PathFollowingComponent {
public:
    uint8_t Pad_0[0x380]; // 0x0028 (0x0380)
    uint8_t CrowdAgentMoveDirection[0xC]; // 0x03A8 (0x000C)
    uint8_t Pad_1[0x14]; // 0x03B4 (0x0014)
    class UObject* CharacterMovement; // 0x03C8 (0x0008)
    uint8_t AvoidanceGroup[0x4]; // 0x03D0 (0x0004)
    uint8_t GroupsToAvoid[0x4]; // 0x03D4 (0x0004)
    uint8_t GroupsToIgnore[0x4]; // 0x03D8 (0x0004)

public:
    void SuspendCrowdSteering(bool bSuspend);
};

// Class: AIModule.AIController
class AIController : public Controller {
public:
    uint8_t Pad_0[0x3B0]; // 0x0028 (0x03B0)
    bool bStopAILogicOnUnposses; // 0x03D8 (0x0001)
    bool bLOSflag; // 0x03D8 (0x0001)
    bool bSkipExtraLOSChecks; // 0x03D8 (0x0001)
    bool bAllowStrafe; // 0x03D8 (0x0001)
    bool bWantsPlayerState; // 0x03D8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x03D9 (0x0007)
    class UObject* PathFollowingComponent; // 0x03E0 (0x0008)
    class UObject* BrainComponent; // 0x03E8 (0x0008)
    class UObject* PerceptionComponent; // 0x03F0 (0x0008)
    class UObject* ActionsComp; // 0x03F8 (0x0008)
    class UObject* Blackboard; // 0x0400 (0x0008)
    class UObject* CachedGameplayTasksComponent; // 0x0408 (0x0008)
    uint8_t ReceiveMoveCompleted[0x10]; // 0x0410 (0x0010)

public:
    bool UseBlackboard(class UObject* BlackboardAsset, class UObject* BlackboardComponent);
    void SetMoveBlockDetection(bool bEnable);
    bool RunBehaviorTree(class UObject* BTAsset);
    void OnUsingBlackBoard(class UObject* BlackboardComp, class UObject* BlackboardAsset);
    void OnUnpossess(class UObject* UnpossessedPawn);
    void OnPossess(class UObject* PossessedPawn);
    void OnGameplayTaskResourcesClaimed(uint8_t NewlyClaimed, uint8_t FreshlyReleased);
    uint8_t MoveToLocation(uint8_t Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
    uint8_t MoveToActor(class UObject* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
    void K2_SetFocus(class UObject* NewFocus);
    void K2_SetFocalPoint(uint8_t FP);
    void K2_ClearFocus();
    bool HasPartialPath();
    class UObject* GetPathFollowingComponent();
    uint8_t GetMoveStatus();
    uint8_t GetImmediateMoveDestination();
    class UObject* GetFocusActor();
    uint8_t GetFocalPointOnActor(class UObject* Actor);
    uint8_t GetFocalPoint();
    class UObject* GetAIPerceptionComponent();
};

// Class: AIModule.EnvQuery
class EnvQuery : public DataAsset {
public:
    struct FName QueryName; // 0x0028 (0x0008)
    struct TArray<uint8_t> Options; // 0x0030 (0x0010)
};

// Class: AIModule.AISystem
class AISystem : public AISystemBase {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t PerceptionSystemClassName[0x10]; // 0x0048 (0x0010)
    uint8_t HotSpotManagerClassName[0x10]; // 0x0058 (0x0010)
    float AcceptanceRadius; // 0x0068 (0x0004)
    float PathfollowingRegularPathPointAcceptanceRadius; // 0x006C (0x0004)
    float PathfollowingNavLinkAcceptanceRadius; // 0x0070 (0x0004)
    bool bFinishMoveOnGoalOverlap; // 0x0074 (0x0001)
    bool bAcceptPartialPaths; // 0x0075 (0x0001)
    bool bAllowStrafing; // 0x0076 (0x0001)
    bool bEnableBTAITasks; // 0x0077 (0x0001)
    bool bAllowControllersAsEQSQuerier; // 0x0078 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0079 (0x0007)
    class UObject* BehaviorTreeManager; // 0x0080 (0x0008)
    class UObject* EnvironmentQueryManager; // 0x0088 (0x0008)
    class UObject* PerceptionSystem; // 0x0090 (0x0008)
    struct TArray<uint8_t> AllProxyObjects; // 0x0098 (0x0010)
    class UObject* HotSpotManager; // 0x00A8 (0x0008)

public:
    void AILoggingVerbose();
    void AIIgnorePlayers();
};

// Class: AIModule.BTNode
class BTNode : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FString NodeName; // 0x0030 (0x0010)
    class UObject* TreeAsset; // 0x0040 (0x0008)
    class UObject* ParentNode; // 0x0048 (0x0008)
};

// Class: AIModule.BTAuxiliaryNode
class BTAuxiliaryNode : public BTNode {
public:
};

// Class: AIModule.BTDecorator
class BTDecorator : public BTAuxiliaryNode {
public:
    uint8_t Pad_0[0x38]; // 0x0028 (0x0038)
    bool bInverseCondition; // 0x0060 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0061 (0x0003)
    uint8_t FlowAbortMode; // 0x0064 (0x0001)
};

// Class: AIModule.BTDecorator_Loop
class BTDecorator_Loop : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    int32_t NumLoops; // 0x0068 (0x0004)
    bool bInfiniteLoop; // 0x006C (0x0001)
    uint8_t Pad_1[0x3]; // 0x006D (0x0003)
    float InfiniteLoopTimeoutTime; // 0x0070 (0x0004)
};

// Class: AIModule.BTService
class BTService : public BTAuxiliaryNode {
public:
    uint8_t Pad_0[0x38]; // 0x0028 (0x0038)
    float interval; // 0x0060 (0x0004)
    float RandomDeviation; // 0x0064 (0x0004)
    bool bCallTickOnSearchStart; // 0x0068 (0x0001)
    bool bRestartTimerOnEachActivation; // 0x0068 (0x0001)
};

// Class: AIModule.BTService_BlackboardBase
class BTService_BlackboardBase : public BTService {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t BlackboardKey[0x28]; // 0x0070 (0x0028)
};

// Class: AIModule.BTService_RunEQS
class BTService_RunEQS : public BTService_BlackboardBase {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    uint8_t EQSRequest[0x48]; // 0x0098 (0x0048)
};

// Class: AIModule.BTTaskNode
class BTTaskNode : public BTNode {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    bool bIgnoreRestartSelf; // 0x0068 (0x0001)
};

// Class: AIModule.BTTask_RunBehaviorDynamic
class BTTask_RunBehaviorDynamic : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t InjectionTag[0x8]; // 0x0070 (0x0008)
    class UObject* DefaultBehaviorAsset; // 0x0078 (0x0008)
    class UObject* BehaviorAsset; // 0x0080 (0x0008)
};

// Class: AIModule.EnvQueryContext
class EnvQueryContext : public Object {
public:
};

// Class: AIModule.EnvQueryNode
class EnvQueryNode : public Object {
public:
    int32_t VerNum; // 0x0028 (0x0004)
};

// Class: AIModule.EnvQueryGenerator
class EnvQueryGenerator : public EnvQueryNode {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FString OptionName; // 0x0030 (0x0010)
    class UClass* ItemType; // 0x0040 (0x0008)
    bool bAutoSortTests; // 0x0048 (0x0001)
};

// Class: AIModule.EnvQueryGenerator_ProjectedPoints
class EnvQueryGenerator_ProjectedPoints : public EnvQueryGenerator {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    uint8_t ProjectionData[0x30]; // 0x0050 (0x0030)
};

// Class: AIModule.EnvQueryTest
class EnvQueryTest : public EnvQueryNode {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    int32_t TestOrder; // 0x0030 (0x0004)
    uint8_t TestPurpose; // 0x0034 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0035 (0x0003)
    struct FString TestComment; // 0x0038 (0x0010)
    uint8_t MultipleContextFilterOp; // 0x0048 (0x0001)
    uint8_t MultipleContextScoreOp; // 0x0049 (0x0001)
    uint8_t FilterType; // 0x004A (0x0001)
    uint8_t Pad_2[0x5]; // 0x004B (0x0005)
    uint8_t BoolValue[0x30]; // 0x0050 (0x0030)
    uint8_t FloatValueMin[0x30]; // 0x0080 (0x0030)
    uint8_t FloatValueMax[0x30]; // 0x00B0 (0x0030)
    uint8_t Pad_3[0x1]; // 0x00E0 (0x0001)
    uint8_t ScoringEquation; // 0x00E1 (0x0001)
    uint8_t ClampMinType; // 0x00E2 (0x0001)
    uint8_t ClampMaxType; // 0x00E3 (0x0001)
    uint8_t Pad_4[0x4]; // 0x00E4 (0x0004)
    uint8_t ScoreClampMin[0x30]; // 0x00E8 (0x0030)
    uint8_t ScoreClampMax[0x30]; // 0x0118 (0x0030)
    uint8_t ScoringFactor[0x30]; // 0x0148 (0x0030)
    uint8_t SweetSpotValue[0x30]; // 0x0178 (0x0030)
    bool bDefineSweetSpot; // 0x01A8 (0x0001)
    uint8_t Pad_5[0xF]; // 0x01A9 (0x000F)
    bool bWorkOnFloatValues; // 0x01B8 (0x0001)
};

// Class: AIModule.AIResourceInterface
class AIResourceInterface : public Interface {
public:
};

// Class: AIModule.AIAsyncTaskBlueprintProxy
class AIAsyncTaskBlueprintProxy : public Object {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFail[0x10]; // 0x0038 (0x0010)

public:
    void OnMoveCompleted(uint8_t RequestID, uint8_t MovementResult);
};

// Class: AIModule.AIBlueprintHelperLibrary
class AIBlueprintHelperLibrary : public BlueprintFunctionLibrary {
public:

public:
    void UnlockAIResourcesWithAnimation(class UObject* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    class UObject* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UObject* BehaviorTree, uint8_t Location, uint8_t Rotation, bool bNoCollisionFail);
    void SendAIMessage(class UObject* Target, struct FName Message, class UObject* MessageSource, bool bSuccess);
    void LockAIResourcesWithAnimation(class UObject* AnimInstance, bool bLockMovement, bool LockAILogic);
    bool IsValidAIRotation(uint8_t Rotation);
    bool IsValidAILocation(uint8_t Location);
    bool IsValidAIDirection(uint8_t DirectionVector);
    class UObject* GetBlackboard(class UObject* Target);
    class UObject* GetAIController(class UObject* ControlledActor);
    class UObject* CreateMoveToProxyObject(class UObject* WorldContextObject, class UObject* Pawn, uint8_t Destination, class UObject* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Class: AIModule.PawnActionsComponent
class PawnActionsComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* ControlledPawn; // 0x00D0 (0x0008)
    struct TArray<uint8_t> ActionStacks; // 0x00D8 (0x0010)
    struct TArray<uint8_t> ActionEvents; // 0x00E8 (0x0010)
    class UObject* CurrentAction; // 0x00F8 (0x0008)

public:
    bool K2_PushAction(class UObject* NewAction, uint8_t Priority, class UObject* Instigator);
    uint8_t K2_ForceAbortAction(class UObject* ActionToAbort);
    bool K2_BeginAction(class UObject* Pawn, class UObject* Action, uint8_t Priority);
    uint8_t K2_AbortAction(class UObject* ActionToAbort);
};

// Class: AIModule.AIPerceptionListenerInterface
class AIPerceptionListenerInterface : public Interface {
public:
};

// Class: AIModule.BehaviorTreeTypes
class BehaviorTreeTypes : public Object {
public:
};

// Class: AIModule.GenericTeamAgentInterface
class GenericTeamAgentInterface : public Interface {
public:
};

// Class: AIModule.DetourCrowdAIController
class DetourCrowdAIController : public AIController {
public:
};

// Class: AIModule.AIDataProvider
class AIDataProvider : public Object {
public:
};

// Class: AIModule.AIDataProvider_QueryParams
class AIDataProvider_QueryParams : public AIDataProvider {
public:
    struct FName ParamName; // 0x0028 (0x0008)
    float FloatValue; // 0x0030 (0x0004)
    int32_t IntValue; // 0x0034 (0x0004)
    bool BoolValue; // 0x0038 (0x0001)
};

// Class: AIModule.AIHotSpotManager
class AIHotSpotManager : public Object {
public:
};

// Class: AIModule.AIModuleBasicGameplayDebuggerObject
class AIModuleBasicGameplayDebuggerObject : public GameplayDebuggerBaseObject {
public:
    uint8_t Pad_0[0x60]; // 0x0028 (0x0060)
    struct FString ControllerName; // 0x0088 (0x0010)
    struct FString pawnName; // 0x0098 (0x0010)
    struct FString PawnClass; // 0x00A8 (0x0010)
    struct FString DebugIcon; // 0x00B8 (0x0010)
    struct FString MovementBaseInfo; // 0x00C8 (0x0010)
    struct FString MovementModeInfo; // 0x00D8 (0x0010)
    struct FString PathFollowingInfo; // 0x00E8 (0x0010)
    struct FString CurrentAITask; // 0x00F8 (0x0010)
    struct FString CurrentAIState; // 0x0108 (0x0010)
    struct FString CurrentAIAssets; // 0x0118 (0x0010)
    struct FString GameplayTasksState; // 0x0128 (0x0010)
    struct FString NavDataInfo; // 0x0138 (0x0010)
    struct FString MontageInfo; // 0x0148 (0x0010)
    bool bIsUsingPathFollowing; // 0x0158 (0x0001)
    bool bIsUsingCharacter; // 0x0158 (0x0001)
    bool bIsUsingBehaviorTree; // 0x0158 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0159 (0x0003)
    int32_t NextPathPointIndex; // 0x015C (0x0004)
    struct TArray<uint8_t> PathPoints; // 0x0160 (0x0010)
};

// Class: AIModule.AISense
class AISense : public Object {
public:
    uint8_t DebugDrawColor[0x4]; // 0x0028 (0x0004)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct FString DebugName; // 0x0030 (0x0010)
    float DefaultExpirationAge; // 0x0040 (0x0004)
    uint8_t NotifyType; // 0x0044 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0045 (0x0003)
    bool bWantsNewPawnNotification; // 0x0048 (0x0001)
    bool bAutoRegisterAllPawnsAsSources; // 0x0048 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0049 (0x0007)
    class UObject* PerceptionSystemInstance; // 0x0050 (0x0008)
};

// Class: AIModule.AIPerceptionSystem
class AIPerceptionSystem : public Object {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    struct TArray<uint8_t> Senses; // 0x0080 (0x0010)
    float PerceptionAgingRate; // 0x0090 (0x0004)

public:
    void ReportPerceptionEvent(class UObject* WorldContext, class UObject* PerceptionEvent);
    void ReportEvent(class UObject* PerceptionEvent);
    bool RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class UObject* Target);
    void OnPerceptionStimuliSourceEndPlay(uint8_t EndPlayReason);
    class UClass* GetSenseClassForStimulus(class UObject* WorldContext, uint8_t Stimulus);
};

// Class: AIModule.AIPerceptionComponent
class AIPerceptionComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    float HearingRange; // 0x00D0 (0x0004)
    float LoSHearingRange; // 0x00D4 (0x0004)
    float SightRadius; // 0x00D8 (0x0004)
    float LoseSightRadius; // 0x00DC (0x0004)
    float PeripheralVisionAngle; // 0x00E0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x00E4 (0x0004)
    struct TArray<uint8_t> SensesConfig; // 0x00E8 (0x0010)
    class UClass* DominantSense; // 0x00F8 (0x0008)
    uint8_t Pad_2[0x10]; // 0x0100 (0x0010)
    class UObject* AIOwner; // 0x0110 (0x0008)
    uint8_t Pad_3[0x80]; // 0x0118 (0x0080)
    uint8_t OnPerceptionUpdated[0x10]; // 0x0198 (0x0010)
    uint8_t OnTargetPerceptionUpdated[0x10]; // 0x01A8 (0x0010)

public:
    void RequestStimuliListenerUpdate();
    void OnOwnerEndPlay(uint8_t EndPlayReason);
    void GetPerceivedHostileActors(struct TArray<uint8_t> OutActors);
    void GetPerceivedActors(class UClass* SenseToUse, struct TArray<uint8_t> OutActors);
    bool GetActorsPerception(class UObject* Actor, uint8_t Info);
};

// Class: AIModule.AIPerceptionStimuliSourceComponent
class AIPerceptionStimuliSourceComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    bool bAutoRegisterAsSource; // 0x00D0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00D1 (0x0007)
    struct TArray<uint8_t> RegisterAsSourceForSenses; // 0x00D8 (0x0010)

public:
    void UnregisterFromSense(class UClass* SenseClass);
    void UnregisterFromPerceptionSystem();
    void RegisterWithPerceptionSystem();
    void RegisterForSense(class UClass* SenseClass);
};

// Class: AIModule.AIResource_Movement
class AIResource_Movement : public GameplayTaskResource {
public:
};

// Class: AIModule.AIResource_Logic
class AIResource_Logic : public GameplayTaskResource {
public:
};

// Class: AIModule.AISense_Blueprint
class AISense_Blueprint : public AISense {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    class UClass* ListenerDataType; // 0x0130 (0x0008)
    struct TArray<uint8_t> ListenerContainer; // 0x0138 (0x0010)
    struct TArray<uint8_t> UnprocessedEvents; // 0x0148 (0x0010)

public:
    float OnUpdate(struct TArray<uint8_t> EventsToProcess);
    void OnListenerUpdated(class UObject* ActorListener, class UObject* PerceptionComponent);
    void OnListenerUnregistered(class UObject* ActorListener, class UObject* PerceptionComponent);
    void OnListenerRegistered(class UObject* ActorListener, class UObject* PerceptionComponent);
    void K2_OnNewPawn(class UObject* NewPawn);
    void GetAllListenerComponents(struct TArray<uint8_t> ListenerComponents);
    void GetAllListenerActors(struct TArray<uint8_t> ListenerActors);
};

// Class: AIModule.AISense_Damage
class AISense_Damage : public AISense {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    struct TArray<uint8_t> RegisteredEvents; // 0x0130 (0x0010)

public:
    void ReportDamageEvent(class UObject* WorldContext, class UObject* DamagedActor, class UObject* Instigator, float DamageAmount, uint8_t EventLocation, uint8_t HitLocation);
};

// Class: AIModule.AISense_Hearing
class AISense_Hearing : public AISense {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    struct TArray<uint8_t> NoiseEvents; // 0x0130 (0x0010)
    float SpeedOfSoundSq; // 0x0140 (0x0004)

public:
    void ReportNoiseEvent(class UObject* WorldContext, uint8_t NoiseLocation, float Loudness, class UObject* Instigator, float MaxRange, struct FName Tag);
};

// Class: AIModule.AISense_Prediction
class AISense_Prediction : public AISense {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    struct TArray<uint8_t> RegisteredEvents; // 0x0130 (0x0010)

public:
    void RequestPawnPredictionEvent(class UObject* Requestor, class UObject* PredictedActor, float PredictionTime);
    void RequestControllerPredictionEvent(class UObject* Requestor, class UObject* PredictedActor, float PredictionTime);
};

// Class: AIModule.AISense_Sight
class AISense_Sight : public AISense {
public:
    uint8_t Pad_0[0x1B8]; // 0x0028 (0x01B8)
    int32_t MaxTracesPerTick; // 0x01E0 (0x0004)
    int32_t MinQueriesPerTimeSliceCheck; // 0x01E4 (0x0004)
    double MaxTimeSlicePerTick; // 0x01E8 (0x0008)
    float HighImportanceQueryDistanceThreshold; // 0x01F0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x01F4 (0x0004)
    float MaxQueryImportance; // 0x01F8 (0x0004)
    float SightLimitQueryImportance; // 0x01FC (0x0004)
};

// Class: AIModule.AISense_Team
class AISense_Team : public AISense {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    struct TArray<uint8_t> RegisteredEvents; // 0x0130 (0x0010)
};

// Class: AIModule.AISense_Touch
class AISense_Touch : public AISense {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    struct TArray<uint8_t> RegisteredEvents; // 0x0130 (0x0010)
};

// Class: AIModule.AISenseBlueprintListener
class AISenseBlueprintListener : public UserDefinedStruct {
public:
};

// Class: AIModule.AISenseConfig
class AISenseConfig : public Object {
public:
    float MaxAge; // 0x0028 (0x0004)
    bool bStartsEnabled; // 0x002C (0x0001)
};

// Class: AIModule.AISenseConfig_Blueprint
class AISenseConfig_Blueprint : public AISenseConfig {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UClass* Implementation; // 0x0030 (0x0008)
};

// Class: AIModule.AISenseConfig_Damage
class AISenseConfig_Damage : public AISenseConfig {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UClass* Implementation; // 0x0030 (0x0008)
};

// Class: AIModule.AISenseConfig_Hearing
class AISenseConfig_Hearing : public AISenseConfig {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UClass* Implementation; // 0x0030 (0x0008)
    float HearingRange; // 0x0038 (0x0004)
    float LoSHearingRange; // 0x003C (0x0004)
    bool bUseLoSHearing; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    uint8_t DetectionByAffiliation[0x4]; // 0x0044 (0x0004)
};

// Class: AIModule.AISenseConfig_Prediction
class AISenseConfig_Prediction : public AISenseConfig {
public:
};

// Class: AIModule.AISenseConfig_Sight
class AISenseConfig_Sight : public AISenseConfig {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UClass* Implementation; // 0x0030 (0x0008)
    float SightRadius; // 0x0038 (0x0004)
    float LoseSightRadius; // 0x003C (0x0004)
    float PeripheralVisionAngleDegrees; // 0x0040 (0x0004)
    uint8_t DetectionByAffiliation[0x4]; // 0x0044 (0x0004)
    float AutoSuccessRangeFromLastSeenLocation; // 0x0048 (0x0004)
};

// Class: AIModule.AISenseConfig_Team
class AISenseConfig_Team : public AISenseConfig {
public:
};

// Class: AIModule.AISenseConfig_Touch
class AISenseConfig_Touch : public AISenseConfig {
public:
};

// Class: AIModule.AISenseEvent
class AISenseEvent : public Object {
public:
};

// Class: AIModule.AISenseEvent_Damage
class AISenseEvent_Damage : public AISenseEvent {
public:
    uint8_t Event[0x30]; // 0x0028 (0x0030)
};

// Class: AIModule.AISenseEvent_Hearing
class AISenseEvent_Hearing : public AISenseEvent {
public:
    uint8_t Event[0x30]; // 0x0028 (0x0030)
};

// Class: AIModule.AISightTargetInterface
class AISightTargetInterface : public Interface {
public:
};

// Class: AIModule.AITask
class AITask : public GameplayTask {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    class UObject* OwnerController; // 0x0058 (0x0008)
};

// Class: AIModule.AITask_MoveTo
class AITask_MoveTo : public AITask {
public:
    uint8_t Pad_0[0x38]; // 0x0028 (0x0038)
    uint8_t OnRequestFailed[0x10]; // 0x0060 (0x0010)
    uint8_t OnMoveFinished[0x10]; // 0x0070 (0x0010)
    uint8_t MoveGoalLocation[0xC]; // 0x0080 (0x000C)
    uint8_t Pad_1[0xC]; // 0x008C (0x000C)
    class UObject* MoveGoalActor; // 0x0098 (0x0008)
    float MoveAcceptanceRadius; // 0x00A0 (0x0004)
    bool bShouldStopOnOverlap; // 0x00A4 (0x0001)
    bool bShouldAcceptPartialPath; // 0x00A5 (0x0001)
    bool bShouldUsePathfinding; // 0x00A6 (0x0001)

public:
    class UObject* AIMoveTo(class UObject* Controller, uint8_t GoalLocation, class UObject* GoalActor, float AcceptanceRadius, uint8_t StopOnOverlap, uint8_t AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
};

// Class: AIModule.BrainComponent
class BrainComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xB0]; // 0x0028 (0x00B0)
    class UObject* BlackboardComp; // 0x00D8 (0x0008)
    class UObject* AIOwner; // 0x00E0 (0x0008)

public:
    void StopLogic(struct FString Reason);
    void RestartLogic();
};

// Class: AIModule.BehaviorTreeComponent
class BehaviorTreeComponent : public BrainComponent {
public:
    uint8_t Pad_0[0x128]; // 0x0028 (0x0128)
    struct TArray<uint8_t> NodeInstances; // 0x0150 (0x0010)

public:
    void SetDynamicSubtree(uint8_t InjectTag, class UObject* BehaviorAsset);
    float GetTagCooldownEndTime(uint8_t CooldownTag);
    void AddCooldownTagDuration(uint8_t CooldownTag, float CoolDownDuration, bool bAddToExistingDuration);
};

// Class: AIModule.BTCompositeNode
class BTCompositeNode : public BTNode {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    struct TArray<uint8_t> Children; // 0x0058 (0x0010)
    struct TArray<uint8_t> Services; // 0x0068 (0x0010)
};

// Class: AIModule.BehaviorTree
class BehaviorTree : public Object {
public:
    class UObject* RootNode; // 0x0028 (0x0008)
    class UObject* BlackboardAsset; // 0x0030 (0x0008)
    struct TArray<uint8_t> RootDecorators; // 0x0038 (0x0010)
    struct TArray<uint8_t> RootDecoratorOps; // 0x0048 (0x0010)
};

// Class: AIModule.BehaviorTreeManager
class BehaviorTreeManager : public Object {
public:
    int32_t MaxDebuggerSteps; // 0x0028 (0x0004)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct TArray<uint8_t> LoadedTemplates; // 0x0030 (0x0010)
    struct TArray<uint8_t> ActiveComponents; // 0x0040 (0x0010)
};

// Class: AIModule.BlackboardKeyType
class BlackboardKeyType : public Object {
public:
};

// Class: AIModule.BlackboardKeyType_Enum
class BlackboardKeyType_Enum : public BlackboardKeyType {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* enumType; // 0x0030 (0x0008)
    struct FString EnumName; // 0x0038 (0x0010)
    bool bIsEnumNameValid; // 0x0048 (0x0001)
};

// Class: AIModule.BlackboardKeyType_NativeEnum
class BlackboardKeyType_NativeEnum : public BlackboardKeyType {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FString EnumName; // 0x0030 (0x0010)
    class UObject* enumType; // 0x0040 (0x0008)
};

// Class: AIModule.BlackboardData
class BlackboardData : public DataAsset {
public:
    class UObject* Parent; // 0x0028 (0x0008)
    struct TArray<uint8_t> Keys; // 0x0030 (0x0010)
    bool bHasSynchronizedKeys; // 0x0040 (0x0001)
};

// Class: AIModule.BlackboardComponent
class BlackboardComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* BrainComp; // 0x00D0 (0x0008)
    class UObject* BlackboardAsset; // 0x00D8 (0x0008)
    uint8_t Pad_1[0x20]; // 0x00E0 (0x0020)
    struct TArray<uint8_t> KeyInstances; // 0x0100 (0x0010)

public:
    void SetValueAsVector(struct FName KeyName, uint8_t VectorValue);
    void SetValueAsString(struct FName KeyName, struct FString StringValue);
    void SetValueAsRotator(struct FName KeyName, uint8_t VectorValue);
    void SetValueAsObject(struct FName KeyName, class UObject* ObjectValue);
    void SetValueAsName(struct FName KeyName, struct FName NameValue);
    void SetValueAsInt(struct FName KeyName, int32_t IntValue);
    void SetValueAsFloat(struct FName KeyName, float FloatValue);
    void SetValueAsEnum(struct FName KeyName, uint8_t EnumValue);
    void SetValueAsClass(struct FName KeyName, class UClass* ClassValue);
    void SetValueAsBool(struct FName KeyName, bool BoolValue);
    bool IsVectorValueSet(struct FName KeyName);
    uint8_t GetValueAsVector(struct FName KeyName);
    struct FString GetValueAsString(struct FName KeyName);
    uint8_t GetValueAsRotator(struct FName KeyName);
    class UObject* GetValueAsObject(struct FName KeyName);
    struct FName GetValueAsName(struct FName KeyName);
    int32_t GetValueAsInt(struct FName KeyName);
    float GetValueAsFloat(struct FName KeyName);
    uint8_t GetValueAsEnum(struct FName KeyName);
    class UClass* GetValueAsClass(struct FName KeyName);
    bool GetValueAsBool(struct FName KeyName);
    bool GetRotationFromEntry(struct FName KeyName, uint8_t ResultRotation);
    bool GetLocationFromEntry(struct FName KeyName, uint8_t ResultLocation);
    void ClearValue(struct FName KeyName);
};

// Class: AIModule.BlackboardKeyType_Bool
class BlackboardKeyType_Bool : public BlackboardKeyType {
public:
};

// Class: AIModule.BlackboardKeyType_Class
class BlackboardKeyType_Class : public BlackboardKeyType {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UClass* BaseClass; // 0x0030 (0x0008)
};

// Class: AIModule.BlackboardKeyType_Float
class BlackboardKeyType_Float : public BlackboardKeyType {
public:
};

// Class: AIModule.BlackboardKeyType_Int
class BlackboardKeyType_Int : public BlackboardKeyType {
public:
};

// Class: AIModule.BlackboardKeyType_Name
class BlackboardKeyType_Name : public BlackboardKeyType {
public:
};

// Class: AIModule.BlackboardKeyType_Object
class BlackboardKeyType_Object : public BlackboardKeyType {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UClass* BaseClass; // 0x0030 (0x0008)
};

// Class: AIModule.BlackboardKeyType_Rotator
class BlackboardKeyType_Rotator : public BlackboardKeyType {
public:
};

// Class: AIModule.BlackboardKeyType_String
class BlackboardKeyType_String : public BlackboardKeyType {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FString StringValue; // 0x0030 (0x0010)
};

// Class: AIModule.BlackboardKeyType_Vector
class BlackboardKeyType_Vector : public BlackboardKeyType {
public:
};

// Class: AIModule.BTFunctionLibrary
class BTFunctionLibrary : public BlueprintFunctionLibrary {
public:

public:
    void StopUsingExternalEvent(class UObject* NodeOwner);
    void StartUsingExternalEvent(class UObject* NodeOwner, class UObject* OwningActor);
    void SetBlackboardValueAsVector(class UObject* NodeOwner, uint8_t Key, uint8_t Value);
    void SetBlackboardValueAsString(class UObject* NodeOwner, uint8_t Key, struct FString Value);
    void SetBlackboardValueAsRotator(class UObject* NodeOwner, uint8_t Key, uint8_t Value);
    void SetBlackboardValueAsObject(class UObject* NodeOwner, uint8_t Key, class UObject* Value);
    void SetBlackboardValueAsName(class UObject* NodeOwner, uint8_t Key, struct FName Value);
    void SetBlackboardValueAsInt(class UObject* NodeOwner, uint8_t Key, int32_t Value);
    void SetBlackboardValueAsFloat(class UObject* NodeOwner, uint8_t Key, float Value);
    void SetBlackboardValueAsEnum(class UObject* NodeOwner, uint8_t Key, uint8_t Value);
    void SetBlackboardValueAsClass(class UObject* NodeOwner, uint8_t Key, class UClass* Value);
    void SetBlackboardValueAsBool(class UObject* NodeOwner, uint8_t Key, bool Value);
    class UObject* GetOwnersBlackboard(class UObject* NodeOwner);
    class UObject* GetOwnerComponent(class UObject* NodeOwner);
    uint8_t GetBlackboardValueAsVector(class UObject* NodeOwner, uint8_t Key);
    struct FString GetBlackboardValueAsString(class UObject* NodeOwner, uint8_t Key);
    uint8_t GetBlackboardValueAsRotator(class UObject* NodeOwner, uint8_t Key);
    class UObject* GetBlackboardValueAsObject(class UObject* NodeOwner, uint8_t Key);
    struct FName GetBlackboardValueAsName(class UObject* NodeOwner, uint8_t Key);
    int32_t GetBlackboardValueAsInt(class UObject* NodeOwner, uint8_t Key);
    float GetBlackboardValueAsFloat(class UObject* NodeOwner, uint8_t Key);
    uint8_t GetBlackboardValueAsEnum(class UObject* NodeOwner, uint8_t Key);
    class UClass* GetBlackboardValueAsClass(class UObject* NodeOwner, uint8_t Key);
    bool GetBlackboardValueAsBool(class UObject* NodeOwner, uint8_t Key);
    class UObject* GetBlackboardValueAsActor(class UObject* NodeOwner, uint8_t Key);
    void ClearBlackboardValueAsVector(class UObject* NodeOwner, uint8_t Key);
    void ClearBlackboardValue(class UObject* NodeOwner, uint8_t Key);
};

// Class: AIModule.BTGameplayDebuggerObject
class BTGameplayDebuggerObject : public GameplayDebuggerBaseObject {
public:
    uint8_t Pad_0[0x60]; // 0x0028 (0x0060)
    struct FString BrainComponentName; // 0x0088 (0x0010)
    struct FString BrainComponentString; // 0x0098 (0x0010)
};

// Class: AIModule.BTDecorator_BlackboardBase
class BTDecorator_BlackboardBase : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t BlackboardKey[0x28]; // 0x0068 (0x0028)
};

// Class: AIModule.BTDecorator_Blackboard
class BTDecorator_Blackboard : public BTDecorator_BlackboardBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    int32_t IntValue; // 0x0090 (0x0004)
    float FloatValue; // 0x0094 (0x0004)
    struct FString StringValue; // 0x0098 (0x0010)
    struct FString CachedDescription; // 0x00A8 (0x0010)
    uint8_t OperationType; // 0x00B8 (0x0001)
    uint8_t NotifyObserver; // 0x00B9 (0x0001)
};

// Class: AIModule.BTDecorator_ConditionalLoop
class BTDecorator_ConditionalLoop : public BTDecorator_Blackboard {
public:
};

// Class: AIModule.BTDecorator_IsAtLocation
class BTDecorator_IsAtLocation : public BTDecorator_BlackboardBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    float AcceptableRadius; // 0x0090 (0x0004)
    bool bUseNavAgentGoalLocation; // 0x0094 (0x0001)
};

// Class: AIModule.BTDecorator_IsBBEntryOfClass
class BTDecorator_IsBBEntryOfClass : public BTDecorator_BlackboardBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    class UClass* TestClass; // 0x0090 (0x0008)
};

// Class: AIModule.BTDecorator_BlueprintBase
class BTDecorator_BlueprintBase : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    class UObject* AIOwner; // 0x0068 (0x0008)
    class UObject* ActorOwner; // 0x0070 (0x0008)
    struct TArray<uint8_t> ObservedKeyNames; // 0x0078 (0x0010)
    uint8_t Pad_1[0x10]; // 0x0088 (0x0010)
    bool bShowPropertyDetails; // 0x0098 (0x0001)
    bool bCheckConditionOnlyBlackBoardChanges; // 0x0098 (0x0001)
    bool bIsObservingBB; // 0x0098 (0x0001)

public:
    void ReceiveTickAI(class UObject* OwnerController, class UObject* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class UObject* OwnerActor, float DeltaSeconds);
    void ReceiveObserverDeactivatedAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveObserverDeactivated(class UObject* OwnerActor);
    void ReceiveObserverActivatedAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveObserverActivated(class UObject* OwnerActor);
    void ReceiveExecutionStartAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveExecutionStart(class UObject* OwnerActor);
    void ReceiveExecutionFinishAI(class UObject* OwnerController, class UObject* ControlledPawn, uint8_t NodeResult);
    void ReceiveExecutionFinish(class UObject* OwnerActor, uint8_t NodeResult);
    void ReceiveConditionCheck(class UObject* OwnerActor);
    bool PerformConditionCheckAI(class UObject* OwnerController, class UObject* ControlledPawn);
    bool PerformConditionCheck(class UObject* OwnerActor);
    bool IsDecoratorObserverActive();
    bool IsDecoratorExecutionActive();
    void FinishConditionCheck(bool bAllowExecution);
};

// Class: AIModule.BTDecorator_CheckGameplayTagsOnActor
class BTDecorator_CheckGameplayTagsOnActor : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t ActorToCheck[0x28]; // 0x0068 (0x0028)
    uint8_t TagsToMatch; // 0x0090 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0091 (0x0007)
    uint8_t GameplayTags[0x20]; // 0x0098 (0x0020)
    struct FString CachedDescription; // 0x00B8 (0x0010)
};

// Class: AIModule.BTDecorator_CompareBBEntries
class BTDecorator_CompareBBEntries : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t Operator; // 0x0068 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0069 (0x0007)
    uint8_t BlackboardKeyA[0x28]; // 0x0070 (0x0028)
    uint8_t BlackboardKeyB[0x28]; // 0x0098 (0x0028)
};

// Class: AIModule.BTDecorator_ConeCheck
class BTDecorator_ConeCheck : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    float ConeHalfAngle; // 0x0068 (0x0004)
    uint8_t Pad_1[0x4]; // 0x006C (0x0004)
    uint8_t ConeOrigin[0x28]; // 0x0070 (0x0028)
    uint8_t ConeDirection[0x28]; // 0x0098 (0x0028)
    uint8_t Observed[0x28]; // 0x00C0 (0x0028)
};

// Class: AIModule.BTDecorator_Cooldown
class BTDecorator_Cooldown : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    float CoolDownTime; // 0x0068 (0x0004)
    float CoolDownTimeVariance; // 0x006C (0x0004)
    bool StartLocked; // 0x0070 (0x0001)
};

// Class: AIModule.BTDecorator_DoesPathExist
class BTDecorator_DoesPathExist : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t BlackboardKeyA[0x28]; // 0x0068 (0x0028)
    uint8_t BlackboardKeyB[0x28]; // 0x0090 (0x0028)
    bool bUseSelf; // 0x00B8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00B9 (0x0003)
    uint8_t PathQueryType; // 0x00BC (0x0001)
    uint8_t Pad_2[0x3]; // 0x00BD (0x0003)
    class UClass* FilterClass; // 0x00C0 (0x0008)
};

// Class: AIModule.BTDecorator_ForceSuccess
class BTDecorator_ForceSuccess : public BTDecorator {
public:
};

// Class: AIModule.BTDecorator_KeepInCone
class BTDecorator_KeepInCone : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    float ConeHalfAngle; // 0x0068 (0x0004)
    uint8_t Pad_1[0x4]; // 0x006C (0x0004)
    uint8_t ConeOrigin[0x28]; // 0x0070 (0x0028)
    uint8_t Observed[0x28]; // 0x0098 (0x0028)
    bool bUseSelfAsOrigin; // 0x00C0 (0x0001)
    bool bUseSelfAsObserved; // 0x00C0 (0x0001)
};

// Class: AIModule.BTDecorator_ReachedMoveGoal
class BTDecorator_ReachedMoveGoal : public BTDecorator {
public:
};

// Class: AIModule.BTDecorator_SetTagCooldown
class BTDecorator_SetTagCooldown : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t CooldownTag[0x8]; // 0x0068 (0x0008)
    float CoolDownDuration; // 0x0070 (0x0004)
    bool bAddToExistingDuration; // 0x0074 (0x0001)
};

// Class: AIModule.BTDecorator_TagCooldown
class BTDecorator_TagCooldown : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t CooldownTag[0x8]; // 0x0068 (0x0008)
    float CoolDownDuration; // 0x0070 (0x0004)
    bool bAddToExistingDuration; // 0x0074 (0x0001)
    bool bActivatesCooldown; // 0x0075 (0x0001)
};

// Class: AIModule.BTDecorator_TimeLimit
class BTDecorator_TimeLimit : public BTDecorator {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    float TimeLimit; // 0x0068 (0x0004)
    float RandomDeviation; // 0x006C (0x0004)
    bool ReturnTrueOnTimeOut; // 0x0070 (0x0001)
};

// Class: AIModule.BTService_DefaultFocus
class BTService_DefaultFocus : public BTService_BlackboardBase {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    uint8_t FocusPriority; // 0x0098 (0x0001)
};

// Class: AIModule.EnvQueryItemType
class EnvQueryItemType : public Object {
public:
};

// Class: AIModule.EnvQueryTypes
class EnvQueryTypes : public Object {
public:
};

// Class: AIModule.BTService_BlueprintBase
class BTService_BlueprintBase : public BTService {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* AIOwner; // 0x0070 (0x0008)
    class UObject* ActorOwner; // 0x0078 (0x0008)
    uint8_t Pad_1[0x10]; // 0x0080 (0x0010)
    bool bShowPropertyDetails; // 0x0090 (0x0001)
    bool bShowEventDetails; // 0x0090 (0x0001)

public:
    void ReceiveTickAI(class UObject* OwnerController, class UObject* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class UObject* OwnerActor, float DeltaSeconds);
    void ReceiveSearchStartAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveSearchStart(class UObject* OwnerActor);
    void ReceiveDeactivationAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveDeactivation(class UObject* OwnerActor);
    void ReceiveActivationAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveActivation(class UObject* OwnerActor);
    bool IsServiceActive();
};

// Class: AIModule.BTComposite_Selector
class BTComposite_Selector : public BTCompositeNode {
public:
};

// Class: AIModule.BTComposite_Sequence
class BTComposite_Sequence : public BTCompositeNode {
public:
};

// Class: AIModule.BTComposite_SimpleParallel
class BTComposite_SimpleParallel : public BTCompositeNode {
public:
    uint8_t Pad_0[0xA0]; // 0x0028 (0x00A0)
    uint8_t FinishMode; // 0x00C8 (0x0001)
};

// Class: AIModule.BTTask_BlackboardBase
class BTTask_BlackboardBase : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t BlackboardKey[0x28]; // 0x0070 (0x0028)
};

// Class: AIModule.BTTask_MoveDirectlyToward
class BTTask_MoveDirectlyToward : public BTTask_BlackboardBase {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    float AcceptableRadius; // 0x0098 (0x0004)
    bool bDisablePathUpdateOnGoalLocationChange; // 0x009C (0x0001)
    bool bProjectVectorGoalToNavigation; // 0x009C (0x0001)
    bool bAllowStrafe; // 0x009C (0x0001)
    bool bStopOnOverlap; // 0x009C (0x0001)
};

// Class: AIModule.BTTask_MoveTo
class BTTask_MoveTo : public BTTask_BlackboardBase {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    float AcceptableRadius; // 0x0098 (0x0004)
    uint8_t Pad_1[0x4]; // 0x009C (0x0004)
    class UClass* FilterClass; // 0x00A0 (0x0008)
    float ObservedBlackboardValueTolerance; // 0x00A8 (0x0004)
    bool bAllowStrafe; // 0x00AC (0x0001)
    bool bAllowPartialPath; // 0x00AC (0x0001)
    bool bStopOnOverlap; // 0x00AC (0x0001)
    bool bObserveBlackboardValue; // 0x00AC (0x0001)
};

// Class: AIModule.BTTask_RotateToFaceBBEntry
class BTTask_RotateToFaceBBEntry : public BTTask_BlackboardBase {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    float Precision; // 0x0098 (0x0004)
};

// Class: AIModule.BTTask_RunEQSQuery
class BTTask_RunEQSQuery : public BTTask_BlackboardBase {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    class UObject* QueryTemplate; // 0x0098 (0x0008)
    struct TArray<uint8_t> QueryParams; // 0x00A0 (0x0010)
    struct TArray<uint8_t> QueryConfig; // 0x00B0 (0x0010)
    struct TArray<uint8_t> BBQueryParams; // 0x00C0 (0x0010)
    uint8_t RunMode; // 0x00D0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00D1 (0x0007)
    uint8_t EQSQueryBlackboardKey[0x28]; // 0x00D8 (0x0028)
    bool bUseBBKey; // 0x0100 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0101 (0x0007)
    uint8_t EQSRequest[0x48]; // 0x0108 (0x0048)
};

// Class: AIModule.BTTask_BlueprintBase
class BTTask_BlueprintBase : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* AIOwner; // 0x0070 (0x0008)
    class UObject* ActorOwner; // 0x0078 (0x0008)
    uint8_t Pad_1[0x18]; // 0x0080 (0x0018)
    bool bShowPropertyDetails; // 0x0098 (0x0001)

public:
    void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID);
    void SetFinishOnMessage(struct FName MessageName);
    void ReceiveTickAI(class UObject* OwnerController, class UObject* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class UObject* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveExecute(class UObject* OwnerActor);
    void ReceiveAbortAI(class UObject* OwnerController, class UObject* ControlledPawn);
    void ReceiveAbort(class UObject* OwnerActor);
    bool IsTaskExecuting();
    bool IsTaskAborting();
    void FinishExecute(bool bSuccess);
    void FinishAbort();
};

// Class: AIModule.BTTask_MakeNoise
class BTTask_MakeNoise : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    float Loudnes; // 0x0070 (0x0004)
};

// Class: AIModule.PawnAction
class PawnAction : public Object {
public:
    class UObject* ChildAction; // 0x0028 (0x0008)
    class UObject* ParentAction; // 0x0030 (0x0008)
    class UObject* OwnerComponent; // 0x0038 (0x0008)
    class UObject* Instigator; // 0x0040 (0x0008)
    class UObject* BrainComp; // 0x0048 (0x0008)
    uint8_t Pad_0[0x68]; // 0x0050 (0x0068)
    bool bAllowNewSameClassInstance; // 0x00B8 (0x0001)
    bool bReplaceActiveSameClassInstance; // 0x00B8 (0x0001)
    bool bShouldPauseMovement; // 0x00B8 (0x0001)
    bool bAlwaysNotifyOnFinished; // 0x00B8 (0x0001)

public:
    uint8_t GetActionPriority();
    void Finish(uint8_t WithResult);
    class UObject* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};

// Class: AIModule.BTTask_PawnActionBase
class BTTask_PawnActionBase : public BTTaskNode {
public:
};

// Class: AIModule.BTTask_PushPawnAction
class BTTask_PushPawnAction : public BTTask_PawnActionBase {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* Action; // 0x0070 (0x0008)
};

// Class: AIModule.BTTask_PlayAnimation
class BTTask_PlayAnimation : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* AnimationToPlay; // 0x0070 (0x0008)
    bool bLooping; // 0x0078 (0x0001)
    bool bNonBlocking; // 0x0078 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0079 (0x0007)
    class UObject* MyOwnerComp; // 0x0080 (0x0008)
    class UObject* CachedSkelMesh; // 0x0088 (0x0008)
};

// Class: AIModule.BTTask_PlaySound
class BTTask_PlaySound : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* SoundToPlay; // 0x0070 (0x0008)
};

// Class: AIModule.BTTask_RunBehavior
class BTTask_RunBehavior : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* BehaviorAsset; // 0x0070 (0x0008)
};

// Class: AIModule.BTTask_SetTagCooldown
class BTTask_SetTagCooldown : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t CooldownTag[0x8]; // 0x0070 (0x0008)
    bool bAddToExistingDuration; // 0x0078 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0079 (0x0003)
    float CoolDownDuration; // 0x007C (0x0004)
};

// Class: AIModule.BTTask_Wait
class BTTask_Wait : public BTTaskNode {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    float WaitTime; // 0x0070 (0x0004)
    float RandomDeviation; // 0x0074 (0x0004)
};

// Class: AIModule.BTTask_WaitBlackboardTime
class BTTask_WaitBlackboardTime : public BTTask_Wait {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    uint8_t BlackboardKey[0x28]; // 0x0078 (0x0028)
};

// Class: AIModule.CrowdAgentInterface
class CrowdAgentInterface : public Interface {
public:
};

// Class: AIModule.CrowdManager
class CrowdManager : public Object {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> AvoidanceConfig; // 0x0038 (0x0010)
    struct TArray<uint8_t> SamplingPatterns; // 0x0048 (0x0010)
    int32_t MaxAgents; // 0x0058 (0x0004)
    float MaxAgentRadius; // 0x005C (0x0004)
    int32_t MaxAvoidedAgents; // 0x0060 (0x0004)
    int32_t MaxAvoidedWalls; // 0x0064 (0x0004)
    float NavmeshCheckInterval; // 0x0068 (0x0004)
    float PathOptimizationInterval; // 0x006C (0x0004)
    bool bResolveCollisions; // 0x0070 (0x0001)
};

// Class: AIModule.EnvQueryContext_BlueprintBase
class EnvQueryContext_BlueprintBase : public EnvQueryContext {
public:

public:
    void ProvideSingleLocation(class UObject* QuerierActor, uint8_t ResultingLocation);
    void ProvideSingleActor(class UObject* QuerierActor, class UObject* ResultingActor);
    void ProvideLocationsSet(class UObject* QuerierActor, struct TArray<uint8_t> ResultingLocationSet);
    void ProvideActorsSet(class UObject* QuerierActor, struct TArray<uint8_t> ResultingActorsSet);
};

// Class: AIModule.EnvQueryContext_Item
class EnvQueryContext_Item : public EnvQueryContext {
public:
};

// Class: AIModule.EnvQueryContext_Querier
class EnvQueryContext_Querier : public EnvQueryContext {
public:
};

// Class: AIModule.VisualLoggerExtension
class VisualLoggerExtension : public Object {
public:
};

// Class: AIModule.EnvQueryDebugHelpers
class EnvQueryDebugHelpers : public Object {
public:
};

// Class: AIModule.EQSQueryResultSourceInterface
class EQSQueryResultSourceInterface : public Interface {
public:
};

// Class: AIModule.EnvQueryInstanceBlueprintWrapper
class EnvQueryInstanceBlueprintWrapper : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    int32_t QueryID; // 0x0030 (0x0004)
    uint8_t Pad_1[0x14]; // 0x0034 (0x0014)
    class UClass* ItemType; // 0x0048 (0x0008)
    int32_t OptionIndex; // 0x0050 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0054 (0x0004)
    uint8_t OnQueryFinishedEvent[0x10]; // 0x0058 (0x0010)

public:
    struct TArray<uint8_t> GetResultsAsLocations();
    struct TArray<uint8_t> GetResultsAsActors();
    float GetItemScore(int32_t ItemIndex);
    void EQSQueryDoneSignature__DelegateSignature(class UObject* QueryInstance, uint8_t QueryStatus);
};

// Class: AIModule.EnvQueryItemType_VectorBase
class EnvQueryItemType_VectorBase : public EnvQueryItemType {
public:
};

// Class: AIModule.EnvQueryItemType_ActorBase
class EnvQueryItemType_ActorBase : public EnvQueryItemType_VectorBase {
public:
};

// Class: AIModule.EnvQueryItemType_Actor
class EnvQueryItemType_Actor : public EnvQueryItemType_ActorBase {
public:
};

// Class: AIModule.EnvQueryItemType_Direction
class EnvQueryItemType_Direction : public EnvQueryItemType_VectorBase {
public:
};

// Class: AIModule.EnvQueryItemType_Point
class EnvQueryItemType_Point : public EnvQueryItemType_VectorBase {
public:
};

// Class: AIModule.EnvQueryManager
class EnvQueryManager : public Object {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct TArray<uint8_t> InstanceCache; // 0x0090 (0x0010)
    struct TArray<uint8_t> LocalContexts; // 0x00A0 (0x0010)
    struct TArray<uint8_t> GCShieldedWrappers; // 0x00B0 (0x0010)

public:
    class UObject* RunEQSQuery(class UObject* WorldContext, class UObject* QueryTemplate, class UObject* Querier, uint8_t RunMode, class UClass* WrapperClass);
};

// Class: AIModule.EnvQueryGenerator_ActorsOfClass
class EnvQueryGenerator_ActorsOfClass : public EnvQueryGenerator {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    uint8_t SearchRadius[0x30]; // 0x0050 (0x0030)
    class UClass* SearchedActorClass; // 0x0080 (0x0008)
    class UClass* SearchCenter; // 0x0088 (0x0008)
};

// Class: AIModule.EnvQueryGenerator_BlueprintBase
class EnvQueryGenerator_BlueprintBase : public EnvQueryGenerator {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    struct FText GeneratorsActionDescription; // 0x0050 (0x0018)
    class UClass* Context; // 0x0068 (0x0008)
    class UClass* GeneratedItemType; // 0x0070 (0x0008)

public:
    class UObject* GetQuerier();
    void DoItemGeneration(struct TArray<uint8_t> ContextLocations);
    void AddGeneratedVector(uint8_t GeneratedVector);
    void AddGeneratedActor(class UObject* GeneratedActor);
};

// Class: AIModule.EnvQueryGenerator_Composite
class EnvQueryGenerator_Composite : public EnvQueryGenerator {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    struct TArray<uint8_t> Generators; // 0x0050 (0x0010)
    bool bHasMatchingItemType; // 0x0060 (0x0001)
};

// Class: AIModule.EnvQueryGenerator_CurrentLocation
class EnvQueryGenerator_CurrentLocation : public EnvQueryGenerator {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    class UClass* QueryContext; // 0x0050 (0x0008)
};

// Class: AIModule.EnvQueryGenerator_Donut
class EnvQueryGenerator_Donut : public EnvQueryGenerator_ProjectedPoints {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    uint8_t InnerRadius[0x30]; // 0x0080 (0x0030)
    uint8_t OuterRadius[0x30]; // 0x00B0 (0x0030)
    uint8_t NumberOfRings[0x30]; // 0x00E0 (0x0030)
    uint8_t PointsPerRing[0x30]; // 0x0110 (0x0030)
    uint8_t ArcDirection[0x20]; // 0x0140 (0x0020)
    uint8_t ArcAngle[0x30]; // 0x0160 (0x0030)
    class UClass* Center; // 0x0190 (0x0008)
    bool bDefineArc; // 0x0198 (0x0001)
};

// Class: AIModule.EnvQueryGenerator_OnCircle
class EnvQueryGenerator_OnCircle : public EnvQueryGenerator_ProjectedPoints {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    uint8_t CircleRadius[0x30]; // 0x0080 (0x0030)
    uint8_t SpaceBetween[0x30]; // 0x00B0 (0x0030)
    uint8_t NumberOfPoints[0x30]; // 0x00E0 (0x0030)
    uint8_t PointOnCircleSpacingMethod; // 0x0110 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0111 (0x0007)
    uint8_t ArcDirection[0x20]; // 0x0118 (0x0020)
    uint8_t ArcAngle[0x30]; // 0x0138 (0x0030)
    float AngleRadians; // 0x0168 (0x0004)
    uint8_t Pad_2[0x4]; // 0x016C (0x0004)
    class UClass* CircleCenter; // 0x0170 (0x0008)
    bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x0178 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0179 (0x0007)
    uint8_t CircleCenterZOffset[0x30]; // 0x0180 (0x0030)
    uint8_t TraceData[0x30]; // 0x01B0 (0x0030)
    bool bDefineArc; // 0x01E0 (0x0001)
};

// Class: AIModule.EnvQueryGenerator_SimpleGrid
class EnvQueryGenerator_SimpleGrid : public EnvQueryGenerator_ProjectedPoints {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    uint8_t GridSize[0x30]; // 0x0080 (0x0030)
    uint8_t SpaceBetween[0x30]; // 0x00B0 (0x0030)
    class UClass* GenerateAround; // 0x00E0 (0x0008)
    float QuantizeValue; // 0x00E8 (0x0004)
};

// Class: AIModule.EnvQueryGenerator_PathingGrid
class EnvQueryGenerator_PathingGrid : public EnvQueryGenerator_SimpleGrid {
public:
    uint8_t Pad_0[0xC8]; // 0x0028 (0x00C8)
    uint8_t PathToItem[0x30]; // 0x00F0 (0x0030)
    class UClass* NavigationFilter; // 0x0120 (0x0008)
    uint8_t ScanRangeMultiplier[0x30]; // 0x0128 (0x0030)
};

// Class: AIModule.EnvQueryTest_Distance
class EnvQueryTest_Distance : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t TestMode; // 0x01C0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x01C1 (0x0007)
    class UClass* DistanceTo; // 0x01C8 (0x0008)
};

// Class: AIModule.EnvQueryTest_Dot
class EnvQueryTest_Dot : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t LineA[0x20]; // 0x01C0 (0x0020)
    uint8_t LineB[0x20]; // 0x01E0 (0x0020)
    uint8_t TestMode; // 0x0200 (0x0001)
    bool bAbsoluteValue; // 0x0201 (0x0001)
};

// Class: AIModule.EnvQueryTest_GameplayTags
class EnvQueryTest_GameplayTags : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t TagsToMatch; // 0x01C0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x01C1 (0x0007)
    uint8_t GameplayTags[0x20]; // 0x01C8 (0x0020)
};

// Class: AIModule.EnvQueryTest_Overlap
class EnvQueryTest_Overlap : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t OverlapData[0x20]; // 0x01C0 (0x0020)
};

// Class: AIModule.EnvQueryTest_Pathfinding
class EnvQueryTest_Pathfinding : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t TestMode; // 0x01C0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x01C1 (0x0007)
    class UClass* Context; // 0x01C8 (0x0008)
    uint8_t PathFromContext[0x30]; // 0x01D0 (0x0030)
    uint8_t SkipUnreachable[0x30]; // 0x0200 (0x0030)
    class UClass* FilterClass; // 0x0230 (0x0008)
};

// Class: AIModule.EnvQueryTest_PathfindingBatch
class EnvQueryTest_PathfindingBatch : public EnvQueryTest_Pathfinding {
public:
    uint8_t Pad_0[0x210]; // 0x0028 (0x0210)
    uint8_t ScanRangeMultiplier[0x30]; // 0x0238 (0x0030)
};

// Class: AIModule.EnvQueryTest_Project
class EnvQueryTest_Project : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t ProjectionData[0x30]; // 0x01C0 (0x0030)
};

// Class: AIModule.EnvQueryTest_Random
class EnvQueryTest_Random : public EnvQueryTest {
public:
};

// Class: AIModule.EnvQueryTest_Trace
class EnvQueryTest_Trace : public EnvQueryTest {
public:
    uint8_t Pad_0[0x198]; // 0x0028 (0x0198)
    uint8_t TraceData[0x30]; // 0x01C0 (0x0030)
    uint8_t TraceFromContext[0x30]; // 0x01F0 (0x0030)
    uint8_t ItemHeightOffset[0x30]; // 0x0220 (0x0030)
    uint8_t ContextHeightOffset[0x30]; // 0x0250 (0x0030)
    class UClass* Context; // 0x0280 (0x0008)
    bool IgnoreQuerier; // 0x0288 (0x0001)
};

// Class: AIModule.EnvQueryOption
class EnvQueryOption : public Object {
public:
    class UObject* Generator; // 0x0028 (0x0008)
    struct TArray<uint8_t> Tests; // 0x0030 (0x0010)
};

// Class: AIModule.EQSGameplayDebuggerObject
class EQSGameplayDebuggerObject : public GameplayDebuggerBaseObject {
public:

public:
    void OnCycleDetailsView();
};

// Class: AIModule.EQSRenderingComponent
class EQSRenderingComponent : public PrimitiveComponent {
public:
};

// Class: AIModule.EQSTestingPawn
class EQSTestingPawn : public Character {
public:
    uint8_t Pad_0[0x750]; // 0x0028 (0x0750)
    class UObject* QueryTemplate; // 0x0778 (0x0008)
    struct TArray<uint8_t> QueryParams; // 0x0780 (0x0010)
    struct TArray<uint8_t> QueryConfig; // 0x0790 (0x0010)
    float TimeLimitPerStep; // 0x07A0 (0x0004)
    int32_t StepToDebugDraw; // 0x07A4 (0x0004)
    uint8_t HighlightMode; // 0x07A8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x07A9 (0x0003)
    bool bDrawLabels; // 0x07AC (0x0001)
    bool bDrawFailedItems; // 0x07AC (0x0001)
    bool bReRunQueryOnlyOnFinishedMove; // 0x07AC (0x0001)
    bool bShouldBeVisibleInGame; // 0x07AC (0x0001)
    bool bTickDuringGame; // 0x07AC (0x0001)
    uint8_t Pad_2[0x3]; // 0x07AD (0x0003)
    uint8_t QueryingMode; // 0x07B0 (0x0001)
};

// Class: AIModule.NavMeshGameplayDebuggerObject
class NavMeshGameplayDebuggerObject : public GameplayDebuggerBaseObject {
public:

public:
    void ServerDiscardNavmeshData();
};

// Class: AIModule.PawnAction_BlueprintBase
class PawnAction_BlueprintBase : public PawnAction {
public:

public:
    void ActionTick(class UObject* ControlledPawn, float DeltaSeconds);
    void ActionStart(class UObject* ControlledPawn);
    void ActionResume(class UObject* ControlledPawn);
    void ActionPause(class UObject* ControlledPawn);
    void ActionFinished(class UObject* ControlledPawn, uint8_t WithResult);
};

// Class: AIModule.PawnAction_Move
class PawnAction_Move : public PawnAction {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* GoalActor; // 0x00D0 (0x0008)
    uint8_t GoalLocation[0xC]; // 0x00D8 (0x000C)
    float AcceptableRadius; // 0x00E4 (0x0004)
    class UClass* FilterClass; // 0x00E8 (0x0008)
    bool bAllowStrafe; // 0x00F0 (0x0001)
    bool bFinishOnOverlap; // 0x00F0 (0x0001)
    bool bUsePathfinding; // 0x00F0 (0x0001)
    bool bAllowPartialPath; // 0x00F0 (0x0001)
    bool bProjectGoalToNavigation; // 0x00F0 (0x0001)
    bool bUpdatePathToGoal; // 0x00F0 (0x0001)
    bool bAbortChildActionOnPathChange; // 0x00F0 (0x0001)
};

// Class: AIModule.PawnAction_Repeat
class PawnAction_Repeat : public PawnAction {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* ActionToRepeat; // 0x00D0 (0x0008)
    class UObject* RecentActionCopy; // 0x00D8 (0x0008)
    uint8_t ChildFailureHandlingMode; // 0x00E0 (0x0001)
};

// Class: AIModule.PawnAction_Sequence
class PawnAction_Sequence : public PawnAction {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    struct TArray<uint8_t> ActionSequence; // 0x00D0 (0x0010)
    uint8_t ChildFailureHandlingMode; // 0x00E0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00E1 (0x0007)
    class UObject* RecentActionCopy; // 0x00E8 (0x0008)
};

// Class: AIModule.PawnAction_Wait
class PawnAction_Wait : public PawnAction {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    float TimeToWait; // 0x00D0 (0x0004)
};

// Class: AIModule.PerceptionGameplayDebuggerObject
class PerceptionGameplayDebuggerObject : public GameplayDebuggerBaseObject {
public:
    uint8_t Pad_0[0x60]; // 0x0028 (0x0060)
    uint8_t SensingComponentLocation[0xC]; // 0x0088 (0x000C)
    uint8_t Pad_1[0x4]; // 0x0094 (0x0004)
    struct FString PerceptionLegend; // 0x0098 (0x0010)
    float DistanceFromPlayer; // 0x00A8 (0x0004)
    float DistanceFromSensor; // 0x00AC (0x0004)
};

} // namespace SDK

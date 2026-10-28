#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: AIModule.AIRequestID
struct AIRequestID {
    uint8_t RequestID[0x4]; // 0x0000 (0x0004)
};

// ScriptStruct: AIModule.AIStimulus
struct AIStimulus {
    float Age; // 0x0000 (0x0004)
    float ExpirationAge; // 0x0004 (0x0004)
    float Strength; // 0x0008 (0x0004)
    uint8_t StimulusLocation[0xC]; // 0x000C (0x000C)
    uint8_t ReceiverLocation[0xC]; // 0x0018 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FName Tag; // 0x0028 (0x0008)
    uint8_t Pad_1[0x10]; // 0x0030 (0x0010)
    bool bSuccessfullySensed; // 0x0040 (0x0001)
};

// ScriptStruct: AIModule.AIMoveRequest
struct AIMoveRequest {
    class UObject* GoalActor; // 0x0000 (0x0008)
};

// ScriptStruct: AIModule.PawnActionStack
struct PawnActionStack {
    class UObject* TopAction; // 0x0000 (0x0008)
};

// ScriptStruct: AIModule.PawnActionEvent
struct PawnActionEvent {
    class UObject* Action; // 0x0000 (0x0008)
};

// ScriptStruct: AIModule.BlackboardKeySelector
struct BlackboardKeySelector {
    struct TArray<uint8_t> AllowedTypes; // 0x0000 (0x0010)
    struct FName SelectedKeyName; // 0x0010 (0x0008)
    class UClass* SelectedKeyType; // 0x0018 (0x0008)
    uint8_t SelectedKeyID; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    bool bNoneIsAllowedValue; // 0x0024 (0x0001)
};

// ScriptStruct: AIModule.GenericTeamId
struct GenericTeamId {
    uint8_t TeamID; // 0x0000 (0x0001)
};

// ScriptStruct: AIModule.AIDataProviderBoolValue
struct AIDataProviderBoolValue : public AIDataProviderTypedValue {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    bool DefaultValue; // 0x0028 (0x0001)
};

// ScriptStruct: AIModule.AIDataProviderTypedValue
struct AIDataProviderTypedValue : public AIDataProviderValue {
    uint8_t Pad_0[0x20]; // 0x0000 (0x0020)
    class UClass* PropertyType; // 0x0020 (0x0008)
};

// ScriptStruct: AIModule.AIDataProviderValue
struct AIDataProviderValue {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* CachedProperty; // 0x0008 (0x0008)
    class UObject* DataBinding; // 0x0010 (0x0008)
    struct FName DataField; // 0x0018 (0x0008)
};

// ScriptStruct: AIModule.AIDataProviderFloatValue
struct AIDataProviderFloatValue : public AIDataProviderTypedValue {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    float DefaultValue; // 0x0028 (0x0004)
};

// ScriptStruct: AIModule.AIDataProviderIntValue
struct AIDataProviderIntValue : public AIDataProviderTypedValue {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    int32_t DefaultValue; // 0x0028 (0x0004)
};

// ScriptStruct: AIModule.AIDataProviderStructValue
struct AIDataProviderStructValue : public AIDataProviderValue {
};

// ScriptStruct: AIModule.AISenseAffiliationFilter
struct AISenseAffiliationFilter {
    bool bDetectEnemies; // 0x0000 (0x0001)
    bool bDetectNeutrals; // 0x0000 (0x0001)
    bool bDetectFriendlies; // 0x0000 (0x0001)
};

// ScriptStruct: AIModule.ActorPerceptionBlueprintInfo
struct ActorPerceptionBlueprintInfo {
    class UObject* Target; // 0x0000 (0x0008)
    struct TArray<uint8_t> LastSensedStimuli; // 0x0008 (0x0010)
    bool bIsHostile; // 0x0018 (0x0001)
};

// ScriptStruct: AIModule.AIDamageEvent
struct AIDamageEvent {
    float Amount; // 0x0000 (0x0004)
    uint8_t Location[0xC]; // 0x0004 (0x000C)
    uint8_t HitLocation[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* DamagedActor; // 0x0020 (0x0008)
    class UObject* Instigator; // 0x0028 (0x0008)
};

// ScriptStruct: AIModule.AINoiseEvent
struct AINoiseEvent {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    uint8_t NoiseLocation[0xC]; // 0x0004 (0x000C)
    float Loudness; // 0x0010 (0x0004)
    float MaxRange; // 0x0014 (0x0004)
    class UObject* Instigator; // 0x0018 (0x0008)
    struct FName Tag; // 0x0020 (0x0008)
};

// ScriptStruct: AIModule.AIPredictionEvent
struct AIPredictionEvent {
    class UObject* Requestor; // 0x0000 (0x0008)
    class UObject* PredictedActor; // 0x0008 (0x0008)
};

// ScriptStruct: AIModule.AISightEvent
struct AISightEvent {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* SeenActor; // 0x0008 (0x0008)
    class UObject* Observer; // 0x0010 (0x0008)
};

// ScriptStruct: AIModule.AITeamStimulusEvent
struct AITeamStimulusEvent {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* Broadcaster; // 0x0028 (0x0008)
    class UObject* Enemy; // 0x0030 (0x0008)
};

// ScriptStruct: AIModule.AITouchEvent
struct AITouchEvent {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    class UObject* TouchReceiver; // 0x0010 (0x0008)
    class UObject* OtherActor; // 0x0018 (0x0008)
};

// ScriptStruct: AIModule.BTCompositeChild
struct BTCompositeChild {
    class UObject* ChildComposite; // 0x0000 (0x0008)
    class UObject* ChildTask; // 0x0008 (0x0008)
    struct TArray<uint8_t> Decorators; // 0x0010 (0x0010)
    struct TArray<uint8_t> DecoratorOps; // 0x0020 (0x0010)
};

// ScriptStruct: AIModule.BTDecoratorLogic
struct BTDecoratorLogic {
    uint8_t Operation; // 0x0000 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0001 (0x0001)
    uint8_t Number[0x2]; // 0x0002 (0x0002)
};

// ScriptStruct: AIModule.BehaviorTreeTemplateInfo
struct BehaviorTreeTemplateInfo {
    class UObject* Asset; // 0x0000 (0x0008)
    class UObject* Template; // 0x0008 (0x0008)
};

// ScriptStruct: AIModule.BlackboardEntry
struct BlackboardEntry {
    struct FName EntryName; // 0x0000 (0x0008)
    class UObject* KeyType; // 0x0008 (0x0008)
    bool bInstanceSynced; // 0x0010 (0x0001)
};

// ScriptStruct: AIModule.EQSParametrizedQueryExecutionRequest
struct EQSParametrizedQueryExecutionRequest {
    class UObject* QueryTemplate; // 0x0000 (0x0008)
    struct TArray<uint8_t> QueryConfig; // 0x0008 (0x0010)
    uint8_t EQSQueryBlackboardKey[0x28]; // 0x0018 (0x0028)
    uint8_t RunMode; // 0x0040 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0041 (0x0003)
    bool bUseBBKeyForQueryTemplate; // 0x0044 (0x0001)
};

// ScriptStruct: AIModule.AIDynamicParam
struct AIDynamicParam {
    struct FName ParamName; // 0x0000 (0x0008)
    uint8_t ParamType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float Value; // 0x000C (0x0004)
    uint8_t BBKey[0x28]; // 0x0010 (0x0028)
};

// ScriptStruct: AIModule.EnvBoolParam
struct EnvBoolParam : public EnvBoolParam_DEPRECATED {
};

// ScriptStruct: AIModule.EnvBoolParam_DEPRECATED
struct EnvBoolParam_DEPRECATED {
    bool Value; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName ParamName; // 0x0008 (0x0008)
};

// ScriptStruct: AIModule.EnvIntParam
struct EnvIntParam : public EnvIntParam_DEPRECATED {
};

// ScriptStruct: AIModule.EnvIntParam_DEPRECATED
struct EnvIntParam_DEPRECATED {
    int32_t Value; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName ParamName; // 0x0008 (0x0008)
};

// ScriptStruct: AIModule.EnvFloatParam
struct EnvFloatParam : public EnvFloatParam_DEPRECATED {
};

// ScriptStruct: AIModule.EnvFloatParam_DEPRECATED
struct EnvFloatParam_DEPRECATED {
    float Value; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName ParamName; // 0x0008 (0x0008)
};

// ScriptStruct: AIModule.EnvQueryResult
struct EnvQueryResult {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    class UClass* ItemType; // 0x0010 (0x0008)
    uint8_t Pad_1[0x14]; // 0x0018 (0x0014)
    int32_t OptionIndex; // 0x002C (0x0004)
    int32_t QueryID; // 0x0030 (0x0004)
};

// ScriptStruct: AIModule.EnvOverlapData
struct EnvOverlapData {
    float ExtentX; // 0x0000 (0x0004)
    float ExtentY; // 0x0004 (0x0004)
    float ExtentZ; // 0x0008 (0x0004)
    uint8_t ShapeOffset[0xC]; // 0x000C (0x000C)
    uint8_t OverlapChannel; // 0x0018 (0x0001)
    uint8_t OverlapShape; // 0x0019 (0x0001)
    uint8_t Pad_0[0x2]; // 0x001A (0x0002)
    bool bOnlyBlockingHits; // 0x001C (0x0001)
    bool bOverlapComplex; // 0x001C (0x0001)
};

// ScriptStruct: AIModule.EnvTraceData
struct EnvTraceData {
    int32_t VersionNum; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UClass* NavigationFilter; // 0x0008 (0x0008)
    float ProjectDown; // 0x0010 (0x0004)
    float ProjectUp; // 0x0014 (0x0004)
    float ExtentX; // 0x0018 (0x0004)
    float ExtentY; // 0x001C (0x0004)
    float ExtentZ; // 0x0020 (0x0004)
    float PostProjectionVerticalOffset; // 0x0024 (0x0004)
    uint8_t TraceChannel; // 0x0028 (0x0001)
    uint8_t SerializedChannel; // 0x0029 (0x0001)
    uint8_t TraceShape; // 0x002A (0x0001)
    uint8_t TraceMode; // 0x002B (0x0001)
    bool bTraceComplex; // 0x002C (0x0001)
    bool bOnlyBlockingHits; // 0x002C (0x0001)
    bool bCanTraceOnNavMesh; // 0x002C (0x0001)
    bool bCanTraceOnGeometry; // 0x002C (0x0001)
    bool bCanDisableTrace; // 0x002C (0x0001)
    bool bCanProjectDown; // 0x002C (0x0001)
};

// ScriptStruct: AIModule.EnvDirection
struct EnvDirection {
    class UClass* LineFrom; // 0x0000 (0x0008)
    class UClass* LineTo; // 0x0008 (0x0008)
    class UClass* Rotation; // 0x0010 (0x0008)
    uint8_t DirMode; // 0x0018 (0x0001)
};

// ScriptStruct: AIModule.EnvNamedBlackboardKey
struct EnvNamedBlackboardKey {
    struct FName ParamName; // 0x0000 (0x0008)
    uint8_t ParamType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t BlackboardKey[0x28]; // 0x0010 (0x0028)
};

// ScriptStruct: AIModule.EnvNamedValue
struct EnvNamedValue {
    struct FName ParamName; // 0x0000 (0x0008)
    uint8_t ParamType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float Value; // 0x000C (0x0004)
};

// ScriptStruct: AIModule.CrowdAvoidanceSamplingPattern
struct CrowdAvoidanceSamplingPattern {
    struct TArray<uint8_t> Angles; // 0x0000 (0x0010)
    struct TArray<uint8_t> Radii; // 0x0010 (0x0010)
};

// ScriptStruct: AIModule.CrowdAvoidanceConfig
struct CrowdAvoidanceConfig {
    float VelocityBias; // 0x0000 (0x0004)
    float DesiredVelocityWeight; // 0x0004 (0x0004)
    float CurrentVelocityWeight; // 0x0008 (0x0004)
    float SideBiasWeight; // 0x000C (0x0004)
    float ImpactTimeWeight; // 0x0010 (0x0004)
    float OverlapWeight; // 0x0014 (0x0004)
    float OverShootWeight; // 0x0018 (0x0004)
    float DistanceToCircleExitWeight; // 0x001C (0x0004)
    float ImpactTimeRange; // 0x0020 (0x0004)
    uint8_t CustomPatternIdx; // 0x0024 (0x0001)
    uint8_t AdaptiveDivisions; // 0x0025 (0x0001)
    uint8_t AdaptiveRings; // 0x0026 (0x0001)
    uint8_t AdaptiveDepth; // 0x0027 (0x0001)
};

// ScriptStruct: AIModule.EnvQueryInstanceCache
struct EnvQueryInstanceCache {
    class UObject* Template; // 0x0000 (0x0008)
};

// ScriptStruct: AIModule.EnvQueryRequest
struct EnvQueryRequest {
    class UObject* QueryTemplate; // 0x0000 (0x0008)
    class UObject* Owner; // 0x0008 (0x0008)
    class UObject* World; // 0x0010 (0x0008)
};

} // namespace SDK

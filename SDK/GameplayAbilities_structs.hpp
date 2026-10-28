#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: GameplayAbilities.ActiveGameplayEffect
struct ActiveGameplayEffect : public FastArraySerializerItem {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t Spec[0x248]; // 0x0010 (0x0248)
    uint8_t PredictionKey[0x18]; // 0x0258 (0x0018)
    float StartServerWorldTime; // 0x0270 (0x0004)
    float CachedStartServerWorldTime; // 0x0274 (0x0004)
    float StartWorldTime; // 0x0278 (0x0004)
    bool bIsInhibited; // 0x027C (0x0001)
};

// ScriptStruct: GameplayAbilities.PredictionKey
struct PredictionKey {
    uint8_t Current[0x2]; // 0x0000 (0x0002)
    uint8_t Base[0x2]; // 0x0002 (0x0002)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* PredictiveConnection; // 0x0008 (0x0008)
    bool bIsStale; // 0x0010 (0x0001)
    bool bIsServerInitiated; // 0x0011 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayEffectSpec
struct GameplayEffectSpec {
    class UObject* Def; // 0x0000 (0x0008)
    struct TArray<uint8_t> ModifiedAttributes; // 0x0008 (0x0010)
    uint8_t CapturedRelevantAttributes[0x28]; // 0x0018 (0x0028)
    uint8_t Pad_0[0x10]; // 0x0040 (0x0010)
    float Duration; // 0x0050 (0x0004)
    float Period; // 0x0054 (0x0004)
    float ChanceToApplyToTarget; // 0x0058 (0x0004)
    uint8_t Pad_1[0x4]; // 0x005C (0x0004)
    uint8_t CapturedSourceTags[0x88]; // 0x0060 (0x0088)
    uint8_t CapturedTargetTags[0x88]; // 0x00E8 (0x0088)
    uint8_t DynamicGrantedTags[0x20]; // 0x0170 (0x0020)
    uint8_t DynamicAssetTags[0x20]; // 0x0190 (0x0020)
    struct TArray<uint8_t> Modifiers; // 0x01B0 (0x0010)
    int32_t StackCount; // 0x01C0 (0x0004)
    bool bCompletedSourceAttributeCapture; // 0x01C4 (0x0001)
    bool bCompletedTargetAttributeCapture; // 0x01C4 (0x0001)
    bool bDurationLocked; // 0x01C4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x01C5 (0x0003)
    struct TArray<uint8_t> GrantedAbilitySpecs; // 0x01C8 (0x0010)
    uint8_t Pad_3[0x50]; // 0x01D8 (0x0050)
    uint8_t EffectContext[0x18]; // 0x0228 (0x0018)
    float Level; // 0x0240 (0x0004)
};

// ScriptStruct: GameplayAbilities.GameplayEffectContextHandle
struct GameplayEffectContextHandle {
};

// ScriptStruct: GameplayAbilities.GameplayAbilitySpecDef
struct GameplayAbilitySpecDef {
    class UClass* Ability; // 0x0000 (0x0008)
    int32_t Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t LevelScalableFloat[0x20]; // 0x0010 (0x0020)
    int32_t InputID; // 0x0030 (0x0004)
    uint8_t RemovalPolicy; // 0x0034 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0035 (0x0003)
    class UObject* SourceObject; // 0x0038 (0x0008)
    uint8_t AssignedHandle[0x4]; // 0x0040 (0x0004)
};

// ScriptStruct: GameplayAbilities.GameplayAbilitySpecHandle
struct GameplayAbilitySpecHandle {
    int32_t Handle; // 0x0000 (0x0004)
};

// ScriptStruct: GameplayAbilities.ScalableFloat
struct ScalableFloat {
    float Value; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t Curve[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: GameplayAbilities.ModifierSpec
struct ModifierSpec {
    float EvaluatedMagnitude; // 0x0000 (0x0004)
};

// ScriptStruct: GameplayAbilities.TagContainerAggregator
struct TagContainerAggregator {
    uint8_t CapturedActorTags[0x20]; // 0x0000 (0x0020)
    uint8_t CapturedSpecTags[0x20]; // 0x0020 (0x0020)
    uint8_t ScopedTags[0x20]; // 0x0040 (0x0020)
};

// ScriptStruct: GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
struct GameplayEffectAttributeCaptureSpecContainer {
    struct TArray<uint8_t> SourceAttributes; // 0x0000 (0x0010)
    struct TArray<uint8_t> TargetAttributes; // 0x0010 (0x0010)
    bool bHasNonSnapshottedAttributes; // 0x0020 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayEffectAttributeCaptureSpec
struct GameplayEffectAttributeCaptureSpec {
    uint8_t BackingDefinition[0x10]; // 0x0000 (0x0010)
};

// ScriptStruct: GameplayAbilities.GameplayEffectAttributeCaptureDefinition
struct GameplayEffectAttributeCaptureDefinition {
    uint8_t AttributeToCapture[0x8]; // 0x0000 (0x0008)
    uint8_t AttributeSource; // 0x0008 (0x0001)
    bool bSnapshot; // 0x0009 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayAttribute
struct GameplayAttribute {
    class UObject* Attribute; // 0x0000 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayEffectModifiedAttribute
struct GameplayEffectModifiedAttribute {
    uint8_t Attribute[0x8]; // 0x0000 (0x0008)
    float TotalMagnitude; // 0x0008 (0x0004)
};

// ScriptStruct: GameplayAbilities.ActiveGameplayEffectHandle
struct ActiveGameplayEffectHandle {
    int32_t Handle; // 0x0000 (0x0004)
};

// ScriptStruct: GameplayAbilities.GameplayEffectSpecHandle
struct GameplayEffectSpecHandle {
};

// ScriptStruct: GameplayAbilities.GameplayEventData
struct GameplayEventData {
    uint8_t EventTag[0x8]; // 0x0000 (0x0008)
    class UObject* Instigator; // 0x0008 (0x0008)
    class UObject* Target; // 0x0010 (0x0008)
    class UObject* OptionalObject; // 0x0018 (0x0008)
    class UObject* OptionalObject2; // 0x0020 (0x0008)
    uint8_t ContextHandle[0x18]; // 0x0028 (0x0018)
    uint8_t InstigatorTags[0x20]; // 0x0040 (0x0020)
    uint8_t TargetTags[0x20]; // 0x0060 (0x0020)
    float EventMagnitude; // 0x0080 (0x0004)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityActivationInfo
struct GameplayAbilityActivationInfo {
    uint8_t ActivationMode; // 0x0000 (0x0001)
    bool bCanBeEndedByOtherInstance; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    uint8_t PredictionKeyWhenActivated[0x18]; // 0x0008 (0x0018)
};

// ScriptStruct: GameplayAbilities.GameplayEffectSpecForRPC
struct GameplayEffectSpecForRPC {
    class UObject* Def; // 0x0000 (0x0008)
    struct TArray<uint8_t> ModifiedAttributes; // 0x0008 (0x0010)
    uint8_t EffectContext[0x18]; // 0x0018 (0x0018)
    uint8_t AggregatedSourceTags[0x20]; // 0x0030 (0x0020)
    uint8_t AggregatedTargetTags[0x20]; // 0x0050 (0x0020)
    float Level; // 0x0070 (0x0004)
};

// ScriptStruct: GameplayAbilities.GameplayCueParameters
struct GameplayCueParameters {
    float NormalizedMagnitude; // 0x0000 (0x0004)
    float RawMagnitude; // 0x0004 (0x0004)
    uint8_t EffectContext[0x18]; // 0x0008 (0x0018)
    struct FName MatchedTagName; // 0x0020 (0x0008)
    uint8_t OriginalTag[0x8]; // 0x0028 (0x0008)
    uint8_t AggregatedSourceTags[0x20]; // 0x0030 (0x0020)
    uint8_t AggregatedTargetTags[0x20]; // 0x0050 (0x0020)
    uint8_t Location[0xC]; // 0x0070 (0x000C)
    uint8_t Normal[0xC]; // 0x007C (0x000C)
    uint64_t Instigator; // 0x0088 (0x0008)
    uint64_t EffectCauser; // 0x0090 (0x0008)
    uint64_t SourceObject; // 0x0098 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityTargetDataHandle
struct GameplayAbilityTargetDataHandle {
};

// ScriptStruct: GameplayAbilities.ActiveGameplayCueContainer
struct ActiveGameplayCueContainer : public FastArraySerializer {
    uint8_t Pad_0[0xA8]; // 0x0000 (0x00A8)
    struct TArray<uint8_t> GameplayCues; // 0x00A8 (0x0010)
    class UObject* Owner; // 0x00B8 (0x0008)
};

// ScriptStruct: GameplayAbilities.ActiveGameplayCue
struct ActiveGameplayCue : public FastArraySerializerItem {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t GameplayCueTag[0x8]; // 0x0010 (0x0008)
    uint8_t PredictionKey[0x18]; // 0x0018 (0x0018)
    bool bPredictivelyRemoved; // 0x0030 (0x0001)
};

// ScriptStruct: GameplayAbilities.ActiveGameplayEffectsContainer
struct ActiveGameplayEffectsContainer : public FastArraySerializer {
    uint8_t Pad_0[0x130]; // 0x0000 (0x0130)
    struct TArray<uint8_t> GameplayEffects_Internal; // 0x0130 (0x0010)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityLocalAnimMontage
struct GameplayAbilityLocalAnimMontage {
    class UObject* AnimMontage; // 0x0000 (0x0008)
    bool PlayBit; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t PredictionKey[0x18]; // 0x0010 (0x0018)
    class UObject* AnimatingAbility; // 0x0028 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityRepAnimMontage
struct GameplayAbilityRepAnimMontage {
    class UObject* AnimMontage; // 0x0000 (0x0008)
    float PlayRate; // 0x0008 (0x0004)
    float Position; // 0x000C (0x0004)
    float BlendTime; // 0x0010 (0x0004)
    uint8_t NextSectionID; // 0x0014 (0x0001)
    bool IsStopped; // 0x0015 (0x0001)
    bool ForcePlayBit; // 0x0015 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0016 (0x0002)
    uint8_t PredictionKey[0x18]; // 0x0018 (0x0018)
};

// ScriptStruct: GameplayAbilities.GameplayAbilitySpecContainer
struct GameplayAbilitySpecContainer : public FastArraySerializer {
    uint8_t Pad_0[0xA8]; // 0x0000 (0x00A8)
    struct TArray<uint8_t> Items; // 0x00A8 (0x0010)
};

// ScriptStruct: GameplayAbilities.GameplayAbilitySpec
struct GameplayAbilitySpec : public FastArraySerializerItem {
    uint8_t Pad_0[0xC]; // 0x0000 (0x000C)
    uint8_t Handle[0x4]; // 0x000C (0x0004)
    class UObject* Ability; // 0x0010 (0x0008)
    int32_t Level; // 0x0018 (0x0004)
    int32_t InputID; // 0x001C (0x0004)
    class UObject* SourceObject; // 0x0020 (0x0008)
    bool InputPressed; // 0x0028 (0x0001)
    uint8_t ActiveCount; // 0x0029 (0x0001)
    bool RemoveAfterActivation; // 0x002A (0x0001)
    uint8_t Pad_1[0x5]; // 0x002B (0x0005)
    uint8_t ActivationInfo[0x20]; // 0x0030 (0x0020)
    struct TArray<uint8_t> NonReplicatedInstances; // 0x0050 (0x0010)
    struct TArray<uint8_t> ReplicatedInstances; // 0x0060 (0x0010)
    uint8_t GameplayEffectHandle[0x4]; // 0x0070 (0x0004)
    bool PendingRemove; // 0x0074 (0x0001)
};

// ScriptStruct: GameplayAbilities.AttributeDefaults
struct AttributeDefaults {
    class UClass* Attributes; // 0x0000 (0x0008)
    class UObject* DefaultStartingTable; // 0x0008 (0x0008)
};

// ScriptStruct: GameplayAbilities.AttributeMetaData
struct AttributeMetaData : public TableRowBase {
    float BaseValue; // 0x0000 (0x0004)
    float MinValue; // 0x0004 (0x0004)
    float MaxValue; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FString DerivedAttributeInfo; // 0x0010 (0x0010)
    bool bCanStack; // 0x0020 (0x0001)
};

// ScriptStruct: GameplayAbilities.GlobalCurveDataOverride
struct GlobalCurveDataOverride {
};

// ScriptStruct: GameplayAbilities.GameplayTagRequirements
struct GameplayTagRequirements {
    uint8_t RequireTags[0x20]; // 0x0000 (0x0020)
    uint8_t IgnoreTags[0x20]; // 0x0020 (0x0020)
};

// ScriptStruct: GameplayAbilities.GameplayEffectContext
struct GameplayEffectContext {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint64_t Instigator; // 0x0008 (0x0008)
    uint64_t EffectCauser; // 0x0010 (0x0008)
    uint64_t SourceObject; // 0x0018 (0x0008)
    uint64_t InstigatorAbilitySystemComponent; // 0x0020 (0x0008)
    struct TArray<uint8_t> Actors; // 0x0028 (0x0010)
    uint8_t Pad_1[0x10]; // 0x0038 (0x0010)
    uint8_t WorldOrigin[0xC]; // 0x0048 (0x000C)
    bool bHasWorldOrigin; // 0x0054 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayModifierEvaluatedData
struct GameplayModifierEvaluatedData {
    uint8_t Attribute[0x8]; // 0x0000 (0x0008)
    uint8_t ModifierOp; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float Magnitude; // 0x000C (0x0004)
    uint8_t Handle[0x4]; // 0x0010 (0x0004)
    bool IsValid; // 0x0014 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
struct GameplayAbilityTargetData_SingleTargetHit : public GameplayAbilityTargetData {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t HitResult[0x88]; // 0x0008 (0x0088)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityTargetData
struct GameplayAbilityTargetData {
};

// ScriptStruct: GameplayAbilities.GameplayAbilityTargetData_ActorArray
struct GameplayAbilityTargetData_ActorArray : public GameplayAbilityTargetData {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t SourceLocation[0x70]; // 0x0010 (0x0070)
    struct TArray<uint8_t> TargetActorArray; // 0x0080 (0x0010)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityTargetingLocationInfo
struct GameplayAbilityTargetingLocationInfo {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t LocationType; // 0x0010 (0x0001)
    uint8_t Pad_1[0xF]; // 0x0011 (0x000F)
    uint8_t LiteralTransform[0x30]; // 0x0020 (0x0030)
    class UObject* SourceActor; // 0x0050 (0x0008)
    class UObject* SourceComponent; // 0x0058 (0x0008)
    class UObject* SourceAbility; // 0x0060 (0x0008)
    struct FName SourceSocketName; // 0x0068 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityTargetData_LocationInfo
struct GameplayAbilityTargetData_LocationInfo : public GameplayAbilityTargetData {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t SourceLocation[0x70]; // 0x0010 (0x0070)
    uint8_t TargetLocation[0x70]; // 0x0080 (0x0070)
};

// ScriptStruct: GameplayAbilities.ActiveGameplayEffectQuery
struct ActiveGameplayEffectQuery {
};

// ScriptStruct: GameplayAbilities.GameplayEffectQuery
struct GameplayEffectQuery {
    uint8_t Pad_0[0x40]; // 0x0000 (0x0040)
    uint8_t CustomMatchDelegate_BP[0x10]; // 0x0040 (0x0010)
    uint8_t OwningTagQuery[0x48]; // 0x0050 (0x0048)
    uint8_t EffectTagQuery[0x48]; // 0x0098 (0x0048)
    uint8_t SourceTagQuery[0x48]; // 0x00E0 (0x0048)
    uint8_t ModifyingAttribute[0x8]; // 0x0128 (0x0008)
    class UObject* EffectSource; // 0x0130 (0x0008)
    class UObject* EffectDefinition; // 0x0138 (0x0008)
};

// ScriptStruct: GameplayAbilities.InheritedTagContainer
struct InheritedTagContainer {
    uint8_t CombinedTags[0x20]; // 0x0000 (0x0020)
    uint8_t Added[0x20]; // 0x0020 (0x0020)
    uint8_t Removed[0x20]; // 0x0040 (0x0020)
};

// ScriptStruct: GameplayAbilities.GameplayEffectCue
struct GameplayEffectCue {
    uint8_t MagnitudeAttribute[0x8]; // 0x0000 (0x0008)
    float MinLevel; // 0x0008 (0x0004)
    float MaxLevel; // 0x000C (0x0004)
    uint8_t GameplayCueTags[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: GameplayAbilities.GameplayModifierInfo
struct GameplayModifierInfo {
    uint8_t Attribute[0x8]; // 0x0000 (0x0008)
    uint8_t ModifierOp; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t Magnitude[0x20]; // 0x0010 (0x0020)
    uint8_t ModifierMagnitude[0x160]; // 0x0030 (0x0160)
    uint8_t SourceTags[0x40]; // 0x0190 (0x0040)
    uint8_t TargetTags[0x40]; // 0x01D0 (0x0040)
};

// ScriptStruct: GameplayAbilities.GameplayEffectModifierMagnitude
struct GameplayEffectModifierMagnitude {
    uint8_t MagnitudeCalculationType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t ScalableFloatMagnitude[0x20]; // 0x0008 (0x0020)
    uint8_t AttributeBasedMagnitude[0xC8]; // 0x0028 (0x00C8)
    uint8_t CustomMagnitude[0x68]; // 0x00F0 (0x0068)
    uint8_t SetByCallerMagnitude[0x8]; // 0x0158 (0x0008)
};

// ScriptStruct: GameplayAbilities.SetByCallerFloat
struct SetByCallerFloat {
    struct FName DataName; // 0x0000 (0x0008)
};

// ScriptStruct: GameplayAbilities.CustomCalculationBasedFloat
struct CustomCalculationBasedFloat {
    class UClass* CalculationClassMagnitude; // 0x0000 (0x0008)
    uint8_t Coefficient[0x20]; // 0x0008 (0x0020)
    uint8_t PreMultiplyAdditiveValue[0x20]; // 0x0028 (0x0020)
    uint8_t PostMultiplyAdditiveValue[0x20]; // 0x0048 (0x0020)
};

// ScriptStruct: GameplayAbilities.AttributeBasedFloat
struct AttributeBasedFloat {
    uint8_t Coefficient[0x20]; // 0x0000 (0x0020)
    uint8_t PreMultiplyAdditiveValue[0x20]; // 0x0020 (0x0020)
    uint8_t PostMultiplyAdditiveValue[0x20]; // 0x0040 (0x0020)
    uint8_t BackingAttribute[0x10]; // 0x0060 (0x0010)
    uint8_t AttributeCurve[0x10]; // 0x0070 (0x0010)
    uint8_t AttributeCalculationType; // 0x0080 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0081 (0x0007)
    uint8_t SourceTagFilter[0x20]; // 0x0088 (0x0020)
    uint8_t TargetTagFilter[0x20]; // 0x00A8 (0x0020)
};

// ScriptStruct: GameplayAbilities.GameplayEffectExecutionDefinition
struct GameplayEffectExecutionDefinition {
    class UClass* CalculationClass; // 0x0000 (0x0008)
    uint8_t PassedInTags[0x20]; // 0x0008 (0x0020)
    struct TArray<uint8_t> CalculationModifiers; // 0x0028 (0x0010)
    struct TArray<uint8_t> ConditionalGameplayEffectClasses; // 0x0038 (0x0010)
};

// ScriptStruct: GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
struct GameplayEffectExecutionScopedModifierInfo {
    uint8_t CapturedAttribute[0x10]; // 0x0000 (0x0010)
    uint8_t ModifierOp; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    uint8_t ModifierMagnitude[0x160]; // 0x0018 (0x0160)
    uint8_t SourceTags[0x40]; // 0x0178 (0x0040)
    uint8_t TargetTags[0x40]; // 0x01B8 (0x0040)
};

// ScriptStruct: GameplayAbilities.AbilityTaskDebugMessage
struct AbilityTaskDebugMessage {
    class UObject* FromTask; // 0x0000 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
struct GameplayAbilitySpecHandleAndPredictionKey {
    uint8_t AbilityHandle[0x4]; // 0x0000 (0x0004)
    int32_t PredictionKeyAtCreation; // 0x0004 (0x0004)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityActorInfo
struct GameplayAbilityActorInfo {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint64_t OwnerActor; // 0x0008 (0x0008)
    uint64_t AvatarActor; // 0x0010 (0x0008)
    uint64_t PlayerController; // 0x0018 (0x0008)
    uint64_t AbilitySystemComponent; // 0x0020 (0x0008)
    uint64_t AnimInstance; // 0x0028 (0x0008)
    uint64_t MovementComponent; // 0x0030 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayTargetDataFilterHandle
struct GameplayTargetDataFilterHandle {
};

// ScriptStruct: GameplayAbilities.GameplayTargetDataFilter
struct GameplayTargetDataFilter {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* SelfActor; // 0x0008 (0x0008)
    uint8_t SelfFilter; // 0x0010 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0011 (0x0007)
    class UClass* RequiredActorClass; // 0x0018 (0x0008)
    bool bReverseFilter; // 0x0020 (0x0001)
};

// ScriptStruct: GameplayAbilities.AbilityTriggerData
struct AbilityTriggerData {
    uint8_t TriggerTag[0x8]; // 0x0000 (0x0008)
    uint8_t TriggerSource; // 0x0008 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayCueTag
struct GameplayCueTag {
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayAbilityBindInfo
struct GameplayAbilityBindInfo {
    uint8_t Command; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UClass* GameplayAbilityClass; // 0x0008 (0x0008)
};

// ScriptStruct: GameplayAbilities.WorldReticleParameters
struct WorldReticleParameters {
    uint8_t AOEScale[0xC]; // 0x0000 (0x000C)
};

// ScriptStruct: GameplayAbilities.PreallocationInfo
struct PreallocationInfo {
    uint8_t Pad_0[0x50]; // 0x0000 (0x0050)
    struct TArray<uint8_t> ClassesNeedingPreallocation; // 0x0050 (0x0010)
    class UObject* OwningWorld; // 0x0060 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayCuePendingExecute
struct GameplayCuePendingExecute {
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t PayloadType; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    class UObject* OwningComponent; // 0x0028 (0x0008)
    uint8_t FromSpec[0x78]; // 0x0030 (0x0078)
    uint8_t CueParameters[0xA0]; // 0x00A8 (0x00A0)
};

// ScriptStruct: GameplayAbilities.GameplayCueNotifyData
struct GameplayCueNotifyData {
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t GameplayCueNotifyObj[0x10]; // 0x0008 (0x0010)
    class UClass* LoadedGameplayCueClass; // 0x0018 (0x0008)
};

// ScriptStruct: GameplayAbilities.GameplayEffectCustomExecutionOutput
struct GameplayEffectCustomExecutionOutput {
    struct TArray<uint8_t> OutputModifiers; // 0x0000 (0x0010)
    bool bTriggerConditionalGameplayEffects; // 0x0010 (0x0001)
    bool bHandledStackCountManually; // 0x0010 (0x0001)
    bool bHandledGameplayCuesManually; // 0x0010 (0x0001)
};

// ScriptStruct: GameplayAbilities.GameplayEffectCustomExecutionParameters
struct GameplayEffectCustomExecutionParameters {
};

// ScriptStruct: GameplayAbilities.GameplayTagResponseTableEntry
struct GameplayTagResponseTableEntry {
    uint8_t Positive[0x18]; // 0x0000 (0x0018)
    uint8_t Negative[0x18]; // 0x0018 (0x0018)
};

// ScriptStruct: GameplayAbilities.GameplayTagReponsePair
struct GameplayTagReponsePair {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    class UClass* ResponseGameplayEffect; // 0x0008 (0x0008)
    int32_t SoftCountCap; // 0x0010 (0x0004)
};

} // namespace SDK

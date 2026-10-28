#pragma once
#include "Basic.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK {

// Class: GameplayAbilities.AbilitySystemComponent
class AbilitySystemComponent : public GameplayTasksComponent {
public:
    uint8_t Pad_0[0x110]; // 0x0028 (0x0110)
    struct TArray<uint8_t> DefaultStartingData; // 0x0138 (0x0010)
    struct TArray<uint8_t> SpawnedAttributes; // 0x0148 (0x0010)
    uint8_t ReplicatedPredictionKey[0x18]; // 0x0158 (0x0018)
    uint8_t Pad_1[0x210]; // 0x0170 (0x0210)
    float OutgoingDuration; // 0x0380 (0x0004)
    float IncomingDuration; // 0x0384 (0x0004)
    uint8_t ActivatableAbilities[0xC0]; // 0x0388 (0x00C0)
    uint8_t Pad_2[0x50]; // 0x0448 (0x0050)
    struct TArray<uint8_t> AllReplicatedInstancedAbilities; // 0x0498 (0x0010)
    uint8_t Pad_3[0x3D8]; // 0x04A8 (0x03D8)
    struct TArray<uint8_t> SpawnedTargetActors; // 0x0880 (0x0010)
    uint8_t RepAnimMontageInfo[0x30]; // 0x0890 (0x0030)
    uint8_t LocalAnimMontageInfo[0x30]; // 0x08C0 (0x0030)
    uint8_t Pad_4[0xA0]; // 0x08F0 (0x00A0)
    class UObject* OwnerActor; // 0x0990 (0x0008)
    class UObject* AvatarActor; // 0x0998 (0x0008)
    uint8_t Pad_5[0x10]; // 0x09A0 (0x0010)
    uint8_t ActiveGameplayEffects[0x430]; // 0x09B0 (0x0430)
    uint8_t ActiveGameplayCues[0xC0]; // 0x0DE0 (0x00C0)
    uint8_t Pad_6[0x180]; // 0x0EA0 (0x0180)
    struct TArray<uint8_t> BlockedAbilityBindings; // 0x1020 (0x0010)

public:
    bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
    bool TryActivateAbilitiesByTag(uint8_t GameplayTagContainer, bool bAllowRemoteActivation);
    void TargetConfirm();
    void TargetCancel();
    void SetUserAbilityActivationInhibited(bool NewInhibit);
    void SetActiveGameplayEffectLevel(uint8_t ActiveHandle, int32_t NewLevel);
    void ServerTryActivateAbilityWithEventData(uint8_t AbilityToActivate, bool InputPressed, uint8_t PredictionKey, uint8_t TriggerEventData);
    void ServerTryActivateAbility(uint8_t AbilityToActivate, bool InputPressed, uint8_t PredictionKey);
    void ServerSetReplicatedTargetDataCancelled(uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t CurrentPredictionKey);
    void ServerSetReplicatedTargetData(uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t ReplicatedTargetDataHandle, uint8_t ApplicationTag, uint8_t CurrentPredictionKey);
    void ServerSetReplicatedEventWithPayload(uint8_t eventType, uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t CurrentPredictionKey, uint8_t VectorPayload);
    void ServerSetReplicatedEvent(uint8_t eventType, uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t CurrentPredictionKey);
    void ServerSetInputReleased(uint8_t AbilityHandle);
    void ServerSetInputPressed(uint8_t AbilityHandle);
    void ServerPrintDebug_Request();
    void ServerEndAbility(uint8_t AbilityToEnd, uint8_t ActivationInfo, uint8_t PredictionKey);
    void ServerCurrentMontageSetNextSectionName(class UObject* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName);
    void ServerCurrentMontageJumpToSectionName(class UObject* ClientAnimMontage, struct FName SectionName);
    void ServerCancelAbility(uint8_t AbilityToCancel, uint8_t ActivationInfo);
    void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UObject* InstigatorAbilitySystemComponent, int32_t StacksToRemove);
    bool RemoveActiveGameplayEffect(uint8_t Handle, int32_t StacksToRemove);
    void RemoveActiveEffectsWithTags(uint8_t Tags);
    void RemoveActiveEffectsWithSourceTags(uint8_t Tags);
    void RemoveActiveEffectsWithGrantedTags(uint8_t Tags);
    void RemoveActiveEffectsWithAppliedTags(uint8_t Tags);
    void OnRep_ReplicatedAnimMontage();
    void OnRep_PredictionKey();
    void OnRep_OwningActor();
    void OnRep_GameplayEffects();
    void OnRep_ActivateAbilities();
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(uint8_t GameplayCueTag, uint8_t PredictionKey, uint8_t GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(uint8_t Spec, uint8_t PredictionKey);
    void NetMulticast_InvokeGameplayCueExecuted(uint8_t GameplayCueTag, uint8_t PredictionKey, uint8_t EffectContext);
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(uint8_t Spec, uint8_t PredictionKey);
    void NetMulticast_InvokeGameplayCueAdded(uint8_t GameplayCueTag, uint8_t PredictionKey, uint8_t EffectContext);
    uint8_t MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, uint8_t Context);
    void K2_InitStats(class UClass* Attributes, class UObject* DataTable);
    uint8_t K2_ApplyGameplayEffectToTarget(class UObject* GameplayEffect, class UObject* Target, float Level, uint8_t Context);
    uint8_t K2_ApplyGameplayEffectToSelf(class UObject* GameplayEffect, float Level, uint8_t EffectContext);
    bool IsGameplayCueActive(uint8_t GameplayCueTag);
    bool GetUserAbilityActivationInhibited();
    uint8_t GetOutgoingSpec(class UObject* GameplayEffect, float Level);
    float GetGameplayEffectMagnitude(uint8_t Handle, uint8_t Attribute);
    int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UObject* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
    uint8_t GetEffectContext();
    void ClientTryActivateAbility(uint8_t AbilityToActivate);
    void ClientSetReplicatedEvent(uint8_t eventType, uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey);
    void ClientPrintDebug_Response(struct TArray<uint8_t> Strings);
    void ClientEndAbility(uint8_t AbilityToEnd, uint8_t ActivationInfo);
    void ClientCancelAbility(uint8_t AbilityToCancel, uint8_t ActivationInfo);
    void ClientActivateAbilitySucceedWithEventData(uint8_t AbilityToActivate, uint8_t PredictionKey, uint8_t TriggerEventData);
    void ClientActivateAbilitySucceed(uint8_t AbilityToActivate, uint8_t PredictionKey);
    void ClientActivateAbilityFailed(uint8_t AbilityToActivate, uint8_t PredictionKey);
    uint8_t BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UObject* Target, float Level, uint8_t Context);
    uint8_t BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, uint8_t EffectContext);
    uint8_t BP_ApplyGameplayEffectSpecToTarget(uint8_t SpecHandle, class UObject* Target);
    uint8_t BP_ApplyGameplayEffectSpecToSelf(uint8_t SpecHandle);
    void AbilityConfirmOrCancel__DelegateSignature();
    void AbilityAbilityKey__DelegateSignature(int32_t InputID);
};

// Class: GameplayAbilities.AttributeSet
class AttributeSet : public Object {
public:
};

// Class: GameplayAbilities.AbilitiesGameplayDebuggerObject
class AbilitiesGameplayDebuggerObject : public GameplayDebuggerBaseObject {
public:
    uint8_t Pad_0[0x60]; // 0x0028 (0x0060)
    struct FString AbilityInfo; // 0x0088 (0x0010)
    bool bIsUsingAbilities; // 0x0098 (0x0001)
};

// Class: GameplayAbilities.GameplayEffectCalculation
class GameplayEffectCalculation : public Object {
public:
    struct TArray<uint8_t> RelevantAttributesToCapture; // 0x0028 (0x0010)
};

// Class: GameplayAbilities.GameplayEffect
class GameplayEffect : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t DurationPolicy; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    uint8_t DurationMagnitude[0x160]; // 0x0038 (0x0160)
    uint8_t Period[0x20]; // 0x0198 (0x0020)
    bool bExecutePeriodicEffectOnApplication; // 0x01B8 (0x0001)
    uint8_t Pad_2[0x7]; // 0x01B9 (0x0007)
    struct TArray<uint8_t> Modifiers; // 0x01C0 (0x0010)
    struct TArray<uint8_t> Executions; // 0x01D0 (0x0010)
    uint8_t ChanceToApplyToTarget[0x20]; // 0x01E0 (0x0020)
    struct TArray<uint8_t> TargetEffectClasses; // 0x0200 (0x0010)
    struct TArray<uint8_t> TargetEffects; // 0x0210 (0x0010)
    struct TArray<uint8_t> OverflowEffects; // 0x0220 (0x0010)
    bool bDenyOverflowApplication; // 0x0230 (0x0001)
    bool bClearStackOnOverflow; // 0x0231 (0x0001)
    uint8_t Pad_3[0x6]; // 0x0232 (0x0006)
    struct TArray<uint8_t> PrematureExpirationEffectClasses; // 0x0238 (0x0010)
    struct TArray<uint8_t> RoutineExpirationEffectClasses; // 0x0248 (0x0010)
    bool bRequireModifierSuccessToTriggerCues; // 0x0258 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0259 (0x0007)
    struct TArray<uint8_t> GameplayCues; // 0x0260 (0x0010)
    class UObject* UIData; // 0x0270 (0x0008)
    uint8_t InheritableGameplayEffectTags[0x60]; // 0x0278 (0x0060)
    uint8_t GameplayEffectTags[0x20]; // 0x02D8 (0x0020)
    uint8_t InheritableOwnedTagsContainer[0x60]; // 0x02F8 (0x0060)
    uint8_t OwnedTagsContainer[0x20]; // 0x0358 (0x0020)
    uint8_t OngoingTagRequirements[0x40]; // 0x0378 (0x0040)
    uint8_t ApplicationTagRequirements[0x40]; // 0x03B8 (0x0040)
    uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x03F8 (0x0060)
    uint8_t ClearTagsContainer[0x20]; // 0x0458 (0x0020)
    uint8_t GrantedApplicationImmunityTags[0x40]; // 0x0478 (0x0040)
    uint8_t StackingType; // 0x04B8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x04B9 (0x0003)
    int32_t StackLimitCount; // 0x04BC (0x0004)
    uint8_t StackDurationRefreshPolicy; // 0x04C0 (0x0001)
    uint8_t StackPeriodResetPolicy; // 0x04C1 (0x0001)
    uint8_t StackExpirationPolicy; // 0x04C2 (0x0001)
    uint8_t Pad_6[0x5]; // 0x04C3 (0x0005)
    struct TArray<uint8_t> GrantedAbilities; // 0x04C8 (0x0010)
};

// Class: GameplayAbilities.GameplayAbility
class GameplayAbility : public Object {
public:
    uint8_t Pad_0[0x158]; // 0x0028 (0x0158)
    uint8_t AbilityTags[0x20]; // 0x0180 (0x0020)
    uint8_t Pad_1[0x70]; // 0x01A0 (0x0070)
    bool bReplicateInputDirectly; // 0x0210 (0x0001)
    uint8_t Pad_2[0x28]; // 0x0211 (0x0028)
    uint8_t ReplicationPolicy; // 0x0239 (0x0001)
    uint8_t InstancingPolicy; // 0x023A (0x0001)
    bool bServerRespectsRemoteAbilityCancellation; // 0x023B (0x0001)
    bool bRetriggerInstancedAbility; // 0x023C (0x0001)
    uint8_t Pad_3[0x3]; // 0x023D (0x0003)
    uint8_t CurrentActivationInfo[0x20]; // 0x0240 (0x0020)
    uint8_t CurrentEventData[0x88]; // 0x0260 (0x0088)
    uint8_t NetExecutionPolicy; // 0x02E8 (0x0001)
    uint8_t Pad_4[0x7]; // 0x02E9 (0x0007)
    class UClass* CostGameplayEffectClass; // 0x02F0 (0x0008)
    class UObject* CostGameplayEffect; // 0x02F8 (0x0008)
    struct TArray<uint8_t> AbilityTriggers; // 0x0300 (0x0010)
    class UClass* CooldownGameplayEffectClass; // 0x0310 (0x0008)
    class UObject* CooldownGameplayEffect; // 0x0318 (0x0008)
    uint8_t CancelAbilitiesMatchingTagQuery[0x48]; // 0x0320 (0x0048)
    uint8_t ConstTagQuery[0x48]; // 0x0368 (0x0048)
    uint8_t CancelAbilitiesWithTag[0x20]; // 0x03B0 (0x0020)
    uint8_t BlockAbilitiesWithTag[0x20]; // 0x03D0 (0x0020)
    uint8_t ActivationOwnedTags[0x20]; // 0x03F0 (0x0020)
    uint8_t ActivationRequiredTags[0x20]; // 0x0410 (0x0020)
    uint8_t ActivationBlockedTags[0x20]; // 0x0430 (0x0020)
    uint8_t SourceRequiredTags[0x20]; // 0x0450 (0x0020)
    uint8_t SourceBlockedTags[0x20]; // 0x0470 (0x0020)
    uint8_t TargetRequiredTags[0x20]; // 0x0490 (0x0020)
    uint8_t TargetBlockedTags[0x20]; // 0x04B0 (0x0020)
    struct TArray<uint8_t> ActiveTasks; // 0x04D0 (0x0010)
    uint8_t Pad_5[0x70]; // 0x04E0 (0x0070)
    class UObject* CurrentMontage; // 0x0550 (0x0008)
    bool bIsActive; // 0x0558 (0x0001)
    bool bIsCancelable; // 0x0559 (0x0001)
    bool bIsBlockingOtherAbilities; // 0x055A (0x0001)

public:
    void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
    void SetCanBeCanceled(bool bCanBeCanceled);
    void SendGameplayEvent(uint8_t EventTag, uint8_t Payload);
    void RemoveGrantedByEffect();
    void MontageStop(float OverrideBlendOutTime);
    void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName);
    void MontageJumpToSection(struct FName SectionName);
    uint8_t MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName);
    uint8_t MakeTargetLocationInfoFromOwnerActor();
    uint8_t MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
    bool K2_ShouldAbilityRespondToEvent(uint8_t actorInfo, uint8_t Payload);
    void K2_RemoveGameplayCue(uint8_t GameplayCueTag);
    void K2_OnEndAbility();
    void K2_ExecuteGameplayCueWithParams(uint8_t GameplayCueTag, uint8_t GameplayCueParameters);
    void K2_ExecuteGameplayCue(uint8_t GameplayCueTag, uint8_t Context);
    void K2_EndAbility();
    void K2_CommitExecute();
    bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
    bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
    bool K2_CommitAbility();
    bool K2_CheckAbilityCost();
    bool K2_CheckAbilityCooldown();
    bool K2_CanActivateAbility(uint8_t actorInfo, uint8_t RelevantTags);
    struct TArray<uint8_t> K2_ApplyGameplayEffectToTarget(uint8_t TargetData, class UObject* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks);
    uint8_t K2_ApplyGameplayEffectToOwner(class UObject* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks);
    struct TArray<uint8_t> K2_ApplyGameplayEffectSpecToTarget(uint8_t EffectSpecHandle, uint8_t TargetData);
    uint8_t K2_ApplyGameplayEffectSpecToOwner(uint8_t EffectSpecHandle);
    void K2_AddGameplayCue(uint8_t GameplayCueTag, uint8_t Context, bool bRemoveOnAbilityEnd);
    void K2_ActivateAbilityFromEvent(uint8_t EventData);
    void K2_ActivateAbility();
    class UObject* GetOwningComponentFromActorInfo();
    class UObject* GetOwningActorFromActorInfo();
    uint8_t GetOutgoingGameplayEffectSpec(class UObject* GameplayEffect, float Level);
    uint8_t GetGrantedByEffectContext();
    class UObject* GetCurrentSourceObject();
    class UObject* GetCurrentMontage();
    float GetCooldownTimeRemaining();
    uint8_t GetContextFromOwner(uint8_t OptionalTargetData);
    class UObject* GetAvatarActorFromActorInfo();
    uint8_t GetActorInfo();
    int32_t GetAbilityLevel();
    void EndTaskByInstanceName(struct FName InstanceName);
    void EndAbilityState(struct FName OptionalStateNameToEnd);
    void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask);
    void CancelTaskByInstanceName(struct FName InstanceName);
    void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(uint8_t WithGrantedTags, int32_t StacksToRemove);
    void BP_RemoveGameplayEffectFromOwnerWithAssetTags(uint8_t WithAssetTags, int32_t StacksToRemove);
    struct TArray<uint8_t> BP_ApplyGameplayEffectToTarget(uint8_t TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
    uint8_t BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
};

// Class: GameplayAbilities.GameplayCueInterface
class GameplayCueInterface : public Interface {
public:

public:
    void ForwardGameplayCueToParent();
    void BlueprintCustomHandler(uint8_t eventType, uint8_t Parameters);
};

// Class: GameplayAbilities.AbilitySystemBlueprintLibrary
class AbilitySystemBlueprintLibrary : public BlueprintFunctionLibrary {
public:

public:
    bool TargetDataHasOrigin(uint8_t TargetData, int32_t Index);
    bool TargetDataHasHitResult(uint8_t HitResult, int32_t Index);
    bool TargetDataHasEndPoint(uint8_t TargetData, int32_t Index);
    bool TargetDataHasActor(uint8_t TargetData, int32_t Index);
    uint8_t SetStackCountToMax(uint8_t SpecHandle);
    uint8_t SetStackCount(uint8_t SpecHandle, int32_t StackCount);
    uint8_t SetDuration(uint8_t SpecHandle, float Duration);
    void SendGameplayEventToActor(class UObject* Actor, uint8_t EventTag, uint8_t Payload);
    uint8_t MakeSpecHandle(class UObject* InGameplayEffect, class UObject* InInstigator, class UObject* InEffectCauser, float InLevel);
    uint8_t MakeFilterHandle(uint8_t Filter, class UObject* FilterActor);
    bool IsInstigatorLocallyControlledPlayer(uint8_t Parameters);
    bool IsInstigatorLocallyControlled(uint8_t Parameters);
    bool HasHitResult(uint8_t Parameters);
    uint8_t GetTargetDataOrigin(uint8_t TargetData, int32_t Index);
    uint8_t GetTargetDataEndPointTransform(uint8_t TargetData, int32_t Index);
    uint8_t GetTargetDataEndPoint(uint8_t TargetData, int32_t Index);
    uint8_t GetOrigin(uint8_t Parameters);
    float GetModifiedAttributeMagnitude(uint8_t SpecHandle, uint8_t Attribute);
    uint8_t GetInstigatorTransform(uint8_t Parameters);
    class UObject* GetInstigatorActor(uint8_t Parameters);
    uint8_t GetHitResultFromTargetData(uint8_t HitResult, int32_t Index);
    uint8_t GetHitResult(uint8_t Parameters);
    bool GetGameplayCueEndLocationAndNormal(class UObject* TargetActor, uint8_t Parameters, uint8_t Location, uint8_t Normal);
    bool GetGameplayCueDirection(class UObject* TargetActor, uint8_t Parameters, uint8_t Direction);
    float GetFloatAttributeFromAbilitySystemComponent(class UObject* AbilitySystem, uint8_t Attribute, bool bSuccessfullyFoundAttribute);
    float GetFloatAttribute(class UObject* Actor, uint8_t Attribute, bool bSuccessfullyFoundAttribute);
    int32_t GetDataCountFromTargetData(uint8_t TargetData);
    struct TArray<uint8_t> GetActorsFromTargetData(uint8_t TargetData, int32_t Index);
    int32_t GetActorCount(uint8_t Parameters);
    class UObject* GetActorByIndex(uint8_t Parameters, int32_t Index);
    int32_t GetActiveGameplayEffectStackLimitCount(uint8_t ActiveHandle);
    int32_t GetActiveGameplayEffectStackCount(uint8_t ActiveHandle);
    struct FString GetActiveGameplayEffectDebugString(uint8_t ActiveHandle);
    class UObject* GetAbilitySystemComponent(class UObject* Actor);
    void ForwardGameplayCueToTarget(uint8_t TargetCueInterface, uint8_t eventType, uint8_t Parameters);
    uint8_t FilterTargetData(uint8_t TargetDataHandle, uint8_t ActorFilterClass);
    bool EffectContextIsValid(uint8_t EffectContext);
    bool EffectContextIsInstigatorLocallyControlled(uint8_t EffectContext);
    bool EffectContextHasHitResult(uint8_t EffectContext);
    class UObject* EffectContextGetSourceObject(uint8_t EffectContext);
    class UObject* EffectContextGetOriginalInstigatorActor(uint8_t EffectContext);
    uint8_t EffectContextGetOrigin(uint8_t EffectContext);
    class UObject* EffectContextGetInstigatorActor(uint8_t EffectContext);
    uint8_t EffectContextGetHitResult(uint8_t EffectContext);
    class UObject* EffectContextGetEffectCauser(uint8_t EffectContext);
    bool DoesTargetDataContainActor(uint8_t TargetData, int32_t Index, class UObject* Actor);
    bool DoesGameplayCueMeetTagRequirements(uint8_t Parameters, uint8_t SourceTagReqs, uint8_t TargetTagReqs);
    uint8_t AssignSetByCallerMagnitude(uint8_t SpecHandle, struct FName DataName, float Magnitude);
    uint8_t AppendTargetDataHandle(uint8_t TargetHandle, uint8_t HandleToAdd);
    uint8_t AddLinkedGameplayEffectSpec(uint8_t SpecHandle, uint8_t LinkedGameplayEffectSpec);
    uint8_t AddGrantedTags(uint8_t SpecHandle, uint8_t NewGameplayTags);
    uint8_t AddGrantedTag(uint8_t SpecHandle, uint8_t NewGameplayTag);
    uint8_t AddAssetTags(uint8_t SpecHandle, uint8_t NewGameplayTags);
    uint8_t AddAssetTag(uint8_t SpecHandle, uint8_t NewGameplayTag);
    uint8_t AbilityTargetDataFromLocations(uint8_t SourceLocation, uint8_t TargetLocation);
    uint8_t AbilityTargetDataFromHitResult(uint8_t HitResult);
    uint8_t AbilityTargetDataFromActorArray(struct TArray<uint8_t> ActorArray, bool OneTargetPerHandle);
    uint8_t AbilityTargetDataFromActor(class UObject* Actor);
};

// Class: GameplayAbilities.AbilitySystemDebugHUD
class AbilitySystemDebugHUD : public HUD {
public:
};

// Class: GameplayAbilities.AbilitySystemGlobals
class AbilitySystemGlobals : public Object {
public:
    uint8_t AbilitySystemGlobalsClassName[0x10]; // 0x0028 (0x0010)
    uint8_t Pad_0[0x88]; // 0x0038 (0x0088)
    uint8_t ActivateFailCooldownTag[0x8]; // 0x00C0 (0x0008)
    struct FName ActivateFailCooldownName; // 0x00C8 (0x0008)
    uint8_t ActivateFailCostTag[0x8]; // 0x00D0 (0x0008)
    struct FName ActivateFailCostName; // 0x00D8 (0x0008)
    uint8_t ActivateFailTagsBlockedTag[0x8]; // 0x00E0 (0x0008)
    struct FName ActivateFailTagsBlockedName; // 0x00E8 (0x0008)
    uint8_t ActivateFailTagsMissingTag[0x8]; // 0x00F0 (0x0008)
    struct FName ActivateFailTagsMissingName; // 0x00F8 (0x0008)
    uint8_t ActivateFailNetworkingTag[0x8]; // 0x0100 (0x0008)
    struct FName ActivateFailNetworkingName; // 0x0108 (0x0008)
    struct FString GlobalCurveTableName; // 0x0110 (0x0010)
    struct FString GlobalAttributeMetaDataTableName; // 0x0120 (0x0010)
    struct FString GlobalAttributeSetDefaultsTableName; // 0x0130 (0x0010)
    uint8_t GlobalGameplayCueManagerName[0x10]; // 0x0140 (0x0010)
    struct TArray<uint8_t> GameplayCueNotifyPaths; // 0x0150 (0x0010)
    uint8_t GameplayTagResponseTableName[0x10]; // 0x0160 (0x0010)
    class UObject* GameplayTagResponseTable; // 0x0170 (0x0008)
    bool PredictTargetGameplayEffects; // 0x0178 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0179 (0x0007)
    class UObject* GlobalCurveTable; // 0x0180 (0x0008)
    class UObject* GlobalAttributeDefaultsTable; // 0x0188 (0x0008)
    class UObject* GlobalAttributeMetaDataTable; // 0x0190 (0x0008)
    class UObject* GlobalGameplayCueManager; // 0x0198 (0x0008)

public:
    void ToggleIgnoreAbilitySystemCosts();
    void ToggleIgnoreAbilitySystemCooldowns();
};

// Class: GameplayAbilities.AbilitySystemInterface
class AbilitySystemInterface : public Interface {
public:
};

// Class: GameplayAbilities.AbilitySystemTestPawn
class AbilitySystemTestPawn : public DefaultPawn {
public:
    uint8_t Pad_0[0x3C8]; // 0x0028 (0x03C8)
    class UObject* AbilitySystemComponent; // 0x03F0 (0x0008)
};

// Class: GameplayAbilities.AbilityTask
class AbilityTask : public GameplayTask {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    class UObject* Ability; // 0x0058 (0x0008)
    class UObject* AbilitySystemComponent; // 0x0060 (0x0008)
};

// Class: GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
class AbilityTask_ApplyRootMotionConstantForce : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnFinish[0x10]; // 0x0070 (0x0010)
    struct FName ForceName; // 0x0080 (0x0008)
    uint8_t WorldDirection[0xC]; // 0x0088 (0x000C)
    float Strength; // 0x0094 (0x0004)
    float Duration; // 0x0098 (0x0004)
    bool bIsAdditive; // 0x009C (0x0001)
    bool bDisableImpartingVelocityOnRemoval; // 0x009D (0x0001)
    uint8_t Pad_1[0x12]; // 0x009E (0x0012)
    class UObject* MovementComponent; // 0x00B0 (0x0008)

public:
    class UObject* ApplyRootMotionConstantForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t WorldDirection, float Strength, float Duration, bool bIsAdditive, bool bDisableImpartingVelocityOnRemoval);
};

// Class: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
class AbilityTask_ApplyRootMotionJumpForce : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnFinish[0x10]; // 0x0070 (0x0010)
    uint8_t OnLanded[0x10]; // 0x0080 (0x0010)
    struct FName ForceName; // 0x0090 (0x0008)
    uint8_t Rotation[0xC]; // 0x0098 (0x000C)
    float Distance; // 0x00A4 (0x0004)
    float Height; // 0x00A8 (0x0004)
    float Duration; // 0x00AC (0x0004)
    float MinimumLandedTriggerTime; // 0x00B0 (0x0004)
    bool bFinishOnLanded; // 0x00B4 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00B5 (0x0003)
    class UObject* PathOffsetCurve; // 0x00B8 (0x0008)
    class UObject* TimeMappingCurve; // 0x00C0 (0x0008)
    uint8_t Pad_2[0x10]; // 0x00C8 (0x0010)
    class UObject* MovementComponent; // 0x00D8 (0x0008)

public:
    void OnLandedCallback(uint8_t Hit);
    void Finish();
    class UObject* ApplyRootMotionJumpForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UObject* PathOffsetCurve, class UObject* TimeMappingCurve);
};

// Class: GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
class AbilityTask_ApplyRootMotionMoveToForce : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnTimedOut[0x10]; // 0x0070 (0x0010)
    uint8_t OnTimedOutAndDestinationReached[0x10]; // 0x0080 (0x0010)
    struct FName ForceName; // 0x0090 (0x0008)
    uint8_t StartLocation[0xC]; // 0x0098 (0x000C)
    uint8_t TargetLocation[0xC]; // 0x00A4 (0x000C)
    float Duration; // 0x00B0 (0x0004)
    bool bSetNewMovementMode; // 0x00B4 (0x0001)
    uint8_t NewMovementMode; // 0x00B5 (0x0001)
    bool bRestrictSpeedToExpected; // 0x00B6 (0x0001)
    uint8_t Pad_1[0x1]; // 0x00B7 (0x0001)
    class UObject* PathOffsetCurve; // 0x00B8 (0x0008)
    uint8_t Pad_2[0x18]; // 0x00C0 (0x0018)
    class UObject* MovementComponent; // 0x00D8 (0x0008)

public:
    class UObject* ApplyRootMotionMoveToForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t TargetLocation, float Duration, bool bSetNewMovementMode, uint8_t MovementMode, bool bRestrictSpeedToExpected, class UObject* PathOffsetCurve);
};

// Class: GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
class AbilityTask_ApplyRootMotionRadialForce : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnFinish[0x10]; // 0x0070 (0x0010)
    struct FName ForceName; // 0x0080 (0x0008)
    uint8_t Location[0xC]; // 0x0088 (0x000C)
    uint8_t Pad_1[0x4]; // 0x0094 (0x0004)
    class UObject* LocationActor; // 0x0098 (0x0008)
    float Strength; // 0x00A0 (0x0004)
    float Duration; // 0x00A4 (0x0004)
    float Radius; // 0x00A8 (0x0004)
    bool bIsPush; // 0x00AC (0x0001)
    bool bIsAdditive; // 0x00AD (0x0001)
    bool bNoZForce; // 0x00AE (0x0001)
    uint8_t Pad_2[0x1]; // 0x00AF (0x0001)
    class UObject* StrengthDistanceFalloff; // 0x00B0 (0x0008)
    class UObject* StrengthOverTime; // 0x00B8 (0x0008)
    uint8_t Pad_3[0x10]; // 0x00C0 (0x0010)
    class UObject* MovementComponent; // 0x00D0 (0x0008)

public:
    class UObject* ApplyRootMotionRadialForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t Location, class UObject* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UObject* StrengthDistanceFalloff, class UObject* StrengthOverTime);
};

// Class: GameplayAbilities.AbilityTask_MoveToLocation
class AbilityTask_MoveToLocation : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnTargetLocationReached[0x10]; // 0x0070 (0x0010)
    uint8_t Pad_1[0x4]; // 0x0080 (0x0004)
    uint8_t StartLocation[0xC]; // 0x0084 (0x000C)
    uint8_t TargetLocation[0xC]; // 0x0090 (0x000C)
    float DurationOfMovement; // 0x009C (0x0004)
    uint8_t Pad_2[0x8]; // 0x00A0 (0x0008)
    class UObject* LerpCurve; // 0x00A8 (0x0008)
    class UObject* LerpCurveVector; // 0x00B0 (0x0008)

public:
    class UObject* MoveToLocation(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t Location, float Duration, class UObject* OptionalInterpolationCurve, class UObject* OptionalVectorInterpolationCurve);
};

// Class: GameplayAbilities.AbilityTask_NetworkSyncPoint
class AbilityTask_NetworkSyncPoint : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnSync[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitNetSync(class UObject* WorldContextObject, uint8_t SyncType);
    void OnSignalCallback();
};

// Class: GameplayAbilities.AbilityTask_PlayMontageAndWait
class AbilityTask_PlayMontageAndWait : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnComplete[0x10]; // 0x0070 (0x0010)
    uint8_t OnInterrupted[0x10]; // 0x0080 (0x0010)
    uint8_t OnCancelled[0x10]; // 0x0090 (0x0010)

public:
    void OnMontageInterrupted();
    void OnMontageBlendingOut(class UObject* Montage, bool bInterrupted);
    class UObject* CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, struct FName TaskInstanceName, class UObject* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds);
};

// Class: GameplayAbilities.AbilityTask_Repeat
class AbilityTask_Repeat : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnPerformAction[0x10]; // 0x0070 (0x0010)
    uint8_t OnFinished[0x10]; // 0x0080 (0x0010)

public:
    class UObject* RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int32_t TotalActionCount);
};

// Class: GameplayAbilities.AbilityTask_SpawnActor
class AbilityTask_SpawnActor : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Success[0x10]; // 0x0070 (0x0010)
    uint8_t DidNotSpawn[0x10]; // 0x0080 (0x0010)

public:
    class UObject* SpawnActor(class UObject* WorldContextObject, uint8_t TargetData, class UClass* Class);
    void FinishSpawningActor(class UObject* WorldContextObject, uint8_t TargetData, class UObject* SpawnedActor);
    bool BeginSpawningActor(class UObject* WorldContextObject, uint8_t TargetData, class UClass* Class, class UObject* SpawnedActor);
};

// Class: GameplayAbilities.AbilityTask_StartAbilityState
class AbilityTask_StartAbilityState : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnStateEnded[0x10]; // 0x0070 (0x0010)
    uint8_t OnStateInterrupted[0x10]; // 0x0080 (0x0010)

public:
    class UObject* StartAbilityState(class UObject* WorldContextObject, struct FName StateName, bool bEndCurrentState);
};

// Class: GameplayAbilities.AbilityTask_VisualizeTargeting
class AbilityTask_VisualizeTargeting : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t TimeElapsed[0x10]; // 0x0070 (0x0010)

public:
    class UObject* VisualizeTargetingUsingActor(class UObject* WorldContextObject, class UObject* TargetActor, struct FName TaskInstanceName, float Duration);
    class UObject* VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, struct FName TaskInstanceName, float Duration);
    void FinishSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor);
    bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class UObject* SpawnedActor);
};

// Class: GameplayAbilities.AbilityTask_WaitAbilityActivate
class AbilityTask_WaitAbilityActivate : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnActivate[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitForAbilityActivate(class UObject* WorldContextObject, uint8_t WithTag, uint8_t WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
    void OnAbilityActivate(class UObject* ActivatedAbility);
};

// Class: GameplayAbilities.AbilityTask_WaitAbilityCommit
class AbilityTask_WaitAbilityCommit : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnCommit[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitForAbilityCommit(class UObject* WorldContextObject, uint8_t WithTag, uint8_t WithoutTage, bool TriggerOnce);
    void OnAbilityCommit(class UObject* ActivatedAbility);
};

// Class: GameplayAbilities.AbilityTask_WaitAttributeChange
class AbilityTask_WaitAttributeChange : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnChange[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, uint8_t InAttribute, uint8_t InWithTag, uint8_t InWithoutTag, uint8_t InComparisonType, float InComparisonValue, bool TriggerOnce);
    class UObject* WaitForAttributeChange(class UObject* WorldContextObject, uint8_t Attribute, uint8_t WithSrcTag, uint8_t WithoutSrcTag, bool TriggerOnce);
};

// Class: GameplayAbilities.AbilityTask_WaitCancel
class AbilityTask_WaitCancel : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnCancel[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitCancel(class UObject* WorldContextObject);
    void OnLocalCancelCallback();
    void OnCancelCallback();
};

// Class: GameplayAbilities.AbilityTask_WaitConfirm
class AbilityTask_WaitConfirm : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnConfirm[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitConfirm(class UObject* WorldContextObject);
    void OnConfirmCallback(class UObject* InAbility);
};

// Class: GameplayAbilities.AbilityTask_WaitConfirmCancel
class AbilityTask_WaitConfirmCancel : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnConfirm[0x10]; // 0x0070 (0x0010)
    uint8_t OnCancel[0x10]; // 0x0080 (0x0010)

public:
    class UObject* WaitConfirmCancel(class UObject* WorldContextObject);
    void OnLocalConfirmCallback();
    void OnLocalCancelCallback();
    void OnConfirmCallback();
    void OnCancelCallback();
};

// Class: GameplayAbilities.AbilityTask_WaitDelay
class AbilityTask_WaitDelay : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnFinish[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitDelay(class UObject* WorldContextObject, float Time);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
class AbilityTask_WaitGameplayEffectApplied : public AbilityTask {
public:
    uint8_t Pad_0[0xE0]; // 0x0028 (0x00E0)
    class UObject* ExternalOwner; // 0x0108 (0x0008)

public:
    void OnApplyGameplayEffectCallback(class UObject* Target, uint8_t SpecApplied, uint8_t ActiveHandle);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
class AbilityTask_WaitGameplayEffectApplied_Self : public AbilityTask_WaitGameplayEffectApplied {
public:
    uint8_t Pad_0[0xE8]; // 0x0028 (0x00E8)
    uint8_t OnApplied[0x10]; // 0x0110 (0x0010)

public:
    class UObject* WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, uint8_t SourceFilter, uint8_t SourceTagRequirements, uint8_t TargetTagRequirements, bool TriggerOnce, class UObject* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
class AbilityTask_WaitGameplayEffectApplied_Target : public AbilityTask_WaitGameplayEffectApplied {
public:
    uint8_t Pad_0[0xE8]; // 0x0028 (0x00E8)
    uint8_t OnApplied[0x10]; // 0x0110 (0x0010)

public:
    class UObject* WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, uint8_t TargetFilter, uint8_t SourceTagRequirements, uint8_t TargetTagRequirements, bool TriggerOnce, class UObject* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
class AbilityTask_WaitGameplayEffectRemoved : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnRemoved[0x10]; // 0x0070 (0x0010)
    uint8_t InvalidHandle[0x10]; // 0x0080 (0x0010)

public:
    class UObject* WaitForGameplayEffectRemoved(class UObject* WorldContextObject, uint8_t Handle);
    void OnGameplayEffectRemoved();
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
class AbilityTask_WaitGameplayEffectStackChange : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnChange[0x10]; // 0x0070 (0x0010)
    uint8_t InvalidHandle[0x10]; // 0x0080 (0x0010)

public:
    class UObject* WaitForGameplayEffectStackChange(class UObject* WorldContextObject, uint8_t Handle);
    void OnGameplayEffectStackChange(uint8_t Handle, int32_t NewCount, int32_t OldCount);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayEvent
class AbilityTask_WaitGameplayEvent : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t EventReceived[0x10]; // 0x0070 (0x0010)
    uint8_t Pad_1[0x8]; // 0x0080 (0x0008)
    class UObject* OptionalExternalTarget; // 0x0088 (0x0008)

public:
    class UObject* WaitGameplayEvent(class UObject* WorldContextObject, uint8_t EventTag, class UObject* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayTag
class AbilityTask_WaitGameplayTag : public AbilityTask {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    class UObject* OptionalExternalTarget; // 0x0080 (0x0008)

public:
    void GameplayTagCallback(uint8_t Tag, int32_t NewCount);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayTagAdded
class AbilityTask_WaitGameplayTagAdded : public AbilityTask_WaitGameplayTag {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    uint8_t Added[0x10]; // 0x0098 (0x0010)

public:
    class UObject* WaitGameplayTagAdd(class UObject* WorldContextObject, uint8_t Tag, class UObject* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class: GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
class AbilityTask_WaitGameplayTagRemoved : public AbilityTask_WaitGameplayTag {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    uint8_t Removed[0x10]; // 0x0098 (0x0010)

public:
    class UObject* WaitGameplayTagRemove(class UObject* WorldContextObject, uint8_t Tag, class UObject* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class: GameplayAbilities.AbilityTask_WaitInputPress
class AbilityTask_WaitInputPress : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnPress[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed);
    void OnPressCallback();
};

// Class: GameplayAbilities.AbilityTask_WaitInputRelease
class AbilityTask_WaitInputRelease : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnRelease[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased);
    void OnReleaseCallback();
};

// Class: GameplayAbilities.AbilityTask_WaitMovementModeChange
class AbilityTask_WaitMovementModeChange : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnChange[0x10]; // 0x0070 (0x0010)

public:
    void OnMovementModeChange(class UObject* Character, uint8_t PrevMovementMode, uint8_t PreviousCustomMode);
    class UObject* CreateWaitMovementModeChange(class UObject* WorldContextObject, uint8_t NewMode);
};

// Class: GameplayAbilities.AbilityTask_WaitOverlap
class AbilityTask_WaitOverlap : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnOverlap[0x10]; // 0x0070 (0x0010)

public:
    class UObject* WaitForOverlap(class UObject* WorldContextObject);
    void OnOverlapCallback(class UObject* OtherActor, class UObject* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, uint8_t SweepResult);
    void OnHitCallback(class UObject* OtherActor, class UObject* OtherComp, uint8_t NormalImpulse, uint8_t Hit);
};

// Class: GameplayAbilities.AbilityTask_WaitTargetData
class AbilityTask_WaitTargetData : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t ValidData[0x10]; // 0x0070 (0x0010)
    uint8_t Cancelled[0x10]; // 0x0080 (0x0010)
    uint8_t Pad_1[0x8]; // 0x0090 (0x0008)
    class UObject* TargetActor; // 0x0098 (0x0008)

public:
    class UObject* WaitTargetDataUsingActor(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t ConfirmationType, class UObject* TargetActor);
    class UObject* WaitTargetData(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t ConfirmationType, class UClass* Class);
    void OnTargetDataReplicatedCancelledCallback();
    void OnTargetDataReplicatedCallback(uint8_t Data, uint8_t ActivationTag);
    void OnTargetDataReadyCallback(uint8_t Data);
    void OnTargetDataCancelledCallback(uint8_t Data);
    void FinishSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor);
    bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class UObject* SpawnedActor);
};

// Class: GameplayAbilities.AbilityTask_WaitVelocityChange
class AbilityTask_WaitVelocityChange : public AbilityTask {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t OnVelocityChage[0x10]; // 0x0070 (0x0010)
    class UObject* CachedMovementComponent; // 0x0080 (0x0008)

public:
    class UObject* CreateWaitVelocityChange(class UObject* WorldContextObject, uint8_t Direction, float MinimumMagnitude);
};

// Class: GameplayAbilities.AbilitySystemTestAttributeSet
class AbilitySystemTestAttributeSet : public AttributeSet {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    float MaxHealth; // 0x0030 (0x0004)
    float Health; // 0x0034 (0x0004)
    float Mana; // 0x0038 (0x0004)
    float MaxMana; // 0x003C (0x0004)
    float Damage; // 0x0040 (0x0004)
    float SpellDamage; // 0x0044 (0x0004)
    float PhysicalDamage; // 0x0048 (0x0004)
    float CritChance; // 0x004C (0x0004)
    float CritMultiplier; // 0x0050 (0x0004)
    float ArmorDamageReduction; // 0x0054 (0x0004)
    float DodgeChance; // 0x0058 (0x0004)
    float LifeSteal; // 0x005C (0x0004)
    float Strength; // 0x0060 (0x0004)
    float StackingAttribute1; // 0x0064 (0x0004)
    float StackingAttribute2; // 0x0068 (0x0004)
    float NoStackAttribute; // 0x006C (0x0004)
};

// Class: GameplayAbilities.GameplayAbility_CharacterJump
class GameplayAbility_CharacterJump : public GameplayAbility {
public:
};

// Class: GameplayAbilities.GameplayAbility_Montage
class GameplayAbility_Montage : public GameplayAbility {
public:
    uint8_t Pad_0[0x538]; // 0x0028 (0x0538)
    class UObject* MontageToPlay; // 0x0560 (0x0008)
    float PlayRate; // 0x0568 (0x0004)
    uint8_t Pad_1[0x4]; // 0x056C (0x0004)
    struct FName SectionName; // 0x0570 (0x0008)
    struct TArray<uint8_t> GameplayEffectClassesWhileAnimating; // 0x0578 (0x0010)
    struct TArray<uint8_t> GameplayEffectsWhileAnimating; // 0x0588 (0x0010)
};

// Class: GameplayAbilities.GameplayAbilityBlueprint
class GameplayAbilityBlueprint : public Blueprint {
public:
};

// Class: GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
class GameplayAbilityBlueprintGeneratedClass : public BlueprintGeneratedClass {
public:
};

// Class: GameplayAbilities.GameplayAbilitySet
class GameplayAbilitySet : public DataAsset {
public:
    struct TArray<uint8_t> Abilities; // 0x0028 (0x0010)
};

// Class: GameplayAbilities.GameplayAbilityWorldReticle
class GameplayAbilityWorldReticle : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    uint8_t Parameters[0xC]; // 0x0348 (0x000C)
    bool bFaceOwnerFlat; // 0x0354 (0x0001)
    bool bSnapToTargetedActor; // 0x0355 (0x0001)
    bool bIsTargetValid; // 0x0356 (0x0001)
    bool bIsTargetAnActor; // 0x0357 (0x0001)
    class UObject* MasterPC; // 0x0358 (0x0008)
    class UObject* TargetingActor; // 0x0360 (0x0008)

public:
    void SetReticleMaterialParamVector(struct FName ParamName, uint8_t Value);
    void SetReticleMaterialParamFloat(struct FName ParamName, float Value);
    void OnValidTargetChanged(bool bNewValue);
    void OnTargetingAnActor(bool bNewValue);
    void OnParametersInitialized();
    void FaceTowardSource(bool bFaceIn2D);
};

// Class: GameplayAbilities.GameplayAbilityTargetActor
class GameplayAbilityTargetActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    bool ShouldProduceTargetDataOnServer; // 0x0348 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0349 (0x0007)
    uint8_t StartLocation[0x70]; // 0x0350 (0x0070)
    uint8_t Pad_2[0xE0]; // 0x03C0 (0x00E0)
    class UObject* MasterPC; // 0x04A0 (0x0008)
    class UObject* OwningAbility; // 0x04A8 (0x0008)
    bool bDestroyOnConfirmation; // 0x04B0 (0x0001)
    uint8_t Pad_3[0x7]; // 0x04B1 (0x0007)
    class UObject* SourceActor; // 0x04B8 (0x0008)
    uint8_t ReticleParams[0xC]; // 0x04C0 (0x000C)
    uint8_t Pad_4[0x4]; // 0x04CC (0x0004)
    class UClass* ReticleClass; // 0x04D0 (0x0008)
    uint8_t Filter[0x10]; // 0x04D8 (0x0010)
    bool bDebug; // 0x04E8 (0x0001)
    uint8_t Pad_5[0x17]; // 0x04E9 (0x0017)
    class UObject* GenericDelegateBoundASC; // 0x0500 (0x0008)

public:
    void ConfirmTargeting();
    void CancelTargeting();
};

// Class: GameplayAbilities.GameplayAbilityTargetActor_Radius
class GameplayAbilityTargetActor_Radius : public GameplayAbilityTargetActor {
public:
    uint8_t Pad_0[0x4E0]; // 0x0028 (0x04E0)
    float Radius; // 0x0508 (0x0004)
};

// Class: GameplayAbilities.GameplayAbilityTargetActor_Trace
class GameplayAbilityTargetActor_Trace : public GameplayAbilityTargetActor {
public:
    uint8_t Pad_0[0x4E0]; // 0x0028 (0x04E0)
    float MaxRange; // 0x0508 (0x0004)
    uint8_t Pad_1[0x4]; // 0x050C (0x0004)
    uint8_t TraceProfile[0x8]; // 0x0510 (0x0008)
    bool bTraceAffectsAimPitch; // 0x0518 (0x0001)
};

// Class: GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
class GameplayAbilityTargetActor_GroundTrace : public GameplayAbilityTargetActor_Trace {
public:
    uint8_t Pad_0[0x500]; // 0x0028 (0x0500)
    float CollisionRadius; // 0x0528 (0x0004)
    float CollisionHeight; // 0x052C (0x0004)
};

// Class: GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
class GameplayAbilityWorldReticle_ActorVisualization : public GameplayAbilityWorldReticle {
public:
    uint8_t Pad_0[0x340]; // 0x0028 (0x0340)
    class UObject* CollisionComponent; // 0x0368 (0x0008)
    struct TArray<uint8_t> VisualizationComponents; // 0x0370 (0x0010)
};

// Class: GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
class GameplayAbilityTargetActor_ActorPlacement : public GameplayAbilityTargetActor_GroundTrace {
public:
    uint8_t Pad_0[0x520]; // 0x0028 (0x0520)
    class UClass* PlacedActorClass; // 0x0548 (0x0008)
    class UObject* PlacedActorMaterial; // 0x0550 (0x0008)
};

// Class: GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
class GameplayAbilityTargetActor_SingleLineTrace : public GameplayAbilityTargetActor_Trace {
public:
};

// Class: GameplayAbilities.GameplayCueNotify_Actor
class GameplayCueNotify_Actor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    uint8_t GameplayCueTag[0x8]; // 0x0348 (0x0008)
    struct FName GameplayCueName; // 0x0350 (0x0008)
    bool bAutoDestroyOnRemove; // 0x0358 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0359 (0x0003)
    float AutoDestroyDelay; // 0x035C (0x0004)
    bool IsOverride; // 0x0360 (0x0001)
    bool bUniqueInstancePerInstigator; // 0x0361 (0x0001)
    bool bUniqueInstancePerSourceObject; // 0x0362 (0x0001)
    uint8_t Pad_2[0x1]; // 0x0363 (0x0001)
    int32_t NumPreallocatedInstances; // 0x0364 (0x0004)

public:
    bool WhileActive(class UObject* MyTarget, uint8_t Parameters);
    bool OnRemove(class UObject* MyTarget, uint8_t Parameters);
    void OnOwnerDestroyed();
    bool OnExecute(class UObject* MyTarget, uint8_t Parameters);
    bool OnActive(class UObject* MyTarget, uint8_t Parameters);
    void K2_HandleGameplayCue(class UObject* MyTarget, uint8_t eventType, uint8_t Parameters);
};

// Class: GameplayAbilities.GameplayCueManager
class GameplayCueManager : public DataAsset {
public:
    class UObject* GlobalCueSet; // 0x0028 (0x0008)
    class UObject* GameplayCueNotifyActorObjectLibrary; // 0x0030 (0x0008)
    class UObject* GameplayCueNotifyStaticObjectLibrary; // 0x0038 (0x0008)
    uint8_t StreamableManager[0xA0]; // 0x0040 (0x00A0)
    uint8_t Pad_0[0x50]; // 0x00E0 (0x0050)
    struct TArray<uint8_t> LoadedGameplayCueNotifyClasses; // 0x0130 (0x0010)
    struct TArray<uint8_t> GameplayCueClassesForPreallocation; // 0x0140 (0x0010)
    uint8_t Pad_1[0x10]; // 0x0150 (0x0010)
    struct TArray<uint8_t> PendingExecuteCues; // 0x0160 (0x0010)
    int32_t GameplayCueSendContextCount; // 0x0170 (0x0004)
    uint8_t Pad_2[0xC]; // 0x0174 (0x000C)
    struct TArray<uint8_t> PreallocationInfoList_Internal; // 0x0180 (0x0010)
    uint8_t PreallocationInfo_Internal[0x68]; // 0x0190 (0x0068)
};

// Class: GameplayAbilities.GameplayCueNotify_Static
class GameplayCueNotify_Static : public Object {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0028 (0x0008)
    struct FName GameplayCueName; // 0x0030 (0x0008)
    bool IsOverride; // 0x0038 (0x0001)

public:
    bool WhileActive(class UObject* MyTarget, uint8_t Parameters);
    bool OnRemove(class UObject* MyTarget, uint8_t Parameters);
    bool OnExecute(class UObject* MyTarget, uint8_t Parameters);
    bool OnActive(class UObject* MyTarget, uint8_t Parameters);
    void K2_HandleGameplayCue(class UObject* MyTarget, uint8_t eventType, uint8_t Parameters);
};

// Class: GameplayAbilities.GameplayCueNotify_HitImpact
class GameplayCueNotify_HitImpact : public GameplayCueNotify_Static {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    class UObject* Sound; // 0x0040 (0x0008)
    class UObject* ParticleSystem; // 0x0048 (0x0008)
};

// Class: GameplayAbilities.GameplayCueSet
class GameplayCueSet : public DataAsset {
public:
    struct TArray<uint8_t> GameplayCueData; // 0x0028 (0x0010)
};

// Class: GameplayAbilities.GameplayEffectTemplate
class GameplayEffectTemplate : public GameplayEffect {
public:
};

// Class: GameplayAbilities.GameplayEffectExecutionCalculation
class GameplayEffectExecutionCalculation : public GameplayEffectCalculation {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bRequiresPassedInTags; // 0x0038 (0x0001)

public:
    void Execute(uint8_t ExecutionParams, uint8_t OutExecutionOutput);
};

// Class: GameplayAbilities.GameplayModMagnitudeCalculation
class GameplayModMagnitudeCalculation : public GameplayEffectCalculation {
public:

public:
    float CalculateBaseMagnitude(uint8_t Spec);
};

// Class: GameplayAbilities.GameplayEffectExtension
class GameplayEffectExtension : public Object {
public:
    struct TArray<uint8_t> RelevantSourceAttributes; // 0x0028 (0x0010)
    struct TArray<uint8_t> RelevantTargetAttributes; // 0x0038 (0x0010)
};

// Class: GameplayAbilities.GameplayEffectExtension_LifestealTest
class GameplayEffectExtension_LifestealTest : public GameplayEffectExtension {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    class UObject* HealthRestoreGameplayEffect; // 0x0048 (0x0008)
};

// Class: GameplayAbilities.GameplayEffectExtension_ShieldTest
class GameplayEffectExtension_ShieldTest : public GameplayEffectExtension {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    class UObject* ShieldRemoveGameplayEffect; // 0x0048 (0x0008)
};

// Class: GameplayAbilities.GameplayEffectUIData
class GameplayEffectUIData : public Object {
public:
};

// Class: GameplayAbilities.GameplayEffectUIData_TextOnly
class GameplayEffectUIData_TextOnly : public GameplayEffectUIData {
public:
    struct FText Description; // 0x0028 (0x0018)
};

// Class: GameplayAbilities.GameplayTagReponseTable
class GameplayTagReponseTable : public DataAsset {
public:
    struct TArray<uint8_t> Entries; // 0x0028 (0x0010)

public:
    void TagResponseEvent(uint8_t Tag, int32_t NewCount, class UObject* ASC, int32_t idx);
};

// Class: GameplayAbilities.TickableAttributeSetInterface
class TickableAttributeSetInterface : public Interface {
public:
};

// Class: GameplayAbilities.Default__GameplayAbilityBlueprintGeneratedClass
class Default__GameplayAbilityBlueprintGeneratedClass : public UObject {
public:
};

} // namespace SDK

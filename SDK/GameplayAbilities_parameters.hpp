#pragma once
#include "Basic.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK {

// Function: GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// Size: 0x000A
struct AbilitySystemComponent_TryActivateAbilityByClass_Params {
public:
    class UClass* InAbilityToActivate; // 0x0000 (0x0008)
    bool bAllowRemoteActivation; // 0x0008 (0x0001)
    bool ReturnValue; // 0x0009 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// Size: 0x0022
struct AbilitySystemComponent_TryActivateAbilitiesByTag_Params {
public:
    uint8_t GameplayTagContainer[0x20]; // 0x0000 (0x0020)
    bool bAllowRemoteActivation; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemComponent.TargetConfirm
// Size: 0x0000
struct AbilitySystemComponent_TargetConfirm_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.TargetCancel
// Size: 0x0000
struct AbilitySystemComponent_TargetCancel_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// Size: 0x0001
struct AbilitySystemComponent_SetUserAbilityActivationInhibited_Params {
public:
    bool NewInhibit; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// Size: 0x0008
struct AbilitySystemComponent_SetActiveGameplayEffectLevel_Params {
public:
    uint8_t ActiveHandle[0x4]; // 0x0000 (0x0004)
    int32_t NewLevel; // 0x0004 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// Size: 0x00A8
struct AbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params {
public:
    uint8_t AbilityToActivate[0x4]; // 0x0000 (0x0004)
    bool InputPressed; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t TriggerEventData[0x88]; // 0x0020 (0x0088)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// Size: 0x0020
struct AbilitySystemComponent_ServerTryActivateAbility_Params {
public:
    uint8_t AbilityToActivate[0x4]; // 0x0000 (0x0004)
    bool InputPressed; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// Size: 0x0038
struct AbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params {
public:
    uint8_t AbilityHandle[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t AbilityOriginalPredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t CurrentPredictionKey[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// Size: 0x0060
struct AbilitySystemComponent_ServerSetReplicatedTargetData_Params {
public:
    uint8_t AbilityHandle[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t AbilityOriginalPredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t ReplicatedTargetDataHandle[0x20]; // 0x0020 (0x0020)
    uint8_t ApplicationTag[0x8]; // 0x0040 (0x0008)
    uint8_t CurrentPredictionKey[0x18]; // 0x0048 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// Size: 0x0044
struct AbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params {
public:
    uint8_t eventType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t AbilityHandle[0x4]; // 0x0004 (0x0004)
    uint8_t AbilityOriginalPredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t CurrentPredictionKey[0x18]; // 0x0020 (0x0018)
    uint8_t VectorPayload[0xC]; // 0x0038 (0x000C)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// Size: 0x0038
struct AbilitySystemComponent_ServerSetReplicatedEvent_Params {
public:
    uint8_t eventType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t AbilityHandle[0x4]; // 0x0004 (0x0004)
    uint8_t AbilityOriginalPredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t CurrentPredictionKey[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// Size: 0x0004
struct AbilitySystemComponent_ServerSetInputReleased_Params {
public:
    uint8_t AbilityHandle[0x4]; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// Size: 0x0004
struct AbilitySystemComponent_ServerSetInputPressed_Params {
public:
    uint8_t AbilityHandle[0x4]; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// Size: 0x0000
struct AbilitySystemComponent_ServerPrintDebug_Request_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// Size: 0x0040
struct AbilitySystemComponent_ServerEndAbility_Params {
public:
    uint8_t AbilityToEnd[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ActivationInfo[0x20]; // 0x0008 (0x0020)
    uint8_t PredictionKey[0x18]; // 0x0028 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// Size: 0x0020
struct AbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params {
public:
    class UObject* ClientAnimMontage; // 0x0000 (0x0008)
    float ClientPosition; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName SectionName; // 0x0010 (0x0008)
    struct FName NextSectionName; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// Size: 0x0010
struct AbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params {
public:
    class UObject* ClientAnimMontage; // 0x0000 (0x0008)
    struct FName SectionName; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// Size: 0x0028
struct AbilitySystemComponent_ServerCancelAbility_Params {
public:
    uint8_t AbilityToCancel[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ActivationInfo[0x20]; // 0x0008 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// Size: 0x0014
struct AbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params {
public:
    class UClass* GameplayEffect; // 0x0000 (0x0008)
    class UObject* InstigatorAbilitySystemComponent; // 0x0008 (0x0008)
    int32_t StacksToRemove; // 0x0010 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// Size: 0x0009
struct AbilitySystemComponent_RemoveActiveGameplayEffect_Params {
public:
    uint8_t Handle[0x4]; // 0x0000 (0x0004)
    int32_t StacksToRemove; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// Size: 0x0020
struct AbilitySystemComponent_RemoveActiveEffectsWithTags_Params {
public:
    uint8_t Tags[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// Size: 0x0020
struct AbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params {
public:
    uint8_t Tags[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// Size: 0x0020
struct AbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params {
public:
    uint8_t Tags[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// Size: 0x0020
struct AbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params {
public:
    uint8_t Tags[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// Size: 0x0000
struct AbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
// Size: 0x0000
struct AbilitySystemComponent_OnRep_PredictionKey_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// Size: 0x0000
struct AbilitySystemComponent_OnRep_OwningActor_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
// Size: 0x0000
struct AbilitySystemComponent_OnRep_GameplayEffects_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// Size: 0x0000
struct AbilitySystemComponent_OnRep_ActivateAbilities_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// Size: 0x00C0
struct AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t GameplayCueParameters[0xA0]; // 0x0020 (0x00A0)
};

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// Size: 0x0090
struct AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params {
public:
    uint8_t Spec[0x78]; // 0x0000 (0x0078)
    uint8_t PredictionKey[0x18]; // 0x0078 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// Size: 0x0038
struct AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t EffectContext[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// Size: 0x0090
struct AbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params {
public:
    uint8_t Spec[0x78]; // 0x0000 (0x0078)
    uint8_t PredictionKey[0x18]; // 0x0078 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// Size: 0x0038
struct AbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t EffectContext[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// Size: 0x0040
struct AbilitySystemComponent_MakeOutgoingSpec_Params {
public:
    class UClass* GameplayEffectClass; // 0x0000 (0x0008)
    float Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t Context[0x18]; // 0x0010 (0x0018)
    uint8_t ReturnValue[0x18]; // 0x0028 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.K2_InitStats
// Size: 0x0010
struct AbilitySystemComponent_K2_InitStats_Params {
public:
    class UClass* Attributes; // 0x0000 (0x0008)
    class UObject* DataTable; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
// Size: 0x0034
struct AbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params {
public:
    class UObject* GameplayEffect; // 0x0000 (0x0008)
    class UObject* Target; // 0x0008 (0x0008)
    float Level; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    uint8_t Context[0x18]; // 0x0018 (0x0018)
    uint8_t ReturnValue[0x4]; // 0x0030 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
// Size: 0x002C
struct AbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params {
public:
    class UObject* GameplayEffect; // 0x0000 (0x0008)
    float Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t EffectContext[0x18]; // 0x0010 (0x0018)
    uint8_t ReturnValue[0x4]; // 0x0028 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// Size: 0x0009
struct AbilitySystemComponent_IsGameplayCueActive_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// Size: 0x0001
struct AbilitySystemComponent_GetUserAbilityActivationInhibited_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
// Size: 0x0028
struct AbilitySystemComponent_GetOutgoingSpec_Params {
public:
    class UObject* GameplayEffect; // 0x0000 (0x0008)
    float Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0010 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// Size: 0x0014
struct AbilitySystemComponent_GetGameplayEffectMagnitude_Params {
public:
    uint8_t Handle[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t Attribute[0x8]; // 0x0008 (0x0008)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// Size: 0x0018
struct AbilitySystemComponent_GetGameplayEffectCount_Params {
public:
    class UClass* SourceGameplayEffect; // 0x0000 (0x0008)
    class UObject* OptionalInstigatorFilterComponent; // 0x0008 (0x0008)
    bool bEnforceOnGoingCheck; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    int32_t ReturnValue; // 0x0014 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.GetEffectContext
// Size: 0x0018
struct AbilitySystemComponent_GetEffectContext_Params {
public:
    uint8_t ReturnValue[0x18]; // 0x0000 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// Size: 0x0004
struct AbilitySystemComponent_ClientTryActivateAbility_Params {
public:
    uint8_t AbilityToActivate[0x4]; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// Size: 0x0020
struct AbilitySystemComponent_ClientSetReplicatedEvent_Params {
public:
    uint8_t eventType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t AbilityHandle[0x4]; // 0x0004 (0x0004)
    uint8_t AbilityOriginalPredictionKey[0x18]; // 0x0008 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// Size: 0x0010
struct AbilitySystemComponent_ClientPrintDebug_Response_Params {
public:
    struct TArray<uint8_t> Strings; // 0x0000 (0x0010)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// Size: 0x0028
struct AbilitySystemComponent_ClientEndAbility_Params {
public:
    uint8_t AbilityToEnd[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ActivationInfo[0x20]; // 0x0008 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// Size: 0x0028
struct AbilitySystemComponent_ClientCancelAbility_Params {
public:
    uint8_t AbilityToCancel[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ActivationInfo[0x20]; // 0x0008 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// Size: 0x00A8
struct AbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params {
public:
    uint8_t AbilityToActivate[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
    uint8_t TriggerEventData[0x88]; // 0x0020 (0x0088)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// Size: 0x0020
struct AbilitySystemComponent_ClientActivateAbilitySucceed_Params {
public:
    uint8_t AbilityToActivate[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t PredictionKey[0x18]; // 0x0008 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// Size: 0x0006
struct AbilitySystemComponent_ClientActivateAbilityFailed_Params {
public:
    uint8_t AbilityToActivate[0x4]; // 0x0000 (0x0004)
    uint8_t PredictionKey[0x2]; // 0x0004 (0x0002)
};

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// Size: 0x0034
struct AbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params {
public:
    class UClass* GameplayEffectClass; // 0x0000 (0x0008)
    class UObject* Target; // 0x0008 (0x0008)
    float Level; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    uint8_t Context[0x18]; // 0x0018 (0x0018)
    uint8_t ReturnValue[0x4]; // 0x0030 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// Size: 0x002C
struct AbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params {
public:
    class UClass* GameplayEffectClass; // 0x0000 (0x0008)
    float Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t EffectContext[0x18]; // 0x0010 (0x0018)
    uint8_t ReturnValue[0x4]; // 0x0028 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// Size: 0x0024
struct AbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    class UObject* Target; // 0x0018 (0x0008)
    uint8_t ReturnValue[0x4]; // 0x0020 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// Size: 0x001C
struct AbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0x4]; // 0x0018 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// Size: 0x0000
struct AbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// Size: 0x0004
struct AbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params {
public:
    int32_t InputID; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// Size: 0x0001
struct GameplayAbility_SetShouldBlockOtherAbilities_Params {
public:
    bool bShouldBlockAbilities; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.SetCanBeCanceled
// Size: 0x0001
struct GameplayAbility_SetCanBeCanceled_Params {
public:
    bool bCanBeCanceled; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.SendGameplayEvent
// Size: 0x0090
struct GameplayAbility_SendGameplayEvent_Params {
public:
    uint8_t EventTag[0x8]; // 0x0000 (0x0008)
    uint8_t Payload[0x88]; // 0x0008 (0x0088)
};

// Function: GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// Size: 0x0000
struct GameplayAbility_RemoveGrantedByEffect_Params {
public:
};

// Function: GameplayAbilities.GameplayAbility.MontageStop
// Size: 0x0004
struct GameplayAbility_MontageStop_Params {
public:
    float OverrideBlendOutTime; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// Size: 0x0010
struct GameplayAbility_MontageSetNextSectionName_Params {
public:
    struct FName FromSectionName; // 0x0000 (0x0008)
    struct FName ToSectionName; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.MontageJumpToSection
// Size: 0x0008
struct GameplayAbility_MontageJumpToSection_Params {
public:
    struct FName SectionName; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// Size: 0x0080
struct GameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params {
public:
    struct FName SocketName; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x70]; // 0x0010 (0x0070)
};

// Function: GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// Size: 0x0070
struct GameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params {
public:
    uint8_t ReturnValue[0x70]; // 0x0000 (0x0070)
};

// Function: GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// Size: 0x0028
struct GameplayAbility_MakeOutgoingGameplayEffectSpec_Params {
public:
    class UClass* GameplayEffectClass; // 0x0000 (0x0008)
    float Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0010 (0x0018)
};

// Function: GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// Size: 0x00C1
struct GameplayAbility_K2_ShouldAbilityRespondToEvent_Params {
public:
    uint8_t actorInfo[0x38]; // 0x0000 (0x0038)
    uint8_t Payload[0x88]; // 0x0038 (0x0088)
    bool ReturnValue; // 0x00C0 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// Size: 0x0008
struct GameplayAbility_K2_RemoveGameplayCue_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.K2_OnEndAbility
// Size: 0x0000
struct GameplayAbility_K2_OnEndAbility_Params {
public:
};

// Function: GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// Size: 0x00A8
struct GameplayAbility_K2_ExecuteGameplayCueWithParams_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t GameplayCueParameters[0xA0]; // 0x0008 (0x00A0)
};

// Function: GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// Size: 0x0020
struct GameplayAbility_K2_ExecuteGameplayCue_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t Context[0x18]; // 0x0008 (0x0018)
};

// Function: GameplayAbilities.GameplayAbility.K2_EndAbility
// Size: 0x0000
struct GameplayAbility_K2_EndAbility_Params {
public:
};

// Function: GameplayAbilities.GameplayAbility.K2_CommitExecute
// Size: 0x0000
struct GameplayAbility_K2_CommitExecute_Params {
public:
};

// Function: GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// Size: 0x0002
struct GameplayAbility_K2_CommitAbilityCost_Params {
public:
    bool BroadcastCommitEvent; // 0x0000 (0x0001)
    bool ReturnValue; // 0x0001 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// Size: 0x0003
struct GameplayAbility_K2_CommitAbilityCooldown_Params {
public:
    bool BroadcastCommitEvent; // 0x0000 (0x0001)
    bool ForceCooldown; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_CommitAbility
// Size: 0x0001
struct GameplayAbility_K2_CommitAbility_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// Size: 0x0001
struct GameplayAbility_K2_CheckAbilityCost_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// Size: 0x0001
struct GameplayAbility_K2_CheckAbilityCooldown_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// Size: 0x0059
struct GameplayAbility_K2_CanActivateAbility_Params {
public:
    uint8_t actorInfo[0x38]; // 0x0000 (0x0038)
    uint8_t RelevantTags[0x20]; // 0x0038 (0x0020)
    bool ReturnValue; // 0x0058 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
// Size: 0x0040
struct GameplayAbility_K2_ApplyGameplayEffectToTarget_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    class UObject* GameplayEffect; // 0x0020 (0x0008)
    int32_t GameplayEffectLevel; // 0x0028 (0x0004)
    int32_t Stacks; // 0x002C (0x0004)
    struct TArray<uint8_t> ReturnValue; // 0x0030 (0x0010)
};

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
// Size: 0x0014
struct GameplayAbility_K2_ApplyGameplayEffectToOwner_Params {
public:
    class UObject* GameplayEffect; // 0x0000 (0x0008)
    int32_t GameplayEffectLevel; // 0x0008 (0x0004)
    int32_t Stacks; // 0x000C (0x0004)
    uint8_t ReturnValue[0x4]; // 0x0010 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// Size: 0x0048
struct GameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params {
public:
    uint8_t EffectSpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t TargetData[0x20]; // 0x0018 (0x0020)
    struct TArray<uint8_t> ReturnValue; // 0x0038 (0x0010)
};

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// Size: 0x001C
struct GameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params {
public:
    uint8_t EffectSpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0x4]; // 0x0018 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// Size: 0x0021
struct GameplayAbility_K2_AddGameplayCue_Params {
public:
    uint8_t GameplayCueTag[0x8]; // 0x0000 (0x0008)
    uint8_t Context[0x18]; // 0x0008 (0x0018)
    bool bRemoveOnAbilityEnd; // 0x0020 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// Size: 0x0088
struct GameplayAbility_K2_ActivateAbilityFromEvent_Params {
public:
    uint8_t EventData[0x88]; // 0x0000 (0x0088)
};

// Function: GameplayAbilities.GameplayAbility.K2_ActivateAbility
// Size: 0x0000
struct GameplayAbility_K2_ActivateAbility_Params {
public:
};

// Function: GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// Size: 0x0008
struct GameplayAbility_GetOwningComponentFromActorInfo_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// Size: 0x0008
struct GameplayAbility_GetOwningActorFromActorInfo_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
// Size: 0x0028
struct GameplayAbility_GetOutgoingGameplayEffectSpec_Params {
public:
    class UObject* GameplayEffect; // 0x0000 (0x0008)
    float Level; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0010 (0x0018)
};

// Function: GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// Size: 0x0018
struct GameplayAbility_GetGrantedByEffectContext_Params {
public:
    uint8_t ReturnValue[0x18]; // 0x0000 (0x0018)
};

// Function: GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// Size: 0x0008
struct GameplayAbility_GetCurrentSourceObject_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.GetCurrentMontage
// Size: 0x0008
struct GameplayAbility_GetCurrentMontage_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
// Size: 0x0004
struct GameplayAbility_GetCooldownTimeRemaining_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.GetContextFromOwner
// Size: 0x0038
struct GameplayAbility_GetContextFromOwner_Params {
public:
    uint8_t OptionalTargetData[0x20]; // 0x0000 (0x0020)
    uint8_t ReturnValue[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// Size: 0x0008
struct GameplayAbility_GetAvatarActorFromActorInfo_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.GetActorInfo
// Size: 0x0038
struct GameplayAbility_GetActorInfo_Params {
public:
    uint8_t ReturnValue[0x38]; // 0x0000 (0x0038)
};

// Function: GameplayAbilities.GameplayAbility.GetAbilityLevel
// Size: 0x0004
struct GameplayAbility_GetAbilityLevel_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// Size: 0x0008
struct GameplayAbility_EndTaskByInstanceName_Params {
public:
    struct FName InstanceName; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.EndAbilityState
// Size: 0x0008
struct GameplayAbility_EndAbilityState_Params {
public:
    struct FName OptionalStateNameToEnd; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// Size: 0x0009
struct GameplayAbility_ConfirmTaskByInstanceName_Params {
public:
    struct FName InstanceName; // 0x0000 (0x0008)
    bool bEndTask; // 0x0008 (0x0001)
};

// Function: GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// Size: 0x0008
struct GameplayAbility_CancelTaskByInstanceName_Params {
public:
    struct FName InstanceName; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// Size: 0x0024
struct GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params {
public:
    uint8_t WithGrantedTags[0x20]; // 0x0000 (0x0020)
    int32_t StacksToRemove; // 0x0020 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// Size: 0x0024
struct GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params {
public:
    uint8_t WithAssetTags[0x20]; // 0x0000 (0x0020)
    int32_t StacksToRemove; // 0x0020 (0x0004)
};

// Function: GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// Size: 0x0040
struct GameplayAbility_BP_ApplyGameplayEffectToTarget_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    class UClass* GameplayEffectClass; // 0x0020 (0x0008)
    int32_t GameplayEffectLevel; // 0x0028 (0x0004)
    int32_t Stacks; // 0x002C (0x0004)
    struct TArray<uint8_t> ReturnValue; // 0x0030 (0x0010)
};

// Function: GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// Size: 0x0014
struct GameplayAbility_BP_ApplyGameplayEffectToOwner_Params {
public:
    class UClass* GameplayEffectClass; // 0x0000 (0x0008)
    int32_t GameplayEffectLevel; // 0x0008 (0x0004)
    int32_t Stacks; // 0x000C (0x0004)
    uint8_t ReturnValue[0x4]; // 0x0010 (0x0004)
};

// Function: GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// Size: 0x0000
struct GameplayCueInterface_ForwardGameplayCueToParent_Params {
public:
};

// Function: GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// Size: 0x00A8
struct GameplayCueInterface_BlueprintCustomHandler_Params {
public:
    uint8_t eventType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// Size: 0x0025
struct AbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    bool ReturnValue; // 0x0024 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// Size: 0x0025
struct AbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params {
public:
    uint8_t HitResult[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    bool ReturnValue; // 0x0024 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// Size: 0x0025
struct AbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    bool ReturnValue; // 0x0024 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// Size: 0x0025
struct AbilitySystemBlueprintLibrary_TargetDataHasActor_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    bool ReturnValue; // 0x0024 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// Size: 0x0030
struct AbilitySystemBlueprintLibrary_SetStackCountToMax_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0x18]; // 0x0018 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_SetStackCount_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    int32_t StackCount; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_SetDuration_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    float Duration; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// Size: 0x0098
struct AbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t EventTag[0x8]; // 0x0008 (0x0008)
    uint8_t Payload[0x88]; // 0x0010 (0x0088)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_MakeSpecHandle_Params {
public:
    class UObject* InGameplayEffect; // 0x0000 (0x0008)
    class UObject* InInstigator; // 0x0008 (0x0008)
    class UObject* InEffectCauser; // 0x0010 (0x0008)
    float InLevel; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// Size: 0x0040
struct AbilitySystemBlueprintLibrary_MakeFilterHandle_Params {
public:
    uint8_t Filter[0x28]; // 0x0000 (0x0028)
    class UObject* FilterActor; // 0x0028 (0x0008)
    uint8_t ReturnValue[0x10]; // 0x0030 (0x0010)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// Size: 0x00A1
struct AbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    bool ReturnValue; // 0x00A0 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// Size: 0x00A1
struct AbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    bool ReturnValue; // 0x00A0 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// Size: 0x00A1
struct AbilitySystemBlueprintLibrary_HasHitResult_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    bool ReturnValue; // 0x00A0 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// Size: 0x0060
struct AbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0024 (0x000C)
    uint8_t ReturnValue[0x30]; // 0x0030 (0x0030)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// Size: 0x0060
struct AbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0024 (0x000C)
    uint8_t ReturnValue[0x30]; // 0x0030 (0x0030)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// Size: 0x0030
struct AbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0024 (0x000C)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// Size: 0x00AC
struct AbilitySystemBlueprintLibrary_GetOrigin_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    uint8_t ReturnValue[0xC]; // 0x00A0 (0x000C)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// Size: 0x0024
struct AbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t Attribute[0x8]; // 0x0018 (0x0008)
    float ReturnValue; // 0x0020 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// Size: 0x00D0
struct AbilitySystemBlueprintLibrary_GetInstigatorTransform_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    uint8_t ReturnValue[0x30]; // 0x00A0 (0x0030)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// Size: 0x00A8
struct AbilitySystemBlueprintLibrary_GetInstigatorActor_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    class UObject* ReturnValue; // 0x00A0 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// Size: 0x00B0
struct AbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params {
public:
    uint8_t HitResult[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    uint8_t ReturnValue[0x88]; // 0x0028 (0x0088)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// Size: 0x0128
struct AbilitySystemBlueprintLibrary_GetHitResult_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    uint8_t ReturnValue[0x88]; // 0x00A0 (0x0088)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// Size: 0x00C1
struct AbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params {
public:
    class UObject* TargetActor; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    uint8_t Location[0xC]; // 0x00A8 (0x000C)
    uint8_t Normal[0xC]; // 0x00B4 (0x000C)
    bool ReturnValue; // 0x00C0 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// Size: 0x00B5
struct AbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params {
public:
    class UObject* TargetActor; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    uint8_t Direction[0xC]; // 0x00A8 (0x000C)
    bool ReturnValue; // 0x00B4 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// Size: 0x0018
struct AbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params {
public:
    class UObject* AbilitySystem; // 0x0000 (0x0008)
    uint8_t Attribute[0x8]; // 0x0008 (0x0008)
    bool bSuccessfullyFoundAttribute; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float ReturnValue; // 0x0014 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// Size: 0x0018
struct AbilitySystemBlueprintLibrary_GetFloatAttribute_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t Attribute[0x8]; // 0x0008 (0x0008)
    bool bSuccessfullyFoundAttribute; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float ReturnValue; // 0x0014 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// Size: 0x0024
struct AbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t ReturnValue; // 0x0020 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> ReturnValue; // 0x0028 (0x0010)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// Size: 0x00A4
struct AbilitySystemBlueprintLibrary_GetActorCount_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    int32_t ReturnValue; // 0x00A0 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// Size: 0x00B0
struct AbilitySystemBlueprintLibrary_GetActorByIndex_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    int32_t Index; // 0x00A0 (0x0004)
    uint8_t Pad_0[0x4]; // 0x00A4 (0x0004)
    class UObject* ReturnValue; // 0x00A8 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// Size: 0x0008
struct AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params {
public:
    uint8_t ActiveHandle[0x4]; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// Size: 0x0008
struct AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params {
public:
    uint8_t ActiveHandle[0x4]; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// Size: 0x0018
struct AbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params {
public:
    uint8_t ActiveHandle[0x4]; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// Size: 0x0010
struct AbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// Size: 0x00B8
struct AbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params {
public:
    uint8_t TargetCueInterface[0x10]; // 0x0000 (0x0010)
    uint8_t eventType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    uint8_t Parameters[0xA0]; // 0x0018 (0x00A0)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// Size: 0x0050
struct AbilitySystemBlueprintLibrary_FilterTargetData_Params {
public:
    uint8_t TargetDataHandle[0x20]; // 0x0000 (0x0020)
    uint8_t ActorFilterClass[0x10]; // 0x0020 (0x0010)
    uint8_t ReturnValue[0x20]; // 0x0030 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// Size: 0x0019
struct AbilitySystemBlueprintLibrary_EffectContextIsValid_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// Size: 0x0019
struct AbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// Size: 0x0019
struct AbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// Size: 0x0020
struct AbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// Size: 0x0020
struct AbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// Size: 0x0024
struct AbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// Size: 0x0020
struct AbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// Size: 0x00A0
struct AbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0x88]; // 0x0018 (0x0088)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// Size: 0x0020
struct AbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params {
public:
    uint8_t EffectContext[0x18]; // 0x0000 (0x0018)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// Size: 0x0031
struct AbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params {
public:
    uint8_t TargetData[0x20]; // 0x0000 (0x0020)
    int32_t Index; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    class UObject* Actor; // 0x0028 (0x0008)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// Size: 0x0121
struct AbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params {
public:
    uint8_t Parameters[0xA0]; // 0x0000 (0x00A0)
    uint8_t SourceTagReqs[0x40]; // 0x00A0 (0x0040)
    uint8_t TargetTagReqs[0x40]; // 0x00E0 (0x0040)
    bool ReturnValue; // 0x0120 (0x0001)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// Size: 0x0040
struct AbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    struct FName DataName; // 0x0018 (0x0008)
    float Magnitude; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    uint8_t ReturnValue[0x18]; // 0x0028 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// Size: 0x0060
struct AbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params {
public:
    uint8_t TargetHandle[0x20]; // 0x0000 (0x0020)
    uint8_t HandleToAdd[0x20]; // 0x0020 (0x0020)
    uint8_t ReturnValue[0x20]; // 0x0040 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// Size: 0x0048
struct AbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t LinkedGameplayEffectSpec[0x18]; // 0x0018 (0x0018)
    uint8_t ReturnValue[0x18]; // 0x0030 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// Size: 0x0050
struct AbilitySystemBlueprintLibrary_AddGrantedTags_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t NewGameplayTags[0x20]; // 0x0018 (0x0020)
    uint8_t ReturnValue[0x18]; // 0x0038 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_AddGrantedTag_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t NewGameplayTag[0x8]; // 0x0018 (0x0008)
    uint8_t ReturnValue[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// Size: 0x0050
struct AbilitySystemBlueprintLibrary_AddAssetTags_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t NewGameplayTags[0x20]; // 0x0018 (0x0020)
    uint8_t ReturnValue[0x18]; // 0x0038 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_AddAssetTag_Params {
public:
    uint8_t SpecHandle[0x18]; // 0x0000 (0x0018)
    uint8_t NewGameplayTag[0x8]; // 0x0018 (0x0008)
    uint8_t ReturnValue[0x18]; // 0x0020 (0x0018)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// Size: 0x0100
struct AbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params {
public:
    uint8_t SourceLocation[0x70]; // 0x0000 (0x0070)
    uint8_t TargetLocation[0x70]; // 0x0070 (0x0070)
    uint8_t ReturnValue[0x20]; // 0x00E0 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// Size: 0x00A8
struct AbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params {
public:
    uint8_t HitResult[0x88]; // 0x0000 (0x0088)
    uint8_t ReturnValue[0x20]; // 0x0088 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// Size: 0x0038
struct AbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params {
public:
    struct TArray<uint8_t> ActorArray; // 0x0000 (0x0010)
    bool OneTargetPerHandle; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    uint8_t ReturnValue[0x20]; // 0x0018 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// Size: 0x0028
struct AbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x20]; // 0x0008 (0x0020)
};

// Function: GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// Size: 0x0000
struct AbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params {
public:
};

// Function: GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// Size: 0x0000
struct AbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// Size: 0x0030
struct AbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t WorldDirection[0xC]; // 0x0010 (0x000C)
    float Strength; // 0x001C (0x0004)
    float Duration; // 0x0020 (0x0004)
    bool bIsAdditive; // 0x0024 (0x0001)
    bool bDisableImpartingVelocityOnRemoval; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// Size: 0x0088
struct AbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params {
public:
    uint8_t Hit[0x88]; // 0x0000 (0x0088)
};

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// Size: 0x0000
struct AbilityTask_ApplyRootMotionJumpForce_Finish_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// Size: 0x0048
struct AbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t Rotation[0xC]; // 0x0010 (0x000C)
    float Distance; // 0x001C (0x0004)
    float Height; // 0x0020 (0x0004)
    float Duration; // 0x0024 (0x0004)
    float MinimumLandedTriggerTime; // 0x0028 (0x0004)
    bool bFinishOnLanded; // 0x002C (0x0001)
    uint8_t Pad_0[0x3]; // 0x002D (0x0003)
    class UObject* PathOffsetCurve; // 0x0030 (0x0008)
    class UObject* TimeMappingCurve; // 0x0038 (0x0008)
    class UObject* ReturnValue; // 0x0040 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// Size: 0x0038
struct AbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t TargetLocation[0xC]; // 0x0010 (0x000C)
    float Duration; // 0x001C (0x0004)
    bool bSetNewMovementMode; // 0x0020 (0x0001)
    uint8_t MovementMode; // 0x0021 (0x0001)
    bool bRestrictSpeedToExpected; // 0x0022 (0x0001)
    uint8_t Pad_0[0x5]; // 0x0023 (0x0005)
    class UObject* PathOffsetCurve; // 0x0028 (0x0008)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// Size: 0x0050
struct AbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* LocationActor; // 0x0020 (0x0008)
    float Strength; // 0x0028 (0x0004)
    float Duration; // 0x002C (0x0004)
    float Radius; // 0x0030 (0x0004)
    bool bIsPush; // 0x0034 (0x0001)
    bool bIsAdditive; // 0x0035 (0x0001)
    bool bNoZForce; // 0x0036 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0037 (0x0001)
    class UObject* StrengthDistanceFalloff; // 0x0038 (0x0008)
    class UObject* StrengthOverTime; // 0x0040 (0x0008)
    class UObject* ReturnValue; // 0x0048 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// Size: 0x0038
struct AbilityTask_MoveToLocation_MoveToLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    float Duration; // 0x001C (0x0004)
    class UObject* OptionalInterpolationCurve; // 0x0020 (0x0008)
    class UObject* OptionalVectorInterpolationCurve; // 0x0028 (0x0008)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// Size: 0x0018
struct AbilityTask_NetworkSyncPoint_WaitNetSync_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t SyncType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// Size: 0x0000
struct AbilityTask_NetworkSyncPoint_OnSignalCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// Size: 0x0000
struct AbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// Size: 0x0009
struct AbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params {
public:
    class UObject* Montage; // 0x0000 (0x0008)
    bool bInterrupted; // 0x0008 (0x0001)
};

// Function: GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// Size: 0x0038
struct AbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    class UObject* MontageToPlay; // 0x0010 (0x0008)
    float Rate; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct FName StartSection; // 0x0020 (0x0008)
    bool bStopWhenAbilityEnds; // 0x0028 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0029 (0x0007)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_Repeat.RepeatAction
// Size: 0x0018
struct AbilityTask_Repeat_RepeatAction_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float TimeBetweenActions; // 0x0008 (0x0004)
    int32_t TotalActionCount; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// Size: 0x0038
struct AbilityTask_SpawnActor_SpawnActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t TargetData[0x20]; // 0x0008 (0x0020)
    class UClass* Class; // 0x0028 (0x0008)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// Size: 0x0030
struct AbilityTask_SpawnActor_FinishSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t TargetData[0x20]; // 0x0008 (0x0020)
    class UObject* SpawnedActor; // 0x0028 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// Size: 0x0039
struct AbilityTask_SpawnActor_BeginSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t TargetData[0x20]; // 0x0008 (0x0020)
    class UClass* Class; // 0x0028 (0x0008)
    class UObject* SpawnedActor; // 0x0030 (0x0008)
    bool ReturnValue; // 0x0038 (0x0001)
};

// Function: GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// Size: 0x0020
struct AbilityTask_StartAbilityState_StartAbilityState_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName StateName; // 0x0008 (0x0008)
    bool bEndCurrentState; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// Size: 0x0028
struct AbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* TargetActor; // 0x0008 (0x0008)
    struct FName TaskInstanceName; // 0x0010 (0x0008)
    float Duration; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// Size: 0x0028
struct AbilityTask_VisualizeTargeting_VisualizeTargeting_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* Class; // 0x0008 (0x0008)
    struct FName TaskInstanceName; // 0x0010 (0x0008)
    float Duration; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// Size: 0x0010
struct AbilityTask_VisualizeTargeting_FinishSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* SpawnedActor; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// Size: 0x0019
struct AbilityTask_VisualizeTargeting_BeginSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* Class; // 0x0008 (0x0008)
    class UObject* SpawnedActor; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// Size: 0x0028
struct AbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t WithTag[0x8]; // 0x0008 (0x0008)
    uint8_t WithoutTag[0x8]; // 0x0010 (0x0008)
    bool IncludeTriggeredAbilities; // 0x0018 (0x0001)
    bool TriggerOnce; // 0x0019 (0x0001)
    uint8_t Pad_0[0x6]; // 0x001A (0x0006)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// Size: 0x0008
struct AbilityTask_WaitAbilityActivate_OnAbilityActivate_Params {
public:
    class UObject* ActivatedAbility; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// Size: 0x0028
struct AbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t WithTag[0x8]; // 0x0008 (0x0008)
    uint8_t WithoutTage[0x8]; // 0x0010 (0x0008)
    bool TriggerOnce; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// Size: 0x0008
struct AbilityTask_WaitAbilityCommit_OnAbilityCommit_Params {
public:
    class UObject* ActivatedAbility; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// Size: 0x0038
struct AbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t InAttribute[0x8]; // 0x0008 (0x0008)
    uint8_t InWithTag[0x8]; // 0x0010 (0x0008)
    uint8_t InWithoutTag[0x8]; // 0x0018 (0x0008)
    uint8_t InComparisonType; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    float InComparisonValue; // 0x0024 (0x0004)
    bool TriggerOnce; // 0x0028 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0029 (0x0007)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// Size: 0x0030
struct AbilityTask_WaitAttributeChange_WaitForAttributeChange_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Attribute[0x8]; // 0x0008 (0x0008)
    uint8_t WithSrcTag[0x8]; // 0x0010 (0x0008)
    uint8_t WithoutSrcTag[0x8]; // 0x0018 (0x0008)
    bool TriggerOnce; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// Size: 0x0010
struct AbilityTask_WaitCancel_WaitCancel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// Size: 0x0000
struct AbilityTask_WaitCancel_OnLocalCancelCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// Size: 0x0000
struct AbilityTask_WaitCancel_OnCancelCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// Size: 0x0010
struct AbilityTask_WaitConfirm_WaitConfirm_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// Size: 0x0008
struct AbilityTask_WaitConfirm_OnConfirmCallback_Params {
public:
    class UObject* InAbility; // 0x0000 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// Size: 0x0010
struct AbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// Size: 0x0000
struct AbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// Size: 0x0000
struct AbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// Size: 0x0000
struct AbilityTask_WaitConfirmCancel_OnConfirmCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// Size: 0x0000
struct AbilityTask_WaitConfirmCancel_OnCancelCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// Size: 0x0018
struct AbilityTask_WaitDelay_WaitDelay_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float Time; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// Size: 0x0254
struct AbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params {
public:
    class UObject* Target; // 0x0000 (0x0008)
    uint8_t SpecApplied[0x248]; // 0x0008 (0x0248)
    uint8_t ActiveHandle[0x4]; // 0x0250 (0x0004)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// Size: 0x00B8
struct AbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t SourceFilter[0x10]; // 0x0008 (0x0010)
    uint8_t SourceTagRequirements[0x40]; // 0x0018 (0x0040)
    uint8_t TargetTagRequirements[0x40]; // 0x0058 (0x0040)
    bool TriggerOnce; // 0x0098 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0099 (0x0007)
    class UObject* OptionalExternalOwner; // 0x00A0 (0x0008)
    bool ListenForPeriodicEffect; // 0x00A8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00A9 (0x0007)
    class UObject* ReturnValue; // 0x00B0 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// Size: 0x00B8
struct AbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t TargetFilter[0x10]; // 0x0008 (0x0010)
    uint8_t SourceTagRequirements[0x40]; // 0x0018 (0x0040)
    uint8_t TargetTagRequirements[0x40]; // 0x0058 (0x0040)
    bool TriggerOnce; // 0x0098 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0099 (0x0007)
    class UObject* OptionalExternalOwner; // 0x00A0 (0x0008)
    bool ListenForPeriodicEffects; // 0x00A8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00A9 (0x0007)
    class UObject* ReturnValue; // 0x00B0 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// Size: 0x0018
struct AbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// Size: 0x0000
struct AbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// Size: 0x0018
struct AbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// Size: 0x000C
struct AbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params {
public:
    uint8_t Handle[0x4]; // 0x0000 (0x0004)
    int32_t NewCount; // 0x0004 (0x0004)
    int32_t OldCount; // 0x0008 (0x0004)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// Size: 0x0028
struct AbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t EventTag[0x8]; // 0x0008 (0x0008)
    class UObject* OptionalExternalTarget; // 0x0010 (0x0008)
    bool OnlyTriggerOnce; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// Size: 0x000C
struct AbilityTask_WaitGameplayTag_GameplayTagCallback_Params {
public:
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    int32_t NewCount; // 0x0008 (0x0004)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// Size: 0x0028
struct AbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
    class UObject* InOptionalExternalTarget; // 0x0010 (0x0008)
    bool OnlyTriggerOnce; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// Size: 0x0028
struct AbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
    class UObject* InOptionalExternalTarget; // 0x0010 (0x0008)
    bool OnlyTriggerOnce; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// Size: 0x0018
struct AbilityTask_WaitInputPress_WaitInputPress_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool bTestAlreadyPressed; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// Size: 0x0000
struct AbilityTask_WaitInputPress_OnPressCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// Size: 0x0018
struct AbilityTask_WaitInputRelease_WaitInputRelease_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool bTestAlreadyReleased; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// Size: 0x0000
struct AbilityTask_WaitInputRelease_OnReleaseCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// Size: 0x000A
struct AbilityTask_WaitMovementModeChange_OnMovementModeChange_Params {
public:
    class UObject* Character; // 0x0000 (0x0008)
    uint8_t PrevMovementMode; // 0x0008 (0x0001)
    uint8_t PreviousCustomMode; // 0x0009 (0x0001)
};

// Function: GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// Size: 0x0018
struct AbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t NewMode; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// Size: 0x0010
struct AbilityTask_WaitOverlap_WaitForOverlap_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
// Size: 0x00A0
struct AbilityTask_WaitOverlap_OnOverlapCallback_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    class UObject* OtherComp; // 0x0008 (0x0008)
    int32_t OtherBodyIndex; // 0x0010 (0x0004)
    bool bFromSweep; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    uint8_t SweepResult[0x88]; // 0x0018 (0x0088)
};

// Function: GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// Size: 0x00A8
struct AbilityTask_WaitOverlap_OnHitCallback_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    class UObject* OtherComp; // 0x0008 (0x0008)
    uint8_t NormalImpulse[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t Hit[0x88]; // 0x0020 (0x0088)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// Size: 0x0028
struct AbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t ConfirmationType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UObject* TargetActor; // 0x0018 (0x0008)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// Size: 0x0028
struct AbilityTask_WaitTargetData_WaitTargetData_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TaskInstanceName; // 0x0008 (0x0008)
    uint8_t ConfirmationType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UClass* Class; // 0x0018 (0x0008)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// Size: 0x0000
struct AbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params {
public:
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// Size: 0x0028
struct AbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params {
public:
    uint8_t Data[0x20]; // 0x0000 (0x0020)
    uint8_t ActivationTag[0x8]; // 0x0020 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// Size: 0x0020
struct AbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params {
public:
    uint8_t Data[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// Size: 0x0020
struct AbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params {
public:
    uint8_t Data[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// Size: 0x0010
struct AbilityTask_WaitTargetData_FinishSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* SpawnedActor; // 0x0008 (0x0008)
};

// Function: GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// Size: 0x0019
struct AbilityTask_WaitTargetData_BeginSpawningActor_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* Class; // 0x0008 (0x0008)
    class UObject* SpawnedActor; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// Size: 0x0020
struct AbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Direction[0xC]; // 0x0008 (0x000C)
    float MinimumMagnitude; // 0x0014 (0x0004)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// Size: 0x0014
struct GameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params {
public:
    struct FName ParamName; // 0x0000 (0x0008)
    uint8_t Value[0xC]; // 0x0008 (0x000C)
};

// Function: GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// Size: 0x000C
struct GameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params {
public:
    struct FName ParamName; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
};

// Function: GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// Size: 0x0001
struct GameplayAbilityWorldReticle_OnValidTargetChanged_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// Size: 0x0001
struct GameplayAbilityWorldReticle_OnTargetingAnActor_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// Size: 0x0000
struct GameplayAbilityWorldReticle_OnParametersInitialized_Params {
public:
};

// Function: GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// Size: 0x0001
struct GameplayAbilityWorldReticle_FaceTowardSource_Params {
public:
    bool bFaceIn2D; // 0x0000 (0x0001)
};

// Function: GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// Size: 0x0000
struct GameplayAbilityTargetActor_ConfirmTargeting_Params {
public:
};

// Function: GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// Size: 0x0000
struct GameplayAbilityTargetActor_CancelTargeting_Params {
public:
};

// Function: GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// Size: 0x00A9
struct GameplayCueNotify_Actor_WhileActive_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// Size: 0x00A9
struct GameplayCueNotify_Actor_OnRemove_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// Size: 0x0000
struct GameplayCueNotify_Actor_OnOwnerDestroyed_Params {
public:
};

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// Size: 0x00A9
struct GameplayCueNotify_Actor_OnExecute_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnActive
// Size: 0x00A9
struct GameplayCueNotify_Actor_OnActive_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// Size: 0x00B0
struct GameplayCueNotify_Actor_K2_HandleGameplayCue_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t eventType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t Parameters[0xA0]; // 0x0010 (0x00A0)
};

// Function: GameplayAbilities.GameplayCueNotify_Static.WhileActive
// Size: 0x00A9
struct GameplayCueNotify_Static_WhileActive_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Static.OnRemove
// Size: 0x00A9
struct GameplayCueNotify_Static_OnRemove_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Static.OnExecute
// Size: 0x00A9
struct GameplayCueNotify_Static_OnExecute_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Static.OnActive
// Size: 0x00A9
struct GameplayCueNotify_Static_OnActive_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t Parameters[0xA0]; // 0x0008 (0x00A0)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// Size: 0x00B0
struct GameplayCueNotify_Static_K2_HandleGameplayCue_Params {
public:
    class UObject* MyTarget; // 0x0000 (0x0008)
    uint8_t eventType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t Parameters[0xA0]; // 0x0010 (0x00A0)
};

// Function: GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// Size: 0x0098
struct GameplayEffectExecutionCalculation_Execute_Params {
public:
    uint8_t ExecutionParams[0x80]; // 0x0000 (0x0080)
    uint8_t OutExecutionOutput[0x18]; // 0x0080 (0x0018)
};

// Function: GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// Size: 0x024C
struct GameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params {
public:
    uint8_t Spec[0x248]; // 0x0000 (0x0248)
    float ReturnValue; // 0x0248 (0x0004)
};

// Function: GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// Size: 0x001C
struct GameplayTagReponseTable_TagResponseEvent_Params {
public:
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    int32_t NewCount; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ASC; // 0x0010 (0x0008)
    int32_t idx; // 0x0018 (0x0004)
};

} // namespace SDK

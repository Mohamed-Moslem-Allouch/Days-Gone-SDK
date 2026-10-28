#include "Basic.hpp"
#include "GameplayAbilities_classes.hpp"
#include "GameplayAbilities_parameters.hpp"

namespace SDK {

// Function: GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
bool AbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_TryActivateAbilityByClass_Params Parms{};
    Parms.InAbilityToActivate = InAbilityToActivate;
    Parms.bAllowRemoteActivation = bAllowRemoteActivation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
bool AbilitySystemComponent::TryActivateAbilitiesByTag(uint8_t GameplayTagContainer, bool bAllowRemoteActivation) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_TryActivateAbilitiesByTag_Params Parms{};
    Parms.GameplayTagContainer = GameplayTagContainer;
    Parms.bAllowRemoteActivation = bAllowRemoteActivation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.TargetConfirm
void AbilitySystemComponent::TargetConfirm() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.TargetCancel
void AbilitySystemComponent::TargetCancel() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
void AbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_SetUserAbilityActivationInhibited_Params Parms{};
    Parms.NewInhibit = NewInhibit;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
void AbilitySystemComponent::SetActiveGameplayEffectLevel(uint8_t ActiveHandle, int32_t NewLevel) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_SetActiveGameplayEffectLevel_Params Parms{};
    Parms.ActiveHandle = ActiveHandle;
    Parms.NewLevel = NewLevel;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
void AbilitySystemComponent::ServerTryActivateAbilityWithEventData(uint8_t AbilityToActivate, bool InputPressed, uint8_t PredictionKey, uint8_t TriggerEventData) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params Parms{};
    Parms.AbilityToActivate = AbilityToActivate;
    Parms.InputPressed = InputPressed;
    Parms.PredictionKey = PredictionKey;
    Parms.TriggerEventData = TriggerEventData;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
void AbilitySystemComponent::ServerTryActivateAbility(uint8_t AbilityToActivate, bool InputPressed, uint8_t PredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerTryActivateAbility_Params Parms{};
    Parms.AbilityToActivate = AbilityToActivate;
    Parms.InputPressed = InputPressed;
    Parms.PredictionKey = PredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
void AbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t CurrentPredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params Parms{};
    Parms.AbilityHandle = AbilityHandle;
    Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
    Parms.CurrentPredictionKey = CurrentPredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
void AbilitySystemComponent::ServerSetReplicatedTargetData(uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t ReplicatedTargetDataHandle, uint8_t ApplicationTag, uint8_t CurrentPredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerSetReplicatedTargetData_Params Parms{};
    Parms.AbilityHandle = AbilityHandle;
    Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
    Parms.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
    Parms.ApplicationTag = ApplicationTag;
    Parms.CurrentPredictionKey = CurrentPredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
void AbilitySystemComponent::ServerSetReplicatedEventWithPayload(uint8_t eventType, uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t CurrentPredictionKey, uint8_t VectorPayload) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params Parms{};
    Parms.eventType = eventType;
    Parms.AbilityHandle = AbilityHandle;
    Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
    Parms.CurrentPredictionKey = CurrentPredictionKey;
    Parms.VectorPayload = VectorPayload;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
void AbilitySystemComponent::ServerSetReplicatedEvent(uint8_t eventType, uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey, uint8_t CurrentPredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerSetReplicatedEvent_Params Parms{};
    Parms.eventType = eventType;
    Parms.AbilityHandle = AbilityHandle;
    Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
    Parms.CurrentPredictionKey = CurrentPredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
void AbilitySystemComponent::ServerSetInputReleased(uint8_t AbilityHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerSetInputReleased_Params Parms{};
    Parms.AbilityHandle = AbilityHandle;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
void AbilitySystemComponent::ServerSetInputPressed(uint8_t AbilityHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerSetInputPressed_Params Parms{};
    Parms.AbilityHandle = AbilityHandle;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
void AbilitySystemComponent::ServerPrintDebug_Request() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerEndAbility
void AbilitySystemComponent::ServerEndAbility(uint8_t AbilityToEnd, uint8_t ActivationInfo, uint8_t PredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerEndAbility_Params Parms{};
    Parms.AbilityToEnd = AbilityToEnd;
    Parms.ActivationInfo = ActivationInfo;
    Parms.PredictionKey = PredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
void AbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UObject* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params Parms{};
    Parms.ClientAnimMontage = ClientAnimMontage;
    Parms.ClientPosition = ClientPosition;
    Parms.SectionName = SectionName;
    Parms.NextSectionName = NextSectionName;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
void AbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UObject* ClientAnimMontage, struct FName SectionName) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params Parms{};
    Parms.ClientAnimMontage = ClientAnimMontage;
    Parms.SectionName = SectionName;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
void AbilitySystemComponent::ServerCancelAbility(uint8_t AbilityToCancel, uint8_t ActivationInfo) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ServerCancelAbility_Params Parms{};
    Parms.AbilityToCancel = AbilityToCancel;
    Parms.ActivationInfo = ActivationInfo;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
void AbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UObject* InstigatorAbilitySystemComponent, int32_t StacksToRemove) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params Parms{};
    Parms.GameplayEffect = GameplayEffect;
    Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
    Parms.StacksToRemove = StacksToRemove;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
bool AbilitySystemComponent::RemoveActiveGameplayEffect(uint8_t Handle, int32_t StacksToRemove) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_RemoveActiveGameplayEffect_Params Parms{};
    Parms.Handle = Handle;
    Parms.StacksToRemove = StacksToRemove;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
void AbilitySystemComponent::RemoveActiveEffectsWithTags(uint8_t Tags) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_RemoveActiveEffectsWithTags_Params Parms{};
    Parms.Tags = Tags;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
void AbilitySystemComponent::RemoveActiveEffectsWithSourceTags(uint8_t Tags) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params Parms{};
    Parms.Tags = Tags;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
void AbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(uint8_t Tags) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params Parms{};
    Parms.Tags = Tags;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
void AbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(uint8_t Tags) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params Parms{};
    Parms.Tags = Tags;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
void AbilitySystemComponent::OnRep_ReplicatedAnimMontage() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
void AbilitySystemComponent::OnRep_PredictionKey() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
void AbilitySystemComponent::OnRep_OwningActor() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
void AbilitySystemComponent::OnRep_GameplayEffects() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
void AbilitySystemComponent::OnRep_ActivateAbilities() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
void AbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(uint8_t GameplayCueTag, uint8_t PredictionKey, uint8_t GameplayCueParameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    Parms.PredictionKey = PredictionKey;
    Parms.GameplayCueParameters = GameplayCueParameters;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
void AbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(uint8_t Spec, uint8_t PredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params Parms{};
    Parms.Spec = Spec;
    Parms.PredictionKey = PredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
void AbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(uint8_t GameplayCueTag, uint8_t PredictionKey, uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    Parms.PredictionKey = PredictionKey;
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
void AbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(uint8_t Spec, uint8_t PredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params Parms{};
    Parms.Spec = Spec;
    Parms.PredictionKey = PredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
void AbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(uint8_t GameplayCueTag, uint8_t PredictionKey, uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    Parms.PredictionKey = PredictionKey;
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
uint8_t AbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, uint8_t Context) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_MakeOutgoingSpec_Params Parms{};
    Parms.GameplayEffectClass = GameplayEffectClass;
    Parms.Level = Level;
    Parms.Context = Context;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.K2_InitStats
void AbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UObject* DataTable) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_K2_InitStats_Params Parms{};
    Parms.Attributes = Attributes;
    Parms.DataTable = DataTable;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
uint8_t AbilitySystemComponent::K2_ApplyGameplayEffectToTarget(class UObject* GameplayEffect, class UObject* Target, float Level, uint8_t Context) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params Parms{};
    Parms.GameplayEffect = GameplayEffect;
    Parms.Target = Target;
    Parms.Level = Level;
    Parms.Context = Context;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
uint8_t AbilitySystemComponent::K2_ApplyGameplayEffectToSelf(class UObject* GameplayEffect, float Level, uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params Parms{};
    Parms.GameplayEffect = GameplayEffect;
    Parms.Level = Level;
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
bool AbilitySystemComponent::IsGameplayCueActive(uint8_t GameplayCueTag) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_IsGameplayCueActive_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
bool AbilitySystemComponent::GetUserAbilityActivationInhibited() {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_GetUserAbilityActivationInhibited_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
uint8_t AbilitySystemComponent::GetOutgoingSpec(class UObject* GameplayEffect, float Level) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_GetOutgoingSpec_Params Parms{};
    Parms.GameplayEffect = GameplayEffect;
    Parms.Level = Level;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
float AbilitySystemComponent::GetGameplayEffectMagnitude(uint8_t Handle, uint8_t Attribute) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_GetGameplayEffectMagnitude_Params Parms{};
    Parms.Handle = Handle;
    Parms.Attribute = Attribute;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
int32_t AbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UObject* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_GetGameplayEffectCount_Params Parms{};
    Parms.SourceGameplayEffect = SourceGameplayEffect;
    Parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
    Parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.GetEffectContext
uint8_t AbilitySystemComponent::GetEffectContext() {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_GetEffectContext_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
void AbilitySystemComponent::ClientTryActivateAbility(uint8_t AbilityToActivate) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientTryActivateAbility_Params Parms{};
    Parms.AbilityToActivate = AbilityToActivate;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
void AbilitySystemComponent::ClientSetReplicatedEvent(uint8_t eventType, uint8_t AbilityHandle, uint8_t AbilityOriginalPredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientSetReplicatedEvent_Params Parms{};
    Parms.eventType = eventType;
    Parms.AbilityHandle = AbilityHandle;
    Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
void AbilitySystemComponent::ClientPrintDebug_Response(struct TArray<uint8_t> Strings) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientPrintDebug_Response_Params Parms{};
    Parms.Strings = Strings;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientEndAbility
void AbilitySystemComponent::ClientEndAbility(uint8_t AbilityToEnd, uint8_t ActivationInfo) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientEndAbility_Params Parms{};
    Parms.AbilityToEnd = AbilityToEnd;
    Parms.ActivationInfo = ActivationInfo;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
void AbilitySystemComponent::ClientCancelAbility(uint8_t AbilityToCancel, uint8_t ActivationInfo) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientCancelAbility_Params Parms{};
    Parms.AbilityToCancel = AbilityToCancel;
    Parms.ActivationInfo = ActivationInfo;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
void AbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(uint8_t AbilityToActivate, uint8_t PredictionKey, uint8_t TriggerEventData) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params Parms{};
    Parms.AbilityToActivate = AbilityToActivate;
    Parms.PredictionKey = PredictionKey;
    Parms.TriggerEventData = TriggerEventData;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
void AbilitySystemComponent::ClientActivateAbilitySucceed(uint8_t AbilityToActivate, uint8_t PredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientActivateAbilitySucceed_Params Parms{};
    Parms.AbilityToActivate = AbilityToActivate;
    Parms.PredictionKey = PredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
void AbilitySystemComponent::ClientActivateAbilityFailed(uint8_t AbilityToActivate, uint8_t PredictionKey) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_ClientActivateAbilityFailed_Params Parms{};
    Parms.AbilityToActivate = AbilityToActivate;
    Parms.PredictionKey = PredictionKey;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
uint8_t AbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UObject* Target, float Level, uint8_t Context) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params Parms{};
    Parms.GameplayEffectClass = GameplayEffectClass;
    Parms.Target = Target;
    Parms.Level = Level;
    Parms.Context = Context;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
uint8_t AbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params Parms{};
    Parms.GameplayEffectClass = GameplayEffectClass;
    Parms.Level = Level;
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
uint8_t AbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(uint8_t SpecHandle, class UObject* Target) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.Target = Target;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
uint8_t AbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(uint8_t SpecHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
void AbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
void AbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32_t InputID) {
    static class UFunction* Func = nullptr;
    AbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params Parms{};
    Parms.InputID = InputID;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
void GameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities) {
    static class UFunction* Func = nullptr;
    GameplayAbility_SetShouldBlockOtherAbilities_Params Parms{};
    Parms.bShouldBlockAbilities = bShouldBlockAbilities;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.SetCanBeCanceled
void GameplayAbility::SetCanBeCanceled(bool bCanBeCanceled) {
    static class UFunction* Func = nullptr;
    GameplayAbility_SetCanBeCanceled_Params Parms{};
    Parms.bCanBeCanceled = bCanBeCanceled;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.SendGameplayEvent
void GameplayAbility::SendGameplayEvent(uint8_t EventTag, uint8_t Payload) {
    static class UFunction* Func = nullptr;
    GameplayAbility_SendGameplayEvent_Params Parms{};
    Parms.EventTag = EventTag;
    Parms.Payload = Payload;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
void GameplayAbility::RemoveGrantedByEffect() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbility.MontageStop
void GameplayAbility::MontageStop(float OverrideBlendOutTime) {
    static class UFunction* Func = nullptr;
    GameplayAbility_MontageStop_Params Parms{};
    Parms.OverrideBlendOutTime = OverrideBlendOutTime;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.MontageSetNextSectionName
void GameplayAbility::MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName) {
    static class UFunction* Func = nullptr;
    GameplayAbility_MontageSetNextSectionName_Params Parms{};
    Parms.FromSectionName = FromSectionName;
    Parms.ToSectionName = ToSectionName;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.MontageJumpToSection
void GameplayAbility::MontageJumpToSection(struct FName SectionName) {
    static class UFunction* Func = nullptr;
    GameplayAbility_MontageJumpToSection_Params Parms{};
    Parms.SectionName = SectionName;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
uint8_t GameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName) {
    static class UFunction* Func = nullptr;
    GameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params Parms{};
    Parms.SocketName = SocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
uint8_t GameplayAbility::MakeTargetLocationInfoFromOwnerActor() {
    static class UFunction* Func = nullptr;
    GameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
uint8_t GameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level) {
    static class UFunction* Func = nullptr;
    GameplayAbility_MakeOutgoingGameplayEffectSpec_Params Parms{};
    Parms.GameplayEffectClass = GameplayEffectClass;
    Parms.Level = Level;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
bool GameplayAbility::K2_ShouldAbilityRespondToEvent(uint8_t actorInfo, uint8_t Payload) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ShouldAbilityRespondToEvent_Params Parms{};
    Parms.actorInfo = actorInfo;
    Parms.Payload = Payload;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
void GameplayAbility::K2_RemoveGameplayCue(uint8_t GameplayCueTag) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_RemoveGameplayCue_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.K2_OnEndAbility
void GameplayAbility::K2_OnEndAbility() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
void GameplayAbility::K2_ExecuteGameplayCueWithParams(uint8_t GameplayCueTag, uint8_t GameplayCueParameters) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ExecuteGameplayCueWithParams_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    Parms.GameplayCueParameters = GameplayCueParameters;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
void GameplayAbility::K2_ExecuteGameplayCue(uint8_t GameplayCueTag, uint8_t Context) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ExecuteGameplayCue_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    Parms.Context = Context;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.K2_EndAbility
void GameplayAbility::K2_EndAbility() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbility.K2_CommitExecute
void GameplayAbility::K2_CommitExecute() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
bool GameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_CommitAbilityCost_Params Parms{};
    Parms.BroadcastCommitEvent = BroadcastCommitEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
bool GameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_CommitAbilityCooldown_Params Parms{};
    Parms.BroadcastCommitEvent = BroadcastCommitEvent;
    Parms.ForceCooldown = ForceCooldown;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_CommitAbility
bool GameplayAbility::K2_CommitAbility() {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_CommitAbility_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
bool GameplayAbility::K2_CheckAbilityCost() {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_CheckAbilityCost_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
bool GameplayAbility::K2_CheckAbilityCooldown() {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_CheckAbilityCooldown_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_CanActivateAbility
bool GameplayAbility::K2_CanActivateAbility(uint8_t actorInfo, uint8_t RelevantTags) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_CanActivateAbility_Params Parms{};
    Parms.actorInfo = actorInfo;
    Parms.RelevantTags = RelevantTags;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
struct TArray<uint8_t> GameplayAbility::K2_ApplyGameplayEffectToTarget(uint8_t TargetData, class UObject* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ApplyGameplayEffectToTarget_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.GameplayEffect = GameplayEffect;
    Parms.GameplayEffectLevel = GameplayEffectLevel;
    Parms.Stacks = Stacks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
uint8_t GameplayAbility::K2_ApplyGameplayEffectToOwner(class UObject* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ApplyGameplayEffectToOwner_Params Parms{};
    Parms.GameplayEffect = GameplayEffect;
    Parms.GameplayEffectLevel = GameplayEffectLevel;
    Parms.Stacks = Stacks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct TArray<uint8_t> GameplayAbility::K2_ApplyGameplayEffectSpecToTarget(uint8_t EffectSpecHandle, uint8_t TargetData) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params Parms{};
    Parms.EffectSpecHandle = EffectSpecHandle;
    Parms.TargetData = TargetData;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
uint8_t GameplayAbility::K2_ApplyGameplayEffectSpecToOwner(uint8_t EffectSpecHandle) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params Parms{};
    Parms.EffectSpecHandle = EffectSpecHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.K2_AddGameplayCue
void GameplayAbility::K2_AddGameplayCue(uint8_t GameplayCueTag, uint8_t Context, bool bRemoveOnAbilityEnd) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_AddGameplayCue_Params Parms{};
    Parms.GameplayCueTag = GameplayCueTag;
    Parms.Context = Context;
    Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
void GameplayAbility::K2_ActivateAbilityFromEvent(uint8_t EventData) {
    static class UFunction* Func = nullptr;
    GameplayAbility_K2_ActivateAbilityFromEvent_Params Parms{};
    Parms.EventData = EventData;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.K2_ActivateAbility
void GameplayAbility::K2_ActivateAbility() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
class UObject* GameplayAbility::GetOwningComponentFromActorInfo() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetOwningComponentFromActorInfo_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
class UObject* GameplayAbility::GetOwningActorFromActorInfo() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetOwningActorFromActorInfo_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
uint8_t GameplayAbility::GetOutgoingGameplayEffectSpec(class UObject* GameplayEffect, float Level) {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetOutgoingGameplayEffectSpec_Params Parms{};
    Parms.GameplayEffect = GameplayEffect;
    Parms.Level = Level;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
uint8_t GameplayAbility::GetGrantedByEffectContext() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetGrantedByEffectContext_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetCurrentSourceObject
class UObject* GameplayAbility::GetCurrentSourceObject() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetCurrentSourceObject_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetCurrentMontage
class UObject* GameplayAbility::GetCurrentMontage() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetCurrentMontage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
float GameplayAbility::GetCooldownTimeRemaining() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetCooldownTimeRemaining_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetContextFromOwner
uint8_t GameplayAbility::GetContextFromOwner(uint8_t OptionalTargetData) {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetContextFromOwner_Params Parms{};
    Parms.OptionalTargetData = OptionalTargetData;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
class UObject* GameplayAbility::GetAvatarActorFromActorInfo() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetAvatarActorFromActorInfo_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetActorInfo
uint8_t GameplayAbility::GetActorInfo() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetActorInfo_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.GetAbilityLevel
int32_t GameplayAbility::GetAbilityLevel() {
    static class UFunction* Func = nullptr;
    GameplayAbility_GetAbilityLevel_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.EndTaskByInstanceName
void GameplayAbility::EndTaskByInstanceName(struct FName InstanceName) {
    static class UFunction* Func = nullptr;
    GameplayAbility_EndTaskByInstanceName_Params Parms{};
    Parms.InstanceName = InstanceName;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.EndAbilityState
void GameplayAbility::EndAbilityState(struct FName OptionalStateNameToEnd) {
    static class UFunction* Func = nullptr;
    GameplayAbility_EndAbilityState_Params Parms{};
    Parms.OptionalStateNameToEnd = OptionalStateNameToEnd;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
void GameplayAbility::ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask) {
    static class UFunction* Func = nullptr;
    GameplayAbility_ConfirmTaskByInstanceName_Params Parms{};
    Parms.InstanceName = InstanceName;
    Parms.bEndTask = bEndTask;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
void GameplayAbility::CancelTaskByInstanceName(struct FName InstanceName) {
    static class UFunction* Func = nullptr;
    GameplayAbility_CancelTaskByInstanceName_Params Parms{};
    Parms.InstanceName = InstanceName;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
void GameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(uint8_t WithGrantedTags, int32_t StacksToRemove) {
    static class UFunction* Func = nullptr;
    GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params Parms{};
    Parms.WithGrantedTags = WithGrantedTags;
    Parms.StacksToRemove = StacksToRemove;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
void GameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(uint8_t WithAssetTags, int32_t StacksToRemove) {
    static class UFunction* Func = nullptr;
    GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params Parms{};
    Parms.WithAssetTags = WithAssetTags;
    Parms.StacksToRemove = StacksToRemove;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct TArray<uint8_t> GameplayAbility::BP_ApplyGameplayEffectToTarget(uint8_t TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks) {
    static class UFunction* Func = nullptr;
    GameplayAbility_BP_ApplyGameplayEffectToTarget_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.GameplayEffectClass = GameplayEffectClass;
    Parms.GameplayEffectLevel = GameplayEffectLevel;
    Parms.Stacks = Stacks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
uint8_t GameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks) {
    static class UFunction* Func = nullptr;
    GameplayAbility_BP_ApplyGameplayEffectToOwner_Params Parms{};
    Parms.GameplayEffectClass = GameplayEffectClass;
    Parms.GameplayEffectLevel = GameplayEffectLevel;
    Parms.Stacks = Stacks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
void GameplayCueInterface::ForwardGameplayCueToParent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
void GameplayCueInterface::BlueprintCustomHandler(uint8_t eventType, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueInterface_BlueprintCustomHandler_Params Parms{};
    Parms.eventType = eventType;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
bool AbilitySystemBlueprintLibrary::TargetDataHasOrigin(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
bool AbilitySystemBlueprintLibrary::TargetDataHasHitResult(uint8_t HitResult, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params Parms{};
    Parms.HitResult = HitResult;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
bool AbilitySystemBlueprintLibrary::TargetDataHasEndPoint(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
bool AbilitySystemBlueprintLibrary::TargetDataHasActor(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_TargetDataHasActor_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
uint8_t AbilitySystemBlueprintLibrary::SetStackCountToMax(uint8_t SpecHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_SetStackCountToMax_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
uint8_t AbilitySystemBlueprintLibrary::SetStackCount(uint8_t SpecHandle, int32_t StackCount) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_SetStackCount_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.StackCount = StackCount;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
uint8_t AbilitySystemBlueprintLibrary::SetDuration(uint8_t SpecHandle, float Duration) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_SetDuration_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
void AbilitySystemBlueprintLibrary::SendGameplayEventToActor(class UObject* Actor, uint8_t EventTag, uint8_t Payload) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params Parms{};
    Parms.Actor = Actor;
    Parms.EventTag = EventTag;
    Parms.Payload = Payload;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
uint8_t AbilitySystemBlueprintLibrary::MakeSpecHandle(class UObject* InGameplayEffect, class UObject* InInstigator, class UObject* InEffectCauser, float InLevel) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_MakeSpecHandle_Params Parms{};
    Parms.InGameplayEffect = InGameplayEffect;
    Parms.InInstigator = InInstigator;
    Parms.InEffectCauser = InEffectCauser;
    Parms.InLevel = InLevel;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
uint8_t AbilitySystemBlueprintLibrary::MakeFilterHandle(uint8_t Filter, class UObject* FilterActor) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_MakeFilterHandle_Params Parms{};
    Parms.Filter = Filter;
    Parms.FilterActor = FilterActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
bool AbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
bool AbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
bool AbilitySystemBlueprintLibrary::HasHitResult(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_HasHitResult_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
uint8_t AbilitySystemBlueprintLibrary::GetTargetDataOrigin(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
uint8_t AbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
uint8_t AbilitySystemBlueprintLibrary::GetTargetDataEndPoint(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
uint8_t AbilitySystemBlueprintLibrary::GetOrigin(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetOrigin_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
float AbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(uint8_t SpecHandle, uint8_t Attribute) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.Attribute = Attribute;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
uint8_t AbilitySystemBlueprintLibrary::GetInstigatorTransform(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetInstigatorTransform_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
class UObject* AbilitySystemBlueprintLibrary::GetInstigatorActor(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetInstigatorActor_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
uint8_t AbilitySystemBlueprintLibrary::GetHitResultFromTargetData(uint8_t HitResult, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params Parms{};
    Parms.HitResult = HitResult;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
uint8_t AbilitySystemBlueprintLibrary::GetHitResult(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetHitResult_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
bool AbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class UObject* TargetActor, uint8_t Parameters, uint8_t Location, uint8_t Normal) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params Parms{};
    Parms.TargetActor = TargetActor;
    Parms.Parameters = Parameters;
    Parms.Location = Location;
    Parms.Normal = Normal;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
bool AbilitySystemBlueprintLibrary::GetGameplayCueDirection(class UObject* TargetActor, uint8_t Parameters, uint8_t Direction) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params Parms{};
    Parms.TargetActor = TargetActor;
    Parms.Parameters = Parameters;
    Parms.Direction = Direction;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
float AbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(class UObject* AbilitySystem, uint8_t Attribute, bool bSuccessfullyFoundAttribute) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params Parms{};
    Parms.AbilitySystem = AbilitySystem;
    Parms.Attribute = Attribute;
    Parms.bSuccessfullyFoundAttribute = bSuccessfullyFoundAttribute;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
float AbilitySystemBlueprintLibrary::GetFloatAttribute(class UObject* Actor, uint8_t Attribute, bool bSuccessfullyFoundAttribute) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetFloatAttribute_Params Parms{};
    Parms.Actor = Actor;
    Parms.Attribute = Attribute;
    Parms.bSuccessfullyFoundAttribute = bSuccessfullyFoundAttribute;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
int32_t AbilitySystemBlueprintLibrary::GetDataCountFromTargetData(uint8_t TargetData) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params Parms{};
    Parms.TargetData = TargetData;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct TArray<uint8_t> AbilitySystemBlueprintLibrary::GetActorsFromTargetData(uint8_t TargetData, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
int32_t AbilitySystemBlueprintLibrary::GetActorCount(uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetActorCount_Params Parms{};
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
class UObject* AbilitySystemBlueprintLibrary::GetActorByIndex(uint8_t Parameters, int32_t Index) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetActorByIndex_Params Parms{};
    Parms.Parameters = Parameters;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
int32_t AbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(uint8_t ActiveHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params Parms{};
    Parms.ActiveHandle = ActiveHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
int32_t AbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(uint8_t ActiveHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params Parms{};
    Parms.ActiveHandle = ActiveHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct FString AbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(uint8_t ActiveHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params Parms{};
    Parms.ActiveHandle = ActiveHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
class UObject* AbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class UObject* Actor) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params Parms{};
    Parms.Actor = Actor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
void AbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(uint8_t TargetCueInterface, uint8_t eventType, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params Parms{};
    Parms.TargetCueInterface = TargetCueInterface;
    Parms.eventType = eventType;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
uint8_t AbilitySystemBlueprintLibrary::FilterTargetData(uint8_t TargetDataHandle, uint8_t ActorFilterClass) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_FilterTargetData_Params Parms{};
    Parms.TargetDataHandle = TargetDataHandle;
    Parms.ActorFilterClass = ActorFilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
bool AbilitySystemBlueprintLibrary::EffectContextIsValid(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextIsValid_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
bool AbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
bool AbilitySystemBlueprintLibrary::EffectContextHasHitResult(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
class UObject* AbilitySystemBlueprintLibrary::EffectContextGetSourceObject(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
class UObject* AbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
uint8_t AbilitySystemBlueprintLibrary::EffectContextGetOrigin(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
class UObject* AbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
uint8_t AbilitySystemBlueprintLibrary::EffectContextGetHitResult(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
class UObject* AbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(uint8_t EffectContext) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params Parms{};
    Parms.EffectContext = EffectContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
bool AbilitySystemBlueprintLibrary::DoesTargetDataContainActor(uint8_t TargetData, int32_t Index, class UObject* Actor) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params Parms{};
    Parms.TargetData = TargetData;
    Parms.Index = Index;
    Parms.Actor = Actor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
bool AbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(uint8_t Parameters, uint8_t SourceTagReqs, uint8_t TargetTagReqs) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params Parms{};
    Parms.Parameters = Parameters;
    Parms.SourceTagReqs = SourceTagReqs;
    Parms.TargetTagReqs = TargetTagReqs;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
uint8_t AbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(uint8_t SpecHandle, struct FName DataName, float Magnitude) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.DataName = DataName;
    Parms.Magnitude = Magnitude;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
uint8_t AbilitySystemBlueprintLibrary::AppendTargetDataHandle(uint8_t TargetHandle, uint8_t HandleToAdd) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params Parms{};
    Parms.TargetHandle = TargetHandle;
    Parms.HandleToAdd = HandleToAdd;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
uint8_t AbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(uint8_t SpecHandle, uint8_t LinkedGameplayEffectSpec) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
uint8_t AbilitySystemBlueprintLibrary::AddGrantedTags(uint8_t SpecHandle, uint8_t NewGameplayTags) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AddGrantedTags_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.NewGameplayTags = NewGameplayTags;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
uint8_t AbilitySystemBlueprintLibrary::AddGrantedTag(uint8_t SpecHandle, uint8_t NewGameplayTag) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AddGrantedTag_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.NewGameplayTag = NewGameplayTag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
uint8_t AbilitySystemBlueprintLibrary::AddAssetTags(uint8_t SpecHandle, uint8_t NewGameplayTags) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AddAssetTags_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.NewGameplayTags = NewGameplayTags;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
uint8_t AbilitySystemBlueprintLibrary::AddAssetTag(uint8_t SpecHandle, uint8_t NewGameplayTag) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AddAssetTag_Params Parms{};
    Parms.SpecHandle = SpecHandle;
    Parms.NewGameplayTag = NewGameplayTag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
uint8_t AbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(uint8_t SourceLocation, uint8_t TargetLocation) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params Parms{};
    Parms.SourceLocation = SourceLocation;
    Parms.TargetLocation = TargetLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
uint8_t AbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params Parms{};
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
uint8_t AbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(struct TArray<uint8_t> ActorArray, bool OneTargetPerHandle) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params Parms{};
    Parms.ActorArray = ActorArray;
    Parms.OneTargetPerHandle = OneTargetPerHandle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
uint8_t AbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class UObject* Actor) {
    static class UFunction* Func = nullptr;
    AbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params Parms{};
    Parms.Actor = Actor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
void AbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
void AbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
class UObject* AbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t WorldDirection, float Strength, float Duration, bool bIsAdditive, bool bDisableImpartingVelocityOnRemoval) {
    static class UFunction* Func = nullptr;
    AbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.WorldDirection = WorldDirection;
    Parms.Strength = Strength;
    Parms.Duration = Duration;
    Parms.bIsAdditive = bIsAdditive;
    Parms.bDisableImpartingVelocityOnRemoval = bDisableImpartingVelocityOnRemoval;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
void AbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(uint8_t Hit) {
    static class UFunction* Func = nullptr;
    AbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params Parms{};
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
void AbilityTask_ApplyRootMotionJumpForce::Finish() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
class UObject* AbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UObject* PathOffsetCurve, class UObject* TimeMappingCurve) {
    static class UFunction* Func = nullptr;
    AbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.Rotation = Rotation;
    Parms.Distance = Distance;
    Parms.Height = Height;
    Parms.Duration = Duration;
    Parms.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
    Parms.bFinishOnLanded = bFinishOnLanded;
    Parms.PathOffsetCurve = PathOffsetCurve;
    Parms.TimeMappingCurve = TimeMappingCurve;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
class UObject* AbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t TargetLocation, float Duration, bool bSetNewMovementMode, uint8_t MovementMode, bool bRestrictSpeedToExpected, class UObject* PathOffsetCurve) {
    static class UFunction* Func = nullptr;
    AbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.TargetLocation = TargetLocation;
    Parms.Duration = Duration;
    Parms.bSetNewMovementMode = bSetNewMovementMode;
    Parms.MovementMode = MovementMode;
    Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
    Parms.PathOffsetCurve = PathOffsetCurve;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
class UObject* AbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t Location, class UObject* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UObject* StrengthDistanceFalloff, class UObject* StrengthOverTime) {
    static class UFunction* Func = nullptr;
    AbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.Location = Location;
    Parms.LocationActor = LocationActor;
    Parms.Strength = Strength;
    Parms.Duration = Duration;
    Parms.Radius = Radius;
    Parms.bIsPush = bIsPush;
    Parms.bIsAdditive = bIsAdditive;
    Parms.bNoZForce = bNoZForce;
    Parms.StrengthDistanceFalloff = StrengthDistanceFalloff;
    Parms.StrengthOverTime = StrengthOverTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
class UObject* AbilityTask_MoveToLocation::MoveToLocation(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t Location, float Duration, class UObject* OptionalInterpolationCurve, class UObject* OptionalVectorInterpolationCurve) {
    static class UFunction* Func = nullptr;
    AbilityTask_MoveToLocation_MoveToLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.Location = Location;
    Parms.Duration = Duration;
    Parms.OptionalInterpolationCurve = OptionalInterpolationCurve;
    Parms.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
class UObject* AbilityTask_NetworkSyncPoint::WaitNetSync(class UObject* WorldContextObject, uint8_t SyncType) {
    static class UFunction* Func = nullptr;
    AbilityTask_NetworkSyncPoint_WaitNetSync_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SyncType = SyncType;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
void AbilityTask_NetworkSyncPoint::OnSignalCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
void AbilityTask_PlayMontageAndWait::OnMontageInterrupted() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
void AbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UObject* Montage, bool bInterrupted) {
    static class UFunction* Func = nullptr;
    AbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params Parms{};
    Parms.Montage = Montage;
    Parms.bInterrupted = bInterrupted;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
class UObject* AbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, struct FName TaskInstanceName, class UObject* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds) {
    static class UFunction* Func = nullptr;
    AbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.MontageToPlay = MontageToPlay;
    Parms.Rate = Rate;
    Parms.StartSection = StartSection;
    Parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_Repeat.RepeatAction
class UObject* AbilityTask_Repeat::RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int32_t TotalActionCount) {
    static class UFunction* Func = nullptr;
    AbilityTask_Repeat_RepeatAction_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TimeBetweenActions = TimeBetweenActions;
    Parms.TotalActionCount = TotalActionCount;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
class UObject* AbilityTask_SpawnActor::SpawnActor(class UObject* WorldContextObject, uint8_t TargetData, class UClass* Class) {
    static class UFunction* Func = nullptr;
    AbilityTask_SpawnActor_SpawnActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TargetData = TargetData;
    Parms.Class = Class;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
void AbilityTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, uint8_t TargetData, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_SpawnActor_FinishSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TargetData = TargetData;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
bool AbilityTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, uint8_t TargetData, class UClass* Class, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_SpawnActor_BeginSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TargetData = TargetData;
    Parms.Class = Class;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
class UObject* AbilityTask_StartAbilityState::StartAbilityState(class UObject* WorldContextObject, struct FName StateName, bool bEndCurrentState) {
    static class UFunction* Func = nullptr;
    AbilityTask_StartAbilityState_StartAbilityState_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.StateName = StateName;
    Parms.bEndCurrentState = bEndCurrentState;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
class UObject* AbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UObject* WorldContextObject, class UObject* TargetActor, struct FName TaskInstanceName, float Duration) {
    static class UFunction* Func = nullptr;
    AbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TargetActor = TargetActor;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
class UObject* AbilityTask_VisualizeTargeting::VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, struct FName TaskInstanceName, float Duration) {
    static class UFunction* Func = nullptr;
    AbilityTask_VisualizeTargeting_VisualizeTargeting_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Class = Class;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
void AbilityTask_VisualizeTargeting::FinishSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_VisualizeTargeting_FinishSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
bool AbilityTask_VisualizeTargeting::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_VisualizeTargeting_BeginSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Class = Class;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
class UObject* AbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UObject* WorldContextObject, uint8_t WithTag, uint8_t WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.WithTag = WithTag;
    Parms.WithoutTag = WithoutTag;
    Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
    Parms.TriggerOnce = TriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
void AbilityTask_WaitAbilityActivate::OnAbilityActivate(class UObject* ActivatedAbility) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitAbilityActivate_OnAbilityActivate_Params Parms{};
    Parms.ActivatedAbility = ActivatedAbility;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
class UObject* AbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UObject* WorldContextObject, uint8_t WithTag, uint8_t WithoutTage, bool TriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.WithTag = WithTag;
    Parms.WithoutTage = WithoutTage;
    Parms.TriggerOnce = TriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
void AbilityTask_WaitAbilityCommit::OnAbilityCommit(class UObject* ActivatedAbility) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitAbilityCommit_OnAbilityCommit_Params Parms{};
    Parms.ActivatedAbility = ActivatedAbility;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
class UObject* AbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, uint8_t InAttribute, uint8_t InWithTag, uint8_t InWithoutTag, uint8_t InComparisonType, float InComparisonValue, bool TriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InAttribute = InAttribute;
    Parms.InWithTag = InWithTag;
    Parms.InWithoutTag = InWithoutTag;
    Parms.InComparisonType = InComparisonType;
    Parms.InComparisonValue = InComparisonValue;
    Parms.TriggerOnce = TriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
class UObject* AbilityTask_WaitAttributeChange::WaitForAttributeChange(class UObject* WorldContextObject, uint8_t Attribute, uint8_t WithSrcTag, uint8_t WithoutSrcTag, bool TriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitAttributeChange_WaitForAttributeChange_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Attribute = Attribute;
    Parms.WithSrcTag = WithSrcTag;
    Parms.WithoutSrcTag = WithoutSrcTag;
    Parms.TriggerOnce = TriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
class UObject* AbilityTask_WaitCancel::WaitCancel(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitCancel_WaitCancel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
void AbilityTask_WaitCancel::OnLocalCancelCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
void AbilityTask_WaitCancel::OnCancelCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
class UObject* AbilityTask_WaitConfirm::WaitConfirm(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitConfirm_WaitConfirm_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
void AbilityTask_WaitConfirm::OnConfirmCallback(class UObject* InAbility) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitConfirm_OnConfirmCallback_Params Parms{};
    Parms.InAbility = InAbility;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
class UObject* AbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
void AbilityTask_WaitConfirmCancel::OnLocalConfirmCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
void AbilityTask_WaitConfirmCancel::OnLocalCancelCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
void AbilityTask_WaitConfirmCancel::OnConfirmCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
void AbilityTask_WaitConfirmCancel::OnCancelCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
class UObject* AbilityTask_WaitDelay::WaitDelay(class UObject* WorldContextObject, float Time) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitDelay_WaitDelay_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
void AbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UObject* Target, uint8_t SpecApplied, uint8_t ActiveHandle) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params Parms{};
    Parms.Target = Target;
    Parms.SpecApplied = SpecApplied;
    Parms.ActiveHandle = ActiveHandle;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
class UObject* AbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, uint8_t SourceFilter, uint8_t SourceTagRequirements, uint8_t TargetTagRequirements, bool TriggerOnce, class UObject* OptionalExternalOwner, bool ListenForPeriodicEffect) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SourceFilter = SourceFilter;
    Parms.SourceTagRequirements = SourceTagRequirements;
    Parms.TargetTagRequirements = TargetTagRequirements;
    Parms.TriggerOnce = TriggerOnce;
    Parms.OptionalExternalOwner = OptionalExternalOwner;
    Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
class UObject* AbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, uint8_t TargetFilter, uint8_t SourceTagRequirements, uint8_t TargetTagRequirements, bool TriggerOnce, class UObject* OptionalExternalOwner, bool ListenForPeriodicEffects) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TargetFilter = TargetFilter;
    Parms.SourceTagRequirements = SourceTagRequirements;
    Parms.TargetTagRequirements = TargetTagRequirements;
    Parms.TriggerOnce = TriggerOnce;
    Parms.OptionalExternalOwner = OptionalExternalOwner;
    Parms.ListenForPeriodicEffects = ListenForPeriodicEffects;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
class UObject* AbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
void AbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
class UObject* AbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
void AbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(uint8_t Handle, int32_t NewCount, int32_t OldCount) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params Parms{};
    Parms.Handle = Handle;
    Parms.NewCount = NewCount;
    Parms.OldCount = OldCount;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
class UObject* AbilityTask_WaitGameplayEvent::WaitGameplayEvent(class UObject* WorldContextObject, uint8_t EventTag, class UObject* OptionalExternalTarget, bool OnlyTriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.EventTag = EventTag;
    Parms.OptionalExternalTarget = OptionalExternalTarget;
    Parms.OnlyTriggerOnce = OnlyTriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
void AbilityTask_WaitGameplayTag::GameplayTagCallback(uint8_t Tag, int32_t NewCount) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayTag_GameplayTagCallback_Params Parms{};
    Parms.Tag = Tag;
    Parms.NewCount = NewCount;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
class UObject* AbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UObject* WorldContextObject, uint8_t Tag, class UObject* InOptionalExternalTarget, bool OnlyTriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Tag = Tag;
    Parms.InOptionalExternalTarget = InOptionalExternalTarget;
    Parms.OnlyTriggerOnce = OnlyTriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
class UObject* AbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UObject* WorldContextObject, uint8_t Tag, class UObject* InOptionalExternalTarget, bool OnlyTriggerOnce) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Tag = Tag;
    Parms.InOptionalExternalTarget = InOptionalExternalTarget;
    Parms.OnlyTriggerOnce = OnlyTriggerOnce;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
class UObject* AbilityTask_WaitInputPress::WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitInputPress_WaitInputPress_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.bTestAlreadyPressed = bTestAlreadyPressed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
void AbilityTask_WaitInputPress::OnPressCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
class UObject* AbilityTask_WaitInputRelease::WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitInputRelease_WaitInputRelease_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.bTestAlreadyReleased = bTestAlreadyReleased;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
void AbilityTask_WaitInputRelease::OnReleaseCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
void AbilityTask_WaitMovementModeChange::OnMovementModeChange(class UObject* Character, uint8_t PrevMovementMode, uint8_t PreviousCustomMode) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitMovementModeChange_OnMovementModeChange_Params Parms{};
    Parms.Character = Character;
    Parms.PrevMovementMode = PrevMovementMode;
    Parms.PreviousCustomMode = PreviousCustomMode;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
class UObject* AbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UObject* WorldContextObject, uint8_t NewMode) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.NewMode = NewMode;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
class UObject* AbilityTask_WaitOverlap::WaitForOverlap(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitOverlap_WaitForOverlap_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
void AbilityTask_WaitOverlap::OnOverlapCallback(class UObject* OtherActor, class UObject* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, uint8_t SweepResult) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitOverlap_OnOverlapCallback_Params Parms{};
    Parms.OtherActor = OtherActor;
    Parms.OtherComp = OtherComp;
    Parms.OtherBodyIndex = OtherBodyIndex;
    Parms.bFromSweep = bFromSweep;
    Parms.SweepResult = SweepResult;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
void AbilityTask_WaitOverlap::OnHitCallback(class UObject* OtherActor, class UObject* OtherComp, uint8_t NormalImpulse, uint8_t Hit) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitOverlap_OnHitCallback_Params Parms{};
    Parms.OtherActor = OtherActor;
    Parms.OtherComp = OtherComp;
    Parms.NormalImpulse = NormalImpulse;
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
class UObject* AbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t ConfirmationType, class UObject* TargetActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.ConfirmationType = ConfirmationType;
    Parms.TargetActor = TargetActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
class UObject* AbilityTask_WaitTargetData::WaitTargetData(class UObject* WorldContextObject, struct FName TaskInstanceName, uint8_t ConfirmationType, class UClass* Class) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_WaitTargetData_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TaskInstanceName = TaskInstanceName;
    Parms.ConfirmationType = ConfirmationType;
    Parms.Class = Class;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
void AbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
void AbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(uint8_t Data, uint8_t ActivationTag) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params Parms{};
    Parms.Data = Data;
    Parms.ActivationTag = ActivationTag;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
void AbilityTask_WaitTargetData::OnTargetDataReadyCallback(uint8_t Data) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params Parms{};
    Parms.Data = Data;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
void AbilityTask_WaitTargetData::OnTargetDataCancelledCallback(uint8_t Data) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params Parms{};
    Parms.Data = Data;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
void AbilityTask_WaitTargetData::FinishSpawningActor(class UObject* WorldContextObject, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_FinishSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
bool AbilityTask_WaitTargetData::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class UObject* SpawnedActor) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitTargetData_BeginSpawningActor_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Class = Class;
    Parms.SpawnedActor = SpawnedActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
class UObject* AbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UObject* WorldContextObject, uint8_t Direction, float MinimumMagnitude) {
    static class UFunction* Func = nullptr;
    AbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Direction = Direction;
    Parms.MinimumMagnitude = MinimumMagnitude;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
void GameplayAbilityWorldReticle::SetReticleMaterialParamVector(struct FName ParamName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    GameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params Parms{};
    Parms.ParamName = ParamName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
void GameplayAbilityWorldReticle::SetReticleMaterialParamFloat(struct FName ParamName, float Value) {
    static class UFunction* Func = nullptr;
    GameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params Parms{};
    Parms.ParamName = ParamName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
void GameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue) {
    static class UFunction* Func = nullptr;
    GameplayAbilityWorldReticle_OnValidTargetChanged_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
void GameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue) {
    static class UFunction* Func = nullptr;
    GameplayAbilityWorldReticle_OnTargetingAnActor_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
void GameplayAbilityWorldReticle::OnParametersInitialized() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
void GameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D) {
    static class UFunction* Func = nullptr;
    GameplayAbilityWorldReticle_FaceTowardSource_Params Parms{};
    Parms.bFaceIn2D = bFaceIn2D;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
void GameplayAbilityTargetActor::ConfirmTargeting() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
void GameplayAbilityTargetActor::CancelTargeting() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayCueNotify_Actor.WhileActive
bool GameplayCueNotify_Actor::WhileActive(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Actor_WhileActive_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnRemove
bool GameplayCueNotify_Actor::OnRemove(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Actor_OnRemove_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
void GameplayCueNotify_Actor::OnOwnerDestroyed() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnExecute
bool GameplayCueNotify_Actor::OnExecute(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Actor_OnExecute_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Actor.OnActive
bool GameplayCueNotify_Actor::OnActive(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Actor_OnActive_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
void GameplayCueNotify_Actor::K2_HandleGameplayCue(class UObject* MyTarget, uint8_t eventType, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Actor_K2_HandleGameplayCue_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.eventType = eventType;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayCueNotify_Static.WhileActive
bool GameplayCueNotify_Static::WhileActive(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Static_WhileActive_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Static.OnRemove
bool GameplayCueNotify_Static::OnRemove(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Static_OnRemove_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Static.OnExecute
bool GameplayCueNotify_Static::OnExecute(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Static_OnExecute_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Static.OnActive
bool GameplayCueNotify_Static::OnActive(class UObject* MyTarget, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Static_OnActive_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
void GameplayCueNotify_Static::K2_HandleGameplayCue(class UObject* MyTarget, uint8_t eventType, uint8_t Parameters) {
    static class UFunction* Func = nullptr;
    GameplayCueNotify_Static_K2_HandleGameplayCue_Params Parms{};
    Parms.MyTarget = MyTarget;
    Parms.eventType = eventType;
    Parms.Parameters = Parameters;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayEffectExecutionCalculation.Execute
void GameplayEffectExecutionCalculation::Execute(uint8_t ExecutionParams, uint8_t OutExecutionOutput) {
    static class UFunction* Func = nullptr;
    GameplayEffectExecutionCalculation_Execute_Params Parms{};
    Parms.ExecutionParams = ExecutionParams;
    Parms.OutExecutionOutput = OutExecutionOutput;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
float GameplayModMagnitudeCalculation::CalculateBaseMagnitude(uint8_t Spec) {
    static class UFunction* Func = nullptr;
    GameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params Parms{};
    Parms.Spec = Spec;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
void GameplayTagReponseTable::TagResponseEvent(uint8_t Tag, int32_t NewCount, class UObject* ASC, int32_t idx) {
    static class UFunction* Func = nullptr;
    GameplayTagReponseTable_TagResponseEvent_Params Parms{};
    Parms.Tag = Tag;
    Parms.NewCount = NewCount;
    Parms.ASC = ASC;
    Parms.idx = idx;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

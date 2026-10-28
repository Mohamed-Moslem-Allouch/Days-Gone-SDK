#pragma once
#include "Basic.hpp"
#include "Engine_structs.hpp"

namespace SDK {

// Class: Engine.Actor
class Actor : public Object {
public:
    uint8_t PrimaryActorTick[0x50]; // 0x0028 (0x0050)
    float CustomTimeDilation; // 0x0078 (0x0004)
    uint8_t Pad_0[0x1]; // 0x007C (0x0001)
    bool bHidden; // 0x007D (0x0001)
    bool bNetTemporary; // 0x007D (0x0001)
    bool bNetStartup; // 0x007D (0x0001)
    bool bOnlyRelevantToOwner; // 0x007D (0x0001)
    bool bAlwaysRelevant; // 0x007D (0x0001)
    bool bReplicateMovement; // 0x007D (0x0001)
    bool bTearOff; // 0x007D (0x0001)
    bool bExchangedRoles; // 0x007D (0x0001)
    bool bPendingNetUpdate; // 0x007E (0x0001)
    bool bNetLoadOnClient; // 0x007E (0x0001)
    bool bNetUseOwnerRelevancy; // 0x007E (0x0001)
    bool bBlockInput; // 0x007E (0x0001)
    uint8_t Pad_1[0x1]; // 0x007F (0x0001)
    struct TArray<uint8_t> BlockAllInputActionsExceptList; // 0x0080 (0x0010)
    bool bAllowTickBeforeBeginPlay; // 0x0090 (0x0001)
    bool bActorEnableCollision; // 0x0090 (0x0001)
    bool bReplicates; // 0x0090 (0x0001)
    uint8_t RemoteRole; // 0x0091 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0092 (0x0002)
    uint64_t Owner; // 0x0094 (0x0008)
    uint8_t ReplicatedMovement[0x34]; // 0x009C (0x0034)
    uint8_t AttachmentReplication[0x40]; // 0x00D0 (0x0040)
    uint8_t Role; // 0x0110 (0x0001)
    uint8_t Pad_3[0x1]; // 0x0111 (0x0001)
    uint8_t AutoReceiveInput; // 0x0112 (0x0001)
    uint8_t Pad_4[0x1]; // 0x0113 (0x0001)
    int32_t InputPriority; // 0x0114 (0x0004)
    class UObject* InputComponent; // 0x0118 (0x0008)
    uint8_t InputConsumeOption; // 0x0120 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0121 (0x0003)
    float NetCullDistanceSquared; // 0x0124 (0x0004)
    int32_t NetTag; // 0x0128 (0x0004)
    float NetUpdateTime; // 0x012C (0x0004)
    float NetUpdateFrequency; // 0x0130 (0x0004)
    float NetPriority; // 0x0134 (0x0004)
    float LastNetUpdateTime; // 0x0138 (0x0004)
    uint8_t Pad_6[0x4]; // 0x013C (0x0004)
    struct FName NetDriverName; // 0x0140 (0x0008)
    bool bAutoDestroyWhenFinished; // 0x0148 (0x0001)
    bool bCanBeDamaged; // 0x0148 (0x0001)
    bool bActorIsBeingDestroyed; // 0x0148 (0x0001)
    bool bCollideWhenPlacing; // 0x0148 (0x0001)
    bool bFindCameraComponentWhenViewTarget; // 0x0148 (0x0001)
    bool bRelevantForNetworkReplays; // 0x0148 (0x0001)
    uint8_t SpawnCollisionHandlingMethod; // 0x0149 (0x0001)
    uint8_t ActorStreamingGroup; // 0x014A (0x0001)
    bool bArtistSetActorStreamingGroup; // 0x014B (0x0001)
    uint8_t Pad_7[0x4]; // 0x014C (0x0004)
    class UObject* Instigator; // 0x0150 (0x0008)
    struct TArray<uint8_t> Children; // 0x0158 (0x0010)
    class UObject* RootComponent; // 0x0168 (0x0008)
    struct TArray<uint8_t> ControllingMatineeActors; // 0x0170 (0x0010)
    float InitialLifeSpan; // 0x0180 (0x0004)
    uint8_t Pad_8[0x4]; // 0x0184 (0x0004)
    struct TArray<uint8_t> Layers; // 0x0188 (0x0010)
    uint64_t ParentComponentActor; // 0x0198 (0x0008)
    uint64_t ParentComponent; // 0x01A0 (0x0008)
    bool bIsAttachedLightInfulence; // 0x01A8 (0x0001)
    uint8_t Pad_9[0x3]; // 0x01A9 (0x0003)
    bool bAllowReceiveTickEventOnDedicatedServer; // 0x01AC (0x0001)
    bool bActorSeamlessTraveled; // 0x01AC (0x0001)
    bool bIgnoresOriginShifting; // 0x01AC (0x0001)
    bool bEnableAutoLODGeneration; // 0x01AC (0x0001)
    uint8_t Pad_10[0x3]; // 0x01AD (0x0003)
    struct TArray<uint8_t> Tags; // 0x01B0 (0x0010)
    uint8_t HiddenEditorViews[0x8]; // 0x01C0 (0x0008)
    uint8_t OnTakeAnyDamage[0x10]; // 0x01C8 (0x0010)
    uint8_t OnTakePointDamage[0x10]; // 0x01D8 (0x0010)
    uint8_t OnActorBeginOverlap[0x10]; // 0x01E8 (0x0010)
    uint8_t OnActorEndOverlap[0x10]; // 0x01F8 (0x0010)
    uint8_t OnActorBeginOverlapComponent[0x10]; // 0x0208 (0x0010)
    uint8_t OnActorEndOverlapComponent[0x10]; // 0x0218 (0x0010)
    uint8_t OnBeginCursorOver[0x10]; // 0x0228 (0x0010)
    uint8_t OnEndCursorOver[0x10]; // 0x0238 (0x0010)
    uint8_t OnClicked[0x10]; // 0x0248 (0x0010)
    uint8_t OnReleased[0x10]; // 0x0258 (0x0010)
    uint8_t OnInputTouchBegin[0x10]; // 0x0268 (0x0010)
    uint8_t OnInputTouchEnd[0x10]; // 0x0278 (0x0010)
    uint8_t OnInputTouchEnter[0x10]; // 0x0288 (0x0010)
    uint8_t OnInputTouchLeave[0x10]; // 0x0298 (0x0010)
    uint8_t OnActorHit[0x10]; // 0x02A8 (0x0010)
    uint8_t Pad_11[0x10]; // 0x02B8 (0x0010)
    uint8_t OnDestroyed[0x10]; // 0x02C8 (0x0010)
    uint8_t Pad_12[0x10]; // 0x02D8 (0x0010)
    uint8_t OnEndPlay[0x10]; // 0x02E8 (0x0010)
    uint8_t Pad_13[0x20]; // 0x02F8 (0x0020)
    struct TArray<uint8_t> BlueprintCreatedComponents; // 0x0318 (0x0010)
    struct TArray<uint8_t> InstanceComponents; // 0x0328 (0x0010)
    uint8_t Pad_14[0x8]; // 0x0338 (0x0008)
    bool bHasSaveTag; // 0x0340 (0x0001)

public:
    void UserConstructionScript();
    void TearOff();
    void SnapRootComponentTo(class UObject* InParentActor, struct FName InSocketName);
    void SetTickGroup(uint8_t NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetReplicates(bool bInReplicates);
    void SetReplicateMovement(bool bInReplicateMovement);
    void SetOwner(class UObject* NewOwner);
    void SetLifeSpan(float InLifespan);
    void SetActorTickEnabled(bool bEnabled);
    void SetActorScale3D(uint8_t NewScale3D);
    bool SetActorRotation(uint8_t NewRotation);
    void SetActorRelativeScale3D(uint8_t NewRelativeScale);
    void SetActorHiddenInGame(bool bNewHidden);
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    void RemoveTickPrerequisiteComponent(class UObject* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(class UObject* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveRadialDamage(float DamageReceived, class UObject* DamageType, uint8_t Origin, uint8_t HitInfo, class UObject* InstigatedBy, class UObject* DamageCauser);
    void ReceivePreSaveGameLoaded(bool bIsCheckpoint);
    void ReceivePreCheckpointSave();
    void ReceivePostSaveGameLoaded(bool bIsCheckpoint);
    void ReceivePointDamage(float Damage, class UObject* DamageType, uint8_t HitLocation, uint8_t HitNormal, class UObject* HitComponent, struct FName BoneName, uint8_t ShotFromDirection, class UObject* InstigatedBy, class UObject* DamageCauser);
    void ReceiveHit(class UObject* MyComp, class UObject* Other, class UObject* OtherComp, bool bSelfMoved, uint8_t HitLocation, uint8_t HitNormal, uint8_t NormalImpulse, uint8_t Hit);
    void ReceiveEndPlay(uint8_t EndPlayReason);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, class UObject* DamageType, class UObject* InstigatedBy, class UObject* DamageCauser);
    void ReceiveActorOnReleased();
    void ReceiveActorOnInputTouchLeave(uint8_t FingerIndex);
    void ReceiveActorOnInputTouchEnter(uint8_t FingerIndex);
    void ReceiveActorOnInputTouchEnd(uint8_t FingerIndex);
    void ReceiveActorOnInputTouchBegin(uint8_t FingerIndex);
    void ReceiveActorOnInputEnabled();
    void ReceiveActorOnInputDisabled();
    void ReceiveActorOnClicked();
    void ReceiveActorEndOverlapComponent(class UObject* OtherActor, class UObject* OtherComp, int32_t OtherBodyIndex);
    void ReceiveActorEndOverlap(class UObject* OtherActor);
    void ReceiveActorEndCursorOver();
    void ReceiveActorBeginOverlapComponent(class UObject* OtherActor, class UObject* OtherComp, int32_t OtherBodyIndex);
    void ReceiveActorBeginOverlap(class UObject* OtherActor);
    void ReceiveActorBeginCursorOver();
    void OnRep_ReplicateMovement();
    void OnRep_ReplicatedMovement();
    void OnRep_Owner();
    void OnRep_Instigator();
    void OnRep_AttachmentReplication();
    void OnFinishLoad(class UClass* Actor);
    void MakeNoise(float Loudness, class UObject* NoiseInstigator, uint8_t NoiseLocation, float MaxRange, struct FName Tag);
    class UObject* MakeMIDForMaterial(class UObject* Parent);
    bool K2_TeleportTo(uint8_t DestLocation, uint8_t DestRotation);
    bool K2_SetActorTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeTransform(uint8_t NewRelativeTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeRotation(uint8_t NewRelativeRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeLocation(uint8_t NewRelativeLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    bool K2_SetActorLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    bool K2_SetActorLocation(uint8_t NewLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_OnReset();
    void K2_OnEndViewTarget(class UObject* PC);
    void K2_OnBecomeViewTarget(class UObject* PC);
    class UObject* K2_GetRootComponent();
    uint8_t K2_GetActorRotation();
    uint8_t K2_GetActorLocation();
    void K2_DestroyComponent(class UObject* Component);
    void K2_DestroyActor();
    void K2_AttachRootComponentToActor(class UObject* InParentActor, struct FName InSocketName, uint8_t AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentTo(class UObject* InParent, struct FName InSocketName, uint8_t AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AddActorWorldTransform(uint8_t DeltaTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddActorWorldRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddActorWorldOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddActorLocalTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddActorLocalRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddActorLocalOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    bool IsOverlappingActor(class UObject* Other);
    bool IsLiveSwapActive();
    bool IsChildActor();
    bool IsActorTickEnabled();
    bool IsActorBeingDestroyed();
    bool HasAuthority();
    float GetVerticalDistanceTo(class UObject* OtherActor);
    uint8_t GetVelocity();
    uint8_t GetTransform();
    bool GetTickableWhenPaused();
    float GetSquaredDistanceTo(class UObject* OtherActor);
    class UObject* GetParentComponent();
    class UObject* GetOwner();
    void GetOverlappingComponents(struct TArray<uint8_t> OverlappingComponents);
    void GetOverlappingActors(struct TArray<uint8_t> OverlappingActors, class UClass* ClassFilter);
    float GetLifeSpan();
    class UObject* GetInstigatorController();
    class UObject* GetInstigator();
    uint8_t GetInputVectorAxisValue(uint8_t InputAxisKey);
    float GetInputAxisValue(struct FName InputAxisName);
    float GetInputAxisKeyValue(uint8_t InputAxisKey);
    float GetHorizontalDotProductTo(class UObject* OtherActor);
    float GetHorizontalDistanceTo(class UObject* OtherActor);
    float GetDotProductTo(class UObject* OtherActor);
    float GetDistanceTo(class UObject* OtherActor);
    struct TArray<uint8_t> GetComponentsByTag(class UClass* ComponentClass, struct FName Tag);
    struct TArray<uint8_t> GetComponentsByClass(class UClass* ComponentClass);
    class UObject* GetComponentByClass(class UClass* ComponentClass);
    void GetAttachedActors(struct TArray<uint8_t> OutActors);
    uint8_t GetActorUpVector();
    float GetActorTimeDilation();
    uint8_t GetActorScale3D();
    uint8_t GetActorRightVector();
    uint8_t GetActorRelativeScale3D();
    uint8_t GetActorForwardVector();
    void GetActorEyesViewPoint(uint8_t OutLocation, uint8_t OutRotation);
    bool GetActorEnableCollision();
    void GetActorBounds(bool bOnlyCollidingComponents, uint8_t Origin, uint8_t BoxExtent);
    void ForceNetUpdate();
    void FlushNetDormancy();
    void EnableInput(class UObject* PlayerController);
    void DisableInput(class UObject* PlayerController);
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    void AddTickPrerequisiteComponent(class UObject* PrerequisiteComponent);
    void AddTickPrerequisiteActor(class UObject* PrerequisiteActor);
    class UObject* AddComponent(struct FName TemplateName, bool bManualAttachment, uint8_t RelativeTransform, class UObject* ComponentTemplateContext);
    bool ActorHasTag(struct FName Tag);
};

// Class: Engine.DataAsset
class DataAsset : public Object {
public:
};

// Class: Engine.ActorComponent
class ActorComponent : public Object {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t PrimaryComponentTick[0x50]; // 0x0038 (0x0050)
    struct TArray<uint8_t> ComponentTags; // 0x0088 (0x0010)
    struct TArray<uint8_t> AssetUserData; // 0x0098 (0x0010)
    bool bReplicates; // 0x00A8 (0x0001)
    bool bNetAddressable; // 0x00A8 (0x0001)
    uint8_t Pad_1[0x1]; // 0x00A9 (0x0001)
    bool bAutoActivate; // 0x00AA (0x0001)
    bool bIsActive; // 0x00AA (0x0001)
    bool bEditableWhenInherited; // 0x00AA (0x0001)
    bool bCanEverAffectNavigation; // 0x00AA (0x0001)
    bool bWantsBeginPlay; // 0x00AA (0x0001)
    uint8_t Pad_2[0x1]; // 0x00AB (0x0001)
    uint8_t CreationMethod; // 0x00AC (0x0001)
    uint8_t Pad_3[0xB]; // 0x00AD (0x000B)
    struct TArray<uint8_t> UCSModifiedProperties; // 0x00B8 (0x0010)

public:
    void ToggleActive();
    void SetTickGroup(uint8_t NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetIsReplicated(bool ShouldReplicate);
    void SetComponentTickEnabled(bool bEnabled);
    void SetActive(bool bNewActive, bool bReset);
    void RemoveTickPrerequisiteComponent(class UObject* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(class UObject* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(uint8_t EndPlayReason);
    void ReceiveBeginPlay();
    void OnRep_IsActive();
    void K2_DestroyComponent(class UObject* Object);
    bool IsComponentTickEnabled();
    bool IsBeingDestroyed();
    bool IsActive();
    class UObject* GetOwner();
    void Deactivate();
    bool ComponentHasTag(struct FName Tag);
    void AddTickPrerequisiteComponent(class UObject* PrerequisiteComponent);
    void AddTickPrerequisiteActor(class UObject* PrerequisiteActor);
    void Activate(bool bReset);
};

// Class: Engine.SceneComponent
class SceneComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* AttachParent; // 0x00D0 (0x0008)
    struct TArray<uint8_t> AttachChildren; // 0x00D8 (0x0010)
    struct FName AttachSocketName; // 0x00E8 (0x0008)
    bool bWorldToComponentUpdated; // 0x00F0 (0x0001)
    bool bAbsoluteLocation; // 0x00F0 (0x0001)
    bool bAbsoluteRotation; // 0x00F0 (0x0001)
    bool bAbsoluteScale; // 0x00F0 (0x0001)
    bool bVisible; // 0x00F0 (0x0001)
    bool bHiddenInGame; // 0x00F0 (0x0001)
    bool bShouldUpdatePhysicsVolume; // 0x00F0 (0x0001)
    bool bBoundsChangeTriggersStreamingDataRebuild; // 0x00F1 (0x0001)
    bool bUseAttachParentBound; // 0x00F1 (0x0001)
    bool bAbsoluteTranslation; // 0x00F1 (0x0001)
    uint8_t Pad_1[0x2]; // 0x00F2 (0x0002)
    uint64_t PhysicsVolume; // 0x00F4 (0x0008)
    uint8_t Pad_2[0x74]; // 0x00FC (0x0074)
    uint8_t RelativeLocation[0xC]; // 0x0170 (0x000C)
    uint8_t RelativeRotation[0xC]; // 0x017C (0x000C)
    uint8_t Pad_3[0x28]; // 0x0188 (0x0028)
    uint8_t RelativeScale3D[0xC]; // 0x01B0 (0x000C)
    uint8_t RelativeTranslation[0xC]; // 0x01BC (0x000C)
    uint8_t Mobility; // 0x01C8 (0x0001)
    uint8_t DetailMode; // 0x01C9 (0x0001)
    uint8_t Pad_4[0x16]; // 0x01CA (0x0016)
    uint8_t ComponentVelocity[0xC]; // 0x01E0 (0x000C)
    uint8_t Pad_5[0x4]; // 0x01EC (0x0004)
    uint8_t PhysicsVolumeChangedDelegate[0x10]; // 0x01F0 (0x0010)

public:
    void ToggleVisibility(bool bPropagateToChildren);
    void SnapTo(class UObject* InParent, struct FName InSocketName);
    void SetWorldScale3D(uint8_t NewScale);
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    void SetRelativeScale3D(uint8_t NewScale3D);
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    void ResetRelativeTransform();
    void OnRep_Visibility(bool OldValue);
    void OnRep_Transform();
    void OnRep_AttachSocketName();
    void OnRep_AttachParent();
    void K2_SetWorldTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetWorldRotation(uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetWorldLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetWorldLocation(uint8_t NewLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetRelativeTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetRelativeRotation(uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocation(uint8_t NewLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    uint8_t K2_GetComponentToWorld();
    uint8_t K2_GetComponentScale();
    uint8_t K2_GetComponentRotation();
    uint8_t K2_GetComponentLocation();
    void K2_AttachTo(class UObject* InParent, struct FName InSocketName, uint8_t AttachType, bool bWeldSimulatedBodies);
    void K2_AddWorldTransform(uint8_t DeltaTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddWorldRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddWorldOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddRelativeRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddRelativeLocation(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddLocalTransform(uint8_t DeltaTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddLocalRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    void K2_AddLocalOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport);
    bool IsVisible();
    bool IsSimulatingPhysics(struct FName BoneName);
    bool IsAnySimulatingPhysics();
    uint8_t GetUpVector();
    uint8_t GetSocketTransform(struct FName InSocketName, uint8_t TransformSpace);
    struct FString GetSocketTagString(struct FName InSocketName);
    uint8_t GetSocketRotation(struct FName InSocketName);
    uint8_t GetSocketQuaternion(struct FName InSocketName);
    struct TArray<uint8_t> GetSocketPopTags(struct FName InSocketName);
    uint8_t GetSocketLocation(struct FName InSocketName);
    uint8_t GetRightVector();
    uint8_t GetRelativeTransform();
    class UObject* GetPhysicsVolume();
    void GetParentComponents(struct TArray<uint8_t> Parents);
    int32_t GetNumChildrenComponents();
    uint8_t GetForwardVector();
    uint8_t GetComponentVelocity();
    void GetChildrenComponents(bool bIncludeAllDescendants, struct TArray<uint8_t> Children);
    class UObject* GetChildComponent(int32_t ChildIndex);
    struct FName GetAttachSocketName();
    class UObject* GetAttachParent();
    struct TArray<uint8_t> GetAllSocketNames();
    bool DoesSocketExist(struct FName InSocketName);
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};

// Class: Engine.BendSkeletalMeshLookBase
class BendSkeletalMeshLookBase : public DataAsset {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct FString LookSourceFile; // 0x0038 (0x0010)
    bool bToggleToReimport; // 0x0048 (0x0001)
    bool bDrivenBones; // 0x0048 (0x0001)
    bool bUseLod0OnlyInCinematics; // 0x0048 (0x0001)
    bool bAllowAllLodsInCinematics; // 0x0048 (0x0001)
    bool bOffsetLodDownByOneForSecondaryParts; // 0x0048 (0x0001)
    bool bDisableLodSwitchingWhenClothPresent; // 0x0048 (0x0001)
    bool bEnableMaterialParameterVariation; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    class UObject* MaterialParameterVariations; // 0x0050 (0x0008)
    struct TArray<uint8_t> PartsNEW; // 0x0058 (0x0010)
    int32_t MasterPartIndex; // 0x0068 (0x0004)
};

// Class: Engine.NavLinkProxy
class NavLinkProxy : public Actor {
public:
    uint8_t Pad_0[0x330]; // 0x0028 (0x0330)
    struct TArray<uint8_t> PointLinks; // 0x0358 (0x0010)
    struct TArray<uint8_t> SegmentLinks; // 0x0368 (0x0010)
    class UObject* SmartLinkComp; // 0x0378 (0x0008)
    bool bSmartLinkIsRelevant; // 0x0380 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0381 (0x0007)
    uint8_t OnSmartLinkReached[0x10]; // 0x0388 (0x0010)

public:
    void SetSmartLinkEnabled(bool bEnabled);
    void ResumePathFollowing(class UObject* Agent);
    void ReceiveSmartLinkReached(class UObject* Agent, uint8_t Destination);
    bool IsSmartLinkEnabled();
    bool HasMovingAgents();
};

// Class: Engine.AnimNotifyState
class AnimNotifyState : public Object {
public:
    float TotalStateDuration; // 0x0028 (0x0004)
    float EllapsedStateTime; // 0x002C (0x0004)

public:
    bool Received_NotifyTick(class UObject* MeshComp, class UObject* Animation, float FrameDeltaTime);
    bool Received_NotifyEnd(class UObject* MeshComp, class UObject* Animation);
    bool Received_NotifyBegin(class UObject* MeshComp, class UObject* Animation, float TotalDuration);
    struct FString GetNotifyName();
};

// Class: Engine.SaveGame
class SaveGame : public Object {
public:
    uint8_t MetaData[0x60]; // 0x0028 (0x0060)
    struct TArray<uint8_t> ActorRecords; // 0x0088 (0x0010)
};

// Class: Engine.LevelScriptActor
class LevelScriptActor : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    bool bInputEnabled; // 0x0350 (0x0001)

public:
    void WorldOriginLocationChanged(uint8_t OldOriginLocation, uint8_t NewOriginLocation);
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    bool RemoteEvent(struct FName EventName);
    void LevelReset();
    float GetNumTicksOfEndPlay();
    float GetCurrentNumTicks();
};

// Class: Engine.TriggerBase
class TriggerBase : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* CollisionComponent; // 0x0348 (0x0008)
    class UObject* SpriteComponent; // 0x0350 (0x0008)
};

// Class: Engine.TriggerBox
class TriggerBox : public TriggerBase {
public:
};

// Class: Engine.PrimitiveComponent
class PrimitiveComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1F0]; // 0x0028 (0x01F0)
    float MinDrawDistance; // 0x0218 (0x0004)
    bool bOverrideLDMaxDrawDistance; // 0x021C (0x0001)
    uint8_t Pad_1[0x3]; // 0x021D (0x0003)
    float LDMaxDrawDistance; // 0x0220 (0x0004)
    bool bOverrideLDMinScreenSize; // 0x0224 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0225 (0x0003)
    float LDMinScreenSize; // 0x0228 (0x0004)
    float CachedMaxDrawDistance; // 0x022C (0x0004)
    uint8_t DepthPriorityGroup; // 0x0230 (0x0001)
    uint8_t ViewOwnerDepthPriorityGroup; // 0x0231 (0x0001)
    uint8_t Pad_3[0x2]; // 0x0232 (0x0002)
    bool bAlwaysCreatePhysicsState; // 0x0234 (0x0001)
    bool bGenerateOverlapEvents; // 0x0234 (0x0001)
    bool bMultiBodyOverlap; // 0x0234 (0x0001)
    bool bCheckAsyncSceneOnMove; // 0x0234 (0x0001)
    bool bTraceComplexOnMove; // 0x0234 (0x0001)
    bool bReturnMaterialOnMove; // 0x0235 (0x0001)
    bool bUseViewOwnerDepthPriorityGroup; // 0x0235 (0x0001)
    bool bAllowCullDistanceVolume; // 0x0235 (0x0001)
    bool bHasMotionBlurVelocityMeshes; // 0x0235 (0x0001)
    bool bRenderInMainPass; // 0x0235 (0x0001)
    bool bRenderPostTonemapper; // 0x0235 (0x0001)
    bool bRenderInSkyCapture; // 0x0235 (0x0001)
    bool bRenderInTerrainHeightmapCapture; // 0x0235 (0x0001)
    bool bExcludeFromTerrainColorCapture; // 0x0236 (0x0001)
    bool bExcludeFromWeatherHeightmapCapture; // 0x0236 (0x0001)
    bool bAddedToWeatherSampling; // 0x0236 (0x0001)
    bool bReceivesDecals; // 0x0236 (0x0001)
    bool bOwnerNoSee; // 0x0236 (0x0001)
    bool bOnlyOwnerSee; // 0x0236 (0x0001)
    bool bTreatAsBackgroundForOcclusion; // 0x0236 (0x0001)
    bool bUseAsOccluder; // 0x0236 (0x0001)
    bool bSelectable; // 0x0237 (0x0001)
    bool bForceMipStreaming; // 0x0237 (0x0001)
    bool bHasPerInstanceHitProxies; // 0x0237 (0x0001)
    bool CastShadow; // 0x0237 (0x0001)
    bool bAffectDynamicIndirectLighting; // 0x0237 (0x0001)
    bool bAffectDistanceFieldLighting; // 0x0237 (0x0001)
    bool bCastDynamicShadow; // 0x0237 (0x0001)
    bool bCastStaticShadow; // 0x0237 (0x0001)
    bool bCastVolumetricTranslucentShadow; // 0x0238 (0x0001)
    bool bSelfShadowOnly; // 0x0238 (0x0001)
    bool bCastFarShadow; // 0x0238 (0x0001)
    bool bCastInsetShadow; // 0x0238 (0x0001)
    bool bCastCinematicShadow; // 0x0238 (0x0001)
    bool bCastHiddenShadow; // 0x0238 (0x0001)
    bool bCastShadowAsTwoSided; // 0x0238 (0x0001)
    bool bLightAsIfStatic; // 0x0238 (0x0001)
    bool bLightAttachmentsAsGroup; // 0x0239 (0x0001)
    bool bEnableOpaqueEmissiveLighting; // 0x0239 (0x0001)
    bool bForceBackfaceShadows; // 0x0239 (0x0001)
    uint8_t Pad_4[0x2]; // 0x023A (0x0002)
    uint8_t BendShadowDepthBias; // 0x023C (0x0001)
    uint8_t BendShadowCastingCategory; // 0x023D (0x0001)
    uint8_t IndirectLightingCacheQuality; // 0x023E (0x0001)
    uint8_t Pad_5[0x1]; // 0x023F (0x0001)
    bool bSingleSampleShadowFromStationaryLights; // 0x0240 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0241 (0x0003)
    uint8_t LightingChannels[0x3]; // 0x0244 (0x0003)
    bool bHasCachedStaticLighting; // 0x0247 (0x0001)
    bool bStaticLightingBuildEnqueued; // 0x0248 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0249 (0x0003)
    bool bIgnoreRadialImpulse; // 0x024C (0x0001)
    bool bIgnoreRadialForce; // 0x024C (0x0001)
    bool AlwaysLoadOnClient; // 0x024C (0x0001)
    bool AlwaysLoadOnServer; // 0x024C (0x0001)
    bool bUseEditorCompositing; // 0x024C (0x0001)
    bool bRenderCustomDepth; // 0x024C (0x0001)
    uint8_t Pad_8[0x3]; // 0x024D (0x0003)
    int32_t CustomDepthStencilValue; // 0x0250 (0x0004)
    int32_t TranslucencySortPriority; // 0x0254 (0x0004)
    int32_t VisibilityId; // 0x0258 (0x0004)
    uint8_t Pad_9[0x4]; // 0x025C (0x0004)
    float LpvBiasMultiplier; // 0x0260 (0x0004)
    uint8_t Pad_10[0xC]; // 0x0264 (0x000C)
    uint8_t BodyInstance[0x1B0]; // 0x0270 (0x01B0)
    uint8_t BendVoxelNormalOffset; // 0x0420 (0x0001)
    uint8_t BendVoxelEmissiveScale; // 0x0421 (0x0001)
    uint8_t BendEmissiveVoxelizationOffset; // 0x0422 (0x0001)
    uint8_t Pad_11[0x1]; // 0x0423 (0x0001)
    bool bDisableOcclusionVoxelization; // 0x0424 (0x0001)
    bool bAllowMovableVoxelization; // 0x0424 (0x0001)
    bool bAllowMaskedVoxelization; // 0x0424 (0x0001)
    bool bDisableEmissiveVoxelization; // 0x0424 (0x0001)
    bool bExpandBoundsForVoxelInjection; // 0x0424 (0x0001)
    bool bAllowEmissiveVoxelNormalOffset; // 0x0424 (0x0001)
    bool bHideInReflectionCapture; // 0x0424 (0x0001)
    bool bOverrideNeverUseWetness; // 0x0424 (0x0001)
    bool bNeverUseWetnessOverride; // 0x0425 (0x0001)
    bool bOverrideUsePaintedWetness; // 0x0425 (0x0001)
    bool bUsePaintedWetnessOverride; // 0x0425 (0x0001)
    bool bOverrideIncludeInUIMap; // 0x0425 (0x0001)
    bool bIncludeInUIMapOverride; // 0x0425 (0x0001)
    bool bIsAttachedLightInfulence; // 0x0425 (0x0001)
    uint8_t Pad_12[0x6]; // 0x0426 (0x0006)
    uint8_t bHasCustomNavigableGeometry; // 0x042C (0x0001)
    uint8_t Pad_13[0x3]; // 0x042D (0x0003)
    float BoundsScale; // 0x0430 (0x0004)
    float LastSubmitTime; // 0x0434 (0x0004)
    float LastRenderTime; // 0x0438 (0x0004)
    float LastRenderTimeOnScreen; // 0x043C (0x0004)
    uint8_t Pad_14[0x4]; // 0x0440 (0x0004)
    uint8_t CanBeCharacterBase; // 0x0444 (0x0001)
    uint8_t Pad_15[0xF]; // 0x0445 (0x000F)
    uint8_t CanCharacterStepUpOn; // 0x0454 (0x0001)
    uint8_t Pad_16[0x33]; // 0x0455 (0x0033)
    uint8_t OnComponentHit[0x10]; // 0x0488 (0x0010)
    uint8_t OnComponentBeginOverlap[0x10]; // 0x0498 (0x0010)
    uint8_t OnComponentEndOverlap[0x10]; // 0x04A8 (0x0010)
    uint8_t OnComponentWake[0x10]; // 0x04B8 (0x0010)
    uint8_t OnComponentSleep[0x10]; // 0x04C8 (0x0010)
    uint8_t OnBeginCursorOver[0x10]; // 0x04D8 (0x0010)
    uint8_t OnEndCursorOver[0x10]; // 0x04E8 (0x0010)
    uint8_t OnClicked[0x10]; // 0x04F8 (0x0010)
    uint8_t OnReleased[0x10]; // 0x0508 (0x0010)
    uint8_t OnInputTouchBegin[0x10]; // 0x0518 (0x0010)
    uint8_t OnInputTouchEnd[0x10]; // 0x0528 (0x0010)
    uint8_t OnInputTouchEnter[0x10]; // 0x0538 (0x0010)
    uint8_t OnInputTouchLeave[0x10]; // 0x0548 (0x0010)
    uint8_t Pad_17[0x18]; // 0x0558 (0x0018)
    class UObject* LODParentPrimitive; // 0x0570 (0x0008)
    uint8_t PostPhysicsComponentTick[0x50]; // 0x0578 (0x0050)
    uint8_t PhysActivationBounds_ObjectState; // 0x05C8 (0x0001)

public:
    void WakeRigidBody(struct FName BoneName);
    void WakeAllRigidBodies();
    void SetWalkableSlopeOverride(uint8_t NewOverride);
    void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority);
    void SetSimulatePhysics(bool bSimulate);
    void SetRenderInMainPass(bool bValue);
    void SetRenderCustomDepth(bool bValue);
    void SetReceivesDecals(bool bNewReceivesDecals);
    void SetPhysMaterialOverride(class UObject* NewPhysMaterial);
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName);
    void SetPhysicsLinearVelocity(uint8_t NewVel, bool bAddToCurrent, struct FName BoneName);
    void SetPhysicsAngularVelocity(uint8_t NewAngVel, bool bAddToCurrent, struct FName BoneName);
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    void SetMaterial(int32_t ElementIndex, class UObject* Material);
    void SetMassScale(struct FName BoneName, float InMassScale);
    void SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass);
    void SetLockedAxis(uint8_t LockedAxis);
    void SetLinearDamping(float InDamping);
    void SetEnableOpaqueEmissiveLighting(bool InValue);
    void SetEnableGravity(bool bGravityEnabled);
    void SetCustomDepthStencilValue(int32_t Value);
    void SetCullDistance(float NewCullDistance);
    void SetConstraintMode(uint8_t ConstraintMode);
    void SetCollisionResponseToChannel(uint8_t Channel, uint8_t NewResponse);
    void SetCollisionResponseToAllChannels(uint8_t NewResponse);
    void SetCollisionProfileName(struct FName InCollisionProfileName);
    void SetCollisionObjectType(uint8_t Channel);
    void SetCollisionEnabled(uint8_t NewType);
    void SetCenterOfMass(uint8_t CenterOfMassOffset, struct FName BoneName);
    void SetCastShadow(bool NewCastShadow);
    void SetBoundsScale(float NewBoundsScale);
    void SetBendShadowCastingCategory(uint8_t inBendShadowCastingCategory);
    void SetAngularDamping(float InDamping);
    void SetAllPhysicsLinearVelocity(uint8_t NewVel, bool bAddToCurrent);
    void SetAllMassScale(float InMassScale);
    uint8_t ScaleByMomentOfInertia(uint8_t InputVector, struct FName BoneName);
    void PutRigidBodyToSleep(struct FName BoneName);
    bool K2_LineTraceComponent(uint8_t TraceStart, uint8_t TraceEnd, bool bTraceComplex, bool bShowTrace, uint8_t HitLocation, uint8_t HitNormal, struct FName BoneName);
    bool IsOverlappingComponent(class UObject* OtherComp);
    bool IsOverlappingActor(class UObject* Other);
    bool IsGravityEnabled();
    void IgnoreComponentWhenMoving(class UObject* Component, bool bShouldIgnore);
    void IgnoreActorWhenMoving(class UObject* Actor, bool bShouldIgnore);
    bool HasSimpleCollision();
    uint8_t GetWalkableSlopeOverride();
    uint8_t GetPhysicsLinearVelocityAtPoint(uint8_t Point, struct FName BoneName);
    uint8_t GetPhysicsLinearVelocity(struct FName BoneName);
    uint8_t GetPhysicsAngularVelocity(struct FName BoneName);
    void GetOverlappingComponents(struct TArray<uint8_t> InOverlappingComponents);
    void GetOverlappingActors(struct TArray<uint8_t> OverlappingActors, class UClass* ClassFilter);
    struct TArray<uint8_t> GetOverlapInfos();
    int32_t GetNumMaterials();
    float GetMinScreenSize();
    float GetMaxDrawDistance();
    class UObject* GetMaterial(int32_t ElementIndex);
    float GetMassScale(struct FName BoneName);
    float GetMass();
    float GetLinearDamping();
    uint8_t GetInertiaTensor(struct FName BoneName);
    uint8_t GetCollisionResponseToChannel(uint8_t Channel);
    struct FName GetCollisionProfileName();
    uint8_t GetCollisionObjectType();
    float GetClosestPointOnCollision(uint8_t Point, uint8_t OutPointOnBody, struct FName BoneName);
    uint8_t GetCenterOfMass(struct FName BoneName);
    float GetAngularDamping();
    class UObject* CreateDynamicMaterialInstance(int32_t ElementIndex, class UObject* SourceMaterial);
    class UObject* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, class UObject* Parent);
    class UObject* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex);
    struct TArray<uint8_t> CopyArrayOfMoveIgnoreActors();
    void ClearMoveIgnoreComponents();
    void ClearMoveIgnoreActors();
    bool CanCharacterStepUp(class UObject* Pawn);
    void AddTorque(uint8_t Torque, struct FName BoneName, bool bAccelChange);
    void AddRadialImpulse(uint8_t Origin, float Radius, float Strength, uint8_t Falloff, bool bVelChange);
    void AddRadialForce(uint8_t Origin, float Radius, float Strength, uint8_t Falloff, bool bAccelChange);
    void AddImpulseAtLocation(uint8_t Impulse, uint8_t Location, struct FName BoneName);
    void AddImpulse(uint8_t Impulse, struct FName BoneName, bool bVelChange);
    void AddForceAtLocation(uint8_t Force, uint8_t Location, struct FName BoneName);
    void AddForce(uint8_t Force, struct FName BoneName, bool bAccelChange);
    void AddAngularImpulse(uint8_t Impulse, struct FName BoneName, bool bVelChange);
};

// Class: Engine.MeshComponent
class MeshComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    struct TArray<uint8_t> OverrideMaterials; // 0x05D0 (0x0010)

public:
    void SetVectorParameterValueOnMaterials(struct FName ParameterName, uint8_t ParameterValue);
    void SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue);
    struct TArray<uint8_t> GetMaterials();
};

// Class: Engine.StaticMeshComponent
class StaticMeshComponent : public MeshComponent {
public:
    uint8_t Pad_0[0x660]; // 0x0028 (0x0660)
    int32_t ForcedLodModel; // 0x0688 (0x0004)
    int32_t PreviousLODLevel; // 0x068C (0x0004)
    bool bOverrideMinLOD; // 0x0690 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0691 (0x0003)
    int32_t MinLOD; // 0x0694 (0x0004)
    class UObject* StaticMesh; // 0x0698 (0x0008)
    bool bOverrideWireframeColor; // 0x06A0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x06A1 (0x0003)
    uint8_t WireframeColorOverride[0x4]; // 0x06A4 (0x0004)
    bool bOverrideNavigationExport; // 0x06A8 (0x0001)
    bool bForceNavigationObstacle; // 0x06A8 (0x0001)
    bool bDisallowMeshPaintPerInstance; // 0x06A8 (0x0001)
    bool bIgnoreInstanceForTextureStreaming; // 0x06A8 (0x0001)
    bool bOverrideLightMapRes; // 0x06A8 (0x0001)
    uint8_t Pad_3[0x3]; // 0x06A9 (0x0003)
    int32_t OverriddenLightMapRes; // 0x06AC (0x0004)
    float StreamingDistanceMultiplier; // 0x06B0 (0x0004)
    int32_t SubDivisionStepSize; // 0x06B4 (0x0004)
    bool bUseSubDivisions; // 0x06B8 (0x0001)
    uint8_t Pad_4[0x7]; // 0x06B9 (0x0007)
    struct TArray<uint8_t> IrrelevantLights; // 0x06C0 (0x0010)
    struct TArray<uint8_t> LODData; // 0x06D0 (0x0010)
    uint8_t LightmassSettings[0x18]; // 0x06E0 (0x0018)
    bool bForceNavMeshEvenIfNotCollidable; // 0x06F8 (0x0001)
    bool bExcludeFromBendMeshCollection; // 0x06F8 (0x0001)
    bool bDisableRandomizedPickups; // 0x06F8 (0x0001)
    bool bIgnoreMoveablityForWetness; // 0x06F8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x06F9 (0x0003)
    bool DisableStaticMeshEdges; // 0x06FC (0x0001)

public:
    bool SetStaticMesh(class UObject* NewMesh);
    void SetProxySettings(uint8_t ProxySettings);
    void SetForcedLodModel(int32_t NewForcedLodModel);
    void RevertProxySettingsToDefaults();
    void OnRep_StaticMesh(class UObject* OldStaticMesh);
    int32_t NumberOfTraversalEdges();
    bool HasInstanceVertexColors();
    uint8_t GetProxySettings();
    void GetLocalBounds(uint8_t Min, uint8_t Max);
};

// Class: Engine.Pawn
class Pawn : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    bool bUseControllerRotationPitch; // 0x0350 (0x0001)
    bool bUseControllerRotationYaw; // 0x0350 (0x0001)
    bool bUseControllerRotationRoll; // 0x0350 (0x0001)
    bool bCanAffectNavigationGeneration; // 0x0350 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0351 (0x0003)
    float BaseEyeHeight; // 0x0354 (0x0004)
    uint8_t AutoPossessPlayer; // 0x0358 (0x0001)
    uint8_t AutoPossessAI; // 0x0359 (0x0001)
    uint8_t Pad_2[0x6]; // 0x035A (0x0006)
    class UClass* AIControllerClass; // 0x0360 (0x0008)
    class UObject* PlayerState; // 0x0368 (0x0008)
    uint8_t RemoteViewPitch; // 0x0370 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0371 (0x0007)
    class UObject* LastHitBy; // 0x0378 (0x0008)
    class UObject* Controller; // 0x0380 (0x0008)
    uint8_t Pad_4[0x8]; // 0x0388 (0x0008)
    uint8_t ControlInputVector[0xC]; // 0x0390 (0x000C)
    uint8_t LastControlInputVector[0xC]; // 0x039C (0x000C)

public:
    void SpawnDefaultController();
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    void ReceiveUnpossessed(class UObject* OldController);
    void ReceivePossessed(class UObject* NewController);
    void PawnMakeNoise(float Loudness, uint8_t NoiseLocation, bool bUseNoiseMakerLocation, class UObject* NoiseMaker);
    void OnRep_PlayerState();
    void OnRep_Controller();
    void LaunchPawn(uint8_t LaunchVelocity, bool bXYOverride, bool bZOverride);
    uint8_t K2_GetMovementInputVector();
    bool IsPlayerControlled();
    bool IsMoveInputIgnored();
    bool IsLocallyControlled();
    bool IsControlled();
    uint8_t GetPendingMovementInputVector();
    uint8_t GetNavAgentLocation();
    class UObject* GetMovementComponent();
    class UObject* GetMovementBaseActor(class UObject* Pawn);
    uint8_t GetLastMovementInputVector();
    uint8_t GetControlRotation();
    class UObject* GetController();
    uint8_t GetBaseAimRotation();
    void DetachFromControllerPendingDestroy();
    uint8_t ConsumeMovementInputVector();
    void AddMovementInput(uint8_t WorldDirection, float ScaleValue, bool bForce);
    void AddControllerYawInput(float Val);
    void AddControllerRollInput(float Val);
    void AddControllerPitchInput(float Val);
};

// Class: Engine.Character
class Character : public Pawn {
public:
    uint8_t Pad_0[0x388]; // 0x0028 (0x0388)
    class UObject* Mesh; // 0x03B0 (0x0008)
    class UObject* CharacterMovement; // 0x03B8 (0x0008)
    class UObject* CapsuleComponent; // 0x03C0 (0x0008)
    uint8_t BasedMovement[0x30]; // 0x03C8 (0x0030)
    uint8_t ReplicatedBasedMovement[0x30]; // 0x03F8 (0x0030)
    uint8_t BaseTranslationOffset[0xC]; // 0x0428 (0x000C)
    uint8_t Pad_1[0xC]; // 0x0434 (0x000C)
    uint8_t BaseRotationOffset[0x10]; // 0x0440 (0x0010)
    uint8_t ReplicatedMovementMode; // 0x0450 (0x0001)
    bool bInBaseReplication; // 0x0451 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0452 (0x0002)
    float CrouchedEyeHeight; // 0x0454 (0x0004)
    bool bIsCrouched; // 0x0458 (0x0001)
    bool bPressedJump; // 0x0458 (0x0001)
    bool bClientUpdating; // 0x0458 (0x0001)
    bool bClientWasFalling; // 0x0458 (0x0001)
    bool bClientResimulateRootMotion; // 0x0458 (0x0001)
    bool bClientResimulateRootMotionSources; // 0x0458 (0x0001)
    bool bSimGravityDisabled; // 0x0458 (0x0001)
    bool bClientCheckEncroachmentOnNetUpdate; // 0x0458 (0x0001)
    bool bServerMoveIgnoreRootMotion; // 0x0459 (0x0001)
    uint8_t Pad_3[0x2]; // 0x045A (0x0002)
    float JumpKeyHoldTime; // 0x045C (0x0004)
    float JumpMaxHoldTime; // 0x0460 (0x0004)
    uint8_t Pad_4[0x4]; // 0x0464 (0x0004)
    uint8_t OnReachedJumpApex[0x10]; // 0x0468 (0x0010)
    uint8_t Pad_5[0x20]; // 0x0478 (0x0020)
    uint8_t OnCharacterMovementUpdated[0x10]; // 0x0498 (0x0010)
    uint8_t SavedRootMotion[0x100]; // 0x04A8 (0x0100)
    uint8_t Pad_6[0x8]; // 0x05A8 (0x0008)
    uint8_t ClientRootMotionParams[0x40]; // 0x05B0 (0x0040)
    struct TArray<uint8_t> RootMotionRepMoves; // 0x05F0 (0x0010)
    uint8_t RepRootMotion[0x160]; // 0x0600 (0x0160)

public:
    void UnCrouch(bool bClientSimulation);
    void StopJumping();
    void StopAnimMontage(class UObject* AnimMontage);
    void SetReplicateMovement(bool bInReplicateMovement);
    void RemoveBrightnessOverride(class UObject* BrightnessOverrideActor);
    float PlayAnimMontage(class UObject* AnimMontage, float InPlayRate, struct FName StartSectionName);
    void OnWalkingOffLedge(uint8_t PreviousFloorImpactNormal, uint8_t PreviousFloorContactNormal, uint8_t PreviousLocation, float TimeDelta);
    void OnRep_RootMotion();
    void OnRep_ReplicatedBasedMovement();
    void OnRep_IsCrouched();
    void OnLaunched(uint8_t LaunchVelocity, bool bXYOverride, bool bZOverride);
    void OnLanded(uint8_t Hit);
    void OnJumped();
    void LaunchCharacter(uint8_t LaunchVelocity, bool bXYOverride, bool bZOverride);
    void K2_UpdateCustomMovement(float DeltaTime);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnMovementModeChanged(uint8_t PrevMovementMode, uint8_t NewMovementMode, uint8_t PrevCustomMode, uint8_t NewCustomMode);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void Jump();
    bool IsPlayingRootMotion();
    bool IsPlayingNetworkedRootMotionMontage();
    bool IsJumpProvidingForce();
    class UObject* GetCurrentMontage();
    void Crouch(bool bClientSimulation);
    void ClientCheatWalk();
    void ClientCheatGhost();
    void ClientCheatFly();
    bool CanJumpInternal();
    bool CanJump();
    void AddBrightnessOverride(class UObject* BrightnessOverrideActor, float Brightness);
};

// Class: Engine.World
class World : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* PersistentLevel; // 0x0030 (0x0008)
    class UObject* NetDriver; // 0x0038 (0x0008)
    class UObject* LineBatcher; // 0x0040 (0x0008)
    class UObject* PersistentLineBatcher; // 0x0048 (0x0008)
    class UObject* ForegroundLineBatcher; // 0x0050 (0x0008)
    class UObject* ProjectileTracersRenderComponent; // 0x0058 (0x0008)
    class UObject* GameState; // 0x0060 (0x0008)
    class UObject* NetworkManager; // 0x0068 (0x0008)
    class UObject* PhysicsCollisionHandler; // 0x0070 (0x0008)
    struct TArray<uint8_t> ExtraReferencedObjects; // 0x0078 (0x0010)
    struct TArray<uint8_t> PerModuleDataObjects; // 0x0088 (0x0010)
    struct TArray<uint8_t> StreamingLevels; // 0x0098 (0x0010)
    uint8_t Pad_1[0x90]; // 0x00A8 (0x0090)
    struct FString StreamingLevelsPrefix; // 0x0138 (0x0010)
    class UObject* CurrentLevelPendingVisibility; // 0x0148 (0x0008)
    class UObject* DemoNetDriver; // 0x0150 (0x0008)
    class UObject* MyParticleEventManager; // 0x0158 (0x0008)
    class UObject* DefaultPhysicsVolume; // 0x0160 (0x0008)
    uint8_t Pad_2[0x90]; // 0x0168 (0x0090)
    struct TArray<uint8_t> PendingStreamingActors; // 0x01F8 (0x0010)
    uint8_t Pad_3[0x78]; // 0x0208 (0x0078)
    struct TArray<uint8_t> LevelsToClean; // 0x0280 (0x0010)
    uint8_t Pad_4[0x1F0]; // 0x0290 (0x01F0)
    class UObject* NavigationSystem; // 0x0480 (0x0008)
    class UObject* CoverSystem; // 0x0488 (0x0008)
    class UObject* LocationSystem; // 0x0490 (0x0008)
    class UObject* AuthorityGameMode; // 0x0498 (0x0008)
    class UObject* AISystem; // 0x04A0 (0x0008)
    class UObject* AvoidanceManager; // 0x04A8 (0x0008)
    struct TArray<uint8_t> Levels; // 0x04B0 (0x0010)
    uint8_t Pad_5[0x60]; // 0x04C0 (0x0060)
    class UObject* CurrentLevel; // 0x0520 (0x0008)
    class UObject* OwningGameInstance; // 0x0528 (0x0008)
    struct TArray<uint8_t> ParameterCollectionInstances; // 0x0530 (0x0010)
    uint8_t Pad_6[0x6F8]; // 0x0540 (0x06F8)
    class UObject* WorldComposition; // 0x0C38 (0x0008)
    uint8_t Pad_7[0x45]; // 0x0C40 (0x0045)
    bool bAreConstraintsDirty; // 0x0C85 (0x0001)

public:
    void OnBeforeGC();
};

// Class: Engine.BendCoverSystem
class BendCoverSystem : public Object {
public:
    uint8_t Pad_0[0x78]; // 0x0028 (0x0078)
    struct TArray<uint8_t> AllCoverData; // 0x00A0 (0x0010)
};

// Class: Engine.Controller
class Controller : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    class UObject* Pawn; // 0x0350 (0x0008)
    uint8_t Pad_1[0x8]; // 0x0358 (0x0008)
    class UObject* Character; // 0x0360 (0x0008)
    class UObject* PlayerState; // 0x0368 (0x0008)
    class UObject* TransformComponent; // 0x0370 (0x0008)
    uint8_t ControlRotation[0xC]; // 0x0378 (0x000C)
    bool bAttachToPawn; // 0x0384 (0x0001)
    uint8_t Pad_2[0xB]; // 0x0385 (0x000B)
    struct FName StateName; // 0x0390 (0x0008)

public:
    void UnPossess();
    void StopMovement();
    void SetInitialLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation);
    void SetControlRotation(uint8_t NewRotation);
    void ReceiveInstigatedAnyDamage(float Damage, class UObject* DamageType, class UObject* DamagedActor, class UObject* DamageCauser);
    void Possess(class UObject* InPawn);
    void OnRep_PlayerState();
    void OnRep_Pawn();
    bool LineOfSightTo(class UObject* Other, uint8_t ViewPoint, bool bAlternateChecks);
    class UObject* K2_GetPawn();
    bool IsLocalPlayerController();
    bool IsLocalController();
    class UObject* GetViewTarget();
    uint8_t GetDesiredRotation();
    uint8_t GetControlRotation();
    void ClientSetRotation(uint8_t NewRotation, bool bResetCamera);
    void ClientSetLocation(uint8_t NewLocation, uint8_t NewRotation);
    class UObject* CastToPlayerController();
};

// Class: Engine.AnimNotify
class AnimNotify : public Object {
public:

public:
    bool Received_Notify(class UObject* MeshComp, class UObject* Animation);
    struct FString GetNotifyName();
};

// Class: Engine.BlueprintFunctionLibrary
class BlueprintFunctionLibrary : public Object {
public:

public:
    uint8_t MakeStringAssetReference(struct FString AssetLongPathname);
};

// Class: Engine.BlueprintAsyncActionBase
class BlueprintAsyncActionBase : public Object {
public:

public:
    void Activate();
};

// Class: Engine.DeveloperSettings
class DeveloperSettings : public Object {
public:
};

// Class: Engine.SkeletalMeshActor
class SkeletalMeshActor : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    bool bShouldDoAnimNotifies; // 0x0350 (0x0001)
    bool bWakeOnLevelStart; // 0x0350 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0351 (0x0007)
    class UObject* SkeletalMeshComponent; // 0x0358 (0x0008)
    class UObject* ReplicatedMesh; // 0x0360 (0x0008)
    class UObject* ReplicatedPhysAsset; // 0x0368 (0x0008)
    class UObject* ReplicatedMaterial0; // 0x0370 (0x0008)
    class UObject* ReplicatedMaterial1; // 0x0378 (0x0008)

public:
    void OnRep_ReplicatedPhysAsset();
    void OnRep_ReplicatedMesh();
    void OnRep_ReplicatedMaterial1();
    void OnRep_ReplicatedMaterial0();
};

// Class: Engine.HUD
class HUD : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    uint8_t WhiteColor[0x4]; // 0x0348 (0x0004)
    uint8_t GreenColor[0x4]; // 0x034C (0x0004)
    uint8_t RedColor[0x4]; // 0x0350 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0354 (0x0004)
    class UObject* PlayerOwner; // 0x0358 (0x0008)
    bool bLostFocusPaused; // 0x0360 (0x0001)
    bool bShowHUD; // 0x0360 (0x0001)
    bool bShowDebugInfo; // 0x0360 (0x0001)
    bool bShowHitBoxDebugInfo; // 0x0360 (0x0001)
    bool bShowOverlays; // 0x0360 (0x0001)
    bool bEnableDebugTextShadow; // 0x0360 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0361 (0x0007)
    struct TArray<uint8_t> PostRenderedActors; // 0x0368 (0x0010)
    struct TArray<uint8_t> DebugPostRenderedActors; // 0x0378 (0x0010)
    float LastHUDRenderTime; // 0x0388 (0x0004)
    float RenderDelta; // 0x038C (0x0004)
    struct TArray<uint8_t> DebugDisplay; // 0x0390 (0x0010)
    struct TArray<uint8_t> ToggledDebugCategories; // 0x03A0 (0x0010)
    class UObject* Canvas; // 0x03B0 (0x0008)
    class UObject* DebugCanvas; // 0x03B8 (0x0008)
    struct TArray<uint8_t> DebugTextList; // 0x03C0 (0x0010)
    bool bShowDebugForReticleTarget; // 0x03D0 (0x0001)
    uint8_t Pad_3[0x7]; // 0x03D1 (0x0007)
    class UClass* ShowDebugTargetDesiredClass; // 0x03D8 (0x0008)
    class UObject* ShowDebugTargetActor; // 0x03E0 (0x0008)

public:
    void ShowStatObjectTypeCountsForType(class UClass* DesiredClass);
    void ShowHUD();
    void ShowDebugToggleSubCategory(struct FName Category);
    void ShowDebugForReticleTargetToggle(class UClass* DesiredClass);
    void ShowDebug(struct FName DebugType);
    void RemoveDebugText(class UObject* SrcActor, bool bLeaveDurationText);
    void RemoveAllDebugStrings();
    void ReceiveHitBoxRelease(struct FName BoxName);
    void ReceiveHitBoxEndCursorOver(struct FName BoxName);
    void ReceiveHitBoxClick(struct FName BoxName);
    void ReceiveHitBoxBeginCursorOver(struct FName BoxName);
    void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
    uint8_t Project(uint8_t Location);
    void GetTextSize(struct FString Text, float OutWidth, float OutHeight, class UObject* Font, float Scale);
    class UObject* GetOwningPlayerController();
    class UObject* GetOwningPawn();
    void GetActorsInSelectionRectangle(class UClass* ClassFilter, uint8_t FirstPoint, uint8_t SecondPoint, struct TArray<uint8_t> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    void DrawTextureSimple(class UObject* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    void DrawTexture(class UObject* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, uint8_t TintColor, uint8_t BlendMode, float Scale, bool bScalePosition, float Rotation, uint8_t RotPivot);
    void DrawText(struct FString Text, uint8_t TextColor, float ScreenX, float ScreenY, class UObject* Font, float Scale, bool bScalePosition);
    void DrawRect(uint8_t RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    void DrawMaterialTriangle(class UObject* Material, uint8_t V0_Pos, uint8_t V1_Pos, uint8_t V2_Pos, uint8_t V0_UV, uint8_t V1_UV, uint8_t V2_UV, uint8_t V0_Color, uint8_t V1_Color, uint8_t V2_Color);
    void DrawMaterialSimple(class UObject* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    void DrawMaterial(class UObject* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, uint8_t RotPivot);
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, uint8_t LineColor);
    void Deproject(float ScreenX, float ScreenY, uint8_t WorldPosition, uint8_t WorldDirection);
    void AddHitBox(uint8_t Position, uint8_t Size, struct FName InName, bool bConsumesInput, int32_t Priority);
    void AddDebugText(struct FString DebugText, class UObject* SrcActor, float Duration, uint8_t Offset, uint8_t DesiredOffset, uint8_t TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UObject* InFont, float FontScale, bool bDrawShadow);
};

// Class: Engine.PlayerCameraManager
class PlayerCameraManager : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* PCOwner; // 0x0348 (0x0008)
    class UObject* TransformComponent; // 0x0350 (0x0008)
    uint8_t Pad_1[0x8]; // 0x0358 (0x0008)
    float DefaultFOV; // 0x0360 (0x0004)
    uint8_t Pad_2[0x8]; // 0x0364 (0x0008)
    float DefaultOrthoWidth; // 0x036C (0x0004)
    uint8_t Pad_3[0x4]; // 0x0370 (0x0004)
    float DefaultAspectRatio; // 0x0374 (0x0004)
    uint8_t Pad_4[0x48]; // 0x0378 (0x0048)
    uint8_t CameraCache[0x9B0]; // 0x03C0 (0x09B0)
    uint8_t LastFrameCameraCache[0x9B0]; // 0x0D70 (0x09B0)
    uint8_t ViewTarget[0x9C0]; // 0x1720 (0x09C0)
    uint8_t PendingViewTarget[0x9C0]; // 0x20E0 (0x09C0)
    uint8_t Pad_5[0x18]; // 0x2AA0 (0x0018)
    struct TArray<uint8_t> ModifierList; // 0x2AB8 (0x0010)
    struct TArray<uint8_t> DefaultModifiers; // 0x2AC8 (0x0010)
    float FreeCamDistance; // 0x2AD8 (0x0004)
    uint8_t FreeCamOffset[0xC]; // 0x2ADC (0x000C)
    uint8_t ViewTargetOffset[0xC]; // 0x2AE8 (0x000C)
    uint8_t Pad_6[0x14]; // 0x2AF4 (0x0014)
    struct TArray<uint8_t> CameraLensEffects; // 0x2B08 (0x0010)
    class UObject* CachedCameraShakeMod; // 0x2B18 (0x0008)
    class UObject* AnimInstPool; // 0x2B20 (0x0008)
    uint8_t Pad_7[0x38]; // 0x2B28 (0x0038)
    struct TArray<uint8_t> PostProcessBlendCache; // 0x2B60 (0x0010)
    uint8_t Pad_8[0x970]; // 0x2B70 (0x0970)
    struct TArray<uint8_t> ActiveAnims; // 0x34E0 (0x0010)
    struct TArray<uint8_t> FreeAnims; // 0x34F0 (0x0010)
    class UObject* AnimCameraActor; // 0x3500 (0x0008)
    bool bIsOrthographic; // 0x3508 (0x0001)
    bool bUseClientSideCameraUpdates; // 0x3508 (0x0001)
    uint8_t Pad_9[0x7F]; // 0x3509 (0x007F)
    float ViewPitchMin; // 0x3588 (0x0004)
    float ViewPitchMax; // 0x358C (0x0004)
    float ViewYawMin; // 0x3590 (0x0004)
    float ViewYawMax; // 0x3594 (0x0004)
    float ViewRollMin; // 0x3598 (0x0004)
    float ViewRollMax; // 0x359C (0x0004)

public:
    void StopCameraShake(class UObject* ShakeInstance);
    void StopCameraFade();
    void StopCameraAnimInst(class UObject* AnimInst, bool bImmediate);
    void StopAllInstancesOfCameraShake(class UClass* Shake);
    void StopAllInstancesOfCameraAnim(class UObject* anim, bool bImmediate);
    void StopAllCameraShakes();
    void StopAllCameraAnims(bool bImmediate);
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, uint8_t Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    void SetManualCameraFade(float InFadeAmount, uint8_t Color, bool bInFadeAudio);
    bool RemoveCameraModifier(class UObject* ModifierToRemove);
    void RemoveCameraLensEffect(class UObject* Emitter);
    class UObject* PlayCameraShake(class UClass* ShakeClass, float Scale, uint8_t PlaySpace, uint8_t UserPlaySpaceRot);
    class UObject* PlayCameraAnim(class UObject* anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, uint8_t PlaySpace, uint8_t UserPlaySpaceRot);
    class UObject* GetOwningPlayerController();
    float GetFOVAngle();
    uint8_t GetCameraRotation();
    uint8_t GetCameraLocation();
    class UObject* FindCameraModifierByClass(class UClass* ModifierClass);
    void ClearCameraLensEffects();
    bool BlueprintUpdateCamera(class UObject* CameraTarget, uint8_t NewCameraLocation, uint8_t NewCameraRotation, float NewCameraFOV);
    class UObject* AddNewCameraModifier(class UClass* ModifierClass);
    class UObject* AddCameraLensEffect(class UClass* LensEffectEmitterClass);
};

// Class: Engine.PlayerController
class PlayerController : public Controller {
public:
    uint8_t Pad_0[0x380]; // 0x0028 (0x0380)
    class UObject* Player; // 0x03A8 (0x0008)
    uint8_t Pad_1[0x8]; // 0x03B0 (0x0008)
    class UObject* AcknowledgedPawn; // 0x03B8 (0x0008)
    class UObject* ControllingDirTrackInst; // 0x03C0 (0x0008)
    uint8_t Pad_2[0x8]; // 0x03C8 (0x0008)
    class UObject* MyHUD; // 0x03D0 (0x0008)
    class UObject* PlayerCameraManager; // 0x03D8 (0x0008)
    class UClass* PlayerCameraManagerClass; // 0x03E0 (0x0008)
    bool bAutoManageActiveCameraTarget; // 0x03E8 (0x0001)
    uint8_t Pad_3[0x3]; // 0x03E9 (0x0003)
    uint8_t TargetViewRotation[0xC]; // 0x03EC (0x000C)
    uint8_t Pad_4[0x10]; // 0x03F8 (0x0010)
    struct TArray<uint8_t> HiddenActors; // 0x0408 (0x0010)
    float LastSpectatorStateSynchTime; // 0x0418 (0x0004)
    uint8_t LastSpectatorSyncLocation[0xC]; // 0x041C (0x000C)
    uint8_t LastSpectatorSyncRotation[0xC]; // 0x0428 (0x000C)
    int32_t ClientCap; // 0x0434 (0x0004)
    class UObject* CheatManager; // 0x0438 (0x0008)
    class UClass* CheatClass; // 0x0440 (0x0008)
    class UObject* PlayerInput; // 0x0448 (0x0008)
    struct TArray<uint8_t> ActiveForceFeedbackEffects; // 0x0450 (0x0010)
    uint8_t Pad_5[0x80]; // 0x0460 (0x0080)
    bool bCinematicMode; // 0x04E0 (0x0001)
    bool bMenu3DMode; // 0x04E0 (0x0001)
    bool bPlayerIsWaiting; // 0x04E0 (0x0001)
    uint8_t Pad_6[0x3]; // 0x04E1 (0x0003)
    uint8_t NetPlayerIndex; // 0x04E4 (0x0001)
    uint8_t Pad_7[0x3B]; // 0x04E5 (0x003B)
    class UObject* PendingSwapConnection; // 0x0520 (0x0008)
    class UObject* NetConnection; // 0x0528 (0x0008)
    uint8_t Pad_8[0xC]; // 0x0530 (0x000C)
    float InputYawScale; // 0x053C (0x0004)
    float InputPitchScale; // 0x0540 (0x0004)
    float InputRollScale; // 0x0544 (0x0004)
    bool bShowMouseCursor; // 0x0548 (0x0001)
    bool bEnableClickEvents; // 0x0548 (0x0001)
    bool bEnableTouchEvents; // 0x0548 (0x0001)
    bool bEnableMouseOverEvents; // 0x0548 (0x0001)
    bool bEnableTouchOverEvents; // 0x0548 (0x0001)
    bool bForceFeedbackEnabled; // 0x0548 (0x0001)
    uint8_t Pad_9[0x3]; // 0x0549 (0x0003)
    uint8_t DefaultMouseCursor; // 0x054C (0x0001)
    uint8_t CurrentMouseCursor; // 0x054D (0x0001)
    uint8_t DefaultClickTraceChannel; // 0x054E (0x0001)
    uint8_t CurrentClickTraceChannel; // 0x054F (0x0001)
    float HitResultTraceDistance; // 0x0550 (0x0004)
    uint8_t Pad_10[0x8C]; // 0x0554 (0x008C)
    class UObject* InactiveStateInputComponent; // 0x05E0 (0x0008)
    uint8_t Pad_11[0x18]; // 0x05E8 (0x0018)
    class UObject* CurrentTouchInterface; // 0x0600 (0x0008)
    uint8_t Pad_12[0x38]; // 0x0608 (0x0038)
    class UObject* SpectatorPawn; // 0x0640 (0x0008)
    uint8_t SpawnLocation[0xC]; // 0x0648 (0x000C)
    uint8_t Pad_13[0x4]; // 0x0654 (0x0004)
    bool bIsLocalPlayerController; // 0x0658 (0x0001)
    uint8_t Pad_14[0x1]; // 0x0659 (0x0001)
    uint8_t SeamlessTravelCount[0x2]; // 0x065A (0x0002)
    uint8_t LastCompletedSeamlessTravelCount[0x2]; // 0x065C (0x0002)
    uint8_t Pad_15[0x2]; // 0x065E (0x0002)
    uint8_t OnRegionEntered[0x10]; // 0x0660 (0x0010)

public:
    bool WasInputKeyJustReleased(uint8_t Key);
    bool WasInputKeyJustPressed(uint8_t Key);
    void ToggleSpeaking(bool bInSpeaking);
    void SwitchLevel(struct FString URL);
    void StopHapticEffect(uint8_t Hand);
    void StartFire(uint8_t FireModeNum);
    void SetVirtualJoystickVisibility(bool bVisible);
    void SetViewTargetWithBlend(class UObject* NewViewTarget, float BlendTime, uint8_t BlendFunc, float BlendExp, bool bLockOutgoing);
    void SetName(struct FString S);
    void SetMenu3DMode(bool bInMenu3DMode);
    void SetIgnoreMoveInput(bool bNewMoveInput);
    void SetIgnoreLookInput(bool bNewLookInput);
    void SetHapticsByValue(float Frequency, float Amplitude, uint8_t Hand);
    void SetControllerLightColor(uint8_t Color);
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    void SetAudioListenerOverride(class UObject* AttachToComponent, uint8_t Location, uint8_t Rotation);
    void ServerViewSelf(uint8_t TransitionParams);
    void ServerViewPrevPlayer();
    void ServerViewNextPlayer();
    void ServerVerifyViewTarget();
    void ServerUpdateLevelVisibility(struct FName PackageName, bool bIsVisible);
    void ServerUpdateCamera(uint8_t CamLoc, int32_t CamPitchAndYaw);
    void ServerUnmutePlayer(uint8_t PlayerId);
    void ServerToggleAILogging();
    void ServerShortTimeout();
    void ServerSetSpectatorWaiting(bool bWaiting);
    void ServerSetSpectatorLocation(uint8_t NewLoc, uint8_t NewRot);
    void ServerRestartPlayer();
    void ServerPause();
    void ServerNotifyLoadedWorld(struct FName WorldPackageName);
    void ServerMutePlayer(uint8_t PlayerId);
    void ServerCheckClientPossessionReliable();
    void ServerCheckClientPossession();
    void ServerChangeName(struct FString S);
    void ServerCamera(struct FName NewMode);
    void ServerAcknowledgePossession(class UObject* P);
    void SendToConsole(struct FString Command);
    void RestartLevel();
    void ResetIgnoreMoveInput();
    void ResetIgnoreLookInput();
    void ResetIgnoreInputFlags();
    bool ProjectWorldLocationToScreen(uint8_t WorldLocation, uint8_t ScreenLocation);
    void PlayHapticEffect(class UObject* HapticEffect, uint8_t Hand, float Scale);
    void PlayDynamicForceFeedback(float intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, uint8_t Action, uint8_t LatentInfo);
    void Pause();
    void OnServerStartedVisualLogger(bool bIsLogging);
    void LocalTravel(struct FString URL);
    bool IsMoveInputIgnored();
    bool IsLookInputIgnored();
    bool IsInputKeyDown(uint8_t Key);
    bool HasGameViewportFocus();
    void GetViewportSize(int32_t SizeX, int32_t SizeY);
    class UObject* GetSpectatorPawn();
    bool GetMousePosition(float LocationX, float LocationY);
    uint8_t GetInputVectorKeyState(uint8_t Key);
    void GetInputTouchState(uint8_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed);
    void GetInputMouseDelta(float DeltaX, float DeltaY);
    void GetInputMotionState(uint8_t Tilt, uint8_t RotationRate, uint8_t Gravity, uint8_t Acceleration);
    float GetInputKeyTimeDown(uint8_t Key);
    void GetInputAnalogStickState(uint8_t WhichStick, float StickX, float StickY);
    float GetInputAnalogKeyState(uint8_t Key);
    class UObject* GetHud();
    bool GetHitResultUnderFingerForObjects(uint8_t FingerIndex, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, uint8_t HitResult);
    bool GetHitResultUnderFingerByChannel(uint8_t FingerIndex, uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult);
    bool GetHitResultUnderFinger(uint8_t FingerIndex, uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult);
    bool GetHitResultUnderCursorForObjects(struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, uint8_t HitResult);
    bool GetHitResultUnderCursorByChannel(uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult);
    bool GetHitResultUnderCursor(uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult);
    uint8_t GetFocalLocation();
    void FOVMultiplier(float NewFOVMultiplier);
    void FOV(float NewFOV);
    void EnteredRegion(uint8_t Region);
    void EnableCheats();
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, uint8_t WorldLocation, uint8_t WorldDirection);
    bool DeprojectMousePositionToWorld(uint8_t WorldLocation, uint8_t WorldDirection);
    void ConsoleKey(uint8_t Key);
    void ClientWasKicked(struct FText KickReason);
    void ClientVoiceHandshakeComplete();
    void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex);
    void ClientUnmutePlayer(uint8_t PlayerId);
    void ClientTravelInternal(struct FString URL, uint8_t TravelType, bool bSeamless, uint8_t MapPackageGuid);
    void ClientTravel(struct FString URL, uint8_t TravelType, bool bSeamless, uint8_t MapPackageGuid);
    void ClientTeamMessage(class UObject* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime);
    void ClientStopForceFeedback(class UObject* ForceFeedbackEffect, struct FName Tag);
    void ClientStopCameraShake(class UClass* Shake);
    void ClientStopCameraAnim(class UObject* AnimToStop);
    void ClientStartOnlineSession();
    void ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass);
    void ClientSetViewTarget(class UObject* A, uint8_t TransitionParams);
    void ClientSetSpectatorWaiting(bool bWaiting);
    void ClientSetHUD(class UClass* NewHUDClass);
    void ClientSetForceMipLevelsToBeResident(class UObject* Material, float ForceDuration, int32_t CinematicTextureGroups);
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    void ClientSetCameraMode(struct FName NewCamMode);
    void ClientSetCameraFade(bool bEnableFading, uint8_t FadeColor, uint8_t FadeAlpha, float FadeTime, bool bFadeAudio);
    void ClientSetBlockOnAsyncLoading();
    void ClientReturnToMainMenu(struct FString ReturnReason);
    void ClientRetryClientRestart(class UObject* NewPawn);
    void ClientRestart(class UObject* NewPawn);
    void ClientReset();
    void ClientRepObjRef(class UObject* Object);
    void ClientReceiveLocalizedMessage(class UClass* Message, int32_t Switch, class UObject* RelatedPlayerState_1, class UObject* RelatedPlayerState_2, class UObject* OptionalObject);
    void ClientPrestreamTextures(class UObject* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups);
    void ClientPrepareMapChange(struct FName levelName, bool bFirst, bool bLast);
    void ClientPlaySoundAtLocation(class UObject* Sound, uint8_t Location, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlaySound(class UObject* Sound, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlayForceFeedback(class UObject* ForceFeedbackEffect, bool bLooping, struct FName Tag);
    void ClientPlayCameraShake(class UClass* Shake, float Scale, uint8_t PlaySpace, uint8_t UserPlaySpaceRot);
    void ClientPlayCameraAnim(class UObject* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, uint8_t Space, uint8_t CustomPlaySpace);
    void ClientMutePlayer(uint8_t PlayerId);
    void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime);
    void ClientIgnoreMoveInput(bool bIgnore);
    void ClientIgnoreLookInput(bool bIgnore);
    void ClientGotoState(struct FName NewState);
    void ClientGameEnded(class UObject* EndGameFocus, bool bIsWinner);
    void ClientForceGarbageCollection();
    void ClientFlushLevelStreaming();
    void ClientEndOnlineSession();
    void ClientEnableNetworkVoice(bool bEnable);
    void ClientCommitMapChange();
    void ClientClearCameraLensEffects();
    void ClientCapBandwidth(int32_t Cap);
    void ClientCancelPendingMapChange();
    void ClientAddTextureStreamingLoc(uint8_t InLoc, float Duration, bool bOverrideLocation);
    void ClearAudioListenerOverride();
    void Camera(struct FName NewMode);
    void AddYawInput(float Val);
    void AddRollInput(float Val);
    void AddPitchInput(float Val);
    void ActivateTouchInterface(class UObject* NewTouchInterface);
};

// Class: Engine.ShapeComponent
class ShapeComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    uint8_t ShapeColor[0x4]; // 0x05D0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x05D4 (0x0004)
    class UObject* ShapeBodySetup; // 0x05D8 (0x0008)
    bool bDrawOnlyIfSelected; // 0x05E0 (0x0001)
    bool bShouldCollideWhenPlacing; // 0x05E0 (0x0001)
    bool bDynamicObstacle; // 0x05E0 (0x0001)
    bool bSolidTranslucent; // 0x05E0 (0x0001)
    uint8_t Pad_2[0x7]; // 0x05E1 (0x0007)
    class UClass* AreaClass; // 0x05E8 (0x0008)
};

// Class: Engine.SphereComponent
class SphereComponent : public ShapeComponent {
public:
    uint8_t Pad_0[0x5C8]; // 0x0028 (0x05C8)
    float SphereRadius; // 0x05F0 (0x0004)

public:
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    float GetUnscaledSphereRadius();
    float GetShapeScale();
    float GetScaledSphereRadius();
};

// Class: Engine.Brush
class Brush : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    uint8_t BrushType; // 0x0348 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0349 (0x0003)
    uint8_t BrushColor[0x4]; // 0x034C (0x0004)
    int32_t PolyFlags; // 0x0350 (0x0004)
    bool bColored; // 0x0354 (0x0001)
    bool bSolidWhenSelected; // 0x0354 (0x0001)
    bool bSolidTranslucent; // 0x0354 (0x0001)
    bool bPlaceableFromClassBrowser; // 0x0354 (0x0001)
    bool bNotForClientOrServer; // 0x0354 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0355 (0x0003)
    class UObject* Brush; // 0x0358 (0x0008)
    class UObject* BrushComponent; // 0x0360 (0x0008)
    bool bInManipulation; // 0x0368 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0369 (0x0007)
    struct TArray<uint8_t> SavedSelections; // 0x0370 (0x0010)
};

// Class: Engine.Volume
class Volume : public Brush {
public:
};

// Class: Engine.MovementComponent
class MovementComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* UpdatedComponent; // 0x00D0 (0x0008)
    class UObject* UpdatedPrimitive; // 0x00D8 (0x0008)
    uint8_t Pad_1[0x4]; // 0x00E0 (0x0004)
    uint8_t Velocity[0xC]; // 0x00E4 (0x000C)
    bool bConstrainToPlane; // 0x00F0 (0x0001)
    bool bSnapToPlaneAtStart; // 0x00F0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00F1 (0x0003)
    uint8_t PlaneConstraintAxisSetting; // 0x00F4 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00F5 (0x0003)
    uint8_t PlaneConstraintNormal[0xC]; // 0x00F8 (0x000C)
    uint8_t PlaneConstraintOrigin[0xC]; // 0x0104 (0x000C)
    bool bUpdateOnlyIfRendered; // 0x0110 (0x0001)
    bool bAutoUpdateTickRegistration; // 0x0110 (0x0001)
    bool bTickBeforeOwner; // 0x0110 (0x0001)
    bool bAutoRegisterUpdatedComponent; // 0x0110 (0x0001)

public:
    void StopMovementImmediately();
    void SnapUpdatedComponentToPlane();
    void SetUpdatedComponent(class UObject* NewUpdatedComponent);
    void SetPlaneConstraintOrigin(uint8_t PlaneOrigin);
    void SetPlaneConstraintNormal(uint8_t PlaneNormal);
    void SetPlaneConstraintFromVectors(uint8_t Forward, uint8_t Up);
    void SetPlaneConstraintEnabled(bool bEnabled);
    void SetPlaneConstraintAxisSetting(uint8_t NewAxisSetting);
    void PhysicsVolumeChanged(class UObject* NewVolume);
    bool K2_MoveUpdatedComponent(uint8_t Delta, uint8_t NewRotation, uint8_t OutHit, bool bSweep, bool bTeleport);
    float K2_GetModifiedMaxSpeed();
    float K2_GetMaxSpeedModifier();
    bool IsExceedingMaxSpeed(float MaxSpeed);
    uint8_t GetPlaneConstraintOrigin();
    uint8_t GetPlaneConstraintNormal();
    uint8_t GetPlaneConstraintAxisSetting();
    class UObject* GetPhysicsVolume();
    float GetMaxSpeed();
    float GetGravityZ();
    uint8_t ConstrainNormalToPlane(uint8_t Normal);
    uint8_t ConstrainLocationToPlane(uint8_t Location);
    uint8_t ConstrainDirectionToPlane(uint8_t Direction);
};

// Class: Engine.NavMovementComponent
class NavMovementComponent : public MovementComponent {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    uint8_t NavAgentProps[0x28]; // 0x0120 (0x0028)
    bool bUpdateNavAgentWithOwnersCollision; // 0x0148 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0149 (0x0003)
    uint8_t MovementState[0x4]; // 0x014C (0x0004)

public:
    void StopMovementKeepPathing();
    void StopActiveMovement();
    bool IsSwimming();
    bool IsMovingOnGround();
    bool IsFlying();
    bool IsFalling();
    bool IsCrouching();
};

// Class: Engine.PawnMovementComponent
class PawnMovementComponent : public NavMovementComponent {
public:
    uint8_t Pad_0[0x130]; // 0x0028 (0x0130)
    class UObject* PawnOwner; // 0x0158 (0x0008)

public:
    uint8_t K2_GetInputVector();
    bool IsMoveInputIgnored();
    uint8_t GetPendingInputVector();
    class UObject* GetPawnOwner();
    uint8_t GetLastInputVector();
    uint8_t ConsumeInputVector();
    void AddInputVector(uint8_t WorldVector, bool bForce);
};

// Class: Engine.WheeledVehicleMovementComponent
class WheeledVehicleMovementComponent : public PawnMovementComponent {
public:
    uint8_t Pad_0[0x140]; // 0x0028 (0x0140)
    struct TArray<uint8_t> WheelSetups; // 0x0168 (0x0010)
    float Mass; // 0x0178 (0x0004)
    float DragCoefficient; // 0x017C (0x0004)
    float ChassisWidth; // 0x0180 (0x0004)
    float ChassisHeight; // 0x0184 (0x0004)
    float DragArea; // 0x0188 (0x0004)
    float EstimatedMaxEngineSpeed; // 0x018C (0x0004)
    float MaxEngineRPM; // 0x0190 (0x0004)
    float DebugDragMagnitude; // 0x0194 (0x0004)
    struct FName COMSocket; // 0x0198 (0x0008)
    uint8_t InertiaTensorScale[0xC]; // 0x01A0 (0x000C)
    uint8_t InertiaTensorOverMassOverride[0xC]; // 0x01AC (0x000C)
    float MinNormalizedTireLoad; // 0x01B8 (0x0004)
    float MinNormalizedTireLoadFiltered; // 0x01BC (0x0004)
    float MaxNormalizedTireLoad; // 0x01C0 (0x0004)
    float MaxNormalizedTireLoadFiltered; // 0x01C4 (0x0004)
    float ThresholdLongitudinalSpeed; // 0x01C8 (0x0004)
    int32_t LowForwardSpeedSubStepCount; // 0x01CC (0x0004)
    int32_t HighForwardSpeedSubStepCount; // 0x01D0 (0x0004)
    float DriverVsVehicleMassRatio; // 0x01D4 (0x0004)
    float CustomGravityScale; // 0x01D8 (0x0004)
    uint8_t Pad_1[0x4]; // 0x01DC (0x0004)
    struct TArray<uint8_t> Wheels; // 0x01E0 (0x0010)
    uint8_t Pad_2[0x18]; // 0x01F0 (0x0018)
    bool bUseRVOAvoidance; // 0x0208 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0209 (0x0003)
    float RVOAvoidanceRadius; // 0x020C (0x0004)
    float RVOAvoidanceHeight; // 0x0210 (0x0004)
    float AvoidanceConsiderationRadius; // 0x0214 (0x0004)
    float RVOSteeringStep; // 0x0218 (0x0004)
    float RVOThrottleStep; // 0x021C (0x0004)
    int32_t AvoidanceUID; // 0x0220 (0x0004)
    uint8_t AvoidanceGroup[0x4]; // 0x0224 (0x0004)
    uint8_t GroupsToAvoid[0x4]; // 0x0228 (0x0004)
    uint8_t GroupsToIgnore[0x4]; // 0x022C (0x0004)
    float AvoidanceWeight; // 0x0230 (0x0004)
    uint8_t PendingLaunchVelocity[0xC]; // 0x0234 (0x000C)
    uint8_t ReplicatedState[0x14]; // 0x0240 (0x0014)
    uint8_t Pad_4[0x4]; // 0x0254 (0x0004)
    float RawSteeringInput; // 0x0258 (0x0004)
    float RawThrottleInput; // 0x025C (0x0004)
    bool bRawHandbrakeInput; // 0x0260 (0x0001)
    bool bRawGearUpInput; // 0x0260 (0x0001)
    bool bRawGearDownInput; // 0x0260 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0261 (0x0003)
    float SteeringInput; // 0x0264 (0x0004)
    float ThrottleInput; // 0x0268 (0x0004)
    float BrakeInput; // 0x026C (0x0004)
    float HandbrakeInput; // 0x0270 (0x0004)
    float IdleBrakeInput; // 0x0274 (0x0004)
    float StopThreshold; // 0x0278 (0x0004)
    float WrongDirectionThreshold; // 0x027C (0x0004)
    float MaxBrakeTorque_ForVehicleDrive; // 0x0280 (0x0004)
    float MaxHandBrakeTorque_ForVehicleDrive; // 0x0284 (0x0004)
    uint8_t ThrottleInputRate[0x8]; // 0x0288 (0x0008)
    uint8_t BrakeInputRate[0x8]; // 0x0290 (0x0008)
    uint8_t HandbrakeInputRate[0x8]; // 0x0298 (0x0008)
    uint8_t SteeringInputRate[0x8]; // 0x02A0 (0x0008)
    uint8_t Pad_6[0x4]; // 0x02A8 (0x0004)
    bool bWasAvoidanceUpdated; // 0x02AC (0x0001)

public:
    void SetUseAutoGears(bool bUseAuto);
    void SetThrottleInput(float Throttle);
    void SetTargetGear(int32_t GearNum, bool bImmediate);
    void SetSteeringInput(float Steering);
    void SetHandbrakeInput(bool bNewHandbrake);
    void SetGroupsToIgnore(int32_t GroupFlags);
    void SetGroupsToAvoid(int32_t GroupFlags);
    void SetGearUp(bool bNewGearUp);
    void SetGearDown(bool bNewGearDown);
    void SetAvoidanceGroup(int32_t GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear);
    bool GetUseAutoGears();
    int32_t GetTargetGear();
    float GetForwardSpeed();
    float GetEngineRotationSpeed();
    float GetEngineMaxRotationSpeed();
    int32_t GetCurrentGear();
};

// Class: Engine.WheeledVehicleMovementComponent4W
class WheeledVehicleMovementComponent4W : public WheeledVehicleMovementComponent {
public:
    uint8_t Pad_0[0x2B0]; // 0x0028 (0x02B0)
    uint8_t EngineSetup[0x98]; // 0x02D8 (0x0098)
    uint8_t DifferentialSetup[0x1C]; // 0x0370 (0x001C)
    uint8_t Pad_1[0x4]; // 0x038C (0x0004)
    uint8_t TransmissionSetup[0x30]; // 0x0390 (0x0030)
    uint8_t SteeringCurve[0x80]; // 0x03C0 (0x0080)
    float AckermannAccuracy; // 0x0440 (0x0004)
};

// Class: Engine.AISystemBase
class AISystemBase : public Object {
public:
    uint8_t AISystemClassName[0x10]; // 0x0028 (0x0010)
    struct FName AISystemModuleName; // 0x0038 (0x0008)
    bool bInstantiateAISystemOnClient; // 0x0040 (0x0001)
};

// Class: Engine.AnimInstance
class AnimInstance : public Object {
public:
    float DeltaTime; // 0x0028 (0x0004)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    class UObject* CurrentSkeleton; // 0x0030 (0x0008)
    uint8_t Pad_1[0x50]; // 0x0038 (0x0050)
    uint8_t RootMotionMode; // 0x0088 (0x0001)
    bool bRunUpdatesInWorkerThreads; // 0x0089 (0x0001)
    bool bCanUseParallelUpdateAnimation; // 0x008A (0x0001)
    uint8_t Pad_2[0x5]; // 0x008B (0x0005)
    uint8_t OnMontageBlendingOut[0x10]; // 0x0090 (0x0010)
    uint8_t OnMontageStarted[0x10]; // 0x00A0 (0x0010)
    uint8_t OnMontageEnded[0x10]; // 0x00B0 (0x0010)
    uint8_t Pad_3[0x70]; // 0x00C0 (0x0070)
    bool bQueueMontageEvents; // 0x0130 (0x0001)
    uint8_t Pad_4[0x127]; // 0x0131 (0x0127)
    struct TArray<uint8_t> ActiveAnimNotifyState; // 0x0258 (0x0010)

public:
    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    class UObject* TryGetPawnOwner();
    void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName);
    void SetWorldSpaceAnchorTransform(int32_t AnchorIndex, uint8_t WorldSpaceAnchorTransform, bool bSweep);
    void SetMorphTarget(struct FName MorphTargetName, float Value);
    class UObject* PlaySlotAnimationAsDynamicMontage(class UObject* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime);
    float PlaySlotAnimation(class UObject* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount);
    void Montage_Stop(float InBlendOutTime, class UObject* Montage);
    void Montage_SetPlayRate(class UObject* Montage, float NewPlayRate);
    void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, class UObject* Montage);
    void Montage_SetCategoryPlayRate(struct FName CategoryName, float PlayRate);
    float Montage_Play(class UObject* MontageToPlay, float InPlayRate);
    void Montage_Pause(class UObject* Montage);
    void Montage_JumpToSectionsEnd(struct FName SectionName, class UObject* Montage);
    void Montage_JumpToSection(struct FName SectionName, class UObject* Montage);
    bool Montage_IsValidSlot(struct FName SlotName);
    bool Montage_IsPlaying(class UObject* Montage);
    bool Montage_IsInterrupted();
    bool Montage_IsActive(class UObject* Montage);
    struct FName Montage_GetCurrentSection(class UObject* Montage);
    struct FName Montage_GetCurrentCategory();
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    bool IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder);
    bool IsPlayingSlotAnimation(class UObject* Asset, struct FName SlotNodeName);
    bool HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName);
    bool GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float OutMarkerTime);
    uint8_t GetSyncGroupPosition(struct FName InSyncGroupName);
    float GetStateWeight(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex);
    class UObject* GetOwningComponent();
    class UObject* GetOwningActor();
    float GetNormalizedCurveValue(struct FName CurveName);
    float GetListenerCurveValue(struct FName CollectorName, struct FName CurveName, bool bNormalize);
    float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex);
    float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex);
    float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex);
    float GetCurveValue(struct FName CurveName);
    struct FName GetCurrentStateName(int32_t MachineIndex);
    float GetCurrentStateElapsedTime(int32_t MachineIndex);
    float GetAnimAssetPlayerTimeFromEndFraction(class UObject* AnimAsset, float CurrentTime);
    float GetAnimAssetPlayerTimeFromEnd(class UObject* AnimAsset, float CurrentTime);
    float GetAnimAssetPlayerTimeFraction(class UObject* AnimAsset, float CurrentTime);
    float GetAnimAssetPlayerLength(class UObject* AnimAsset);
    int32_t GetAnchorIndexByName(struct FName AnchorName);
    void ClearMorphTargets();
    float CalculateDirection(uint8_t Velocity, uint8_t BaseRotation);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintPostEvaluateAnimation();
    void BlueprintInitializeAnimation();
};

// Class: Engine.ChildActorComponent
class ChildActorComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    class UClass* ChildActorClass; // 0x0210 (0x0008)
    class UObject* ChildActor; // 0x0218 (0x0008)

public:
    void SetChildActorClass(class UClass* Class);
};

// Class: Engine.BendCoverObjectTemplate
class BendCoverObjectTemplate : public Actor {
public:
};

// Class: Engine.CameraModifier
class CameraModifier : public Object {
public:
    bool bDebug; // 0x0028 (0x0001)
    bool bExclusive; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    uint8_t Priority; // 0x002C (0x0001)
    uint8_t Pad_1[0x3]; // 0x002D (0x0003)
    class UObject* CameraOwner; // 0x0030 (0x0008)
    float AlphaInTime; // 0x0038 (0x0004)
    float AlphaOutTime; // 0x003C (0x0004)
    float Alpha; // 0x0040 (0x0004)

public:
    bool IsDisabled();
    class UObject* GetViewTarget();
    void EnableModifier();
    void DisableModifier(bool bImmediate);
    void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, uint8_t PostProcessSettings);
    void BlueprintModifyCamera(float DeltaTime, uint8_t ViewLocation, uint8_t ViewRotation, float FOV, uint8_t NewViewLocation, uint8_t NewViewRotation, float NewFOV);
};

// Class: Engine.CharacterMovementComponent
class CharacterMovementComponent : public PawnMovementComponent {
public:
    uint8_t Pad_0[0x148]; // 0x0028 (0x0148)
    class UObject* CharacterOwner; // 0x0170 (0x0008)
    float GravityScale; // 0x0178 (0x0004)
    float MaxStepHeight; // 0x017C (0x0004)
    float JumpZVelocity; // 0x0180 (0x0004)
    float JumpOffJumpZFactor; // 0x0184 (0x0004)
    float WalkableFloorAngle; // 0x0188 (0x0004)
    float WalkableFloorZ; // 0x018C (0x0004)
    struct FName NavWalkingCollisionProfileName; // 0x0190 (0x0008)
    uint8_t MovementMode; // 0x0198 (0x0001)
    uint8_t CustomMovementMode; // 0x0199 (0x0001)
    uint8_t Pad_1[0x26]; // 0x019A (0x0026)
    float GroundFriction; // 0x01C0 (0x0004)
    float MaxWalkSpeed; // 0x01C4 (0x0004)
    float MaxWalkSpeedCrouched; // 0x01C8 (0x0004)
    float MaxSwimSpeed; // 0x01CC (0x0004)
    float MaxFlySpeed; // 0x01D0 (0x0004)
    float MaxCustomMovementSpeed; // 0x01D4 (0x0004)
    float MaxAcceleration; // 0x01D8 (0x0004)
    float BrakingFrictionFactor; // 0x01DC (0x0004)
    float BrakingFriction; // 0x01E0 (0x0004)
    bool bUseSeparateBrakingFriction; // 0x01E4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x01E5 (0x0003)
    float BrakingDecelerationWalking; // 0x01E8 (0x0004)
    float BrakingDecelerationFalling; // 0x01EC (0x0004)
    float BrakingDecelerationSwimming; // 0x01F0 (0x0004)
    float BrakingDecelerationFlying; // 0x01F4 (0x0004)
    float AirControl; // 0x01F8 (0x0004)
    float AirControlBoostMultiplier; // 0x01FC (0x0004)
    float AirControlBoostVelocityThreshold; // 0x0200 (0x0004)
    float FallingLateralFriction; // 0x0204 (0x0004)
    float CrouchedHalfHeight; // 0x0208 (0x0004)
    float Buoyancy; // 0x020C (0x0004)
    float PerchRadiusThreshold; // 0x0210 (0x0004)
    float PerchAdditionalHeight; // 0x0214 (0x0004)
    uint8_t RotationRate[0xC]; // 0x0218 (0x000C)
    bool bUseControllerDesiredRotation; // 0x0224 (0x0001)
    bool bOrientRotationToMovement; // 0x0224 (0x0001)
    bool bMovementInProgress; // 0x0224 (0x0001)
    bool bEnableScopedMovementUpdates; // 0x0224 (0x0001)
    bool bForceMaxAccel; // 0x0224 (0x0001)
    bool bRunPhysicsWithNoController; // 0x0224 (0x0001)
    bool bForceNextFloorCheck; // 0x0224 (0x0001)
    bool bShrinkProxyCapsule; // 0x0224 (0x0001)
    bool bCanWalkOffLedges; // 0x0225 (0x0001)
    bool bCanWalkOffLedgesWhenCrouching; // 0x0225 (0x0001)
    bool bDeferUpdateMoveComponent; // 0x0225 (0x0001)
    uint8_t Pad_3[0x2]; // 0x0226 (0x0002)
    class UObject* DeferredUpdatedMoveComponent; // 0x0228 (0x0008)
    float MaxOutOfWaterStepHeight; // 0x0230 (0x0004)
    float OutofWaterZ; // 0x0234 (0x0004)
    float Mass; // 0x0238 (0x0004)
    bool bEnablePhysicsInteraction; // 0x023C (0x0001)
    bool bTouchForceScaledToMass; // 0x023D (0x0001)
    bool bPushForceScaledToMass; // 0x023E (0x0001)
    bool bScalePushForceToVelocity; // 0x023F (0x0001)
    float StandingDownwardForceScale; // 0x0240 (0x0004)
    float InitialPushForceFactor; // 0x0244 (0x0004)
    float PushForceFactor; // 0x0248 (0x0004)
    float PushForcePointZOffsetFactor; // 0x024C (0x0004)
    float TouchForceFactor; // 0x0250 (0x0004)
    float MinTouchForce; // 0x0254 (0x0004)
    float MaxTouchForce; // 0x0258 (0x0004)
    float RepulsionForce; // 0x025C (0x0004)
    bool bEnablePrecisionMovement; // 0x0260 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0261 (0x0003)
    float ImpreciseMovementDistance; // 0x0264 (0x0004)
    float PreciseMovementDistance; // 0x0268 (0x0004)
    uint8_t Pad_5[0xB8]; // 0x026C (0x00B8)
    bool bForceBraking; // 0x0324 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0325 (0x0003)
    float CrouchedSpeedMultiplier; // 0x0328 (0x0004)
    float UpperImpactNormalScale; // 0x032C (0x0004)
    uint8_t Acceleration[0xC]; // 0x0330 (0x000C)
    uint8_t LastUpdateLocation[0xC]; // 0x033C (0x000C)
    uint8_t LastUpdateVelocity[0xC]; // 0x0348 (0x000C)
    uint8_t PendingImpulseToApply[0xC]; // 0x0354 (0x000C)
    uint8_t PendingForceToApply[0xC]; // 0x0360 (0x000C)
    float AnalogInputModifier; // 0x036C (0x0004)
    float MaxSimulationTimeStep; // 0x0370 (0x0004)
    int32_t MaxSimulationIterations; // 0x0374 (0x0004)
    float NetworkSimulatedSmoothLocationTime; // 0x0378 (0x0004)
    float NetworkSimulatedSmoothRotationTime; // 0x037C (0x0004)
    float NetworkMaxSmoothUpdateDistance; // 0x0380 (0x0004)
    float NetworkNoSmoothUpdateDistance; // 0x0384 (0x0004)
    uint8_t NetworkSmoothingMode; // 0x0388 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0389 (0x0003)
    float LedgeCheckThreshold; // 0x038C (0x0004)
    float JumpOutOfWaterPitch; // 0x0390 (0x0004)
    uint8_t Pad_8[0x4]; // 0x0394 (0x0004)
    uint8_t CurrentFloor[0x98]; // 0x0398 (0x0098)
    uint8_t DefaultLandMovementMode; // 0x0430 (0x0001)
    uint8_t DefaultWaterMovementMode; // 0x0431 (0x0001)
    uint8_t GroundMovementMode; // 0x0432 (0x0001)
    uint8_t Pad_9[0x1]; // 0x0433 (0x0001)
    bool bMaintainHorizontalGroundVelocity; // 0x0434 (0x0001)
    bool bImpartBaseVelocityX; // 0x0434 (0x0001)
    bool bImpartBaseVelocityY; // 0x0434 (0x0001)
    bool bImpartBaseVelocityZ; // 0x0434 (0x0001)
    bool bImpartBaseAngularVelocity; // 0x0434 (0x0001)
    bool bJustTeleported; // 0x0434 (0x0001)
    bool bNetworkUpdateReceived; // 0x0434 (0x0001)
    bool bNetworkMovementModeChanged; // 0x0434 (0x0001)
    bool bIgnoreClientMovementErrorChecksAndCorrection; // 0x0435 (0x0001)
    bool bNotifyApex; // 0x0435 (0x0001)
    bool bCheatFlying; // 0x0435 (0x0001)
    bool bWantsToCrouch; // 0x0435 (0x0001)
    bool bCrouchMaintainsBaseLocation; // 0x0435 (0x0001)
    bool bIgnoreBaseRotation; // 0x0435 (0x0001)
    bool bFastAttachedMove; // 0x0435 (0x0001)
    bool bAlwaysCheckFloor; // 0x0435 (0x0001)
    bool bUseFlatBaseForFloorChecks; // 0x0436 (0x0001)
    bool bPerformingJumpOff; // 0x0436 (0x0001)
    bool bWantsToLeaveNavWalking; // 0x0436 (0x0001)
    bool bUseRVOAvoidance; // 0x0436 (0x0001)
    bool bRequestedMoveUseAcceleration; // 0x0436 (0x0001)
    bool bHasRequestedVelocity; // 0x0436 (0x0001)
    bool bRequestedMoveWithMaxSpeed; // 0x0436 (0x0001)
    bool bWasAvoidanceUpdated; // 0x0437 (0x0001)
    bool bProjectNavMeshWalking; // 0x0437 (0x0001)
    bool bProjectNavMeshOnBothWorldChannels; // 0x0437 (0x0001)
    uint8_t Pad_10[0x10]; // 0x0438 (0x0010)
    float AvoidanceConsiderationRadius; // 0x0448 (0x0004)
    uint8_t RequestedVelocity[0xC]; // 0x044C (0x000C)
    int32_t AvoidanceUID; // 0x0458 (0x0004)
    uint8_t AvoidanceGroup[0x4]; // 0x045C (0x0004)
    uint8_t GroupsToAvoid[0x4]; // 0x0460 (0x0004)
    uint8_t GroupsToIgnore[0x4]; // 0x0464 (0x0004)
    float AvoidanceWeight; // 0x0468 (0x0004)
    uint8_t PendingLaunchVelocity[0xC]; // 0x046C (0x000C)
    uint8_t Pad_11[0xA0]; // 0x0478 (0x00A0)
    float NavMeshProjectionInterval; // 0x0518 (0x0004)
    float NavMeshProjectionTimer; // 0x051C (0x0004)
    float NavMeshProjectionInterpSpeed; // 0x0520 (0x0004)
    float NavMeshProjectionHeightScaleUp; // 0x0524 (0x0004)
    float NavMeshProjectionHeightScaleDown; // 0x0528 (0x0004)
    float SlidingFrictionValue; // 0x052C (0x0004)
    uint8_t PostPhysicsTickFunction[0x50]; // 0x0530 (0x0050)
    uint8_t Pad_12[0x10]; // 0x0580 (0x0010)
    float MinTimeBetweenTimeStampResets; // 0x0590 (0x0004)
    uint8_t Pad_13[0x4]; // 0x0594 (0x0004)
    uint8_t CurrentRootMotion[0x100]; // 0x0598 (0x0100)
    uint8_t Pad_14[0x98]; // 0x0698 (0x0098)
    uint8_t RootMotionParams[0x40]; // 0x0730 (0x0040)
    bool bWasSimulatingRootMotion; // 0x0770 (0x0001)
    bool bDisableSweepsDuringNavWalking; // 0x0771 (0x0001)
    uint8_t Pad_15[0xE]; // 0x0772 (0x000E)
    float SlidingControl; // 0x0780 (0x0004)

public:
    void SetWalkableFloorZ(float InWalkableFloorZ);
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    void SetMovementMode(uint8_t NewMovementMode, uint8_t NewCustomMode);
    void SetGroupsToIgnore(int32_t GroupFlags);
    void SetGroupsToAvoid(int32_t GroupFlags);
    void SetAvoidanceGroup(int32_t GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    void ServerMoveOld(float OldTimeStamp, uint8_t OldAccel, uint8_t OldMoveFlags);
    void ServerMoveDualHybridRootMotion(float TimeStamp0, uint8_t InAccel0, uint8_t PendingFlags, uint8_t View0, float TimeStamp, uint8_t InAccel, uint8_t ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint8_t View, class UObject* ClientMovementBase, struct FName ClientBaseBoneName, uint8_t ClientMovementMode);
    void ServerMoveDual(float TimeStamp0, uint8_t InAccel0, uint8_t PendingFlags, uint8_t View0, float TimeStamp, uint8_t InAccel, uint8_t ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint8_t View, class UObject* ClientMovementBase, struct FName ClientBaseBoneName, uint8_t ClientMovementMode);
    void ServerMove(float TimeStamp, uint8_t InAccel, uint8_t ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, uint8_t View, class UObject* ClientMovementBase, struct FName ClientBaseBoneName, uint8_t ClientMovementMode);
    float K2_GetWalkableFloorZ();
    float K2_GetWalkableFloorAngle();
    float K2_GetModifiedMaxAcceleration();
    bool IsWalking();
    bool IsWalkable(uint8_t Hit);
    bool IsSliding();
    float GetValidPerchRadius();
    uint8_t GetSlidingNormal();
    float GetPerchRadiusThreshold();
    float GetMovementPrecisionRatio();
    class UObject* GetMovementBase();
    float GetMaxJumpHeight();
    float GetMaxAcceleration();
    uint8_t GetImpartedMovementBaseVelocity();
    uint8_t GetCurrentAcceleration();
    class UObject* GetCharacterOwner();
    float GetAnalogInputModifier();
    void DisableMovement();
    void ClientVeryShortAdjustPosition(float TimeStamp, uint8_t NewLoc, class UObject* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAdjustRootMotionSourcePosition(float TimeStamp, uint8_t ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, uint8_t ServerLoc, uint8_t ServerRotation, float ServerVelZ, class UObject* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, uint8_t ServerLoc, uint8_t ServerRotation, float ServerVelZ, class UObject* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAdjustPosition(float TimeStamp, uint8_t NewLoc, uint8_t NewVel, class UObject* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAckGoodMove(float TimeStamp);
    void CapsuleTouched(class UObject* Other, class UObject* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, uint8_t SweepResult);
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    void AddImpulse(uint8_t Impulse, bool bVelocityChange);
    void AddForce(uint8_t Force);
};

// Class: Engine.CheatManager
class CheatManager : public Object {
public:
    class UObject* DebugCameraControllerRef; // 0x0028 (0x0008)
    class UClass* DebugCameraControllerClass; // 0x0030 (0x0008)

public:
    void WidgetReflector();
    void Walk();
    void ViewSelf();
    void ViewPlayer(struct FString S);
    void ViewClass(class UClass* DesiredClass);
    void ViewActor(struct FName ActorName);
    void ToggleDebugCamera();
    void ToggleAILogging();
    void TextureAtlasVisualizer();
    void TestCollisionDistance();
    void Teleport();
    void Summon(struct FString ClassName);
    void StreamLevelOut(struct FName PackageName);
    void StreamLevelIn(struct FName PackageName);
    void Slomo(float T);
    void SetWorldOrigin();
    void SetNavDrawDistance(float DrawDistance);
    void SetMouseSensitivityToDefault();
    void ServerToggleAILogging();
    void RebuildNavigation();
    void PlayersOnly();
    void OnlyLoadLevel(struct FName PackageName);
    void LogLoc();
    void InvertMouse();
    void God();
    void Ghost();
    void FreezeFrame(float Delay);
    void FontAtlasVisualizer();
    void Fly();
    void FlushLog();
    void DumpVoiceMutingState();
    void DumpPartyState();
    void DumpOnlineSessionState();
    void DestroyTarget();
    void DestroyPawns(class UClass* aClass);
    void DestroyAllPawnsExceptTarget();
    void DestroyAll(class UClass* aClass);
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    void DebugCapsuleSweepPawn();
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    void DebugCapsuleSweepClear();
    void DebugCapsuleSweepChannel(uint8_t Channel);
    void DebugCapsuleSweepCapture();
    void DebugCapsuleSweep();
    void DamageTarget(float DamageAmount);
    void ChangeSize(float F);
    void BugItStringCreator(uint8_t ViewLocation, uint8_t ViewRotation, struct FString GoString, struct FString LocString);
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    void BugIt(struct FString ScreenShotDescription);
};

// Class: Engine.BendLightRigBase
class BendLightRigBase : public Actor {
public:

public:
    void TurnOnPostCinematicEvent(struct FName CinematicName);
    void TurnOffPreCinematicEvent(struct FName CinematicName);
};

// Class: Engine.BendClimbStateDataBase
class BendClimbStateDataBase : public DataAsset {
public:
};

// Class: Engine.BoxComponent
class BoxComponent : public ShapeComponent {
public:
    uint8_t Pad_0[0x5C8]; // 0x0028 (0x05C8)
    uint8_t BoxExtent[0xC]; // 0x05F0 (0x000C)

public:
    void SetBoxExtent(uint8_t InBoxExtent, bool bUpdateOverlaps);
    uint8_t GetUnscaledBoxExtent();
    uint8_t GetScaledBoxExtent();
};

// Class: Engine.BendCoverProxyComponentTemplate
class BendCoverProxyComponentTemplate : public StaticMeshComponent {
public:
};

// Class: Engine.BendCoverProxyTemplate
class BendCoverProxyTemplate : public Actor {
public:
};

// Class: Engine.AnimSingleNodeInstance
class AnimSingleNodeInstance : public AnimInstance {
public:
    uint8_t Pad_0[0x478]; // 0x0028 (0x0478)
    class UObject* CurrentAsset; // 0x04A0 (0x0008)
    uint8_t Pad_1[0xD0]; // 0x04A8 (0x00D0)
    uint8_t PostEvaluateAnimEvent[0x10]; // 0x0578 (0x0010)

public:
    void StopAnim();
    void SetVertexAnimation(class UObject* NewVertexAnim, bool bIsLooping, float InPlayRate);
    void SetReverse(bool bInReverse);
    void SetPosition(float InPosition, bool bFireNotifies);
    void SetPlayRate(float InPlayRate);
    void SetPlaying(bool bIsPlaying);
    void SetLooping(bool bIsLooping);
    void SetBlendSpaceInput(uint8_t InBlendInput);
    void SetAnimationAsset(class UObject* NewAsset, bool bIsLooping, float InPlayRate);
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    float GetLength();
};

// Class: Engine.NavArea
class NavArea : public Object {
public:
    float DefaultCost; // 0x0028 (0x0004)
    float AgentRadiusOverride; // 0x002C (0x0004)
    float FixedAreaEnteringCost; // 0x0030 (0x0004)
    uint8_t DrawColor[0x4]; // 0x0034 (0x0004)
    uint8_t SupportedAgents[0x4]; // 0x0038 (0x0004)
    bool bSupportsAgent0; // 0x003C (0x0001)
    bool bSupportsAgent1; // 0x003C (0x0001)
    bool bSupportsAgent2; // 0x003C (0x0001)
    bool bSupportsAgent3; // 0x003C (0x0001)
    bool bSupportsAgent4; // 0x003C (0x0001)
    bool bSupportsAgent5; // 0x003C (0x0001)
    bool bSupportsAgent6; // 0x003C (0x0001)
    bool bSupportsAgent7; // 0x003C (0x0001)
    bool bSupportsAgent8; // 0x003D (0x0001)
    bool bSupportsAgent9; // 0x003D (0x0001)
    bool bSupportsAgent10; // 0x003D (0x0001)
    bool bSupportsAgent11; // 0x003D (0x0001)
    bool bSupportsAgent12; // 0x003D (0x0001)
    bool bSupportsAgent13; // 0x003D (0x0001)
    bool bSupportsAgent14; // 0x003D (0x0001)
    bool bSupportsAgent15; // 0x003D (0x0001)
};

// Class: Engine.SkinnedMeshComponent
class SkinnedMeshComponent : public MeshComponent {
public:
    uint8_t Pad_0[0x660]; // 0x0028 (0x0660)
    class UObject* SkeletalMesh; // 0x0688 (0x0008)
    uint64_t MasterPoseComponent; // 0x0690 (0x0008)
    struct TArray<uint8_t> MeshDrivenBones; // 0x0698 (0x0010)
    uint64_t MeshDrivenBonesComponent; // 0x06A8 (0x0008)
    bool bSkinAndUpdateMeshDrivenBones; // 0x06B0 (0x0001)
    uint8_t Pad_1[0xFB]; // 0x06B1 (0x00FB)
    bool bUseBoundsFromMasterPoseComponent; // 0x07AC (0x0001)
    uint8_t Pad_2[0x3]; // 0x07AD (0x0003)
    struct TArray<uint8_t> ActiveVertexAnims; // 0x07B0 (0x0010)
    bool BendUseCollisionGeometryShadowing; // 0x07C0 (0x0001)
    bool BendDisableCollisionGeometryShadowing; // 0x07C1 (0x0001)
    bool BendDisableDynamicNormalRecalculation; // 0x07C2 (0x0001)
    uint8_t Pad_3[0xD]; // 0x07C3 (0x000D)
    class UObject* PhysicsAssetOverride; // 0x07D0 (0x0008)
    int32_t ForcedLodModel; // 0x07D8 (0x0004)
    int32_t MinLodModel; // 0x07DC (0x0004)
    int32_t PredictedLODLevel; // 0x07E0 (0x0004)
    int32_t OldPredictedLODLevel; // 0x07E4 (0x0004)
    float MaxDistanceFactor; // 0x07E8 (0x0004)
    uint8_t Pad_4[0x4]; // 0x07EC (0x0004)
    struct TArray<uint8_t> LODInfo; // 0x07F0 (0x0010)
    float StreamingDistanceMultiplier; // 0x0800 (0x0004)
    uint8_t WireframeColor[0x4]; // 0x0804 (0x0004)
    bool bForceWireframe; // 0x0808 (0x0001)
    bool bDisplayBones; // 0x0808 (0x0001)
    bool bDisableMorphTarget; // 0x0808 (0x0001)
    bool bHideSkin; // 0x0808 (0x0001)
    uint8_t Pad_5[0x17]; // 0x0809 (0x0017)
    bool bPerBoneMotionBlur; // 0x0820 (0x0001)
    bool bComponentUseFixedSkelBounds; // 0x0820 (0x0001)
    bool bConsiderAllBodiesForBounds; // 0x0820 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0821 (0x0003)
    uint8_t MeshComponentUpdateFlag; // 0x0824 (0x0001)
    uint8_t Pad_7[0x7]; // 0x0825 (0x0007)
    bool bForceMeshObjectUpdate; // 0x082C (0x0001)
    bool bCanHighlightSelectedSections; // 0x082C (0x0001)
    bool bRecentlyRendered; // 0x082C (0x0001)
    uint8_t Pad_8[0x3]; // 0x082D (0x0003)
    float ProgressiveDrawingFraction; // 0x0830 (0x0004)
    uint8_t CustomSortAlternateIndexMode; // 0x0834 (0x0001)
    uint8_t Pad_9[0x3]; // 0x0835 (0x0003)
    bool bCastCapsuleDirectShadow; // 0x0838 (0x0001)
    bool bCastCapsuleIndirectShadow; // 0x0838 (0x0001)
    uint8_t Pad_10[0x13]; // 0x0839 (0x0013)
    uint8_t CachedLocalBounds[0x1C]; // 0x084C (0x001C)
    bool bCachedLocalBoundsUpToDate; // 0x0868 (0x0001)
    bool bEnableUpdateRateOptimizations; // 0x0869 (0x0001)
    bool bDisplayDebugUpdateRateOptimizations; // 0x086A (0x0001)
    bool bLimitUpdateRateOptimizations; // 0x086B (0x0001)

public:
    void UnHideBoneByName(struct FName BoneName);
    void TransformToBoneSpace(struct FName BoneName, uint8_t InPosition, uint8_t InRotation, uint8_t OutPosition, uint8_t OutRotation);
    void TransformFromBoneSpace(struct FName BoneName, uint8_t InPosition, uint8_t InRotation, uint8_t OutPosition, uint8_t OutRotation);
    void SetSkeletalMesh(class UObject* NewMesh);
    void SetPhysicsAsset(class UObject* NewPhysicsAsset, bool bForceReInit);
    void SetMinLOD(int32_t InNewMinLOD);
    void SetMasterPoseComponent(class UObject* NewMasterBoneComponent);
    void SetForcedLOD(int32_t InNewForcedLOD);
    void SetAllowDynamicNormalRecalculation(bool Value);
    bool IsBoneHiddenByName(struct FName BoneName);
    void HideBoneByName(struct FName BoneName, uint8_t PhysBodyOption);
    struct FName GetSocketBoneName(struct FName InSocketName);
    struct FName GetParentBone(struct FName BoneName);
    struct FName GetBoneName(int32_t BoneIndex);
    int32_t GetBoneIndex(struct FName BoneName);
    bool BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName);
};

// Class: Engine.SkeletalMeshComponent
class SkeletalMeshComponent : public SkinnedMeshComponent {
public:
    uint8_t Pad_0[0x8A0]; // 0x0028 (0x08A0)
    uint8_t AnimationMode; // 0x08C8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x08C9 (0x0007)
    class UClass* AnimBlueprintGeneratedClass; // 0x08D0 (0x0008)
    class UClass* AnimClass; // 0x08D8 (0x0008)
    class UObject* AnimScriptInstance; // 0x08E0 (0x0008)
    uint8_t AnimationData[0x20]; // 0x08E8 (0x0020)
    bool bAnimUninitializeStatesOnBlendedOut; // 0x0908 (0x0001)
    uint8_t Pad_2[0x17]; // 0x0909 (0x0017)
    struct TArray<uint8_t> CachedLocalAtoms; // 0x0920 (0x0010)
    struct TArray<uint8_t> CachedSpaceBases; // 0x0930 (0x0010)
    uint8_t Pad_3[0x78]; // 0x0940 (0x0078)
    float GlobalAnimRateScale; // 0x09B8 (0x0004)
    bool bHasValidBodies; // 0x09BC (0x0001)
    uint8_t Pad_4[0x3]; // 0x09BD (0x0003)
    uint8_t KinematicBonesUpdateType; // 0x09C0 (0x0001)
    uint8_t Pad_5[0x3]; // 0x09C1 (0x0003)
    bool bBlendPhysics; // 0x09C4 (0x0001)
    bool bSetNonRigidBodyBonesToRefPoseDuringSimulation; // 0x09C4 (0x0001)
    bool bPostPhysicsBlendCompletionNeedsHighPriority; // 0x09C4 (0x0001)
    bool bEnablePhysicsOnDedicatedServer; // 0x09C4 (0x0001)
    bool bUpdateJointsFromAnimation; // 0x09C4 (0x0001)
    bool bDisableClothSimulation; // 0x09C4 (0x0001)
    bool bCollideWithEnvironment; // 0x09C4 (0x0001)
    bool bCollideWithAttachedChildren; // 0x09C4 (0x0001)
    bool bLocalSpaceSimulation; // 0x09C5 (0x0001)
    bool bClothMorphTarget; // 0x09C5 (0x0001)
    bool bResetAfterTeleport; // 0x09C5 (0x0001)
    uint8_t Pad_6[0x2]; // 0x09C6 (0x0002)
    float TeleportDistanceThreshold; // 0x09C8 (0x0004)
    float TeleportRotationThreshold; // 0x09CC (0x0004)
    struct FName TeleportDetectionBoneName; // 0x09D0 (0x0008)
    float ClothBlendWeight; // 0x09D8 (0x0004)
    float ClothWindEffectScale; // 0x09DC (0x0004)
    uint8_t Pad_7[0x1]; // 0x09E0 (0x0001)
    bool bHideWhenBlockingCamera; // 0x09E1 (0x0001)
    uint8_t Pad_8[0xE]; // 0x09E2 (0x000E)
    class UObject* Look; // 0x09F0 (0x0008)
    uint8_t OnNewLookSet[0x10]; // 0x09F8 (0x0010)
    bool bEnableMaterialVectorParameterSetup; // 0x0A08 (0x0001)
    uint8_t Pad_9[0x3]; // 0x0A09 (0x0003)
    float MaterialVectorVelocityDampingFraction; // 0x0A0C (0x0004)
    uint8_t RootBoneTranslation[0xC]; // 0x0A10 (0x000C)
    bool bNoSkeletonUpdate; // 0x0A1C (0x0001)
    bool bPauseAnims; // 0x0A1C (0x0001)
    bool bEnablePerPolyCollision; // 0x0A1C (0x0001)
    uint8_t Pad_10[0x3]; // 0x0A1D (0x0003)
    class UObject* BodySetup; // 0x0A20 (0x0008)
    bool bAutonomousTickPose; // 0x0A28 (0x0001)
    bool bForceRefpose; // 0x0A28 (0x0001)
    bool bOldForceRefPose; // 0x0A28 (0x0001)
    bool bShowPrePhysBones; // 0x0A28 (0x0001)
    bool bRequiredBonesUpToDate; // 0x0A28 (0x0001)
    bool bAnimTreeInitialised; // 0x0A28 (0x0001)
    bool bEnableLineCheckWithBounds; // 0x0A28 (0x0001)
    uint8_t Pad_11[0x3]; // 0x0A29 (0x0003)
    uint8_t LineCheckBoundsScale[0xC]; // 0x0A2C (0x000C)
    int32_t RagdollAggregateThreshold; // 0x0A38 (0x0004)
    uint8_t Pad_12[0x4]; // 0x0A3C (0x0004)
    uint8_t OnConstraintBroken[0x10]; // 0x0A40 (0x0010)
    uint8_t Pad_13[0x408]; // 0x0A50 (0x0408)
    class UObject* SequenceToPlay; // 0x0E58 (0x0008)
    class UObject* AnimToPlay; // 0x0E60 (0x0008)
    bool bDefaultLooping; // 0x0E68 (0x0001)
    bool bDefaultPlaying; // 0x0E68 (0x0001)
    uint8_t Pad_14[0x3]; // 0x0E69 (0x0003)
    float DefaultPosition; // 0x0E6C (0x0004)
    float DefaultPlayRate; // 0x0E70 (0x0004)
    uint8_t Pad_15[0x7C]; // 0x0E74 (0x007C)
    struct TArray<uint8_t> CreatedLookParts; // 0x0EF0 (0x0010)
    uint8_t Pad_16[0xC]; // 0x0F00 (0x000C)
    bool bDontCreatePhysicsState; // 0x0F0C (0x0001)
    bool bDisableMeshMaterialVariation; // 0x0F0C (0x0001)
    uint8_t Pad_17[0xB]; // 0x0F0D (0x000B)
    float LastPoseTickTime; // 0x0F18 (0x0004)

public:
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    void Stop();
    void SetSkeletalMeshWithoutResettingAnimation(class UObject* NewMesh);
    void SetPosition(float InPos, bool bFireNotifies);
    void SetPlayRate(float Rate);
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    void SetNamedMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, struct TArray<uint8_t> BoneNames, bool bSetOtherBodiesToComplement);
    void SetNamedMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, struct TArray<uint8_t> BoneNames, bool bSetOtherBodiesToComplement);
    void SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight);
    void SetLook(class UObject* NewLook, bool bNeedsToWorkWithRagdoll);
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    void SetDefaultAnimToPlay(class UObject* NewAnim);
    void SetClothMaxDistanceScale(float Scale);
    void SetAnimInstanceClass(class UClass* NewClass);
    void SetAnimationMode(uint8_t InAnimationMode);
    void SetAnimation(class UObject* NewAnimToPlay);
    void SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    void SetAllBodiesBelowSimulatePhysics(struct FName InBoneName, bool bNewSimulate);
    void SetAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    void ResetClothTeleportMode();
    void ResetAllBodiesSimulatePhysics();
    void ReleaseAnchoring();
    void PlayAnimation(class UObject* NewAnimToPlay, bool bLooping);
    void Play(bool bLooping);
    bool IsPlaying();
    float GetPosition();
    float GetPlayRate();
    float GetMorphTarget(struct FName MorphTargetName);
    void GetCurrentJointAngles(struct FName InBoneName, float Swing1Angle, float TwistAngle, float Swing2Angle);
    float GetClothMaxDistanceScale();
    class UObject* GetAnimInstance();
    uint8_t GetAnimationMode();
    void ForceClothNextUpdateTeleportAndReset();
    void ForceClothNextUpdateTeleport();
    void DisableMeshMaterialVariation(bool bDisable);
    void ClearMorphTargets();
    void BreakConstraint(uint8_t Impulse, uint8_t HitLocation, struct FName InBoneName);
    void BindClothToMasterPoseComponent();
    void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};

// Class: Engine.DamageType
class DamageType : public Object {
public:
    bool bCausedByWorld; // 0x0028 (0x0001)
    bool bScaleMomentumByMass; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float DamageImpulse; // 0x002C (0x0004)
    bool bRadialDamageVelChange; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float DestructibleImpulse; // 0x0034 (0x0004)
    float DestructibleDamageSpreadScale; // 0x0038 (0x0004)
    float DamageFalloff; // 0x003C (0x0004)
    class UClass* NonTickDamageTypeClass; // 0x0040 (0x0008)
    uint8_t BaseDamageType; // 0x0048 (0x0001)
    uint8_t DamageType; // 0x0049 (0x0001)
    bool IgnoreZeroDamageCheck; // 0x004A (0x0001)
    bool AlwaysPlayHitReaction; // 0x004B (0x0001)
};

// Class: Engine.BendAutoNavLinkSystem
class BendAutoNavLinkSystem : public Object {
public:
};

// Class: Engine.GameInstance
class GameInstance : public Object {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> LocalPlayers; // 0x0038 (0x0010)
    uint8_t Pad_1[0x8]; // 0x0048 (0x0008)
    class UObject* OnlineSession; // 0x0050 (0x0008)

public:
    void ReceiveShutdown();
    void ReceiveInit();
    void HandleTravelError(uint8_t FailureType);
    void HandleNetworkError(uint8_t FailureType, bool bIsServer);
    void DebugRemovePlayer(int32_t ControllerId);
    void DebugCreatePlayer(int32_t ControllerId);
};

// Class: Engine.Info
class Info : public Actor {
public:
};

// Class: Engine.GameMode
class GameMode : public Info {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    uint8_t OnLoadGameFailed[0x10]; // 0x0350 (0x0010)
    uint8_t OnSaveGameFailed[0x10]; // 0x0360 (0x0010)
    bool bUseSeamlessTravel; // 0x0370 (0x0001)
    bool bPauseable; // 0x0370 (0x0001)
    bool bStartPlayersAsSpectators; // 0x0370 (0x0001)
    bool bDelayedStart; // 0x0370 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0371 (0x0007)
    struct FString OptionsString; // 0x0378 (0x0010)
    class UClass* DefaultPawnClass; // 0x0388 (0x0008)
    class UClass* HUDClass; // 0x0390 (0x0008)
    int32_t NumSpectators; // 0x0398 (0x0004)
    int32_t NumPlayers; // 0x039C (0x0004)
    int32_t NumBots; // 0x03A0 (0x0004)
    float MinRespawnDelay; // 0x03A4 (0x0004)
    class UObject* GameSession; // 0x03A8 (0x0008)
    int32_t NumTravellingPlayers; // 0x03B0 (0x0004)
    uint8_t Pad_2[0x4]; // 0x03B4 (0x0004)
    struct FText DefaultPlayerName; // 0x03B8 (0x0018)
    class UClass* EngineMessageClass; // 0x03D0 (0x0008)
    class UClass* PlayerControllerClass; // 0x03D8 (0x0008)
    class UClass* SpectatorClass; // 0x03E0 (0x0008)
    class UClass* ReplaySpectatorPlayerControllerClass; // 0x03E8 (0x0008)
    class UClass* PlayerStateClass; // 0x03F0 (0x0008)
    class UClass* GameStateClass; // 0x03F8 (0x0008)
    class UObject* GameState; // 0x0400 (0x0008)
    struct TArray<uint8_t> InactivePlayerArray; // 0x0408 (0x0010)
    uint8_t Pad_3[0x10]; // 0x0418 (0x0010)
    struct TArray<uint8_t> GameModeClassAliases; // 0x0428 (0x0010)
    float InactivePlayerStateLifeSpan; // 0x0438 (0x0004)
    bool bHandleDedicatedServerReplays; // 0x043C (0x0001)

public:
    void StartPlay();
    void StartMatch();
    class UObject* SpawnDefaultPawnFor(class UObject* NewPlayer, class UObject* StartSpot);
    bool ShouldReset(class UObject* ActorToReset);
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);
    void ReturnToMainMenuHost();
    void RestartGame();
    void ResetLevel();
    bool ReadyToStartMatch();
    bool ReadyToEndMatch();
    bool PlayerCanRestart(class UObject* Player);
    bool MustSpectate(class UObject* NewPlayerController);
    void K2_PostLogin(class UObject* NewPlayer);
    void K2_OnSwapPlayerControllers(class UObject* OldPC, class UObject* NewPC);
    void K2_OnSetMatchState(struct FName NewState);
    void K2_OnRestartPlayer(class UObject* NewPlayer);
    void K2_OnLogout(class UObject* ExitingController);
    void K2_OnChangeName(class UObject* Other, struct FString NewName, bool bNameChange);
    class UObject* K2_FindPlayerStart(class UObject* Player);
    bool IsMatchInProgress();
    void InitStartSpot(class UObject* StartSpot, class UObject* NewPlayer);
    bool HasMatchStarted();
    bool HasMatchEnded();
    int32_t GetNumPlayers();
    struct FName GetMatchState();
    class UClass* GetDefaultPawnClassForController(class UObject* InController);
    class UObject* FindPlayerStart(class UObject* Player, struct FString IncomingName);
    void EndMatch();
    class UObject* ChoosePlayerStart(class UObject* Player);
    void ChangeName(class UObject* Controller, struct FString NewName, bool bNameChange);
    bool CanSpectate(class UObject* Viewer, class UObject* ViewTarget);
    void AbortMatch();
};

// Class: Engine.LightComponentBase
class LightComponentBase : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    uint8_t LightGuid[0x10]; // 0x0210 (0x0010)
    float Brightness; // 0x0220 (0x0004)
    float intensity; // 0x0224 (0x0004)
    uint8_t LightColor[0x4]; // 0x0228 (0x0004)
    bool bAffectsWorld; // 0x022C (0x0001)
    bool CastShadows; // 0x022C (0x0001)
    bool CastScreenSpaceShadows; // 0x022C (0x0001)
    uint8_t Pad_1[0x3]; // 0x022D (0x0003)
    int32_t ScreenSpaceShadowThickness; // 0x0230 (0x0004)
    float ScreenSpaceShadowOpacity; // 0x0234 (0x0004)
    float ScreenSpaceShadowOpacity_Skin; // 0x0238 (0x0004)
    float ScreenSpaceShadowOpacity_Hair; // 0x023C (0x0004)
    bool InjectStaticUnshadowedTerrainLighting; // 0x0240 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0241 (0x0003)
    float ShadowMapPriority; // 0x0244 (0x0004)
    bool UseTemporalShadowBlend; // 0x0248 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0249 (0x0003)
    float SkinTemporalShadowBlurring; // 0x024C (0x0004)
    float HairTemporalShadowBlurring; // 0x0250 (0x0004)
    bool CastStaticShadows; // 0x0254 (0x0001)
    bool CastDynamicShadows; // 0x0254 (0x0001)
    bool bAffectTranslucentLighting; // 0x0254 (0x0001)
    bool bPrecomputedLightingIsValid; // 0x0254 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0255 (0x0003)
    float IndirectLightingIntensity; // 0x0258 (0x0004)

public:
    void SetCastShadows(bool bNewValue);
    uint8_t GetLightColor();
};

// Class: Engine.LightComponent
class LightComponent : public LightComponentBase {
public:
    uint8_t Pad_0[0x238]; // 0x0028 (0x0238)
    float Temperature; // 0x0260 (0x0004)
    bool bUseTemperature; // 0x0264 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0265 (0x0003)
    int32_t ShadowMapChannel; // 0x0268 (0x0004)
    uint8_t Pad_2[0x4]; // 0x026C (0x0004)
    float MinRoughness; // 0x0270 (0x0004)
    float ShadowBias; // 0x0274 (0x0004)
    float ShadowSharpen; // 0x0278 (0x0004)
    bool InverseSquaredFalloff; // 0x027C (0x0001)
    bool CastTranslucentShadows; // 0x027C (0x0001)
    bool bCastShadowsFromCinematicObjectsOnly; // 0x027C (0x0001)
    bool bAffectDynamicIndirectLighting; // 0x027C (0x0001)
    uint8_t Pad_3[0x3]; // 0x027D (0x0003)
    uint8_t LightingChannels[0x3]; // 0x0280 (0x0003)
    uint8_t Pad_4[0x5]; // 0x0283 (0x0005)
    class UObject* LightFunctionMaterial; // 0x0288 (0x0008)
    uint8_t LightFunctionScale[0xC]; // 0x0290 (0x000C)
    uint8_t Pad_5[0x4]; // 0x029C (0x0004)
    class UObject* IESTexture; // 0x02A0 (0x0008)
    class UObject* SpotProjectionTexture; // 0x02A8 (0x0008)
    uint8_t BendShadowCastFilterCategoriesMode; // 0x02B0 (0x0001)
    uint8_t Pad_6[0x7]; // 0x02B1 (0x0007)
    struct TArray<uint8_t> BendShadowCastFilterCategories; // 0x02B8 (0x0010)
    bool bUseWideColor; // 0x02C8 (0x0001)
    bool bUseStaticCachedShadow; // 0x02C8 (0x0001)
    bool bZeroIntensityHidden; // 0x02C8 (0x0001)
    uint8_t Pad_7[0x7]; // 0x02C9 (0x0007)
    class UObject* LensFlare; // 0x02D0 (0x0008)
    float LensFlareScale; // 0x02D8 (0x0004)
    bool bScaleToAmbientLighting; // 0x02DC (0x0001)
    bool bScaleToDirectionalLighting; // 0x02DC (0x0001)
    uint8_t Pad_8[0x3]; // 0x02DD (0x0003)
    float ScreenDistanceShadowFadeOut; // 0x02E0 (0x0004)
    float ScreenDistanceFadeOut; // 0x02E4 (0x0004)
    bool bUseCinematicLightInfulence; // 0x02E8 (0x0001)
    uint8_t Pad_9[0x7]; // 0x02E9 (0x0007)
    struct TArray<uint8_t> CinematicLightInfulence; // 0x02F0 (0x0010)
    struct TArray<uint8_t> CinematicLightPrimitiveInfulenceList; // 0x0300 (0x0010)
    bool bUseIESBrightness; // 0x0310 (0x0001)
    uint8_t Pad_10[0x3]; // 0x0311 (0x0003)
    float IESBrightnessScale; // 0x0314 (0x0004)
    float LightFunctionFadeDistance; // 0x0318 (0x0004)
    float DisabledBrightness; // 0x031C (0x0004)
    bool bEnableLightShaftBloom; // 0x0320 (0x0001)
    uint8_t Pad_11[0x3]; // 0x0321 (0x0003)
    float BloomScale; // 0x0324 (0x0004)
    float BloomThreshold; // 0x0328 (0x0004)
    uint8_t BloomTint[0x4]; // 0x032C (0x0004)
    bool bUseRayTracedDistanceFieldShadows; // 0x0330 (0x0001)
    uint8_t Pad_12[0x3]; // 0x0331 (0x0003)
    float RayStartOffsetDepthScale; // 0x0334 (0x0004)

public:
    void SetUseTemperature(bool bNewUseTemperature);
    void SetTemperature(float NewTemperature);
    void SetScaleToDirectionalLighting(bool InValue);
    void SetScaleToAmbientLighting(bool InValue);
    void SetProjectionTexture(class UObject* NewValue);
    void SetLightFunctionScale(uint8_t NewLightFunctionScale);
    void SetLightFunctionMaterial(class UObject* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightFunctionDisabledBrightness(float NewValue);
    void SetLightColor(uint8_t NewLightColor, bool bSRGB);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetIESTexture(class UObject* NewValue);
    void SetEnableLightShaftBloom(bool bNewValue);
    void SetCinematicLightInfulence(bool InValue);
    void SetBloomTint(uint8_t NewValue);
    void SetBloomThreshold(float NewValue);
    void SetBloomScale(float NewValue);
    void SetBendShadowFilterCategory(uint8_t NewCategory, bool FilteringEnabled);
    void SetAffectTranslucentLighting(bool bNewValue);
    void SetAffectDynamicIndirectLighting(bool bNewValue);
    void RemoveCinematicLightInfulence(class UObject* InActor);
    void ClearBendShadowFilterCategories();
    void AddCinematicLightInfulence(class UObject* InActor);
    void AddBendShadowFilterCategory(uint8_t NewCategory);
};

// Class: Engine.PointLightComponent
class PointLightComponent : public LightComponent {
public:
    uint8_t Pad_0[0x3F0]; // 0x0028 (0x03F0)
    float Radius; // 0x0418 (0x0004)
    float AttenuationRadius; // 0x041C (0x0004)
    bool bUseInverseSquaredFalloff; // 0x0420 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0421 (0x0003)
    float LightFalloffExponent; // 0x0424 (0x0004)
    float SourceRadius; // 0x0428 (0x0004)
    float SourceLength; // 0x042C (0x0004)
    uint8_t ClipAxis[0xC]; // 0x0430 (0x000C)
    float ClipTransitionDistance; // 0x043C (0x0004)
    bool ClipAxisInWorldSpace; // 0x0440 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0441 (0x0003)
    uint8_t LightmassSettings[0xC]; // 0x0444 (0x000C)

public:
    void SetSourceRadius(float bNewValue);
    void SetSourceLength(float NewValue);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
    void SetAttenuationRadius(float NewRadius);
};

// Class: Engine.SpotLightComponent
class SpotLightComponent : public PointLightComponent {
public:
    uint8_t Pad_0[0x428]; // 0x0028 (0x0428)
    float InnerConeAngle; // 0x0450 (0x0004)
    float OuterConeAngle; // 0x0454 (0x0004)
    float LightShaftConeAngle; // 0x0458 (0x0004)
    float NearClipRatio; // 0x045C (0x0004)
    float TranslucentInjectionTransisionDistance; // 0x0460 (0x0004)
    float TranslucentInjectionMaxIntensity; // 0x0464 (0x0004)
    bool CastVoxelFastShadows; // 0x0468 (0x0001)
    bool EnhanceRetroReflections; // 0x0468 (0x0001)

public:
    void SetTranslucentInjectionTransisionDistance(float NewTranslucentInjectionTransisionDistance);
    void SetTranslucentInjectionMaxIntensity(float NewTranslucentInjectionMaxIntensity);
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetNearClipRatio(float NewNearClipRatio);
    void SetInnerConeAngle(float NewInnerConeAngle);
};

// Class: Engine.GameState
class GameState : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UClass* GameModeClass; // 0x0348 (0x0008)
    class UObject* AuthorityGameMode; // 0x0350 (0x0008)
    class UClass* SpectatorClass; // 0x0358 (0x0008)
    struct FName MatchState; // 0x0360 (0x0008)
    struct FName PreviousMatchState; // 0x0368 (0x0008)
    int32_t ElapsedTime; // 0x0370 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0374 (0x0004)
    struct TArray<uint8_t> PlayerArray; // 0x0378 (0x0010)
    float ReplicatedWorldTimeSeconds; // 0x0388 (0x0004)
    float ServerWorldTimeSecondsDelta; // 0x038C (0x0004)
    float ServerWorldTimeSecondsUpdateFrequency; // 0x0390 (0x0004)

public:
    void OnRep_SpectatorClass();
    void OnRep_ReplicatedWorldTimeSeconds();
    void OnRep_MatchState();
    void OnRep_GameModeClass();
    void OnRep_ElapsedTime();
    float GetServerWorldTimeSeconds();
};

// Class: Engine.BendBlueprintActor
class BendBlueprintActor : public Actor {
public:
};

// Class: Engine.NavigationQueryFilter
class NavigationQueryFilter : public Object {
public:
    struct TArray<uint8_t> Areas; // 0x0028 (0x0010)
    uint8_t IncludeFlags[0x4]; // 0x0038 (0x0004)
    uint8_t ExcludeFlags[0x4]; // 0x003C (0x0004)
};

// Class: Engine.NavigationSystem
class NavigationSystem : public BlueprintFunctionLibrary {
public:
    class UObject* MainNavData; // 0x0028 (0x0008)
    class UObject* AbstractNavData; // 0x0030 (0x0008)
    bool bAutoCreateNavigationData; // 0x0038 (0x0001)
    bool bAllowClientSideNavigation; // 0x0038 (0x0001)
    bool bSupportRebuilding; // 0x0038 (0x0001)
    bool bInitialBuildingLocked; // 0x0038 (0x0001)
    bool bSkipAgentHeightCheckWhenPickingNavData; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    uint8_t DataGatheringMode; // 0x003C (0x0001)
    uint8_t Pad_1[0x3]; // 0x003D (0x0003)
    bool bGenerateNavigationOnlyAroundNavigationInvokers; // 0x0040 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0041 (0x0003)
    float ActiveTilesUpdateInterval; // 0x0044 (0x0004)
    struct TArray<uint8_t> SupportedAgents; // 0x0048 (0x0010)
    float DirtyAreasUpdateFreq; // 0x0058 (0x0004)
    uint8_t Pad_3[0x4]; // 0x005C (0x0004)
    struct TArray<uint8_t> NavDataSet; // 0x0060 (0x0010)
    struct TArray<uint8_t> NavDataRegistrationQueue; // 0x0070 (0x0010)
    uint8_t Pad_4[0x60]; // 0x0080 (0x0060)
    uint8_t OnNavDataRegisteredEvent[0x10]; // 0x00E0 (0x0010)
    uint8_t OnNavigationGenerationFinishedDelegate[0x10]; // 0x00F0 (0x0010)
    uint8_t Pad_5[0x1D8]; // 0x0100 (0x01D8)
    uint8_t OperationMode; // 0x02D8 (0x0001)

public:
    void UnregisterNavigationInvoker(class UObject* Invoker);
    void SimpleMoveToLocation(class UObject* Controller, uint8_t Goal);
    void SimpleMoveToActor(class UObject* Controller, class UObject* Goal);
    void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);
    void SetGeometryGatheringMode(uint8_t NewMode);
    void ResetMaxSimultaneousTileGenerationJobsCount();
    void RegisterNavigationInvoker(class UObject* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    uint8_t ProjectPointToNavigation(class UObject* WorldContext, uint8_t Point, class UObject* NavData, class UClass* FilterClass, uint8_t QueryExtent);
    void OnNavigationBoundsUpdated(class UObject* NavVolume);
    bool NavigationRaycast(class UObject* WorldContext, uint8_t RayStart, uint8_t RayEnd, uint8_t HitLocation, class UClass* FilterClass, class UObject* Querier);
    bool IsNavigationBeingBuilt(class UObject* WorldContext);
    uint8_t GetRandomReachablePointInRadius(class UObject* WorldContext, uint8_t Origin, float Radius, class UObject* NavData, class UClass* FilterClass);
    uint8_t GetRandomPointInRadius(class UObject* WorldContext, uint8_t Origin, float Radius, class UObject* NavData, class UClass* FilterClass);
    uint8_t GetRandomPointInNavigableRadius(class UObject* WorldContext, uint8_t Origin, float Radius, class UObject* NavData, class UClass* FilterClass);
    uint8_t GetRandomPoint(class UObject* WorldContext, class UObject* NavData, class UClass* FilterClass);
    uint8_t GetPathLength(class UObject* WorldContext, uint8_t PathStart, uint8_t PathEnd, float PathLength, class UObject* NavData, class UClass* FilterClass);
    uint8_t GetPathCost(class UObject* WorldContext, uint8_t PathStart, uint8_t PathEnd, float PathCost, class UObject* NavData, class UClass* FilterClass);
    class UObject* GetNavigationSystem(class UObject* WorldContext);
    class UObject* FindPathToLocationSynchronously(class UObject* WorldContext, uint8_t PathStart, uint8_t PathEnd, class UObject* PathfindingContext, class UClass* FilterClass);
    class UObject* FindPathToActorSynchronously(class UObject* WorldContext, uint8_t PathStart, class UObject* GoalActor, float TetherDistance, class UObject* PathfindingContext, class UClass* FilterClass);
};

// Class: Engine.NavLinkCollectionComponent
class NavLinkCollectionComponent : public PrimitiveComponent {
public:
};

// Class: Engine.NavLinkCollection
class NavLinkCollection : public Actor {
public:
};

// Class: Engine.NavRelevantComponent
class NavRelevantComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xCC]; // 0x0028 (0x00CC)
    bool bAttachToOwnersRoot; // 0x00F4 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00F5 (0x0003)
    class UObject* CachedNavParent; // 0x00F8 (0x0008)

public:
    void SetNavigationRelevancy(bool bRelevant);
};

// Class: Engine.NavLinkCustomComponent
class NavLinkCustomComponent : public NavRelevantComponent {
public:
    uint8_t Pad_0[0xE0]; // 0x0028 (0x00E0)
    uint8_t NavLinkUserId[0x4]; // 0x0108 (0x0004)
    uint8_t GeneratedSpatialID[0x4]; // 0x010C (0x0004)
    class UClass* EnabledAreaClass; // 0x0110 (0x0008)
    class UClass* DisabledAreaClass; // 0x0118 (0x0008)
    uint8_t LinkRelativeStart[0xC]; // 0x0120 (0x000C)
    uint8_t LinkRelativeEnd[0xC]; // 0x012C (0x000C)
    uint8_t LinkDirection; // 0x0138 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0139 (0x0003)
    float SnapRadius; // 0x013C (0x0004)
    float SnapHeight; // 0x0140 (0x0004)
    bool bLinkEnabled; // 0x0144 (0x0001)
    bool bUseSnapHeight; // 0x0144 (0x0001)
    bool bSnapToCheapestArea; // 0x0144 (0x0001)
    bool bNotifyWhenEnabled; // 0x0144 (0x0001)
    bool bNotifyWhenDisabled; // 0x0144 (0x0001)
    bool bCreateBoxObstacle; // 0x0144 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0145 (0x0003)
    uint8_t ObstacleOffset[0xC]; // 0x0148 (0x000C)
    uint8_t ObstacleExtent[0xC]; // 0x0154 (0x000C)
    class UClass* ObstacleAreaClass; // 0x0160 (0x0008)
    float BroadcastRadius; // 0x0168 (0x0004)
    float BroadcastInterval; // 0x016C (0x0004)
    uint8_t BroadcastChannel; // 0x0170 (0x0001)
};

// Class: Engine.PhysicsCollisionHandler
class PhysicsCollisionHandler : public Object {
public:
    float ImpactThreshold; // 0x0028 (0x0004)
    float ImpactReFireDelay; // 0x002C (0x0004)
    class UObject* DefaultImpactSound; // 0x0030 (0x0008)
    float LastImpactSoundTime; // 0x0038 (0x0004)
};

// Class: Engine.PhysicalMaterialPropertyBase
class PhysicalMaterialPropertyBase : public Object {
public:
};

// Class: Engine.NavigationObjectBase
class NavigationObjectBase : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    class UObject* CapsuleComponent; // 0x0350 (0x0008)
    class UObject* GoodSprite; // 0x0358 (0x0008)
    class UObject* BadSprite; // 0x0360 (0x0008)
    bool bIsPIEPlayerStart; // 0x0368 (0x0001)
};

// Class: Engine.PlayerStart
class PlayerStart : public NavigationObjectBase {
public:
    uint8_t Pad_0[0x348]; // 0x0028 (0x0348)
    struct FName PlayerStartTag; // 0x0370 (0x0008)
};

// Class: Engine.PlayerState
class PlayerState : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    float Score; // 0x0348 (0x0004)
    uint8_t Ping; // 0x034C (0x0001)
    uint8_t Pad_1[0x3]; // 0x034D (0x0003)
    struct FString PlayerName; // 0x0350 (0x0010)
    uint8_t Pad_2[0x10]; // 0x0360 (0x0010)
    int32_t PlayerId; // 0x0370 (0x0004)
    bool bIsSpectator; // 0x0374 (0x0001)
    bool bOnlySpectator; // 0x0374 (0x0001)
    bool bIsABot; // 0x0374 (0x0001)
    bool bIsInactive; // 0x0374 (0x0001)
    bool bFromPreviousLevel; // 0x0374 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0375 (0x0003)
    int32_t StartTime; // 0x0378 (0x0004)
    uint8_t Pad_4[0x4]; // 0x037C (0x0004)
    class UClass* EngineMessageClass; // 0x0380 (0x0008)
    uint8_t Pad_5[0x18]; // 0x0388 (0x0018)
    uint8_t UniqueId[0x10]; // 0x03A0 (0x0010)

public:
    void OnRep_UniqueId();
    void OnRep_Score();
    void OnRep_PlayerName();
    void OnRep_bIsInactive();
};

// Class: Engine.ProjectileMovementComponent
class ProjectileMovementComponent : public MovementComponent {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    float InitialSpeed; // 0x0120 (0x0004)
    float MaxSpeed; // 0x0124 (0x0004)
    bool bRotationFollowsVelocity; // 0x0128 (0x0001)
    bool bShouldBounce; // 0x0128 (0x0001)
    bool bInitialVelocityInLocalSpace; // 0x0128 (0x0001)
    bool bForceSubStepping; // 0x0128 (0x0001)
    bool bIsHomingProjectile; // 0x0128 (0x0001)
    bool bBounceAngleAffectsFriction; // 0x0128 (0x0001)
    bool bIsSliding; // 0x0128 (0x0001)
    bool bNeverIgnoreImpacts; // 0x0128 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0129 (0x0003)
    float PreviousHitTime; // 0x012C (0x0004)
    uint8_t PreviousHitNormal[0xC]; // 0x0130 (0x000C)
    float ProjectileGravityScale; // 0x013C (0x0004)
    float Buoyancy; // 0x0140 (0x0004)
    float Bounciness; // 0x0144 (0x0004)
    float Friction; // 0x0148 (0x0004)
    float BounceVelocityStopSimulatingThreshold; // 0x014C (0x0004)
    uint8_t OnProjectileBounce[0x10]; // 0x0150 (0x0010)
    uint8_t OnProjectileStop[0x10]; // 0x0160 (0x0010)
    float HomingAccelerationMagnitude; // 0x0170 (0x0004)
    uint64_t HomingTargetComponent; // 0x0174 (0x0008)
    float MaxSimulationTimeStep; // 0x017C (0x0004)
    int32_t MaxSimulationIterations; // 0x0180 (0x0004)

public:
    void StopSimulating(uint8_t HitResult);
    void SetVelocityInLocalSpace(uint8_t NewVelocity);
    void OnProjectileStopDelegate__DelegateSignature(uint8_t ImpactResult);
    void OnProjectileBounceDelegate__DelegateSignature(uint8_t ImpactResult, uint8_t ImpactVelocity);
    uint8_t LimitVelocity(uint8_t NewVelocity);
};

// Class: Engine.VehicleWheel
class VehicleWheel : public Object {
public:
    class UObject* CollisionMesh; // 0x0028 (0x0008)
    bool bDontCreateShape; // 0x0030 (0x0001)
    bool bAutoAdjustCollisionSize; // 0x0031 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0032 (0x0002)
    uint8_t Offset[0xC]; // 0x0034 (0x000C)
    float DriveTorqueFactor; // 0x0040 (0x0004)
    float BrakeTorqueFactor; // 0x0044 (0x0004)
    float HandBrakeTorqueFactor; // 0x0048 (0x0004)
    float ShapeRadius; // 0x004C (0x0004)
    float ShapeWidth; // 0x0050 (0x0004)
    float Mass; // 0x0054 (0x0004)
    float Inertia; // 0x0058 (0x0004)
    float DampingRate; // 0x005C (0x0004)
    float SteerAngle; // 0x0060 (0x0004)
    bool bAffectedByHandbrake; // 0x0064 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0065 (0x0003)
    class UObject* TireType; // 0x0068 (0x0008)
    float LatStiffMaxLoad; // 0x0070 (0x0004)
    float LatStiffValue; // 0x0074 (0x0004)
    float LongStiffValue; // 0x0078 (0x0004)
    float SuspensionForceOffset; // 0x007C (0x0004)
    float SuspensionMaxRaise; // 0x0080 (0x0004)
    bool bApplySuspensionForceAtWheelCenter_AndIgnoreSuspensionForceOffset; // 0x0084 (0x0001)
    bool bApplyTireForceAtWheelCenter_AndIgnoreSuspensionForceOffset; // 0x0085 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0086 (0x0002)
    float SuspensionMaxDrop; // 0x0088 (0x0004)
    uint8_t SuspensionTravelDirection[0xC]; // 0x008C (0x000C)
    float SuspensionNaturalFrequency; // 0x0098 (0x0004)
    float SuspensionDampingRatio; // 0x009C (0x0004)
    float MaxBrakeTorque; // 0x00A0 (0x0004)
    float MaxHandBrakeTorque; // 0x00A4 (0x0004)
    class UObject* VehicleSim; // 0x00A8 (0x0008)
    int32_t WheelIndex; // 0x00B0 (0x0004)
    float DebugLongSlip; // 0x00B4 (0x0004)
    float DebugLatSlip; // 0x00B8 (0x0004)
    float DebugNormalizedTireLoad; // 0x00BC (0x0004)
    float DebugWheelTorque; // 0x00C0 (0x0004)
    float DebugLongForce; // 0x00C4 (0x0004)
    float DebugLatForce; // 0x00C8 (0x0004)
    uint8_t Location[0xC]; // 0x00CC (0x000C)
    uint8_t OldLocation[0xC]; // 0x00D8 (0x000C)
    uint8_t Velocity[0xC]; // 0x00E4 (0x000C)

public:
    float GetSuspensionOffset();
    float GetSteerAngle();
    float GetRotationAngle();
};

// Class: Engine.CapsuleComponent
class CapsuleComponent : public ShapeComponent {
public:
    uint8_t Pad_0[0x5C8]; // 0x0028 (0x05C8)
    float CapsuleHalfHeight; // 0x05F0 (0x0004)
    float CapsuleRadius; // 0x05F4 (0x0004)
    float CapsuleHeight; // 0x05F8 (0x0004)

public:
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    void GetUnscaledCapsuleSize_WithoutHemisphere(float OutRadius, float OutHalfHeightWithoutHemisphere);
    void GetUnscaledCapsuleSize(float OutRadius, float OutHalfHeight);
    float GetUnscaledCapsuleRadius();
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
    float GetUnscaledCapsuleHalfHeight();
    float GetShapeScale();
    void GetScaledCapsuleSize_WithoutHemisphere(float OutRadius, float OutHalfHeightWithoutHemisphere);
    void GetScaledCapsuleSize(float OutRadius, float OutHalfHeight);
    float GetScaledCapsuleRadius();
    float GetScaledCapsuleHalfHeight_WithoutHemisphere();
    float GetScaledCapsuleHalfHeight();
};

// Class: Engine.WorldSettings
class WorldSettings : public Info {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    bool bEnableWorldBoundsChecks; // 0x0350 (0x0001)
    bool bEnableNavigationSystem; // 0x0350 (0x0001)
    bool bEnableWorldComposition; // 0x0350 (0x0001)
    bool bEnableWorldOriginRebasing; // 0x0350 (0x0001)
    bool bWorldGravitySet; // 0x0350 (0x0001)
    bool bGlobalGravitySet; // 0x0350 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0351 (0x0003)
    float KillZ; // 0x0354 (0x0004)
    class UClass* KillZDamageType; // 0x0358 (0x0008)
    float WorldGravityZ; // 0x0360 (0x0004)
    float GlobalGravityZ; // 0x0364 (0x0004)
    class UClass* DefaultPhysicsVolumeClass; // 0x0368 (0x0008)
    class UClass* PhysicsCollisionHandlerClass; // 0x0370 (0x0008)
    class UClass* DefaultGameMode; // 0x0378 (0x0008)
    struct TArray<uint8_t> DefaultMapPrefixes; // 0x0380 (0x0010)
    class UClass* GameNetworkManagerClass; // 0x0390 (0x0008)
    int32_t PackedLightAndShadowMapTextureSize; // 0x0398 (0x0004)
    bool bMinimizeBSPSections; // 0x039C (0x0001)
    uint8_t Pad_2[0x3]; // 0x039D (0x0003)
    uint8_t DefaultColorScale[0xC]; // 0x03A0 (0x000C)
    bool bPrecomputeVisibility; // 0x03AC (0x0001)
    bool bPlaceCellsOnlyAlongCameraTracks; // 0x03AC (0x0001)
    uint8_t Pad_3[0x3]; // 0x03AD (0x0003)
    int32_t VisibilityCellSize; // 0x03B0 (0x0004)
    uint8_t VisibilityAggressiveness; // 0x03B4 (0x0001)
    uint8_t Pad_4[0x3]; // 0x03B5 (0x0003)
    bool bForceNoPrecomputedLighting; // 0x03B8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x03B9 (0x0003)
    uint8_t LightmassSettings[0x44]; // 0x03BC (0x0044)
    uint8_t LevelLightingQuality; // 0x0400 (0x0001)
    uint8_t Pad_6[0x7]; // 0x0401 (0x0007)
    uint8_t DefaultReverbSettings[0x18]; // 0x0408 (0x0018)
    uint8_t DefaultAmbientZoneSettings[0x24]; // 0x0420 (0x0024)
    uint8_t Pad_7[0x4]; // 0x0444 (0x0004)
    class UObject* DefaultBaseSoundMix; // 0x0448 (0x0008)
    float WorldToMeters; // 0x0450 (0x0004)
    uint8_t Pad_8[0x4]; // 0x0454 (0x0004)
    class UObject* BookMarks; // 0x0458 (0x0008)
    uint8_t Pad_9[0x4C]; // 0x0460 (0x004C)
    float TimeDilation; // 0x04AC (0x0004)
    float MatineeTimeDilation; // 0x04B0 (0x0004)
    float DemoPlayTimeDilation; // 0x04B4 (0x0004)
    class UObject* Pauser; // 0x04B8 (0x0008)
    bool bHighPriorityLoading; // 0x04C0 (0x0001)
    bool bHighPriorityLoadingLocal; // 0x04C0 (0x0001)
    uint8_t Pad_10[0x7]; // 0x04C1 (0x0007)
    struct TArray<uint8_t> ReplicationViewers; // 0x04C8 (0x0010)
    struct TArray<uint8_t> AssetUserData; // 0x04D8 (0x0010)

public:
    void OnRep_WorldGravityZ();
};

// Class: Engine.BendMaterialBillboardComponent
class BendMaterialBillboardComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* BillboardMaterial; // 0x05D0 (0x0008)
    bool bSizeIsInScreenSpace; // 0x05D8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x05D9 (0x0003)
    float BaseSizeX; // 0x05DC (0x0004)
    float BaseSizeY; // 0x05E0 (0x0004)
    float ScreenScale; // 0x05E4 (0x0004)

public:
    void SetYSize(float Value);
    void SetXSize(float Value);
    void SetScreenScale(float InScale);
    void SetBillboardMaterial(class UObject* InMaterial);
    class UObject* GetBillboardMaterial();
};

// Class: Engine.StaticMeshActor
class StaticMeshActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* StaticMeshComponent; // 0x0348 (0x0008)
    bool bStaticMeshReplicateMovement; // 0x0350 (0x0001)
    uint8_t NavigationGeometryGatheringMode; // 0x0351 (0x0001)
};

// Class: Engine.InstancedStaticMeshComponent
class InstancedStaticMeshComponent : public StaticMeshComponent {
public:
    uint8_t Pad_0[0x6D8]; // 0x0028 (0x06D8)
    struct TArray<uint8_t> PerInstanceSMData; // 0x0700 (0x0010)
    int32_t InstancingRandomSeed; // 0x0710 (0x0004)
    int32_t InstanceStartCullDistance; // 0x0714 (0x0004)
    int32_t InstanceEndCullDistance; // 0x0718 (0x0004)
    uint8_t Pad_1[0x4]; // 0x071C (0x0004)
    struct TArray<uint8_t> InstanceReorderTable; // 0x0720 (0x0010)
    struct TArray<uint8_t> RemovedInstances; // 0x0730 (0x0010)
    uint8_t Pad_2[0x68]; // 0x0740 (0x0068)
    class UObject* PhysicsSerializer; // 0x07A8 (0x0008)
    int32_t NumPendingLightmaps; // 0x07B0 (0x0004)
    uint8_t Pad_3[0x4]; // 0x07B4 (0x0004)
    struct TArray<uint8_t> CachedMappings; // 0x07B8 (0x0010)

public:
    bool UpdateInstanceTransform(int32_t InstanceIndex, uint8_t NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty);
    void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance);
    bool RemoveInstance(int32_t InstanceIndex);
    bool GetInstanceTransform(int32_t InstanceIndex, uint8_t OutInstanceTransform, bool bWorldSpace);
    struct TArray<uint8_t> GetInstancesOverlappingSphere(uint8_t Center, float Radius, bool bSphereInWorldSpace);
    int32_t GetInstanceCount();
    void ClearInstances();
    int32_t AddInstanceWorldSpace(uint8_t WorldTransform);
    int32_t AddInstance(uint8_t InstanceTransform);
};

// Class: Engine.BendInstancedFoliageComponent
class BendInstancedFoliageComponent : public InstancedStaticMeshComponent {
public:
};

// Class: Engine.HierarchicalInstancedStaticMeshComponent
class HierarchicalInstancedStaticMeshComponent : public BendInstancedFoliageComponent {
public:
    uint8_t Pad_0[0x808]; // 0x0028 (0x0808)
    struct TArray<uint8_t> SortedInstances; // 0x0830 (0x0010)
    int32_t NumBuiltInstances; // 0x0840 (0x0004)
    uint8_t BuiltInstanceBounds[0x1C]; // 0x0844 (0x001C)
    uint8_t UnbuiltInstanceBounds[0x1C]; // 0x0860 (0x001C)
    uint8_t Pad_1[0x4]; // 0x087C (0x0004)
    struct TArray<uint8_t> UnbuiltInstanceBoundsList; // 0x0880 (0x0010)
    int32_t OcclusionLayerNumNodes; // 0x0890 (0x0004)
    uint8_t Pad_2[0x2]; // 0x0894 (0x0002)
    bool bDisableCollision; // 0x0896 (0x0001)

public:
    bool RemoveInstances(struct TArray<uint8_t> InstancesToRemove);
};

// Class: Engine.MaterialInterface
class MaterialInterface : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* SubsurfaceProfile; // 0x0030 (0x0008)
    uint8_t Pad_1[0x8]; // 0x0038 (0x0008)
    uint8_t LightmassSettings[0x14]; // 0x0040 (0x0014)

public:
    class UObject* GetPhysicalMaterial();
    class UObject* GetBaseMaterial();
};

// Class: Engine.MaterialInstance
class MaterialInstance : public MaterialInterface {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    class UObject* PhysMaterial; // 0x0058 (0x0008)
    class UObject* Parent; // 0x0060 (0x0008)
    bool bHasStaticPermutationResource; // 0x0068 (0x0001)
    bool bOverrideSubsurfaceProfile; // 0x0068 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0069 (0x0003)
    uint8_t BendMaterialOverrideSet[0x2]; // 0x006C (0x0002)
    uint8_t BendMaterialOverrideValue[0x2]; // 0x006E (0x0002)
    uint8_t BendMaterialOverrideSet2[0x2]; // 0x0070 (0x0002)
    uint8_t BendMaterialOverrideValue2[0x2]; // 0x0072 (0x0002)
    uint8_t UsageFlagWarnings[0x4]; // 0x0074 (0x0004)
    uint8_t BendShadowDepthBias; // 0x0078 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0079 (0x0003)
    bool bOverride_DecalFade; // 0x007C (0x0001)
    bool bBendSimplygonForceInclude; // 0x007C (0x0001)
    bool bBendSimplygonForceExclude; // 0x007C (0x0001)
    uint8_t Pad_3[0x3]; // 0x007D (0x0003)
    float DecalMinFadeScreenSizeStart; // 0x0080 (0x0004)
    float DecalMinFadeScreenSizeEnd; // 0x0084 (0x0004)
    uint8_t ParentLightingGuid[0x10]; // 0x0088 (0x0010)
    struct TArray<uint8_t> FontParameterValues; // 0x0098 (0x0010)
    struct TArray<uint8_t> ScalarParameterValues; // 0x00A8 (0x0010)
    struct TArray<uint8_t> TextureParameterValues; // 0x00B8 (0x0010)
    struct TArray<uint8_t> VectorParameterValues; // 0x00C8 (0x0010)
    bool bOverrideBaseProperties; // 0x00D8 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00D9 (0x0003)
    uint8_t BasePropertyOverrides[0x14]; // 0x00DC (0x0014)
};

// Class: Engine.MaterialInstanceConstant
class MaterialInstanceConstant : public MaterialInstance {
public:
};

// Class: Engine.MaterialExpression
class MaterialExpression : public Object {
public:
    class UObject* Material; // 0x0028 (0x0008)
    class UObject* Function; // 0x0030 (0x0008)
    struct FString Desc; // 0x0038 (0x0010)
    uint8_t BorderColor[0x4]; // 0x0048 (0x0004)
    bool bRealtimePreview; // 0x004C (0x0001)
    bool bNeedToUpdatePreview; // 0x004C (0x0001)
    bool bIsParameterExpression; // 0x004C (0x0001)
    bool bCommentBubbleVisible; // 0x004C (0x0001)
    bool bShowOutputNameOnPin; // 0x004C (0x0001)
    bool bHidePreviewWindow; // 0x004C (0x0001)
    bool bCollapsed; // 0x004C (0x0001)
    bool bShaderInputData; // 0x004C (0x0001)
    bool bShowInputs; // 0x004D (0x0001)
    bool bShowOutputs; // 0x004D (0x0001)
    uint8_t Pad_0[0x2]; // 0x004E (0x0002)
    struct TArray<uint8_t> MenuCategories; // 0x0050 (0x0010)
    struct TArray<uint8_t> Outputs; // 0x0060 (0x0010)
};

// Class: Engine.MaterialExpressionCustomOutput
class MaterialExpressionCustomOutput : public MaterialExpression {
public:
};

// Class: Engine.BlueprintGeneratedClass
class BlueprintGeneratedClass : public Class {
public:
    uint8_t Pad_0[0x1F0]; // 0x0028 (0x01F0)
    int32_t NumReplicatedProperties; // 0x0218 (0x0004)
    uint8_t Pad_1[0x4]; // 0x021C (0x0004)
    struct TArray<uint8_t> DynamicBindingObjects; // 0x0220 (0x0010)
    struct TArray<uint8_t> ComponentTemplates; // 0x0230 (0x0010)
    struct TArray<uint8_t> Timelines; // 0x0240 (0x0010)
    class UObject* SimpleConstructionScript; // 0x0250 (0x0008)
    class UObject* InheritableComponentHandler; // 0x0258 (0x0008)
    class UObject* UberGraphFramePointerProperty; // 0x0260 (0x0008)
    class UObject* UberGraphFunction; // 0x0268 (0x0008)
    struct TArray<uint8_t> FastCallPairs; // 0x0270 (0x0010)
    bool bHasInstrumentation; // 0x0280 (0x0001)
};

// Class: Engine.GameplayDebuggerHelper
class GameplayDebuggerHelper : public Object {
public:

public:
    void PrintDebugString(struct FString InString);
};

// Class: Engine.GameplayDebuggerBaseObject
class GameplayDebuggerBaseObject : public GameplayDebuggerHelper {
public:
    struct TArray<uint8_t> GenericShapeElements; // 0x0028 (0x0010)
    uint8_t ReplicatedBlob[0x20]; // 0x0038 (0x0020)

public:
    void ServerRequestPacket(int32_t Offset);
    void OnRep_ReplicatedBlob();
    void OnRep_GenericShapeElements();
    void CollectDataToReplicateOnServer(class UObject* MyPC, class UObject* SelectedActor);
};

// Class: Engine.UserDefinedStruct
class UserDefinedStruct : public ScriptStruct {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    uint8_t Guid[0x10]; // 0x0098 (0x0010)
};

// Class: Engine.Player
class Player : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* PlayerController; // 0x0030 (0x0008)
    int32_t CurrentNetSpeed; // 0x0038 (0x0004)
    int32_t ConfiguredInternetSpeed; // 0x003C (0x0004)
    int32_t ConfiguredLanSpeed; // 0x0040 (0x0004)
};

// Class: Engine.NetConnection
class NetConnection : public Player {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    struct TArray<uint8_t> Children; // 0x0048 (0x0010)
    class UObject* driver; // 0x0058 (0x0008)
    class UObject* PackageMap; // 0x0060 (0x0008)
    struct TArray<uint8_t> OpenChannels; // 0x0068 (0x0010)
    struct TArray<uint8_t> SentTemporaries; // 0x0078 (0x0010)
    class UObject* ViewTarget; // 0x0088 (0x0008)
    class UObject* OwningActor; // 0x0090 (0x0008)
    int32_t MaxPacket; // 0x0098 (0x0004)
    bool InternalAck; // 0x009C (0x0001)
    uint8_t Pad_1[0x113]; // 0x009D (0x0113)
    double LastReceiveTime; // 0x01B0 (0x0008)
    uint8_t Pad_2[0x330C8]; // 0x01B8 (0x330C8)
    struct TArray<uint8_t> ChannelsToTick; // 0x33280 (0x0010)
};

// Class: Engine.NetDriver
class NetDriver : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FString NetConnectionClassName; // 0x0030 (0x0010)
    int32_t MaxDownloadSize; // 0x0040 (0x0004)
    bool bClampListenServerTickRate; // 0x0044 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0045 (0x0003)
    int32_t NetServerMaxTickRate; // 0x0048 (0x0004)
    int32_t MaxInternetClientRate; // 0x004C (0x0004)
    int32_t MaxClientRate; // 0x0050 (0x0004)
    float ServerTravelPause; // 0x0054 (0x0004)
    float SpawnPrioritySeconds; // 0x0058 (0x0004)
    float RelevantTimeout; // 0x005C (0x0004)
    float KeepAliveTime; // 0x0060 (0x0004)
    float InitialConnectTimeout; // 0x0064 (0x0004)
    float ConnectionTimeout; // 0x0068 (0x0004)
    bool bNoTimeouts; // 0x006C (0x0001)
    uint8_t Pad_2[0x3]; // 0x006D (0x0003)
    class UObject* ServerConnection; // 0x0070 (0x0008)
    struct TArray<uint8_t> ClientConnections; // 0x0078 (0x0010)
    class UObject* World; // 0x0088 (0x0008)
    uint8_t Pad_3[0x20]; // 0x0090 (0x0020)
    class UClass* NetConnectionClass; // 0x00B0 (0x0008)
    class UObject* RoleProperty; // 0x00B8 (0x0008)
    class UObject* RemoteRoleProperty; // 0x00C0 (0x0008)
    struct FName NetDriverName; // 0x00C8 (0x0008)
    uint8_t Pad_4[0x8]; // 0x00D0 (0x0008)
    float Time; // 0x00D8 (0x0004)
};

// Class: Engine.OnlineSession
class OnlineSession : public Object {
public:
};

// Class: Engine.Model
class Model : public Object {
public:
};

// Class: Engine.EngineBaseTypes
class EngineBaseTypes : public Object {
public:
};

// Class: Engine.EngineTypes
class EngineTypes : public Object {
public:
};

// Class: Engine.EdGraphNode
class EdGraphNode : public Object {
public:
    struct TArray<uint8_t> Pins; // 0x0028 (0x0010)
    int32_t NodePosX; // 0x0038 (0x0004)
    int32_t NodePosY; // 0x003C (0x0004)
    int32_t NodeWidth; // 0x0040 (0x0004)
    int32_t NodeHeight; // 0x0044 (0x0004)
    bool bHasCompilerMessage; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    struct FString NodeComment; // 0x0050 (0x0010)
    bool bCommentBubblePinned; // 0x0060 (0x0001)
    bool bCommentBubbleVisible; // 0x0061 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0062 (0x0002)
    int32_t ErrorType; // 0x0064 (0x0004)
    struct FString ErrorMsg; // 0x0068 (0x0010)
    uint8_t NodeGuid[0x10]; // 0x0078 (0x0010)
    uint8_t AdvancedPinDisplay; // 0x0088 (0x0001)
    uint8_t EnabledState; // 0x0089 (0x0001)
    bool bUserSetEnabledState; // 0x008A (0x0001)
    bool bIsNodeEnabled; // 0x008B (0x0001)
};

// Class: Engine.EdGraphPin
class EdGraphPin : public Object {
public:
    struct FString PinName; // 0x0028 (0x0010)
    struct FString PinToolTip; // 0x0038 (0x0010)
    uint8_t Direction; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    uint8_t PinType[0x50]; // 0x0050 (0x0050)
    struct FString DefaultValue; // 0x00A0 (0x0010)
    struct FString AutogeneratedDefaultValue; // 0x00B0 (0x0010)
    class UObject* DefaultObject; // 0x00C0 (0x0008)
    struct FText DefaultTextValue; // 0x00C8 (0x0018)
    struct TArray<uint8_t> LinkedTo; // 0x00E0 (0x0010)
    struct TArray<uint8_t> SubPins; // 0x00F0 (0x0010)
    class UObject* ParentPin; // 0x0100 (0x0008)
};

// Class: Engine.BlueprintCore
class BlueprintCore : public Object {
public:
    class UClass* SkeletonGeneratedClass; // 0x0028 (0x0008)
    class UClass* GeneratedClass; // 0x0030 (0x0008)
    bool bLegacyNeedToPurgeSkelRefs; // 0x0038 (0x0001)
    bool bLegacyGeneratedClassIsAuthoritative; // 0x0039 (0x0001)
    uint8_t Pad_0[0x2]; // 0x003A (0x0002)
    uint8_t BlueprintGuid[0x10]; // 0x003C (0x0010)
};

// Class: Engine.Blueprint
class Blueprint : public BlueprintCore {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    bool bRecompileOnLoad; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    class UClass* ParentClass; // 0x0058 (0x0008)
    class UObject* PRIVATE_InnermostPreviousCDO; // 0x0060 (0x0008)
    bool bHasBeenRegenerated; // 0x0068 (0x0001)
    bool bIsRegeneratingOnLoad; // 0x0068 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0069 (0x0007)
    class UObject* SimpleConstructionScript; // 0x0070 (0x0008)
    struct TArray<uint8_t> ComponentTemplates; // 0x0078 (0x0010)
    struct TArray<uint8_t> Timelines; // 0x0088 (0x0010)
    class UObject* InheritableComponentHandler; // 0x0098 (0x0008)
    uint8_t BlueprintType; // 0x00A0 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00A1 (0x0003)
    int32_t BlueprintSystemVersion; // 0x00A4 (0x0004)
};

// Class: Engine.Interface_AssetUserData
class Interface_AssetUserData : public Interface {
public:
};

// Class: Engine.AmbientSound
class AmbientSound : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* AudioComponent; // 0x0348 (0x0008)

public:
    void Stop();
    void Play(float StartTime);
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};

// Class: Engine.NavigationTypes
class NavigationTypes : public Object {
public:
};

// Class: Engine.NavRelevantInterface
class NavRelevantInterface : public Interface {
public:
};

// Class: Engine.PendingNetGame
class PendingNetGame : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* NetDriver; // 0x0030 (0x0008)
    class UObject* DemoNetDriver; // 0x0038 (0x0008)
};

// Class: Engine.Interface_CollisionDataProvider
class Interface_CollisionDataProvider : public Interface {
public:
};

// Class: Engine.SplineMeshComponent
class SplineMeshComponent : public StaticMeshComponent {
public:
    uint8_t Pad_0[0x6E0]; // 0x0028 (0x06E0)
    uint8_t SplineParams[0x58]; // 0x0708 (0x0058)
    uint8_t SplineUpDir[0xC]; // 0x0760 (0x000C)
    bool bAllowSplineEditingPerInstance; // 0x076C (0x0001)
    bool bSmoothInterpRollScale; // 0x076C (0x0001)
    uint8_t Pad_1[0x3]; // 0x076D (0x0003)
    uint8_t ForwardAxis; // 0x0770 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0771 (0x0003)
    float SplineBoundaryMin; // 0x0774 (0x0004)
    float SplineBoundaryMax; // 0x0778 (0x0004)
    uint8_t Pad_3[0x4]; // 0x077C (0x0004)
    class UObject* BodySetup; // 0x0780 (0x0008)
    uint8_t CachedMeshBodySetupGuid[0x10]; // 0x0788 (0x0010)
    bool bMeshDirty; // 0x0798 (0x0001)

public:
    void UpdateMesh();
    void SetStartTangent(uint8_t StartTangent, bool bUpdateMesh);
    void SetStartScale(uint8_t StartScale, bool bUpdateMesh);
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    void SetStartPosition(uint8_t StartPos, bool bUpdateMesh);
    void SetStartOffset(uint8_t StartOffset, bool bUpdateMesh);
    void SetStartAndEnd(uint8_t StartPos, uint8_t StartTangent, uint8_t EndPos, uint8_t EndTangent, bool bUpdateMesh);
    void SetSplineUpDir(uint8_t InSplineUpDir, bool bUpdateMesh);
    void SetForwardAxis(uint8_t InForwardAxis, bool bUpdateMesh);
    void SetEndTangent(uint8_t EndTangent, bool bUpdateMesh);
    void SetEndScale(uint8_t EndScale, bool bUpdateMesh);
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    void SetEndPosition(uint8_t EndPos, bool bUpdateMesh);
    void SetEndOffset(uint8_t EndOffset, bool bUpdateMesh);
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    uint8_t GetStartTangent();
    uint8_t GetStartScale();
    float GetStartRoll();
    uint8_t GetStartPosition();
    uint8_t GetStartOffset();
    uint8_t GetSplineUpDir();
    uint8_t GetForwardAxis();
    uint8_t GetEndTangent();
    uint8_t GetEndScale();
    float GetEndRoll();
    uint8_t GetEndPosition();
    uint8_t GetEndOffset();
    float GetBoundaryMin();
    float GetBoundaryMax();
};

// Class: Engine.BendAggregatedStaticEdges
class BendAggregatedStaticEdges : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    struct TArray<uint8_t> TraversalEdges; // 0x0348 (0x0010)
};

// Class: Engine.BendAmbientLight
class BendAmbientLight : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* LightComponent; // 0x0348 (0x0008)
};

// Class: Engine.BendAnimAnchorActor
class BendAnimAnchorActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* AnimAnchorComponent; // 0x0348 (0x0008)

public:
    class UObject* GetAnimAnchorComponent();
};

// Class: Engine.MatineeAnimInterface
class MatineeAnimInterface : public Interface {
public:
};

// Class: Engine.BendMatineeAnimAnchorActor
class BendMatineeAnimAnchorActor : public BendAnimAnchorActor {
public:
};

// Class: Engine.BendAnimBoneControllerManager
class BendAnimBoneControllerManager : public Actor {
public:
};

// Class: Engine.BendCableActor
class BendCableActor : public Actor {
public:
};

// Class: Engine.Level
class Level : public Object {
public:
    uint8_t Pad_0[0x90]; // 0x0028 (0x0090)
    class UObject* OwningWorld; // 0x00B8 (0x0008)
    class UObject* Model; // 0x00C0 (0x0008)
    struct TArray<uint8_t> ModelComponents; // 0x00C8 (0x0010)
    int32_t NumTextureStreamingUnbuiltComponents; // 0x00D8 (0x0004)
    int32_t NumTextureStreamingDirtyResources; // 0x00DC (0x0004)
    class UObject* LevelScriptActor; // 0x00E0 (0x0008)
    class UObject* NavListStart; // 0x00E8 (0x0008)
    class UObject* NavListEnd; // 0x00F0 (0x0008)
    struct TArray<uint8_t> NavDataChunks; // 0x00F8 (0x0010)
    float LightmapTotalSize; // 0x0108 (0x0004)
    float ShadowmapTotalSize; // 0x010C (0x0004)
    struct TArray<uint8_t> StaticNavigableGeometry; // 0x0110 (0x0010)
    struct TArray<uint8_t> StreamingTextureGuids; // 0x0120 (0x0010)
    uint8_t Pad_1[0x180]; // 0x0130 (0x0180)
    bool bIsLightingScenario; // 0x02B0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x02B1 (0x0003)
    uint8_t LevelBuildDataId[0x10]; // 0x02B4 (0x0010)
    uint8_t LightBuildLevelOffset[0xC]; // 0x02C4 (0x000C)
    uint8_t Pad_3[0x4]; // 0x02D0 (0x0004)
    bool bTextureStreamingRotationChanged; // 0x02D4 (0x0001)
    uint8_t Pad_4[0x3]; // 0x02D5 (0x0003)
    bool bIsVisible; // 0x02D8 (0x0001)
    bool bLocked; // 0x02D8 (0x0001)
    uint8_t Pad_5[0x177]; // 0x02D9 (0x0177)
    struct TArray<uint8_t> AssetUserData; // 0x0450 (0x0010)
};

// Class: Engine.BendCloudActorComponent
class BendCloudActorComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    uint8_t UniqueId[0x10]; // 0x0210 (0x0010)
    int32_t PriorityGroup; // 0x0220 (0x0004)
    bool Hidden; // 0x0224 (0x0001)
    bool ConstructedInBlueprint; // 0x0224 (0x0001)
    bool ConstructedInBlueprintUniqueIDSet; // 0x0224 (0x0001)
    bool UseAsSubtractiveMask; // 0x0224 (0x0001)
    bool ScaleColumnFogToPercipitation; // 0x0224 (0x0001)
    bool UseMaterial; // 0x0224 (0x0001)
    bool RandomizeLayer; // 0x0224 (0x0001)
    bool PreviewRemovalBehaviourInEditor; // 0x0224 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0225 (0x0003)
    int32_t TextureTilesX; // 0x0228 (0x0004)
    int32_t TextureTilesY; // 0x022C (0x0004)
    class UObject* DensityTexture; // 0x0230 (0x0008)
    class UObject* DensityMaterial; // 0x0238 (0x0008)
    float DensityScale; // 0x0240 (0x0004)
    float DensityBias; // 0x0244 (0x0004)
    float DynamicSystemFadeTime; // 0x0248 (0x0004)
    float FadeInTime; // 0x024C (0x0004)
    float FadeInTimer; // 0x0250 (0x0004)
    float MinDensityForWeather; // 0x0254 (0x0004)
    float RainIntensity; // 0x0258 (0x0004)
    float SnowIntensity; // 0x025C (0x0004)
    float WeatherFogIntensity; // 0x0260 (0x0004)
    float GroundFogIntensity; // 0x0264 (0x0004)
};

// Class: Engine.BendCloudActor
class BendCloudActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Component; // 0x0348 (0x0008)
};

// Class: Engine.BendCloudShadowVolumeComponent
class BendCloudShadowVolumeComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    bool bEnabled; // 0x0600 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0601 (0x0003)
    float Shadowing; // 0x0604 (0x0004)
};

// Class: Engine.BendCloudShadowVolume
class BendCloudShadowVolume : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ShadowComponent; // 0x0348 (0x0008)
};

// Class: Engine.BendCoverData
class BendCoverData : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    int32_t SlotCount; // 0x0350 (0x0004)
    int32_t TreeCount; // 0x0354 (0x0004)
};

// Class: Engine.BendDecalCollectionComponent
class BendDecalCollectionComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    struct TArray<uint8_t> Materials; // 0x0210 (0x0010)
};

// Class: Engine.BendDecalCollectionProxyComponent
class BendDecalCollectionProxyComponent : public PrimitiveComponent {
public:
};

// Class: Engine.BendDecalCollection
class BendDecalCollection : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Component; // 0x0348 (0x0008)
};

// Class: Engine.BendEyeReflectionLight
class BendEyeReflectionLight : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* LightComponent; // 0x0348 (0x0008)

public:
    void SetActorHiddenInGame(bool bNewHidden);
};

// Class: Engine.BendFogVolumeComponent
class BendFogVolumeComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    bool bEnabled; // 0x0600 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0601 (0x0003)
    float Thickness; // 0x0604 (0x0004)
    uint8_t Shape; // 0x0608 (0x0001)

public:
    void SetThickness(float Value);
    void SetShape(uint8_t Value);
    void SetEnabled(bool Value);
};

// Class: Engine.BendFogVolume
class BendFogVolume : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* FogComponent; // 0x0348 (0x0008)
};

// Class: Engine.PhysicsConstraintComponent
class PhysicsConstraintComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    class UObject* ConstraintActor1; // 0x0210 (0x0008)
    uint8_t ComponentName1[0x8]; // 0x0218 (0x0008)
    class UObject* ConstraintActor2; // 0x0220 (0x0008)
    uint8_t ComponentName2[0x8]; // 0x0228 (0x0008)
    uint8_t Pad_1[0x10]; // 0x0230 (0x0010)
    class UObject* ConstraintSetup; // 0x0240 (0x0008)
    uint8_t OnConstraintBroken[0x10]; // 0x0248 (0x0010)
    uint8_t Pad_2[0x8]; // 0x0258 (0x0008)
    uint8_t ConstraintInstance[0x160]; // 0x0260 (0x0160)

public:
    void SetLinearZLimit(uint8_t ConstraintType, float LimitSize);
    void SetLinearYLimit(uint8_t ConstraintType, float LimitSize);
    void SetLinearXLimit(uint8_t ConstraintType, float LimitSize);
    void SetLinearVelocityTarget(uint8_t InVelTarget);
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPositionTarget(uint8_t InPosTarget);
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit);
    void SetDisableCollision(bool bDisableCollision);
    void SetConstraintReferencePosition(uint8_t Frame, uint8_t RefPosition);
    void SetConstraintReferenceOrientation(uint8_t Frame, uint8_t PriAxis, uint8_t SecAxis);
    void SetConstraintReferenceFrame(uint8_t Frame, uint8_t RefFrame);
    void SetConstrainedComponents(class UObject* Component1, struct FName BoneName1, class UObject* Component2, struct FName BoneName2);
    void SetAngularVelocityTarget(uint8_t InVelTarget);
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularTwistLimit(uint8_t ConstraintType, float TwistLimitAngle);
    void SetAngularSwing2Limit(uint8_t MotionType, float Swing2LimitAngle);
    void SetAngularSwing1Limit(uint8_t MotionType, float Swing1LimitAngle);
    void SetAngularOrientationTarget(uint8_t InPosTarget);
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit);
    float GetCurrentTwist();
    float GetCurrentSwing2();
    float GetCurrentSwing1();
    void GetConstraintForce(uint8_t OutLinearForce, uint8_t OutAngularForce);
    void BreakConstraint();
};

// Class: Engine.Skeleton
class Skeleton : public Object {
public:
    struct TArray<uint8_t> BoneTree; // 0x0028 (0x0010)
    struct TArray<uint8_t> RefLocalPoses; // 0x0038 (0x0010)
    uint8_t Pad_0[0x90]; // 0x0048 (0x0090)
    struct TArray<uint8_t> LinkupCache; // 0x00D8 (0x0010)
    struct TArray<uint8_t> Sockets; // 0x00E8 (0x0010)
    uint8_t Pad_1[0x50]; // 0x00F8 (0x0050)
    uint8_t SmartNames[0x50]; // 0x0148 (0x0050)
    uint8_t Pad_2[0x10]; // 0x0198 (0x0010)
    struct TArray<uint8_t> BlendProfiles; // 0x01A8 (0x0010)
    struct TArray<uint8_t> RuntimeCompatibleSkeletons; // 0x01B8 (0x0010)
    struct TArray<uint8_t> SlotGroups; // 0x01C8 (0x0010)
    uint8_t Pad_3[0x128]; // 0x01D8 (0x0128)
    struct TArray<uint8_t> RuntimeJoints; // 0x0300 (0x0010)
};

// Class: Engine.CurveBase
class CurveBase : public Object {
public:

public:
    void GetValueRange(float MinValue, float MaxValue);
    void GetTimeRange(float MinTime, float MaxTime);
};

// Class: Engine.CurveFloat
class CurveFloat : public CurveBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t FloatCurve[0x78]; // 0x0030 (0x0078)
    bool bIsEventCurve; // 0x00A8 (0x0001)

public:
    float GetFloatValue(float InTime);
};

// Class: Engine.BendSkeletonEyelidBoneLayout
class BendSkeletonEyelidBoneLayout : public DataAsset {
public:
    uint8_t LeftEye[0x48]; // 0x0028 (0x0048)
    uint8_t RightEye[0x48]; // 0x0070 (0x0048)
};

// Class: Engine.SkeletalMesh
class SkeletalMesh : public Object {
public:
    uint8_t Pad_0[0x60]; // 0x0028 (0x0060)
    bool bShouldMergeBonesIntoMasterLookSkeleton; // 0x0088 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0089 (0x0007)
    class UObject* Skeleton; // 0x0090 (0x0008)
    uint8_t Bounds[0x1C]; // 0x0098 (0x001C)
    uint8_t Pad_2[0x4]; // 0x00B4 (0x0004)
    struct TArray<uint8_t> Materials; // 0x00B8 (0x0010)
    uint8_t MaxDynamicNormalLodLevel[0x4]; // 0x00C8 (0x0004)
    bool bOverrideMaxDrawDistance; // 0x00CC (0x0001)
    bool bOverrideMinScreenSize; // 0x00CC (0x0001)
    uint8_t Pad_3[0x3]; // 0x00CD (0x0003)
    float MaxDrawDistance; // 0x00D0 (0x0004)
    float MinScreenSize; // 0x00D4 (0x0004)
    uint8_t EyeBoneEncodedData[0x28]; // 0x00D8 (0x0028)
    struct TArray<uint8_t> FurMaterials; // 0x0100 (0x0010)
    struct TArray<uint8_t> FinInfos; // 0x0110 (0x0010)
    struct TArray<uint8_t> SkelMirrorTable; // 0x0120 (0x0010)
    uint8_t SkelMirrorAxis; // 0x0130 (0x0001)
    uint8_t SkelMirrorFlipAxis; // 0x0131 (0x0001)
    uint8_t Pad_4[0x6]; // 0x0132 (0x0006)
    uint8_t MirrorSetup[0x58]; // 0x0138 (0x0058)
    struct TArray<uint8_t> LODInfo; // 0x0190 (0x0010)
    bool bUseFullPrecisionUVs; // 0x01A0 (0x0001)
    uint8_t Pad_5[0x7]; // 0x01A1 (0x0007)
    class UObject* BoneControllerSetup; // 0x01A8 (0x0008)
    class UObject* MeshMaterialVariations; // 0x01B0 (0x0008)
    class UObject* MaterialParameterVariations; // 0x01B8 (0x0008)
    bool bHasBeenSimplified; // 0x01C0 (0x0001)
    bool bHasVertexColors; // 0x01C0 (0x0001)
    bool bEnablePerPolyCollision; // 0x01C0 (0x0001)
    uint8_t Pad_6[0x7]; // 0x01C1 (0x0007)
    class UObject* BodySetup; // 0x01C8 (0x0008)
    class UObject* PhysicsAsset; // 0x01D0 (0x0008)
    class UObject* ShadowPhysicsAsset; // 0x01D8 (0x0008)
    float StreamingDistanceMultiplier; // 0x01E0 (0x0004)
    uint8_t Pad_7[0x4]; // 0x01E4 (0x0004)
    struct TArray<uint8_t> MorphTargets; // 0x01E8 (0x0010)
    uint8_t Pad_8[0xE8]; // 0x01F8 (0x00E8)
    struct TArray<uint8_t> ClothingAssets; // 0x02E0 (0x0010)
    class UObject* DestructionData; // 0x02F0 (0x0008)
    struct TArray<uint8_t> AssetUserData; // 0x02F8 (0x0010)
    uint8_t Pad_9[0x18]; // 0x0308 (0x0018)
    struct TArray<uint8_t> Sockets; // 0x0320 (0x0010)
    struct TArray<uint8_t> BoneControllerBatchTransformsFlags; // 0x0330 (0x0010)
    bool bBoneControllerBatchTransformsFlagsValid; // 0x0340 (0x0001)
    bool bFixedMissingClothActiveBoneIndices; // 0x0340 (0x0001)
    bool bFixedMissingEyeRenderingActiveBoneIndices; // 0x0340 (0x0001)

public:
    bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections);
    class UObject* FindSocket(struct FName InSocketName);
};

// Class: Engine.AnimationAsset
class AnimationAsset : public Object {
public:
    class UObject* Skeleton; // 0x0028 (0x0008)
    uint8_t Pad_0[0x10]; // 0x0030 (0x0010)
    struct TArray<uint8_t> MetaData; // 0x0040 (0x0010)
};

// Class: Engine.BendLocationData
class BendLocationData : public Actor {
public:
};

// Class: Engine.BendLocationProxy
class BendLocationProxy : public Actor {
public:
};

// Class: Engine.BendOcclusionVolumeComponent
class BendOcclusionVolumeComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    bool bEnabled; // 0x0600 (0x0001)
    bool bAffectsTranslucent; // 0x0600 (0x0001)
    bool bMinBlendMode; // 0x0600 (0x0001)
    bool bEnableLuminanceTarget; // 0x0600 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0601 (0x0003)
    float TransitionDistanceX; // 0x0604 (0x0004)
    float TransitionDistanceY; // 0x0608 (0x0004)
    float TransitionDistanceZ; // 0x060C (0x0004)
    float OcclusionValue; // 0x0610 (0x0004)
    float InternalOcclusionValue; // 0x0614 (0x0004)
    float FlattenLighting; // 0x0618 (0x0004)
    float SunOcclusion; // 0x061C (0x0004)
    float FadeOutRange; // 0x0620 (0x0004)
    float LuminanceTarget; // 0x0624 (0x0004)
    bool DebugInfulence; // 0x0628 (0x0001)
    bool HighQualityVoxelizationBlend; // 0x0629 (0x0001)

public:
    void SetEnabled(bool InValue);
};

// Class: Engine.BendOcclusionVolume
class BendOcclusionVolume : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* CollisionComponent; // 0x0348 (0x0008)
    float AIBrightnessOverride; // 0x0350 (0x0004)

public:
    void ActorLeavingVolume(class UObject* Other);
    void ActorEnteredVolume(class UObject* Other);
};

// Class: Engine.BendReflectionCaptureComponent
class BendReflectionCaptureComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    bool bEnabled; // 0x0600 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0601 (0x0003)
    float CaptureGeometryEdgeFade; // 0x0604 (0x0004)
    float CaptureNearClipDistance; // 0x0608 (0x0004)
    float RenderEdgeFade; // 0x060C (0x0004)
    float FadeOutRange; // 0x0610 (0x0004)
    int32_t RenderSortOverride; // 0x0614 (0x0004)
    bool DebugInfulence; // 0x0618 (0x0001)
    bool bHighQualityNormals; // 0x0619 (0x0001)
    uint8_t Pad_2[0x2]; // 0x061A (0x0002)
    float RenderRangeScale; // 0x061C (0x0004)
    float CaptureSaturation; // 0x0620 (0x0004)
    float CaptureScale; // 0x0624 (0x0004)
    float CaptureDiffuseScale; // 0x0628 (0x0004)
    bool bReflectionUpdateQueued; // 0x062C (0x0001)
    bool bUpdateQueuedWhileUpdating; // 0x062D (0x0001)
    bool bFirstTimeUpdate; // 0x062E (0x0001)
    uint8_t Pad_3[0x1]; // 0x062F (0x0001)
    uint8_t CaptureGuid[0x10]; // 0x0630 (0x0010)
    uint8_t CompressedDataVersion[0x4]; // 0x0640 (0x0004)
    uint8_t Pad_4[0x4]; // 0x0644 (0x0004)
    struct TArray<uint8_t> CompressedCaptureData; // 0x0648 (0x0010)
};

// Class: Engine.BendReflectionCapture
class BendReflectionCapture : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ReflectionCapture; // 0x0348 (0x0008)
};

// Class: Engine.Interface_BendMeshCollection
class Interface_BendMeshCollection : public Interface {
public:
};

// Class: Engine.BendStaticMeshCollectionComponent
class BendStaticMeshCollectionComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5B8]; // 0x0028 (0x05B8)
    struct TArray<uint8_t> StaticMeshes; // 0x05E0 (0x0010)
    struct TArray<uint8_t> Materials; // 0x05F0 (0x0010)
    struct TArray<uint8_t> CollisionSets; // 0x0600 (0x0010)
    struct TArray<uint8_t> SplinePhysicsData; // 0x0610 (0x0010)
    uint8_t CachedMeshStaticMeshCount[0x2]; // 0x0620 (0x0002)
    uint8_t CachedMeshSplineMeshCount[0x2]; // 0x0622 (0x0002)
    uint8_t CachedMeshBoundingBoxGroupCount[0x2]; // 0x0624 (0x0002)
    uint8_t CachedMeshUncachedVoxelizationCount[0x2]; // 0x0626 (0x0002)
    uint8_t CachedMeshVoxelizationCount[0x2]; // 0x0628 (0x0002)
    uint8_t CachedMeshVoxelizationGroupCount[0x2]; // 0x062A (0x0002)
    bool CachedMeshHasShadowCasters; // 0x062C (0x0001)
    bool CachedMeshHasVoxelizationMeshes; // 0x062D (0x0001)
    bool CachedMeshHasVelocityPassMeshes; // 0x062E (0x0001)
    bool CachedMeshHasEmissivePassMeshes; // 0x062F (0x0001)
    uint8_t Pad_1[0x60]; // 0x0630 (0x0060)
    class UObject* PhysicsSerializer; // 0x0690 (0x0008)
};

// Class: Engine.BendStaticMeshCollection
class BendStaticMeshCollection : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Component; // 0x0348 (0x0008)
};

// Class: Engine.BendVoxelLight
class BendVoxelLight : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* LightComponent; // 0x0348 (0x0008)
};

// Class: Engine.BendWetnessVolumeComponent
class BendWetnessVolumeComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    bool bEnabled; // 0x0600 (0x0001)
    bool RemoveWetness; // 0x0600 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0601 (0x0003)
    float WetnessAccumulation; // 0x0604 (0x0004)
    float PuddleAccumulation; // 0x0608 (0x0004)
    float SnowAccumulation; // 0x060C (0x0004)

public:
    void SetWetnessAccumulation(float Value);
    void SetSnowAccumulation(float Value);
    void SetRemoveWetness(bool Value);
    void SetPuddleAccumulation(float Value);
    void SetEnabled(bool Value);
};

// Class: Engine.BendWetnessVolume
class BendWetnessVolume : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* WetnessComponent; // 0x0348 (0x0008)
};

// Class: Engine.BodySetup
class BodySetup : public Object {
public:
    uint8_t AggGeom[0x48]; // 0x0028 (0x0048)
    struct FName BoneName; // 0x0070 (0x0008)
    uint8_t PhysicsType; // 0x0078 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0079 (0x0003)
    bool bAlwaysFullAnimWeight; // 0x007C (0x0001)
    bool bConsiderForBounds; // 0x007C (0x0001)
    bool bMeshCollideAll; // 0x007C (0x0001)
    bool bDoubleSidedGeometry; // 0x007C (0x0001)
    bool bGenerateNonMirroredCollision; // 0x007C (0x0001)
    bool bSharedCookedData; // 0x007C (0x0001)
    bool bGenerateMirroredCollision; // 0x007C (0x0001)
    bool bStripCollisionOnCook; // 0x007C (0x0001)
    uint8_t Pad_1[0x3]; // 0x007D (0x0003)
    class UObject* PhysMaterial; // 0x0080 (0x0008)
    uint8_t CollisionReponse; // 0x0088 (0x0001)
    uint8_t CollisionTraceFlag; // 0x0089 (0x0001)
    uint8_t Pad_2[0x6]; // 0x008A (0x0006)
    uint8_t DefaultInstance[0x1B0]; // 0x0090 (0x01B0)
    uint8_t WalkableSlopeOverride[0x8]; // 0x0240 (0x0008)
    float BuildScale; // 0x0248 (0x0004)
    uint8_t BuildScale3D[0xC]; // 0x024C (0x000C)
};

// Class: Engine.BendBlockingVolumeCollectionComponent
class BendBlockingVolumeCollectionComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    struct TArray<uint8_t> BlockingVolumes; // 0x05D0 (0x0010)
};

// Class: Engine.BlockingVolumeCollection
class BlockingVolumeCollection : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Component; // 0x0348 (0x0008)
};

// Class: Engine.BrushShape
class BrushShape : public Brush {
public:
};

// Class: Engine.AudioVolume
class AudioVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    float Priority; // 0x0388 (0x0004)
    bool bEnabled; // 0x038C (0x0001)
    uint8_t Pad_1[0x3]; // 0x038D (0x0003)
    uint8_t Settings[0x18]; // 0x0390 (0x0018)
    uint8_t AmbientZoneSettings[0x24]; // 0x03A8 (0x0024)
    uint64_t NextLowerPriorityVolume; // 0x03CC (0x0008)
};

// Class: Engine.BendAutoNavLinkVolume
class BendAutoNavLinkVolume : public Volume {
public:
};

// Class: Engine.BendCoverExclusionVolume
class BendCoverExclusionVolume : public Volume {
public:
};

// Class: Engine.BendFBXVolume
class BendFBXVolume : public Volume {
public:
};

// Class: Engine.BlockingVolume
class BlockingVolume : public Volume {
public:
    uint8_t Pad_0[0x368]; // 0x0028 (0x0368)
    class UClass* AreaClass; // 0x0390 (0x0008)
};

// Class: Engine.BendVehicleBlockingVolume
class BendVehicleBlockingVolume : public Volume {
public:
};

// Class: Engine.BendCoverBlockingVolume
class BendCoverBlockingVolume : public BlockingVolume {
public:
};

// Class: Engine.BendLineOfSightBlockingVolume
class BendLineOfSightBlockingVolume : public BlockingVolume {
public:
};

// Class: Engine.CameraBlockingVolume
class CameraBlockingVolume : public Volume {
public:
};

// Class: Engine.CullDistanceVolume
class CullDistanceVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    struct TArray<uint8_t> CullDistances; // 0x0388 (0x0010)
    bool bEnabled; // 0x0398 (0x0001)
};

// Class: Engine.LevelStreamingVolume
class LevelStreamingVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    struct TArray<uint8_t> StreamingLevelNames; // 0x0388 (0x0010)
    bool bEditorPreVisOnly; // 0x0398 (0x0001)
    bool bDisabled; // 0x0398 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0399 (0x0003)
    uint8_t StreamingUsage; // 0x039C (0x0001)
};

// Class: Engine.LightmassCharacterIndirectDetailVolume
class LightmassCharacterIndirectDetailVolume : public Volume {
public:
};

// Class: Engine.LightmassImportanceVolume
class LightmassImportanceVolume : public Volume {
public:
};

// Class: Engine.NavMeshBoundsVolume
class NavMeshBoundsVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    uint8_t SupportedAgents[0x4]; // 0x0388 (0x0004)
    uint8_t Pad_1[0x4]; // 0x038C (0x0004)
    struct FName NavAgentName; // 0x0390 (0x0008)
};

// Class: Engine.NavModifierVolume
class NavModifierVolume : public Volume {
public:
    uint8_t Pad_0[0x368]; // 0x0028 (0x0368)
    class UClass* AreaClass; // 0x0390 (0x0008)
    float AgentRadiusOverride; // 0x0398 (0x0004)

public:
    void SetAreaClass(class UClass* NewAreaClass);
};

// Class: Engine.PhysicsVolume
class PhysicsVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    float TerminalVelocity; // 0x0388 (0x0004)
    int32_t Priority; // 0x038C (0x0004)
    float FluidFriction; // 0x0390 (0x0004)
    bool bWaterVolume; // 0x0394 (0x0001)
    bool bPhysicsOnContact; // 0x0394 (0x0001)
};

// Class: Engine.DefaultPhysicsVolume
class DefaultPhysicsVolume : public PhysicsVolume {
public:
};

// Class: Engine.KillZVolume
class KillZVolume : public PhysicsVolume {
public:
};

// Class: Engine.PainCausingVolume
class PainCausingVolume : public PhysicsVolume {
public:
    uint8_t Pad_0[0x370]; // 0x0028 (0x0370)
    bool bPainCausing; // 0x0398 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0399 (0x0003)
    float DamagePerSec; // 0x039C (0x0004)
    class UClass* DamageType; // 0x03A0 (0x0008)
    float PainInterval; // 0x03A8 (0x0004)
    bool bEntryPain; // 0x03AC (0x0001)
    bool BACKUP_bPainCausing; // 0x03AC (0x0001)
    uint8_t Pad_2[0x3]; // 0x03AD (0x0003)
    class UObject* DamageInstigator; // 0x03B0 (0x0008)
};

// Class: Engine.BlendableInterface
class BlendableInterface : public Interface {
public:
};

// Class: Engine.Scene
class Scene : public Object {
public:
};

// Class: Engine.Interface_PostProcessVolume
class Interface_PostProcessVolume : public Interface {
public:
};

// Class: Engine.PostProcessVolume
class PostProcessVolume : public Volume {
public:
    uint8_t Pad_0[0x368]; // 0x0028 (0x0368)
    uint8_t Settings[0x960]; // 0x0390 (0x0960)
    float Priority; // 0x0CF0 (0x0004)
    float BlendRadius; // 0x0CF4 (0x0004)
    float BlendWeight; // 0x0CF8 (0x0004)
    bool bEnabled; // 0x0CFC (0x0001)
    bool bUnbound; // 0x0CFC (0x0001)
    bool bIndoorsOnly; // 0x0CFC (0x0001)
    bool bScaleBlendWeightByExposureRange; // 0x0CFC (0x0001)
    uint8_t Pad_1[0x3]; // 0x0CFD (0x0003)
    float ExposureValueBlendBegin; // 0x0D00 (0x0004)
    float ExposureValueBlendEnd; // 0x0D04 (0x0004)

public:
    void AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight);
};

// Class: Engine.PrecomputedVisibilityOverrideVolume
class PrecomputedVisibilityOverrideVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    struct TArray<uint8_t> OverrideVisibleActors; // 0x0388 (0x0010)
    struct TArray<uint8_t> OverrideInvisibleActors; // 0x0398 (0x0010)
    struct TArray<uint8_t> OverrideInvisibleLevels; // 0x03A8 (0x0010)
};

// Class: Engine.PrecomputedVisibilityVolume
class PrecomputedVisibilityVolume : public Volume {
public:
};

// Class: Engine.PreCullTrianglesVolume
class PreCullTrianglesVolume : public Volume {
public:
};

// Class: Engine.TriggerVolume
class TriggerVolume : public Volume {
public:
};

// Class: Engine.CameraActor
class CameraActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    uint8_t AutoActivateForPlayer; // 0x0348 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0349 (0x0007)
    class UObject* CameraComponent; // 0x0350 (0x0008)
    class UObject* SceneComponent; // 0x0358 (0x0008)
    uint8_t Pad_2[0x8]; // 0x0360 (0x0008)
    bool bConstrainAspectRatio; // 0x0368 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0369 (0x0003)
    float AspectRatio; // 0x036C (0x0004)
    float FOVAngle; // 0x0370 (0x0004)
    float PostProcessBlendWeight; // 0x0374 (0x0004)
    uint8_t Pad_4[0x8]; // 0x0378 (0x0008)
    uint8_t PostProcessSettings[0x960]; // 0x0380 (0x0960)

public:
    int32_t GetAutoActivatePlayerIndex();
};

// Class: Engine.NavAgentInterface
class NavAgentInterface : public Interface {
public:
};

// Class: Engine.CameraShake
class CameraShake : public Object {
public:
    bool bSingleInstance; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float OscillationDuration; // 0x002C (0x0004)
    float OscillationBlendInTime; // 0x0030 (0x0004)
    float OscillationBlendOutTime; // 0x0034 (0x0004)
    uint8_t RotOscillation[0x24]; // 0x0038 (0x0024)
    uint8_t LocOscillation[0x24]; // 0x005C (0x0024)
    uint8_t FOVOscillation[0xC]; // 0x0080 (0x000C)
    float AnimPlayRate; // 0x008C (0x0004)
    float AnimScale; // 0x0090 (0x0004)
    float AnimBlendInTime; // 0x0094 (0x0004)
    float AnimBlendOutTime; // 0x0098 (0x0004)
    float RandomAnimSegmentDuration; // 0x009C (0x0004)
    class UObject* anim; // 0x00A0 (0x0008)
    bool bRandomAnimSegment; // 0x00A8 (0x0001)
    uint8_t Pad_1[0x17]; // 0x00A9 (0x0017)
    class UObject* CameraOwner; // 0x00C0 (0x0008)
    uint8_t Pad_2[0x68]; // 0x00C8 (0x0068)
    float ShakeScale; // 0x0130 (0x0004)
    float OscillatorTimeRemaining; // 0x0134 (0x0004)
    class UObject* AnimInst; // 0x0138 (0x0008)

public:
    void ReceiveStopShake();
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, uint8_t POV, uint8_t ModifiedPOV);
};

// Class: Engine.InputComponent
class InputComponent : public ActorComponent {
public:

public:
    bool WasControllerKeyJustReleased(uint8_t Key);
    bool WasControllerKeyJustPressed(uint8_t Key);
    bool IsControllerKeyDown(uint8_t Key);
    void GetTouchState(int32_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed);
    uint8_t GetControllerVectorKeyState(uint8_t Key);
    void GetControllerMouseDelta(float DeltaX, float DeltaY);
    float GetControllerKeyTimeDown(uint8_t Key);
    void GetControllerAnalogStickState(uint8_t WhichStick, float StickX, float StickY);
    float GetControllerAnalogKeyState(uint8_t Key);
};

// Class: Engine.ForceFeedbackEffect
class ForceFeedbackEffect : public Object {
public:
    struct TArray<uint8_t> ChannelDetails; // 0x0028 (0x0010)
    float Duration; // 0x0038 (0x0004)
};

// Class: Engine.DebugCameraController
class DebugCameraController : public PlayerController {
public:
    uint8_t Pad_0[0x680]; // 0x0028 (0x0680)
    bool bShowSelectedInfo; // 0x06A8 (0x0001)
    bool bIsFrozenRendering; // 0x06A8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x06A9 (0x0007)
    class UObject* DrawFrustum; // 0x06B0 (0x0008)

public:
    void ShowDebugSelectedInfo();
};

// Class: Engine.DecalActor
class DecalActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Decal; // 0x0348 (0x0008)

public:
    void SetDecalMaterial(class UObject* NewDecalMaterial);
    class UObject* GetDecalMaterial();
    class UObject* CreateDynamicMaterialInstance();
};

// Class: Engine.DestructibleActor
class DestructibleActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* DestructibleComponent; // 0x0348 (0x0008)
    bool bAffectNavigation; // 0x0350 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0351 (0x0007)
    uint8_t OnActorFracture[0x10]; // 0x0358 (0x0010)
};

// Class: Engine.DocumentationActor
class DocumentationActor : public Actor {
public:
};

// Class: Engine.Emitter
class Emitter : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ParticleSystemComponent; // 0x0348 (0x0008)
    bool bDestroyOnSystemFinish; // 0x0350 (0x0001)
    bool bPostUpdateTickGroup; // 0x0350 (0x0001)
    bool bCurrentlyActive; // 0x0350 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0351 (0x0007)
    uint8_t OnParticleSpawn[0x10]; // 0x0358 (0x0010)
    uint8_t OnParticleBurst[0x10]; // 0x0368 (0x0010)
    uint8_t OnParticleDeath[0x10]; // 0x0378 (0x0010)
    uint8_t OnParticleCollide[0x10]; // 0x0388 (0x0010)

public:
    void ToggleActive();
    void SetVectorParameter(struct FName ParameterName, uint8_t Param);
    void SetTemplate(class UObject* NewTemplate);
    void SetMaterialParameter(struct FName ParameterName, class UObject* Param);
    void SetFloatParameter(struct FName ParameterName, float Param);
    void SetColorParameter(struct FName ParameterName, uint8_t Param);
    void SetActorParameter(struct FName ParameterName, class UObject* Param);
    void OnRep_bCurrentlyActive();
    void OnParticleSystemFinished(class UObject* FinishedComponent);
    bool IsActive();
    void Deactivate();
    void Activate();
};

// Class: Engine.EmitterCameraLensEffectBase
class EmitterCameraLensEffectBase : public Emitter {
public:
    uint8_t Pad_0[0x370]; // 0x0028 (0x0370)
    class UObject* PS_CameraEffect; // 0x0398 (0x0008)
    class UObject* PS_CameraEffectNonExtremeContent; // 0x03A0 (0x0008)
    class UObject* BaseCamera; // 0x03A8 (0x0008)
    uint8_t RelativeTransform[0x30]; // 0x03B0 (0x0030)
    float BaseFOV; // 0x03E0 (0x0004)
    bool bAllowMultipleInstances; // 0x03E4 (0x0001)
    uint8_t Pad_1[0x3]; // 0x03E5 (0x0003)
    struct TArray<uint8_t> EmittersToTreatAsSame; // 0x03E8 (0x0010)
    float DistFromCamera; // 0x03F8 (0x0004)
};

// Class: Engine.DebugCameraHUD
class DebugCameraHUD : public HUD {
public:
};

// Class: Engine.AtmosphericFog
class AtmosphericFog : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* AtmosphericFogComponent; // 0x0348 (0x0008)
};

// Class: Engine.ExponentialHeightFog
class ExponentialHeightFog : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Component; // 0x0348 (0x0008)
    bool bEnabled; // 0x0350 (0x0001)

public:
    void OnRep_bEnabled();
};

// Class: Engine.GameNetworkManager
class GameNetworkManager : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    int32_t AdjustedNetSpeed; // 0x0348 (0x0004)
    float LastNetSpeedUpdateTime; // 0x034C (0x0004)
    int32_t TotalNetBandwidth; // 0x0350 (0x0004)
    int32_t MinDynamicBandwidth; // 0x0354 (0x0004)
    int32_t MaxDynamicBandwidth; // 0x0358 (0x0004)
    bool bIsStandbyCheckingEnabled; // 0x035C (0x0001)
    bool bHasStandbyCheatTriggered; // 0x035C (0x0001)
    uint8_t Pad_1[0x3]; // 0x035D (0x0003)
    float StandbyRxCheatTime; // 0x0360 (0x0004)
    float StandbyTxCheatTime; // 0x0364 (0x0004)
    int32_t BadPingThreshold; // 0x0368 (0x0004)
    float PercentMissingForRxStandby; // 0x036C (0x0004)
    float PercentMissingForTxStandby; // 0x0370 (0x0004)
    float PercentForBadPing; // 0x0374 (0x0004)
    float JoinInProgressStandbyWaitTime; // 0x0378 (0x0004)
    float MoveRepSize; // 0x037C (0x0004)
    float MAXPOSITIONERRORSQUARED; // 0x0380 (0x0004)
    float MAXNEARZEROVELOCITYSQUARED; // 0x0384 (0x0004)
    float CLIENTADJUSTUPDATECOST; // 0x0388 (0x0004)
    float MAXCLIENTUPDATEINTERVAL; // 0x038C (0x0004)
    bool ClientAuthorativePosition; // 0x0390 (0x0001)
    bool bUseDistanceBasedRelevancy; // 0x0391 (0x0001)
};

// Class: Engine.GameSession
class GameSession : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    int32_t MaxSpectators; // 0x0348 (0x0004)
    int32_t MaxPlayers; // 0x034C (0x0004)
    int32_t MaxPartySize; // 0x0350 (0x0004)
    uint8_t MaxSplitscreensPerConnection; // 0x0354 (0x0001)
    bool bRequiresPushToTalk; // 0x0355 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0356 (0x0002)
    struct FName SessionName; // 0x0358 (0x0008)
};

// Class: Engine.SkyLight
class SkyLight : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* LightComponent; // 0x0348 (0x0008)
    bool bEnabled; // 0x0350 (0x0001)

public:
    void OnRep_bEnabled();
};

// Class: Engine.WindDirectionalSource
class WindDirectionalSource : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* Component; // 0x0348 (0x0008)
};

// Class: Engine.BendWorldSettings
class BendWorldSettings : public WorldSettings {
public:
    uint8_t Pad_0[0x4C0]; // 0x0028 (0x04C0)
    uint8_t WeatherMapOrigin[0x8]; // 0x04E8 (0x0008)
    uint8_t WeatherMapSize[0x8]; // 0x04F0 (0x0008)
    uint8_t WeatherMapMax[0x8]; // 0x04F8 (0x0008)
    class UObject* WeatherMapTexture; // 0x0500 (0x0008)
    uint8_t WeatherMapColor[0x10]; // 0x0508 (0x0010)
    int32_t WeatherMapLayerOffset; // 0x0518 (0x0004)
};

// Class: Engine.LevelBounds
class LevelBounds : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    bool bAutoUpdateBounds; // 0x0348 (0x0001)

public:
    bool GetAutoUpdateBounds();
};

// Class: Engine.Light
class Light : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* LightComponent; // 0x0348 (0x0008)
    bool bEnabled; // 0x0350 (0x0001)

public:
    void ToggleEnabled();
    void SetLightFunctionScale(uint8_t NewLightFunctionScale);
    void SetLightFunctionMaterial(class UObject* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightColor(uint8_t NewLightColor);
    void SetEnabled(bool bSetEnabled);
    void SetCastShadows(bool bNewValue);
    void SetBrightness(float NewBrightness);
    void SetAffectTranslucentLighting(bool bNewValue);
    void OnRep_bEnabled();
    bool IsEnabled();
    uint8_t GetLightColor();
    float GetBrightness();
};

// Class: Engine.DirectionalLight
class DirectionalLight : public Light {
public:
};

// Class: Engine.PointLight
class PointLight : public Light {
public:
    uint8_t Pad_0[0x330]; // 0x0028 (0x0330)
    class UObject* PointLightComponent; // 0x0358 (0x0008)

public:
    void SetRadius(float NewRadius);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
};

// Class: Engine.SpotLight
class SpotLight : public Light {
public:
    uint8_t Pad_0[0x330]; // 0x0028 (0x0330)
    class UObject* SpotLightComponent; // 0x0358 (0x0008)

public:
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
};

// Class: Engine.GeneratedMeshAreaLight
class GeneratedMeshAreaLight : public SpotLight {
public:
};

// Class: Engine.LightmassPortal
class LightmassPortal : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* PortalComponent; // 0x0348 (0x0008)
};

// Class: Engine.LODActor
class LODActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* StaticMeshComponent; // 0x0348 (0x0008)
    struct TArray<uint8_t> SubActors; // 0x0350 (0x0010)
    float LODDrawDistance; // 0x0360 (0x0004)
    int32_t LODLevel; // 0x0364 (0x0004)
    struct TArray<uint8_t> SubObjects; // 0x0368 (0x0010)
};

// Class: Engine.MaterialInstanceActor
class MaterialInstanceActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    struct TArray<uint8_t> TargetActors; // 0x0348 (0x0010)
};

// Class: Engine.MatineeActor
class MatineeActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* MatineeData; // 0x0348 (0x0008)
    struct FName MatineeControllerName; // 0x0350 (0x0008)
    float PlayRate; // 0x0358 (0x0004)
    bool bPlayOnLevelLoad; // 0x035C (0x0001)
    bool bForceStartPos; // 0x035C (0x0001)
    uint8_t Pad_1[0x3]; // 0x035D (0x0003)
    float ForceStartPosition; // 0x0360 (0x0004)
    bool bLooping; // 0x0364 (0x0001)
    bool bRewindOnPlay; // 0x0364 (0x0001)
    bool bNoResetOnRewind; // 0x0364 (0x0001)
    bool bRewindIfAlreadyPlaying; // 0x0364 (0x0001)
    bool bDisableRadioFilter; // 0x0364 (0x0001)
    bool bClientSideOnly; // 0x0364 (0x0001)
    bool bSkipUpdateIfNotVisible; // 0x0364 (0x0001)
    bool bIsSkippable; // 0x0364 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0365 (0x0003)
    int32_t PreferredSplitScreenNum; // 0x0368 (0x0004)
    bool bDisableMovementInput; // 0x036C (0x0001)
    bool bDisableLookAtInput; // 0x036C (0x0001)
    bool bHidePlayer; // 0x036C (0x0001)
    bool bHideHud; // 0x036C (0x0001)
    uint8_t Pad_3[0x3]; // 0x036D (0x0003)
    struct TArray<uint8_t> GroupActorInfos; // 0x0370 (0x0010)
    bool bShouldShowGore; // 0x0380 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0381 (0x0007)
    struct TArray<uint8_t> GroupInst; // 0x0388 (0x0010)
    struct TArray<uint8_t> CameraCuts; // 0x0398 (0x0010)
    bool bIsPlaying; // 0x03A8 (0x0001)
    bool bReversePlayback; // 0x03A8 (0x0001)
    bool bPaused; // 0x03A8 (0x0001)
    bool bPendingStop; // 0x03A8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x03A9 (0x0003)
    float InterpPosition; // 0x03AC (0x0004)
    uint8_t Pad_6[0x4]; // 0x03B0 (0x0004)
    bool bIsAudioSyncMastered; // 0x03B4 (0x0001)
    uint8_t Pad_7[0x3]; // 0x03B5 (0x0003)
    uint8_t PreLoadStage; // 0x03B8 (0x0001)
    uint8_t Pad_8[0x3]; // 0x03B9 (0x0003)
    float AudioSyncMasterPlaybackTime; // 0x03BC (0x0004)
    float SyncMasterTakeoverPosition; // 0x03C0 (0x0004)
    uint8_t ReplicationForceIsPlaying; // 0x03C4 (0x0001)

public:
    void Stop();
    void Skip();
    void SetPosition(float NewPosition, bool bJump);
    void SetMatineeChaining(class UObject* NextMatinee);
    void SetLoopingState(bool bNewLooping);
    void Reverse();
    void PreLoad(bool bShouldBlockOnLoad, uint8_t LatentInfo);
    void Play();
    void Pause();
    int32_t ForceStreamInResources(float TimeAllowed);
    void ChangePlaybackDirection();
};

// Class: Engine.MatineeActorCameraAnim
class MatineeActorCameraAnim : public MatineeActor {
public:
    uint8_t Pad_0[0x468]; // 0x0028 (0x0468)
    class UObject* CameraAnim; // 0x0490 (0x0008)
};

// Class: Engine.NavigationData
class NavigationData : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* RenderingComp; // 0x0348 (0x0008)
    uint8_t NavDataConfig[0x50]; // 0x0350 (0x0050)
    bool bEnableDrawing; // 0x03A0 (0x0001)
    bool bForceRebuildOnLoad; // 0x03A0 (0x0001)
    bool bCanBeMainNavData; // 0x03A0 (0x0001)
    bool bCanSpawnOnRebuild; // 0x03A0 (0x0001)
    bool bRebuildAtRuntime; // 0x03A0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x03A1 (0x0003)
    uint8_t RuntimeGeneration; // 0x03A4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x03A5 (0x0003)
    float ObservedPathsTickInterval; // 0x03A8 (0x0004)
    uint8_t DataVersion[0x4]; // 0x03AC (0x0004)
    uint8_t Pad_3[0xD0]; // 0x03B0 (0x00D0)
    struct TArray<uint8_t> SupportedAreas; // 0x0480 (0x0010)
};

// Class: Engine.AbstractNavData
class AbstractNavData : public NavigationData {
public:
};

// Class: Engine.NavigationGraph
class NavigationGraph : public NavigationData {
public:
};

// Class: Engine.RecastNavMesh
class RecastNavMesh : public NavigationData {
public:
    uint8_t Pad_0[0x4C0]; // 0x0028 (0x04C0)
    bool bDrawTriangleEdges; // 0x04E8 (0x0001)
    bool bDrawPolyEdges; // 0x04E8 (0x0001)
    bool bDrawFilledPolys; // 0x04E8 (0x0001)
    bool bDrawNavMeshEdges; // 0x04E8 (0x0001)
    bool bDrawTileBounds; // 0x04E8 (0x0001)
    bool bDrawPathCollidingGeometry; // 0x04E8 (0x0001)
    bool bDrawTileLabels; // 0x04E8 (0x0001)
    bool bDrawPolygonLabels; // 0x04E8 (0x0001)
    bool bDrawDefaultPolygonCost; // 0x04E9 (0x0001)
    bool bDrawLabelsOnPathNodes; // 0x04E9 (0x0001)
    bool bDrawNavLinks; // 0x04E9 (0x0001)
    bool bDrawFailedNavLinks; // 0x04E9 (0x0001)
    bool bDrawClusters; // 0x04E9 (0x0001)
    bool bDrawClusterArrows; // 0x04E9 (0x0001)
    bool bDrawClusterDebug; // 0x04E9 (0x0001)
    bool bDrawOctree; // 0x04E9 (0x0001)
    bool bDistinctlyDrawTilesBeingBuilt; // 0x04EA (0x0001)
    bool bDrawNavMesh; // 0x04EA (0x0001)
    uint8_t Pad_1[0x1]; // 0x04EB (0x0001)
    float DrawOffset; // 0x04EC (0x0004)
    bool bFixedTilePoolSize; // 0x04F0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x04F1 (0x0003)
    int32_t TilePoolSize; // 0x04F4 (0x0004)
    float TileSizeUU; // 0x04F8 (0x0004)
    float CellSize; // 0x04FC (0x0004)
    float CellHeight; // 0x0500 (0x0004)
    float AgentRadius; // 0x0504 (0x0004)
    float AgentHeight; // 0x0508 (0x0004)
    float AgentMaxHeight; // 0x050C (0x0004)
    float AgentMaxSlope; // 0x0510 (0x0004)
    float AgentMaxStepHeight; // 0x0514 (0x0004)
    float MinRegionArea; // 0x0518 (0x0004)
    float MergeRegionSize; // 0x051C (0x0004)
    float MaxSimplificationError; // 0x0520 (0x0004)
    float AgentRadiusRager; // 0x0524 (0x0004)
    float AgentHeightRager; // 0x0528 (0x0004)
    bool bApplyRagerExcludeAreaGlobally; // 0x052C (0x0001)
    bool bPostProcessMinRegionArea; // 0x052C (0x0001)
    uint8_t Pad_3[0x3]; // 0x052D (0x0003)
    float ShallowWaterDepth; // 0x0530 (0x0004)
    uint8_t Pad_4[0x4]; // 0x0534 (0x0004)
    class UClass* ShallowWaterAreaClass; // 0x0538 (0x0008)
    class UClass* DeepWaterAreaClass; // 0x0540 (0x0008)
    int32_t MaxSimultaneousTileGenerationJobsCount; // 0x0548 (0x0004)
    int32_t TileNumberHardLimit; // 0x054C (0x0004)
    int32_t PolyRefTileBits; // 0x0550 (0x0004)
    int32_t PolyRefNavPolyBits; // 0x0554 (0x0004)
    int32_t PolyRefSaltBits; // 0x0558 (0x0004)
    float DefaultDrawDistance; // 0x055C (0x0004)
    float DefaultMaxSearchNodes; // 0x0560 (0x0004)
    float DefaultMaxHierarchicalSearchNodes; // 0x0564 (0x0004)
    uint8_t RegionPartitioning; // 0x0568 (0x0001)
    uint8_t LayerPartitioning; // 0x0569 (0x0001)
    uint8_t Pad_5[0x2]; // 0x056A (0x0002)
    int32_t RegionChunkSplits; // 0x056C (0x0004)
    int32_t LayerChunkSplits; // 0x0570 (0x0004)
    bool bSortNavigationAreasByCost; // 0x0574 (0x0001)
    bool bPerformVoxelFiltering; // 0x0574 (0x0001)
    bool bMarkLowHeightAreas; // 0x0574 (0x0001)
    bool bDoFullyAsyncNavDataGathering; // 0x0574 (0x0001)
    bool bUseBetterOffsetsFromCorners; // 0x0574 (0x0001)
    bool bUseVirtualFilters; // 0x0574 (0x0001)
    bool bUseVoxelCache; // 0x0574 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0575 (0x0003)
    float TileSetUpdateInterval; // 0x0578 (0x0004)
    float HeuristicScale; // 0x057C (0x0004)
    float VerticalDeviationFromGroundCompensation; // 0x0580 (0x0004)
};

// Class: Engine.NavigationGraphNode
class NavigationGraphNode : public Actor {
public:
};

// Class: Engine.PlayerStartPIE
class PlayerStartPIE : public PlayerStart {
public:
};

// Class: Engine.NavPathObserverInterface
class NavPathObserverInterface : public Interface {
public:
};

// Class: Engine.NavigationTestingActor
class NavigationTestingActor : public Actor {
public:
    uint8_t Pad_0[0x330]; // 0x0028 (0x0330)
    class UObject* CapsuleComponent; // 0x0358 (0x0008)
    class UObject* InvokerComponent; // 0x0360 (0x0008)
    bool bActAsNavigationInvoker; // 0x0368 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0369 (0x0007)
    uint8_t NavAgentProps[0x28]; // 0x0370 (0x0028)
    uint8_t QueryingExtent[0xC]; // 0x0398 (0x000C)
    uint8_t Pad_2[0x4]; // 0x03A4 (0x0004)
    class UObject* MyNavData; // 0x03A8 (0x0008)
    uint8_t ProjectedLocation[0xC]; // 0x03B0 (0x000C)
    bool bProjectedLocationValid; // 0x03BC (0x0001)
    bool bSearchStart; // 0x03BC (0x0001)
    bool bUseHierarchicalPathfinding; // 0x03BC (0x0001)
    bool bGatherDetailedInfo; // 0x03BC (0x0001)
    bool bShowNodePool; // 0x03BC (0x0001)
    bool bShowBestPath; // 0x03BC (0x0001)
    bool bShowDiffWithPreviousStep; // 0x03BC (0x0001)
    bool bShouldBeVisibleInGame; // 0x03BC (0x0001)
    uint8_t Pad_3[0x3]; // 0x03BD (0x0003)
    uint8_t CostDisplayMode; // 0x03C0 (0x0001)
    uint8_t Pad_4[0x3]; // 0x03C1 (0x0003)
    uint8_t TextCanvasOffset[0x8]; // 0x03C4 (0x0008)
    bool bPathExist; // 0x03CC (0x0001)
    bool bPathIsPartial; // 0x03CC (0x0001)
    bool bPathSearchOutOfNodes; // 0x03CC (0x0001)
    uint8_t Pad_5[0x3]; // 0x03CD (0x0003)
    float PathfindingTime; // 0x03D0 (0x0004)
    float PathCost; // 0x03D4 (0x0004)
    int32_t PathfindingSteps; // 0x03D8 (0x0004)
    uint8_t Pad_6[0x4]; // 0x03DC (0x0004)
    class UObject* OtherActor; // 0x03E0 (0x0008)
    class UClass* FilterClass; // 0x03E8 (0x0008)
    int32_t ShowStepIndex; // 0x03F0 (0x0004)
    float OffsetFromCornersDistance; // 0x03F4 (0x0004)
};

// Class: Engine.NavLinkDefinition
class NavLinkDefinition : public Object {
public:
    struct TArray<uint8_t> Links; // 0x0028 (0x0010)
    struct TArray<uint8_t> SegmentLinks; // 0x0038 (0x0010)
};

// Class: Engine.NavLinkHostInterface
class NavLinkHostInterface : public Interface {
public:
};

// Class: Engine.NavLinkCustomInterface
class NavLinkCustomInterface : public Interface {
public:
};

// Class: Engine.Note
class Note : public Actor {
public:
};

// Class: Engine.ParticleEventManager
class ParticleEventManager : public Actor {
public:
};

// Class: Engine.DefaultPawn
class DefaultPawn : public Pawn {
public:
    uint8_t Pad_0[0x388]; // 0x0028 (0x0388)
    float BaseTurnRate; // 0x03B0 (0x0004)
    float BaseLookUpRate; // 0x03B4 (0x0004)
    class UObject* MovementComponent; // 0x03B8 (0x0008)
    class UObject* CollisionComponent; // 0x03C0 (0x0008)
    class UObject* MeshComponent; // 0x03C8 (0x0008)
    bool bAddDefaultMovementBindings; // 0x03D0 (0x0001)

public:
    void TurnAtRate(float Rate);
    void Turn(float Val);
    void MoveUp_World(float Val);
    void MoveRight(float Val);
    void MoveForward(float Val);
    void LookUpAtRate(float Rate);
    void LookUp(float Val);
};

// Class: Engine.SpectatorPawn
class SpectatorPawn : public DefaultPawn {
public:
};

// Class: Engine.WheeledVehicle
class WheeledVehicle : public Pawn {
public:
    uint8_t Pad_0[0x388]; // 0x0028 (0x0388)
    class UObject* Mesh; // 0x03B0 (0x0008)
    class UObject* VehicleMovement; // 0x03B8 (0x0008)
};

// Class: Engine.ReflectionCapture
class ReflectionCapture : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* CaptureComponent; // 0x0348 (0x0008)
};

// Class: Engine.BoxReflectionCapture
class BoxReflectionCapture : public ReflectionCapture {
public:
};

// Class: Engine.PlaneReflectionCapture
class PlaneReflectionCapture : public ReflectionCapture {
public:
};

// Class: Engine.SphereReflectionCapture
class SphereReflectionCapture : public ReflectionCapture {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    class UObject* DrawCaptureRadius; // 0x0350 (0x0008)
};

// Class: Engine.RigidBodyBase
class RigidBodyBase : public Actor {
public:
};

// Class: Engine.PhysicsConstraintActor
class PhysicsConstraintActor : public RigidBodyBase {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ConstraintComp; // 0x0348 (0x0008)
    class UObject* ConstraintActor1; // 0x0350 (0x0008)
    class UObject* ConstraintActor2; // 0x0358 (0x0008)
    bool bDisableCollision; // 0x0360 (0x0001)
};

// Class: Engine.PhysicsThruster
class PhysicsThruster : public RigidBodyBase {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ThrusterComponent; // 0x0348 (0x0008)
};

// Class: Engine.RadialForceActor
class RadialForceActor : public RigidBodyBase {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ForceComponent; // 0x0348 (0x0008)

public:
    void ToggleForce();
    void FireImpulse();
    void EnableForce();
    void DisableForce();
};

// Class: Engine.SceneCapture
class SceneCapture : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* MeshComp; // 0x0348 (0x0008)
};

// Class: Engine.SceneCapture2D
class SceneCapture2D : public SceneCapture {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    class UObject* CaptureComponent2D; // 0x0350 (0x0008)
    class UObject* DrawFrustum; // 0x0358 (0x0008)

public:
    void OnInterpToggle(bool bEnable);
};

// Class: Engine.SceneCaptureCube
class SceneCaptureCube : public SceneCapture {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    class UObject* CaptureComponentCube; // 0x0350 (0x0008)
    class UObject* DrawFrustum; // 0x0358 (0x0008)

public:
    void OnInterpToggle(bool bEnable);
};

// Class: Engine.SplineMeshActor
class SplineMeshActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* SplineMeshComponent; // 0x0348 (0x0008)
};

// Class: Engine.TargetPoint
class TargetPoint : public Actor {
public:
};

// Class: Engine.TextRenderActor
class TextRenderActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* TextRender; // 0x0348 (0x0008)
};

// Class: Engine.TriggerCapsule
class TriggerCapsule : public TriggerBase {
public:
};

// Class: Engine.TriggerSphere
class TriggerSphere : public TriggerBase {
public:
};

// Class: Engine.VectorFieldVolume
class VectorFieldVolume : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* VectorFieldComponent; // 0x0348 (0x0008)
};

// Class: Engine.ApplicationLifecycleComponent
class ApplicationLifecycleComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    uint8_t ApplicationWillDeactivateDelegate[0x10]; // 0x00D0 (0x0010)
    uint8_t ApplicationHasReactivatedDelegate[0x10]; // 0x00E0 (0x0010)
    uint8_t ApplicationWillEnterBackgroundDelegate[0x10]; // 0x00F0 (0x0010)
    uint8_t ApplicationHasEnteredForegroundDelegate[0x10]; // 0x0100 (0x0010)
    uint8_t ApplicationWillTerminateDelegate[0x10]; // 0x0110 (0x0010)

public:
    void ApplicationLifetimeDelegate__DelegateSignature();
};

// Class: Engine.SplineComponent
class SplineComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    uint8_t SplineInfo[0x18]; // 0x05D0 (0x0018)
    uint8_t SplineRotInfo[0x18]; // 0x05E8 (0x0018)
    uint8_t SplineScaleInfo[0x18]; // 0x0600 (0x0018)
    uint8_t SplineReparamTable[0x18]; // 0x0618 (0x0018)
    bool bAllowSplineEditingPerInstance; // 0x0630 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0631 (0x0003)
    int32_t ReparamStepsPerSegment; // 0x0634 (0x0004)
    float Duration; // 0x0638 (0x0004)
    bool bStationaryEndpoints; // 0x063C (0x0001)
    bool bSplineHasBeenEdited; // 0x063D (0x0001)
    bool bClosedLoop; // 0x063E (0x0001)
    uint8_t Pad_2[0x1]; // 0x063F (0x0001)
    uint8_t DefaultUpVector[0xC]; // 0x0640 (0x000C)

public:
    void UpdateSpline();
    void SetWorldLocationAtSplinePoint(int32_t PointIndex, uint8_t InLocation);
    void SetUnselectedSplineSegmentColor(uint8_t SegmentColor);
    void SetTangentAtSplinePoint(int32_t PointIndex, uint8_t InTangent, uint8_t CoordinateSpace);
    void SetSplineWorldPoints(struct TArray<uint8_t> Points);
    void SetSplinePointType(int32_t PointIndex, uint8_t Type);
    void SetSplinePoints(struct TArray<uint8_t> Points, uint8_t CoordinateSpace);
    void SetSplineLocalPoints(struct TArray<uint8_t> Points);
    void SetSelectedSplineSegmentColor(uint8_t SegmentColor);
    void SetLocationAtSplinePoint(int32_t PointIndex, uint8_t InLocation, uint8_t CoordinateSpace);
    void SetDefaultUpVector(uint8_t UpVector, uint8_t CoordinateSpace);
    void SetClosedLoop(bool bInClosedLoop);
    void RemoveSplinePoint(int32_t Index);
    bool IsClosedLoop();
    uint8_t GetWorldTangentAtDistanceAlongSpline(float Distance);
    uint8_t GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
    uint8_t GetWorldRotationAtDistanceAlongSpline(float Distance);
    uint8_t GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
    uint8_t GetWorldLocationAtSplinePoint(int32_t PointIndex);
    uint8_t GetWorldLocationAtDistanceAlongSpline(float Distance);
    uint8_t GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
    uint8_t GetWorldDirectionAtDistanceAlongSpline(float Distance);
    uint8_t GetUpVectorAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetUpVectorAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetUpVectorAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    uint8_t GetTransformAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
    uint8_t GetTransformAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace, bool bUseScale);
    uint8_t GetTransformAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace, bool bUseScale);
    uint8_t GetTangentAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetTangentAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetTangentAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    uint8_t GetSplinePointType(int32_t PointIndex);
    float GetSplineLength();
    uint8_t GetScaleAtTime(float Time, bool bUseConstantVelocity);
    uint8_t GetScaleAtSplinePoint(int32_t PointIndex);
    uint8_t GetScaleAtDistanceAlongSpline(float Distance);
    uint8_t GetRotationAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetRotationAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetRotationAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    float GetRollAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    float GetRollAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    float GetRollAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    uint8_t GetRightVectorAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetRightVectorAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetRightVectorAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    uint8_t GetQuaternionAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetQuaternionAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetQuaternionAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    int32_t GetNumberOfSplinePoints();
    uint8_t GetLocationAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetLocationAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetLocationAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, uint8_t Location, uint8_t Tangent, uint8_t CoordinateSpace);
    void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, uint8_t LocalLocation, uint8_t LocalTangent);
    float GetInputKeyAtDistanceAlongSpline(float Distance);
    float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex);
    uint8_t GetDirectionAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity);
    uint8_t GetDirectionAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace);
    uint8_t GetDirectionAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace);
    uint8_t GetDefaultUpVector(uint8_t CoordinateSpace);
    uint8_t FindUpVectorClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    uint8_t FindTransformClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace, bool bUseScale);
    uint8_t FindTangentClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    uint8_t FindScaleClosestToWorldLocation(uint8_t WorldLocation);
    uint8_t FindRotationClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    float FindRollClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    uint8_t FindRightVectorClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    uint8_t FindQuaternionClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    uint8_t FindLocationClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    float FindInputKeyClosestToWorldLocation(uint8_t WorldLocation);
    uint8_t FindDirectionClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace);
    void ClearSplinePoints();
    void AddSplineWorldPoint(uint8_t Position);
    void AddSplinePointAtIndex(uint8_t Position, int32_t Index, uint8_t CoordinateSpace);
    void AddSplinePoint(uint8_t Position, uint8_t CoordinateSpace);
    void AddSplineLocalPoint(uint8_t Position);
};

// Class: Engine.InterpToMovementComponent
class InterpToMovementComponent : public MovementComponent {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    float Duration; // 0x0120 (0x0004)
    bool bPauseOnImpact; // 0x0124 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0125 (0x0003)
    uint8_t BehaviourType; // 0x0128 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0129 (0x0003)
    bool bForceSubStepping; // 0x012C (0x0001)
    uint8_t Pad_3[0x3]; // 0x012D (0x0003)
    uint8_t OnInterpToReverse[0x10]; // 0x0130 (0x0010)
    uint8_t OnInterpToStop[0x10]; // 0x0140 (0x0010)
    uint8_t OnWaitBeginDelegate[0x10]; // 0x0150 (0x0010)
    uint8_t OnWaitEndDelegate[0x10]; // 0x0160 (0x0010)
    uint8_t OnResetDelegate[0x10]; // 0x0170 (0x0010)
    float MaxSimulationTimeStep; // 0x0180 (0x0004)
    int32_t MaxSimulationIterations; // 0x0184 (0x0004)
    struct TArray<uint8_t> ControlPoints; // 0x0188 (0x0010)

public:
    void StopSimulating(uint8_t HitResult);
    void RestartMovement(float InitialDirection);
    void OnInterpToWaitEndDelegate__DelegateSignature(uint8_t ImpactResult, float Time);
    void OnInterpToWaitBeginDelegate__DelegateSignature(uint8_t ImpactResult, float Time);
    void OnInterpToStopDelegate__DelegateSignature(uint8_t ImpactResult, float Time);
    void OnInterpToReverseDelegate__DelegateSignature(uint8_t ImpactResult, float Time);
    void OnInterpToResetDelegate__DelegateSignature(uint8_t ImpactResult, float Time);
    void FinaliseControlPoints();
};

// Class: Engine.RVOAvoidanceInterface
class RVOAvoidanceInterface : public Interface {
public:
};

// Class: Engine.NetworkPredictionInterface
class NetworkPredictionInterface : public Interface {
public:
};

// Class: Engine.FloatingPawnMovement
class FloatingPawnMovement : public PawnMovementComponent {
public:
    uint8_t Pad_0[0x138]; // 0x0028 (0x0138)
    float MaxSpeed; // 0x0160 (0x0004)
    float Acceleration; // 0x0164 (0x0004)
    float Deceleration; // 0x0168 (0x0004)
    float TurningBoost; // 0x016C (0x0004)
    bool bPositionCorrected; // 0x0170 (0x0001)
};

// Class: Engine.SpectatorPawnMovement
class SpectatorPawnMovement : public FloatingPawnMovement {
public:
    uint8_t Pad_0[0x150]; // 0x0028 (0x0150)
    bool bIgnoreTimeDilation; // 0x0178 (0x0001)
};

// Class: Engine.RotatingMovementComponent
class RotatingMovementComponent : public MovementComponent {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    uint8_t RotationRate[0xC]; // 0x0120 (0x000C)
    uint8_t PivotTranslation[0xC]; // 0x012C (0x000C)
    bool bRotationInLocalSpace; // 0x0138 (0x0001)
};

// Class: Engine.NavigationInvokerComponent
class NavigationInvokerComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    float TileGenerationRadius; // 0x00D0 (0x0004)
    float TileRemovalRadius; // 0x00D4 (0x0004)
};

// Class: Engine.NavModifierComponent
class NavModifierComponent : public NavRelevantComponent {
public:
    uint8_t Pad_0[0xD8]; // 0x0028 (0x00D8)
    class UClass* AreaClass; // 0x0100 (0x0008)
    uint8_t FailsafeExtent[0xC]; // 0x0108 (0x000C)
};

// Class: Engine.PawnNoiseEmitterComponent
class PawnNoiseEmitterComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    bool bAIPerceptionSystemCompatibilityMode; // 0x00D0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00D1 (0x0003)
    uint8_t LastRemoteNoisePosition[0xC]; // 0x00D4 (0x000C)
    float NoiseLifetime; // 0x00E0 (0x0004)
    uint8_t Pad_2[0x4]; // 0x00E4 (0x0004)
    float LastRemoteNoiseVolume; // 0x00E8 (0x0004)
    float LastRemoteNoiseTime; // 0x00EC (0x0004)
    float LastLocalNoiseVolume; // 0x00F0 (0x0004)
    float LastLocalNoiseTime; // 0x00F4 (0x0004)

public:
    void MakeNoise(class UObject* NoiseMaker, float Loudness, uint8_t NoiseLocation);
};

// Class: Engine.PhysicsHandleComponent
class PhysicsHandleComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* GrabbedComponent; // 0x00D0 (0x0008)
    uint8_t Pad_1[0x10]; // 0x00D8 (0x0010)
    float LinearDamping; // 0x00E8 (0x0004)
    float LinearStiffness; // 0x00EC (0x0004)
    float AngularDamping; // 0x00F0 (0x0004)
    float AngularStiffness; // 0x00F4 (0x0004)
    uint8_t Pad_2[0x68]; // 0x00F8 (0x0068)
    float InterpolationSpeed; // 0x0160 (0x0004)

public:
    void SetTargetRotation(uint8_t NewRotation);
    void SetTargetLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation);
    void SetTargetLocation(uint8_t NewLocation);
    void SetLinearStiffness(float NewLinearStiffness);
    void SetLinearDamping(float NewLinearDamping);
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    void SetAngularStiffness(float NewAngularStiffness);
    void SetAngularDamping(float NewAngularDamping);
    void ReleaseComponent();
    void GrabComponent(class UObject* Component, struct FName InBoneName, uint8_t GrabLocation, bool bConstrainRotation);
    void GetTargetLocationAndRotation(uint8_t TargetLocation, uint8_t TargetRotation);
};

// Class: Engine.PlatformEventsComponent
class PlatformEventsComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    uint8_t PlatformChangedToLaptopModeDelegate[0x10]; // 0x00D0 (0x0010)
    uint8_t PlatformChangedToTabletModeDelegate[0x10]; // 0x00E0 (0x0010)

public:
    bool SupportsConvertibleLaptops();
    void PlatformEventDelegate__DelegateSignature();
    bool IsInTabletMode();
    bool IsInLaptopMode();
};

// Class: Engine.AtmosphericFogComponent
class AtmosphericFogComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float SunMultiplier; // 0x0210 (0x0004)
    float FogMultiplier; // 0x0214 (0x0004)
    float DensityMultiplier; // 0x0218 (0x0004)
    float DensityOffset; // 0x021C (0x0004)
    float DistanceScale; // 0x0220 (0x0004)
    float AltitudeScale; // 0x0224 (0x0004)
    float DistanceOffset; // 0x0228 (0x0004)
    float GroundOffset; // 0x022C (0x0004)
    float StartDistance; // 0x0230 (0x0004)
    float SunDiscScale; // 0x0234 (0x0004)
    float DefaultBrightness; // 0x0238 (0x0004)
    uint8_t DefaultLightColor[0x4]; // 0x023C (0x0004)
    bool bDisableSunDisk; // 0x0240 (0x0001)
    bool bDisableGroundScattering; // 0x0240 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0241 (0x0003)
    uint8_t FogDensityColor[0x10]; // 0x0244 (0x0010)
    float FogDistanceLinearity; // 0x0254 (0x0004)
    float MipFogTransitionDistance; // 0x0258 (0x0004)
    float MipFogBackgroundMipLevel; // 0x025C (0x0004)
    float MipFogForegroundMipLevel; // 0x0260 (0x0004)
    bool BlendWithUnlitGeometry; // 0x0264 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0265 (0x0003)
    float ReferenceAltitudeMeters; // 0x0268 (0x0004)
    float CloudsLightingHeightMeters; // 0x026C (0x0004)
    float ExtendedHorizon; // 0x0270 (0x0004)
    uint8_t RayleighScatterTerm[0xC]; // 0x0274 (0x000C)
    float RayleighScaleTerm; // 0x0280 (0x0004)
    float MieScatterTerm; // 0x0284 (0x0004)
    float MieScaleTerm; // 0x0288 (0x0004)
    float MieDirectionTerm; // 0x028C (0x0004)
    bool ScaleTerrainValuesToSkyValues; // 0x0290 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0291 (0x0003)
    uint8_t RayleighScatterTerm_Terrain[0xC]; // 0x0294 (0x000C)
    float RayleighScaleTerm_Terrain; // 0x02A0 (0x0004)
    float MieScatterTerm_Terrain; // 0x02A4 (0x0004)
    float MieScaleTerm_Terrain; // 0x02A8 (0x0004)
    float MieDirectionTerm_Terrain; // 0x02AC (0x0004)
    uint8_t TerrainAtmosphereTint[0x10]; // 0x02B0 (0x0010)
    uint8_t TerrainCloudTint[0x10]; // 0x02C0 (0x0010)
    float RayleighDirectionalScale_Terrain; // 0x02D0 (0x0004)
    float MieDirectionalScale_Terrain; // 0x02D4 (0x0004)
    uint8_t PrecomputeParams[0x2C]; // 0x02D8 (0x002C)
    uint8_t Pad_4[0x4]; // 0x0304 (0x0004)
    class UObject* TransmittanceTexture; // 0x0308 (0x0008)
    class UObject* IrradianceTexture; // 0x0310 (0x0008)

public:
    void StartPrecompute();
    void SetSunMultiplier(float NewSunMultiplier);
    void SetStartDistance(float NewStartDistance);
    void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum);
    void SetMipFogTransitionDistance(float NewMipFogTransitionDistance);
    void SetMipFogMipLevels(float NewMipFogBackgroundMipLevel, float NewMipFogForegroundMipLevel);
    void SetFogMultiplier(float NewFogMultiplier);
    void SetFogDistanceLinearity(float NewFogDistanceLinearity);
    void SetFogDensityColor(uint8_t NewFogDensityColor);
    void SetDistanceScale(float NewDistanceScale);
    void SetDistanceOffset(float NewDistanceOffset);
    void SetDensityOffset(float NewDensityOffset);
    void SetDensityMultiplier(float NewDensityMultiplier);
    void SetDefaultLightColor(uint8_t NewLightColor);
    void SetDefaultBrightness(float NewBrightness);
    void SetBlendWithUnlitGeometry(bool NewBlendWithUnlitGeometry);
    void SetBendTerrainCloudTint(uint8_t NewValue);
    void SetBendTerrainAtmosphereTint(uint8_t NewValue);
    void SetBendReferenceAltitudeMeters(float NewValue);
    void SetBendRayleighScatterTerm_Terrain(uint8_t NewValue);
    void SetBendRayleighScatterTerm(uint8_t NewValue);
    void SetBendRayleighScaleTerm_Terrain(float NewValue);
    void SetBendRayleighScaleTerm(float NewValue);
    void SetBendRayleighDirectionalScale_Terrain(float NewValue);
    void SetBendMieScatterTerm_Terrain(float NewValue);
    void SetBendMieScatterTerm(float NewValue);
    void SetBendMieScaleTerm_Terrain(float NewValue);
    void SetBendMieScaleTerm(float NewValue);
    void SetBendMieDirectionTerm_Terrain(float NewValue);
    void SetBendMieDirectionTerm(float NewValue);
    void SetBendMieDirectionalScale_Terrain(float NewValue);
    void SetBendExtendedHorizon(float NewValue);
    void SetBendCloudsLightingHeightMeters(float NewValue);
    void SetAltitudeScale(float NewAltitudeScale);
    void DisableSunDisk(bool NewSunDisk);
    void DisableGroundScattering(bool NewGroundScattering);
};

// Class: Engine.SoundAttenuation
class SoundAttenuation : public Object {
public:
    uint8_t attenuation[0xF8]; // 0x0028 (0x00F8)
};

// Class: Engine.AudioComponent
class AudioComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x210]; // 0x0028 (0x0210)
    class UObject* Sound; // 0x0238 (0x0008)
    struct TArray<uint8_t> InstanceParameters; // 0x0240 (0x0010)
    class UObject* SoundClassOverride; // 0x0250 (0x0008)
    bool bAutoDestroy; // 0x0258 (0x0001)
    bool bStopWhenOwnerDestroyed; // 0x0258 (0x0001)
    bool bShouldRemainActiveIfDropped; // 0x0258 (0x0001)
    bool bAllowSpatialization; // 0x0258 (0x0001)
    bool bOverrideAttenuation; // 0x0258 (0x0001)
    bool bIsUISound; // 0x0258 (0x0001)
    bool bEnableLowPassFilter; // 0x0258 (0x0001)
    bool bOverridePriority; // 0x0258 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0259 (0x0003)
    float PitchModulationMin; // 0x025C (0x0004)
    float PitchModulationMax; // 0x0260 (0x0004)
    float VolumeModulationMin; // 0x0264 (0x0004)
    float VolumeModulationMax; // 0x0268 (0x0004)
    float VolumeMultiplier; // 0x026C (0x0004)
    float Priority; // 0x0270 (0x0004)
    float VolumeWeightedPriorityScale; // 0x0274 (0x0004)
    float PitchMultiplier; // 0x0278 (0x0004)
    float HighFrequencyGainMultiplier; // 0x027C (0x0004)
    float LowPassFilterFrequency; // 0x0280 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0284 (0x0004)
    class UObject* AttenuationSettings; // 0x0288 (0x0008)
    uint8_t AttenuationOverrides[0xF8]; // 0x0290 (0x00F8)
    class UObject* ConcurrencySettings; // 0x0388 (0x0008)
    uint8_t Pad_3[0x8]; // 0x0390 (0x0008)
    uint8_t OnAudioFinished[0x10]; // 0x0398 (0x0010)
    uint8_t Pad_4[0x78]; // 0x03A8 (0x0078)
    uint8_t OnQueueSubtitles[0x10]; // 0x0420 (0x0010)

public:
    bool Unpause();
    void Stop();
    void SetWaveParameter(struct FName InName, class UObject* InWave);
    void SetVolumeMultiplier(float NewVolumeMultiplier);
    void SetUISound(bool bInUISound);
    void SetSound(class UObject* NewSound);
    void SetPitchMultiplier(float NewPitchMultiplier);
    void SetIntParameter(struct FName InName, int32_t InInt);
    void SetFloatParameter(struct FName InName, float InFloat);
    void SetBoolParameter(struct FName InName, bool InBool);
    void Play(float StartTime);
    bool Pause();
    bool IsPlaying();
    bool IsPaused();
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
    bool BP_GetAttenuationSettingsToApply(uint8_t OutAttenuationSettings);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
    void AdjustAttenuation(uint8_t InAttenuationSettings);
};

// Class: Engine.BendAmbientLightComponent
class BendAmbientLightComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    uint8_t Color[0x4]; // 0x0210 (0x0004)
    float intensity; // 0x0214 (0x0004)
    uint8_t DirectionXY[0x8]; // 0x0218 (0x0008)

public:
    void SetIntensity(float inIntensity);
    void SetDirection(uint8_t inDirection);
    void SetColor(uint8_t InColor);
};

// Class: Engine.AnimStateMachineTypes
class AnimStateMachineTypes : public Object {
public:
};

// Class: Engine.AnimSequenceBase
class AnimSequenceBase : public AnimationAsset {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    struct TArray<uint8_t> Notifies; // 0x0050 (0x0010)
    float SequenceLength; // 0x0060 (0x0004)
    float RateScale; // 0x0064 (0x0004)
    uint8_t RawCurveData[0x10]; // 0x0068 (0x0010)

public:
    float GetPlayLength();
};

// Class: Engine.AnimClassInterface
class AnimClassInterface : public Interface {
public:
};

// Class: Engine.BendAnimAnchorComponent
class BendAnimAnchorComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    struct FName AnchorName; // 0x0210 (0x0008)

public:
    void SetIsEnabled(bool IsEnabled);
    void SetAnimInstance(class UObject* InAnimInstance);
    void SetAnchorName(struct FName InAnchorName);
    bool GetIsEnabled();
};

// Class: Engine.BendAnimAnchorComponentWithOffset
class BendAnimAnchorComponentWithOffset : public BendAnimAnchorComponent {
public:

public:
    void SetOffsetTransform(uint8_t InOffsetTransform);
    uint8_t GetOffsetTransform();
};

// Class: Engine.BendEyeReflectionLightComponent
class BendEyeReflectionLightComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    uint8_t Color[0x4]; // 0x0210 (0x0004)
    float intensity; // 0x0214 (0x0004)
    float FlickerScale; // 0x0218 (0x0004)
    float FlickerSmoothing; // 0x021C (0x0004)
    float FlickerSaturation; // 0x0220 (0x0004)
    uint8_t FlickerPositionOffset[0xC]; // 0x0224 (0x000C)
    int32_t TextureIndex; // 0x0230 (0x0004)
    float ReflectionSize; // 0x0234 (0x0004)
    bool Enabled; // 0x0238 (0x0001)
    bool ScaleToAmbientLighting; // 0x0239 (0x0001)
    bool DisableSunMoonEyeReflections; // 0x023A (0x0001)

public:
    void ToggleVisibility(bool bPropagateToChildren);
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    void SetTextureIndex(int32_t InValue);
    void SetScaleToAmbientLighting(bool InValue);
    void SetReflectionSize(float InValue);
    void SetIntensity(float inIntensity);
    void SetFlickerSmoothing(float InValue);
    void SetFlickerScale(float InValue);
    void SetFlickerSaturation(float InValue);
    void SetFlickerPositionOffset(uint8_t InValue);
    void SetEnabled(bool InValue);
    void SetColor(uint8_t InColor);
    bool IsVisible();
    bool GetEnabled();
};

// Class: Engine.BendHeightMapCaptureComponent
class BendHeightMapCaptureComponent : public SceneComponent {
public:
};

// Class: Engine.BendVoxelLightComponent
class BendVoxelLightComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    uint8_t Color[0x4]; // 0x0210 (0x0004)
    float intensity; // 0x0214 (0x0004)
    float FlickerScale; // 0x0218 (0x0004)
    float FlickerSmoothing; // 0x021C (0x0004)
    float FlickerSaturation; // 0x0220 (0x0004)
    uint8_t FlickerPositionOffset[0xC]; // 0x0224 (0x000C)
    bool Enabled; // 0x0230 (0x0001)
    bool ScaleToAmbientLighting; // 0x0231 (0x0001)

public:
    void SetScaleToAmbientLighting(bool InValue);
    void SetIntensity(float inIntensity);
    void SetFlickerSmoothing(float InValue);
    void SetFlickerScale(float InValue);
    void SetFlickerSaturation(float InValue);
    void SetFlickerPositionOffset(uint8_t InValue);
    void SetEnabled(bool InValue);
    void SetColor(uint8_t InColor);
};

// Class: Engine.CameraComponent
class CameraComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    bool bOverride_NearClipPlane; // 0x0210 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0211 (0x0003)
    float PerspectiveNearClipPlane; // 0x0214 (0x0004)
    float FieldOfView; // 0x0218 (0x0004)
    float OrthoWidth; // 0x021C (0x0004)
    float OrthoNearClipPlane; // 0x0220 (0x0004)
    float OrthoFarClipPlane; // 0x0224 (0x0004)
    float AspectRatio; // 0x0228 (0x0004)
    bool bConstrainAspectRatio; // 0x022C (0x0001)
    bool bUseFieldOfViewForLOD; // 0x022C (0x0001)
    bool bLockToHmd; // 0x022C (0x0001)
    bool bUsePawnControlRotation; // 0x022C (0x0001)
    uint8_t Pad_2[0x3]; // 0x022D (0x0003)
    uint8_t ProjectionMode; // 0x0230 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0231 (0x0003)
    float PostProcessBlendWeight; // 0x0234 (0x0004)
    uint8_t Pad_4[0x8]; // 0x0238 (0x0008)
    uint8_t PostProcessSettings[0x960]; // 0x0240 (0x0960)
    uint8_t Pad_5[0x54]; // 0x0BA0 (0x0054)
    bool bUseControllerViewRotation; // 0x0BF4 (0x0001)

public:
    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    void SetProjectionMode(uint8_t InProjectionMode);
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    void SetOrthoWidth(float InOrthoWidth);
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    void SetFieldOfView(float InFieldOfView);
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    void SetAspectRatio(float InAspectRatio);
    void GetCameraView(float DeltaTime, uint8_t DesiredView);
    void ClearFocusActors();
    void AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight);
    void AddFocusActor(class UObject* SkelMesh, struct FName BoneName);
};

// Class: Engine.DecalComponent
class DecalComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    class UObject* DecalMaterial; // 0x0210 (0x0008)
    int32_t SortOrder; // 0x0218 (0x0004)
    float FadeScreenSize; // 0x021C (0x0004)
    uint8_t DecalSize[0xC]; // 0x0220 (0x000C)
    float FadeScreenSizeStart; // 0x022C (0x0004)
    float FadeScreenSizeEnd; // 0x0230 (0x0004)
    bool bIgnoreMaterialDecalFade; // 0x0234 (0x0001)
    bool bExcludeFromBendDecalCollection; // 0x0235 (0x0001)

public:
    void SetSortOrder(int32_t Value);
    void SetDecalMaterial(class UObject* NewDecalMaterial);
    void SetDecalFadeSize(float inFadeSizeStart, float inFadeSizeEnd);
    void ScaleDecalFadeSize(float inFadeRangeScale);
    class UObject* GetDecalMaterial();
    class UObject* CreateDynamicMaterialInstance();
};

// Class: Engine.ExponentialHeightFogComponent
class ExponentialHeightFogComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float FogDensity; // 0x0210 (0x0004)
    uint8_t FogInscatteringColor[0x10]; // 0x0214 (0x0010)
    float DirectionalInscatteringExponent; // 0x0224 (0x0004)
    float DirectionalInscatteringStartDistance; // 0x0228 (0x0004)
    uint8_t DirectionalInscatteringColor[0x10]; // 0x022C (0x0010)
    float FogHeightFalloff; // 0x023C (0x0004)
    float FogMaxOpacity; // 0x0240 (0x0004)
    float StartDistance; // 0x0244 (0x0004)

public:
    void SetStartDistance(float Value);
    void SetFogMaxOpacity(float Value);
    void SetFogInscatteringColor(uint8_t Value);
    void SetFogHeightFalloff(float Value);
    void SetFogDensity(float Value);
    void SetDirectionalInscatteringStartDistance(float Value);
    void SetDirectionalInscatteringExponent(float Value);
    void SetDirectionalInscatteringColor(uint8_t Value);
};

// Class: Engine.DirectionalLightComponent
class DirectionalLightComponent : public LightComponent {
public:
    uint8_t Pad_0[0x3F0]; // 0x0028 (0x03F0)
    bool bEnableLightShaftOcclusion; // 0x0418 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0419 (0x0003)
    float OcclusionMaskDarkness; // 0x041C (0x0004)
    float OcclusionDepthRange; // 0x0420 (0x0004)
    uint8_t LightShaftOverrideDirection[0xC]; // 0x0424 (0x000C)
    float WholeSceneDynamicShadowRadius; // 0x0430 (0x0004)
    float DynamicShadowDistanceMovableLight; // 0x0434 (0x0004)
    float DynamicShadowDistanceStationaryLight; // 0x0438 (0x0004)
    int32_t DynamicShadowCascades; // 0x043C (0x0004)
    float CascadeDistributionExponent; // 0x0440 (0x0004)
    float CascadeTransitionFraction; // 0x0444 (0x0004)
    float ShadowDistanceFadeoutFraction; // 0x0448 (0x0004)
    bool bUseInsetShadowsForMovableObjects; // 0x044C (0x0001)
    uint8_t Pad_2[0x3]; // 0x044D (0x0003)
    int32_t FarShadowCascadeCount; // 0x0450 (0x0004)
    float FarShadowDistance; // 0x0454 (0x0004)
    float DistanceFieldShadowDistance; // 0x0458 (0x0004)
    float LightSourceAngle; // 0x045C (0x0004)
    float TraceDistance; // 0x0460 (0x0004)
    bool bUseBendStudioRenderingMode; // 0x0464 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0465 (0x0003)
    class UObject* BendPlaceholderTreeShadowTexture; // 0x0468 (0x0008)
    uint8_t LightmassSettings[0x10]; // 0x0470 (0x0010)
    bool bCastModulatedShadows; // 0x0480 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0481 (0x0003)
    uint8_t ModulatedShadowColor[0x4]; // 0x0484 (0x0004)
    bool bUsedAsAtmosphereSunLight; // 0x0488 (0x0001)
    bool bUsedAsSecondaryAtmosphereSunLight; // 0x0488 (0x0001)
    bool bBendUseTemperatureTint; // 0x0488 (0x0001)
    bool bBendUseTemperatureCloudTint; // 0x0488 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0489 (0x0003)
    float AtmosphereCaptureSaturation; // 0x048C (0x0004)
    uint8_t BendSunLightRenderTint[0x4]; // 0x0490 (0x0004)
    uint8_t BendCloudLightRenderTint[0x4]; // 0x0494 (0x0004)
    float BendSunLightRenderTintTemperature; // 0x0498 (0x0004)
    float BendCloudLightRenderTintTemperature; // 0x049C (0x0004)

public:
    void SetShadowDistanceFadeoutFraction(float NewValue);
    void SetOcclusionMaskDarkness(float NewValue);
    void SetLightShaftOverrideDirection(uint8_t NewValue);
    void SetEnableLightShaftOcclusion(bool bNewValue);
    void SetDynamicShadowDistanceStationaryLight(float NewValue);
    void SetDynamicShadowDistanceMovableLight(float NewValue);
    void SetDynamicShadowCascades(int32_t NewValue);
    void SetCascadeTransitionFraction(float NewValue);
    void SetCascadeDistributionExponent(float NewValue);
    void SetBendSunLightingTintTemperature(float NewValue);
    void SetBendSunLightingTint(uint8_t NewValue);
    void SetBendCloudLightingTintTemperature(float NewValue);
    void SetBendCloudLightingTint(uint8_t NewValue);
    void SetBendAtmosphereCaptureSaturation(float NewValue);
    uint8_t GetBendAtmosphereAffectedColor();
};

// Class: Engine.SkyLightComponent
class SkyLightComponent : public LightComponentBase {
public:
    uint8_t Pad_0[0x238]; // 0x0028 (0x0238)
    uint8_t SourceType; // 0x0260 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0261 (0x0007)
    class UObject* Cubemap; // 0x0268 (0x0008)
    float SourceCubemapAngle; // 0x0270 (0x0004)
    float SkyDistanceThreshold; // 0x0274 (0x0004)
    bool bLowerHemisphereIsBlack; // 0x0278 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0279 (0x0003)
    float OcclusionMaxDistance; // 0x027C (0x0004)
    float Contrast; // 0x0280 (0x0004)
    float MinOcclusion; // 0x0284 (0x0004)
    uint8_t OcclusionTint[0x4]; // 0x0288 (0x0004)
    uint8_t Pad_3[0xAC]; // 0x028C (0x00AC)
    class UObject* BlendDestinationCubemap; // 0x0338 (0x0008)

public:
    void SetOcclusionTint(uint8_t InTint);
    void SetMinOcclusion(float InMinOcclusion);
    void SetLightColor(uint8_t NewLightColor);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetCubemapBlend(class UObject* SourceCubemap, class UObject* DestinationCubemap, float InBlendFraction);
    void SetCubemap(class UObject* NewCubemap);
    void RecaptureSky();
};

// Class: Engine.LightmassPortalComponent
class LightmassPortalComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    class UObject* PreviewBox; // 0x0210 (0x0008)
};

// Class: Engine.NavigationGraphNodeComponent
class NavigationGraphNodeComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    uint8_t Node[0x18]; // 0x0210 (0x0018)
    class UObject* NextNodeComponent; // 0x0228 (0x0008)
    class UObject* PrevNodeComponent; // 0x0230 (0x0008)
};

// Class: Engine.PhysicsSpringComponent
class PhysicsSpringComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float SpringStiffness; // 0x0210 (0x0004)
    float SpringDamping; // 0x0214 (0x0004)
    float SpringLengthAtRest; // 0x0218 (0x0004)
    float SpringRadius; // 0x021C (0x0004)
    uint8_t SpringChannel; // 0x0220 (0x0001)
    bool bIgnoreSelf; // 0x0221 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0222 (0x0002)
    float SpringCompression; // 0x0224 (0x0004)

public:
    uint8_t GetSpringRestingPoint();
    uint8_t GetSpringDirection();
    uint8_t GetSpringCurrentEndPoint();
    float GetNormalizedCompressionScalar();
};

// Class: Engine.PhysicsThrusterComponent
class PhysicsThrusterComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float ThrustStrength; // 0x0210 (0x0004)
};

// Class: Engine.PostProcessComponent
class PostProcessComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1F8]; // 0x0028 (0x01F8)
    uint8_t Settings[0x960]; // 0x0220 (0x0960)
    float Priority; // 0x0B80 (0x0004)
    float BlendRadius; // 0x0B84 (0x0004)
    float BlendWeight; // 0x0B88 (0x0004)
    bool bEnabled; // 0x0B8C (0x0001)
    bool bUnbound; // 0x0B8C (0x0001)

public:
    void AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight);
};

// Class: Engine.ArrowComponent
class ArrowComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    uint8_t ArrowColor[0x4]; // 0x05D0 (0x0004)
    float ArrowSize; // 0x05D4 (0x0004)
    bool bIsScreenSizeScaled; // 0x05D8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x05D9 (0x0003)
    float ScreenSize; // 0x05DC (0x0004)
    bool bTreatAsASprite; // 0x05E0 (0x0001)

public:
    void SetArrowColor_New(uint8_t NewColor);
    void SetArrowColor_DEPRECATED(uint8_t NewColor);
};

// Class: Engine.BendCoverRenderingComponent
class BendCoverRenderingComponent : public PrimitiveComponent {
public:
};

// Class: Engine.BendLocationRenderingComponent
class BendLocationRenderingComponent : public PrimitiveComponent {
public:
};

// Class: Engine.BendWeaponThrowCursorRenderComponent
class BendWeaponThrowCursorRenderComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* LandingReticleStaticMeshComp; // 0x05D0 (0x0008)
};

// Class: Engine.BillboardComponent
class BillboardComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* Sprite; // 0x05D0 (0x0008)
    bool bIsScreenSizeScaled; // 0x05D8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x05D9 (0x0003)
    float ScreenSize; // 0x05DC (0x0004)
    float U; // 0x05E0 (0x0004)
    float UL; // 0x05E4 (0x0004)
    float V; // 0x05E8 (0x0004)
    float VL; // 0x05EC (0x0004)

public:
    void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
    void SetSpriteAndUV(class UObject* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
    void SetSprite(class UObject* NewSprite);
};

// Class: Engine.BrushComponent
class BrushComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* Brush; // 0x05D0 (0x0008)
    class UObject* BrushBodySetup; // 0x05D8 (0x0008)
    uint8_t PrePivot[0xC]; // 0x05E0 (0x000C)
};

// Class: Engine.DrawFrustumComponent
class DrawFrustumComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    uint8_t FrustumColor[0x4]; // 0x05D0 (0x0004)
    float FrustumAngle; // 0x05D4 (0x0004)
    float FrustumAspectRatio; // 0x05D8 (0x0004)
    float FrustumStartDist; // 0x05DC (0x0004)
    float FrustumEndDist; // 0x05E0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x05E4 (0x0004)
    class UObject* Texture; // 0x05E8 (0x0008)
};

// Class: Engine.LineBatchComponent
class LineBatchComponent : public PrimitiveComponent {
public:
};

// Class: Engine.MaterialBillboardComponent
class MaterialBillboardComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    struct TArray<uint8_t> Elements; // 0x05D0 (0x0010)

public:
    void AddElement(class UObject* Material, class UObject* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UObject* DistanceToSizeCurve);
};

// Class: Engine.DestructibleComponent
class DestructibleComponent : public SkinnedMeshComponent {
public:
    uint8_t Pad_0[0x898]; // 0x0028 (0x0898)
    bool bFractureEffectOverride; // 0x08C0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x08C1 (0x0007)
    struct TArray<uint8_t> FractureEffects; // 0x08C8 (0x0010)
    bool bEnableHardSleeping; // 0x08D8 (0x0001)
    uint8_t Pad_2[0x3]; // 0x08D9 (0x0003)
    float LargeChunkThreshold; // 0x08DC (0x0004)
    uint8_t Pad_3[0x10]; // 0x08E0 (0x0010)
    uint8_t OnComponentFracture[0x10]; // 0x08F0 (0x0010)

public:
    void SetDestructibleMesh(class UObject* NewMesh);
    class UObject* GetDestructibleMesh();
    void ApplyRadiusDamage(float BaseDamage, uint8_t HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    void ApplyDamage(float DamageAmount, uint8_t HitLocation, uint8_t ImpulseDir, float ImpulseStrength);
};

// Class: Engine.PoseableMeshComponent
class PoseableMeshComponent : public SkinnedMeshComponent {
public:

public:
    void SetBoneTransformByName(struct FName BoneName, uint8_t InTransform, uint8_t BoneSpace);
    void SetBoneScaleByName(struct FName BoneName, uint8_t InScale3D, uint8_t BoneSpace);
    void SetBoneRotationByName(struct FName BoneName, uint8_t InRotation, uint8_t BoneSpace);
    void SetBoneLocationByName(struct FName BoneName, uint8_t InLocation, uint8_t BoneSpace);
    void ResetBoneTransformByName(struct FName BoneName);
    uint8_t GetBoneTransformByName(struct FName BoneName, uint8_t BoneSpace);
    uint8_t GetBoneScaleByName(struct FName BoneName, uint8_t BoneSpace);
    uint8_t GetBoneRotationByName(struct FName BoneName, uint8_t BoneSpace);
    uint8_t GetBoneLocationByName(struct FName BoneName, uint8_t BoneSpace);
    void CopyPoseFromSkeletalComponent(class UObject* InComponentToCopy);
};

// Class: Engine.BendSkeletalMeshLookPartMeshComponent
class BendSkeletalMeshLookPartMeshComponent : public SkeletalMeshComponent {
public:
};

// Class: Engine.BendInstancedProjectileTracerComponent
class BendInstancedProjectileTracerComponent : public InstancedStaticMeshComponent {
public:
};

// Class: Engine.ModelComponent
class ModelComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5C0]; // 0x0028 (0x05C0)
    class UObject* ModelBodySetup; // 0x05E8 (0x0008)
};

// Class: Engine.NavLinkRenderingComponent
class NavLinkRenderingComponent : public PrimitiveComponent {
public:
};

// Class: Engine.NavMeshRenderingComponent
class NavMeshRenderingComponent : public PrimitiveComponent {
public:
};

// Class: Engine.NavTestRenderingComponent
class NavTestRenderingComponent : public PrimitiveComponent {
public:
};

// Class: Engine.ParticleSystem
class ParticleSystem : public Object {
public:
    uint8_t SystemUpdateMode; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float UpdateTime_FPS; // 0x002C (0x0004)
    bool DestroyForCinematic; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float UpdateTime_Delta; // 0x0034 (0x0004)
    float WarmupTime; // 0x0038 (0x0004)
    float WarmupTickRate; // 0x003C (0x0004)
    struct TArray<uint8_t> Emitters; // 0x0040 (0x0010)
    class UObject* PreviewComponent; // 0x0050 (0x0008)
    class UObject* CurveEdSetup; // 0x0058 (0x0008)
    bool bOrientZAxisTowardCamera; // 0x0060 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0061 (0x0003)
    float LODDistanceCheckTime; // 0x0064 (0x0004)
    uint8_t LODMethod; // 0x0068 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0069 (0x0007)
    struct TArray<uint8_t> LODDistances; // 0x0070 (0x0010)
    bool bRegenerateLODDuplicate; // 0x0080 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0081 (0x0007)
    struct TArray<uint8_t> LODSettings; // 0x0088 (0x0010)
    bool TickWhenPaused; // 0x0098 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0099 (0x0003)
    float SpawnDistanceLimit; // 0x009C (0x0004)
    bool bUseFixedRelativeBoundingBox; // 0x00A0 (0x0001)
    uint8_t Pad_6[0x3]; // 0x00A1 (0x0003)
    uint8_t FixedRelativeBoundingBox[0x1C]; // 0x00A4 (0x001C)
    float SecondsBeforeInactive; // 0x00C0 (0x0004)
    bool bShouldResetPeakCounts; // 0x00C4 (0x0001)
    bool bHasPhysics; // 0x00C4 (0x0001)
    bool bUseRealtimeThumbnail; // 0x00C4 (0x0001)
    bool ThumbnailImageOutOfDate; // 0x00C4 (0x0001)
    uint8_t Pad_7[0x3]; // 0x00C5 (0x0003)
    float Delay; // 0x00C8 (0x0004)
    float DelayLow; // 0x00CC (0x0004)
    bool bUseDelayRange; // 0x00D0 (0x0001)
    uint8_t Pad_8[0x3]; // 0x00D1 (0x0003)
    bool bAutoDeactivate; // 0x00D4 (0x0001)
    uint8_t Pad_9[0x3]; // 0x00D5 (0x0003)
    uint8_t MinTimeBetweenTicks[0x4]; // 0x00D8 (0x0004)
    uint8_t MacroUVPosition[0xC]; // 0x00DC (0x000C)
    float MacroUVRadius; // 0x00E8 (0x0004)
    uint8_t OcclusionBoundsMethod; // 0x00EC (0x0001)
    uint8_t Pad_10[0x3]; // 0x00ED (0x0003)
    uint8_t CustomOcclusionBounds[0x1C]; // 0x00F0 (0x001C)
    uint8_t Pad_11[0x4]; // 0x010C (0x0004)
    struct TArray<uint8_t> SoloTracking; // 0x0110 (0x0010)
    struct TArray<uint8_t> NamedMaterialSlots; // 0x0120 (0x0010)
    bool bExpandBoundsForVoxelInjection; // 0x0130 (0x0001)
    bool bWeatherClear; // 0x0130 (0x0001)
    uint8_t Pad_12[0x3]; // 0x0131 (0x0003)
    float ClearIntensityThreshold; // 0x0134 (0x0004)
    bool bWeatherCloudy; // 0x0138 (0x0001)
    uint8_t Pad_13[0x3]; // 0x0139 (0x0003)
    float CloudIntensityThreshold; // 0x013C (0x0004)
    bool bWeatherWindy; // 0x0140 (0x0001)
    uint8_t Pad_14[0x3]; // 0x0141 (0x0003)
    float WindIntensityThreshold; // 0x0144 (0x0004)
    bool bWeatherFoggy; // 0x0148 (0x0001)
    uint8_t Pad_15[0x3]; // 0x0149 (0x0003)
    float FogIntensityThreshold; // 0x014C (0x0004)
    bool bWeatherRainy; // 0x0150 (0x0001)
    uint8_t Pad_16[0x3]; // 0x0151 (0x0003)
    float RainIntensityThreshold; // 0x0154 (0x0004)
    bool bWeatherSnowy; // 0x0158 (0x0001)
    uint8_t Pad_17[0x3]; // 0x0159 (0x0003)
    float SnowIntensityThreshold; // 0x015C (0x0004)
    bool bTimeOfDay; // 0x0160 (0x0001)
    uint8_t Pad_18[0x3]; // 0x0161 (0x0003)
    float TimeOfDayActivation; // 0x0164 (0x0004)
    float TimeOfDayDeactivation; // 0x0168 (0x0004)
    uint8_t Pad_19[0x18]; // 0x016C (0x0018)
    uint8_t InstanceCountLimit[0x4]; // 0x0184 (0x0004)

public:
    bool ContainsEmitterType(class UClass* TypeData);
};

// Class: Engine.ParticleSystemComponent
class ParticleSystemComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* Template; // 0x05D0 (0x0008)
    struct TArray<uint8_t> EmitterMaterials; // 0x05D8 (0x0010)
    struct TArray<uint8_t> SkelMeshComponents; // 0x05E8 (0x0010)
    bool bResetOnDetach; // 0x05F8 (0x0001)
    bool bUpdateOnDedicatedServer; // 0x05F8 (0x0001)
    bool bAllowRecycling; // 0x05F9 (0x0001)
    bool bAutoManageAttachment; // 0x05F9 (0x0001)
    uint8_t Pad_1[0x6]; // 0x05FA (0x0006)
    struct TArray<uint8_t> InstanceParameters; // 0x0600 (0x0010)
    uint8_t OnParticleSpawn[0x10]; // 0x0610 (0x0010)
    uint8_t OnParticleBurst[0x10]; // 0x0620 (0x0010)
    uint8_t OnParticleDeath[0x10]; // 0x0630 (0x0010)
    uint8_t OnParticleCollide[0x10]; // 0x0640 (0x0010)
    uint8_t OldPosition[0xC]; // 0x0650 (0x000C)
    uint8_t PartSysVelocity[0xC]; // 0x065C (0x000C)
    float WarmupTime; // 0x0668 (0x0004)
    float WarmupTickRate; // 0x066C (0x0004)
    bool bWarmingUp; // 0x0670 (0x0001)
    uint8_t Pad_2[0xB]; // 0x0671 (0x000B)
    float SecondsBeforeInactive; // 0x067C (0x0004)
    uint8_t Pad_3[0x8]; // 0x0680 (0x0008)
    float MaxTimeBeforeForceUpdateTransform; // 0x0688 (0x0004)
    uint8_t Pad_4[0x4]; // 0x068C (0x0004)
    bool bOverrideLODMethod; // 0x0690 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0691 (0x0003)
    uint8_t LODMethod; // 0x0694 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0695 (0x0003)
    bool bSkipUpdateDynamicDataDuringTick; // 0x0698 (0x0001)
    uint8_t Pad_7[0x7]; // 0x0699 (0x0007)
    struct TArray<uint8_t> CachedViewRelevanceFlags; // 0x06A0 (0x0010)
    uint8_t Pad_8[0x8]; // 0x06B0 (0x0008)
    struct TArray<uint8_t> ReplayClips; // 0x06B8 (0x0010)
    uint8_t Pad_9[0x60]; // 0x06C8 (0x0060)
    float CustomTimeDilation; // 0x0728 (0x0004)
    uint8_t Pad_10[0x4]; // 0x072C (0x0004)
    uint8_t OnSystemFinished[0x10]; // 0x0730 (0x0010)
    uint64_t AutoAttachParent; // 0x0740 (0x0008)
    struct FName AutoAttachSocketName; // 0x0748 (0x0008)
    uint8_t AutoAttachLocationType; // 0x0750 (0x0001)

public:
    void SetVectorParameter(struct FName ParameterName, uint8_t Param);
    void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, uint8_t InWidthMode, float InWidth);
    void SetTemplate(class UObject* NewTemplate);
    void SetMaterialParameter(struct FName ParameterName, class UObject* Param);
    void SetFloatParameter(struct FName ParameterName, float Param);
    void SetEmitterEnable(struct FName EmitterName, bool bNewEnableState);
    void SetColorParameter(struct FName ParameterName, uint8_t Param);
    void SetBeamTargetTangent(int32_t EmitterIndex, uint8_t NewTangentPoint, int32_t TargetIndex);
    void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex);
    void SetBeamTargetPoint(int32_t EmitterIndex, uint8_t NewTargetPoint, int32_t TargetIndex);
    void SetBeamSourceTangent(int32_t EmitterIndex, uint8_t NewTangentPoint, int32_t SourceIndex);
    void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex);
    void SetBeamSourcePoint(int32_t EmitterIndex, uint8_t NewSourcePoint, int32_t SourceIndex);
    void SetBeamEndPoint(int32_t EmitterIndex, uint8_t NewEndPoint);
    void SetAutoAttachParams(class UObject* Parent, struct FName SocketName, uint8_t LocationType);
    void SetActorParameter(struct FName ParameterName, class UObject* Param);
    int32_t GetNumActiveParticles();
    class UObject* GetNamedMaterial(struct FName InName);
    uint8_t GetCollisionHitData();
    void GenerateParticleEvent(struct FName InEventName, float InEmitterTime, uint8_t InLocation, uint8_t inDirection, uint8_t InVelocity);
    void EndTrails();
    class UObject* CreateNamedDynamicMaterialInstance(struct FName InName, class UObject* SourceMaterial);
    void BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, uint8_t InWidthMode, float InWidth);
};

// Class: Engine.BendNavModifierComponent
class BendNavModifierComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    uint8_t FailsafeExtent[0xC]; // 0x0600 (0x000C)
    uint8_t Pad_1[0x28]; // 0x060C (0x0028)
    bool bAttachToOwnersRoot; // 0x0634 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0635 (0x0003)
    class UObject* CachedNavParent; // 0x0638 (0x0008)

public:
    void SetNavigationRelevancy(bool bRelevant);
};

// Class: Engine.BendReverbComponent
class BendReverbComponent : public BoxComponent {
public:
    uint8_t Pad_0[0x5D8]; // 0x0028 (0x05D8)
    float Priority; // 0x0600 (0x0004)
    bool bEnabled; // 0x0604 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0605 (0x0003)
    uint8_t Settings[0x18]; // 0x0608 (0x0018)
    uint8_t AudioOcclusionSettings[0x18]; // 0x0620 (0x0018)
    class UObject* NextLowerPriorityComponent; // 0x0638 (0x0008)
};

// Class: Engine.BendTriggerBoxComponent
class BendTriggerBoxComponent : public BoxComponent {
public:
};

// Class: Engine.DrawSphereComponent
class DrawSphereComponent : public SphereComponent {
public:
};

// Class: Engine.BendSplineComponent
class BendSplineComponent : public SplineComponent {
public:

public:
    uint8_t GetLocationAlongSplineFromWorldLocation(uint8_t StartWorldLocation, float distFrom, uint8_t CoordinateSpace);
    float GetDistanceAlongSpline(uint8_t StartWorldLocation);
    int32_t GetClosestSegmentIndex(uint8_t WorldLocation);
};

// Class: Engine.TextRenderComponent
class TextRenderComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    struct FText Text; // 0x05D0 (0x0018)
    class UObject* TextMaterial; // 0x05E8 (0x0008)
    class UObject* Font; // 0x05F0 (0x0008)
    uint8_t HorizontalAlignment; // 0x05F8 (0x0001)
    uint8_t VerticalAlignment; // 0x05F9 (0x0001)
    uint8_t Pad_1[0x2]; // 0x05FA (0x0002)
    uint8_t TextRenderColor[0x4]; // 0x05FC (0x0004)
    float XScale; // 0x0600 (0x0004)
    float YScale; // 0x0604 (0x0004)
    float WorldSize; // 0x0608 (0x0004)
    float InvDefaultSize; // 0x060C (0x0004)
    float HorizSpacingAdjust; // 0x0610 (0x0004)
    bool bAlwaysRenderAsText; // 0x0614 (0x0001)

public:
    void SetYScale(float Value);
    void SetXScale(float Value);
    void SetWorldSize(float Value);
    void SetTextRenderColor(uint8_t Value);
    void SetTextMaterial(class UObject* Material);
    void SetText(struct FString Value);
    void SetHorizSpacingAdjust(float Value);
    void SetHorizontalAlignment(uint8_t Value);
    void SetFont(class UObject* Value);
    void K2_SetText(struct FText Value);
    uint8_t GetTextWorldSize();
    uint8_t GetTextLocalSize();
};

// Class: Engine.VectorFieldComponent
class VectorFieldComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* VectorField; // 0x05D0 (0x0008)
    float intensity; // 0x05D8 (0x0004)
    float Tightness; // 0x05DC (0x0004)
    bool bPreviewVectorField; // 0x05E0 (0x0001)
    bool bCompositeToGlobalVectorField; // 0x05E0 (0x0001)

public:
    void SetIntensity(float NewIntensity);
};

// Class: Engine.RadialForceComponent
class RadialForceComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float Radius; // 0x0210 (0x0004)
    uint8_t Falloff; // 0x0214 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0215 (0x0003)
    float ImpulseStrength; // 0x0218 (0x0004)
    bool bImpulseVelChange; // 0x021C (0x0001)
    bool bIgnoreOwningActor; // 0x021C (0x0001)
    uint8_t Pad_2[0x3]; // 0x021D (0x0003)
    float ForceStrength; // 0x0220 (0x0004)
    float DestructibleDamage; // 0x0224 (0x0004)
    struct TArray<uint8_t> ObjectTypesToAffect; // 0x0228 (0x0010)

public:
    void RemoveObjectTypeToAffect(uint8_t ObjectType);
    void FireImpulse();
    void AddObjectTypeToAffect(uint8_t ObjectType);
};

// Class: Engine.ReflectionCaptureComponent
class ReflectionCaptureComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float Brightness; // 0x0210 (0x0004)
    uint8_t Pad_1[0x10]; // 0x0214 (0x0010)
    uint8_t StateId[0x10]; // 0x0224 (0x0010)
};

// Class: Engine.BoxReflectionCaptureComponent
class BoxReflectionCaptureComponent : public ReflectionCaptureComponent {
public:
    uint8_t Pad_0[0x238]; // 0x0028 (0x0238)
    float BoxTransitionDistance; // 0x0260 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0264 (0x0004)
    class UObject* PreviewInfluenceBox; // 0x0268 (0x0008)
    class UObject* PreviewCaptureBox; // 0x0270 (0x0008)
};

// Class: Engine.PlaneReflectionCaptureComponent
class PlaneReflectionCaptureComponent : public ReflectionCaptureComponent {
public:
    uint8_t Pad_0[0x238]; // 0x0028 (0x0238)
    float InfluenceRadiusScale; // 0x0260 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0264 (0x0004)
    class UObject* PreviewInfluenceRadius; // 0x0268 (0x0008)
    class UObject* PreviewCaptureBox; // 0x0270 (0x0008)
};

// Class: Engine.SphereReflectionCaptureComponent
class SphereReflectionCaptureComponent : public ReflectionCaptureComponent {
public:
    uint8_t Pad_0[0x238]; // 0x0028 (0x0238)
    float InfluenceRadius; // 0x0260 (0x0004)
    float CaptureDistanceScale; // 0x0264 (0x0004)
    class UObject* PreviewInfluenceRadius; // 0x0268 (0x0008)
};

// Class: Engine.SceneCaptureComponent
class SceneCaptureComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    struct TArray<uint8_t> HiddenComponents; // 0x0210 (0x0010)
    bool bCaptureEveryFrame; // 0x0220 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0221 (0x0003)
    float MaxViewDistanceOverride; // 0x0224 (0x0004)
    struct TArray<uint8_t> ShowFlagSettings; // 0x0228 (0x0010)

public:
    void HideComponent(class UObject* InComponent);
    void HideActorComponents(class UObject* InActor);
};

// Class: Engine.SceneCaptureComponent2D
class SceneCaptureComponent2D : public SceneCaptureComponent {
public:
    uint8_t Pad_0[0x248]; // 0x0028 (0x0248)
    float FOVAngle; // 0x0270 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0274 (0x0004)
    class UObject* TextureTarget; // 0x0278 (0x0008)
    uint8_t CaptureSource; // 0x0280 (0x0001)
    uint8_t Pad_2[0xF]; // 0x0281 (0x000F)
    uint8_t PostProcessSettings[0x960]; // 0x0290 (0x0960)
    float PostProcessBlendWeight; // 0x0BF0 (0x0004)

public:
    void UpdateContent();
    void AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight);
};

// Class: Engine.SceneCaptureComponentCube
class SceneCaptureComponentCube : public SceneCaptureComponent {
public:
    uint8_t Pad_0[0x248]; // 0x0028 (0x0248)
    class UObject* TextureTarget; // 0x0270 (0x0008)

public:
    void UpdateContent();
};

// Class: Engine.SpringArmComponent
class SpringArmComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float TargetArmLength; // 0x0210 (0x0004)
    uint8_t SocketOffset[0xC]; // 0x0214 (0x000C)
    uint8_t TargetOffset[0xC]; // 0x0220 (0x000C)
    float ProbeSize; // 0x022C (0x0004)
    uint8_t ProbeChannel; // 0x0230 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0231 (0x0003)
    bool bDoCollisionTest; // 0x0234 (0x0001)
    bool bUsePawnControlRotation; // 0x0234 (0x0001)
    bool bInheritPitch; // 0x0234 (0x0001)
    bool bInheritYaw; // 0x0234 (0x0001)
    bool bInheritRoll; // 0x0234 (0x0001)
    bool bEnableCameraLag; // 0x0234 (0x0001)
    bool bEnableCameraRotationLag; // 0x0234 (0x0001)
    bool bUseCameraLagSubstepping; // 0x0234 (0x0001)
    bool bDrawDebugLagMarkers; // 0x0235 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0236 (0x0002)
    float CameraLagSpeed; // 0x0238 (0x0004)
    float CameraRotationLagSpeed; // 0x023C (0x0004)
    float CameraLagMaxTimeStep; // 0x0240 (0x0004)
    float CameraLagMaxDistance; // 0x0244 (0x0004)

public:
    void UpdateDesiredArmLocation_BP();
};

// Class: Engine.WindDirectionalSourceComponent
class WindDirectionalSourceComponent : public SceneComponent {
public:
    uint8_t Pad_0[0x1E8]; // 0x0028 (0x01E8)
    float Strength; // 0x0210 (0x0004)
    float Speed; // 0x0214 (0x0004)
    float MinGustAmount; // 0x0218 (0x0004)
    float MaxGustAmount; // 0x021C (0x0004)
    float Radius; // 0x0220 (0x0004)
    bool bPointWind; // 0x0224 (0x0001)
};

// Class: Engine.TimelineComponent
class TimelineComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    uint8_t TheTimeline[0xE0]; // 0x00D0 (0x00E0)

public:
    void Stop();
    void SetTimelineLengthMode(uint8_t NewLengthMode);
    void SetTimelineLength(float NewLength);
    void SetPlayRate(float NewRate);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_Timeline();
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetTimelineLength();
    float GetPlayRate();
    float GetPlaybackPosition();
};

// Class: Engine.AnimCompositeBase
class AnimCompositeBase : public AnimSequenceBase {
public:
};

// Class: Engine.AnimComposite
class AnimComposite : public AnimCompositeBase {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    uint8_t AnimationTrack[0x10]; // 0x0078 (0x0010)
};

// Class: Engine.AnimMontage
class AnimMontage : public AnimCompositeBase {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    uint8_t BlendIn[0x38]; // 0x0078 (0x0038)
    float BlendInTime; // 0x00B0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x00B4 (0x0004)
    uint8_t BlendOut[0x38]; // 0x00B8 (0x0038)
    float BlendOutTime; // 0x00F0 (0x0004)
    float BlendOutTriggerTime; // 0x00F4 (0x0004)
    struct FName SyncGroup; // 0x00F8 (0x0008)
    int32_t SyncSlotIndex; // 0x0100 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0104 (0x0004)
    uint8_t MarkerData[0x20]; // 0x0108 (0x0020)
    struct FName MasterTimelineName; // 0x0128 (0x0008)
    struct FName Category; // 0x0130 (0x0008)
    struct FName AnchorName; // 0x0138 (0x0008)
    struct FName AnchoredBoneName; // 0x0140 (0x0008)
    bool bAnchorAffectsTranslation; // 0x0148 (0x0001)
    bool bGatherNotifiesOnlyFromFirstSlotTrack; // 0x0148 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0149 (0x0007)
    struct TArray<uint8_t> CompositeSections; // 0x0150 (0x0010)
    struct TArray<uint8_t> SlotAnimTracks; // 0x0160 (0x0010)
    struct TArray<uint8_t> BranchingPoints; // 0x0170 (0x0010)
    bool bEnableRootMotionTranslation; // 0x0180 (0x0001)
    bool bEnableRootMotionRotation; // 0x0181 (0x0001)
    uint8_t RootMotionRootLock; // 0x0182 (0x0001)
    uint8_t Pad_4[0x5]; // 0x0183 (0x0005)
    struct TArray<uint8_t> BranchingPointMarkers; // 0x0188 (0x0010)
    struct TArray<uint8_t> BranchingPointStateNotifyIndices; // 0x0198 (0x0010)
};

// Class: Engine.AnimSequence
class AnimSequence : public AnimSequenceBase {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    int32_t NumFrames; // 0x0078 (0x0004)
    uint8_t Pad_1[0x4]; // 0x007C (0x0004)
    struct TArray<uint8_t> TrackToSkeletonMapTable; // 0x0080 (0x0010)
    uint8_t Pad_2[0x10]; // 0x0090 (0x0010)
    struct TArray<uint8_t> TranslationData; // 0x00A0 (0x0010)
    struct TArray<uint8_t> RotationData; // 0x00B0 (0x0010)
    struct TArray<uint8_t> ScaleData; // 0x00C0 (0x0010)
    uint8_t TranslationCompressionFormat; // 0x00D0 (0x0001)
    uint8_t RotationCompressionFormat; // 0x00D1 (0x0001)
    uint8_t ScaleCompressionFormat; // 0x00D2 (0x0001)
    uint8_t Pad_3[0x5]; // 0x00D3 (0x0005)
    struct TArray<uint8_t> CompressedTrackOffsets; // 0x00D8 (0x0010)
    uint8_t CompressedScaleOffsets[0x18]; // 0x00E8 (0x0018)
    uint8_t Pad_4[0x10]; // 0x0100 (0x0010)
    uint8_t KeyEncodingFormat; // 0x0110 (0x0001)
    uint8_t Pad_5[0x1F]; // 0x0111 (0x001F)
    uint8_t AdditiveAnimType; // 0x0130 (0x0001)
    uint8_t RefPoseType; // 0x0131 (0x0001)
    uint8_t Pad_6[0x6]; // 0x0132 (0x0006)
    class UObject* RefPoseSeq; // 0x0138 (0x0008)
    int32_t RefFrameIndex; // 0x0140 (0x0004)
    int32_t EncodingPkgVersion; // 0x0144 (0x0004)
    struct FName RetargetSource; // 0x0148 (0x0008)
    bool bEnableRootMotion; // 0x0150 (0x0001)
    uint8_t RootMotionRootLock; // 0x0151 (0x0001)
    bool bForceRootLock; // 0x0152 (0x0001)
    bool bRootMotionSettingsCopiedFromMontage; // 0x0153 (0x0001)
    uint8_t Pad_7[0x4]; // 0x0154 (0x0004)
    struct TArray<uint8_t> AuthoredSyncMarkers; // 0x0158 (0x0010)
    uint8_t Pad_8[0x1C]; // 0x0168 (0x001C)
    bool bCalcAdditiveDynamically; // 0x0184 (0x0001)
};

// Class: Engine.BlendSpaceBase
class BlendSpaceBase : public AnimationAsset {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    uint8_t BlendParameters[0x20]; // 0x0058 (0x0020)
    uint8_t Pad_1[0x40]; // 0x0078 (0x0040)
    uint8_t InterpolationParam[0x8]; // 0x00B8 (0x0008)
    uint8_t Pad_2[0x10]; // 0x00C0 (0x0010)
    float TargetWeightInterpolationSpeedPerSec; // 0x00D0 (0x0004)
    bool bUseSpringForSampleInterpolation; // 0x00D4 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00D5 (0x0003)
    struct TArray<uint8_t> SnapInputToClosestSample; // 0x00D8 (0x0010)
    uint8_t Pad_4[0xD]; // 0x00E8 (0x000D)
    uint8_t NotifyTriggerMode; // 0x00F5 (0x0001)
    bool bRotationBlendInMeshSpace; // 0x00F6 (0x0001)
    uint8_t Pad_5[0x1]; // 0x00F7 (0x0001)
    int32_t NumOfDimension; // 0x00F8 (0x0004)
    float Animlength; // 0x00FC (0x0004)
    struct TArray<uint8_t> PerBoneBlend; // 0x0100 (0x0010)
    uint8_t Pad_6[0x8]; // 0x0110 (0x0008)
    struct TArray<uint8_t> SampleData; // 0x0118 (0x0010)
    struct TArray<uint8_t> GridSamples; // 0x0128 (0x0010)
};

// Class: Engine.BlendSpace
class BlendSpace : public BlendSpaceBase {
public:
    uint8_t Pad_0[0x110]; // 0x0028 (0x0110)
    uint8_t AxisToScaleAnimation; // 0x0138 (0x0001)
};

// Class: Engine.AimOffsetBlendSpace
class AimOffsetBlendSpace : public BlendSpace {
public:
};

// Class: Engine.BlendSpace1D
class BlendSpace1D : public BlendSpaceBase {
public:
    uint8_t Pad_0[0x110]; // 0x0028 (0x0110)
    bool bScaleAnimation; // 0x0138 (0x0001)
};

// Class: Engine.AimOffsetBlendSpace1D
class AimOffsetBlendSpace1D : public BlendSpace1D {
public:
};

// Class: Engine.AnimClassData
class AnimClassData : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> BakedStateMachines; // 0x0030 (0x0010)
    class UObject* TargetSkeleton; // 0x0040 (0x0008)
    struct TArray<uint8_t> AnimNotifies; // 0x0048 (0x0010)
    int32_t RootAnimNodeIndex; // 0x0058 (0x0004)
    uint8_t Pad_1[0x4]; // 0x005C (0x0004)
    class UObject* RootAnimNodeProperty; // 0x0060 (0x0008)
    struct TArray<uint8_t> AnimNodeProperties; // 0x0068 (0x0010)
    struct TArray<uint8_t> StateMachineProperties; // 0x0078 (0x0010)
    struct TArray<uint8_t> SyncGroupNames; // 0x0088 (0x0010)
    struct TArray<uint8_t> Anchors; // 0x0098 (0x0010)
    struct TArray<uint8_t> CacheNames; // 0x00A8 (0x0010)
    struct TArray<uint8_t> AnimGraphAddedCurves; // 0x00B8 (0x0010)
    bool bHasPostPhysicsGraph; // 0x00C8 (0x0001)
};

// Class: Engine.AnimCompress
class AnimCompress : public Object {
public:
    struct FString Description; // 0x0028 (0x0010)
    bool bNeedsSkeleton; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    uint8_t TranslationCompressionFormat; // 0x003C (0x0001)
    uint8_t RotationCompressionFormat; // 0x003D (0x0001)
    uint8_t ScaleCompressionFormat; // 0x003E (0x0001)
};

// Class: Engine.AnimCompress_Automatic
class AnimCompress_Automatic : public AnimCompress {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    float MaxEndEffectorError; // 0x0040 (0x0004)
    bool bTryFixedBitwiseCompression; // 0x0044 (0x0001)
    bool bTryPerTrackBitwiseCompression; // 0x0044 (0x0001)
    bool bTryLinearKeyRemovalCompression; // 0x0044 (0x0001)
    bool bTryIntervalKeyRemoval; // 0x0044 (0x0001)
    bool bRunCurrentDefaultCompressor; // 0x0044 (0x0001)
    bool bAutoReplaceIfExistingErrorTooGreat; // 0x0044 (0x0001)
    bool bRaiseMaxErrorToExisting; // 0x0044 (0x0001)
};

// Class: Engine.AnimCompress_BitwiseCompressOnly
class AnimCompress_BitwiseCompressOnly : public AnimCompress {
public:
};

// Class: Engine.AnimCompress_LeastDestructive
class AnimCompress_LeastDestructive : public AnimCompress {
public:
};

// Class: Engine.AnimCompress_RemoveEverySecondKey
class AnimCompress_RemoveEverySecondKey : public AnimCompress {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    int32_t MinKeys; // 0x0040 (0x0004)
    bool bStartAtSecondKey; // 0x0044 (0x0001)
};

// Class: Engine.AnimCompress_RemoveLinearKeys
class AnimCompress_RemoveLinearKeys : public AnimCompress {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    float MaxPosDiff; // 0x0040 (0x0004)
    float MaxAngleDiff; // 0x0044 (0x0004)
    float MaxScaleDiff; // 0x0048 (0x0004)
    float MaxEffectorDiff; // 0x004C (0x0004)
    float MinEffectorDiff; // 0x0050 (0x0004)
    float EffectorDiffSocket; // 0x0054 (0x0004)
    float ParentKeyScale; // 0x0058 (0x0004)
    bool bRetarget; // 0x005C (0x0001)
    bool bActuallyFilterLinearKeys; // 0x005C (0x0001)
};

// Class: Engine.AnimCompress_PerTrackCompression
class AnimCompress_PerTrackCompression : public AnimCompress_RemoveLinearKeys {
public:
    uint8_t Pad_0[0x38]; // 0x0028 (0x0038)
    float MaxZeroingThreshold; // 0x0060 (0x0004)
    float MaxPosDiffBitwise; // 0x0064 (0x0004)
    float MaxAngleDiffBitwise; // 0x0068 (0x0004)
    float MaxScaleDiffBitwise; // 0x006C (0x0004)
    struct TArray<uint8_t> AllowedRotationFormats; // 0x0070 (0x0010)
    struct TArray<uint8_t> AllowedTranslationFormats; // 0x0080 (0x0010)
    struct TArray<uint8_t> AllowedScaleFormats; // 0x0090 (0x0010)
    bool bResampleAnimation; // 0x00A0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00A1 (0x0003)
    float ResampledFramerate; // 0x00A4 (0x0004)
    int32_t MinKeysForResampling; // 0x00A8 (0x0004)
    bool bUseAdaptiveError; // 0x00AC (0x0001)
    bool bUseOverrideForEndEffectors; // 0x00AC (0x0001)
    uint8_t Pad_2[0x3]; // 0x00AD (0x0003)
    int32_t TrackHeightBias; // 0x00B0 (0x0004)
    float ParentingDivisor; // 0x00B4 (0x0004)
    float ParentingDivisorExponent; // 0x00B8 (0x0004)
    bool bUseAdaptiveError2; // 0x00BC (0x0001)
    uint8_t Pad_3[0x3]; // 0x00BD (0x0003)
    float RotationErrorSourceRatio; // 0x00C0 (0x0004)
    float TranslationErrorSourceRatio; // 0x00C4 (0x0004)
    float ScaleErrorSourceRatio; // 0x00C8 (0x0004)
    float MaxErrorPerTrackRatio; // 0x00CC (0x0004)
    float PerturbationProbeSize; // 0x00D0 (0x0004)
};

// Class: Engine.AnimCompress_RemoveTrivialKeys
class AnimCompress_RemoveTrivialKeys : public AnimCompress {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    float MaxPosDiff; // 0x0040 (0x0004)
    float MaxAngleDiff; // 0x0044 (0x0004)
    float MaxScaleDiff; // 0x0048 (0x0004)
};

// Class: Engine.VehicleAnimInstance
class VehicleAnimInstance : public AnimInstance {
public:

public:
    class UObject* GetVehicle();
};

// Class: Engine.AnimMetaData
class AnimMetaData : public Object {
public:
};

// Class: Engine.AnimNotify_PlayParticleEffect
class AnimNotify_PlayParticleEffect : public AnimNotify {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* PSTemplate; // 0x0030 (0x0008)
    uint8_t LocationOffset[0xC]; // 0x0038 (0x000C)
    uint8_t RotationOffset[0xC]; // 0x0044 (0x000C)
    uint8_t Pad_1[0x10]; // 0x0050 (0x0010)
    bool Attached; // 0x0060 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0061 (0x0007)
    struct FName SocketName; // 0x0068 (0x0008)
};

// Class: Engine.AnimNotify_PlaySound
class AnimNotify_PlaySound : public AnimNotify {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* Sound; // 0x0030 (0x0008)
    float VolumeMultiplier; // 0x0038 (0x0004)
    float PitchMultiplier; // 0x003C (0x0004)
    bool bFollow; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    struct FName AttachName; // 0x0048 (0x0008)
    struct FName RequiredMeshName; // 0x0050 (0x0008)
    uint8_t SoundOffset[0xC]; // 0x0058 (0x000C)
};

// Class: Engine.AnimNotifyState_TimedParticleEffect
class AnimNotifyState_TimedParticleEffect : public AnimNotifyState {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* PSTemplate; // 0x0030 (0x0008)
    struct FName SocketName; // 0x0038 (0x0008)
    uint8_t LocationOffset[0xC]; // 0x0040 (0x000C)
    uint8_t RotationOffset[0xC]; // 0x004C (0x000C)
    bool bDestroyAtEnd; // 0x0058 (0x0001)
};

// Class: Engine.AnimNotifyState_Trail
class AnimNotifyState_Trail : public AnimNotifyState {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* PSTemplate; // 0x0030 (0x0008)
    struct FName FirstSocketName; // 0x0038 (0x0008)
    struct FName SecondSocketName; // 0x0040 (0x0008)
    uint8_t WidthScaleMode; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    struct FName WidthScaleCurve; // 0x0050 (0x0008)
    bool bRecycleSpawnedSystems; // 0x0058 (0x0001)

public:
    class UObject* OverridePSTemplate(class UObject* MeshComp, class UObject* Animation);
};

// Class: Engine.AnimSet
class AnimSet : public Object {
public:
    bool bAnimRotationOnly; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    struct TArray<uint8_t> TrackBoneNames; // 0x0030 (0x0010)
    struct TArray<uint8_t> LinkupCache; // 0x0040 (0x0010)
    struct TArray<uint8_t> BoneUseAnimTranslation; // 0x0050 (0x0010)
    struct TArray<uint8_t> ForceUseMeshTranslation; // 0x0060 (0x0010)
    struct TArray<uint8_t> UseTranslationBoneNames; // 0x0070 (0x0010)
    struct TArray<uint8_t> ForceMeshTranslationBoneNames; // 0x0080 (0x0010)
    struct FName PreviewSkelMeshName; // 0x0090 (0x0008)
    struct FName BestRatioSkelMeshName; // 0x0098 (0x0008)
};

// Class: Engine.AnimTransitionRequestAgent
class AnimTransitionRequestAgent : public Object {
public:
};

// Class: Engine.AssetImportData
class AssetImportData : public Object {
public:
};

// Class: Engine.AssetUserData
class AssetUserData : public Object {
public:
};

// Class: Engine.AutomationTestSettings
class AutomationTestSettings : public Object {
public:
    uint8_t AutomationTestmap[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> EditorPerformanceTestMaps; // 0x0038 (0x0010)
    uint8_t BuildPromotionTest[0x1F0]; // 0x0048 (0x01F0)
    uint8_t MaterialEditorPromotionTest[0x30]; // 0x0238 (0x0030)
    uint8_t ParticleEditorPromotionTest[0x10]; // 0x0268 (0x0010)
    uint8_t BlueprintEditorPromotionTest[0x30]; // 0x0278 (0x0030)
    struct TArray<uint8_t> EngineTestModules; // 0x02A8 (0x0010)
    struct TArray<uint8_t> EditorTestModules; // 0x02B8 (0x0010)
    struct TArray<uint8_t> TestLevelFolders; // 0x02C8 (0x0010)
    struct TArray<uint8_t> TestAssetsToOpen; // 0x02D8 (0x0010)
    struct TArray<uint8_t> ExternalTools; // 0x02E8 (0x0010)
    struct TArray<uint8_t> ImportExportTestDefinitions; // 0x02F8 (0x0010)
    struct TArray<uint8_t> LaunchOnSettings; // 0x0308 (0x0010)
};

// Class: Engine.NavEdgeProviderInterface
class NavEdgeProviderInterface : public Interface {
public:
};

// Class: Engine.AvoidanceManager
class AvoidanceManager : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    float DefaultTimeToLive; // 0x0030 (0x0004)
    float LockTimeAfterAvoid; // 0x0034 (0x0004)
    float LockTimeAfterClean; // 0x0038 (0x0004)
    float DeltaTimeToPredict; // 0x003C (0x0004)
    float ArtificialRadiusExpansion; // 0x0040 (0x0004)
    float TestHeightDifference; // 0x0044 (0x0004)
    float HeightCheckMargin; // 0x0048 (0x0004)

public:
    bool RegisterMovementComponent(class UObject* MovementComp, float AvoidanceWeight);
    int32_t GetObjectCount();
    int32_t GetNewAvoidanceUID();
    uint8_t GetAvoidanceVelocityIgnoringUID(uint8_t AvoidanceData, float DeltaTime, int32_t IgnoreThisUID);
    uint8_t GetAvoidanceVelocityForComponent(class UObject* MovementComp);
    uint8_t GetAvoidanceVelocity(uint8_t AvoidanceData, float DeltaTime);
};

// Class: Engine.BendAnimAttachmentInterpolatableInterface
class BendAnimAttachmentInterpolatableInterface : public Interface {
public:
};

// Class: Engine.BendAnimBoneControllerSetup
class BendAnimBoneControllerSetup : public DataAsset {
public:
    uint8_t SourceFileName[0x10]; // 0x0028 (0x0010)
    bool bToggleToReimport; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> SdkCurves; // 0x0040 (0x0010)
    uint8_t ScalarMap[0x50]; // 0x0050 (0x0050)
    struct TArray<uint8_t> BoneControllerMasterList; // 0x00A0 (0x0010)
};

// Class: Engine.BendAnimBoneController_Base
class BendAnimBoneController_Base : public Object {
public:
};

// Class: Engine.BendAnimBoneController_AimConstraint
class BendAnimBoneController_AimConstraint : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x38]; // 0x0028 (0x0038)
    uint8_t AffectedBone[0x10]; // 0x0060 (0x0010)
    uint8_t TargetBone[0x10]; // 0x0070 (0x0010)
    uint8_t UpPointParentBone[0x10]; // 0x0080 (0x0010)
};

// Class: Engine.BendAnimBoneController_BlendNode
class BendAnimBoneController_BlendNode : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t TargetBone[0x10]; // 0x0030 (0x0010)
    uint8_t TargetControlType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    int32_t TargetControlIndex; // 0x0044 (0x0004)
    struct TArray<uint8_t> Sources; // 0x0048 (0x0010)
};

// Class: Engine.BendAnimBoneController_ConeAngleConstraint
class BendAnimBoneController_ConeAngleConstraint : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceBone[0x10]; // 0x0030 (0x0010)
    uint8_t SourceControlType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    int32_t SourceControlIndex; // 0x0044 (0x0004)
    uint8_t TargetBone[0x10]; // 0x0048 (0x0010)
    uint8_t TargetControlType; // 0x0058 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0059 (0x0003)
    int32_t TargetControlIndex; // 0x005C (0x0004)
    uint8_t ReferenceBone[0x10]; // 0x0060 (0x0010)
    uint8_t ReferenceControlType; // 0x0070 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0071 (0x0003)
    int32_t ReferenceControlIndex; // 0x0074 (0x0004)
    float MinConeAngle; // 0x0078 (0x0004)
    float MaxConeAngle; // 0x007C (0x0004)
};

// Class: Engine.BendAnimBoneController_ConstraintBase
class BendAnimBoneController_ConstraintBase : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t TargetBone[0x10]; // 0x0030 (0x0010)
    struct TArray<uint8_t> Sources; // 0x0040 (0x0010)
    uint8_t TranslateMask[0xC]; // 0x0050 (0x000C)
    uint8_t RotateMask[0xC]; // 0x005C (0x000C)
};

// Class: Engine.BendAnimBoneController_OrientConstraint
class BendAnimBoneController_OrientConstraint : public BendAnimBoneController_ConstraintBase {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Offset[0x10]; // 0x0070 (0x0010)
};

// Class: Engine.BendAnimBoneController_ParentConstraint
class BendAnimBoneController_ParentConstraint : public BendAnimBoneController_ConstraintBase {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t RestOffset[0xC]; // 0x0068 (0x000C)
    uint8_t Pad_1[0xC]; // 0x0074 (0x000C)
    uint8_t RestRotation[0x10]; // 0x0080 (0x0010)
};

// Class: Engine.BendAnimBoneController_PointConstraint
class BendAnimBoneController_PointConstraint : public BendAnimBoneController_ConstraintBase {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t Offset[0xC]; // 0x0068 (0x000C)
};

// Class: Engine.BendAnimBoneController_SetDrivenKey
class BendAnimBoneController_SetDrivenKey : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t TargetBone[0x10]; // 0x0030 (0x0010)
    uint8_t TargetControlType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    int32_t TargetControlIndex; // 0x0044 (0x0004)
    uint8_t SourceBone[0x10]; // 0x0048 (0x0010)
    uint8_t SourceControlType; // 0x0058 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0059 (0x0003)
    int32_t SourceControlIndex; // 0x005C (0x0004)
    uint8_t KeyFrames[0x78]; // 0x0060 (0x0078)
};

// Class: Engine.BendAnimBoneController_TransformNode
class BendAnimBoneController_TransformNode : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> Sources; // 0x0030 (0x0010)
    uint8_t TargetBone[0x10]; // 0x0040 (0x0010)
    uint8_t PreRotateMask[0xC]; // 0x0050 (0x000C)
};

// Class: Engine.BendAnimBoneController_TwistConstraint
class BendAnimBoneController_TwistConstraint : public BendAnimBoneController_Base {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceBone[0x10]; // 0x0030 (0x0010)
    uint8_t SourceControlType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    int32_t SourceControlIndex; // 0x0044 (0x0004)
    uint8_t TargetBone[0x10]; // 0x0048 (0x0010)
    uint8_t TargetControlType; // 0x0058 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0059 (0x0003)
    int32_t TargetControlIndex; // 0x005C (0x0004)
    uint8_t ReferenceBone[0x10]; // 0x0060 (0x0010)
    uint8_t ReferenceControlType; // 0x0070 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0071 (0x0003)
    int32_t ReferenceControlIndex; // 0x0074 (0x0004)
    bool bInvertOutput; // 0x0078 (0x0001)
};

// Class: Engine.BendInterface_MultiEntityActor
class BendInterface_MultiEntityActor : public Interface {
public:
};

// Class: Engine.BendLocationSystem
class BendLocationSystem : public Object {
public:
};

// Class: Engine.KismetMathLibrary
class KismetMathLibrary : public BlueprintFunctionLibrary {
public:

public:
    int32_t Xor_IntInt(int32_t A, int32_t B);
    float VSizeSquared(uint8_t A);
    float VSize2DSquared(uint8_t A);
    float VSize2D(uint8_t A);
    float VSize(uint8_t A);
    uint8_t VLerp(uint8_t A, uint8_t B, float Alpha);
    uint8_t VInterpTo_Constant(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    uint8_t VInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    uint8_t Vector2DInterpTo_Constant(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    uint8_t Vector2DInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    uint8_t VEase(uint8_t A, uint8_t B, float Alpha, uint8_t EasingFunc, float BlendExp, int32_t Steps);
    uint8_t UtcNow();
    uint8_t TransformLocation(uint8_t T, uint8_t Location);
    uint8_t TransformDirection(uint8_t T, uint8_t Direction);
    uint8_t Today();
    uint8_t TLerp(uint8_t A, uint8_t B, float Alpha);
    uint8_t TInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    uint8_t TimespanZeroValue();
    float TimespanRatio(uint8_t A, uint8_t B);
    uint8_t TimespanMinValue();
    uint8_t TimespanMaxValue();
    bool TimespanFromString(struct FString TimespanString, uint8_t Result);
    uint8_t TEase(uint8_t A, uint8_t B, float Alpha, uint8_t EasingFunc, float BlendExp, int32_t Steps);
    float Tan(float A);
    uint8_t Subtract_VectorVector(uint8_t A, uint8_t B);
    uint8_t Subtract_VectorInt(uint8_t A, int32_t B);
    uint8_t Subtract_VectorFloat(uint8_t A, float B);
    uint8_t Subtract_Vector2DVector2D(uint8_t A, uint8_t B);
    uint8_t Subtract_Vector2DFloat(uint8_t A, float B);
    uint8_t Subtract_TimespanTimespan(uint8_t A, uint8_t B);
    int32_t Subtract_IntInt(int32_t A, int32_t B);
    float Subtract_FloatFloat(float A, float B);
    uint8_t Subtract_DateTimeTimespan(uint8_t A, uint8_t B);
    uint8_t Subtract_DateTimeDateTime(uint8_t A, uint8_t B);
    uint8_t Subtract_ByteByte(uint8_t A, uint8_t B);
    float Square(float A);
    float Sqrt(float A);
    float Sin(float A);
    int32_t SignOfInteger(int32_t A);
    float SignOfFloat(float A);
    void SetRandomStreamSeed(uint8_t Stream, int32_t NewSeed);
    uint8_t SelectVector(uint8_t A, uint8_t B, bool bPickA);
    uint8_t SelectTransform(uint8_t A, uint8_t B, bool bPickA);
    struct FString SelectString(struct FString A, struct FString B, bool bPickA);
    uint8_t SelectRotator(uint8_t A, uint8_t B, bool bPickA);
    class UObject* SelectObject(class UObject* A, class UObject* B, bool bSelectA);
    int32_t SelectInt(int32_t A, int32_t B, bool bPickA);
    float SelectFloat(float A, float B, bool bPickA);
    uint8_t SelectColor(uint8_t A, uint8_t B, bool bPickA);
    class UClass* SelectClass(class UClass* A, class UClass* B, bool bSelectA);
    void SeedRandomStream(uint8_t Stream);
    int32_t Round(float A);
    uint8_t RotatorFromAxisAndAngle(uint8_t Axis, float angle);
    uint8_t RotateAngleAxis(uint8_t InVect, float AngleDeg, uint8_t Axis);
    uint8_t RLerp(uint8_t A, uint8_t B, float Alpha, bool bShortestPath);
    uint8_t RInterpTo_Constant(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    uint8_t RInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    void RGBToHSV_Vector(uint8_t RGB, uint8_t HSV);
    void RGBToHSV(uint8_t InColor, float H, float S, float V, float A);
    void ResetRandomStream(uint8_t Stream);
    uint8_t REase(uint8_t A, uint8_t B, float Alpha, bool bShortestPath, uint8_t EasingFunc, float BlendExp, int32_t Steps);
    uint8_t RandomUnitVectorInConeWithYawAndPitch(uint8_t ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
    uint8_t RandomUnitVectorInCone(uint8_t ConeDir, float ConeHalfAngle);
    uint8_t RandomUnitVectorFromStream(uint8_t Stream);
    uint8_t RandomUnitVector();
    uint8_t RandomRotatorFromStream(bool bRoll, uint8_t Stream);
    uint8_t RandomRotator(bool bRoll);
    uint8_t RandomPointInBoundingBox(uint8_t Origin, uint8_t BoxExtent);
    int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, uint8_t Stream);
    int32_t RandomIntegerInRange(int32_t Min, int32_t Max);
    int32_t RandomIntegerFromStream(int32_t Max, uint8_t Stream);
    int32_t RandomInteger(int32_t Max);
    float RandomFloatInRangeFromStream(float Min, float Max, uint8_t Stream);
    float RandomFloatInRange(float Min, float Max);
    float RandomFloatFromStream(uint8_t Stream);
    float RandomFloat();
    bool RandomBoolFromStream(uint8_t Stream);
    bool RandomBool();
    float RadiansToDegrees(float A);
    uint8_t ProjectVectorOnToVector(uint8_t V, uint8_t Target);
    uint8_t ProjectVectorOnToPlane(uint8_t V, uint8_t PlaneNormal);
    uint8_t ProjectPointOnToPlane(uint8_t Point, uint8_t PlaneBase, uint8_t PlaneNormal);
    bool PointsAreCoplanar(struct TArray<uint8_t> Points, float Tolerance);
    int32_t Percent_IntInt(int32_t A, int32_t B);
    float Percent_FloatFloat(float A, float B);
    uint8_t Percent_ByteByte(uint8_t A, uint8_t B);
    int32_t Or_IntInt(int32_t A, int32_t B);
    uint8_t Now();
    bool NotEqual_VectorVector(uint8_t A, uint8_t B, float ErrorTolerance);
    bool NotEqual_Vector2DVector2D(uint8_t A, uint8_t B, float ErrorTolerance);
    bool NotEqual_TimespanTimespan(uint8_t A, uint8_t B);
    bool NotEqual_RotatorRotator(uint8_t A, uint8_t B, float ErrorTolerance);
    bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
    bool NotEqual_NameName(struct FName A, struct FName B);
    bool NotEqual_IntInt(int32_t A, int32_t B);
    bool NotEqual_FloatFloat(float A, float B);
    bool NotEqual_DateTimeDateTime(uint8_t A, uint8_t B);
    bool NotEqual_ClassClass(class UClass* A, class UClass* B);
    bool NotEqual_ByteByte(uint8_t A, uint8_t B);
    bool NotEqual_BoolBool(bool A, bool B);
    bool Not_PreBool(bool A);
    float NormalizeToRange(float Value, float RangeMin, float RangeMax);
    uint8_t NormalizedDeltaRotator(uint8_t A, uint8_t B);
    float NormalizeAxis(float angle);
    uint8_t Normal2D(uint8_t A);
    uint8_t Normal(uint8_t A);
    uint8_t NegateVector(uint8_t A);
    uint8_t NegateRotator(uint8_t A);
    bool NearlyEqual_TransformTransform(uint8_t A, uint8_t B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
    bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
    float MultiplyMultiply_FloatFloat(float Base, float Exp);
    float MultiplyByPi(float Value);
    uint8_t Multiply_VectorVector(uint8_t A, uint8_t B);
    uint8_t Multiply_VectorInt(uint8_t A, int32_t B);
    uint8_t Multiply_VectorFloat(uint8_t A, float B);
    uint8_t Multiply_Vector2DFloat(uint8_t A, float B);
    uint8_t Multiply_TimespanFloat(uint8_t A, float Scalar);
    uint8_t Multiply_RotatorInt(uint8_t A, int32_t B);
    uint8_t Multiply_RotatorFloat(uint8_t A, float B);
    uint8_t Multiply_LinearColorLinearColor(uint8_t A, uint8_t B);
    uint8_t Multiply_LinearColorFloat(uint8_t A, float B);
    int32_t Multiply_IntInt(int32_t A, int32_t B);
    float Multiply_IntFloat(int32_t A, float B);
    float Multiply_FloatFloat(float A, float B);
    uint8_t Multiply_ByteByte(uint8_t A, uint8_t B);
    uint8_t MirrorVectorByNormal(uint8_t InVect, uint8_t InNormal);
    void MinOfIntArray(struct TArray<uint8_t> IntArray, int32_t IndexOfMinValue, int32_t MinValue);
    void MinOfFloatArray(struct TArray<uint8_t> FloatArray, int32_t IndexOfMinValue, float MinValue);
    void MinOfByteArray(struct TArray<uint8_t> ByteArray, int32_t IndexOfMinValue, uint8_t MinValue);
    void MinimumAreaRectangle(class UObject* WorldContextObject, struct TArray<uint8_t> InVerts, uint8_t SampleSurfaceNormal, uint8_t OutRectCenter, uint8_t OutRectRotation, float OutSideLengthX, float OutSideLengthY, bool bDebugDraw);
    int32_t Min(int32_t A, int32_t B);
    void MaxOfIntArray(struct TArray<uint8_t> IntArray, int32_t IndexOfMaxValue, int32_t MaxValue);
    void MaxOfFloatArray(struct TArray<uint8_t> FloatArray, int32_t IndexOfMaxValue, float MaxValue);
    void MaxOfByteArray(struct TArray<uint8_t> ByteArray, int32_t IndexOfMaxValue, uint8_t MaxValue);
    int32_t Max(int32_t A, int32_t B);
    float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    uint8_t MakeVector2D(float X, float Y);
    uint8_t MakeVector(float X, float Y, float Z);
    uint8_t MakeTransform(uint8_t Location, uint8_t Rotation, uint8_t Scale);
    uint8_t MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds);
    uint8_t MakeRotFromZY(uint8_t Z, uint8_t Y);
    uint8_t MakeRotFromZX(uint8_t Z, uint8_t X);
    uint8_t MakeRotFromZ(uint8_t Z);
    uint8_t MakeRotFromYZ(uint8_t Y, uint8_t Z);
    uint8_t MakeRotFromYX(uint8_t Y, uint8_t X);
    uint8_t MakeRotFromY(uint8_t Y);
    uint8_t MakeRotFromXZ(uint8_t X, uint8_t Z);
    uint8_t MakeRotFromXY(uint8_t X, uint8_t Y);
    uint8_t MakeRotFromX(uint8_t X);
    uint8_t MakeRotator(float Roll, float Pitch, float Yaw);
    uint8_t MakeRotationFromAxes(uint8_t Forward, uint8_t Right, uint8_t Up);
    uint8_t MakeRandomStream(int32_t InitialSeed);
    float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
    uint8_t MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t second, int32_t Millisecond);
    uint8_t MakeColor(float R, float G, float B, float A);
    float Loge(float A);
    bool LinePlaneIntersection_OriginNormal(uint8_t LineStart, uint8_t LineEnd, uint8_t PlaneOrigin, uint8_t PlaneNormal, float T, uint8_t Intersection);
    bool LinePlaneIntersection(uint8_t LineStart, uint8_t LineEnd, uint8_t APlane, float T, uint8_t Intersection);
    uint8_t LinearColorLerpUsingHSV(uint8_t A, uint8_t B, float Alpha);
    uint8_t LinearColorLerp(uint8_t A, uint8_t B, float Alpha);
    uint8_t LessLess_VectorRotator(uint8_t A, uint8_t B);
    bool LessEqual_TimespanTimespan(uint8_t A, uint8_t B);
    bool LessEqual_IntInt(int32_t A, int32_t B);
    bool LessEqual_FloatFloat(float A, float B);
    bool LessEqual_DateTimeDateTime(uint8_t A, uint8_t B);
    bool LessEqual_ByteByte(uint8_t A, uint8_t B);
    bool Less_TimespanTimespan(uint8_t A, uint8_t B);
    bool Less_IntInt(int32_t A, int32_t B);
    bool Less_FloatFloat(float A, float B);
    bool Less_DateTimeDateTime(uint8_t A, uint8_t B);
    bool Less_ByteByte(uint8_t A, uint8_t B);
    float Lerp(float A, float B, float Alpha);
    bool IsMorning(uint8_t A);
    bool IsLeapYear(int32_t Year);
    bool IsAfternoon(uint8_t A);
    uint8_t InvertTransform(uint8_t T);
    uint8_t InverseTransformLocation(uint8_t T, uint8_t Location);
    uint8_t InverseTransformDirection(uint8_t T, uint8_t Direction);
    float InverseLerp(float A, float B, float Value);
    bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
    float Hypotenuse(float Width, float Height);
    void HSVToRGB_Vector(uint8_t HSV, uint8_t RGB);
    uint8_t HSVToRGB(float H, float S, float V, float A);
    float GridSnap_Float(float Location, float GridSize);
    uint8_t GreaterGreater_VectorRotator(uint8_t A, uint8_t B);
    bool GreaterEqual_TimespanTimespan(uint8_t A, uint8_t B);
    bool GreaterEqual_IntInt(int32_t A, int32_t B);
    bool GreaterEqual_FloatFloat(float A, float B);
    bool GreaterEqual_DateTimeDateTime(uint8_t A, uint8_t B);
    bool GreaterEqual_ByteByte(uint8_t A, uint8_t B);
    bool Greater_TimespanTimespan(uint8_t A, uint8_t B);
    bool Greater_IntInt(int32_t A, int32_t B);
    bool Greater_FloatFloat(float A, float B);
    bool Greater_DateTimeDateTime(uint8_t A, uint8_t B);
    bool Greater_ByteByte(uint8_t A, uint8_t B);
    int32_t GetYear(uint8_t A);
    void GetYawPitchFromVector(uint8_t InVec, float Yaw, float Pitch);
    uint8_t GetVectorArrayAverage(struct TArray<uint8_t> Vectors);
    uint8_t GetUpVector(uint8_t InRot);
    float GetTotalSeconds(uint8_t A);
    float GetTotalMinutes(uint8_t A);
    float GetTotalMilliseconds(uint8_t A);
    float GetTotalHours(uint8_t A);
    float GetTotalDays(uint8_t A);
    uint8_t GetTimeOfDay(uint8_t A);
    int32_t GetSeconds(uint8_t A);
    int32_t GetSecond(uint8_t A);
    uint8_t GetRightVector(uint8_t InRot);
    float GetPI();
    int32_t GetMonth(uint8_t A);
    int32_t GetMinutes(uint8_t A);
    int32_t GetMinute(uint8_t A);
    float GetMinElement(uint8_t A);
    int32_t GetMilliseconds(uint8_t A);
    int32_t GetMillisecond(uint8_t A);
    float GetMaxElement(uint8_t A);
    int32_t GetHours(uint8_t A);
    int32_t GetHour12(uint8_t A);
    int32_t GetHour(uint8_t A);
    uint8_t GetForwardVector(uint8_t InRot);
    uint8_t GetDuration(uint8_t A);
    uint8_t GetDirectionVector(uint8_t From, uint8_t To);
    int32_t GetDays(uint8_t A);
    int32_t GetDayOfYear(uint8_t A);
    int32_t GetDay(uint8_t A);
    uint8_t GetDate(uint8_t A);
    void GetAxes(uint8_t A, uint8_t X, uint8_t Y, uint8_t Z);
    int32_t FTrunc(float A);
    uint8_t FromSeconds(float Seconds);
    uint8_t FromMinutes(float Minutes);
    uint8_t FromMilliseconds(float Milliseconds);
    uint8_t FromHours(float Hours);
    uint8_t FromDays(float Days);
    float Fraction(float A);
    int32_t FMod(float Dividend, float Divisor, float Remainder);
    float FMin(float A, float B);
    float FMax(float A, float B);
    float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
    float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
    uint8_t FindLookAtRotation(uint8_t Start, uint8_t Target);
    int32_t FFloor(float A);
    float FClamp(float Value, float Min, float Max);
    int32_t FCeil(float A);
    float Exp(float A);
    bool EqualEqual_VectorVector(uint8_t A, uint8_t B, float ErrorTolerance);
    bool EqualEqual_Vector2DVector2D(uint8_t A, uint8_t B, float ErrorTolerance);
    bool EqualEqual_TransformTransform(uint8_t A, uint8_t B);
    bool EqualEqual_TimespanTimespan(uint8_t A, uint8_t B);
    bool EqualEqual_RotatorRotator(uint8_t A, uint8_t B, float ErrorTolerance);
    bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
    bool EqualEqual_NameName(struct FName A, struct FName B);
    bool EqualEqual_IntInt(int32_t A, int32_t B);
    bool EqualEqual_FloatFloat(float A, float B);
    bool EqualEqual_DateTimeDateTime(uint8_t A, uint8_t B);
    bool EqualEqual_ClassClass(class UClass* A, class UClass* B);
    bool EqualEqual_ByteByte(uint8_t A, uint8_t B);
    bool EqualEqual_BoolBool(bool A, bool B);
    float Ease(float A, float B, float Alpha, uint8_t EasingFunc, float BlendExp, int32_t Steps);
    float DotProduct2D(uint8_t A, uint8_t B);
    float Dot_VectorVector(uint8_t A, uint8_t B);
    uint8_t Divide_VectorVector(uint8_t A, uint8_t B);
    uint8_t Divide_VectorInt(uint8_t A, int32_t B);
    uint8_t Divide_VectorFloat(uint8_t A, float B);
    uint8_t Divide_Vector2DFloat(uint8_t A, float B);
    int32_t Divide_IntInt(int32_t A, int32_t B);
    float Divide_FloatFloat(float A, float B);
    uint8_t Divide_ByteByte(uint8_t A, uint8_t B);
    float DegTan(float A);
    float DegSin(float A);
    float DegreesToRadians(float A);
    float DegCos(float A);
    float DegAtan2(float A, float B);
    float DegAtan(float A);
    float DegAsin(float A);
    float DegAcos(float A);
    int32_t DaysInYear(int32_t Year);
    int32_t DaysInMonth(int32_t Year, int32_t Month);
    uint8_t DateTimeMinValue();
    uint8_t DateTimeMaxValue();
    bool DateTimeFromString(struct FString DateTimeString, uint8_t Result);
    bool DateTimeFromIsoString(struct FString IsoString, uint8_t Result);
    float CrossProduct2D(uint8_t A, uint8_t B);
    uint8_t Cross_VectorVector(uint8_t A, uint8_t B);
    uint8_t CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
    float Cos(float A);
    uint8_t ConvertTransformToRelative(uint8_t Transform, uint8_t ParentTransform);
    uint8_t Conv_VectorToVector2D(uint8_t InVector);
    uint8_t Conv_VectorToTransform(uint8_t InLocation);
    uint8_t Conv_VectorToRotator(uint8_t InVec);
    uint8_t Conv_VectorToLinearColor(uint8_t InVec);
    uint8_t Conv_Vector2DToVector(uint8_t InVector2D, float Z);
    uint8_t Conv_RotatorToVector(uint8_t InRot);
    uint8_t Conv_LinearColorToVector(uint8_t InLinearColor);
    uint8_t Conv_LinearColorToColor(uint8_t InLinearColor);
    float Conv_IntToFloat(int32_t InInt);
    uint8_t Conv_IntToByte(int32_t InInt);
    bool Conv_IntToBool(int32_t InInt);
    uint8_t Conv_FloatToVector(float InFloat);
    uint8_t Conv_FloatToLinearColor(float InFloat);
    uint8_t Conv_ColorToLinearColor(uint8_t InColor);
    int32_t Conv_ByteToInt(uint8_t InByte);
    float Conv_ByteToFloat(uint8_t InByte);
    int32_t Conv_BoolToInt(bool InBool);
    float Conv_BoolToFloat(bool InBool);
    uint8_t Conv_BoolToByte(bool InBool);
    uint8_t ComposeTransforms(uint8_t A, uint8_t B);
    uint8_t ComposeRotators(uint8_t A, uint8_t B);
    bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
    uint8_t ClampVectorSize(uint8_t A, float Min, float Max);
    float ClampAxis(float angle);
    float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
    int32_t Clamp(int32_t Value, int32_t Min, int32_t Max);
    uint8_t CInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed);
    void BreakVector2D(uint8_t InVec, float X, float Y);
    void BreakVector(uint8_t InVec, float X, float Y, float Z);
    void BreakTransform(uint8_t InTransform, uint8_t Location, uint8_t Rotation, uint8_t Scale);
    void BreakTimespan(uint8_t InTimespan, int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds);
    void BreakRotIntoAxes(uint8_t InRot, uint8_t X, uint8_t Y, uint8_t Z);
    void BreakRotator(uint8_t InRot, float Roll, float Pitch, float Yaw);
    void BreakRandomStream(uint8_t InRandomStream, int32_t InitialSeed);
    void BreakDateTime(uint8_t InDateTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t second, int32_t Millisecond);
    void BreakColor(uint8_t InColor, float R, float G, float B, float A);
    bool BooleanXOR(bool A, bool B);
    bool BooleanOR(bool A, bool B);
    bool BooleanNOR(bool A, bool B);
    bool BooleanNAND(bool A, bool B);
    bool BooleanAND(bool A, bool B);
    uint8_t BMin(uint8_t A, uint8_t B);
    uint8_t BMax(uint8_t A, uint8_t B);
    float Atan2(float A, float B);
    float Atan(float A);
    float Asin(float A);
    int32_t And_IntInt(int32_t A, int32_t B);
    uint8_t Add_VectorVector(uint8_t A, uint8_t B);
    uint8_t Add_VectorInt(uint8_t A, int32_t B);
    uint8_t Add_VectorFloat(uint8_t A, float B);
    uint8_t Add_Vector2DVector2D(uint8_t A, uint8_t B);
    uint8_t Add_Vector2DFloat(uint8_t A, float B);
    uint8_t Add_TimespanTimespan(uint8_t A, uint8_t B);
    int32_t Add_IntInt(int32_t A, int32_t B);
    float Add_FloatFloat(float A, float B);
    uint8_t Add_DateTimeTimespan(uint8_t A, uint8_t B);
    uint8_t Add_ByteByte(uint8_t A, uint8_t B);
    float Acos(float A);
    int32_t Abs_Int(int32_t A);
    float Abs(float A);
};

// Class: Engine.BendMatineeActorParams
class BendMatineeActorParams : public Object {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> LiveWeaponSwapInfos; // 0x0070 (0x0010)
    bool DoLightFadeIn; // 0x0080 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0081 (0x0003)
    float LightFadeInTime; // 0x0084 (0x0004)
    float TargetFadeInIntensity; // 0x0088 (0x0004)
    uint8_t FadeInEasingFunc; // 0x008C (0x0001)
    uint8_t Pad_2[0x3]; // 0x008D (0x0003)
    float FadeInBlendExp; // 0x0090 (0x0004)
    int32_t FadeInSteps; // 0x0094 (0x0004)
    bool DoLightFadeOut; // 0x0098 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0099 (0x0003)
    float LightFadeOutTime; // 0x009C (0x0004)
    float TargetFadeOutIntensity; // 0x00A0 (0x0004)
    uint8_t FadeOutEasingFunc; // 0x00A4 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00A5 (0x0003)
    float FadeOutBlendExp; // 0x00A8 (0x0004)
    int32_t FadeOutSteps; // 0x00AC (0x0004)
};

// Class: Engine.BendRoadEdgeProvider
class BendRoadEdgeProvider : public Object {
public:
};

// Class: Engine.BlendProfile
class BlendProfile : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* OwningSkeleton; // 0x0030 (0x0008)
    struct TArray<uint8_t> ProfileEntries; // 0x0038 (0x0010)
};

// Class: Engine.AnimBlueprint
class AnimBlueprint : public Blueprint {
public:
    uint8_t Pad_0[0x168]; // 0x0028 (0x0168)
    class UObject* TargetSkeleton; // 0x0190 (0x0008)
    struct TArray<uint8_t> Groups; // 0x0198 (0x0010)
    uint8_t Pad_1[0x10]; // 0x01A8 (0x0010)
    struct TArray<uint8_t> CacheNames; // 0x01B8 (0x0010)
    struct TArray<uint8_t> AnimGraphAddedCurves; // 0x01C8 (0x0010)
    bool bHasPostPhysicsGraph; // 0x01D8 (0x0001)
};

// Class: Engine.LevelScriptBlueprint
class LevelScriptBlueprint : public Blueprint {
public:
};

// Class: Engine.DataTable
class DataTable : public Object {
public:
    class UObject* RowStruct; // 0x0028 (0x0008)
};

// Class: Engine.DataTableFunctionLibrary
class DataTableFunctionLibrary : public BlueprintFunctionLibrary {
public:

public:
    void GetDataTableRowNames(class UObject* Table, struct TArray<uint8_t> OutRowNames);
    bool GetDataTableRowFromName(class UObject* Table, struct FName RowName, uint8_t OutRow);
    void EvaluateCurveTableRow(class UObject* CurveTable, struct FName RowName, float InXY, uint8_t outResult, float OutXY);
};

// Class: Engine.DebugDrawService
class DebugDrawService : public BlueprintFunctionLibrary {
public:
};

// Class: Engine.DialogueTypes
class DialogueTypes : public Object {
public:
};

// Class: Engine.GameplayStatics
class GameplayStatics : public BlueprintFunctionLibrary {
public:

public:
    void UnloadStreamLevelArray(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, uint8_t LatentInfo);
    void UnloadStreamLevel(class UObject* WorldContextObject, struct FName levelName, uint8_t LatentInfo);
    void TransitionRegion(struct FName levelName, struct FName DependentUnloadLevelName);
    void ToggleStreamingLog(class UObject* WorldContextObject);
    class UObject* SpawnSoundAttached(class UObject* Sound, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings, class UObject* ConcurrencySettings);
    class UObject* SpawnSoundAtLocation(class UObject* WorldContextObject, class UObject* Sound, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings, class UObject* ConcurrencySettings);
    class UObject* SpawnSound2D(class UObject* WorldContextObject, class UObject* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* ConcurrencySettings);
    class UObject* SpawnObject(class UClass* ObjectClass, class UObject* Outer);
    class UObject* SpawnEmitterAttached(class UObject* EmitterTemplate, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bAutoDestroy);
    class UObject* SpawnEmitterAtLocation(class UObject* WorldContextObject, class UObject* EmitterTemplate, uint8_t Location, uint8_t Rotation, bool bAutoDestroy);
    class UObject* SpawnDialogueAttached(class UObject* Dialogue, uint8_t Context, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings);
    class UObject* SpawnDialogueAtLocation(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings);
    class UObject* SpawnDialogue2D(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    class UObject* SpawnDecalAttached(class UObject* DecalMaterial, uint8_t DecalSize, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, float LifeSpan);
    class UObject* SpawnDecalAtLocation(class UObject* WorldContextObject, class UObject* DecalMaterial, uint8_t DecalSize, uint8_t Location, uint8_t Rotation, float LifeSpan);
    void SetWorldOriginLocation(class UObject* WorldContextObject, uint8_t NewLocation);
    bool SetWorldCurrentLevel(class UObject* NewCurrentLevel);
    void SetIgnoreStreamingDistance(class UObject* WorldContextObject, bool bIgnoreStreamingDistance, struct TArray<uint8_t> PreserveLevels);
    void SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);
    void SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec);
    bool SetGamePaused(class UObject* WorldContextObject, bool bPaused);
    void SetBaseSoundMix(class UObject* WorldContextObject, class UObject* InSoundMix);
    bool SaveGameToSlot(class UObject* SaveGameObject, struct FString SlotName, int32_t UserIndex, bool isSynchronous);
    void ResetWeeklyChallengeTag();
    void RemovePlayer(class UObject* Player, bool bDestroyPawn);
    void PushSoundMixModifier(class UObject* WorldContextObject, class UObject* InSoundMixModifier);
    bool ProjectWorldToScreenWithDistance(class UObject* Player, uint8_t WorldPosition, uint8_t ScreenPosition);
    bool ProjectWorldToScreen(class UObject* Player, uint8_t WorldPosition, uint8_t ScreenPosition);
    void PrintMessage(struct FName aMessage);
    void PopSoundMixModifier(class UObject* WorldContextObject, class UObject* InSoundMixModifier);
    void PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, uint8_t Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    void PlaySoundAtLocation(class UObject* WorldContextObject, class UObject* Sound, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings, class UObject* ConcurrencySettings);
    void PlaySound2D(class UObject* WorldContextObject, class UObject* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* ConcurrencySettings);
    void PlayDialogueAtLocation(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings);
    void PlayDialogue2D(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    void PerformActionOnStreamingLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, bool bLoadAndSetInvisible, bool bBlockFromLoading);
    void PerformActionOnGlobalLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, bool bSetActorsInvisible);
    struct FString ParseOption(struct FString Options, struct FString Key);
    void OpenLevel(class UObject* WorldContextObject, struct FName levelName, bool bAbsolute, struct FString Options);
    void LoadStreamLevelArray(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool bWaitForAllBeforeMakingVisible, bool bNeverUnloadDuringCinematics, uint8_t LatentInfo);
    void LoadStreamLevel(class UObject* WorldContextObject, struct FName levelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, uint8_t LatentInfo);
    class UObject* LoadGameFromSlot(struct FString SlotName, int32_t UserIndex, bool bUseUI);
    bool IsGamePaused(class UObject* WorldContextObject);
    bool HasOption(struct FString Options, struct FString InKey);
    int32_t GrassOverlappingSphereCount(class UObject* WorldContextObject, class UObject* StaticMesh, uint8_t CenterPosition, float Radius);
    uint8_t GetWorldOriginLocation(class UObject* WorldContextObject);
    float GetWorldDeltaSeconds(class UObject* WorldContextObject);
    class UObject* GetWorldCurrentLevel();
    struct FName GetWeeklyChallengeTag();
    uint8_t GetSurfaceType(uint8_t Hit);
    class UObject* GetStreamingLevel(class UObject* WorldContextObject, struct FName PackageName);
    float GetRealTimeSeconds(class UObject* WorldContextObject);
    class UObject* GetPlayerPawn(class UObject* WorldContextObject, int32_t PlayerIndex);
    class UObject* GetPlayerController(class UObject* WorldContextObject, int32_t PlayerIndex);
    class UObject* GetPlayerCharacter(class UObject* WorldContextObject, int32_t PlayerIndex);
    class UObject* GetPlayerCameraManager(class UObject* WorldContextObject, int32_t PlayerIndex);
    struct FString GetPlatformName();
    class UObject* GetObjectOutermost(class UObject* InObject);
    class UObject* GetObjectOuter(class UObject* InObject);
    class UClass* GetObjectClass(class UObject* Object);
    void GetKeyValue(struct FString Pair, struct FString Key, struct FString Value);
    int32_t GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue);
    float GetGlobalTimeDilation(class UObject* WorldContextObject);
    class UObject* GetGameState(class UObject* WorldContextObject);
    class UObject* GetGameMode(class UObject* WorldContextObject);
    class UObject* GetGameInstance(class UObject* WorldContextObject);
    struct FString GetFileNameBySaveType(uint8_t SaveGameType);
    struct FString GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString);
    class UObject* GetBPStreamingLevel(class UObject* WorldContextObject, struct FName PackageName);
    float GetAudioTimeSeconds(class UObject* WorldContextObject);
    void GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, struct TArray<uint8_t> OutActors);
    void GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, struct TArray<uint8_t> OutActors);
    void GetActorArrayBounds(struct TArray<uint8_t> Actors, bool bOnlyCollidingComponents, uint8_t Center, uint8_t BoxExtent);
    uint8_t GetActorArrayAverageLocation(struct TArray<uint8_t> Actors);
    void GetAccurateRealTime(class UObject* WorldContextObject, int32_t Seconds, float PartialSeconds);
    void FlushLevelStreaming(class UObject* WorldContextObject);
    class UObject* FinishSpawningActor(class UObject* Actor, uint8_t SpawnTransform);
    void EnableLiveStreaming(bool enable);
    bool DeprojectScreenToWorld(class UObject* Player, uint8_t ScreenPosition, uint8_t WorldPosition, uint8_t WorldDirection);
    bool DeleteGameInSlot(struct FString SlotName, int32_t UserIndex);
    void DeactivateReverbEffect(class UObject* WorldContextObject, struct FName TagName);
    class UObject* CreateSound2D(class UObject* WorldContextObject, class UObject* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* ConcurrencySettings);
    class UObject* CreateSaveGameObjectFromBlueprint(class UObject* SaveGameBlueprint);
    class UObject* CreateSaveGameObject(class UClass* SaveGameClass);
    class UObject* CreatePlayer(class UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPawn);
    void ClearSoundMixModifiers(class UObject* WorldContextObject);
    void ClearActionOnStreamingLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames);
    void ClearActionOnGlobalLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames);
    void ClearActionOnAllStreamingLevels(class UObject* WorldContextObject);
    void CancelAsyncLoading();
    void BreakHitResult(uint8_t Hit, bool bBlockingHit, bool bInitialOverlap, float Time, uint8_t Location, uint8_t ImpactPoint, uint8_t Normal, uint8_t ImpactNormal, class UObject* PhysMat, class UObject* HitActor, class UObject* HitComponent, struct FName HitBoneName, int32_t HitItem, uint8_t TraceStart, uint8_t TraceEnd);
    void BLUTILITY_SelectNone();
    bool BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, uint8_t TossVelocity, uint8_t StartLocation, uint8_t EndLocation, float LaunchSpeed, float OverrideGravityZ, uint8_t TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    class UObject* BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, uint8_t SpawnTransform, bool bNoCollisionFail, class UObject* Owner);
    class UObject* BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UObject* Blueprint, uint8_t SpawnTransform, bool bNoCollisionFail);
    class UObject* BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, uint8_t SpawnTransform, uint8_t CollisionHandlingOverride, class UObject* Owner);
    bool AreAnyListenersWithinRange(class UObject* WorldContextObject, uint8_t Location, float MaximumRange);
    bool ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, uint8_t Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, struct TArray<uint8_t> IgnoreActors, class UObject* DamageCauser, class UObject* InstigatedByController, uint8_t DamagePreventionChannel);
    bool ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, uint8_t Origin, float DamageRadius, class UClass* DamageTypeClass, struct TArray<uint8_t> IgnoreActors, class UObject* DamageCauser, class UObject* InstigatedByController, bool bDoFullDamage, uint8_t DamagePreventionChannel);
    bool ApplyPointDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, uint8_t Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, struct TArray<uint8_t> IgnoreActors, struct TArray<uint8_t> AffectedActors, class UObject* DamageCauser, class UObject* InstigatedByController, uint8_t DamagePreventionChannel);
    void ApplyPointDamage(class UObject* DamagedActor, float BaseDamage, uint8_t HitFromDirection, uint8_t HitInfo, class UObject* EventInstigator, class UObject* DamageCauser, class UClass* DamageTypeClass, int32_t DamagedBodyIndex);
    void ApplyDamage(class UObject* DamagedActor, float BaseDamage, class UObject* EventInstigator, class UObject* DamageCauser, class UClass* DamageTypeClass, int32_t DamagedBodyIndex);
    void ActivateReverbEffect(class UObject* WorldContextObject, class UObject* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime);
};

// Class: Engine.HeadMountedDisplayFunctionLibrary
class HeadMountedDisplayFunctionLibrary : public BlueprintFunctionLibrary {
public:

public:
    void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
    void SetTrackingOrigin(uint8_t Origin);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, uint8_t Options);
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool HasValidTrackingPosition();
    float GetWorldToMetersScale(class UObject* WorldContext);
    void GetVRFocusState(bool bUseFocus, bool bHasFocus);
    uint8_t GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(uint8_t CameraOrigin, uint8_t CameraRotation, float HFOV, float VFOV, float CameraDistance, float NearPlane, float FarPlane);
    void GetOrientationAndPosition(uint8_t DeviceRotation, uint8_t DevicePosition);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
};

// Class: Engine.KismetArrayLibrary
class KismetArrayLibrary : public BlueprintFunctionLibrary {
public:

public:
    void SetArrayPropertyByName(class UObject* Object, struct FName PropertyName, struct TArray<uint8_t> Value);
    void FilterArray(struct TArray<uint8_t> TargetArray, class UClass* FilterClass, struct TArray<uint8_t> FilteredArray);
    void Array_Shuffle(struct TArray<uint8_t> TargetArray);
    void Array_Set(struct TArray<uint8_t> TargetArray, int32_t Index, int32_t Item, bool bSizeToFit);
    void Array_Resize(struct TArray<uint8_t> TargetArray, int32_t Size);
    bool Array_RemoveItem(struct TArray<uint8_t> TargetArray, int32_t Item);
    void Array_Remove(struct TArray<uint8_t> TargetArray, int32_t IndexToRemove);
    int32_t Array_Length(struct TArray<uint8_t> TargetArray);
    int32_t Array_LastIndex(struct TArray<uint8_t> TargetArray);
    void Array_Insert(struct TArray<uint8_t> TargetArray, int32_t newItem, int32_t Index);
    void Array_Get(struct TArray<uint8_t> TargetArray, int32_t Index, int32_t Item);
    int32_t Array_Find(struct TArray<uint8_t> TargetArray, int32_t ItemToFind);
    bool Array_Contains(struct TArray<uint8_t> TargetArray, int32_t ItemToFind);
    void Array_Clear(struct TArray<uint8_t> TargetArray);
    void Array_Append(struct TArray<uint8_t> TargetArray, struct TArray<uint8_t> SourceArray);
    int32_t Array_AddUnique(struct TArray<uint8_t> TargetArray, int32_t newItem);
    int32_t Array_Add(struct TArray<uint8_t> TargetArray, int32_t newItem);
};

// Class: Engine.KismetGuidLibrary
class KismetGuidLibrary : public BlueprintFunctionLibrary {
public:

public:
    void Parse_StringToGuid(struct FString GuidString, uint8_t OutGuid, bool Success);
    bool NotEqual_GuidGuid(uint8_t A, uint8_t B);
    uint8_t NewGuid();
    bool IsValid_Guid(uint8_t InGuid);
    void Invalidate_Guid(uint8_t InGuid);
    bool EqualEqual_GuidGuid(uint8_t A, uint8_t B);
    struct FString Conv_GuidToString(uint8_t InGuid);
};

// Class: Engine.KismetInputLibrary
class KismetInputLibrary : public BlueprintFunctionLibrary {
public:

public:
    bool PointerEvent_IsTouchEvent(uint8_t Input);
    bool PointerEvent_IsMouseButtonDown(uint8_t Input, uint8_t MouseButton);
    float PointerEvent_GetWheelDelta(uint8_t Input);
    int32_t PointerEvent_GetUserIndex(uint8_t Input);
    int32_t PointerEvent_GetTouchpadIndex(uint8_t Input);
    uint8_t PointerEvent_GetScreenSpacePosition(uint8_t Input);
    int32_t PointerEvent_GetPointerIndex(uint8_t Input);
    uint8_t PointerEvent_GetLastScreenSpacePosition(uint8_t Input);
    uint8_t PointerEvent_GetGestureDelta(uint8_t Input);
    uint8_t PointerEvent_GetEffectingButton(uint8_t Input);
    uint8_t PointerEvent_GetCursorDelta(uint8_t Input);
    bool Key_IsVectorAxis(uint8_t Key);
    bool Key_IsMouseButton(uint8_t Key);
    bool Key_IsModifierKey(uint8_t Key);
    bool Key_IsKeyboardKey(uint8_t Key);
    bool Key_IsGamepadKey(uint8_t Key);
    bool Key_IsFloatAxis(uint8_t Key);
    struct FText Key_GetDisplayName(uint8_t Key);
    bool InputEvent_IsShiftDown(uint8_t Input);
    bool InputEvent_IsRightShiftDown(uint8_t Input);
    bool InputEvent_IsRightControlDown(uint8_t Input);
    bool InputEvent_IsRightCommandDown(uint8_t Input);
    bool InputEvent_IsRightAltDown(uint8_t Input);
    bool InputEvent_IsRepeat(uint8_t Input);
    bool InputEvent_IsLeftShiftDown(uint8_t Input);
    bool InputEvent_IsLeftControlDown(uint8_t Input);
    bool InputEvent_IsLeftCommandDown(uint8_t Input);
    bool InputEvent_IsLeftAltDown(uint8_t Input);
    bool InputEvent_IsControlDown(uint8_t Input);
    bool InputEvent_IsCommandDown(uint8_t Input);
    bool InputEvent_IsAltDown(uint8_t Input);
    int32_t GetUserIndex(uint8_t Input);
    uint8_t GetKey(uint8_t Input);
    float GetAnalogValue(uint8_t Input);
    bool EqualEqual_KeyKey(uint8_t A, uint8_t B);
    int32_t ControllerEvent_GetUserIndex(uint8_t Input);
    uint8_t ControllerEvent_GetEffectingButton(uint8_t Input);
    float ControllerEvent_GetAnalogValue(uint8_t Input);
    void CalibrateTilt();
};

// Class: Engine.KismetInternationalizationLibrary
class KismetInternationalizationLibrary : public BlueprintFunctionLibrary {
public:

public:
    struct FString GetCurrentCulture();
};

// Class: Engine.KismetMaterialLibrary
class KismetMaterialLibrary : public BlueprintFunctionLibrary {
public:

public:
    void SetVectorParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName, uint8_t ParameterValue);
    void SetScalarParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName, float ParameterValue);
    uint8_t GetVectorParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName);
    float GetScalarParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName);
    class UObject* CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UObject* Parent);
};

// Class: Engine.KismetNodeHelperLibrary
class KismetNodeHelperLibrary : public BlueprintFunctionLibrary {
public:

public:
    void MarkBit(int32_t Data, int32_t Index);
    bool HasUnmarkedBit(int32_t Data, int32_t NumBits);
    bool HasMarkedBit(int32_t Data, int32_t NumBits);
    uint8_t GetValidValue(class UObject* Enum, uint8_t EnumeratorValue);
    int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom);
    int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
    int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
    uint8_t GetEnumeratorValueFromIndex(class UObject* Enum, uint8_t EnumeratorIndex);
    struct FString GetEnumeratorUserFriendlyName(class UObject* Enum, uint8_t EnumeratorValue);
    struct FName GetEnumeratorName(class UObject* Enum, uint8_t EnumeratorValue);
    void ClearBit(int32_t Data, int32_t Index);
    void ClearAllBits(int32_t Data);
    bool BitIsMarked(int32_t Data, int32_t Index);
};

// Class: Engine.KismetStringLibrary
class KismetStringLibrary : public BlueprintFunctionLibrary {
public:

public:
    struct FString TrimTrailing(struct FString SourceString);
    struct FString Trim(struct FString SourceString);
    struct FString ToUpper(struct FString SourceString);
    struct FString ToLower(struct FString SourceString);
    struct FString TimeSecondsToString(float InSeconds);
    bool StartsWith(struct FString SourceString, struct FString InPrefix, uint8_t SearchCase);
    bool Split(struct FString SourceString, struct FString InStr, struct FString LeftS, struct FString RightS, uint8_t SearchCase, uint8_t SearchDir);
    struct FString RightPad(struct FString SourceString, int32_t ChCount);
    struct FString RightChop(struct FString SourceString, int32_t Count);
    struct FString Right(struct FString SourceString, int32_t Count);
    struct FString Reverse(struct FString SourceString);
    int32_t ReplaceInline(struct FString SourceString, struct FString SearchText, struct FString ReplacementText, uint8_t SearchCase);
    struct FString Replace(struct FString SourceString, struct FString From, struct FString To, uint8_t SearchCase);
    struct TArray<uint8_t> ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings);
    bool NotEqual_StrStr(struct FString A, struct FString B);
    bool NotEqual_StriStri(struct FString A, struct FString B);
    struct FString Mid(struct FString SourceString, int32_t Start, int32_t Count);
    bool MatchesWildcard(struct FString SourceString, struct FString Wildcard, uint8_t SearchCase);
    int32_t Len(struct FString S);
    struct FString LeftPad(struct FString SourceString, int32_t ChCount);
    struct FString LeftChop(struct FString SourceString, int32_t Count);
    struct FString Left(struct FString SourceString, int32_t Count);
    struct FString JoinStringArray(struct TArray<uint8_t> SourceArray, struct FString Separator);
    bool IsNumeric(struct FString SourceString);
    struct FString GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length);
    int32_t GetCharacterAsNumber(struct FString SourceString, int32_t Index);
    struct TArray<uint8_t> GetCharacterArrayFromString(struct FString SourceString);
    int32_t FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition);
    bool EqualEqual_StrStr(struct FString A, struct FString B);
    bool EqualEqual_StriStri(struct FString A, struct FString B);
    bool EndsWith(struct FString SourceString, struct FString InSuffix, uint8_t SearchCase);
    int32_t CullArray(struct FString SourceString, struct TArray<uint8_t> InArray);
    struct FString Conv_VectorToString(uint8_t InVec);
    struct FString Conv_Vector2dToString(uint8_t InVec);
    struct FString Conv_TransformToString(uint8_t InTrans);
    struct FName Conv_StringToName(struct FString InString);
    int32_t Conv_StringToInt(struct FString InString);
    float Conv_StringToFloat(struct FString InString);
    struct FString Conv_RotatorToString(uint8_t InRot);
    struct FString Conv_ObjectToString(class UObject* InObj);
    struct FString Conv_NameToString(struct FName InName);
    struct FString Conv_IntToString(int32_t InInt);
    struct FString Conv_FloatToString(float InFloat);
    struct FString Conv_ColorToString(uint8_t InColor);
    struct FString Conv_ByteToString(uint8_t InByte);
    struct FString Conv_BoolToString(bool InBool);
    struct FString Conv_AssetPtrToString(uint8_t InObj);
    struct FString Concat_StrStr(struct FString A, struct FString B);
    struct FString BuildString_Vector2d(struct FString AppendTo, struct FString Prefix, uint8_t InVector2D, struct FString Suffix);
    struct FString BuildString_Vector(struct FString AppendTo, struct FString Prefix, uint8_t InVector, struct FString Suffix);
    struct FString BuildString_Rotator(struct FString AppendTo, struct FString Prefix, uint8_t InRot, struct FString Suffix);
    struct FString BuildString_Object(struct FString AppendTo, struct FString Prefix, class UObject* InObj, struct FString Suffix);
    struct FString BuildString_Name(struct FString AppendTo, struct FString Prefix, struct FName InName, struct FString Suffix);
    struct FString BuildString_Int(struct FString AppendTo, struct FString Prefix, int32_t InInt, struct FString Suffix);
    struct FString BuildString_Float(struct FString AppendTo, struct FString Prefix, float InFloat, struct FString Suffix);
    struct FString BuildString_Color(struct FString AppendTo, struct FString Prefix, uint8_t InColor, struct FString Suffix);
    struct FString BuildString_Bool(struct FString AppendTo, struct FString Prefix, bool InBool, struct FString Suffix);
};

// Class: Engine.CollisionProfile
class CollisionProfile : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> Profiles; // 0x0038 (0x0010)
    struct TArray<uint8_t> DefaultChannelResponses; // 0x0048 (0x0010)
    struct TArray<uint8_t> EditProfiles; // 0x0058 (0x0010)
    struct TArray<uint8_t> ProfileRedirects; // 0x0068 (0x0010)
    struct TArray<uint8_t> CollisionChannelRedirects; // 0x0078 (0x0010)
    int32_t CollisionChannelVersion; // 0x0088 (0x0004)
};

// Class: Engine.KismetSystemLibrary
class KismetSystemLibrary : public BlueprintFunctionLibrary {
public:

public:
    void StackTrace();
    bool SphereTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool SphereTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool SphereTraceSingle_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool SphereTraceSingle_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool SphereTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool SphereTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool SphereTraceMulti_PROFILE(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct FName ProfileName, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool SphereTraceMulti_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool SphereTraceMulti_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool SphereOverlapComponents_NEW(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool SphereOverlapComponents_DEPRECATED(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool SphereOverlapActors_NEW(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    bool SphereOverlapActors_DEPRECATED(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    void ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName);
    void ShowPlatformSpecificAchievementsScreen(class UObject* SpecificPlayer);
    void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen);
    void SetWindowTitle(struct FText Title);
    void SetVolumeButtonsHandledBySystem(bool bEnabled);
    void SetVectorPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetTransformPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetTextPropertyByName(class UObject* Object, struct FName PropertyName, struct FText Value);
    void SetSupressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
    void SetStructurePropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetStringPropertyByName(class UObject* Object, struct FName PropertyName, struct FString Value);
    void SetRotatorPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetObjectPropertyByName(class UObject* Object, struct FName PropertyName, class UObject* Value);
    void SetNamePropertyByName(class UObject* Object, struct FName PropertyName, struct FName Value);
    void SetLinearColorPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetIntPropertyByName(class UObject* Object, struct FName PropertyName, int32_t Value);
    void SetInterfacePropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetFloatPropertyByName(class UObject* Object, struct FName PropertyName, float Value);
    void SetCollisionProfileNameProperty(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetClassPropertyByName(class UObject* Object, struct FName PropertyName, class UClass* Value);
    void SetBytePropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetBoolPropertyByName(class UObject* Object, struct FName PropertyName, bool Value);
    void SetAssetPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void SetAssetClassPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value);
    void RetriggerableDelay(class UObject* WorldContextObject, float Duration, uint8_t LatentInfo);
    void ResetGamepadAssignmentToController(int32_t ControllerId);
    void ResetGamepadAssignments();
    void RegisterForRemoteNotifications();
    void QuitGame(class UObject* WorldContextObject, class UObject* SpecificPlayer, uint8_t QuitPreference);
    void PrintWarning(struct FString InString);
    void PrintText(class UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, uint8_t TextColor, float Duration);
    void PrintString(class UObject* WorldContextObject, struct FString InString, bool bPrintToScreen, bool bPrintToLog, uint8_t TextColor, float Duration);
    void OnAssetLoaded__DelegateSignature(class UObject* Loaded);
    void OnAssetClassLoaded__DelegateSignature(class UClass* Loaded);
    void MoveComponentTo(class UObject* Component, uint8_t TargetRelativeLocation, uint8_t TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, uint8_t MoveAction, uint8_t LatentInfo);
    struct FText MakeLiteralText(struct FText Value);
    struct FString MakeLiteralString(struct FString Value);
    struct FName MakeLiteralName(struct FName Value);
    int32_t MakeLiteralInt(int32_t Value);
    float MakeLiteralFloat(float Value);
    uint8_t MakeLiteralByte(uint8_t Value);
    bool MakeLiteralBool(bool Value);
    void LoadAssetClass(class UObject* WorldContextObject, uint8_t AssetClass, uint8_t OnLoaded, uint8_t LatentInfo);
    void LoadAsset(class UObject* WorldContextObject, uint8_t Asset, uint8_t OnLoaded, uint8_t LatentInfo);
    bool LineTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool LineTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool LineTraceSingle_PROFILE(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct FName ProfileName, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool LineTraceSingle_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool LineTraceSingle_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool LineTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool LineTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool LineTraceMulti_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool LineTraceMulti_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    void LaunchURL(struct FString URL);
    void K2_UnPauseTimerHandle(class UObject* WorldContextObject, uint8_t Handle);
    void K2_UnPauseTimerDelegate(uint8_t Delegate);
    void K2_UnPauseTimer(class UObject* Object, struct FString FunctionName);
    bool K2_TimerExistsHandle(class UObject* WorldContextObject, uint8_t Handle);
    bool K2_TimerExistsDelegate(uint8_t Delegate);
    bool K2_TimerExists(class UObject* Object, struct FString FunctionName);
    uint8_t K2_SetTimerDelegate(uint8_t Delegate, float Time, bool bLooping);
    uint8_t K2_SetTimer(class UObject* Object, struct FString FunctionName, float Time, bool bLooping);
    void K2_PauseTimerHandle(class UObject* WorldContextObject, uint8_t Handle);
    void K2_PauseTimerDelegate(uint8_t Delegate);
    void K2_PauseTimer(class UObject* Object, struct FString FunctionName);
    bool K2_IsValidTimerHandle(uint8_t Handle);
    bool K2_IsTimerPausedHandle(class UObject* WorldContextObject, uint8_t Handle);
    bool K2_IsTimerPausedDelegate(uint8_t Delegate);
    bool K2_IsTimerPaused(class UObject* Object, struct FString FunctionName);
    bool K2_IsTimerActiveHandle(class UObject* WorldContextObject, uint8_t Handle);
    bool K2_IsTimerActiveDelegate(uint8_t Delegate);
    bool K2_IsTimerActive(class UObject* Object, struct FString FunctionName);
    uint8_t K2_InvalidateTimerHandle(uint8_t Handle);
    float K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, uint8_t Handle);
    float K2_GetTimerRemainingTimeDelegate(uint8_t Delegate);
    float K2_GetTimerRemainingTime(class UObject* Object, struct FString FunctionName);
    float K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, uint8_t Handle);
    float K2_GetTimerElapsedTimeDelegate(uint8_t Delegate);
    float K2_GetTimerElapsedTime(class UObject* Object, struct FString FunctionName);
    void K2_ClearTimerHandle(class UObject* WorldContextObject, uint8_t Handle);
    void K2_ClearTimerDelegate(uint8_t Delegate);
    void K2_ClearTimer(class UObject* Object, struct FString FunctionName);
    bool IsValidReferencedLocation(uint8_t LocationReference);
    bool IsValidClass(class UClass* Class);
    bool IsValid(class UObject* Object);
    bool IsServer(class UObject* WorldContextObject);
    bool IsPackagedForDistribution();
    bool IsLoggedIn(class UObject* SpecificPlayer);
    bool IsDedicatedServer(class UObject* WorldContextObject);
    bool IsControllerAssignedToGamepad(int32_t ControllerId);
    void HideAdBanner();
    bool GetVolumeButtonsHandledBySystem();
    struct FString GetUniqueDeviceId();
    bool GetSupportedFullscreenResolutions(struct TArray<uint8_t> Resolutions);
    int32_t GetRenderingMaterialQualityLevel();
    int32_t GetRenderingDetailMode();
    uint8_t GetReferencedTransform(uint8_t LocationReference);
    uint8_t GetReferencedRotation(uint8_t LocationReference);
    uint8_t GetReferencedLocation(uint8_t LocationReference);
    struct TArray<uint8_t> GetPreferredLanguages();
    struct FString GetPlatformUserName();
    struct FString GetPathName(class UObject* Object);
    struct FString GetObjectName(class UObject* Object);
    struct FString GetLocalCurrencySymbol();
    struct FString GetLocalCurrencyCode();
    float GetGameTimeInSeconds(class UObject* WorldContextObject);
    struct FString GetGameName();
    struct FString GetEngineVersion();
    struct FString GetDisplayName(class UObject* Object);
    void GetComponentBounds(class UObject* Component, uint8_t Origin, uint8_t BoxExtent, float SphereRadius);
    struct FString GetClassDisplayName(class UClass* Class);
    int32_t GetAdIDCount();
    void GetActorListFromComponentList(struct TArray<uint8_t> ComponentList, class UClass* ActorClassFilter, struct TArray<uint8_t> OutActorList);
    void GetActorBounds(class UObject* Actor, uint8_t Origin, uint8_t BoxExtent);
    void ForceCloseAdBanner();
    void FlushPersistentDebugLines(class UObject* WorldContextObject);
    void FlushDebugStrings(class UObject* WorldContextObject);
    void ExecuteEditorConsoleCommand(class UObject* WorldContextObject, struct FString Command);
    void ExecuteConsoleCommand(class UObject* WorldContextObject, struct FString Command, class UObject* SpecificPlayer);
    void DrawDebugString(class UObject* WorldContextObject, uint8_t TextLocation, struct FString Text, class UObject* TestBaseActor, uint8_t TextColor, float Duration);
    void DrawDebugSphere(class UObject* WorldContextObject, uint8_t Center, float Radius, int32_t Segments, uint8_t LineColor, float Duration);
    void DrawDebugPoint(class UObject* WorldContextObject, uint8_t Position, float Size, uint8_t PointColor, float Duration);
    void DrawDebugPlane(class UObject* WorldContextObject, uint8_t PlaneCoordinates, uint8_t Location, float Size, uint8_t PlaneColor, float Duration);
    void DrawDebugLine(class UObject* WorldContextObject, uint8_t LineStart, uint8_t LineEnd, uint8_t LineColor, float Duration, float Thickness);
    void DrawDebugFrustum(class UObject* WorldContextObject, uint8_t FrustumTransform, uint8_t FrustumColor, float Duration);
    void DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, uint8_t FloatHistory, uint8_t DrawTransform, uint8_t DrawSize, uint8_t DrawColor, float Duration);
    void DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, uint8_t FloatHistory, uint8_t DrawLocation, uint8_t DrawSize, uint8_t DrawColor, float Duration);
    void DrawDebugCylinder(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, int32_t Segments, uint8_t LineColor, float Duration);
    void DrawDebugCoordinateSystem(class UObject* WorldContextObject, uint8_t AxisLoc, uint8_t AxisRot, float Scale, float Duration);
    void DrawDebugConeInDegrees(class UObject* WorldContextObject, uint8_t Origin, uint8_t Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, uint8_t LineColor, float Duration);
    void DrawDebugCone(class UObject* WorldContextObject, uint8_t Origin, uint8_t Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, uint8_t LineColor);
    void DrawDebugCircle(class UObject* WorldContextObject, uint8_t Center, float Radius, int32_t NumSegments, uint8_t LineColor, float Duration, float Thickness, uint8_t YAxis, uint8_t ZAxis, bool bDrawAxis);
    void DrawDebugCapsule(class UObject* WorldContextObject, uint8_t Center, float HalfHeight, float Radius, uint8_t Rotation, uint8_t LineColor, float Duration);
    void DrawDebugCamera(class UObject* CameraActor, uint8_t CameraColor, float Duration);
    void DrawDebugBox(class UObject* WorldContextObject, uint8_t Center, uint8_t Extent, uint8_t LineColor, uint8_t Rotation, float Duration);
    void DrawDebugArrow(class UObject* WorldContextObject, uint8_t LineStart, uint8_t LineEnd, float ArrowSize, uint8_t LineColor, float Duration);
    bool DoesImplementInterface(class UObject* TestObject, class UClass* Interface);
    void Delay(class UObject* WorldContextObject, float Duration, uint8_t LatentInfo);
    void CreateCopyForUndoBuffer(class UObject* ObjectToModify);
    class UObject* Conv_InterfaceToObject(uint8_t Interface);
    class UObject* Conv_AssetToObject(uint8_t Asset);
    class UClass* Conv_AssetClassToClass(uint8_t AssetClass);
    void ControlScreensaver(bool bAllowScreenSaver);
    bool ComponentOverlapComponents_NEW(class UObject* Component, uint8_t ComponentTransform, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool ComponentOverlapComponents_DEPRECATED(class UObject* Component, uint8_t ComponentTransform, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool ComponentOverlapActors_NEW(class UObject* Component, uint8_t ComponentTransform, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    bool ComponentOverlapActors_DEPRECATED(class UObject* Component, uint8_t ComponentTransform, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    void CollectGarbage();
    bool CapsuleTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool CapsuleTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool CapsuleTraceSingle_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool CapsuleTraceSingle_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool CapsuleTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool CapsuleTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool CapsuleTraceMulti_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool CapsuleTraceMulti_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool CapsuleOverlapComponents_NEW(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool CapsuleOverlapComponents_DEPRECATED(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool CapsuleOverlapActors_NEW(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    bool CapsuleOverlapActors_DEPRECATED(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    bool CanLaunchURL(struct FString URL);
    bool BoxTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool BoxTraceSingle(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf);
    bool BoxTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool BoxTraceMulti(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf);
    bool BoxOverlapComponents_NEW(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t Extent, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool BoxOverlapComponents_DEPRECATED(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t Extent, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents);
    bool BoxOverlapActors_NEW(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t BoxExtent, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    bool BoxOverlapActors_DEPRECATED(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t BoxExtent, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors);
    void BendSaveStringToFile(struct FString FilePath, struct FString FileName, struct FString InString, bool Append);
    struct FString BendLoadFileToString(struct FString FilePath, struct FString FileName);
    uint8_t AddFloatHistorySample(float Value, uint8_t FloatHistory);
};

// Class: Engine.KismetTextLibrary
class KismetTextLibrary : public BlueprintFunctionLibrary {
public:

public:
    struct FText TextTrimTrailing(struct FText InText);
    struct FText TextTrimPrecedingAndTrailing(struct FText InText);
    struct FText TextTrimPreceding(struct FText InText);
    struct FText TextToUpper(struct FText InText);
    struct FText TextToLower(struct FText InText);
    bool TextIsTransient(struct FText InText);
    bool TextIsEmpty(struct FText InText);
    bool TextIsCultureInvariant(struct FText InText);
    struct FString TextGetSourceString(struct FText InText);
    bool NotEqual_TextText(struct FText A, struct FText B);
    bool NotEqual_IgnoreCase_TextText(struct FText A, struct FText B);
    struct FText GetEmptyText();
    struct FText Format(struct FText InPattern, struct TArray<uint8_t> InArgs);
    bool FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText OutText);
    bool EqualEqual_TextText(struct FText A, struct FText B);
    bool EqualEqual_IgnoreCase_TextText(struct FText A, struct FText B);
    struct FText CreateTextInLocalizationTable(struct FString SourceString, struct FString Namespace, struct FString Key);
    struct FString Conv_TextToString(struct FText InText);
    struct FText Conv_StringToText(struct FString InString);
    struct FText Conv_NameToText(struct FName InName);
    struct FText Conv_IntToText(int32_t Value, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
    struct FText Conv_FloatToText(float Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
    struct FText Conv_ByteToText(uint8_t Value);
    struct FText Conv_BoolToText(bool InBool);
    struct FText AsTimespan_Timespan(uint8_t InTimespan);
    struct FText AsTime_DateTime(uint8_t In);
    struct FText AsPercent_Float(float Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
    struct FText AsDateTime_DateTime(uint8_t In);
    struct FText AsDate_DateTime(uint8_t InDateTime);
    struct FText AsCurrency_Integer(int32_t Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode);
    struct FText AsCurrency_Float(float Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode);
};

// Class: Engine.MeshVertexPainterKismetLibrary
class MeshVertexPainterKismetLibrary : public BlueprintFunctionLibrary {
public:

public:
    void RemovePaintedVertices(class UObject* StaticMeshComponent);
    void PaintVerticesSingleColor(class UObject* StaticMeshComponent, uint8_t FillColor, bool bConvertToSRGB);
    void PaintVerticesLerpAlongAxis(class UObject* StaticMeshComponent, uint8_t StartColor, uint8_t EndColor, uint8_t Axis, bool bConvertToSRGB);
};

// Class: Engine.VisualLoggerKismetLibrary
class VisualLoggerKismetLibrary : public BlueprintFunctionLibrary {
public:

public:
    void LogTextBend(class UObject* WorldContextObject, struct FString Text, struct FName LogCategory);
    void LogText(class UObject* WorldContextObject, struct FString Text, struct FName LogCategory);
    void LogLocation(class UObject* WorldContextObject, uint8_t Location, struct FString Text, uint8_t ObjectColor, float Radius, struct FName LogCategory);
    void LogBox(class UObject* WorldContextObject, uint8_t BoxShape, struct FString Text, uint8_t ObjectColor, struct FName LogCategory);
};

// Class: Engine.AnimBlueprintGeneratedClass
class AnimBlueprintGeneratedClass : public BlueprintGeneratedClass {
public:
    uint8_t Pad_0[0x268]; // 0x0028 (0x0268)
    struct TArray<uint8_t> BakedStateMachines; // 0x0290 (0x0010)
    class UObject* TargetSkeleton; // 0x02A0 (0x0008)
    struct TArray<uint8_t> AnimNotifies; // 0x02A8 (0x0010)
    int32_t RootAnimNodeIndex; // 0x02B8 (0x0004)
    uint8_t Pad_1[0x2C]; // 0x02BC (0x002C)
    struct TArray<uint8_t> SyncGroupNames; // 0x02E8 (0x0010)
    struct TArray<uint8_t> Anchors; // 0x02F8 (0x0010)
    struct TArray<uint8_t> CacheNames; // 0x0308 (0x0010)
    struct TArray<uint8_t> AnimGraphAddedCurves; // 0x0318 (0x0010)
    class UObject* FirstNonAnimNodePinProperty; // 0x0328 (0x0008)
    bool bHasPostPhysicsGraph; // 0x0330 (0x0001)
};

// Class: Engine.BodySetup2D
class BodySetup2D : public BodySetup {
public:
    uint8_t Pad_0[0x2B8]; // 0x0028 (0x02B8)
    uint8_t AggGeom2D[0x30]; // 0x02E0 (0x0030)
};

// Class: Engine.BoneMaskFilter
class BoneMaskFilter : public Object {
public:
    struct TArray<uint8_t> BlendPoses; // 0x0028 (0x0010)
};

// Class: Engine.BookMark
class BookMark : public Object {
public:
    uint8_t Location[0xC]; // 0x0028 (0x000C)
    uint8_t Rotation[0xC]; // 0x0034 (0x000C)
    struct TArray<uint8_t> HiddenLevels; // 0x0040 (0x0010)
    struct TArray<uint8_t> LoadedLevels; // 0x0050 (0x0010)
};

// Class: Engine.BookMark2D
class BookMark2D : public Object {
public:
    float Zoom2D; // 0x0028 (0x0004)
    uint8_t Location[0x8]; // 0x002C (0x0008)
};

// Class: Engine.Breakpoint
class Breakpoint : public Object {
public:
    bool bEnabled; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    class UObject* Node; // 0x0030 (0x0008)
    bool bStepOnce; // 0x0038 (0x0001)
    bool bStepOnce_WasPreviouslyDisabled; // 0x0038 (0x0001)
    bool bStepOnce_RemoveAfterHit; // 0x0038 (0x0001)
};

// Class: Engine.BrushBuilder
class BrushBuilder : public Object {
public:
    struct FString BitmapFilename; // 0x0028 (0x0010)
    struct FString ToolTip; // 0x0038 (0x0010)
    bool NotifyBadParams; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> Vertices; // 0x0050 (0x0010)
    struct TArray<uint8_t> Polys; // 0x0060 (0x0010)
    struct FName Layer; // 0x0070 (0x0008)
    bool MergeCoplanars; // 0x0078 (0x0001)
};

// Class: Engine.ButtonStyleAsset
class ButtonStyleAsset : public Object {
public:
    uint8_t ButtonStyle[0x2A8]; // 0x0028 (0x02A8)
};

// Class: Engine.CameraAnim
class CameraAnim : public Object {
public:
    class UObject* CameraInterpGroup; // 0x0028 (0x0008)
    float Animlength; // 0x0030 (0x0004)
    uint8_t BoundingBox[0x1C]; // 0x0034 (0x001C)
    bool bRelativeToInitialTransform; // 0x0050 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0051 (0x0003)
    float BaseFOV; // 0x0054 (0x0004)
    uint8_t Pad_1[0x8]; // 0x0058 (0x0008)
    uint8_t BasePostProcessSettings[0x960]; // 0x0060 (0x0960)
    float BasePostProcessBlendWeight; // 0x09C0 (0x0004)
};

// Class: Engine.CameraAnimInst
class CameraAnimInst : public Object {
public:
    class UObject* CamAnim; // 0x0028 (0x0008)
    class UObject* InterpGroupInst; // 0x0030 (0x0008)
    uint8_t Pad_0[0x1C]; // 0x0038 (0x001C)
    float PlayRate; // 0x0054 (0x0004)
    uint8_t Pad_1[0x10]; // 0x0058 (0x0010)
    class UObject* MoveTrack; // 0x0068 (0x0008)
    class UObject* MoveInst; // 0x0070 (0x0008)
    uint8_t PlaySpace; // 0x0078 (0x0001)

public:
    void Stop(bool bImmediate);
    void SetScale(float newDuration);
    void SetDuration(float newDuration);
};

// Class: Engine.CameraModifier_CameraShake
class CameraModifier_CameraShake : public CameraModifier {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    struct TArray<uint8_t> ActiveShakes; // 0x0048 (0x0010)
    float SplitScreenShakeScale; // 0x0058 (0x0004)
};

// Class: Engine.CameraModifier_CameraFocusActor
class CameraModifier_CameraFocusActor : public CameraModifier {
public:

public:
    void SetPostProcessSettingsDefault(uint8_t PostProcessSettings);
    void SetFStop(float FStopIn);
    void SetFOV(float FOVIn);
    void RemoveFocusActor(class UObject* SkelMesh);
    void ClearFocusActors();
    void AddFocusActor(class UObject* SkelMesh, struct FName BoneName);
};

// Class: Engine.Engine
class Engine : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* TinyFont; // 0x0030 (0x0008)
    uint8_t TinyFontName[0x10]; // 0x0038 (0x0010)
    class UObject* SmallFont; // 0x0048 (0x0008)
    uint8_t SmallFontName[0x10]; // 0x0050 (0x0010)
    class UObject* MediumFont; // 0x0060 (0x0008)
    uint8_t MediumFontName[0x10]; // 0x0068 (0x0010)
    class UObject* LargeFont; // 0x0078 (0x0008)
    uint8_t LargeFontName[0x10]; // 0x0080 (0x0010)
    class UObject* SubtitleFont; // 0x0090 (0x0008)
    uint8_t SubtitleFontName[0x10]; // 0x0098 (0x0010)
    struct TArray<uint8_t> AdditionalFonts; // 0x00A8 (0x0010)
    uint8_t Pad_1[0x8]; // 0x00B8 (0x0008)
    struct TArray<uint8_t> AdditionalFontNames; // 0x00C0 (0x0010)
    class UClass* ConsoleClass; // 0x00D0 (0x0008)
    uint8_t ConsoleClassName[0x10]; // 0x00D8 (0x0010)
    class UClass* GameViewportClientClass; // 0x00E8 (0x0008)
    uint8_t GameViewportClientClassName[0x10]; // 0x00F0 (0x0010)
    class UClass* LocalPlayerClass; // 0x0100 (0x0008)
    uint8_t LocalPlayerClassName[0x10]; // 0x0108 (0x0010)
    class UClass* WorldSettingsClass; // 0x0118 (0x0008)
    uint8_t WorldSettingsClassName[0x10]; // 0x0120 (0x0010)
    uint8_t NavigationSystemClassName[0x10]; // 0x0130 (0x0010)
    uint8_t CoverSystemClassName[0x10]; // 0x0140 (0x0010)
    class UClass* NavigationSystemClass; // 0x0150 (0x0008)
    class UClass* CoverSystemClass; // 0x0158 (0x0008)
    uint8_t AvoidanceManagerClassName[0x10]; // 0x0160 (0x0010)
    class UClass* AvoidanceManagerClass; // 0x0170 (0x0008)
    class UClass* PhysicsCollisionHandlerClass; // 0x0178 (0x0008)
    uint8_t PhysicsCollisionHandlerClassName[0x10]; // 0x0180 (0x0010)
    uint8_t GameUserSettingsClassName[0x10]; // 0x0190 (0x0010)
    class UClass* GameUserSettingsClass; // 0x01A0 (0x0008)
    uint8_t AIControllerClassName[0x10]; // 0x01A8 (0x0010)
    class UObject* GameUserSettings; // 0x01B8 (0x0008)
    class UClass* LevelScriptActorClass; // 0x01C0 (0x0008)
    uint8_t LevelScriptActorClassName[0x10]; // 0x01C8 (0x0010)
    uint8_t DefaultBlueprintBaseClassName[0x10]; // 0x01D8 (0x0010)
    uint8_t GameSingletonClassName[0x10]; // 0x01E8 (0x0010)
    class UObject* GameSingleton; // 0x01F8 (0x0008)
    class UObject* DefaultTireType; // 0x0200 (0x0008)
    uint8_t DefaultTireTypeName[0x10]; // 0x0208 (0x0010)
    class UClass* DefaultPreviewPawnClass; // 0x0218 (0x0008)
    uint8_t DefaultPreviewPawnClassName[0x10]; // 0x0220 (0x0010)
    struct FString PlayOnConsoleSaveDir; // 0x0230 (0x0010)
    class UObject* DefaultTexture; // 0x0240 (0x0008)
    uint8_t DefaultTextureName[0x10]; // 0x0248 (0x0010)
    class UObject* DefaultDiffuseTexture; // 0x0258 (0x0008)
    uint8_t DefaultDiffuseTextureName[0x10]; // 0x0260 (0x0010)
    class UObject* DefaultBSPVertexTexture; // 0x0270 (0x0008)
    uint8_t DefaultBSPVertexTextureName[0x10]; // 0x0278 (0x0010)
    class UObject* HighFrequencyNoiseTexture; // 0x0288 (0x0008)
    uint8_t HighFrequencyNoiseTextureName[0x10]; // 0x0290 (0x0010)
    class UObject* DefaultBokehTexture; // 0x02A0 (0x0008)
    uint8_t DefaultBokehTextureName[0x10]; // 0x02A8 (0x0010)
    class UObject* WireframeMaterial; // 0x02B8 (0x0008)
    struct FString WireframeMaterialName; // 0x02C0 (0x0010)
    class UObject* DebugMeshMaterial; // 0x02D0 (0x0008)
    uint8_t DebugMeshMaterialName[0x10]; // 0x02D8 (0x0010)
    class UObject* LevelColorationLitMaterial; // 0x02E8 (0x0008)
    struct FString LevelColorationLitMaterialName; // 0x02F0 (0x0010)
    class UObject* LevelColorationUnlitMaterial; // 0x0300 (0x0008)
    struct FString LevelColorationUnlitMaterialName; // 0x0308 (0x0010)
    class UObject* LightingTexelDensityMaterial; // 0x0318 (0x0008)
    struct FString LightingTexelDensityName; // 0x0320 (0x0010)
    class UObject* ShadedLevelColorationLitMaterial; // 0x0330 (0x0008)
    struct FString ShadedLevelColorationLitMaterialName; // 0x0338 (0x0010)
    class UObject* ShadedLevelColorationUnlitMaterial; // 0x0348 (0x0008)
    struct FString ShadedLevelColorationUnlitMaterialName; // 0x0350 (0x0010)
    uint8_t Pad_2[0x18]; // 0x0360 (0x0018)
    class UObject* RemoveSurfaceMaterial; // 0x0378 (0x0008)
    uint8_t RemoveSurfaceMaterialName[0x10]; // 0x0380 (0x0010)
    class UObject* VertexColorMaterial; // 0x0390 (0x0008)
    struct FString VertexColorMaterialName; // 0x0398 (0x0010)
    class UObject* VertexColorViewModeMaterial_ColorOnly; // 0x03A8 (0x0008)
    struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x03B0 (0x0010)
    class UObject* VertexColorViewModeMaterial_AlphaAsColor; // 0x03C0 (0x0008)
    struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x03C8 (0x0010)
    class UObject* VertexColorViewModeMaterial_RedOnly; // 0x03D8 (0x0008)
    struct FString VertexColorViewModeMaterialName_RedOnly; // 0x03E0 (0x0010)
    class UObject* VertexColorViewModeMaterial_GreenOnly; // 0x03F0 (0x0008)
    struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x03F8 (0x0010)
    class UObject* VertexColorViewModeMaterial_BlueOnly; // 0x0408 (0x0008)
    struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x0410 (0x0010)
    class UObject* ConstraintLimitMaterial; // 0x0420 (0x0008)
    class UObject* ConstraintLimitMaterialX; // 0x0428 (0x0008)
    class UObject* ConstraintLimitMaterialY; // 0x0430 (0x0008)
    class UObject* ConstraintLimitMaterialZ; // 0x0438 (0x0008)
    class UObject* ConstraintLimitMaterialPrismatic; // 0x0440 (0x0008)
    uint8_t ConstraintLimitMaterialName[0x10]; // 0x0448 (0x0010)
    class UObject* InvalidLightmapSettingsMaterial; // 0x0458 (0x0008)
    uint8_t InvalidLightmapSettingsMaterialName[0x10]; // 0x0460 (0x0010)
    class UObject* PreviewShadowsIndicatorMaterial; // 0x0470 (0x0008)
    uint8_t PreviewShadowsIndicatorMaterialName[0x10]; // 0x0478 (0x0010)
    class UObject* ArrowMaterial; // 0x0488 (0x0008)
    uint8_t ArrowMaterialName[0x10]; // 0x0490 (0x0010)
    uint8_t LightingOnlyBrightness[0x10]; // 0x04A0 (0x0010)
    struct TArray<uint8_t> ShaderComplexityColors; // 0x04B0 (0x0010)
    struct TArray<uint8_t> QuadComplexityColors; // 0x04C0 (0x0010)
    struct TArray<uint8_t> LightComplexityColors; // 0x04D0 (0x0010)
    struct TArray<uint8_t> StationaryLightOverlapColors; // 0x04E0 (0x0010)
    struct TArray<uint8_t> LODColorationColors; // 0x04F0 (0x0010)
    struct TArray<uint8_t> HLODColorationColors; // 0x0500 (0x0010)
    struct TArray<uint8_t> StreamingAccuracyColors; // 0x0510 (0x0010)
    float MaxPixelShaderAdditiveComplexityCount; // 0x0520 (0x0004)
    float MaxES2PixelShaderAdditiveComplexityCount; // 0x0524 (0x0004)
    float MinLightMapDensity; // 0x0528 (0x0004)
    float IdealLightMapDensity; // 0x052C (0x0004)
    float MaxLightMapDensity; // 0x0530 (0x0004)
    bool bRenderLightMapDensityGrayscale; // 0x0534 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0535 (0x0003)
    float RenderLightMapDensityGrayscaleScale; // 0x0538 (0x0004)
    float RenderLightMapDensityColorScale; // 0x053C (0x0004)
    uint8_t LightMapDensityVertexMappedColor[0x10]; // 0x0540 (0x0010)
    uint8_t LightMapDensitySelectedColor[0x10]; // 0x0550 (0x0010)
    struct TArray<uint8_t> StatColorMappings; // 0x0560 (0x0010)
    class UObject* DefaultPhysMaterial; // 0x0570 (0x0008)
    uint8_t DefaultPhysMaterialName[0x10]; // 0x0578 (0x0010)
    struct TArray<uint8_t> ActiveGameNameRedirects; // 0x0588 (0x0010)
    struct TArray<uint8_t> ActiveClassRedirects; // 0x0598 (0x0010)
    struct TArray<uint8_t> ActivePluginRedirects; // 0x05A8 (0x0010)
    struct TArray<uint8_t> ActiveStructRedirects; // 0x05B8 (0x0010)
    class UObject* PreIntegratedSkinBRDFTexture; // 0x05C8 (0x0008)
    uint8_t PreIntegratedSkinBRDFTextureName[0x10]; // 0x05D0 (0x0010)
    class UObject* BendSMAAAreaTexture; // 0x05E0 (0x0008)
    uint8_t BendSMAAAreaTextureName[0x10]; // 0x05E8 (0x0010)
    class UObject* BendSMAASearchTexture; // 0x05F8 (0x0008)
    uint8_t BendSMAASearchTextureName[0x10]; // 0x0600 (0x0010)
    struct TArray<uint8_t> BendDefaultImposterMaterials; // 0x0610 (0x0010)
    class UObject* MiniFontTexture; // 0x0620 (0x0008)
    uint8_t MiniFontTextureName[0x10]; // 0x0628 (0x0010)
    class UObject* WeightMapPlaceholderTexture; // 0x0638 (0x0008)
    uint8_t WeightMapPlaceholderTextureName[0x10]; // 0x0640 (0x0010)
    class UObject* LightMapDensityTexture; // 0x0650 (0x0008)
    uint8_t LightMapDensityTextureName[0x10]; // 0x0658 (0x0010)
    uint8_t Pad_4[0x8]; // 0x0668 (0x0008)
    class UObject* GameViewport; // 0x0670 (0x0008)
    struct TArray<uint8_t> DeferredCommands; // 0x0678 (0x0010)
    int32_t TickCycles; // 0x0688 (0x0004)
    int32_t GameCycles; // 0x068C (0x0004)
    int32_t ClientCycles; // 0x0690 (0x0004)
    float NearClipPlane; // 0x0694 (0x0004)
    bool bHardwareSurveyEnabled; // 0x0698 (0x0001)
    bool bSubtitlesEnabled; // 0x0698 (0x0001)
    bool bSubtitlesForcedOff; // 0x0698 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0699 (0x0003)
    int32_t MaximumLoopIterationCount; // 0x069C (0x0004)
    bool bCanBlueprintsTickByDefault; // 0x06A0 (0x0001)
    bool bOptimizeAnimBlueprintMemberVariableAccess; // 0x06A0 (0x0001)
    bool bEnableEditorPSysRealtimeLOD; // 0x06A0 (0x0001)
    bool bSmoothFrameRate; // 0x06A0 (0x0001)
    bool bUseFixedFrameRate; // 0x06A0 (0x0001)
    uint8_t Pad_6[0x3]; // 0x06A1 (0x0003)
    float FixedFrameRate; // 0x06A4 (0x0004)
    uint8_t SmoothedFrameRateRange[0x10]; // 0x06A8 (0x0010)
    bool bCheckForMultiplePawnsSpawnedInAFrame; // 0x06B8 (0x0001)
    uint8_t Pad_7[0x3]; // 0x06B9 (0x0003)
    int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x06BC (0x0004)
    bool bShouldGenerateLowQualityLightmaps; // 0x06C0 (0x0001)
    uint8_t Pad_8[0x3]; // 0x06C1 (0x0003)
    uint8_t C_WorldBox[0x4]; // 0x06C4 (0x0004)
    uint8_t C_BrushWire[0x4]; // 0x06C8 (0x0004)
    uint8_t C_AddWire[0x4]; // 0x06CC (0x0004)
    uint8_t C_SubtractWire[0x4]; // 0x06D0 (0x0004)
    uint8_t C_SemiSolidWire[0x4]; // 0x06D4 (0x0004)
    uint8_t C_NonSolidWire[0x4]; // 0x06D8 (0x0004)
    uint8_t C_WireBackground[0x4]; // 0x06DC (0x0004)
    uint8_t C_ScaleBoxHi[0x4]; // 0x06E0 (0x0004)
    uint8_t C_VolumeCollision[0x4]; // 0x06E4 (0x0004)
    uint8_t C_BSPCollision[0x4]; // 0x06E8 (0x0004)
    uint8_t C_OrthoBackground[0x4]; // 0x06EC (0x0004)
    uint8_t C_Volume[0x4]; // 0x06F0 (0x0004)
    uint8_t C_BrushShape[0x4]; // 0x06F4 (0x0004)
    float StreamingDistanceFactor; // 0x06F8 (0x0004)
    uint8_t TransitionType; // 0x06FC (0x0001)
    uint8_t Pad_9[0x3]; // 0x06FD (0x0003)
    struct FString TransitionDescription; // 0x0700 (0x0010)
    struct FString TransitionGameMode; // 0x0710 (0x0010)
    float MeshLODRange; // 0x0720 (0x0004)
    bool bAllowMatureLanguage; // 0x0724 (0x0001)
    uint8_t Pad_10[0x3]; // 0x0725 (0x0003)
    float CameraRotationThreshold; // 0x0728 (0x0004)
    float CameraTranslationThreshold; // 0x072C (0x0004)
    float PrimitiveProbablyVisibleTime; // 0x0730 (0x0004)
    float MaxOcclusionPixelsFraction; // 0x0734 (0x0004)
    bool bPauseOnLossOfFocus; // 0x0738 (0x0001)
    uint8_t Pad_11[0x3]; // 0x0739 (0x0003)
    int32_t MaxParticleResize; // 0x073C (0x0004)
    int32_t MaxParticleResizeWarn; // 0x0740 (0x0004)
    uint8_t Pad_12[0x4]; // 0x0744 (0x0004)
    struct TArray<uint8_t> PendingDroppedNotes; // 0x0748 (0x0010)
    uint8_t PhysicErrorCorrection[0x1C]; // 0x0758 (0x001C)
    float NetClientTicksPerSecond; // 0x0774 (0x0004)
    bool bHasPendingGlobalReregister; // 0x0778 (0x0001)
    uint8_t Pad_13[0x3]; // 0x0779 (0x0003)
    float DisplayGamma; // 0x077C (0x0004)
    float MinDesiredFrameRate; // 0x0780 (0x0004)
    uint8_t DefaultSelectedMaterialColor[0x10]; // 0x0784 (0x0010)
    uint8_t SelectedMaterialColor[0x10]; // 0x0794 (0x0010)
    uint8_t SelectionOutlineColor[0x10]; // 0x07A4 (0x0010)
    uint8_t SubduedSelectionOutlineColor[0x10]; // 0x07B4 (0x0010)
    uint8_t SelectedMaterialColorOverride[0x10]; // 0x07C4 (0x0010)
    bool bIsOverridingSelectedColor; // 0x07D4 (0x0001)
    uint8_t Pad_14[0x3]; // 0x07D5 (0x0003)
    bool bEnableOnScreenDebugMessages; // 0x07D8 (0x0001)
    bool bEnableOnScreenDebugMessagesDisplay; // 0x07D8 (0x0001)
    bool bSuppressMapWarnings; // 0x07D8 (0x0001)
    bool bCookSeparateSharedMPGameContent; // 0x07D8 (0x0001)
    bool bDisableAILogging; // 0x07D8 (0x0001)
    uint8_t Pad_15[0x3]; // 0x07D9 (0x0003)
    uint8_t bEnableVisualLogRecordingOnStart[0x4]; // 0x07DC (0x0004)
    uint8_t Pad_16[0x4]; // 0x07E0 (0x0004)
    int32_t ScreenSaverInhibitorSemaphore; // 0x07E4 (0x0004)
    bool bLockReadOnlyLevels; // 0x07E8 (0x0001)
    uint8_t Pad_17[0x7]; // 0x07E9 (0x0007)
    struct FString ParticleEventManagerClassPath; // 0x07F0 (0x0010)
    uint8_t Pad_18[0x10]; // 0x0800 (0x0010)
    float SelectionHighlightIntensity; // 0x0810 (0x0004)
    float BSPSelectionHighlightIntensity; // 0x0814 (0x0004)
    float HoverHighlightIntensity; // 0x0818 (0x0004)
    float SelectionHighlightIntensityBillboards; // 0x081C (0x0004)
    uint8_t Pad_19[0x358]; // 0x0820 (0x0358)
    struct TArray<uint8_t> NetDriverDefinitions; // 0x0B78 (0x0010)
    struct TArray<uint8_t> ServerActors; // 0x0B88 (0x0010)
    struct TArray<uint8_t> RuntimeServerActors; // 0x0B98 (0x0010)
    bool bStartedLoadMapMovie; // 0x0BA8 (0x0001)
    uint8_t Pad_20[0x17]; // 0x0BA9 (0x0017)
    int32_t NextWorldContextHandle; // 0x0BC0 (0x0004)
};

// Class: Engine.Canvas
class Canvas : public Object {
public:
    float OrgX; // 0x0028 (0x0004)
    float OrgY; // 0x002C (0x0004)
    float ClipX; // 0x0030 (0x0004)
    float ClipY; // 0x0034 (0x0004)
    uint8_t DrawColor[0x4]; // 0x0038 (0x0004)
    bool bCenterX; // 0x003C (0x0001)
    bool bCenterY; // 0x003C (0x0001)
    bool bNoSmooth; // 0x003C (0x0001)
    uint8_t Pad_0[0x3]; // 0x003D (0x0003)
    int32_t SizeX; // 0x0040 (0x0004)
    int32_t SizeY; // 0x0044 (0x0004)
    uint8_t Pad_1[0x8]; // 0x0048 (0x0008)
    uint8_t ColorModulate[0x10]; // 0x0050 (0x0010)
    class UObject* DefaultTexture; // 0x0060 (0x0008)
    class UObject* GradientTexture0; // 0x0068 (0x0008)
    class UObject* ReporterGraph; // 0x0070 (0x0008)

public:
    uint8_t K2_TextSize(class UObject* RenderFont, struct FString RenderText, uint8_t Scale);
    uint8_t K2_StrLen(class UObject* RenderFont, struct FString RenderText);
    uint8_t K2_Project(uint8_t WorldLocation);
    void K2_DrawTriangle(class UObject* RenderTexture, struct TArray<uint8_t> Triangles);
    void K2_DrawTexture(class UObject* RenderTexture, uint8_t ScreenPosition, uint8_t ScreenSize, uint8_t CoordinatePosition, uint8_t CoordinateSize, uint8_t RenderColor, uint8_t BlendMode, float Rotation, uint8_t PivotPoint);
    void K2_DrawText(class UObject* RenderFont, struct FString RenderText, uint8_t ScreenPosition, uint8_t RenderColor, float Kerning, uint8_t ShadowColor, uint8_t ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, uint8_t OutlineColor);
    void K2_DrawPolygon(class UObject* RenderTexture, uint8_t ScreenPosition, uint8_t Radius, int32_t NumberOfSides, uint8_t RenderColor);
    void K2_DrawMaterialTriangle(class UObject* RenderMaterial, struct TArray<uint8_t> Triangles);
    void K2_DrawMaterial(class UObject* RenderMaterial, uint8_t ScreenPosition, uint8_t ScreenSize, uint8_t CoordinatePosition, uint8_t CoordinateSize, float Rotation, uint8_t PivotPoint);
    void K2_DrawLine(uint8_t ScreenPositionA, uint8_t ScreenPositionB, float Thickness, uint8_t RenderColor);
    void K2_DrawBox(uint8_t ScreenPosition, uint8_t ScreenSize, float Thickness);
    void K2_DrawBorder(class UObject* BorderTexture, class UObject* BackgroundTexture, class UObject* LeftBorderTexture, class UObject* RightBorderTexture, class UObject* TopBorderTexture, class UObject* BottomBorderTexture, uint8_t ScreenPosition, uint8_t ScreenSize, uint8_t CoordinatePosition, uint8_t CoordinateSize, uint8_t RenderColor, uint8_t BorderScale, uint8_t BackgroundScale, float Rotation, uint8_t PivotPoint, uint8_t CornerSize);
    void K2_Deproject(uint8_t ScreenPosition, uint8_t WorldOrigin, uint8_t WorldDirection);
};

// Class: Engine.Channel
class Channel : public Object {
public:
    class UObject* Connection; // 0x0028 (0x0008)
};

// Class: Engine.ActorChannel
class ActorChannel : public Channel {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    class UObject* Actor; // 0x0068 (0x0008)
};

// Class: Engine.ControlChannel
class ControlChannel : public Channel {
public:
};

// Class: Engine.VoiceChannel
class VoiceChannel : public Channel {
public:
};

// Class: Engine.CheckBoxStyleAsset
class CheckBoxStyleAsset : public Object {
public:
    uint8_t CheckBoxStyle[0x5E0]; // 0x0028 (0x05E0)
};

// Class: Engine.Commandlet
class Commandlet : public Object {
public:
    struct FString HelpDescription; // 0x0028 (0x0010)
    struct FString HelpUsage; // 0x0038 (0x0010)
    struct FString HelpWebLink; // 0x0048 (0x0010)
    struct TArray<uint8_t> HelpParamNames; // 0x0058 (0x0010)
    struct TArray<uint8_t> HelpParamDescriptions; // 0x0068 (0x0010)
    bool IsServer; // 0x0078 (0x0001)
    bool IsClient; // 0x0078 (0x0001)
    bool IsEditor; // 0x0078 (0x0001)
    bool LogToConsole; // 0x0078 (0x0001)
    bool ShowErrorCount; // 0x0078 (0x0001)
};

// Class: Engine.PluginCommandlet
class PluginCommandlet : public Commandlet {
public:
};

// Class: Engine.SmokeTestCommandlet
class SmokeTestCommandlet : public Commandlet {
public:
};

// Class: Engine.ScriptViewportClient
class ScriptViewportClient : public Object {
public:
};

// Class: Engine.GameViewportClient
class GameViewportClient : public ScriptViewportClient {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    class UObject* ViewportConsole; // 0x0038 (0x0008)
    struct TArray<uint8_t> DebugProperties; // 0x0040 (0x0010)
    uint8_t Pad_1[0x30]; // 0x0050 (0x0030)
    class UObject* World; // 0x0080 (0x0008)
    class UObject* GameInstance; // 0x0088 (0x0008)

public:
    void SSSwapControllers();
    void ShowTitleSafeArea();
    void SetConsoleTarget(int32_t PlayerIndex);
};

// Class: Engine.Console
class Console : public Object {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    class UObject* ConsoleTargetPlayer; // 0x0038 (0x0008)
    class UObject* DefaultTexture_Black; // 0x0040 (0x0008)
    class UObject* DefaultTexture_White; // 0x0048 (0x0008)
    uint8_t Pad_1[0x18]; // 0x0050 (0x0018)
    struct TArray<uint8_t> HistoryBuffer; // 0x0068 (0x0010)
};

// Class: Engine.CurveLinearColor
class CurveLinearColor : public CurveBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t FloatCurves[0x78]; // 0x0030 (0x0078)

public:
    uint8_t GetLinearColorValue(float InTime);
};

// Class: Engine.CurveVector
class CurveVector : public CurveBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t FloatCurves[0x78]; // 0x0030 (0x0078)

public:
    uint8_t GetVectorValue(float InTime);
};

// Class: Engine.CurveEdPresetCurve
class CurveEdPresetCurve : public Object {
public:
};

// Class: Engine.CurveTable
class CurveTable : public Object {
public:
};

// Class: Engine.SoundConcurrency
class SoundConcurrency : public Object {
public:
    uint8_t Concurrency[0x10]; // 0x0028 (0x0010)
};

// Class: Engine.SoundBase
class SoundBase : public Object {
public:
    bool IgnoreOcclusion; // 0x0028 (0x0001)
    bool PlayOnControllerSpeaker; // 0x0028 (0x0001)
    bool Play2D; // 0x0028 (0x0001)
    bool StartInPausedState; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    class UObject* SoundClassObject; // 0x0030 (0x0008)
    bool bDebug; // 0x0038 (0x0001)
    bool bOverrideConcurrency; // 0x0038 (0x0001)
    bool bIgnoreFocus; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    class UObject* SoundConcurrencySettings; // 0x0040 (0x0008)
    uint8_t ConcurrencyOverrides[0x10]; // 0x0048 (0x0010)
    uint8_t MaxConcurrentResolutionRule; // 0x0058 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0059 (0x0003)
    int32_t MaxConcurrentPlayCount; // 0x005C (0x0004)
    float Duration; // 0x0060 (0x0004)
    uint8_t Pad_3[0x4]; // 0x0064 (0x0004)
    class UObject* AttenuationSettings; // 0x0068 (0x0008)
    float Priority; // 0x0070 (0x0004)
};

// Class: Engine.SoundCue
class SoundCue : public SoundBase {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    uint8_t HapticsConfiguration[0x18]; // 0x0078 (0x0018)
    bool bOverrideAttenuation; // 0x0090 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0091 (0x0007)
    class UObject* FirstNode; // 0x0098 (0x0008)
    float VolumeMultiplier; // 0x00A0 (0x0004)
    float PitchMultiplier; // 0x00A4 (0x0004)
    uint8_t AttenuationOverrides[0xF8]; // 0x00A8 (0x00F8)
};

// Class: Engine.BendDestructionData
class BendDestructionData : public DataAsset {
public:
    struct TArray<uint8_t> DestructionFXData; // 0x0028 (0x0010)
};

// Class: Engine.BendLensFlareComponent
class BendLensFlareComponent : public DataAsset {
public:
    float IntensityCutoff; // 0x0028 (0x0004)
    float BrightnessScale; // 0x002C (0x0004)
    float MaxBrightness; // 0x0030 (0x0004)
    float OffscreenCutoff; // 0x0034 (0x0004)
    float OcclusionFadeRate; // 0x0038 (0x0004)
    uint8_t Pad_0[0x4]; // 0x003C (0x0004)
    struct TArray<uint8_t> Sections; // 0x0040 (0x0010)
};

// Class: Engine.BendMeshMaterialParameterVariationData
class BendMeshMaterialParameterVariationData : public DataAsset {
public:
    struct TArray<uint8_t> ParameterNames; // 0x0028 (0x0010)
};

// Class: Engine.BendMeshMaterialVariationData
class BendMeshMaterialVariationData : public DataAsset {
public:
    struct TArray<uint8_t> VariationExtraData; // 0x0028 (0x0010)
    struct TArray<uint8_t> Variations; // 0x0038 (0x0010)
};

// Class: Engine.BendStaticMeshImposter
class BendStaticMeshImposter : public DataAsset {
public:
    uint8_t EncodedBaseColor[0x10]; // 0x0028 (0x0010)
    uint8_t EncodedNormal[0x10]; // 0x0038 (0x0010)
    uint8_t EncodedMaterialAO[0x10]; // 0x0048 (0x0010)
    uint8_t EncodedRoughness[0x10]; // 0x0058 (0x0010)
    uint8_t EncodedDepth[0x10]; // 0x0068 (0x0010)
    uint8_t EncodedOpacity[0x10]; // 0x0078 (0x0010)
    uint8_t EncodedMetallic[0x10]; // 0x0088 (0x0010)
    uint8_t EncodedSpecular[0x10]; // 0x0098 (0x0010)
    uint8_t EncodedLayout[0x10]; // 0x00A8 (0x0010)
    uint8_t AlphaLayout[0x10]; // 0x00B8 (0x0010)
    uint8_t Polygon[0x90]; // 0x00C8 (0x0090)
    class UObject* EncodedTexture; // 0x0158 (0x0008)
    class UObject* AlphaMask; // 0x0160 (0x0008)
    bool GeneratedFromHighestLod; // 0x0168 (0x0001)
    bool GeneratedUsingDistanceFieldAlpha; // 0x0169 (0x0001)
    uint8_t FoliageMaterialType; // 0x016A (0x0001)
    uint8_t Pad_0[0x1]; // 0x016B (0x0001)
    float SoftAlphaBlend; // 0x016C (0x0004)
    bool FoliageMaterialTypeHasBeenAutomaticallySet; // 0x0170 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0171 (0x0007)
    class UObject* MaterialOverride; // 0x0178 (0x0008)
};

// Class: Engine.TireType
class TireType : public DataAsset {
public:
    float FrictionScale; // 0x0028 (0x0004)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    float TopSpeed; // 0x0030 (0x0004)
    bool bNewTireVersion; // 0x0034 (0x0001)

public:
    float GetTopSpeed();
    float GetFrictionScale();
};

// Class: Engine.DestructibleFractureSettings
class DestructibleFractureSettings : public Object {
public:
    int32_t CellSiteCount; // 0x0028 (0x0004)
    uint8_t FractureMaterialDesc[0x24]; // 0x002C (0x0024)
    int32_t RandomSeed; // 0x0050 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0054 (0x0004)
    struct TArray<uint8_t> VoronoiSites; // 0x0058 (0x0010)
    int32_t OriginalSubmeshCount; // 0x0068 (0x0004)
    uint8_t Pad_1[0x4]; // 0x006C (0x0004)
    struct TArray<uint8_t> Materials; // 0x0070 (0x0010)
    struct TArray<uint8_t> ChunkParameters; // 0x0080 (0x0010)
};

// Class: Engine.AnimationSettings
class AnimationSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    int32_t CompressCommandletVersion; // 0x0038 (0x0004)
    bool bCompressCommandletResample; // 0x003C (0x0001)
    uint8_t Pad_1[0x3]; // 0x003D (0x0003)
    int32_t CompressCommandletResampleFramerate; // 0x0040 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0044 (0x0004)
    struct TArray<uint8_t> KeyEndEffectorsMatchNameArray; // 0x0048 (0x0010)
    class UClass* DefaultCompressionAlgorithm; // 0x0058 (0x0008)
    uint8_t RotationCompressionFormat; // 0x0060 (0x0001)
    uint8_t TranslationCompressionFormat; // 0x0061 (0x0001)
    uint8_t Pad_3[0x2]; // 0x0062 (0x0002)
    float AlternativeCompressionThreshold; // 0x0064 (0x0004)
    bool ForceRecompression; // 0x0068 (0x0001)
    bool bOnlyCheckForMissingSkeletalMeshes; // 0x0069 (0x0001)
    bool bForceBelowThreshold; // 0x006A (0x0001)
    bool bFirstRecompressUsingCurrentOrDefault; // 0x006B (0x0001)
    bool bRaiseMaxErrorToExisting; // 0x006C (0x0001)
    bool bTryFixedBitwiseCompression; // 0x006D (0x0001)
    bool bTryPerTrackBitwiseCompression; // 0x006E (0x0001)
    bool bTryLinearKeyRemovalCompression; // 0x006F (0x0001)
    bool bTryIntervalKeyRemoval; // 0x0070 (0x0001)
    bool bEnablePerformanceLog; // 0x0071 (0x0001)
};

// Class: Engine.AudioSettings
class AudioSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t DefaultSoundClassName[0x10]; // 0x0038 (0x0010)
    uint8_t DefaultSoundConcurrencyName[0x10]; // 0x0048 (0x0010)
    uint8_t DefaultBaseSoundMix[0x10]; // 0x0058 (0x0010)
    uint8_t VoiPSoundClass[0x10]; // 0x0068 (0x0010)
    float LowPassFilterResonance; // 0x0078 (0x0004)
    int32_t MaximumConcurrentStreams; // 0x007C (0x0004)
    struct TArray<uint8_t> QualityLevels; // 0x0080 (0x0010)
};

// Class: Engine.BendAutoNavLinkSettings
class BendAutoNavLinkSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Generation[0x40]; // 0x0038 (0x0040)
};

// Class: Engine.BendCoverSettings
class BendCoverSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Debug[0x4]; // 0x0038 (0x0004)
    uint8_t Generation[0x3C]; // 0x003C (0x003C)
};

// Class: Engine.UserInterfaceSettings
class UserInterfaceSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t RenderFocusRule; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t DefaultCursor[0x10]; // 0x0040 (0x0010)
    uint8_t TextEditBeamCursor[0x10]; // 0x0050 (0x0010)
    uint8_t CrosshairsCursor[0x10]; // 0x0060 (0x0010)
    uint8_t GrabHandCursor[0x10]; // 0x0070 (0x0010)
    uint8_t GrabHandClosedCursor[0x10]; // 0x0080 (0x0010)
    uint8_t SlashedCircleCursor[0x10]; // 0x0090 (0x0010)
    float ApplicationScale; // 0x00A0 (0x0004)
    uint8_t UIScaleRule; // 0x00A4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00A5 (0x0003)
    uint8_t CustomScalingRuleClass[0x10]; // 0x00A8 (0x0010)
    uint8_t UIScaleCurve[0x80]; // 0x00B8 (0x0080)
    struct TArray<uint8_t> CursorClasses; // 0x0138 (0x0010)
    class UClass* CustomScalingRuleClassInstance; // 0x0148 (0x0008)
    class UObject* CustomScalingRule; // 0x0150 (0x0008)
};

// Class: Engine.StreamingSettings
class StreamingSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool AsyncLoadingThreadEnabled; // 0x0038 (0x0001)
    bool WarnIfTimeLimitExceeded; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    float TimeLimitExceededMultiplier; // 0x003C (0x0004)
    float TimeLimitExceededMinTime; // 0x0040 (0x0004)
    int32_t MinBulkDataSizeForAsyncLoading; // 0x0044 (0x0004)
    float AsyncIOBandwidthLimit; // 0x0048 (0x0004)
    bool UseBackgroundLevelStreaming; // 0x004C (0x0001)
    bool AsyncLoadingUseFullTimeLimit; // 0x004C (0x0001)
    uint8_t Pad_2[0x3]; // 0x004D (0x0003)
    float AsyncLoadingTimeLimit; // 0x0050 (0x0004)
    float PriorityAsyncLoadingExtraTime; // 0x0054 (0x0004)
    float LevelStreamingActorsUpdateTimeLimit; // 0x0058 (0x0004)
    int32_t LevelStreamingComponentsRegistrationGranularity; // 0x005C (0x0004)
};

// Class: Engine.GarbageCollectionSettings
class GarbageCollectionSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float TimeBetweenPurgingPendingKillObjects; // 0x0038 (0x0004)
    bool FlushStreamingOnGC; // 0x003C (0x0001)
    bool AllowParallelGC; // 0x003C (0x0001)
    bool CreateGCClusters; // 0x003C (0x0001)
    bool MergeGCClusters; // 0x003C (0x0001)
    uint8_t Pad_1[0x3]; // 0x003D (0x0003)
    int32_t NumRetriesBeforeForcingGC; // 0x0040 (0x0004)
    int32_t MaxObjectsNotConsideredByGC; // 0x0044 (0x0004)
    int32_t SizeOfPermanentObjectPool; // 0x0048 (0x0004)
    int32_t MaxObjectsInGame; // 0x004C (0x0004)
    int32_t MaxObjectsInEditor; // 0x0050 (0x0004)
};

// Class: Engine.NetworkSettings
class NetworkSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bVerifyPeer; // 0x0038 (0x0001)
};

// Class: Engine.PhysicsSettings
class PhysicsSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float DefaultGravityZ; // 0x0038 (0x0004)
    float DefaultTerminalVelocity; // 0x003C (0x0004)
    float DefaultFluidFriction; // 0x0040 (0x0004)
    int32_t RagdollAggregateThreshold; // 0x0044 (0x0004)
    float TriangleMeshTriangleMinAreaThreshold; // 0x0048 (0x0004)
    bool bEnableAsyncScene; // 0x004C (0x0001)
    bool bEnableShapeSharing; // 0x004D (0x0001)
    bool bEnablePCM; // 0x004E (0x0001)
    bool bDisableCCDResweep; // 0x004F (0x0001)
    bool bWarnMissingLocks; // 0x0050 (0x0001)
    bool bEnable2DPhysics; // 0x0051 (0x0001)
    uint8_t LockedAxis; // 0x0052 (0x0001)
    uint8_t DefaultDegreesOfFreedom; // 0x0053 (0x0001)
    float BounceThresholdVelocity; // 0x0054 (0x0004)
    uint8_t FrictionCombineMode; // 0x0058 (0x0001)
    uint8_t RestitutionCombineMode; // 0x0059 (0x0001)
    uint8_t Pad_1[0x2]; // 0x005A (0x0002)
    float MaxAngularVelocity; // 0x005C (0x0004)
    float MaxDepenetrationVelocity; // 0x0060 (0x0004)
    bool bSimulateSkeletalMeshOnDedicatedServer; // 0x0064 (0x0001)
    bool bDefaultHasComplexCollision; // 0x0065 (0x0001)
    bool bDisableCCD; // 0x0066 (0x0001)
    uint8_t Pad_2[0x1]; // 0x0067 (0x0001)
    float MaxPhysicsDeltaTime; // 0x0068 (0x0004)
    float MinPhysicsDeltaTime; // 0x006C (0x0004)
    bool bSubstepping; // 0x0070 (0x0001)
    bool bSubsteppingAsync; // 0x0071 (0x0001)
    uint8_t Pad_3[0x2]; // 0x0072 (0x0002)
    float MaxSubstepDeltaTime; // 0x0074 (0x0004)
    int32_t MaxSubsteps; // 0x0078 (0x0004)
    float SyncSceneSmoothingFactor; // 0x007C (0x0004)
    float AsyncSceneSmoothingFactor; // 0x0080 (0x0004)
    float InitialAverageFrameRate; // 0x0084 (0x0004)
    struct TArray<uint8_t> PhysicalSurfaces; // 0x0088 (0x0010)
    bool bUseMbpBroadphase; // 0x0098 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0099 (0x0003)
    int32_t AABBTreeSlowRebuildRate; // 0x009C (0x0004)
    int32_t SimulateScratchMemorySize_SyncScene; // 0x00A0 (0x0004)
    int32_t SimulateScratchMemorySize_AsyncScene; // 0x00A4 (0x0004)
    int32_t SimulateScratchMemorySize_ClothScene; // 0x00A8 (0x0004)
    bool bEnableActivationBounds; // 0x00AC (0x0001)
    uint8_t Pad_5[0x3]; // 0x00AD (0x0003)
    float ActivationBoundsRadius; // 0x00B0 (0x0004)
    float ActivationBoundsBufferDist; // 0x00B4 (0x0004)
    float WindUnit; // 0x00B8 (0x0004)
    float WindAdaptatonScale_Cloth; // 0x00BC (0x0004)
    float WindAdaptatonScale_AnimDynamics; // 0x00C0 (0x0004)
    uint8_t Pad_6[0x4]; // 0x00C4 (0x0004)
    float WindTurbulenceVsSpeedCurve_NormalizationSpeed; // 0x00C8 (0x0004)
    float WindTurbulenceVsSpeedCurve_Exponent; // 0x00CC (0x0004)
    float ClothRefreshWorldReferenceLocationThresholdDistance; // 0x00D0 (0x0004)
    uint8_t VehicleWheelCollisionChannel; // 0x00D4 (0x0001)
};

// Class: Engine.RendererSettings
class RendererSettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bMobileHDR; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    uint8_t MobileNumDynamicPointLights[0x4]; // 0x003C (0x0004)
    bool bMobileDynamicPointLightsUseStaticBranch; // 0x0040 (0x0001)
    bool bDiscardUnusedQualityLevels; // 0x0040 (0x0001)
    bool bOcclusionCulling; // 0x0040 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0041 (0x0003)
    float MinScreenRadiusForLights; // 0x0044 (0x0004)
    float MinScreenRadiusForEarlyZPass; // 0x0048 (0x0004)
    float MinScreenRadiusForCSMdepth; // 0x004C (0x0004)
    bool bPrecomputedVisibilityWarning; // 0x0050 (0x0001)
    bool bTextureStreaming; // 0x0050 (0x0001)
    bool bUseDXT5NormalMaps; // 0x0050 (0x0001)
    bool bAllowStaticLighting; // 0x0050 (0x0001)
    bool bUseNormalMapsForStaticLighting; // 0x0050 (0x0001)
    bool bGenerateMeshDistanceFields; // 0x0050 (0x0001)
    bool bGenerateLandscapeGIData; // 0x0050 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0051 (0x0003)
    float TessellationAdaptivePixelsPerTriangle; // 0x0054 (0x0004)
    bool bSeparateTranslucency; // 0x0058 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0059 (0x0003)
    uint8_t TranslucentSortPolicy; // 0x005C (0x0001)
    uint8_t Pad_5[0x3]; // 0x005D (0x0003)
    uint8_t TranslucentSortAxis[0xC]; // 0x0060 (0x000C)
    uint8_t CustomDepthStencil; // 0x006C (0x0001)
    uint8_t Pad_6[0x3]; // 0x006D (0x0003)
    bool bDefaultFeatureBloom; // 0x0070 (0x0001)
    bool bDefaultFeatureAmbientOcclusion; // 0x0070 (0x0001)
    bool bDefaultFeatureAmbientOcclusionStaticFraction; // 0x0070 (0x0001)
    bool bDefaultFeatureAutoExposure; // 0x0070 (0x0001)
    bool bDefaultFeatureMotionBlur; // 0x0070 (0x0001)
    bool bDefaultFeatureLensFlare; // 0x0070 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0071 (0x0003)
    uint8_t DefaultFeatureAntiAliasing; // 0x0074 (0x0001)
    uint8_t EarlyZPass; // 0x0075 (0x0001)
    uint8_t Pad_8[0x2]; // 0x0076 (0x0002)
    bool bEarlyZPassMovable; // 0x0078 (0x0001)
    bool bDBuffer; // 0x0078 (0x0001)
    uint8_t Pad_9[0x3]; // 0x0079 (0x0003)
    uint8_t ClearSceneMethod; // 0x007C (0x0001)
    uint8_t Pad_10[0x3]; // 0x007D (0x0003)
    bool bBasePassOutputsVelocity; // 0x0080 (0x0001)
    bool bSelectiveBasePassOutputs; // 0x0080 (0x0001)
    bool bInstancedStereo; // 0x0080 (0x0001)
    uint8_t Pad_11[0x3]; // 0x0081 (0x0003)
    float WireframeCullThreshold; // 0x0084 (0x0004)
    uint8_t UIScaleRule; // 0x0088 (0x0001)
    uint8_t Pad_12[0x7]; // 0x0089 (0x0007)
    uint8_t UIScaleCurve[0x80]; // 0x0090 (0x0080)
};

// Class: Engine.TextureLODSettings
class TextureLODSettings : public Object {
public:
    struct TArray<uint8_t> TextureLODGroups; // 0x0028 (0x0010)
};

// Class: Engine.DeviceProfile
class DeviceProfile : public TextureLODSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct FString DeviceType; // 0x0038 (0x0010)
    struct FString BaseProfileName; // 0x0048 (0x0010)
    class UObject* Parent; // 0x0058 (0x0008)
    uint8_t Pad_1[0x8]; // 0x0060 (0x0008)
    struct TArray<uint8_t> CVars; // 0x0068 (0x0010)
};

// Class: Engine.DeviceProfileManager
class DeviceProfileManager : public Object {
public:
    struct TArray<uint8_t> Profiles; // 0x0028 (0x0010)
};

// Class: Engine.DialogueVoice
class DialogueVoice : public Object {
public:
    uint8_t Gender; // 0x0028 (0x0001)
    uint8_t Plurality; // 0x0029 (0x0001)
    uint8_t Pad_0[0x2]; // 0x002A (0x0002)
    uint8_t LocalizationGUID[0x10]; // 0x002C (0x0010)
};

// Class: Engine.DialogueWave
class DialogueWave : public Object {
public:
    bool bMature; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    struct FString SpokenText; // 0x0030 (0x0010)
    struct TArray<uint8_t> ContextMappings; // 0x0040 (0x0010)
    uint8_t LocalizationGUID[0x10]; // 0x0050 (0x0010)
};

// Class: Engine.Distribution
class Distribution : public Object {
public:
};

// Class: Engine.DistributionFloat
class DistributionFloat : public Distribution {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bCanBeBaked; // 0x0030 (0x0001)
};

// Class: Engine.DistributionFloatConstant
class DistributionFloatConstant : public DistributionFloat {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float Constant; // 0x0038 (0x0004)
};

// Class: Engine.DistributionFloatParameterBase
class DistributionFloatParameterBase : public DistributionFloatConstant {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    struct FName ParameterName; // 0x0040 (0x0008)
    float MinInput; // 0x0048 (0x0004)
    float MaxInput; // 0x004C (0x0004)
    float MinOutput; // 0x0050 (0x0004)
    float MaxOutput; // 0x0054 (0x0004)
    uint8_t ParamMode; // 0x0058 (0x0001)
};

// Class: Engine.DistributionFloatParticleParameter
class DistributionFloatParticleParameter : public DistributionFloatParameterBase {
public:
};

// Class: Engine.DistributionFloatConstantCurve
class DistributionFloatConstantCurve : public DistributionFloat {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t ConstantCurve[0x18]; // 0x0038 (0x0018)
};

// Class: Engine.DistributionFloatUniform
class DistributionFloatUniform : public DistributionFloat {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float Min; // 0x0038 (0x0004)
    float Max; // 0x003C (0x0004)
};

// Class: Engine.DistributionFloatUniformCurve
class DistributionFloatUniformCurve : public DistributionFloat {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t ConstantCurve[0x18]; // 0x0038 (0x0018)
};

// Class: Engine.DistributionVector
class DistributionVector : public Distribution {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bCanBeBaked; // 0x0030 (0x0001)
    bool bIsDirty; // 0x0030 (0x0001)
};

// Class: Engine.DistributionVectorConstant
class DistributionVectorConstant : public DistributionVector {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Constant[0xC]; // 0x0038 (0x000C)
    bool bLockAxes; // 0x0044 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0045 (0x0003)
    uint8_t LockedAxes; // 0x0048 (0x0001)
};

// Class: Engine.DistributionVectorParameterBase
class DistributionVectorParameterBase : public DistributionVectorConstant {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    struct FName ParameterName; // 0x0050 (0x0008)
    uint8_t MinInput[0xC]; // 0x0058 (0x000C)
    uint8_t MaxInput[0xC]; // 0x0064 (0x000C)
    uint8_t MinOutput[0xC]; // 0x0070 (0x000C)
    uint8_t MaxOutput[0xC]; // 0x007C (0x000C)
    uint8_t ParamModes; // 0x0088 (0x0001)
};

// Class: Engine.DistributionVectorParticleParameter
class DistributionVectorParticleParameter : public DistributionVectorParameterBase {
public:
};

// Class: Engine.DistributionVectorConstantCurve
class DistributionVectorConstantCurve : public DistributionVector {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t ConstantCurve[0x18]; // 0x0038 (0x0018)
    bool bLockAxes; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    uint8_t LockedAxes; // 0x0054 (0x0001)
};

// Class: Engine.DistributionVectorUniform
class DistributionVectorUniform : public DistributionVector {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Max[0xC]; // 0x0038 (0x000C)
    uint8_t Min[0xC]; // 0x0044 (0x000C)
    bool bLockAxes; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    uint8_t LockedAxes; // 0x0054 (0x0001)
    uint8_t MirrorFlags; // 0x0055 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0056 (0x0002)
    bool bUseExtremes; // 0x0058 (0x0001)
};

// Class: Engine.DistributionVectorUniformCurve
class DistributionVectorUniformCurve : public DistributionVector {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t ConstantCurve[0x18]; // 0x0038 (0x0018)
    bool bLockAxes1; // 0x0050 (0x0001)
    bool bLockAxes2; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    uint8_t LockedAxes; // 0x0054 (0x0001)
    uint8_t Pad_2[0x1]; // 0x0055 (0x0001)
    uint8_t MirrorFlags; // 0x0056 (0x0001)
    uint8_t Pad_3[0x5]; // 0x0057 (0x0005)
    bool bUseExtremes; // 0x005C (0x0001)
};

// Class: Engine.DPICustomScalingRule
class DPICustomScalingRule : public Object {
public:
};

// Class: Engine.DynamicBlueprintBinding
class DynamicBlueprintBinding : public Object {
public:
};

// Class: Engine.ComponentDelegateBinding
class ComponentDelegateBinding : public DynamicBlueprintBinding {
public:
    struct TArray<uint8_t> ComponentDelegateBindings; // 0x0028 (0x0010)
};

// Class: Engine.InputDelegateBinding
class InputDelegateBinding : public DynamicBlueprintBinding {
public:
};

// Class: Engine.InputActionDelegateBinding
class InputActionDelegateBinding : public InputDelegateBinding {
public:
    struct TArray<uint8_t> InputActionDelegateBindings; // 0x0028 (0x0010)
};

// Class: Engine.InputAxisDelegateBinding
class InputAxisDelegateBinding : public InputDelegateBinding {
public:
    struct TArray<uint8_t> InputAxisDelegateBindings; // 0x0028 (0x0010)
};

// Class: Engine.InputAxisKeyDelegateBinding
class InputAxisKeyDelegateBinding : public InputDelegateBinding {
public:
    struct TArray<uint8_t> InputAxisKeyDelegateBindings; // 0x0028 (0x0010)
};

// Class: Engine.InputVectorAxisDelegateBinding
class InputVectorAxisDelegateBinding : public InputAxisKeyDelegateBinding {
public:
};

// Class: Engine.InputKeyDelegateBinding
class InputKeyDelegateBinding : public InputDelegateBinding {
public:
    struct TArray<uint8_t> InputKeyDelegateBindings; // 0x0028 (0x0010)
};

// Class: Engine.InputTouchDelegateBinding
class InputTouchDelegateBinding : public InputDelegateBinding {
public:
    struct TArray<uint8_t> InputTouchDelegateBindings; // 0x0028 (0x0010)
};

// Class: Engine.EdgeSet
class EdgeSet : public Object {
public:
    struct TArray<uint8_t> Edges; // 0x0028 (0x0010)
};

// Class: Engine.EdGraph
class EdGraph : public Object {
public:
    class UClass* Schema; // 0x0028 (0x0008)
    struct TArray<uint8_t> Nodes; // 0x0030 (0x0010)
    bool bEditable; // 0x0040 (0x0001)
    bool bAllowDeletion; // 0x0040 (0x0001)
    bool bAllowRenaming; // 0x0040 (0x0001)
};

// Class: Engine.EdGraphNode_Documentation
class EdGraphNode_Documentation : public EdGraphNode {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FString Link; // 0x0090 (0x0010)
    struct FString Excerpt; // 0x00A0 (0x0010)
};

// Class: Engine.EdGraphSchema
class EdGraphSchema : public Object {
public:
};

// Class: Engine.ImportantToggleSettingInterface
class ImportantToggleSettingInterface : public Interface {
public:
};

// Class: Engine.EndUserSettings
class EndUserSettings : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bSendAnonymousUsageDataToEpic; // 0x0030 (0x0001)
};

// Class: Engine.GameEngine
class GameEngine : public Engine {
public:
    uint8_t Pad_0[0xBB8]; // 0x0028 (0x0BB8)
    float MaxDeltaTime; // 0x0BE0 (0x0004)
    float ServerFlushLogInterval; // 0x0BE4 (0x0004)
    class UObject* GameInstance; // 0x0BE8 (0x0008)
};

// Class: Engine.Exporter
class Exporter : public Object {
public:
    class UClass* SupportedClass; // 0x0028 (0x0008)
    class UObject* ExportRootScope; // 0x0030 (0x0008)
    struct TArray<uint8_t> FormatExtension; // 0x0038 (0x0010)
    struct TArray<uint8_t> FormatDescription; // 0x0048 (0x0010)
    int32_t PreferredFormatIndex; // 0x0058 (0x0004)
    int32_t TextIndent; // 0x005C (0x0004)
    bool bText; // 0x0060 (0x0001)
    bool bSelectedOnly; // 0x0060 (0x0001)
    bool bForceFileOperations; // 0x0060 (0x0001)
};

// Class: Engine.FontImportOptions
class FontImportOptions : public Object {
public:
    uint8_t Data[0xB0]; // 0x0028 (0x00B0)
};

// Class: Engine.Font
class Font : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t FontCacheType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> Characters; // 0x0038 (0x0010)
    struct TArray<uint8_t> Textures; // 0x0048 (0x0010)
    int32_t IsRemapped; // 0x0058 (0x0004)
    float EmScale; // 0x005C (0x0004)
    float Ascent; // 0x0060 (0x0004)
    float Descent; // 0x0064 (0x0004)
    float Leading; // 0x0068 (0x0004)
    int32_t Kerning; // 0x006C (0x0004)
    uint8_t ImportOptions[0xB0]; // 0x0070 (0x00B0)
    int32_t NumCharacters; // 0x0120 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0124 (0x0004)
    struct TArray<uint8_t> MaxCharHeight; // 0x0128 (0x0010)
    float ScalingFactor; // 0x0138 (0x0004)
    int32_t LegacyFontSize; // 0x013C (0x0004)
    struct FName LegacyFontName; // 0x0140 (0x0008)
    uint8_t CompositeFont[0x28]; // 0x0148 (0x0028)
};

// Class: Engine.PlayerInput
class PlayerInput : public Object {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    struct TArray<uint8_t> DebugExecBindings; // 0x0120 (0x0010)
    uint8_t Pad_1[0x30]; // 0x0130 (0x0030)
    struct TArray<uint8_t> InvertedAxis; // 0x0160 (0x0010)

public:
    void SetMouseSensitivity(float Sensitivity);
    void SetBind(struct FName BindName, struct FString Command);
    void InvertAxisKey(uint8_t AxisKey);
    void InvertAxis(struct FName AxisName);
    void ClearSmoothing();
};

// Class: Engine.MaterialParameterCollection
class MaterialParameterCollection : public Object {
public:
    uint8_t StateId[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> ScalarParameters; // 0x0038 (0x0010)
    struct TArray<uint8_t> VectorParameters; // 0x0048 (0x0010)
};

// Class: Engine.GameUserSettings
class GameUserSettings : public Object {
public:
    bool IgnoreGamepad; // 0x0028 (0x0001)
    bool LockMouseInput; // 0x0029 (0x0001)
    uint8_t Pad_0[0x2]; // 0x002A (0x0002)
    int32_t InputDeviceMode; // 0x002C (0x0004)
    int32_t GamepadDisplayMode; // 0x0030 (0x0004)
    float PlayerCameraSensitivity; // 0x0034 (0x0004)
    float AimCameraSensitivity; // 0x0038 (0x0004)
    float MotionControlAimSensitivity; // 0x003C (0x0004)
    bool bPlayerCameraVerticalInverted; // 0x0040 (0x0001)
    bool bPlayerCameraHorizontalInverted; // 0x0041 (0x0001)
    bool bBikeCameraTrackingEnabled; // 0x0042 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0043 (0x0001)
    float BikeCameraSensitivity; // 0x0044 (0x0004)
    bool bBikeCameraVerticalInverted; // 0x0048 (0x0001)
    bool bBikeCameraHorizontalInverted; // 0x0049 (0x0001)
    bool bBikeBackupCameraEnabled; // 0x004A (0x0001)
    uint8_t Pad_2[0x1]; // 0x004B (0x0001)
    float BikeSteeringSensitivityModifier; // 0x004C (0x0004)
    int32_t SwipeLength; // 0x0050 (0x0004)
    float SwipeVerticalDeadzone; // 0x0054 (0x0004)
    float SwipeHorizontalDeadzone; // 0x0058 (0x0004)
    float SwipeVerticalDeadzoneBuffer; // 0x005C (0x0004)
    float SwipeHorizontalDeadzoneBuffer; // 0x0060 (0x0004)
    float SfxVolume; // 0x0064 (0x0004)
    float MusicVolume; // 0x0068 (0x0004)
    float SpeechVolume; // 0x006C (0x0004)
    float ControllerVolume; // 0x0070 (0x0004)
    int32_t AudioFormat; // 0x0074 (0x0004)
    int32_t AudioDynamicRange; // 0x0078 (0x0004)
    int32_t DialogLanguage; // 0x007C (0x0004)
    int32_t InterfaceLanguage; // 0x0080 (0x0004)
    int32_t SubtitleLanguage; // 0x0084 (0x0004)
    bool bSubtitlesEnabled; // 0x0088 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0089 (0x0003)
    int32_t SubtitleSize; // 0x008C (0x0004)
    int32_t SubtitleBackgroundOpacity; // 0x0090 (0x0004)
    bool bSubtitleNamesEnabled; // 0x0094 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0095 (0x0003)
    int32_t SubtitleNameColor; // 0x0098 (0x0004)
    int32_t SubtitleColor; // 0x009C (0x0004)
    bool bAimSnapEnabled; // 0x00A0 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00A1 (0x0003)
    int32_t AimStickinessSensitivity; // 0x00A4 (0x0004)
    int32_t AimFrictionSensitivity; // 0x00A8 (0x0004)
    int32_t ControllerDeadzoneSensitivity; // 0x00AC (0x0004)
    bool bCameraFollowTrackingEnabled; // 0x00B0 (0x0001)
    bool bRememberScopeZoomEnabled; // 0x00B1 (0x0001)
    bool bRememberAimSideEnabled; // 0x00B2 (0x0001)
    bool bVibrationEnabled; // 0x00B3 (0x0001)
    bool bXPIndicatorsEnabled; // 0x00B4 (0x0001)
    uint8_t Pad_6[0x3]; // 0x00B5 (0x0003)
    uint8_t OnInterfaceColorModeChanged[0x10]; // 0x00B8 (0x0010)
    bool bRepeatedButtonHoldEnabled; // 0x00C8 (0x0001)
    uint8_t Pad_7[0x3]; // 0x00C9 (0x0003)
    int32_t RepeatedButtonSize; // 0x00CC (0x0004)
    bool bSwipeControlsEnabled; // 0x00D0 (0x0001)
    bool bAutoCompleteReactionEventsEnabled; // 0x00D1 (0x0001)
    uint8_t Pad_8[0x2]; // 0x00D2 (0x0002)
    int32_t InterfaceColorMode; // 0x00D4 (0x0004)
    bool bTrackAssistEnabled; // 0x00D8 (0x0001)
    bool bCollectibleAudioCues; // 0x00D9 (0x0001)
    bool bHighContrastOn; // 0x00DA (0x0001)
    bool bUINarration; // 0x00DB (0x0001)
    uint8_t Pad_9[0x1]; // 0x00DC (0x0001)
    bool bHighConstrastHUD; // 0x00DD (0x0001)
    uint8_t Pad_10[0x2]; // 0x00DE (0x0002)
    int32_t HCMPreset; // 0x00E0 (0x0004)
    uint8_t Pad_11[0x4]; // 0x00E4 (0x0004)
    int32_t HighContrastHeroColor; // 0x00E8 (0x0004)
    int32_t HighContrastFriendlyNPCColor; // 0x00EC (0x0004)
    int32_t HighContrastEnemyColor; // 0x00F0 (0x0004)
    int32_t HighContrastInteractibleColor; // 0x00F4 (0x0004)
    int32_t CustomHighContrastHeroColor; // 0x00F8 (0x0004)
    int32_t CustomHighContrastFriendlyNPCColor; // 0x00FC (0x0004)
    int32_t CustomHighContrastEnemyColor; // 0x0100 (0x0004)
    int32_t CustomHighContrastInteractibleColor; // 0x0104 (0x0004)
    class UObject* hcmColorTable; // 0x0108 (0x0008)
    class UObject* hcmMPC; // 0x0110 (0x0008)
    float HapticVibrationIntensity; // 0x0118 (0x0004)
    uint8_t HapticSettings[0x2C]; // 0x011C (0x002C)
    uint8_t AdaptiveTriggerSettings[0x18]; // 0x0148 (0x0018)
    int32_t GameSpeed; // 0x0160 (0x0004)
    uint8_t Pad_12[0x4]; // 0x0164 (0x0004)
    bool bRecenterCameraOnAttack; // 0x0168 (0x0001)
    bool bPersistentCenterDot; // 0x0169 (0x0001)
    uint8_t Pad_13[0x2]; // 0x016A (0x0002)
    int32_t SurvivalWheelMouseMode; // 0x016C (0x0004)
    float SurvivalWheelSmartScrollDelay; // 0x0170 (0x0004)
    float SurvivalWheelMinimumExpansionWidth; // 0x0174 (0x0004)
    float SurvivalWheelMinimumItemWidth; // 0x0178 (0x0004)
    bool bSurvivalWheelDebugRenderingEnabled; // 0x017C (0x0001)
    uint8_t Pad_14[0x3]; // 0x017D (0x0003)
    int32_t WeaponSelectionPreviewMode; // 0x0180 (0x0004)
    uint8_t Pad_15[0x2C]; // 0x0184 (0x002C)
    struct FString VideoSettings; // 0x01B0 (0x0010)
    struct FString LastUserConfirmedVideoSettings; // 0x01C0 (0x0010)
    int32_t SyncInterval; // 0x01D0 (0x0004)
    int32_t LastUserConfirmedSyncInterval; // 0x01D4 (0x0004)
    uint8_t Pad_16[0x8]; // 0x01D8 (0x0008)
    uint8_t OnAutodetectRequested[0x10]; // 0x01E0 (0x0010)
    uint8_t OnAutodetectCompleted[0x10]; // 0x01F0 (0x0010)
    uint8_t OnHCMSettingChanged[0x10]; // 0x0200 (0x0010)
    uint8_t OnAccessibilitySettingChanged[0x10]; // 0x0210 (0x0010)
    uint8_t OnOptionsClosed[0x10]; // 0x0220 (0x0010)
    uint8_t OnAdaptiveTriggersChanged[0x10]; // 0x0230 (0x0010)
    float Brightness; // 0x0240 (0x0004)
    float FOV; // 0x0244 (0x0004)
    float HDRGameBrightness; // 0x0248 (0x0004)
    float HDRGamePeakBrightness; // 0x024C (0x0004)
    float HDRUIBrightness; // 0x0250 (0x0004)
    bool DepthOfFieldEnabled; // 0x0254 (0x0001)
    uint8_t Pad_17[0x3]; // 0x0255 (0x0003)
    int32_t VisualPreset; // 0x0258 (0x0004)
    bool bChromaticAberrationEnabled; // 0x025C (0x0001)
    bool bMotionBlurEnabled; // 0x025D (0x0001)
    uint8_t Pad_18[0x2]; // 0x025E (0x0002)
    float RenderScale; // 0x0260 (0x0004)
    int32_t LightingQuality; // 0x0264 (0x0004)
    int32_t GeometryQuality; // 0x0268 (0x0004)
    int32_t FoliageDrawDistance; // 0x026C (0x0004)
    int32_t ShadowQuality; // 0x0270 (0x0004)
    int32_t CloudAndFogQuality; // 0x0274 (0x0004)
    int32_t TextureFilterQuality; // 0x0278 (0x0004)
    int32_t TextureStreamingQuality; // 0x027C (0x0004)
    int32_t PS5RenderMode; // 0x0280 (0x0004)
    int32_t PS5RenderModeInPhotoMode; // 0x0284 (0x0004)
    uint8_t PS5OutputMode[0x2]; // 0x0288 (0x0002)
    uint8_t Pad_19[0x26]; // 0x028A (0x0026)
    bool bTelemetryEnabled; // 0x02B0 (0x0001)
    bool bFullDataEnabled; // 0x02B1 (0x0001)
    bool bDataPolicySeen; // 0x02B2 (0x0001)
    bool bFirstBootAccessibilitySeen; // 0x02B3 (0x0001)
    bool bHordeAssaultFirstBootSeen; // 0x02B4 (0x0001)
    bool bHordeAssaultFirstPlaySeen; // 0x02B5 (0x0001)
    bool bUseVSync; // 0x02B6 (0x0001)
    bool LastUserConfirmedVSync; // 0x02B7 (0x0001)
    uint8_t Pad_20[0x1C]; // 0x02B8 (0x001C)
    uint8_t ResolutionSizeX[0x4]; // 0x02D4 (0x0004)
    uint8_t ResolutionSizeY[0x4]; // 0x02D8 (0x0004)
    uint8_t LastUserConfirmedResolutionSizeX[0x4]; // 0x02DC (0x0004)
    uint8_t LastUserConfirmedResolutionSizeY[0x4]; // 0x02E0 (0x0004)
    int32_t WindowPosX; // 0x02E4 (0x0004)
    int32_t WindowPosY; // 0x02E8 (0x0004)
    bool bUseDesktopResolutionForFullscreen; // 0x02EC (0x0001)
    uint8_t Pad_21[0x3]; // 0x02ED (0x0003)
    int32_t FullscreenMode; // 0x02F0 (0x0004)
    int32_t LastConfirmedFullscreenMode; // 0x02F4 (0x0004)
    uint8_t Version[0x4]; // 0x02F8 (0x0004)
    int32_t AudioQualityLevel; // 0x02FC (0x0004)
    float FrameRateLimit; // 0x0300 (0x0004)
    float LastUserConfirmedFrameRateLimit; // 0x0304 (0x0004)

public:
    void ValidateSettings();
    void UpdateHCMMaterialParameters();
    void SetXPIndicatorsEnabled(bool bEnabled);
    void SetWeaponSelectionPreviewMode(int32_t InPreviewMode);
    void SetVSyncEnabled(bool bEnable);
    void SetVisualPreset(int32_t InVisualPreset);
    void SetVisualEffectQuality(int32_t Value);
    void SetViewDistanceQuality(int32_t Value);
    void SetVibrationEnabled(bool bEnabled);
    void SetVehicleCameraTrackingEnabled(bool bEnableCameraTracking);
    void SetUINarrationOn(bool InValue);
    void SetTrackAssistEnabled(bool bEnabled);
    void SetToDefaults();
    void SetTextureStreamingQuality(int32_t InTextureStreamingQuality);
    void SetTextureQuality(int32_t Value);
    void SetTextureFilterQuality(int32_t InTextureFilterQuality);
    void SetTelemetryEnabled(bool bEnabled);
    void SetSyncInterval(int32_t InSyncInterval);
    void SetSwipeVerticalDeadzoneBuffer(float InDeadzoneBuffer);
    void SetSwipeVerticalDeadzone(float InDeadzone);
    void SetSwipeLength(int32_t InSwipeLength);
    void SetSwipeHorizontalDeadzoneBuffer(float InDeadzoneBuffer);
    void SetSwipeHorizontalDeadzone(float InDeadzone);
    void SetSwipeControlsEnabled(bool bEnabled);
    void SetSurvivalWheelSmartScrollDelay(float InSmartScrollDelay);
    void SetSurvivalWheelMouseMode(int32_t InMouseMode);
    void SetSurvivalWheelMinimumItemWidth(float InMinimumItemWidth);
    void SetSurvivalWheelMinimumExpansionWidth(float InMinimumExpansionWidth);
    void SetSurvivalWheelDebugRenderingEnabled(bool InToggleEnabled);
    void SetSubtitleSize(int32_t InSize);
    void SetSubtitlesEnabled(bool bEnabled);
    void SetSubtitleNamesEnabled(bool bEnabled);
    void SetSubtitleNameColor(int32_t InColor);
    void SetSubtitleLanguage(int32_t InLanguage);
    void SetSubtitleColor(int32_t InColor);
    void SetSubtitleBackgroundOpacity(int32_t InOpacity);
    void SetSpeechVolume(float InVolume);
    void SetShadowQuality(int32_t Value);
    void SetSfxVolume(float InVolume);
    void SetScreenResolution(uint8_t Resolution);
    void SetScalabilityProfile(float InRenderScale, int32_t InQualityLevel);
    void SetResolutionScaleValue(int32_t NewScaleValue);
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    void SetRepeatedButtonSize(int32_t InSize);
    void SetRepeatedButtonHoldEnabled(bool bEnabled);
    void SetRenderScale(float InRenderScale);
    void SetRememberScopeZoomEnabled(bool bEnabled);
    void SetRememberAimSideEnabled(bool bEnabled);
    void SetRefreshRate(int32_t InNumerator, int32_t InDenominator);
    void SetRecenterCameraOnAttack(bool InValue);
    void SetPSSREnabled(bool InPSSREnabled);
    void SetPS5RenderMode(int32_t InPS5RenderMode);
    void SetPostProcessingQuality(int32_t Value);
    void SetPlayerCameraVerticalInverted(bool bInverted);
    void SetPlayerCameraSensitivity(float InSensitivity);
    void SetPlayerCameraHorizontalInverted(bool bInverted);
    void SetPersistentCenterDotEnabled(bool InValue);
    void SetOverallScalabilityLevel(int32_t Value);
    void SetMusicVolume(float InVolume);
    void SetMotionControlAimSensitivity(float InSensitivity);
    void SetMotionBlurEnabled(bool bEnabled);
    void SetLockMouseInput(bool bLockMouseInput);
    void SetLightingQuality(int32_t InLightingQuality);
    void SetInterfaceLanguage(int32_t InLanguage);
    void SetInterfaceColorMode(int32_t InColorMode);
    void SetInputDeviceMode(int32_t InDeviceMode);
    void SetIgnoreGamepad(bool bIgnore);
    void SetHordeAssaultFirstPlaySeen(bool bPlayed);
    void SetHordeAssaultFirstBootSeen(bool bSeen);
    void SetHighFramerate(bool bEnabled);
    void SetHighContrastPreset(int32_t InValue);
    void SetHighContrastModeOn(bool InEnabled);
    void SetHighContrastInteractibleColor(int32_t InValue);
    void SetHighContrastHUDEnabled(bool InValue);
    void SetHighContrastHeroColor(int32_t InValue);
    void SetHighContrastFriendlyNPCColor(int32_t InValue);
    void SetHighContrastEnemyColor(int32_t InValue);
    void SetHDRUIBrightness(int32_t InHDRUIBrightness);
    void SetHDRGamePeakBrightness(int32_t InHDRGamePeakBrightness);
    void SetHDRGameBrightness(int32_t InHDRGameBrightness);
    void SetHDREnabled(bool bEnabled);
    void SetHapticVibrationIntensity(float InValue);
    void SetHapticsWeapon(float InValue);
    void SetHapticsMaster(float InValue);
    void SetHapticsEngine(float InValue);
    void SetHapticsEnabled(bool bEnabled);
    void SetHapticsBike(float InValue);
    void SetHapticPlayerDamage(float InValue);
    void SetHapticMelee(float InValue);
    void SetHapticIntensity(uint8_t HapticCategory, float InValue);
    void SetHapticHorde(float InValue);
    void SetHapticExplosion(float InValue);
    void SetHapticEnvironmental(float InValue);
    void SetHapticCollectible(float InValue);
    void SetGeometryQuality(int32_t InGeometryQuality);
    void SetGameSpeedTimeDilationID(int32_t InValue);
    void SetGameSpeed(int32_t InValue);
    void SetGamepadDisplayMode(int32_t InDisplayMode);
    void SetFullscreenMode(uint8_t InFullscreenMode);
    void SetFullDataEnabled(bool bEnabled);
    void SetFrameRateLimit(float newLimit);
    void SetFOV(float InFOV);
    void SetFoliageDrawDistance(int32_t InFoliageDrawDistance);
    void SetFirstBootAccessibilitySeen(bool bSeen);
    void SetDisplayIndex(int32_t InIndex);
    void SetDialogLanguage(int32_t InLanguage);
    void SetDepthOfFieldEnabled(bool InDepthOfFieldEnabled);
    void SetDataPolicySeen(bool bSeen);
    void SetControllerVolume(float InVolume);
    void SetControllerDeadzoneSensitivity(int32_t InSensitivity);
    void SetCollectibleAudioCues(bool bEnabled);
    void SetCloudAndFogQuality(int32_t InCloudAndFogQuality);
    void SetCinematicActive(bool InEnabled);
    void SetChromaticAberrationEnabled(bool bEnabled);
    void SetCameraFollowTrackingEnabled(bool bEnabled);
    void SetBrightness(float InBrightness);
    void SetBikeSteeringSensitivity(float InSensitivity);
    void SetBikeCameraVerticalInverted(bool bInverted);
    void SetBikeCameraSensitivity(float InSensitivity);
    void SetBikeCameraHorizontalInverted(bool bInverted);
    void SetBikeBackupCameraEnabled(bool bEnabled);
    void SetBendShadowQuality(int32_t InShadowQuality);
    void SetBenchmarkFallbackValues();
    void SetAutoCompleteReactionEventsEnabled(bool bEnabled);
    void SetAudioQualityLevel(int32_t QualityLevel);
    void SetAudioFormat(int32_t InFormat);
    void SetAudioDynamicRange(int32_t InDynamicRange);
    void SetAntiAliasingQuality(int32_t Value);
    void SetAimStickinessSensitivity(int32_t InSensitivity);
    void SetAimSnapEnabled(bool bEnabled);
    void SetAimFrictionSensitivity(int32_t InSensitivity);
    void SetAimCameraSensitivity(float InSensitivity);
    void SetAdaptiveTriggerStrength(float Strength, uint8_t AdaptiveTriggerCategory);
    void SetAdaptiveTriggersEnabled(bool bEnabled, uint8_t AdaptiveTriggerCategory);
    void Set30HzFramerate(bool bEnabled);
    void SaveSettings();
    void RevertVideoMode();
    void RevertScalabilityOptions();
    void ResetToCurrentSettings();
    void ResetTelemetryOptions();
    void ResetSurvivalWheelOptions();
    void ResetScalabilityOptions();
    void ResetLanguageOptions();
    void ResetHapticOptions();
    void ResetGameplayOptions();
    void ResetGamepadOptions();
    void ResetAudioOptions();
    void ResetAllOptions();
    void ResetAdaptiveTriggerOptions();
    void ResetAccessibilityOptions();
    void RequestAutodetect();
    void OnPhotoModeOpened(bool bIsOpened);
    void MatchCurrentVideoSettings();
    void MatchCurrentScalabilityOptions();
    void LoadSettings(bool bForceReload);
    bool IsVSyncEnabled();
    bool IsVSyncDirty();
    bool IsVibrationEnabled();
    bool IsVehicleCameraTrackingEnabled();
    bool IsTrackAssistEnabled();
    bool IsTelemetryEnabled();
    bool IsSurvivalWheelSmartScrollEnabled();
    bool IsSurvivalWheelDebugRenderingEnabled();
    bool IsScreenResolutionDirty();
    bool IsRepeatedButtonHoldEnabled();
    bool IsRememberScopeZoomEnabled();
    bool IsRememberAimSideEnabled();
    bool IsPSSRInhibited();
    bool IsPS5Trinity();
    bool IsPlayerCameraVerticalInverted();
    bool IsPlayerCameraHorizontalInverted();
    bool IsMotionControlAimEnabled();
    bool IsMotionBlurEnabled();
    bool IsLanguageSupportedByTTS();
    bool IsHordeAssaultFirstPlaySeen();
    bool IsHordeAssaultFirstBootSeen();
    bool IsHighFramerateSupported();
    bool IsHDRSupported();
    bool IsHDREnabled();
    bool IsFullscreenModeDirty();
    bool IsFullDataEnabled();
    bool IsFirstBootAccessibilitySeen();
    bool IsDirty();
    bool IsDataPolicySeen();
    bool IsControllerAudioEnabled();
    bool IsCollectibleAudioCuesEnabled();
    bool IsChromaticAberrationEnabled();
    bool IsCameraFollowTrackingEnabled();
    bool IsBikeCameraVerticalInverted();
    bool IsBikeCameraHorizontalInverted();
    bool IsBikeBackupCameraEnabled();
    bool IsAutoCompleteReactionEventsEnabled();
    bool IsAimSnapEnabled();
    int32_t GetWeaponSelectionPreviewMode();
    int32_t GetVisualPreset();
    int32_t GetVisualEffectQuality();
    int32_t GetViewDistanceQuality();
    bool GetUINarrationOn();
    int32_t GetTextureStreamingQuality();
    int32_t GetTextureQuality();
    int32_t GetTextureFilterQuality();
    int32_t GetSyncInterval();
    float GetSwipeVerticalDeadzoneBuffer();
    float GetSwipeVerticalDeadzone();
    int32_t GetSwipeLength();
    float GetSwipeHorizontalDeadzoneBuffer();
    float GetSwipeHorizontalDeadzone();
    float GetSurvivalWheelSmartScrollDelay();
    int32_t GetSurvivalWheelMouseMode();
    float GetSurvivalWheelMinimumItemWidth();
    float GetSurvivalWheelMinimumExpansionWidth();
    void GetSupportedSyncIntervals(struct TArray<uint8_t> SyncIntervals, struct TArray<uint8_t> FrameRates);
    struct TArray<uint8_t> GetSupportedResolutions();
    struct TArray<uint8_t> GetSupportedRefreshRates();
    bool GetSubtitlesShouldBeShown();
    int32_t GetSubtitleSize();
    int32_t GetSubtitleNameColor();
    int32_t GetSubtitleLanguage();
    struct FString GetSubtitleCultureName();
    int32_t GetSubtitleColor();
    int32_t GetSubtitleBackgroundOpacity();
    float GetSpeechVolume();
    int32_t GetShadowQuality();
    float GetSfxVolume();
    uint8_t GetScreenResolution();
    void GetResolutionScaleInformation(float CurrentScaleNormalized, int32_t CurrentScaleValue, int32_t MinScaleValue, int32_t MaxScaleValue);
    int32_t GetRepeatedButtonSize();
    float GetRenderScale();
    void GetRefreshRate(float RefreshRate, int32_t Numerator, int32_t Denominator);
    bool GetRecenterCameraOnAttack();
    bool GetPSSRSupported();
    bool GetPSSRIsRunning();
    struct FString GetPSSRInhibitedReason();
    bool GetPSSREnabled();
    int32_t GetPS5RenderMode();
    int32_t GetPostProcessingQuality();
    float GetPlayerCameraSensitivity();
    bool GetPersistentCenterDotEnabled();
    int32_t GetOverallScalabilityLevel();
    float GetMusicVolume();
    float GetMotionControlAimSensitivity();
    bool GetLockMouseInput();
    int32_t GetLightingQuality();
    uint8_t GetLastConfirmedScreenResolution();
    uint8_t GetLastConfirmedFullscreenMode();
    int32_t GetInterfaceLanguage();
    struct FString GetInterfaceCultureName();
    int32_t GetInterfaceColorMode();
    int32_t GetInputDeviceMode();
    bool GetIgnoreGamepad();
    bool GetHighFramerateEnabled();
    int32_t GetHighContrastPreset();
    bool GetHighContrastModeOn();
    int32_t GetHighContrastInteractibleColor();
    bool GetHighContrastHUDEnabled();
    int32_t GetHighContrastHeroColor();
    int32_t GetHighContrastFriendlyNPCColor();
    int32_t GetHighContrastEnemyColor();
    int32_t GetHDRUIBrightness();
    int32_t GetHDRGamePeakBrightness();
    int32_t GetHDRGameBrightness();
    float GetHapticVibrationIntensity();
    float GetHapticsWeapon();
    float GetHapticsPlayerDamage();
    float GetHapticsMelee();
    float GetHapticsMaster();
    float GetHapticsHorde();
    float GetHapticsExplosion();
    uint8_t GetHapticSettings();
    float GetHapticsEnvironmental();
    float GetHapticsEngine();
    float GetHapticsCollectible();
    float GetHapticsBike();
    int32_t GetGeometryQuality();
    class UObject* GetGameUserSettings();
    int32_t GetGameSpeedTimeDilationID();
    float GetGameSpeedFloat();
    int32_t GetGameSpeed();
    int32_t GetGamepadDisplayMode();
    uint8_t GetFullscreenMode();
    float GetFrameRateLimit();
    float GetFOV();
    int32_t GetFoliageDrawDistance();
    int32_t GetDisplayIndex();
    int32_t GetDialogLanguage();
    struct FString GetDialogCultureName();
    bool GetDepthOfFieldEnabled();
    uint8_t GetDefaultWindowPosition();
    uint8_t GetDefaultWindowMode();
    uint8_t GetDefaultResolution();
    float GetControllerVolume();
    int32_t GetControllerDeadzoneSensitivity();
    int32_t GetCloudAndFogQuality();
    bool GetCinematicActive();
    float GetBrightness();
    float GetBikeSteeringSensitivity();
    float GetBikeCameraSensitivity();
    int32_t GetBendShadowQuality();
    struct TArray<uint8_t> GetAvailableSubtitleCultures();
    struct TArray<uint8_t> GetAvailableInterfaceCultures();
    struct TArray<uint8_t> GetAvailableDialogCultures();
    int32_t GetAvailableDeviceCount();
    int32_t GetAudioQualityLevel();
    int32_t GetAudioFormat();
    int32_t GetAudioDynamicRange();
    int32_t GetAntiAliasingQuality();
    int32_t GetAimStickinessSensitivity();
    int32_t GetAimFrictionSensitivity();
    float GetAimCameraSensitivity();
    float GetAdaptiveTriggerStrengthModifier(uint8_t AdaptiveTriggerCategory);
    float GetAdaptiveTriggerStrength(uint8_t AdaptiveTriggerCategory);
    uint8_t GetAdaptiveTriggerSettings();
    bool GetAdaptiveTriggersEnabled(uint8_t AdaptiveTriggerCategory);
    bool Get30HzFramerateEnabled();
    void ConfirmVideoMode();
    void CompleteAutodetect();
    void CacheScalabilityOptions();
    void CacheDeviceCapabilities();
    void BroadcastOnOptionsClosed();
    void BroadcastHCMSettingsChanged();
    bool AreXPIndicatorsEnabled();
    bool AreVideoSettingsDirty();
    bool AreSwipeControlsEnabled();
    bool AreSubtitlesEnabled();
    bool AreSubtitleNamesEnabled();
    void ApplySettings(bool bCheckForCommandLineOverrides);
    void ApplyScalabilityOptions();
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    void ApplyNonResolutionSettings();
    void AccessibilitySettingsChanged();
};

// Class: Engine.HapticFeedbackEffect
class HapticFeedbackEffect : public Object {
public:
    uint8_t HapticDetails[0x100]; // 0x0028 (0x0100)
};

// Class: Engine.InheritableComponentHandler
class InheritableComponentHandler : public Object {
public:
    struct TArray<uint8_t> Records; // 0x0028 (0x0010)
};

// Class: Engine.InputSettings
class InputSettings : public Object {
public:
    struct TArray<uint8_t> AxisConfig; // 0x0028 (0x0010)
    bool bAltEnterTogglesFullscreen; // 0x0038 (0x0001)
    bool bUseMouseForTouch; // 0x0038 (0x0001)
    bool bEnableMouseSmoothing; // 0x0038 (0x0001)
    bool bEnableFOVScaling; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    float FOVScale; // 0x003C (0x0004)
    float DoubleClickTime; // 0x0040 (0x0004)
    float HoldTime; // 0x0044 (0x0004)
    float TapTime; // 0x0048 (0x0004)
    float MouseSensitivityModifier_Vehicle; // 0x004C (0x0004)
    float MouseSensitivityModifier_Aim; // 0x0050 (0x0004)
    bool MouseInvertX_Vehicle; // 0x0054 (0x0001)
    bool MouseInvertY_Vehicle; // 0x0055 (0x0001)
    bool MouseInvertX_Aim; // 0x0056 (0x0001)
    bool MouseInvertY_Aim; // 0x0057 (0x0001)
    uint8_t DefaultViewportMouseCaptureMode; // 0x0058 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0059 (0x0007)
    struct TArray<uint8_t> ActionMappings; // 0x0060 (0x0010)
    struct TArray<uint8_t> AxisMappings; // 0x0070 (0x0010)
    bool bAlwaysShowTouchInterface; // 0x0080 (0x0001)
    bool bShowConsoleOnFourFingerTap; // 0x0081 (0x0001)
    uint8_t Pad_2[0x6]; // 0x0082 (0x0006)
    uint8_t DefaultTouchInterface[0x10]; // 0x0088 (0x0010)
    uint8_t ConsoleKey[0x18]; // 0x0098 (0x0018)
    struct TArray<uint8_t> ConsoleKeys; // 0x00B0 (0x0010)
};

// Class: Engine.InterpCurveEdSetup
class InterpCurveEdSetup : public Object {
public:
    struct TArray<uint8_t> Tabs; // 0x0028 (0x0010)
    int32_t ActiveTab; // 0x0038 (0x0004)
};

// Class: Engine.InterpData
class InterpData : public Object {
public:
    float InterpLength; // 0x0028 (0x0004)
    float PathBuildTime; // 0x002C (0x0004)
    struct TArray<uint8_t> InterpGroups; // 0x0030 (0x0010)
    class UObject* CurveEdSetup; // 0x0040 (0x0008)
    float EdSectionStart; // 0x0048 (0x0004)
    float EdSectionEnd; // 0x004C (0x0004)
    bool bShouldBakeAndPrune; // 0x0050 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0051 (0x0007)
    class UObject* CachedDirectorGroup; // 0x0058 (0x0008)
    struct TArray<uint8_t> AllEventNames; // 0x0060 (0x0010)
};

// Class: Engine.InterpFilter
class InterpFilter : public Object {
public:
    struct FString Caption; // 0x0028 (0x0010)
};

// Class: Engine.InterpFilter_Classes
class InterpFilter_Classes : public InterpFilter {
public:
};

// Class: Engine.InterpFilter_Custom
class InterpFilter_Custom : public InterpFilter {
public:
};

// Class: Engine.InterpGroup
class InterpGroup : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> InterpTracks; // 0x0030 (0x0010)
    struct FName GroupName; // 0x0040 (0x0008)
    uint8_t GroupColor[0x4]; // 0x0048 (0x0004)
    bool bCollapsed; // 0x004C (0x0001)
    bool bVisible; // 0x004C (0x0001)
    bool bIsFolder; // 0x004C (0x0001)
    bool bIsParented; // 0x004C (0x0001)
    bool bAudioSync; // 0x004C (0x0001)
    bool bAudioSyncMaster; // 0x004C (0x0001)
    bool bIsSelected; // 0x004C (0x0001)
    uint8_t Pad_1[0x3]; // 0x004D (0x0003)
    struct FString CinematicName; // 0x0050 (0x0010)
};

// Class: Engine.InterpGroupCamera
class InterpGroupCamera : public InterpGroup {
public:
    uint8_t Pad_0[0x38]; // 0x0028 (0x0038)
    class UObject* CameraAnimInst; // 0x0060 (0x0008)
    float CompressTolerance; // 0x0068 (0x0004)
};

// Class: Engine.InterpGroupDirector
class InterpGroupDirector : public InterpGroup {
public:
};

// Class: Engine.InterpGroupInst
class InterpGroupInst : public Object {
public:
    class UObject* Group; // 0x0028 (0x0008)
    class UObject* GroupActor; // 0x0030 (0x0008)
    struct TArray<uint8_t> TrackInst; // 0x0038 (0x0010)
};

// Class: Engine.InterpGroupInstCamera
class InterpGroupInstCamera : public InterpGroupInst {
public:
};

// Class: Engine.InterpGroupInstDirector
class InterpGroupInstDirector : public InterpGroupInst {
public:
};

// Class: Engine.InterpTrack
class InterpTrack : public Object {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> SubTracks; // 0x0038 (0x0010)
    class UClass* TrackInstClass; // 0x0048 (0x0008)
    uint8_t ActiveCondition; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    struct FString TrackTitle; // 0x0058 (0x0010)
    bool bOnePerGroup; // 0x0068 (0x0001)
    bool bDirGroupOnly; // 0x0068 (0x0001)
    bool bDisableTrack; // 0x0068 (0x0001)
    bool bIsSelected; // 0x0068 (0x0001)
    bool bIsAnimControlTrack; // 0x0068 (0x0001)
    bool bSubTrackOnly; // 0x0068 (0x0001)
    bool bVisible; // 0x0068 (0x0001)
    bool bIsRecording; // 0x0068 (0x0001)
};

// Class: Engine.InterpTrackBoolProp
class InterpTrackBoolProp : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> BoolTrack; // 0x0070 (0x0010)
    struct FName PropertyName; // 0x0080 (0x0008)
};

// Class: Engine.InterpTrackDirector
class InterpTrackDirector : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> CutTrack; // 0x0070 (0x0010)
    bool bSimulateCameraCutsOnClients; // 0x0080 (0x0001)
};

// Class: Engine.InterpTrackEvent
class InterpTrackEvent : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> EventTrack; // 0x0070 (0x0010)
    bool bFireEventsWhenForwards; // 0x0080 (0x0001)
    bool bFireEventsWhenBackwards; // 0x0080 (0x0001)
    bool bFireEventsWhenJumpingForwards; // 0x0080 (0x0001)
    bool bUseCustomEventName; // 0x0080 (0x0001)
};

// Class: Engine.InterpTrackFloatBase
class InterpTrackFloatBase : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t FloatTrack[0x18]; // 0x0070 (0x0018)
    float CurveTension; // 0x0088 (0x0004)
};

// Class: Engine.InterpTrackAnimControl
class InterpTrackAnimControl : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName SlotName; // 0x0090 (0x0008)
    struct TArray<uint8_t> AnimSeqs; // 0x0098 (0x0010)
    bool bSkipAnimNotifiers; // 0x00A8 (0x0001)
};

// Class: Engine.InterpTrackFocus
class InterpTrackFocus : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName SlotName; // 0x0090 (0x0008)
    struct TArray<uint8_t> FocusTrack; // 0x0098 (0x0010)
};

// Class: Engine.InterpTrackFade
class InterpTrackFade : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    bool bPersistFade; // 0x0090 (0x0001)
    bool bFadeAudio; // 0x0090 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0091 (0x0003)
    uint8_t FadeColor[0x10]; // 0x0094 (0x0010)
};

// Class: Engine.InterpTrackFloatAnimBPParam
class InterpTrackFloatAnimBPParam : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    class UClass* AnimBlueprintClass; // 0x0090 (0x0008)
    class UClass* AnimClass; // 0x0098 (0x0008)
    struct FName ParamName; // 0x00A0 (0x0008)
};

// Class: Engine.InterpTrackFloatMaterialParam
class InterpTrackFloatMaterialParam : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct TArray<uint8_t> TargetMaterials; // 0x0090 (0x0010)
    struct FName ParamName; // 0x00A0 (0x0008)
};

// Class: Engine.InterpTrackFloatParticleParam
class InterpTrackFloatParticleParam : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName ParamName; // 0x0090 (0x0008)
};

// Class: Engine.InterpTrackFloatProp
class InterpTrackFloatProp : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName PropertyName; // 0x0090 (0x0008)
};

// Class: Engine.InterpTrackMove
class InterpTrackMove : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t PosTrack[0x18]; // 0x0070 (0x0018)
    uint8_t EulerTrack[0x18]; // 0x0088 (0x0018)
    uint8_t LookupTrack[0x10]; // 0x00A0 (0x0010)
    struct FName LookAtGroupName; // 0x00B0 (0x0008)
    float LinCurveTension; // 0x00B8 (0x0004)
    float AngCurveTension; // 0x00BC (0x0004)
    bool bUseQuatInterpolation; // 0x00C0 (0x0001)
    bool bShowArrowAtKeys; // 0x00C0 (0x0001)
    bool bDisableMovement; // 0x00C0 (0x0001)
    bool bShowTranslationOnCurveEd; // 0x00C0 (0x0001)
    bool bShowRotationOnCurveEd; // 0x00C0 (0x0001)
    bool bHide3DTrack; // 0x00C0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00C1 (0x0003)
    uint8_t RotMode; // 0x00C4 (0x0001)
};

// Class: Engine.InterpTrackMoveAxis
class InterpTrackMoveAxis : public InterpTrackFloatBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    uint8_t MoveAxis; // 0x0090 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0091 (0x0007)
    uint8_t LookupTrack[0x10]; // 0x0098 (0x0010)
};

// Class: Engine.InterpTrackSlomo
class InterpTrackSlomo : public InterpTrackFloatBase {
public:
};

// Class: Engine.InterpTrackLinearColorBase
class InterpTrackLinearColorBase : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t LinearColorTrack[0x18]; // 0x0070 (0x0018)
    float CurveTension; // 0x0088 (0x0004)
};

// Class: Engine.InterpTrackLinearColorProp
class InterpTrackLinearColorProp : public InterpTrackLinearColorBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName PropertyName; // 0x0090 (0x0008)
};

// Class: Engine.InterpTrackParticleReplay
class InterpTrackParticleReplay : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> TrackKeys; // 0x0070 (0x0010)
};

// Class: Engine.InterpTrackToggle
class InterpTrackToggle : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> ToggleTrack; // 0x0070 (0x0010)
    bool bActivateSystemEachUpdate; // 0x0080 (0x0001)
    bool bActivateWithJustAttachedFlag; // 0x0080 (0x0001)
    bool bFireEventsWhenForwards; // 0x0080 (0x0001)
    bool bFireEventsWhenBackwards; // 0x0080 (0x0001)
    bool bFireEventsWhenJumpingForwards; // 0x0080 (0x0001)
};

// Class: Engine.InterpTrackVectorBase
class InterpTrackVectorBase : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t VectorTrack[0x18]; // 0x0070 (0x0018)
    float CurveTension; // 0x0088 (0x0004)
};

// Class: Engine.InterpTrackAudioMaster
class InterpTrackAudioMaster : public InterpTrackVectorBase {
public:
};

// Class: Engine.InterpTrackColorProp
class InterpTrackColorProp : public InterpTrackVectorBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName PropertyName; // 0x0090 (0x0008)
};

// Class: Engine.InterpTrackColorScale
class InterpTrackColorScale : public InterpTrackVectorBase {
public:
};

// Class: Engine.InterpTrackSound
class InterpTrackSound : public InterpTrackVectorBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct TArray<uint8_t> Sounds; // 0x0090 (0x0010)
    bool bPlayOnReverse; // 0x00A0 (0x0001)
    bool bContinueSoundOnMatineeEnd; // 0x00A0 (0x0001)
    bool bSuppressSubtitles; // 0x00A0 (0x0001)
    bool bTreatAsDialogue; // 0x00A0 (0x0001)
    bool bAttach; // 0x00A0 (0x0001)
};

// Class: Engine.InterpTrackVectorMaterialParam
class InterpTrackVectorMaterialParam : public InterpTrackVectorBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct TArray<uint8_t> TargetMaterials; // 0x0090 (0x0010)
    struct FName ParamName; // 0x00A0 (0x0008)
};

// Class: Engine.InterpTrackVectorProp
class InterpTrackVectorProp : public InterpTrackVectorBase {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct FName PropertyName; // 0x0090 (0x0008)
};

// Class: Engine.InterpTrackVisibility
class InterpTrackVisibility : public InterpTrack {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> VisibilityTrack; // 0x0070 (0x0010)
    bool bFireEventsWhenForwards; // 0x0080 (0x0001)
    bool bFireEventsWhenBackwards; // 0x0080 (0x0001)
    bool bFireEventsWhenJumpingForwards; // 0x0080 (0x0001)
};

// Class: Engine.InterpTrackInst
class InterpTrackInst : public Object {
public:
};

// Class: Engine.InterpTrackInstAnimControl
class InterpTrackInstAnimControl : public InterpTrackInst {
public:
    float LastUpdatePosition; // 0x0028 (0x0004)
};

// Class: Engine.InterpTrackInstFocus
class InterpTrackInstFocus : public InterpTrackInst {
public:
    float LastUpdatePosition; // 0x0028 (0x0004)
};

// Class: Engine.InterpTrackInstAudioMaster
class InterpTrackInstAudioMaster : public InterpTrackInst {
public:
};

// Class: Engine.InterpTrackInstColorScale
class InterpTrackInstColorScale : public InterpTrackInst {
public:
};

// Class: Engine.InterpTrackInstDirector
class InterpTrackInstDirector : public InterpTrackInst {
public:
    class UObject* OldViewTarget; // 0x0028 (0x0008)
};

// Class: Engine.InterpTrackInstEvent
class InterpTrackInstEvent : public InterpTrackInst {
public:
    float LastUpdatePosition; // 0x0028 (0x0004)
};

// Class: Engine.InterpTrackInstFade
class InterpTrackInstFade : public InterpTrackInst {
public:
};

// Class: Engine.InterpTrackInstFloatAnimBPParam
class InterpTrackInstFloatAnimBPParam : public InterpTrackInst {
public:
    class UObject* AnimScriptInstance; // 0x0028 (0x0008)
    float ResetFloat; // 0x0030 (0x0004)
};

// Class: Engine.InterpTrackInstFloatMaterialParam
class InterpTrackInstFloatMaterialParam : public InterpTrackInst {
public:
    struct TArray<uint8_t> MaterialInstances; // 0x0028 (0x0010)
    struct TArray<uint8_t> ResetFloats; // 0x0038 (0x0010)
    struct TArray<uint8_t> PrimitiveMaterialRefs; // 0x0048 (0x0010)
    class UObject* InstancedTrack; // 0x0058 (0x0008)
};

// Class: Engine.InterpTrackInstFloatParticleParam
class InterpTrackInstFloatParticleParam : public InterpTrackInst {
public:
    float ResetFloat; // 0x0028 (0x0004)
};

// Class: Engine.InterpTrackInstMove
class InterpTrackInstMove : public InterpTrackInst {
public:
    uint8_t ResetLocation[0xC]; // 0x0028 (0x000C)
    uint8_t ResetRotation[0xC]; // 0x0034 (0x000C)
};

// Class: Engine.InterpTrackInstParticleReplay
class InterpTrackInstParticleReplay : public InterpTrackInst {
public:
    float LastUpdatePosition; // 0x0028 (0x0004)
};

// Class: Engine.InterpTrackInstProperty
class InterpTrackInstProperty : public InterpTrackInst {
public:
    class UObject* InterpProperty; // 0x0028 (0x0008)
    class UObject* PropertyOuterObjectInst; // 0x0030 (0x0008)
};

// Class: Engine.InterpTrackInstBoolProp
class InterpTrackInstBoolProp : public InterpTrackInstProperty {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    class UObject* BoolProperty; // 0x0040 (0x0008)
    bool ResetBool; // 0x0048 (0x0001)
};

// Class: Engine.InterpTrackInstColorProp
class InterpTrackInstColorProp : public InterpTrackInstProperty {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t ResetColor[0x4]; // 0x0040 (0x0004)
};

// Class: Engine.InterpTrackInstFloatProp
class InterpTrackInstFloatProp : public InterpTrackInstProperty {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    float ResetFloat; // 0x0040 (0x0004)
};

// Class: Engine.InterpTrackInstLinearColorProp
class InterpTrackInstLinearColorProp : public InterpTrackInstProperty {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t ResetColor[0x10]; // 0x0040 (0x0010)
};

// Class: Engine.InterpTrackInstVectorProp
class InterpTrackInstVectorProp : public InterpTrackInstProperty {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t ResetVector[0xC]; // 0x0040 (0x000C)
};

// Class: Engine.InterpTrackInstSlomo
class InterpTrackInstSlomo : public InterpTrackInst {
public:
    float OldTimeDilation; // 0x0028 (0x0004)
};

// Class: Engine.InterpTrackInstSound
class InterpTrackInstSound : public InterpTrackInst {
public:
    float LastUpdatePosition; // 0x0028 (0x0004)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    class UObject* PlayAudioComp; // 0x0030 (0x0008)
};

// Class: Engine.InterpTrackInstToggle
class InterpTrackInstToggle : public InterpTrackInst {
public:
    uint8_t Action; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float LastUpdatePosition; // 0x002C (0x0004)
    bool bSavedActiveState; // 0x0030 (0x0001)
};

// Class: Engine.InterpTrackInstVectorMaterialParam
class InterpTrackInstVectorMaterialParam : public InterpTrackInst {
public:
    struct TArray<uint8_t> MaterialInstances; // 0x0028 (0x0010)
    struct TArray<uint8_t> ResetVectors; // 0x0038 (0x0010)
    struct TArray<uint8_t> PrimitiveMaterialRefs; // 0x0048 (0x0010)
    class UObject* InstancedTrack; // 0x0058 (0x0008)
};

// Class: Engine.InterpTrackInstVisibility
class InterpTrackInstVisibility : public InterpTrackInst {
public:
    uint8_t Action; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float LastUpdatePosition; // 0x002C (0x0004)
};

// Class: Engine.IntSerialization
class IntSerialization : public Object {
public:
    uint8_t UnsignedInt16Variable[0x2]; // 0x0028 (0x0002)
    uint8_t Pad_0[0x2]; // 0x002A (0x0002)
    uint8_t UnsignedInt32Variable[0x4]; // 0x002C (0x0004)
    uint8_t UnsignedInt64Variable[0x8]; // 0x0030 (0x0008)
    uint8_t SignedInt8Variable; // 0x0038 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0039 (0x0001)
    uint8_t SignedInt16Variable[0x2]; // 0x003A (0x0002)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    int64_t SignedInt64Variable; // 0x0040 (0x0008)
    uint8_t UnsignedInt8Variable; // 0x0048 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0049 (0x0003)
    int32_t SignedInt32Variable; // 0x004C (0x0004)
};

// Class: Engine.Layer
class Layer : public Object {
public:
    struct FName LayerName; // 0x0028 (0x0008)
    bool bIsVisible; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> ActorStats; // 0x0038 (0x0010)
};

// Class: Engine.LevelStreaming
class LevelStreaming : public Object {
public:
    struct FName PackageName; // 0x0028 (0x0008)
    uint8_t WorldAsset[0x20]; // 0x0030 (0x0020)
    struct FName PackageNameToLoad; // 0x0050 (0x0008)
    struct TArray<uint8_t> LODPackageNames; // 0x0058 (0x0010)
    uint8_t Pad_0[0x18]; // 0x0068 (0x0018)
    uint8_t LevelTransform[0x30]; // 0x0080 (0x0030)
    uint8_t Pad_1[0xA0]; // 0x00B0 (0x00A0)
    bool bShouldBeVisibleInEditor; // 0x0150 (0x0001)
    bool bLocked; // 0x0150 (0x0001)
    bool bShouldBeLoaded; // 0x0150 (0x0001)
    bool bShouldBeVisible; // 0x0150 (0x0001)
    bool bShouldBlockOnLoad; // 0x0150 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0151 (0x0003)
    int32_t LevelLODIndex; // 0x0154 (0x0004)
    bool bDisableDistanceStreaming; // 0x0158 (0x0001)
    bool bNeverUnloadDuringCinematics; // 0x0158 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0159 (0x0003)
    int32_t ForcedCinematicLODIndex; // 0x015C (0x0004)
    bool bSpecialStreamingActionsApplied; // 0x0160 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0161 (0x0003)
    bool bDrawOnLevelStatusMap; // 0x0164 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0165 (0x0003)
    uint8_t DrawColor[0x4]; // 0x0168 (0x0004)
    uint8_t LevelColor[0x10]; // 0x016C (0x0010)
    uint8_t Pad_6[0x4]; // 0x017C (0x0004)
    struct TArray<uint8_t> EditorStreamingVolumes; // 0x0180 (0x0010)
    float MinTimeBetweenVolumeUnloadRequests; // 0x0190 (0x0004)
    uint8_t Pad_7[0x4]; // 0x0194 (0x0004)
    struct TArray<uint8_t> Keywords; // 0x0198 (0x0010)
    uint8_t OnLevelLoaded[0x10]; // 0x01A8 (0x0010)
    uint8_t OnLevelUnloaded[0x10]; // 0x01B8 (0x0010)
    uint8_t OnLevelShown[0x10]; // 0x01C8 (0x0010)
    uint8_t OnLevelHidden[0x10]; // 0x01D8 (0x0010)
    uint8_t Pad_8[0x88]; // 0x01E8 (0x0088)
    class UObject* LoadedLevel; // 0x0270 (0x0008)
    class UObject* PendingUnloadLevel; // 0x0278 (0x0008)

public:
    bool IsStreamingStatePending();
    bool IsLevelVisible();
    bool IsLevelLoaded();
    class UObject* GetLevelScriptActor();
    uint8_t GetLevelCenter();
    class UObject* CreateInstance(struct FString UniqueInstanceName);
};

// Class: Engine.LevelStreamingAlwaysLoaded
class LevelStreamingAlwaysLoaded : public LevelStreaming {
public:
};

// Class: Engine.LevelStreamingKismet
class LevelStreamingKismet : public LevelStreaming {
public:
    uint8_t Pad_0[0x278]; // 0x0028 (0x0278)
    bool bInitiallyLoaded; // 0x02A0 (0x0001)
    bool bInitiallyVisible; // 0x02A0 (0x0001)
};

// Class: Engine.LevelStreamingPersistent
class LevelStreamingPersistent : public LevelStreaming {
public:
};

// Class: Engine.LightmappedSurfaceCollection
class LightmappedSurfaceCollection : public Object {
public:
    class UObject* SourceModel; // 0x0028 (0x0008)
    struct TArray<uint8_t> Surfaces; // 0x0030 (0x0010)
};

// Class: Engine.LightmassPrimitiveSettingsObject
class LightmassPrimitiveSettingsObject : public Object {
public:
    uint8_t LightmassSettings[0x18]; // 0x0028 (0x0018)
};

// Class: Engine.LocalMessage
class LocalMessage : public Object {
public:
};

// Class: Engine.EngineMessage
class EngineMessage : public LocalMessage {
public:
    struct FString FailedPlaceMessage; // 0x0028 (0x0010)
    struct FString MaxedOutMessage; // 0x0038 (0x0010)
    struct FString EnteredMessage; // 0x0048 (0x0010)
    struct FString LeftMessage; // 0x0058 (0x0010)
    struct FString GlobalNameChange; // 0x0068 (0x0010)
    struct FString SpecEnteredMessage; // 0x0078 (0x0010)
    struct FString NewPlayerMessage; // 0x0088 (0x0010)
    struct FString NewSpecMessage; // 0x0098 (0x0010)
};

// Class: Engine.MaterialExpressionAbs
class MaterialExpressionAbs : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionActorPositionWS
class MaterialExpressionActorPositionWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionAdd
class MaterialExpressionAdd : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    float ConstA; // 0x00E0 (0x0004)
    float ConstB; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionAppendVector
class MaterialExpressionAppendVector : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionAtmosphericFogColor
class MaterialExpressionAtmosphericFogColor : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t WorldPosition[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionBendSceneHeightmap
class MaterialExpressionBendSceneHeightmap : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t WorldCoordinate[0x38]; // 0x0070 (0x0038)
    uint8_t SceneHeightmapTextureId; // 0x00A8 (0x0001)
};

// Class: Engine.MaterialExpressionBlackBody
class MaterialExpressionBlackBody : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Temp[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionBreakMaterialAttributes
class MaterialExpressionBreakMaterialAttributes : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Struct[0x38]; // 0x0070 (0x0038)
    uint8_t MaterialAttributes[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionBumpOffset
class MaterialExpressionBumpOffset : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Coordinate[0x38]; // 0x0070 (0x0038)
    uint8_t Height[0x38]; // 0x00A8 (0x0038)
    uint8_t HeightRatioInput[0x38]; // 0x00E0 (0x0038)
    float HeightRatio; // 0x0118 (0x0004)
    float ReferencePlane; // 0x011C (0x0004)
    uint8_t ConstCoordinate[0x4]; // 0x0120 (0x0004)
};

// Class: Engine.MaterialExpressionCameraPositionWS
class MaterialExpressionCameraPositionWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionCameraVectorWS
class MaterialExpressionCameraVectorWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionCeil
class MaterialExpressionCeil : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionClamp
class MaterialExpressionClamp : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    uint8_t Min[0x38]; // 0x00A8 (0x0038)
    uint8_t Max[0x38]; // 0x00E0 (0x0038)
    uint8_t ClampMode; // 0x0118 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0119 (0x0003)
    float MinDefault; // 0x011C (0x0004)
    float MaxDefault; // 0x0120 (0x0004)
};

// Class: Engine.MaterialExpressionCollectionParameter
class MaterialExpressionCollectionParameter : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* Collection; // 0x0070 (0x0008)
    struct FName ParameterName; // 0x0078 (0x0008)
    uint8_t ParameterId[0x10]; // 0x0080 (0x0010)
};

// Class: Engine.MaterialExpressionComment
class MaterialExpressionComment : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    int32_t SizeX; // 0x0070 (0x0004)
    int32_t SizeY; // 0x0074 (0x0004)
    struct FString Text; // 0x0078 (0x0010)
    uint8_t CommentColor[0x10]; // 0x0088 (0x0010)
};

// Class: Engine.MaterialExpressionComponentMask
class MaterialExpressionComponentMask : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    bool R; // 0x00A8 (0x0001)
    bool G; // 0x00A8 (0x0001)
    bool B; // 0x00A8 (0x0001)
    bool A; // 0x00A8 (0x0001)
};

// Class: Engine.MaterialExpressionConstant
class MaterialExpressionConstant : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    float R; // 0x0070 (0x0004)
};

// Class: Engine.MaterialExpressionConstant2Vector
class MaterialExpressionConstant2Vector : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    float R; // 0x0070 (0x0004)
    float G; // 0x0074 (0x0004)
};

// Class: Engine.MaterialExpressionConstant3Vector
class MaterialExpressionConstant3Vector : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Constant[0x10]; // 0x0070 (0x0010)
};

// Class: Engine.MaterialExpressionConstant4Vector
class MaterialExpressionConstant4Vector : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Constant[0x10]; // 0x0070 (0x0010)
};

// Class: Engine.MaterialExpressionConstantBiasScale
class MaterialExpressionConstantBiasScale : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    float Bias; // 0x00A8 (0x0004)
    float Scale; // 0x00AC (0x0004)
};

// Class: Engine.MaterialExpressionCosine
class MaterialExpressionCosine : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    float Period; // 0x00A8 (0x0004)
};

// Class: Engine.MaterialExpressionCrossProduct
class MaterialExpressionCrossProduct : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionCustom
class MaterialExpressionCustom : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct FString HeaderCode; // 0x0070 (0x0010)
    struct FString Code; // 0x0080 (0x0010)
    uint8_t OutputType; // 0x0090 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0091 (0x0007)
    struct FString Description; // 0x0098 (0x0010)
    struct TArray<uint8_t> Inputs; // 0x00A8 (0x0010)
};

// Class: Engine.MaterialExpressionTangentOutput
class MaterialExpressionTangentOutput : public MaterialExpressionCustomOutput {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDDX
class MaterialExpressionDDX : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Value[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDDY
class MaterialExpressionDDY : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Value[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDecalDerivative
class MaterialExpressionDecalDerivative : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionDecalMipmapLevel
class MaterialExpressionDecalMipmapLevel : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t TextureSize[0x38]; // 0x0070 (0x0038)
    float ConstWidth; // 0x00A8 (0x0004)
    float ConstHeight; // 0x00AC (0x0004)
};

// Class: Engine.MaterialExpressionDepthFade
class MaterialExpressionDepthFade : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t InOpacity[0x38]; // 0x0070 (0x0038)
    uint8_t FadeDistance[0x38]; // 0x00A8 (0x0038)
    float OpacityDefault; // 0x00E0 (0x0004)
    float FadeDistanceDefault; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionDepthFogColor
class MaterialExpressionDepthFogColor : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t WorldPosition[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDepthOfFieldFunction
class MaterialExpressionDepthOfFieldFunction : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t FunctionValue; // 0x0070 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0071 (0x0007)
    uint8_t Depth[0x38]; // 0x0078 (0x0038)
};

// Class: Engine.MaterialExpressionDeriveNormalZ
class MaterialExpressionDeriveNormalZ : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t InXY[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDesaturation
class MaterialExpressionDesaturation : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    uint8_t Fraction[0x38]; // 0x00A8 (0x0038)
    uint8_t LuminanceFactors[0x10]; // 0x00E0 (0x0010)
};

// Class: Engine.MaterialExpressionDistance
class MaterialExpressionDistance : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionDistanceCullFade
class MaterialExpressionDistanceCullFade : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionDistanceFieldGradient
class MaterialExpressionDistanceFieldGradient : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Position[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDistanceToNearestSurface
class MaterialExpressionDistanceToNearestSurface : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Position[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionDivide
class MaterialExpressionDivide : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    float ConstA; // 0x00E0 (0x0004)
    float ConstB; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionDotProduct
class MaterialExpressionDotProduct : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionDynamicParameter
class MaterialExpressionDynamicParameter : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> ParamNames; // 0x0070 (0x0010)
    uint8_t DefaultValue[0x10]; // 0x0080 (0x0010)
};

// Class: Engine.MaterialExpressionEyeAdaptation
class MaterialExpressionEyeAdaptation : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionFeatureLevelSwitch
class MaterialExpressionFeatureLevelSwitch : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Default[0x38]; // 0x0070 (0x0038)
    uint8_t Inputs[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionFloor
class MaterialExpressionFloor : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionFmod
class MaterialExpressionFmod : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionFontSample
class MaterialExpressionFontSample : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* Font; // 0x0070 (0x0008)
    int32_t FontTexturePage; // 0x0078 (0x0004)
};

// Class: Engine.MaterialExpressionFontSampleParameter
class MaterialExpressionFontSampleParameter : public MaterialExpressionFontSample {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    struct FName ParameterName; // 0x0080 (0x0008)
    uint8_t ExpressionGUID[0x10]; // 0x0088 (0x0010)
    struct FName Group; // 0x0098 (0x0008)
};

// Class: Engine.MaterialExpressionFrac
class MaterialExpressionFrac : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionFresnel
class MaterialExpressionFresnel : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t ExponentIn[0x38]; // 0x0070 (0x0038)
    float Exponent; // 0x00A8 (0x0004)
    uint8_t Pad_1[0x4]; // 0x00AC (0x0004)
    uint8_t BaseReflectFractionIn[0x38]; // 0x00B0 (0x0038)
    float BaseReflectFraction; // 0x00E8 (0x0004)
    uint8_t Pad_2[0x4]; // 0x00EC (0x0004)
    uint8_t Normal[0x38]; // 0x00F0 (0x0038)
};

// Class: Engine.MaterialExpressionFunctionInput
class MaterialExpressionFunctionInput : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Preview[0x38]; // 0x0070 (0x0038)
    struct FString InputName; // 0x00A8 (0x0010)
    struct FString Description; // 0x00B8 (0x0010)
    uint8_t Id[0x10]; // 0x00C8 (0x0010)
    uint8_t InputType; // 0x00D8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00D9 (0x0007)
    uint8_t PreviewValue[0x10]; // 0x00E0 (0x0010)
    bool bUsePreviewValueAsDefault; // 0x00F0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00F1 (0x0003)
    int32_t SortPriority; // 0x00F4 (0x0004)
    bool bCompilingFunctionPreview; // 0x00F8 (0x0001)
};

// Class: Engine.MaterialExpressionFunctionOutput
class MaterialExpressionFunctionOutput : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct FString OutputName; // 0x0070 (0x0010)
    struct FString Description; // 0x0080 (0x0010)
    int32_t SortPriority; // 0x0090 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0094 (0x0004)
    uint8_t A[0x38]; // 0x0098 (0x0038)
    bool bLastPreviewed; // 0x00D0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00D1 (0x0003)
    uint8_t Id[0x10]; // 0x00D4 (0x0010)
};

// Class: Engine.MaterialExpressionGIReplace
class MaterialExpressionGIReplace : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Default[0x38]; // 0x0070 (0x0038)
    uint8_t StaticIndirect[0x38]; // 0x00A8 (0x0038)
    uint8_t DynamicIndirect[0x38]; // 0x00E0 (0x0038)
};

// Class: Engine.MaterialExpressionIf
class MaterialExpressionIf : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    uint8_t AGreaterThanB[0x38]; // 0x00E0 (0x0038)
    uint8_t AEqualsB[0x38]; // 0x0118 (0x0038)
    uint8_t ALessThanB[0x38]; // 0x0150 (0x0038)
    float EqualsThreshold; // 0x0188 (0x0004)
    float ConstB; // 0x018C (0x0004)
    float ConstAEqualsB; // 0x0190 (0x0004)
};

// Class: Engine.MaterialExpressionLightmapUVs
class MaterialExpressionLightmapUVs : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionLightmassReplace
class MaterialExpressionLightmassReplace : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t RealTime[0x38]; // 0x0070 (0x0038)
    uint8_t Lightmass[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionLightVector
class MaterialExpressionLightVector : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionLinearInterpolate
class MaterialExpressionLinearInterpolate : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    uint8_t Alpha[0x38]; // 0x00E0 (0x0038)
    float ConstA; // 0x0118 (0x0004)
    float ConstB; // 0x011C (0x0004)
    float ConstAlpha; // 0x0120 (0x0004)
};

// Class: Engine.MaterialExpressionLogarithm2
class MaterialExpressionLogarithm2 : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t X[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionMakeMaterialAttributes
class MaterialExpressionMakeMaterialAttributes : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t BaseColor[0x38]; // 0x0070 (0x0038)
    uint8_t Metallic[0x38]; // 0x00A8 (0x0038)
    uint8_t Specular[0x38]; // 0x00E0 (0x0038)
    uint8_t Roughness[0x38]; // 0x0118 (0x0038)
    uint8_t EmissiveColor[0x38]; // 0x0150 (0x0038)
    uint8_t Opacity[0x38]; // 0x0188 (0x0038)
    uint8_t OpacityMask[0x38]; // 0x01C0 (0x0038)
    uint8_t Normal[0x38]; // 0x01F8 (0x0038)
    uint8_t Tangent[0x38]; // 0x0230 (0x0038)
    uint8_t WorldPositionOffset[0x38]; // 0x0268 (0x0038)
    uint8_t WorldDisplacement[0x38]; // 0x02A0 (0x0038)
    uint8_t TessellationMultiplier[0x38]; // 0x02D8 (0x0038)
    uint8_t SubsurfaceColor[0x38]; // 0x0310 (0x0038)
    uint8_t ClearCoat[0x38]; // 0x0348 (0x0038)
    uint8_t ClearCoatRoughness[0x38]; // 0x0380 (0x0038)
    uint8_t AmbientOcclusion[0x38]; // 0x03B8 (0x0038)
    uint8_t Refraction[0x38]; // 0x03F0 (0x0038)
    uint8_t Procedural[0x38]; // 0x0428 (0x0038)
    uint8_t CustomizedUVs[0x38]; // 0x0460 (0x0038)
    uint8_t Pad_1[0x188]; // 0x0498 (0x0188)
    uint8_t CustomizedVectors[0x38]; // 0x0620 (0x0038)
    uint8_t Pad_2[0xA8]; // 0x0658 (0x00A8)
    uint8_t DepthBias[0x38]; // 0x0700 (0x0038)
    uint8_t PixelDepthOffset[0x38]; // 0x0738 (0x0038)
};

// Class: Engine.MaterialExpressionMaterialFunctionCall
class MaterialExpressionMaterialFunctionCall : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* MaterialFunction; // 0x0070 (0x0008)
    struct TArray<uint8_t> FunctionInputs; // 0x0078 (0x0010)
    struct TArray<uint8_t> FunctionOutputs; // 0x0088 (0x0010)
};

// Class: Engine.MaterialExpressionMaterialProxyReplace
class MaterialExpressionMaterialProxyReplace : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t RealTime[0x38]; // 0x0070 (0x0038)
    uint8_t MaterialProxy[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionMax
class MaterialExpressionMax : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    float ConstA; // 0x00E0 (0x0004)
    float ConstB; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionMin
class MaterialExpressionMin : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    float ConstA; // 0x00E0 (0x0004)
    float ConstB; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionMultiply
class MaterialExpressionMultiply : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    float ConstA; // 0x00E0 (0x0004)
    float ConstB; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionNoise
class MaterialExpressionNoise : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Position[0x38]; // 0x0070 (0x0038)
    uint8_t FilterWidth[0x38]; // 0x00A8 (0x0038)
    uint8_t ScaleIn[0x38]; // 0x00E0 (0x0038)
    float Scale; // 0x0118 (0x0004)
    int32_t Quality; // 0x011C (0x0004)
    uint8_t NoiseFunction; // 0x0120 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0121 (0x0003)
    bool bTurbulence; // 0x0124 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0125 (0x0003)
    int32_t Levels; // 0x0128 (0x0004)
    float OutputMin; // 0x012C (0x0004)
    float OutputMax; // 0x0130 (0x0004)
    float LevelScale; // 0x0134 (0x0004)
};

// Class: Engine.MaterialExpressionNormalize
class MaterialExpressionNormalize : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t VectorInput[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionObjectBounds
class MaterialExpressionObjectBounds : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionObjectOrientation
class MaterialExpressionObjectOrientation : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionObjectPositionWS
class MaterialExpressionObjectPositionWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionObjectRadius
class MaterialExpressionObjectRadius : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionOneMinus
class MaterialExpressionOneMinus : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionPanner
class MaterialExpressionPanner : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Coordinate[0x38]; // 0x0070 (0x0038)
    uint8_t Time[0x38]; // 0x00A8 (0x0038)
    float SpeedX; // 0x00E0 (0x0004)
    float SpeedY; // 0x00E4 (0x0004)
    uint8_t ConstCoordinate[0x4]; // 0x00E8 (0x0004)
    bool bFractionalPart; // 0x00EC (0x0001)
};

// Class: Engine.MaterialExpressionParameter
class MaterialExpressionParameter : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct FName ParameterName; // 0x0070 (0x0008)
    uint8_t ExpressionGUID[0x10]; // 0x0078 (0x0010)
    struct FName Group; // 0x0088 (0x0008)
};

// Class: Engine.MaterialExpressionScalarParameter
class MaterialExpressionScalarParameter : public MaterialExpressionParameter {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    float DefaultValue; // 0x0090 (0x0004)
    float SliderMin; // 0x0094 (0x0004)
    float SliderMax; // 0x0098 (0x0004)
};

// Class: Engine.MaterialExpressionStaticBoolParameter
class MaterialExpressionStaticBoolParameter : public MaterialExpressionParameter {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    bool DefaultValue; // 0x0090 (0x0001)
};

// Class: Engine.MaterialExpressionStaticSwitchParameter
class MaterialExpressionStaticSwitchParameter : public MaterialExpressionStaticBoolParameter {
public:
    uint8_t Pad_0[0x70]; // 0x0028 (0x0070)
    uint8_t A[0x38]; // 0x0098 (0x0038)
    uint8_t B[0x38]; // 0x00D0 (0x0038)
};

// Class: Engine.MaterialExpressionStaticComponentMaskParameter
class MaterialExpressionStaticComponentMaskParameter : public MaterialExpressionParameter {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    uint8_t Input[0x38]; // 0x0090 (0x0038)
    bool DefaultR; // 0x00C8 (0x0001)
    bool DefaultG; // 0x00C8 (0x0001)
    bool DefaultB; // 0x00C8 (0x0001)
    bool DefaultA; // 0x00C8 (0x0001)
};

// Class: Engine.MaterialExpressionVectorParameter
class MaterialExpressionVectorParameter : public MaterialExpressionParameter {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    uint8_t DefaultValue[0x10]; // 0x0090 (0x0010)
};

// Class: Engine.MaterialExpressionParticleColor
class MaterialExpressionParticleColor : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleDirection
class MaterialExpressionParticleDirection : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleMacroUV
class MaterialExpressionParticleMacroUV : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleMotionBlurFade
class MaterialExpressionParticleMotionBlurFade : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticlePositionWS
class MaterialExpressionParticlePositionWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleRadius
class MaterialExpressionParticleRadius : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleRandom
class MaterialExpressionParticleRandom : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleRelativeTime
class MaterialExpressionParticleRelativeTime : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleSize
class MaterialExpressionParticleSize : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionParticleSpeed
class MaterialExpressionParticleSpeed : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionPerInstanceFadeAmount
class MaterialExpressionPerInstanceFadeAmount : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionPerInstanceRandom
class MaterialExpressionPerInstanceRandom : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionPixelDepth
class MaterialExpressionPixelDepth : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionPixelNormalWS
class MaterialExpressionPixelNormalWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionPower
class MaterialExpressionPower : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Base[0x38]; // 0x0070 (0x0038)
    uint8_t Exponent[0x38]; // 0x00A8 (0x0038)
    float ConstExponent; // 0x00E0 (0x0004)
};

// Class: Engine.MaterialExpressionPrecomputedAOMask
class MaterialExpressionPrecomputedAOMask : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionQualitySwitch
class MaterialExpressionQualitySwitch : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Default[0x38]; // 0x0070 (0x0038)
    uint8_t Inputs[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.MaterialExpressionReflectionVectorWS
class MaterialExpressionReflectionVectorWS : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t CustomWorldNormal[0x38]; // 0x0070 (0x0038)
    bool bNormalizeCustomWorldNormal; // 0x00A8 (0x0001)
};

// Class: Engine.MaterialExpressionRotateAboutAxis
class MaterialExpressionRotateAboutAxis : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t NormalizedRotationAxis[0x38]; // 0x0070 (0x0038)
    uint8_t RotationAngle[0x38]; // 0x00A8 (0x0038)
    uint8_t PivotPoint[0x38]; // 0x00E0 (0x0038)
    uint8_t Position[0x38]; // 0x0118 (0x0038)
    float Period; // 0x0150 (0x0004)
};

// Class: Engine.MaterialExpressionRotator
class MaterialExpressionRotator : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Coordinate[0x38]; // 0x0070 (0x0038)
    uint8_t Time[0x38]; // 0x00A8 (0x0038)
    uint8_t SpeedIn[0x38]; // 0x00E0 (0x0038)
    uint8_t RotationPoint[0x38]; // 0x0118 (0x0038)
    float CenterX; // 0x0150 (0x0004)
    float CenterY; // 0x0154 (0x0004)
    float Speed; // 0x0158 (0x0004)
    uint8_t ConstCoordinate[0x4]; // 0x015C (0x0004)
};

// Class: Engine.MaterialExpressionSceneColor
class MaterialExpressionSceneColor : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t InputMode; // 0x0070 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0071 (0x0007)
    uint8_t Input[0x38]; // 0x0078 (0x0038)
    uint8_t OffsetFraction[0x38]; // 0x00B0 (0x0038)
    uint8_t ConstInput[0x8]; // 0x00E8 (0x0008)
};

// Class: Engine.MaterialExpressionSceneDepth
class MaterialExpressionSceneDepth : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t InputMode; // 0x0070 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0071 (0x0007)
    uint8_t Input[0x38]; // 0x0078 (0x0038)
    uint8_t Coordinates[0x38]; // 0x00B0 (0x0038)
    uint8_t ConstInput[0x8]; // 0x00E8 (0x0008)
};

// Class: Engine.MaterialExpressionSceneTexelSize
class MaterialExpressionSceneTexelSize : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionSceneTexture
class MaterialExpressionSceneTexture : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Coordinates[0x38]; // 0x0070 (0x0038)
    uint8_t SceneTextureId; // 0x00A8 (0x0001)
    bool bClampUVs; // 0x00A9 (0x0001)
    bool bFiltered; // 0x00AA (0x0001)
};

// Class: Engine.MaterialExpressionScreenPosition
class MaterialExpressionScreenPosition : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Mapping; // 0x0070 (0x0001)
};

// Class: Engine.MaterialExpressionSine
class MaterialExpressionSine : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    float Period; // 0x00A8 (0x0004)
};

// Class: Engine.MaterialExpressionSpeedTree
class MaterialExpressionSpeedTree : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t GeometryType; // 0x0070 (0x0001)
    uint8_t WindType; // 0x0071 (0x0001)
    uint8_t LODType; // 0x0072 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0073 (0x0001)
    float BillboardThreshold; // 0x0074 (0x0004)
    bool bAccurateWindVelocities; // 0x0078 (0x0001)
};

// Class: Engine.MaterialExpressionSphereMask
class MaterialExpressionSphereMask : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    uint8_t Radius[0x38]; // 0x00E0 (0x0038)
    uint8_t Hardness[0x38]; // 0x0118 (0x0038)
    float AttenuationRadius; // 0x0150 (0x0004)
    float HardnessPercent; // 0x0154 (0x0004)
};

// Class: Engine.MaterialExpressionSphericalParticleOpacity
class MaterialExpressionSphericalParticleOpacity : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Density[0x38]; // 0x0070 (0x0038)
    float ConstantDensity; // 0x00A8 (0x0004)
};

// Class: Engine.MaterialExpressionSquareRoot
class MaterialExpressionSquareRoot : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.MaterialExpressionStaticBool
class MaterialExpressionStaticBool : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    bool Value; // 0x0070 (0x0001)
};

// Class: Engine.MaterialExpressionStaticSwitch
class MaterialExpressionStaticSwitch : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    bool DefaultValue; // 0x0070 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0071 (0x0007)
    uint8_t A[0x38]; // 0x0078 (0x0038)
    uint8_t B[0x38]; // 0x00B0 (0x0038)
    uint8_t Value[0x38]; // 0x00E8 (0x0038)
};

// Class: Engine.MaterialExpressionSubtract
class MaterialExpressionSubtract : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t A[0x38]; // 0x0070 (0x0038)
    uint8_t B[0x38]; // 0x00A8 (0x0038)
    float ConstA; // 0x00E0 (0x0004)
    float ConstB; // 0x00E4 (0x0004)
};

// Class: Engine.MaterialExpressionTextureBase
class MaterialExpressionTextureBase : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    class UObject* Texture; // 0x0070 (0x0008)
    uint8_t SamplerType; // 0x0078 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0079 (0x0003)
    bool IsDefaultMeshpaintTexture; // 0x007C (0x0001)
};

// Class: Engine.MaterialExpressionTextureObject
class MaterialExpressionTextureObject : public MaterialExpressionTextureBase {
public:
};

// Class: Engine.MaterialExpressionTextureSample
class MaterialExpressionTextureSample : public MaterialExpressionTextureBase {
public:
    uint8_t Pad_0[0x58]; // 0x0028 (0x0058)
    uint8_t Coordinates[0x38]; // 0x0080 (0x0038)
    uint8_t TextureObject[0x38]; // 0x00B8 (0x0038)
    uint8_t MipValue[0x38]; // 0x00F0 (0x0038)
    uint8_t CoordinatesDX[0x38]; // 0x0128 (0x0038)
    uint8_t CoordinatesDY[0x38]; // 0x0160 (0x0038)
    uint8_t MipValueMode; // 0x0198 (0x0001)
    uint8_t SamplerSource; // 0x0199 (0x0001)
    uint8_t Pad_1[0x2]; // 0x019A (0x0002)
    uint8_t ConstCoordinate[0x4]; // 0x019C (0x0004)
    int32_t ConstMipValue; // 0x01A0 (0x0004)
};

// Class: Engine.MaterialExpressionParticleSubUV
class MaterialExpressionParticleSubUV : public MaterialExpressionTextureSample {
public:
    uint8_t Pad_0[0x180]; // 0x0028 (0x0180)
    bool bBlend; // 0x01A8 (0x0001)
};

// Class: Engine.MaterialExpressionTextureSampleParameter
class MaterialExpressionTextureSampleParameter : public MaterialExpressionTextureSample {
public:
    uint8_t Pad_0[0x180]; // 0x0028 (0x0180)
    struct FName ParameterName; // 0x01A8 (0x0008)
    uint8_t ExpressionGUID[0x10]; // 0x01B0 (0x0010)
    struct FName Group; // 0x01C0 (0x0008)
};

// Class: Engine.MaterialExpressionTextureObjectParameter
class MaterialExpressionTextureObjectParameter : public MaterialExpressionTextureSampleParameter {
public:
};

// Class: Engine.MaterialExpressionTextureSampleParameter2D
class MaterialExpressionTextureSampleParameter2D : public MaterialExpressionTextureSampleParameter {
public:
};

// Class: Engine.MaterialExpressionAntialiasedTextureMask
class MaterialExpressionAntialiasedTextureMask : public MaterialExpressionTextureSampleParameter2D {
public:
    uint8_t Pad_0[0x1A0]; // 0x0028 (0x01A0)
    float Threshold; // 0x01C8 (0x0004)
    uint8_t Channel; // 0x01CC (0x0001)
};

// Class: Engine.MaterialExpressionTextureSampleParameterSubUV
class MaterialExpressionTextureSampleParameterSubUV : public MaterialExpressionTextureSampleParameter2D {
public:
    uint8_t Pad_0[0x1A0]; // 0x0028 (0x01A0)
    bool bBlend; // 0x01C8 (0x0001)
};

// Class: Engine.MaterialExpressionTextureSampleParameterCube
class MaterialExpressionTextureSampleParameterCube : public MaterialExpressionTextureSampleParameter {
public:
};

// Class: Engine.MaterialExpressionTextureCoordinate
class MaterialExpressionTextureCoordinate : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    int32_t CoordinateIndex; // 0x0070 (0x0004)
    float UTiling; // 0x0074 (0x0004)
    float VTiling; // 0x0078 (0x0004)
    bool UnMirrorU; // 0x007C (0x0001)
    bool UnMirrorV; // 0x007C (0x0001)
};

// Class: Engine.MaterialExpressionTextureProperty
class MaterialExpressionTextureProperty : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t TextureObject[0x38]; // 0x0070 (0x0038)
    uint8_t Property; // 0x00A8 (0x0001)
};

// Class: Engine.MaterialExpressionTime
class MaterialExpressionTime : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    bool bIgnorePause; // 0x0070 (0x0001)
    bool bOverride_Period; // 0x0070 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0071 (0x0003)
    float Period; // 0x0074 (0x0004)
};

// Class: Engine.MaterialExpressionTransform
class MaterialExpressionTransform : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    uint8_t TransformSourceType; // 0x00A8 (0x0001)
    uint8_t TransformType; // 0x00A9 (0x0001)
};

// Class: Engine.MaterialExpressionTransformPosition
class MaterialExpressionTransformPosition : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Input[0x38]; // 0x0070 (0x0038)
    uint8_t TransformSourceType; // 0x00A8 (0x0001)
    uint8_t TransformType; // 0x00A9 (0x0001)
};

// Class: Engine.MaterialExpressionTwoSidedSign
class MaterialExpressionTwoSidedSign : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionVertexColor
class MaterialExpressionVertexColor : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionVertexNormalWS
class MaterialExpressionVertexNormalWS : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionViewProperty
class MaterialExpressionViewProperty : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Property; // 0x0070 (0x0001)
};

// Class: Engine.MaterialExpressionViewSize
class MaterialExpressionViewSize : public MaterialExpression {
public:
};

// Class: Engine.MaterialExpressionWorldPosition
class MaterialExpressionWorldPosition : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t WorldPositionShaderOffset; // 0x0070 (0x0001)
};

// Class: Engine.MaterialFunction
class MaterialFunction : public Object {
public:
    uint8_t StateId[0x10]; // 0x0028 (0x0010)
    struct FString Description; // 0x0038 (0x0010)
    bool bExposeToLibrary; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> FunctionExpressions; // 0x0050 (0x0010)
    bool bReentrantFlag; // 0x0060 (0x0001)
};

// Class: Engine.Material
class Material : public MaterialInterface {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    class UObject* PhysMaterial; // 0x0058 (0x0008)
    uint8_t DiffuseColor[0x40]; // 0x0060 (0x0040)
    uint8_t SpecularColor[0x40]; // 0x00A0 (0x0040)
    uint8_t BaseColor[0x40]; // 0x00E0 (0x0040)
    uint8_t Metallic[0x40]; // 0x0120 (0x0040)
    uint8_t Specular[0x40]; // 0x0160 (0x0040)
    uint8_t Roughness[0x40]; // 0x01A0 (0x0040)
    uint8_t Normal[0x48]; // 0x01E0 (0x0048)
    uint8_t Tangent[0x48]; // 0x0228 (0x0048)
    uint8_t EmissiveColor[0x40]; // 0x0270 (0x0040)
    uint8_t Opacity[0x40]; // 0x02B0 (0x0040)
    uint8_t OpacityMask[0x40]; // 0x02F0 (0x0040)
    uint8_t MaterialDomain; // 0x0330 (0x0001)
    uint8_t BlendMode; // 0x0331 (0x0001)
    uint8_t DecalBlendMode; // 0x0332 (0x0001)
    uint8_t MaterialDecalResponse; // 0x0333 (0x0001)
    float DecalMinFadeScreenSizeStart; // 0x0334 (0x0004)
    float DecalMinFadeScreenSizeEnd; // 0x0338 (0x0004)
    uint8_t ShadingModel; // 0x033C (0x0001)
    uint8_t Pad_1[0x3]; // 0x033D (0x0003)
    float OpacityMaskClipValue; // 0x0340 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0344 (0x0004)
    uint8_t WorldPositionOffset[0x48]; // 0x0348 (0x0048)
    uint8_t WorldDisplacement[0x48]; // 0x0390 (0x0048)
    uint8_t TessellationMultiplier[0x40]; // 0x03D8 (0x0040)
    uint8_t SubsurfaceColor[0x40]; // 0x0418 (0x0040)
    uint8_t ClearCoat[0x40]; // 0x0458 (0x0040)
    uint8_t ClearCoatRoughness[0x40]; // 0x0498 (0x0040)
    uint8_t AmbientOcclusion[0x40]; // 0x04D8 (0x0040)
    uint8_t Refraction[0x40]; // 0x0518 (0x0040)
    uint8_t Procedural[0x40]; // 0x0558 (0x0040)
    uint8_t CustomizedUVs[0x48]; // 0x0598 (0x0048)
    uint8_t Pad_3[0x1F8]; // 0x05E0 (0x01F8)
    uint8_t CustomizedVectors[0x48]; // 0x07D8 (0x0048)
    uint8_t Pad_4[0xD8]; // 0x0820 (0x00D8)
    uint8_t DepthBias[0x40]; // 0x08F8 (0x0040)
    uint8_t MaterialAttributes[0x38]; // 0x0938 (0x0038)
    uint8_t Pad_5[0x10]; // 0x0970 (0x0010)
    uint8_t PixelDepthOffset[0x40]; // 0x0980 (0x0040)
    bool bEnableSeparateTranslucency; // 0x09C0 (0x0001)
    bool bEnableSeparateTranslucencyDepthPass; // 0x09C0 (0x0001)
    bool bEnableHalfResolutionTranslucency; // 0x09C0 (0x0001)
    bool bEnableQuarterResolutionTranslucency; // 0x09C0 (0x0001)
    bool bRenderBeforeWater; // 0x09C0 (0x0001)
    bool bUseShaderDistortion; // 0x09C0 (0x0001)
    bool bRenderAfterTemporalAA; // 0x09C0 (0x0001)
    bool bBendAdjustForDepthOfField; // 0x09C0 (0x0001)
    bool bBendPerPixelVolumetricFog; // 0x09C1 (0x0001)
    uint8_t Pad_6[0x2]; // 0x09C2 (0x0002)
    float BendSeparateTranslucentRange; // 0x09C4 (0x0004)
    float BendHalfResolutionThreshold; // 0x09C8 (0x0004)
    float BendQuarterResolutionThreshold; // 0x09CC (0x0004)
    bool bEnableResponsiveAA; // 0x09D0 (0x0001)
    bool bScreenSpaceReflections; // 0x09D0 (0x0001)
    bool TwoSided; // 0x09D0 (0x0001)
    bool DitheredLODTransition; // 0x09D0 (0x0001)
    bool DitherOpacityMask; // 0x09D0 (0x0001)
    uint8_t Pad_7[0x3]; // 0x09D1 (0x0003)
    int32_t NumCustomizedUVs; // 0x09D4 (0x0004)
    int32_t NumCustomizedVectors; // 0x09D8 (0x0004)
    uint8_t BendShadowDepthBias; // 0x09DC (0x0001)
    uint8_t Pad_8[0x3]; // 0x09DD (0x0003)
    bool bBendUsesFoliageNearFading; // 0x09E0 (0x0001)
    bool bBendDisableAlphaUnrollOnNeo; // 0x09E0 (0x0001)
    bool bBendEnableBasePDOPassUnrollOnNeo; // 0x09E0 (0x0001)
    bool bBendUseDecalDirectionalBlend; // 0x09E0 (0x0001)
    bool bAllowGetParameterExpressionValues; // 0x09E0 (0x0001)
    bool bBendUsesTranslucencyTriangleSorting; // 0x09E0 (0x0001)
    bool bBendSimplygonForceInclude; // 0x09E0 (0x0001)
    bool bBendSimplygonForceExclude; // 0x09E0 (0x0001)
    uint8_t Pad_9[0x3]; // 0x09E1 (0x0003)
    uint8_t TranslucencySunShadowQuality; // 0x09E4 (0x0001)
    uint8_t Pad_10[0x3]; // 0x09E5 (0x0003)
    bool bUseTranslucencySpecularApproximation; // 0x09E8 (0x0001)
    bool bUseTranslucencyPreciseAmbient; // 0x09E8 (0x0001)
    bool bUseTranslucencyFakeTwoSidedLighting; // 0x09E8 (0x0001)
    uint8_t Pad_11[0x3]; // 0x09E9 (0x0003)
    uint8_t TranslucencyScreenSpaceSpecularRefine; // 0x09EC (0x0001)
    uint8_t Pad_12[0x3]; // 0x09ED (0x0003)
    bool bUseTranslucencyScreenSpaceSunShadow; // 0x09F0 (0x0001)
    bool bDisableTranslucencyVolumeLighting; // 0x09F0 (0x0001)
    uint8_t Pad_13[0x3]; // 0x09F1 (0x0003)
    uint8_t TranslucencyLightingMode; // 0x09F4 (0x0001)
    uint8_t Pad_14[0x3]; // 0x09F5 (0x0003)
    float TranslucencyDirectionalLightingIntensity; // 0x09F8 (0x0004)
    float TranslucentShadowDensityScale; // 0x09FC (0x0004)
    float TranslucentSelfShadowDensityScale; // 0x0A00 (0x0004)
    float TranslucentSelfShadowSecondDensityScale; // 0x0A04 (0x0004)
    float TranslucentSelfShadowSecondOpacity; // 0x0A08 (0x0004)
    float TranslucentBackscatteringExponent; // 0x0A0C (0x0004)
    uint8_t TranslucentMultipleScatteringExtinction[0x10]; // 0x0A10 (0x0010)
    float TranslucentShadowStartOffset; // 0x0A20 (0x0004)
    bool bDisableDepthTest; // 0x0A24 (0x0001)
    bool bDisableDepthWrite; // 0x0A24 (0x0001)
    bool bGenerateSphericalParticleNormals; // 0x0A24 (0x0001)
    bool bTangentSpaceNormal; // 0x0A24 (0x0001)
    bool bUseEmissiveForDynamicAreaLighting; // 0x0A24 (0x0001)
    bool bBlockGI; // 0x0A24 (0x0001)
    uint8_t Pad_15[0x3]; // 0x0A25 (0x0003)
    uint8_t EmissiveIntensityChannel; // 0x0A28 (0x0001)
    uint8_t Pad_16[0x3]; // 0x0A29 (0x0003)
    bool bTangentInputIsBinormal; // 0x0A2C (0x0001)
    bool bUsedAsSpecialEngineMaterial; // 0x0A2C (0x0001)
    bool bUsedWithSkeletalMesh; // 0x0A2C (0x0001)
    bool bUsedWithEditorCompositing; // 0x0A2C (0x0001)
    bool bUsedWithLandscape; // 0x0A2C (0x0001)
    bool bUsedWithParticleSprites; // 0x0A2C (0x0001)
    bool bUsedWithBeamTrails; // 0x0A2C (0x0001)
    bool bUsedWithMeshParticles; // 0x0A2C (0x0001)
    bool bUsedWithStaticLighting; // 0x0A2D (0x0001)
    bool bUsedWithFluidSurfaces; // 0x0A2D (0x0001)
    bool bUsedWithMorphTargets; // 0x0A2D (0x0001)
    bool bUsedWithSplineMeshes; // 0x0A2D (0x0001)
    bool bUsedWithInstancedStaticMeshes; // 0x0A2D (0x0001)
    bool bUsesDistortion; // 0x0A2D (0x0001)
    bool bUsedWithClothing; // 0x0A2D (0x0001)
    bool bUsedWithUI; // 0x0A2D (0x0001)
    bool bUsedWithVoxelLightInjection; // 0x0A2E (0x0001)
    bool bAutomaticallySetInstanceUsageInEditor; // 0x0A2E (0x0001)
    bool bUsedWithSkyCapture; // 0x0A2E (0x0001)
    bool bAutomaticallySetUsageInEditor; // 0x0A2E (0x0001)
    bool bFullyRough; // 0x0A2E (0x0001)
    bool bUseLightmapDirectionality; // 0x0A2E (0x0001)
    bool bSpeedTreeForwardFaceNormals; // 0x0A2E (0x0001)
    bool bBendVertexAttributeFeedback; // 0x0A2E (0x0001)
    bool bBendSkeletalMeshWeatherSampling; // 0x0A2F (0x0001)
    bool bUsedWithFur; // 0x0A2F (0x0001)
    bool bBendUseOpaqueEmissivePass; // 0x0A2F (0x0001)
    bool bBendMaterialDisableCastsShadows; // 0x0A2F (0x0001)
    bool bBendUseStaticMeshMotionVectors; // 0x0A2F (0x0001)
    bool bBendMaterialOutputsWideBaseColor; // 0x0A2F (0x0001)
    bool bBendMaterialOutputsWideEmissiveColor; // 0x0A2F (0x0001)
    bool bExpressionsStripped; // 0x0A2F (0x0001)
    bool bUseHQForwardReflections; // 0x0A30 (0x0001)
    uint8_t Pad_17[0x3]; // 0x0A31 (0x0003)
    uint8_t D3D11TessellationMode; // 0x0A34 (0x0001)
    uint8_t Pad_18[0x3]; // 0x0A35 (0x0003)
    bool bEnableCrackFreeDisplacement; // 0x0A38 (0x0001)
    bool bEnableAdaptiveTessellation; // 0x0A38 (0x0001)
    uint8_t Pad_19[0x3]; // 0x0A39 (0x0003)
    float MaxDisplacement; // 0x0A3C (0x0004)
    bool Wireframe; // 0x0A40 (0x0001)
    bool bOutputVelocityOnBasePass; // 0x0A40 (0x0001)
    uint8_t Pad_20[0x3]; // 0x0A41 (0x0003)
    int32_t EditorX; // 0x0A44 (0x0004)
    int32_t EditorY; // 0x0A48 (0x0004)
    int32_t EditorPitch; // 0x0A4C (0x0004)
    int32_t EditorYaw; // 0x0A50 (0x0004)
    uint8_t Pad_21[0x4]; // 0x0A54 (0x0004)
    struct TArray<uint8_t> Expressions; // 0x0A58 (0x0010)
    struct TArray<uint8_t> MaterialFunctionInfos; // 0x0A68 (0x0010)
    struct TArray<uint8_t> MaterialParameterCollectionInfos; // 0x0A78 (0x0010)
    bool bCanMaskedBeAssumedOpaque; // 0x0A88 (0x0001)
    bool bIsMasked; // 0x0A88 (0x0001)
    bool bIsPreviewMaterial; // 0x0A88 (0x0001)
    bool bUseMaterialAttributes; // 0x0A88 (0x0001)
    bool bUseTranslucencyVertexFog; // 0x0A88 (0x0001)
    bool bAllowDevelopmentShaderCompile; // 0x0A88 (0x0001)
    bool bIsMaterialEditorStatsMaterial; // 0x0A88 (0x0001)
    uint8_t Pad_22[0x3]; // 0x0A89 (0x0003)
    uint8_t UsageFlagWarnings[0x4]; // 0x0A8C (0x0004)
    uint8_t BlendableLocation; // 0x0A90 (0x0001)
    uint8_t Pad_23[0x3]; // 0x0A91 (0x0003)
    int32_t BlendablePriority; // 0x0A94 (0x0004)
    float RefractionDepthBias; // 0x0A98 (0x0004)
    uint8_t StateId[0x10]; // 0x0A9C (0x0010)
    uint8_t Pad_24[0xD4]; // 0x0AAC (0x00D4)
    struct TArray<uint8_t> ExpressionTextureReferences; // 0x0B80 (0x0010)
    uint8_t Pad_25[0x30]; // 0x0B90 (0x0030)
    struct TArray<uint8_t> FontParameterValues; // 0x0BC0 (0x0010)
    struct TArray<uint8_t> ScalarParameterValues; // 0x0BD0 (0x0010)
    struct TArray<uint8_t> TextureParameterValues; // 0x0BE0 (0x0010)
    struct TArray<uint8_t> VectorParameterValues; // 0x0BF0 (0x0010)
    struct TArray<uint8_t> ParameterNameCache; // 0x0C00 (0x0010)
    struct TArray<uint8_t> ReferenceFunctionIdCache; // 0x0C10 (0x0010)
    struct TArray<uint8_t> CookedExpressionTextureReferences; // 0x0C20 (0x0010)
};

// Class: Engine.MaterialInstanceDynamic
class MaterialInstanceDynamic : public MaterialInstance {
public:

public:
    void SetVectorParameterValue(struct FName ParameterName, uint8_t Value);
    void SetTextureParameterValue(struct FName ParameterName, class UObject* Value);
    void SetScalarParameterValue(struct FName ParameterName, float Value);
    void ResetParent(class UObject* ParentMaterial);
    void K2_InterpolateMaterialInstanceParams(class UObject* SourceA, class UObject* SourceB, float Alpha);
    uint8_t K2_GetVectorParameterValue(struct FName ParameterName);
    class UObject* K2_GetTextureParameterValue(struct FName ParameterName);
    float K2_GetScalarParameterValue(struct FName ParameterName);
    void K2_CopyMaterialInstanceParameters(class UObject* Source);
    void CopyParameterOverrides(class UObject* MaterialInstance);
    void CopyInterpParameters(class UObject* Source);
};

// Class: Engine.MaterialParameterCollectionInstance
class MaterialParameterCollectionInstance : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* Collection; // 0x0030 (0x0008)
    class UObject* World; // 0x0038 (0x0008)
};

// Class: Engine.MatineeInterface
class MatineeInterface : public Interface {
public:
};

// Class: Engine.NavArea_AutoWater
class NavArea_AutoWater : public NavArea {
public:
};

// Class: Engine.NavArea_Avoid
class NavArea_Avoid : public NavArea {
public:
};

// Class: Engine.NavArea_ClosedDoor
class NavArea_ClosedDoor : public NavArea {
public:
};

// Class: Engine.NavArea_DeepWater
class NavArea_DeepWater : public NavArea {
public:
};

// Class: Engine.NavArea_Default
class NavArea_Default : public NavArea {
public:
};

// Class: Engine.NavArea_EdgeTraversal
class NavArea_EdgeTraversal : public NavArea {
public:
};

// Class: Engine.NavArea_EdgeTraversalHuman
class NavArea_EdgeTraversalHuman : public NavArea_EdgeTraversal {
public:
};

// Class: Engine.NavArea_LowHeight
class NavArea_LowHeight : public NavArea {
public:
};

// Class: Engine.NavArea_Null
class NavArea_Null : public NavArea {
public:
};

// Class: Engine.NavArea_Obstacle
class NavArea_Obstacle : public NavArea {
public:
};

// Class: Engine.NavArea_RagerBounds
class NavArea_RagerBounds : public NavArea {
public:
};

// Class: Engine.NavArea_RagerExclude
class NavArea_RagerExclude : public NavArea {
public:
};

// Class: Engine.NavArea_RoadAndTrail
class NavArea_RoadAndTrail : public NavArea {
public:
};

// Class: Engine.NavArea_ShallowWater
class NavArea_ShallowWater : public NavArea {
public:
};

// Class: Engine.NavAreaMeta
class NavAreaMeta : public NavArea {
public:
};

// Class: Engine.NavAreaMeta_SwitchByAgent
class NavAreaMeta_SwitchByAgent : public NavAreaMeta {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    class UClass* Agent0Area; // 0x0048 (0x0008)
    class UClass* Agent1Area; // 0x0050 (0x0008)
    class UClass* Agent2Area; // 0x0058 (0x0008)
    class UClass* Agent3Area; // 0x0060 (0x0008)
    class UClass* Agent4Area; // 0x0068 (0x0008)
    class UClass* Agent5Area; // 0x0070 (0x0008)
    class UClass* Agent6Area; // 0x0078 (0x0008)
    class UClass* Agent7Area; // 0x0080 (0x0008)
    class UClass* Agent8Area; // 0x0088 (0x0008)
    class UClass* Agent9Area; // 0x0090 (0x0008)
    class UClass* Agent10Area; // 0x0098 (0x0008)
    class UClass* Agent11Area; // 0x00A0 (0x0008)
    class UClass* Agent12Area; // 0x00A8 (0x0008)
    class UClass* Agent13Area; // 0x00B0 (0x0008)
    class UClass* Agent14Area; // 0x00B8 (0x0008)
    class UClass* Agent15Area; // 0x00C0 (0x0008)
};

// Class: Engine.NavCollision
class NavCollision : public Object {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    struct TArray<uint8_t> CylinderCollision; // 0x0078 (0x0010)
    struct TArray<uint8_t> BoxCollision; // 0x0088 (0x0010)
    class UClass* AreaClass; // 0x0098 (0x0008)
    bool bIsDynamicObstacle; // 0x00A0 (0x0001)
    bool bGatherConvexGeometry; // 0x00A0 (0x0001)
};

// Class: Engine.NavigationDataChunk
class NavigationDataChunk : public Object {
public:
    struct FName NavigationDataName; // 0x0028 (0x0008)
};

// Class: Engine.RecastNavMeshDataChunk
class RecastNavMeshDataChunk : public NavigationDataChunk {
public:
};

// Class: Engine.NavigationPath
class NavigationPath : public Object {
public:
    uint8_t PathUpdatedNotifier[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> PathPoints; // 0x0038 (0x0010)
    uint8_t RecalculateOnInvalidation; // 0x0048 (0x0001)

public:
    bool IsValid();
    bool IsStringPulled();
    bool IsPartial();
    float GetPathLength();
    float GetPathCost();
    struct FString GetDebugString();
    void EnableRecalculationOnInvalidation(uint8_t DoRecalculation);
    void EnableDebugDrawing(bool bShouldDrawDebugData, uint8_t PathColor);
};

// Class: Engine.NavigationPathGenerator
class NavigationPathGenerator : public Interface {
public:
};

// Class: Engine.RecastFilter_UseDefaultArea
class RecastFilter_UseDefaultArea : public NavigationQueryFilter {
public:
};

// Class: Engine.NavLinkTrivial
class NavLinkTrivial : public NavLinkDefinition {
public:
};

// Class: Engine.NavNodeInterface
class NavNodeInterface : public Interface {
public:
};

// Class: Engine.DemoNetDriver
class DemoNetDriver : public NetDriver {
public:
};

// Class: Engine.NiagaraEffectRendererProperties
class NiagaraEffectRendererProperties : public Object {
public:
    struct FName dummy; // 0x0028 (0x0008)
};

// Class: Engine.NiagaraMeshRendererProperties
class NiagaraMeshRendererProperties : public NiagaraEffectRendererProperties {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* ParticleMesh; // 0x0030 (0x0008)
};

// Class: Engine.NiagaraRibbonRendererProperties
class NiagaraRibbonRendererProperties : public NiagaraEffectRendererProperties {
public:
};

// Class: Engine.NiagaraSpriteRendererProperties
class NiagaraSpriteRendererProperties : public NiagaraEffectRendererProperties {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SubImageInfo[0x8]; // 0x0030 (0x0008)
    bool bBVelocityAligned; // 0x0038 (0x0001)
};

// Class: Engine.ObjectFloat
class ObjectFloat : public Object {
public:

public:
    void SetValue(float In_Value);
    float GetValue();
};

// Class: Engine.ObjectLibrary
class ObjectLibrary : public Object {
public:
    class UClass* ObjectBaseClass; // 0x0028 (0x0008)
    bool bHasBlueprintClasses; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> Objects; // 0x0038 (0x0010)
    struct TArray<uint8_t> WeakObjects; // 0x0048 (0x0010)
    bool bUseWeakReferences; // 0x0058 (0x0001)
    bool bIsFullyLoaded; // 0x0059 (0x0001)
};

// Class: Engine.ObjectReferencer
class ObjectReferencer : public Object {
public:
    struct TArray<uint8_t> ReferencedObjects; // 0x0028 (0x0010)
};

// Class: Engine.OcclusionEffect
class OcclusionEffect : public Object {
public:
    float OcclusionHFLevel; // 0x0028 (0x0004)
    float OcclusionLFLevel; // 0x002C (0x0004)
    float OcclusionRoomLevel; // 0x0030 (0x0004)
    float Occlusion2DMinDist; // 0x0034 (0x0004)
    float Occlusion2DMaxDist; // 0x0038 (0x0004)
    float OcclusionRoomMinDist; // 0x003C (0x0004)
    float OcclusionRoomMaxDist; // 0x0040 (0x0004)
};

// Class: Engine.PackageMapClient
class PackageMapClient : public PackageMap {
public:
};

// Class: Engine.ParticleEmitter
class ParticleEmitter : public Object {
public:
    struct FName EmitterName; // 0x0028 (0x0008)
    int32_t SubUVDataOffset; // 0x0030 (0x0004)
    uint8_t EmitterRenderMode; // 0x0034 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0035 (0x0003)
    struct TArray<uint8_t> LODLevels; // 0x0038 (0x0010)
    bool ConvertedModules; // 0x0048 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0049 (0x0003)
    int32_t PeakActiveParticles; // 0x004C (0x0004)
    int32_t InitialAllocationCount; // 0x0050 (0x0004)
    float MediumDetailSpawnRateScale; // 0x0054 (0x0004)
    float QualityLevelSpawnRateScale; // 0x0058 (0x0004)
    float QualityLevelSpawnRateFullDistance; // 0x005C (0x0004)
    float QualityLevelSpawnRateReducedDistance; // 0x0060 (0x0004)
    float QualityLevelSpawnRateReducedScale; // 0x0064 (0x0004)
    uint8_t DetailMode; // 0x0068 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0069 (0x0003)
    bool bIsSoloing; // 0x006C (0x0001)
    bool bCookedOut; // 0x006C (0x0001)
    bool bDisabledLODsKeepEmitterAlive; // 0x006C (0x0001)
};

// Class: Engine.ParticleSpriteEmitter
class ParticleSpriteEmitter : public ParticleEmitter {
public:
};

// Class: Engine.ParticleModule
class ParticleModule : public Object {
public:
    bool bSpawnModule; // 0x0028 (0x0001)
    bool bUpdateModule; // 0x0028 (0x0001)
    bool bFinalUpdateModule; // 0x0028 (0x0001)
    bool bUpdateForGPUEmitter; // 0x0028 (0x0001)
    bool bCurvesAsColor; // 0x0028 (0x0001)
    bool b3DDrawMode; // 0x0028 (0x0001)
    bool bSupported3DDrawMode; // 0x0028 (0x0001)
    bool bEnabled; // 0x0028 (0x0001)
    bool bEditable; // 0x0029 (0x0001)
    bool LODDuplicate; // 0x0029 (0x0001)
    bool bSupportsRandomSeed; // 0x0029 (0x0001)
    bool bRequiresLoopingNotification; // 0x0029 (0x0001)
    uint8_t Pad_0[0x2]; // 0x002A (0x0002)
    uint8_t LODValidity; // 0x002C (0x0001)
};

// Class: Engine.ParticleModuleOrientationBase
class ParticleModuleOrientationBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleOrientationAxisLock
class ParticleModuleOrientationAxisLock : public ParticleModuleOrientationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t LockAxisFlags; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    bool bUseWorldSpace; // 0x0034 (0x0001)
};

// Class: Engine.ParticleLODLevel
class ParticleLODLevel : public Object {
public:
    int32_t Level; // 0x0028 (0x0004)
    bool bEnabled; // 0x002C (0x0001)
    uint8_t Pad_0[0x3]; // 0x002D (0x0003)
    class UObject* RequiredModule; // 0x0030 (0x0008)
    struct TArray<uint8_t> Modules; // 0x0038 (0x0010)
    class UObject* TypeDataModule; // 0x0048 (0x0008)
    class UObject* SpawnModule; // 0x0050 (0x0008)
    class UObject* EventGenerator; // 0x0058 (0x0008)
    struct TArray<uint8_t> SpawningModules; // 0x0060 (0x0010)
    struct TArray<uint8_t> SpawnModules; // 0x0070 (0x0010)
    struct TArray<uint8_t> UpdateModules; // 0x0080 (0x0010)
    struct TArray<uint8_t> OrbitModules; // 0x0090 (0x0010)
    struct TArray<uint8_t> EventReceiverModules; // 0x00A0 (0x0010)
    bool ConvertedModules; // 0x00B0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00B1 (0x0003)
    int32_t PeakActiveParticles; // 0x00B4 (0x0004)
};

// Class: Engine.ParticleModuleAccelerationBase
class ParticleModuleAccelerationBase : public ParticleModule {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bAlwaysInWorldSpace; // 0x0030 (0x0001)
};

// Class: Engine.ParticleModuleAcceleration
class ParticleModuleAcceleration : public ParticleModuleAccelerationBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Acceleration[0x38]; // 0x0038 (0x0038)
    bool bApplyOwnerScale; // 0x0070 (0x0001)
};

// Class: Engine.ParticleModuleAccelerationConstant
class ParticleModuleAccelerationConstant : public ParticleModuleAccelerationBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Acceleration[0xC]; // 0x0038 (0x000C)
};

// Class: Engine.ParticleModuleAccelerationDrag
class ParticleModuleAccelerationDrag : public ParticleModuleAccelerationBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    class UObject* DragCoefficient; // 0x0038 (0x0008)
};

// Class: Engine.ParticleModuleAccelerationDragScaleOverLife
class ParticleModuleAccelerationDragScaleOverLife : public ParticleModuleAccelerationBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    class UObject* DragScale; // 0x0038 (0x0008)
};

// Class: Engine.ParticleModuleAccelerationOverLifetime
class ParticleModuleAccelerationOverLifetime : public ParticleModuleAccelerationBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t AccelOverLife[0x38]; // 0x0038 (0x0038)
};

// Class: Engine.ParticleModuleAttractorBase
class ParticleModuleAttractorBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleAttractorLine
class ParticleModuleAttractorLine : public ParticleModuleAttractorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t EndPoint0[0xC]; // 0x0030 (0x000C)
    uint8_t EndPoint1[0xC]; // 0x003C (0x000C)
    uint8_t Range[0x38]; // 0x0048 (0x0038)
    uint8_t Strength[0x38]; // 0x0080 (0x0038)
};

// Class: Engine.ParticleModuleAttractorParticle
class ParticleModuleAttractorParticle : public ParticleModuleAttractorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FName EmitterName; // 0x0030 (0x0008)
    uint8_t Range[0x38]; // 0x0038 (0x0038)
    bool bStrengthByDistance; // 0x0070 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0071 (0x0007)
    uint8_t Strength[0x38]; // 0x0078 (0x0038)
    bool bAffectBaseVelocity; // 0x00B0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00B1 (0x0003)
    uint8_t SelectionMethod; // 0x00B4 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00B5 (0x0003)
    bool bRenewSource; // 0x00B8 (0x0001)
    bool bInheritSourceVel; // 0x00B8 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00B9 (0x0003)
    int32_t LastSelIndex; // 0x00BC (0x0004)
};

// Class: Engine.ParticleModuleAttractorPoint
class ParticleModuleAttractorPoint : public ParticleModuleAttractorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Position[0x38]; // 0x0030 (0x0038)
    uint8_t Range[0x38]; // 0x0068 (0x0038)
    uint8_t Strength[0x38]; // 0x00A0 (0x0038)
    bool StrengthByDistance; // 0x00D8 (0x0001)
    bool bAffectBaseVelocity; // 0x00D8 (0x0001)
    bool bOverrideVelocity; // 0x00D8 (0x0001)
    bool bUseWorldSpacePosition; // 0x00D8 (0x0001)
    bool Positive_X; // 0x00D8 (0x0001)
    bool Positive_Y; // 0x00D8 (0x0001)
    bool Positive_Z; // 0x00D8 (0x0001)
    bool Negative_X; // 0x00D8 (0x0001)
    bool Negative_Y; // 0x00D9 (0x0001)
    bool Negative_Z; // 0x00D9 (0x0001)
};

// Class: Engine.ParticleModuleAttractorPointGravity
class ParticleModuleAttractorPointGravity : public ParticleModuleAttractorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Position[0xC]; // 0x0030 (0x000C)
    float Radius; // 0x003C (0x0004)
    class UObject* Strength; // 0x0040 (0x0008)
};

// Class: Engine.ParticleModuleBeamBase
class ParticleModuleBeamBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleBeamModifier
class ParticleModuleBeamModifier : public ParticleModuleBeamBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ModifierType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    uint8_t PositionOptions[0x4]; // 0x0034 (0x0004)
    uint8_t Position[0x38]; // 0x0038 (0x0038)
    uint8_t TangentOptions[0x4]; // 0x0070 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0074 (0x0004)
    uint8_t Tangent[0x38]; // 0x0078 (0x0038)
    bool bAbsoluteTangent; // 0x00B0 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00B1 (0x0003)
    uint8_t StrengthOptions[0x4]; // 0x00B4 (0x0004)
    uint8_t Strength[0x38]; // 0x00B8 (0x0038)
};

// Class: Engine.ParticleModuleBeamNoise
class ParticleModuleBeamNoise : public ParticleModuleBeamBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bLowFreq_Enabled; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    int32_t Frequency; // 0x0034 (0x0004)
    int32_t Frequency_LowRange; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    uint8_t NoiseRange[0x38]; // 0x0040 (0x0038)
    uint8_t NoiseRangeScale[0x38]; // 0x0078 (0x0038)
    bool bNRScaleEmitterTime; // 0x00B0 (0x0001)
    uint8_t Pad_3[0x7]; // 0x00B1 (0x0007)
    uint8_t NoiseSpeed[0x38]; // 0x00B8 (0x0038)
    bool bSmooth; // 0x00F0 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00F1 (0x0003)
    float NoiseLockRadius; // 0x00F4 (0x0004)
    bool bNoiseLock; // 0x00F8 (0x0001)
    bool bOscillate; // 0x00F8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00F9 (0x0003)
    float NoiseLockTime; // 0x00FC (0x0004)
    float NoiseTension; // 0x0100 (0x0004)
    bool bUseNoiseTangents; // 0x0104 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0105 (0x0003)
    uint8_t NoiseTangentStrength[0x38]; // 0x0108 (0x0038)
    int32_t NoiseTessellation; // 0x0140 (0x0004)
    bool bTargetNoise; // 0x0144 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0145 (0x0003)
    float FrequencyDistance; // 0x0148 (0x0004)
    bool bApplyNoiseScale; // 0x014C (0x0001)
    uint8_t Pad_8[0x3]; // 0x014D (0x0003)
    uint8_t NoiseScale[0x38]; // 0x0150 (0x0038)
};

// Class: Engine.ParticleModuleBeamSource
class ParticleModuleBeamSource : public ParticleModuleBeamBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceMethod; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct FName SourceName; // 0x0038 (0x0008)
    bool bSourceAbsolute; // 0x0040 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0041 (0x0007)
    uint8_t Source[0x38]; // 0x0048 (0x0038)
    bool bLockSource; // 0x0080 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0081 (0x0003)
    uint8_t SourceTangentMethod; // 0x0084 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0085 (0x0003)
    uint8_t SourceTangent[0x38]; // 0x0088 (0x0038)
    bool bLockSourceTangent; // 0x00C0 (0x0001)
    uint8_t Pad_5[0x7]; // 0x00C1 (0x0007)
    uint8_t SourceStrength[0x38]; // 0x00C8 (0x0038)
    bool bLockSourceStength; // 0x0100 (0x0001)
};

// Class: Engine.ParticleModuleBeamTarget
class ParticleModuleBeamTarget : public ParticleModuleBeamBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t TargetMethod; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct FName TargetName; // 0x0038 (0x0008)
    uint8_t Target[0x38]; // 0x0040 (0x0038)
    bool bTargetAbsolute; // 0x0078 (0x0001)
    bool bLockTarget; // 0x0078 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0079 (0x0003)
    uint8_t TargetTangentMethod; // 0x007C (0x0001)
    uint8_t Pad_3[0x3]; // 0x007D (0x0003)
    uint8_t TargetTangent[0x38]; // 0x0080 (0x0038)
    bool bLockTargetTangent; // 0x00B8 (0x0001)
    uint8_t Pad_4[0x7]; // 0x00B9 (0x0007)
    uint8_t TargetStrength[0x38]; // 0x00C0 (0x0038)
    bool bLockTargetStength; // 0x00F8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00F9 (0x0003)
    float LockRadius; // 0x00FC (0x0004)
};

// Class: Engine.ParticleModuleCameraBase
class ParticleModuleCameraBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleCameraOffset
class ParticleModuleCameraOffset : public ParticleModuleCameraBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t CameraOffset[0x38]; // 0x0030 (0x0038)
    bool bSpawnTimeOnly; // 0x0068 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0069 (0x0003)
    uint8_t UpdateMethod; // 0x006C (0x0001)
};

// Class: Engine.ParticleModuleCollisionBase
class ParticleModuleCollisionBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleCollision
class ParticleModuleCollision : public ParticleModuleCollisionBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t DampingFactor[0x38]; // 0x0030 (0x0038)
    uint8_t DampingFactorRotation[0x38]; // 0x0068 (0x0038)
    uint8_t MaxCollisions[0x38]; // 0x00A0 (0x0038)
    uint8_t CollisionCompletionOption; // 0x00D8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00D9 (0x0003)
    bool bOverrideParticleCollisionChannel; // 0x00DC (0x0001)
    uint8_t Pad_2[0x3]; // 0x00DD (0x0003)
    struct TArray<uint8_t> CollisionTypes; // 0x00E0 (0x0010)
    uint8_t Pad_3[0x8]; // 0x00F0 (0x0008)
    bool bApplyPhysics; // 0x00F8 (0x0001)
    uint8_t Pad_4[0x7]; // 0x00F9 (0x0007)
    uint8_t ParticleMass[0x38]; // 0x0100 (0x0038)
    float DirScalar; // 0x0138 (0x0004)
    bool bPawnsDoNotDecrementCount; // 0x013C (0x0001)
    bool bOnlyVerticalNormalsDecrementCount; // 0x013C (0x0001)
    uint8_t Pad_5[0x3]; // 0x013D (0x0003)
    float VerticalFudgeFactor; // 0x0140 (0x0004)
    uint8_t Pad_6[0x4]; // 0x0144 (0x0004)
    uint8_t DelayAmount[0x38]; // 0x0148 (0x0038)
    bool bDropDetail; // 0x0180 (0x0001)
    bool bCollideOnlyIfVisible; // 0x0180 (0x0001)
    bool bIgnoreSourceActor; // 0x0180 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0181 (0x0003)
    float MaxCollisionDistance; // 0x0184 (0x0004)
};

// Class: Engine.ParticleModuleCollisionGPU
class ParticleModuleCollisionGPU : public ParticleModuleCollisionBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Resilience[0x38]; // 0x0030 (0x0038)
    uint8_t ResilienceScaleOverLife[0x38]; // 0x0068 (0x0038)
    float Friction; // 0x00A0 (0x0004)
    float RadiusScale; // 0x00A4 (0x0004)
    float RadiusBias; // 0x00A8 (0x0004)
    uint8_t Response; // 0x00AC (0x0001)
    uint8_t CollisionMode; // 0x00AD (0x0001)
    uint8_t Pad_1[0x2]; // 0x00AE (0x0002)
    bool SpawnOnDepthBuffer; // 0x00B0 (0x0001)
};

// Class: Engine.ParticleModuleColorBase
class ParticleModuleColorBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleColor
class ParticleModuleColor : public ParticleModuleColorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartColor[0x38]; // 0x0030 (0x0038)
    uint8_t StartAlpha[0x38]; // 0x0068 (0x0038)
    bool bClampAlpha; // 0x00A0 (0x0001)
};

// Class: Engine.ParticleModuleColor_Seeded
class ParticleModuleColor_Seeded : public ParticleModuleColor {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    uint8_t RandomSeedInfo[0x20]; // 0x00A8 (0x0020)
};

// Class: Engine.ParticleModuleColorOverLife
class ParticleModuleColorOverLife : public ParticleModuleColorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ColorOverLife[0x38]; // 0x0030 (0x0038)
    uint8_t AlphaOverLife[0x38]; // 0x0068 (0x0038)
    bool bClampAlpha; // 0x00A0 (0x0001)
};

// Class: Engine.ParticleModuleColorScaleOverLife
class ParticleModuleColorScaleOverLife : public ParticleModuleColorBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ColorScaleOverLife[0x38]; // 0x0030 (0x0038)
    uint8_t AlphaScaleOverLife[0x38]; // 0x0068 (0x0038)
    bool bEmitterTime; // 0x00A0 (0x0001)
};

// Class: Engine.ParticleModuleEventBase
class ParticleModuleEventBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleEventGenerator
class ParticleModuleEventGenerator : public ParticleModuleEventBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> Events; // 0x0030 (0x0010)
};

// Class: Engine.ParticleModuleEventReceiverBase
class ParticleModuleEventReceiverBase : public ParticleModuleEventBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t EventGeneratorType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct FName EventName; // 0x0038 (0x0008)
};

// Class: Engine.ParticleModuleEventReceiverKillParticles
class ParticleModuleEventReceiverKillParticles : public ParticleModuleEventReceiverBase {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    bool bStopSpawning; // 0x0040 (0x0001)
};

// Class: Engine.ParticleModuleEventReceiverSpawn
class ParticleModuleEventReceiverSpawn : public ParticleModuleEventReceiverBase {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t spawnCount[0x38]; // 0x0040 (0x0038)
    bool bUseParticleTime; // 0x0078 (0x0001)
    bool bUsePSysLocation; // 0x0078 (0x0001)
    bool bInheritVelocity; // 0x0078 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0079 (0x0007)
    uint8_t InheritVelocityScale[0x38]; // 0x0080 (0x0038)
};

// Class: Engine.ParticleModuleKillBase
class ParticleModuleKillBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleKillBox
class ParticleModuleKillBox : public ParticleModuleKillBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t LowerLeftCorner[0x38]; // 0x0030 (0x0038)
    uint8_t UpperRightCorner[0x38]; // 0x0068 (0x0038)
    bool bAbsolute; // 0x00A0 (0x0001)
    bool bKillInside; // 0x00A0 (0x0001)
    bool bAxisAlignedAndFixedSize; // 0x00A0 (0x0001)
};

// Class: Engine.ParticleModuleKillHeight
class ParticleModuleKillHeight : public ParticleModuleKillBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Height[0x38]; // 0x0030 (0x0038)
    bool bAbsolute; // 0x0068 (0x0001)
    bool bFloor; // 0x0068 (0x0001)
    bool bApplyPSysScale; // 0x0068 (0x0001)
};

// Class: Engine.ParticleModuleLifetimeBase
class ParticleModuleLifetimeBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleLifetime
class ParticleModuleLifetime : public ParticleModuleLifetimeBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Lifetime[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleLifetime_Seeded
class ParticleModuleLifetime_Seeded : public ParticleModuleLifetime {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t RandomSeedInfo[0x20]; // 0x0068 (0x0020)
};

// Class: Engine.ParticleModuleLightBase
class ParticleModuleLightBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleLight
class ParticleModuleLight : public ParticleModuleLightBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bUseInverseSquaredFalloff; // 0x0030 (0x0001)
    bool bAffectsTranslucency; // 0x0031 (0x0001)
    bool bPreviewLightRadius; // 0x0032 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0033 (0x0001)
    float SpawnFraction; // 0x0034 (0x0004)
    uint8_t ColorScaleOverLife[0x38]; // 0x0038 (0x0038)
    bool bLightColorIgnoresParticleColor; // 0x0070 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0071 (0x0007)
    uint8_t BrightnessOverLife[0x38]; // 0x0078 (0x0038)
    uint8_t RadiusScale[0x38]; // 0x00B0 (0x0038)
    uint8_t LightExponent[0x38]; // 0x00E8 (0x0038)
    bool bHighQualityLights; // 0x0120 (0x0001)
    bool bShadowCastingLights; // 0x0121 (0x0001)
};

// Class: Engine.ParticleModuleLight_Seeded
class ParticleModuleLight_Seeded : public ParticleModuleLight {
public:
    uint8_t Pad_0[0x100]; // 0x0028 (0x0100)
    uint8_t RandomSeedInfo[0x20]; // 0x0128 (0x0020)
};

// Class: Engine.ParticleModuleLocationBase
class ParticleModuleLocationBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleLocation
class ParticleModuleLocation : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartLocation[0x38]; // 0x0030 (0x0038)
    float DistributeOverNPoints; // 0x0068 (0x0004)
    float DistributeThreshold; // 0x006C (0x0004)
};

// Class: Engine.ParticleModuleLocation_Seeded
class ParticleModuleLocation_Seeded : public ParticleModuleLocation {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t RandomSeedInfo[0x20]; // 0x0070 (0x0020)
};

// Class: Engine.ParticleModuleLocationWorldOffset
class ParticleModuleLocationWorldOffset : public ParticleModuleLocation {
public:
};

// Class: Engine.ParticleModuleLocationWorldOffset_Seeded
class ParticleModuleLocationWorldOffset_Seeded : public ParticleModuleLocationWorldOffset {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t RandomSeedInfo[0x20]; // 0x0070 (0x0020)
};

// Class: Engine.ParticleModuleLocationBoneSocket
class ParticleModuleLocationBoneSocket : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    uint8_t UniversalOffset[0xC]; // 0x0034 (0x000C)
    struct TArray<uint8_t> SourceLocations; // 0x0040 (0x0010)
    uint8_t SelectionMethod; // 0x0050 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0051 (0x0003)
    bool bUpdatePositionEachFrame; // 0x0054 (0x0001)
    bool bOrientMeshEmitters; // 0x0054 (0x0001)
    bool bInheritBoneVelocity; // 0x0054 (0x0001)
    bool bSkeletalMeshOwnerControlsMovement; // 0x0054 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0055 (0x0003)
    struct FName SkelMeshActorParamName; // 0x0058 (0x0008)
};

// Class: Engine.ParticleModuleLocationDirect
class ParticleModuleLocationDirect : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Location[0x38]; // 0x0030 (0x0038)
    uint8_t LocationOffset[0x38]; // 0x0068 (0x0038)
    uint8_t ScaleFactor[0x38]; // 0x00A0 (0x0038)
    uint8_t Direction[0x38]; // 0x00D8 (0x0038)
};

// Class: Engine.ParticleModuleLocationEmitter
class ParticleModuleLocationEmitter : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FName EmitterName; // 0x0030 (0x0008)
    uint8_t SelectionMethod; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    bool InheritSourceVelocity; // 0x003C (0x0001)
    uint8_t Pad_2[0x3]; // 0x003D (0x0003)
    float InheritSourceVelocityScale; // 0x0040 (0x0004)
    bool bInheritSourceRotation; // 0x0044 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0045 (0x0003)
    float InheritSourceRotationScale; // 0x0048 (0x0004)
};

// Class: Engine.ParticleModuleLocationEmitterDirect
class ParticleModuleLocationEmitterDirect : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct FName EmitterName; // 0x0030 (0x0008)
};

// Class: Engine.ParticleModuleLocationPrimitiveBase
class ParticleModuleLocationPrimitiveBase : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool Positive_X; // 0x0030 (0x0001)
    bool Positive_Y; // 0x0030 (0x0001)
    bool Positive_Z; // 0x0030 (0x0001)
    bool Negative_X; // 0x0030 (0x0001)
    bool Negative_Y; // 0x0030 (0x0001)
    bool Negative_Z; // 0x0030 (0x0001)
    bool SurfaceOnly; // 0x0030 (0x0001)
    bool Velocity; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    uint8_t VelocityScale[0x38]; // 0x0038 (0x0038)
    uint8_t StartLocation[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.ParticleModuleLocationPrimitiveCylinder
class ParticleModuleLocationPrimitiveCylinder : public ParticleModuleLocationPrimitiveBase {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    bool RadialVelocity; // 0x00A8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00A9 (0x0007)
    uint8_t StartRadius[0x38]; // 0x00B0 (0x0038)
    uint8_t StartHeight[0x38]; // 0x00E8 (0x0038)
    uint8_t HeightAxis; // 0x0120 (0x0001)
};

// Class: Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
class ParticleModuleLocationPrimitiveCylinder_Seeded : public ParticleModuleLocationPrimitiveCylinder {
public:
    uint8_t Pad_0[0x100]; // 0x0028 (0x0100)
    uint8_t RandomSeedInfo[0x20]; // 0x0128 (0x0020)
};

// Class: Engine.ParticleModuleLocationPrimitiveSphere
class ParticleModuleLocationPrimitiveSphere : public ParticleModuleLocationPrimitiveBase {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    uint8_t StartRadius[0x38]; // 0x00A8 (0x0038)
};

// Class: Engine.ParticleModuleLocationPrimitiveSphere_Seeded
class ParticleModuleLocationPrimitiveSphere_Seeded : public ParticleModuleLocationPrimitiveSphere {
public:
    uint8_t Pad_0[0xB8]; // 0x0028 (0x00B8)
    uint8_t RandomSeedInfo[0x20]; // 0x00E0 (0x0020)
};

// Class: Engine.ParticleModuleLocationPrimitiveTriangle
class ParticleModuleLocationPrimitiveTriangle : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartOffset[0x38]; // 0x0030 (0x0038)
    uint8_t Height[0x38]; // 0x0068 (0x0038)
    uint8_t angle[0x38]; // 0x00A0 (0x0038)
    uint8_t Thickness[0x38]; // 0x00D8 (0x0038)
};

// Class: Engine.ParticleModuleSpawnBase
class ParticleModuleSpawnBase : public ParticleModule {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bProcessSpawnRate; // 0x0030 (0x0001)
    bool bProcessBurstList; // 0x0030 (0x0001)
};

// Class: Engine.ParticleModuleSpawnSharedEffect
class ParticleModuleSpawnSharedEffect : public ParticleModuleSpawnBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t SpawnPerActor[0x38]; // 0x0038 (0x0038)
    uint8_t EffectType; // 0x0070 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0071 (0x0003)
    float MaxLifetime; // 0x0074 (0x0004)
    bool bDebugTestOnPlayer; // 0x0078 (0x0001)
};

// Class: Engine.ParticleModuleLocationSharedEffect
class ParticleModuleLocationSharedEffect : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t EffectType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float VerticleOffset; // 0x0034 (0x0004)
    float VelocityFactor; // 0x0038 (0x0004)
    float UpFactor; // 0x003C (0x0004)
    bool bUpdatePositionEachFrame; // 0x0040 (0x0001)
};

// Class: Engine.ParticleModuleLocationSkelVertSurface
class ParticleModuleLocationSkelVertSurface : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    uint8_t UniversalOffset[0xC]; // 0x0034 (0x000C)
    bool bUpdatePositionEachFrame; // 0x0040 (0x0001)
    bool bOrientMeshEmitters; // 0x0040 (0x0001)
    bool bInheritBoneVelocity; // 0x0040 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0041 (0x0007)
    struct FName SkelMeshActorParamName; // 0x0048 (0x0008)
    struct TArray<uint8_t> ValidAssociatedBones; // 0x0050 (0x0010)
    bool bEnforceNormalCheck; // 0x0060 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0061 (0x0003)
    uint8_t NormalToCompare[0xC]; // 0x0064 (0x000C)
    float NormalCheckToleranceDegrees; // 0x0070 (0x0004)
    float NormalCheckTolerance; // 0x0074 (0x0004)
    struct TArray<uint8_t> ValidMaterialIndices; // 0x0078 (0x0010)
    bool bInheritVertexColor; // 0x0088 (0x0001)
};

// Class: Engine.ParticleModulePivotOffset
class ParticleModulePivotOffset : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t PivotOffset[0x8]; // 0x0030 (0x0008)
};

// Class: Engine.ParticleModuleSourceMovement
class ParticleModuleSourceMovement : public ParticleModuleLocationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceMovementScale[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleMaterialBase
class ParticleModuleMaterialBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleMeshMaterial
class ParticleModuleMeshMaterial : public ParticleModuleMaterialBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> MeshMaterials; // 0x0030 (0x0010)
};

// Class: Engine.ParticleModuleOrbitBase
class ParticleModuleOrbitBase : public ParticleModule {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bUseEmitterTime; // 0x0030 (0x0001)
};

// Class: Engine.ParticleModuleOrbit
class ParticleModuleOrbit : public ParticleModuleOrbitBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t ChainMode; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t OffsetAmount[0x38]; // 0x0040 (0x0038)
    uint8_t OffsetOptions[0x4]; // 0x0078 (0x0004)
    uint8_t Pad_2[0x4]; // 0x007C (0x0004)
    uint8_t RotationAmount[0x38]; // 0x0080 (0x0038)
    uint8_t RotationOptions[0x4]; // 0x00B8 (0x0004)
    uint8_t Pad_3[0x4]; // 0x00BC (0x0004)
    uint8_t RotationRateAmount[0x38]; // 0x00C0 (0x0038)
    uint8_t RotationRateOptions[0x4]; // 0x00F8 (0x0004)
};

// Class: Engine.ParticleModuleParameterBase
class ParticleModuleParameterBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleParameterDynamic
class ParticleModuleParameterDynamic : public ParticleModuleParameterBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> DynamicParams; // 0x0030 (0x0010)
    int32_t UpdateFlags; // 0x0040 (0x0004)
    bool bUsesVelocity; // 0x0044 (0x0001)
};

// Class: Engine.ParticleModuleParameterDynamic_Seeded
class ParticleModuleParameterDynamic_Seeded : public ParticleModuleParameterDynamic {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t RandomSeedInfo[0x20]; // 0x0048 (0x0020)
};

// Class: Engine.ParticleModuleRequired
class ParticleModuleRequired : public ParticleModule {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* Material; // 0x0030 (0x0008)
    uint8_t EmitterOrigin[0xC]; // 0x0038 (0x000C)
    uint8_t EmitterRotation[0xC]; // 0x0044 (0x000C)
    uint8_t ScreenAlignment; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    bool bUseLocalSpace; // 0x0054 (0x0001)
    bool bKillOnDeactivate; // 0x0054 (0x0001)
    bool bKillOnCompleted; // 0x0054 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0055 (0x0003)
    uint8_t SortMode; // 0x0058 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0059 (0x0003)
    bool bUseLegacyEmitterTime; // 0x005C (0x0001)
    uint8_t Pad_4[0x3]; // 0x005D (0x0003)
    float EmitterDuration; // 0x0060 (0x0004)
    float EmitterDurationLow; // 0x0064 (0x0004)
    bool bEmitterDurationUseRange; // 0x0068 (0x0001)
    bool bDurationRecalcEachLoop; // 0x0068 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0069 (0x0003)
    int32_t EmitterLoops; // 0x006C (0x0004)
    uint8_t SpawnRate[0x38]; // 0x0070 (0x0038)
    uint8_t ParticleBurstMethod; // 0x00A8 (0x0001)
    uint8_t Pad_6[0x7]; // 0x00A9 (0x0007)
    struct TArray<uint8_t> BurstList; // 0x00B0 (0x0010)
    float EmitterDelay; // 0x00C0 (0x0004)
    float EmitterDelayLow; // 0x00C4 (0x0004)
    bool bEmitterDelayUseRange; // 0x00C8 (0x0001)
    bool bDelayFirstLoopOnly; // 0x00C8 (0x0001)
    uint8_t Pad_7[0x3]; // 0x00C9 (0x0003)
    uint8_t InterpolationMethod; // 0x00CC (0x0001)
    uint8_t Pad_8[0x3]; // 0x00CD (0x0003)
    int32_t SubImages_Horizontal; // 0x00D0 (0x0004)
    int32_t SubImages_Vertical; // 0x00D4 (0x0004)
    bool bScaleUV; // 0x00D8 (0x0001)
    uint8_t Pad_9[0x3]; // 0x00D9 (0x0003)
    float RandomImageTime; // 0x00DC (0x0004)
    int32_t RandomImageChanges; // 0x00E0 (0x0004)
    bool bOverrideSystemMacroUV; // 0x00E4 (0x0001)
    uint8_t Pad_10[0x3]; // 0x00E5 (0x0003)
    uint8_t MacroUVPosition[0xC]; // 0x00E8 (0x000C)
    float MacroUVRadius; // 0x00F4 (0x0004)
    bool bUseMaxDrawCount; // 0x00F8 (0x0001)
    uint8_t Pad_11[0x3]; // 0x00F9 (0x0003)
    int32_t MaxDrawCount; // 0x00FC (0x0004)
    uint8_t EmitterNormalsMode; // 0x0100 (0x0001)
    uint8_t Pad_12[0x3]; // 0x0101 (0x0003)
    uint8_t NormalsSphereCenter[0xC]; // 0x0104 (0x000C)
    uint8_t NormalsCylinderDirection[0xC]; // 0x0110 (0x000C)
    bool bOrbitModuleAffectsVelocityAlignment; // 0x011C (0x0001)
    uint8_t Pad_13[0x3]; // 0x011D (0x0003)
    uint8_t UVFlippingMode; // 0x0120 (0x0001)
    uint8_t Pad_14[0x3]; // 0x0121 (0x0003)
    float ScreenSizeMinimum; // 0x0124 (0x0004)
    float ScreenSizeMaximum; // 0x0128 (0x0004)
    uint8_t Pad_15[0x4]; // 0x012C (0x0004)
    struct TArray<uint8_t> NamedMaterialOverrides; // 0x0130 (0x0010)
};

// Class: Engine.ParticleModuleRotationBase
class ParticleModuleRotationBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleMeshRotation
class ParticleModuleMeshRotation : public ParticleModuleRotationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartRotation[0x38]; // 0x0030 (0x0038)
    bool bInheritParent; // 0x0068 (0x0001)
};

// Class: Engine.ParticleModuleMeshRotation_Seeded
class ParticleModuleMeshRotation_Seeded : public ParticleModuleMeshRotation {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t RandomSeedInfo[0x20]; // 0x0070 (0x0020)
};

// Class: Engine.ParticleModuleRotation
class ParticleModuleRotation : public ParticleModuleRotationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartRotation[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleRotation_Seeded
class ParticleModuleRotation_Seeded : public ParticleModuleRotation {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t RandomSeedInfo[0x20]; // 0x0068 (0x0020)
};

// Class: Engine.ParticleModuleRotationOverLifetime
class ParticleModuleRotationOverLifetime : public ParticleModuleRotationBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t RotationOverLife[0x38]; // 0x0030 (0x0038)
    bool Scale; // 0x0068 (0x0001)
};

// Class: Engine.ParticleModuleRotationRateBase
class ParticleModuleRotationRateBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleMeshRotationRate
class ParticleModuleMeshRotationRate : public ParticleModuleRotationRateBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartRotationRate[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleRotationRate
class ParticleModuleRotationRate : public ParticleModuleRotationRateBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartRotationRate[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleMeshRotationRate_Seeded
class ParticleModuleMeshRotationRate_Seeded : public ParticleModuleMeshRotationRate {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t RandomSeedInfo[0x20]; // 0x0068 (0x0020)
};

// Class: Engine.ParticleModuleMeshRotationRateMultiplyLife
class ParticleModuleMeshRotationRateMultiplyLife : public ParticleModuleRotationRateBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t LifeMultiplier[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleMeshRotationRateOverLife
class ParticleModuleMeshRotationRateOverLife : public ParticleModuleRotationRateBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t RotRate[0x38]; // 0x0030 (0x0038)
    bool bScaleRotRate; // 0x0068 (0x0001)
};

// Class: Engine.ParticleModuleRotationRate_Seeded
class ParticleModuleRotationRate_Seeded : public ParticleModuleRotationRate {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t RandomSeedInfo[0x20]; // 0x0068 (0x0020)
};

// Class: Engine.ParticleModuleRotationRateMultiplyLife
class ParticleModuleRotationRateMultiplyLife : public ParticleModuleRotationRateBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t LifeMultiplier[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleSizeBase
class ParticleModuleSizeBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleSize
class ParticleModuleSize : public ParticleModuleSizeBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t StartSize[0x38]; // 0x0030 (0x0038)
};

// Class: Engine.ParticleModuleSize_Seeded
class ParticleModuleSize_Seeded : public ParticleModuleSize {
public:
    uint8_t Pad_0[0x40]; // 0x0028 (0x0040)
    uint8_t RandomSeedInfo[0x20]; // 0x0068 (0x0020)
};

// Class: Engine.ParticleModuleSizeMultiplyLife
class ParticleModuleSizeMultiplyLife : public ParticleModuleSizeBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t LifeMultiplier[0x38]; // 0x0030 (0x0038)
    bool MultiplyX; // 0x0068 (0x0001)
    bool MultiplyY; // 0x0068 (0x0001)
    bool MultiplyZ; // 0x0068 (0x0001)
};

// Class: Engine.ParticleModuleSizeScale
class ParticleModuleSizeScale : public ParticleModuleSizeBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SizeScale[0x38]; // 0x0030 (0x0038)
    bool EnableX; // 0x0068 (0x0001)
    bool EnableY; // 0x0068 (0x0001)
    bool EnableZ; // 0x0068 (0x0001)
};

// Class: Engine.ParticleModuleSizeScaleBySpeed
class ParticleModuleSizeScaleBySpeed : public ParticleModuleSizeBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SpeedScale[0x8]; // 0x0030 (0x0008)
    uint8_t MaxScale[0x8]; // 0x0038 (0x0008)
};

// Class: Engine.ParticleModuleSpawn
class ParticleModuleSpawn : public ParticleModuleSpawnBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Rate[0x38]; // 0x0038 (0x0038)
    uint8_t RateScale[0x38]; // 0x0070 (0x0038)
    uint8_t ParticleBurstMethod; // 0x00A8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00A9 (0x0007)
    struct TArray<uint8_t> BurstList; // 0x00B0 (0x0010)
    uint8_t BurstScale[0x38]; // 0x00C0 (0x0038)
    bool bApplyGlobalSpawnRateScale; // 0x00F8 (0x0001)
};

// Class: Engine.ParticleModuleSpawnPerUnit
class ParticleModuleSpawnPerUnit : public ParticleModuleSpawnBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float UnitScalar; // 0x0038 (0x0004)
    uint8_t Pad_1[0x4]; // 0x003C (0x0004)
    uint8_t SpawnPerUnit[0x38]; // 0x0040 (0x0038)
    bool bIgnoreSpawnRateWhenMoving; // 0x0078 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0079 (0x0003)
    float MovementTolerance; // 0x007C (0x0004)
    float MaxFrameDistance; // 0x0080 (0x0004)
    bool bIgnoreMovementAlongX; // 0x0084 (0x0001)
    bool bIgnoreMovementAlongY; // 0x0084 (0x0001)
    bool bIgnoreMovementAlongZ; // 0x0084 (0x0001)
};

// Class: Engine.ParticleModuleSubUVBase
class ParticleModuleSubUVBase : public ParticleModule {
public:
};

// Class: Engine.SubUVAnimation
class SubUVAnimation : public Object {
public:
    class UObject* SubUVTexture; // 0x0028 (0x0008)
    int32_t SubImages_Horizontal; // 0x0030 (0x0004)
    int32_t SubImages_Vertical; // 0x0034 (0x0004)
    uint8_t BoundingMode; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    float AlphaThreshold; // 0x003C (0x0004)
};

// Class: Engine.ParticleModuleSubUV
class ParticleModuleSubUV : public ParticleModuleSubUVBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* Animation; // 0x0030 (0x0008)
    uint8_t SubImageIndex[0x38]; // 0x0038 (0x0038)
    bool bUseRealTime; // 0x0070 (0x0001)
};

// Class: Engine.ParticleModuleSubUVMovie
class ParticleModuleSubUVMovie : public ParticleModuleSubUV {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    bool bUseEmitterTime; // 0x0078 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0079 (0x0007)
    uint8_t FrameRate[0x38]; // 0x0080 (0x0038)
    int32_t StartingFrame; // 0x00B8 (0x0004)
};

// Class: Engine.ParticleModuleTrailBase
class ParticleModuleTrailBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleTrailSource
class ParticleModuleTrailSource : public ParticleModuleTrailBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SourceMethod; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct FName SourceName; // 0x0038 (0x0008)
    uint8_t SourceStrength[0x38]; // 0x0040 (0x0038)
    bool bLockSourceStength; // 0x0078 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0079 (0x0003)
    int32_t SourceOffsetCount; // 0x007C (0x0004)
    struct TArray<uint8_t> SourceOffsetDefaults; // 0x0080 (0x0010)
    uint8_t SelectionMethod; // 0x0090 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0091 (0x0003)
    bool bInheritRotation; // 0x0094 (0x0001)
};

// Class: Engine.ParticleModuleTypeDataBase
class ParticleModuleTypeDataBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleTypeDataAnimTrail
class ParticleModuleTypeDataAnimTrail : public ParticleModuleTypeDataBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bDeadTrailsOnDeactivate; // 0x0030 (0x0001)
    bool bEnablePreviousTangentRecalculation; // 0x0030 (0x0001)
    bool bTangentRecalculationEveryFrame; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float TilingDistance; // 0x0034 (0x0004)
    float DistanceTessellationStepSize; // 0x0038 (0x0004)
    float TangentTessellationStepSize; // 0x003C (0x0004)
    float WidthTessellationStepSize; // 0x0040 (0x0004)
};

// Class: Engine.ParticleModuleTypeDataBeam2
class ParticleModuleTypeDataBeam2 : public ParticleModuleTypeDataBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t BeamMethod; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    int32_t TextureTile; // 0x0034 (0x0004)
    float TextureTileDistance; // 0x0038 (0x0004)
    int32_t Sheets; // 0x003C (0x0004)
    int32_t MaxBeamCount; // 0x0040 (0x0004)
    float Speed; // 0x0044 (0x0004)
    int32_t InterpolationPoints; // 0x0048 (0x0004)
    bool bUseLinearInterpolation; // 0x004C (0x0001)
    bool bAlwaysOn; // 0x004C (0x0001)
    uint8_t Pad_2[0x3]; // 0x004D (0x0003)
    int32_t UpVectorStepSize; // 0x0050 (0x0004)
    uint8_t Pad_3[0x4]; // 0x0054 (0x0004)
    struct FName BranchParentName; // 0x0058 (0x0008)
    uint8_t Distance[0x38]; // 0x0060 (0x0038)
    uint8_t TaperMethod; // 0x0098 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0099 (0x0007)
    uint8_t TaperFactor[0x38]; // 0x00A0 (0x0038)
    uint8_t TaperScale[0x38]; // 0x00D8 (0x0038)
    bool RenderGeometry; // 0x0110 (0x0001)
    bool RenderDirectLine; // 0x0110 (0x0001)
    bool RenderLines; // 0x0110 (0x0001)
    bool RenderTessellation; // 0x0110 (0x0001)
};

// Class: Engine.ParticleModuleTypeDataGpu
class ParticleModuleTypeDataGpu : public ParticleModuleTypeDataBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t EmitterInfo[0x290]; // 0x0030 (0x0290)
    uint8_t ResourceData[0x160]; // 0x02C0 (0x0160)
    float CameraMotionBlurAmount; // 0x0420 (0x0004)
    bool bClearExistingParticlesOnInit; // 0x0424 (0x0001)
    bool HeightMapKill; // 0x0424 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0425 (0x0003)
    float HeightMapKillOffset; // 0x0428 (0x0004)
    bool BoundingBoxWrap; // 0x042C (0x0001)
};

// Class: Engine.ParticleModuleTypeDataMesh
class ParticleModuleTypeDataMesh : public ParticleModuleTypeDataBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* Mesh; // 0x0030 (0x0008)
    bool CastShadows; // 0x0038 (0x0001)
    bool DoCollisions; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    uint8_t MeshAlignment; // 0x003C (0x0001)
    uint8_t Pad_2[0x3]; // 0x003D (0x0003)
    bool bOverrideMaterial; // 0x0040 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0041 (0x0003)
    float Pitch; // 0x0044 (0x0004)
    float Roll; // 0x0048 (0x0004)
    float Yaw; // 0x004C (0x0004)
    uint8_t RollPitchYawRange[0x38]; // 0x0050 (0x0038)
    uint8_t Pad_4[0x8]; // 0x0088 (0x0008)
    uint8_t AxisLockOption; // 0x0090 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0091 (0x0003)
    bool bCameraFacing; // 0x0094 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0095 (0x0003)
    uint8_t CameraFacingUpAxisOption; // 0x0098 (0x0001)
    uint8_t CameraFacingOption; // 0x0099 (0x0001)
    uint8_t Pad_7[0x2]; // 0x009A (0x0002)
    bool bApplyParticleRotationAsSpin; // 0x009C (0x0001)
    bool bFaceCameraDirectionRatherThanPosition; // 0x009C (0x0001)
    bool bCollisionsConsiderPartilceSize; // 0x009C (0x0001)
};

// Class: Engine.ParticleModuleTypeDataRibbon
class ParticleModuleTypeDataRibbon : public ParticleModuleTypeDataBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    int32_t MaxTessellationBetweenParticles; // 0x0030 (0x0004)
    int32_t SheetsPerTrail; // 0x0034 (0x0004)
    int32_t MaxTrailCount; // 0x0038 (0x0004)
    int32_t MaxParticleInTrailCount; // 0x003C (0x0004)
    bool bDeadTrailsOnDeactivate; // 0x0040 (0x0001)
    bool bDeadTrailsOnSourceLoss; // 0x0040 (0x0001)
    bool bClipSourceSegement; // 0x0040 (0x0001)
    bool bEnablePreviousTangentRecalculation; // 0x0040 (0x0001)
    bool bTangentRecalculationEveryFrame; // 0x0040 (0x0001)
    bool bSpawnInitialParticle; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    uint8_t RenderAxis; // 0x0044 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0045 (0x0003)
    float TangentSpawningScalar; // 0x0048 (0x0004)
    bool bRenderGeometry; // 0x004C (0x0001)
    bool bRenderSpawnPoints; // 0x004C (0x0001)
    bool bRenderTangents; // 0x004C (0x0001)
    bool bRenderTessellation; // 0x004C (0x0001)
    uint8_t Pad_3[0x3]; // 0x004D (0x0003)
    float TilingDistance; // 0x0050 (0x0004)
    float DistanceTessellationStepSize; // 0x0054 (0x0004)
    bool bEnableTangentDiffInterpScale; // 0x0058 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0059 (0x0003)
    float TangentTessellationScalar; // 0x005C (0x0004)
};

// Class: Engine.ParticleModuleVectorFieldBase
class ParticleModuleVectorFieldBase : public ParticleModule {
public:
};

// Class: Engine.ParticleModuleVectorFieldGlobal
class ParticleModuleVectorFieldGlobal : public ParticleModuleVectorFieldBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bOverrideGlobalVectorFieldTightness; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float GlobalVectorFieldScale; // 0x0034 (0x0004)
    float GlobalVectorFieldTightness; // 0x0038 (0x0004)
};

// Class: Engine.ParticleModuleVectorFieldLocal
class ParticleModuleVectorFieldLocal : public ParticleModuleVectorFieldBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* VectorField; // 0x0030 (0x0008)
    uint8_t RelativeTranslation[0xC]; // 0x0038 (0x000C)
    uint8_t RelativeRotation[0xC]; // 0x0044 (0x000C)
    uint8_t RelativeScale3D[0xC]; // 0x0050 (0x000C)
    float intensity; // 0x005C (0x0004)
    float Tightness; // 0x0060 (0x0004)
    bool bIgnoreComponentTransform; // 0x0064 (0x0001)
    bool bTileX; // 0x0064 (0x0001)
    bool bTileY; // 0x0064 (0x0001)
    bool bTileZ; // 0x0064 (0x0001)
    bool bCompositeToGlobalVectorField; // 0x0064 (0x0001)
    bool bApplyToLocalAlways; // 0x0064 (0x0001)
};

// Class: Engine.ParticleModuleVectorFieldRotation
class ParticleModuleVectorFieldRotation : public ParticleModuleVectorFieldBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t MinInitialRotation[0xC]; // 0x0030 (0x000C)
    uint8_t MaxInitialRotation[0xC]; // 0x003C (0x000C)
};

// Class: Engine.ParticleModuleVectorFieldRotationRate
class ParticleModuleVectorFieldRotationRate : public ParticleModuleVectorFieldBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t RotationRate[0xC]; // 0x0030 (0x000C)
};

// Class: Engine.ParticleModuleVectorFieldScale
class ParticleModuleVectorFieldScale : public ParticleModuleVectorFieldBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* VectorFieldScale; // 0x0030 (0x0008)
};

// Class: Engine.ParticleModuleVectorFieldScaleOverLife
class ParticleModuleVectorFieldScaleOverLife : public ParticleModuleVectorFieldBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* VectorFieldScaleOverLife; // 0x0030 (0x0008)
};

// Class: Engine.ParticleModuleVelocityBase
class ParticleModuleVelocityBase : public ParticleModule {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bInWorldSpace; // 0x0030 (0x0001)
    bool bApplyOwnerScale; // 0x0030 (0x0001)
};

// Class: Engine.ParticleModuleVelocity
class ParticleModuleVelocity : public ParticleModuleVelocityBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t StartVelocity[0x38]; // 0x0038 (0x0038)
    uint8_t StartVelocityRadial[0x38]; // 0x0070 (0x0038)
};

// Class: Engine.ParticleModuleVelocity_Seeded
class ParticleModuleVelocity_Seeded : public ParticleModuleVelocity {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    uint8_t RandomSeedInfo[0x20]; // 0x00A8 (0x0020)
};

// Class: Engine.ParticleModuleVelocityCone
class ParticleModuleVelocityCone : public ParticleModuleVelocityBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t angle[0x38]; // 0x0038 (0x0038)
    uint8_t Velocity[0x38]; // 0x0070 (0x0038)
    uint8_t Direction[0xC]; // 0x00A8 (0x000C)
};

// Class: Engine.ParticleModuleVelocityInheritParent
class ParticleModuleVelocityInheritParent : public ParticleModuleVelocityBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Scale[0x38]; // 0x0038 (0x0038)
    float SpeedLimit; // 0x0070 (0x0004)
};

// Class: Engine.ParticleModuleVelocityOverLifetime
class ParticleModuleVelocityOverLifetime : public ParticleModuleVelocityBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t VelOverLife[0x38]; // 0x0038 (0x0038)
    bool Absolute; // 0x0070 (0x0001)
};

// Class: Engine.ParticleModuleEventSendToGame
class ParticleModuleEventSendToGame : public Object {
public:
};

// Class: Engine.ParticleSystemReplay
class ParticleSystemReplay : public Object {
public:
    int32_t ClipIDNumber; // 0x0028 (0x0004)
};

// Class: Engine.DemoPendingNetGame
class DemoPendingNetGame : public PendingNetGame {
public:
};

// Class: Engine.PhysicalMaterial
class PhysicalMaterial : public Object {
public:
    float Friction; // 0x0028 (0x0004)
    uint8_t FrictionCombineMode; // 0x002C (0x0001)
    bool bOverrideFrictionCombineMode; // 0x002D (0x0001)
    uint8_t Pad_0[0x2]; // 0x002E (0x0002)
    float Restitution; // 0x0030 (0x0004)
    uint8_t RestitutionCombineMode; // 0x0034 (0x0001)
    bool bOverrideRestitutionCombineMode; // 0x0035 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0036 (0x0002)
    float Density; // 0x0038 (0x0004)
    float RaiseMassToPower; // 0x003C (0x0004)
    float DestructibleDamageThresholdScale; // 0x0040 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0044 (0x0004)
    class UObject* PhysicalMaterialProperty; // 0x0048 (0x0008)
    uint8_t SurfaceType; // 0x0050 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0051 (0x0003)
    float TireFrictionScale; // 0x0054 (0x0004)
    struct TArray<uint8_t> TireFrictionScales; // 0x0058 (0x0010)
    float TireDrag; // 0x0068 (0x0004)
    float TireDragRiseTimePerUnitDrag; // 0x006C (0x0004)
    float TireFrictionScale_x_WetnessExtraScale; // 0x0070 (0x0004)
    float TireDrag_x_WetnessOffset; // 0x0074 (0x0004)
};

// Class: Engine.PhysicsAsset
class PhysicsAsset : public Object {
public:
    struct TArray<uint8_t> BodySetup; // 0x0028 (0x0010)
    struct TArray<uint8_t> BoundsBodies; // 0x0038 (0x0010)
    struct TArray<uint8_t> ConstraintSetup; // 0x0048 (0x0010)
};

// Class: Engine.PhysicsConstraintTemplate
class PhysicsConstraintTemplate : public Object {
public:
    struct FName JointName; // 0x0028 (0x0008)
    struct FName ConstraintBone1; // 0x0030 (0x0008)
    struct FName ConstraintBone2; // 0x0038 (0x0008)
    uint8_t Pos1[0xC]; // 0x0040 (0x000C)
    uint8_t PriAxis1[0xC]; // 0x004C (0x000C)
    uint8_t SecAxis1[0xC]; // 0x0058 (0x000C)
    uint8_t Pos2[0xC]; // 0x0064 (0x000C)
    uint8_t PriAxis2[0xC]; // 0x0070 (0x000C)
    uint8_t SecAxis2[0xC]; // 0x007C (0x000C)
    bool bEnableProjection; // 0x0088 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0089 (0x0003)
    float ProjectionLinearTolerance; // 0x008C (0x0004)
    float ProjectionAngularTolerance; // 0x0090 (0x0004)
    uint8_t LinearXMotion; // 0x0094 (0x0001)
    uint8_t LinearYMotion; // 0x0095 (0x0001)
    uint8_t LinearZMotion; // 0x0096 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0097 (0x0001)
    float LinearLimitSize; // 0x0098 (0x0004)
    bool bLinearLimitSoft; // 0x009C (0x0001)
    uint8_t Pad_2[0x3]; // 0x009D (0x0003)
    float LinearLimitStiffness; // 0x00A0 (0x0004)
    float LinearLimitDamping; // 0x00A4 (0x0004)
    bool bLinearBreakable; // 0x00A8 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00A9 (0x0003)
    float LinearBreakThreshold; // 0x00AC (0x0004)
    uint8_t AngularSwing1Motion; // 0x00B0 (0x0001)
    uint8_t AngularSwing2Motion; // 0x00B1 (0x0001)
    uint8_t AngularTwistMotion; // 0x00B2 (0x0001)
    uint8_t Pad_4[0x1]; // 0x00B3 (0x0001)
    bool bSwingLimitSoft; // 0x00B4 (0x0001)
    bool bTwistLimitSoft; // 0x00B4 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00B5 (0x0003)
    float Swing1LimitAngle; // 0x00B8 (0x0004)
    float Swing2LimitAngle; // 0x00BC (0x0004)
    float TwistLimitAngle; // 0x00C0 (0x0004)
    float SwingLimitStiffness; // 0x00C4 (0x0004)
    float SwingLimitDamping; // 0x00C8 (0x0004)
    float TwistLimitStiffness; // 0x00CC (0x0004)
    float TwistLimitDamping; // 0x00D0 (0x0004)
    bool bAngularBreakable; // 0x00D4 (0x0001)
    uint8_t Pad_6[0x3]; // 0x00D5 (0x0003)
    float AngularBreakThreshold; // 0x00D8 (0x0004)
    uint8_t Pad_7[0x4]; // 0x00DC (0x0004)
    uint8_t DefaultInstance[0x160]; // 0x00E0 (0x0160)
};

// Class: Engine.PhysicsSerializer
class PhysicsSerializer : public Object {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    int32_t BodySetupCookedCount; // 0x00D0 (0x0004)
    int32_t PhysicalMaterialCookedCount; // 0x00D4 (0x0004)
    uint8_t BodySetupMap[0x50]; // 0x00D8 (0x0050)
};

// Class: Engine.PlatformInterfaceBase
class PlatformInterfaceBase : public Object {
public:
    struct TArray<uint8_t> AllDelegates; // 0x0028 (0x0010)
};

// Class: Engine.CloudStorageBase
class CloudStorageBase : public PlatformInterfaceBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> LocalCloudFiles; // 0x0038 (0x0010)
    bool bSuppressDelegateCalls; // 0x0048 (0x0001)
};

// Class: Engine.InGameAdManager
class InGameAdManager : public PlatformInterfaceBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bShouldPauseWhileAdOpen; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ClickedBannerDelegates; // 0x0040 (0x0010)
    struct TArray<uint8_t> ClosedAdDelegates; // 0x0050 (0x0010)
};

// Class: Engine.MicroTransactionBase
class MicroTransactionBase : public PlatformInterfaceBase {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> AvailableProducts; // 0x0038 (0x0010)
    struct FString LastError; // 0x0048 (0x0010)
    struct FString LastErrorSolution; // 0x0058 (0x0010)
};

// Class: Engine.TwitterIntegrationBase
class TwitterIntegrationBase : public PlatformInterfaceBase {
public:

public:
    bool TwitterRequest(struct FString URL, struct TArray<uint8_t> ParamKeysAndValues, uint8_t RequestMethod, int32_t AccountIndex);
    bool ShowTweetUI(struct FString InitialMessage, struct FString URL, struct FString Picture);
    void Init();
    int32_t GetNumAccounts();
    struct FString GetAccountName(int32_t AccountIndex);
    bool CanShowTweetUI();
    bool AuthorizeAccounts();
};

// Class: Engine.PlatformInterfaceWebResponse
class PlatformInterfaceWebResponse : public Object {
public:
    struct FString OriginalURL; // 0x0028 (0x0010)
    int32_t ResponseCode; // 0x0038 (0x0004)
    int32_t Tag; // 0x003C (0x0004)
    struct FString StringResponse; // 0x0040 (0x0010)
    struct TArray<uint8_t> BinaryResponse; // 0x0050 (0x0010)

public:
    int32_t GetNumHeaders();
    struct FString GetHeaderValue(struct FString HeaderName);
    void GetHeader(int32_t HeaderIndex, struct FString Header, struct FString Value);
};

// Class: Engine.LocalPlayer
class LocalPlayer : public Player {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    class UObject* ViewportClient; // 0x0058 (0x0008)
    uint8_t Pad_1[0x1C]; // 0x0060 (0x001C)
    uint8_t AspectRatioAxisConstraint; // 0x007C (0x0001)
    uint8_t Pad_2[0x3]; // 0x007D (0x0003)
    class UClass* PendingLevelPlayerControllerClass; // 0x0080 (0x0008)
    bool bSentSplitJoin; // 0x0088 (0x0001)
};

// Class: Engine.ChildConnection
class ChildConnection : public NetConnection {
public:
    uint8_t Pad_0[0x33268]; // 0x0028 (0x33268)
    class UObject* Parent; // 0x33290 (0x0008)
};

// Class: Engine.DemoNetConnection
class DemoNetConnection : public NetConnection {
public:
};

// Class: Engine.Polys
class Polys : public Object {
public:
};

// Class: Engine.ReporterBase
class ReporterBase : public Object {
public:
};

// Class: Engine.ReporterGraph
class ReporterGraph : public ReporterBase {
public:
};

// Class: Engine.ReverbEffect
class ReverbEffect : public Object {
public:
    float Density; // 0x0028 (0x0004)
    float Diffusion; // 0x002C (0x0004)
    float Gain; // 0x0030 (0x0004)
    float GainHF; // 0x0034 (0x0004)
    float DecayTime; // 0x0038 (0x0004)
    float DecayHFRatio; // 0x003C (0x0004)
    float ReflectionsGain; // 0x0040 (0x0004)
    float ReflectionsDelay; // 0x0044 (0x0004)
    float LateGain; // 0x0048 (0x0004)
    float LateDelay; // 0x004C (0x0004)
    float AirAbsorptionGainHF; // 0x0050 (0x0004)
    float RoomRolloffFactor; // 0x0054 (0x0004)
};

// Class: Engine.Rig
class Rig : public Object {
public:
    struct TArray<uint8_t> TransformBases; // 0x0028 (0x0010)
    struct TArray<uint8_t> Nodes; // 0x0038 (0x0010)
};

// Class: Engine.SimpleConstructionScript
class SimpleConstructionScript : public Object {
public:
    struct TArray<uint8_t> RootNodes; // 0x0028 (0x0010)
    struct TArray<uint8_t> AllNodes; // 0x0038 (0x0010)
    class UObject* DefaultSceneRootNode; // 0x0048 (0x0008)
    class UObject* RootNode; // 0x0050 (0x0008)
    struct TArray<uint8_t> ActorComponentNodes; // 0x0058 (0x0010)
};

// Class: Engine.SCS_Node
class SCS_Node : public Object {
public:
    class UObject* ComponentTemplate; // 0x0028 (0x0008)
    struct FName VariableName; // 0x0030 (0x0008)
    struct FName AttachToName; // 0x0038 (0x0008)
    struct FName ParentComponentOrVariableName; // 0x0040 (0x0008)
    struct FName ParentComponentOwnerClassName; // 0x0048 (0x0008)
    bool bIsParentComponentNative; // 0x0050 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> ChildNodes; // 0x0058 (0x0010)
    struct TArray<uint8_t> MetaDataArray; // 0x0068 (0x0010)
    uint8_t VariableGuid[0x10]; // 0x0078 (0x0010)
    bool bIsFalseRoot; // 0x0088 (0x0001)
    bool bIsNative; // 0x0089 (0x0001)
    uint8_t Pad_1[0x6]; // 0x008A (0x0006)
    struct FName NativeComponentName; // 0x0090 (0x0008)
    bool bVariableNameAutoGenerated; // 0x0098 (0x0001)
};

// Class: Engine.Selection
class Selection : public Object {
public:
};

// Class: Engine.DestructibleMesh
class DestructibleMesh : public SkeletalMesh {
public:
    uint8_t Pad_0[0x330]; // 0x0028 (0x0330)
    uint8_t DefaultDestructibleParameters[0x88]; // 0x0358 (0x0088)
    struct TArray<uint8_t> FractureEffects; // 0x03E0 (0x0010)
};

// Class: Engine.SkeletalMeshSocket
class SkeletalMeshSocket : public Object {
public:
    struct FName SocketName; // 0x0028 (0x0008)
    struct FName BoneName; // 0x0030 (0x0008)
    uint8_t RelativeLocation[0xC]; // 0x0038 (0x000C)
    uint8_t RelativeRotation[0xC]; // 0x0044 (0x000C)
    uint8_t RelativeScale[0xC]; // 0x0050 (0x000C)
    bool bForceAlwaysAnimated; // 0x005C (0x0001)

public:
    void InitializeSocketFromLocation(class UObject* SkelComp, uint8_t WorldLocation, uint8_t WorldNormal);
    uint8_t GetSocketLocation(class UObject* SkelComp);
};

// Class: Engine.SlateBrushAsset
class SlateBrushAsset : public Object {
public:
    uint8_t Brush[0x90]; // 0x0028 (0x0090)
};

// Class: Engine.DialogueSoundWaveProxy
class DialogueSoundWaveProxy : public SoundBase {
public:
};

// Class: Engine.SoundGroups
class SoundGroups : public Object {
public:
    struct TArray<uint8_t> SoundGroupProfiles; // 0x0028 (0x0010)
};

// Class: Engine.SoundWave
class SoundWave : public SoundBase {
public:
    uint8_t Pad_0[0x50]; // 0x0028 (0x0050)
    int32_t CompressionQuality; // 0x0078 (0x0004)
    bool bLooping; // 0x007C (0x0001)
    bool bStreaming; // 0x007C (0x0001)
    uint8_t Pad_1[0x3]; // 0x007D (0x0003)
    int32_t StreamingPriority; // 0x0080 (0x0004)
    bool bMature; // 0x0084 (0x0001)
    bool bManualWordWrap; // 0x0084 (0x0001)
    bool bSingleLine; // 0x0084 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0085 (0x0003)
    uint8_t SoundGroup; // 0x0088 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0089 (0x0007)
    struct FString SpokenText; // 0x0090 (0x0010)
    float Volume; // 0x00A0 (0x0004)
    float Pitch; // 0x00A4 (0x0004)
    int32_t NumChannels; // 0x00A8 (0x0004)
    int32_t SampleRate; // 0x00AC (0x0004)
    int32_t RawPCMDataSize; // 0x00B0 (0x0004)
    uint8_t Pad_4[0x4]; // 0x00B4 (0x0004)
    struct TArray<uint8_t> Subtitles; // 0x00B8 (0x0010)
    struct TArray<uint8_t> LocalizedSubtitles; // 0x00C8 (0x0010)
};

// Class: Engine.SoundWaveProcedural
class SoundWaveProcedural : public SoundWave {
public:
};

// Class: Engine.SoundClass
class SoundClass : public Object {
public:
    uint8_t Properties[0x28]; // 0x0028 (0x0028)
    struct TArray<uint8_t> ChildClasses; // 0x0050 (0x0010)
    struct TArray<uint8_t> PassiveSoundMixModifiers; // 0x0060 (0x0010)
    class UObject* ParentClass; // 0x0070 (0x0008)
};

// Class: Engine.SoundMix
class SoundMix : public Object {
public:
    bool bApplyEQ; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float EQPriority; // 0x002C (0x0004)
    uint8_t EQSettings[0x38]; // 0x0030 (0x0038)
    struct TArray<uint8_t> SoundClassEffects; // 0x0068 (0x0010)
    float InitialDelay; // 0x0078 (0x0004)
    float FadeInTime; // 0x007C (0x0004)
    float Duration; // 0x0080 (0x0004)
    float FadeOutTime; // 0x0084 (0x0004)
};

// Class: Engine.SoundNode
class SoundNode : public Object {
public:
    struct TArray<uint8_t> ChildNodes; // 0x0028 (0x0010)
};

// Class: Engine.SoundNodeAssetReferencer
class SoundNodeAssetReferencer : public SoundNode {
public:
};

// Class: Engine.SoundNodeWavePlayer
class SoundNodeWavePlayer : public SoundNodeAssetReferencer {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t SoundWaveAssetPtr[0x20]; // 0x0038 (0x0020)
    class UObject* SoundWave; // 0x0058 (0x0008)
    bool bLooping; // 0x0060 (0x0001)
};

// Class: Engine.SoundNodeAttenuation
class SoundNodeAttenuation : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    class UObject* AttenuationSettings; // 0x0038 (0x0008)
    uint8_t AttenuationOverrides[0xF8]; // 0x0040 (0x00F8)
    bool bOverrideAttenuation; // 0x0138 (0x0001)
};

// Class: Engine.SoundNodeBranch
class SoundNodeBranch : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct FName BoolParameterName; // 0x0038 (0x0008)
};

// Class: Engine.SoundNodeConcatenator
class SoundNodeConcatenator : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> InputVolume; // 0x0038 (0x0010)
};

// Class: Engine.SoundNodeDelay
class SoundNodeDelay : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float DelayMin; // 0x0038 (0x0004)
    float DelayMax; // 0x003C (0x0004)
};

// Class: Engine.SoundNodeDialoguePlayer
class SoundNodeDialoguePlayer : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t DialogueWaveParameter[0x20]; // 0x0038 (0x0020)
    bool bLooping; // 0x0058 (0x0001)
};

// Class: Engine.SoundNodeDistanceCrossFade
class SoundNodeDistanceCrossFade : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> CrossFadeInput; // 0x0038 (0x0010)
};

// Class: Engine.SoundNodeParamCrossFade
class SoundNodeParamCrossFade : public SoundNodeDistanceCrossFade {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    struct FName ParamName; // 0x0048 (0x0008)
};

// Class: Engine.SoundNodeDoppler
class SoundNodeDoppler : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float DopplerIntensity; // 0x0038 (0x0004)
};

// Class: Engine.SoundNodeEnveloper
class SoundNodeEnveloper : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float LoopStart; // 0x0038 (0x0004)
    float LoopEnd; // 0x003C (0x0004)
    float DurationAfterLoop; // 0x0040 (0x0004)
    int32_t LoopCount; // 0x0044 (0x0004)
    bool bLoopIndefinitely; // 0x0048 (0x0001)
    bool bLoop; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    class UObject* VolumeInterpCurve; // 0x0050 (0x0008)
    class UObject* PitchInterpCurve; // 0x0058 (0x0008)
    uint8_t VolumeCurve[0x80]; // 0x0060 (0x0080)
    uint8_t PitchCurve[0x80]; // 0x00E0 (0x0080)
    float PitchMin; // 0x0160 (0x0004)
    float PitchMax; // 0x0164 (0x0004)
    float VolumeMin; // 0x0168 (0x0004)
    float VolumeMax; // 0x016C (0x0004)
};

// Class: Engine.SoundNodeGroupControl
class SoundNodeGroupControl : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> GroupSizes; // 0x0038 (0x0010)
};

// Class: Engine.SoundNodeLooping
class SoundNodeLooping : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    int32_t LoopCount; // 0x0038 (0x0004)
    bool bLoopIndefinitely; // 0x003C (0x0001)
};

// Class: Engine.SoundNodeMature
class SoundNodeMature : public SoundNode {
public:
};

// Class: Engine.SoundNodeMixer
class SoundNodeMixer : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> InputVolume; // 0x0038 (0x0010)
};

// Class: Engine.SoundNodeModulator
class SoundNodeModulator : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    float PitchMin; // 0x0038 (0x0004)
    float PitchMax; // 0x003C (0x0004)
    float VolumeMin; // 0x0040 (0x0004)
    float VolumeMax; // 0x0044 (0x0004)
};

// Class: Engine.SoundNodeModulatorContinuous
class SoundNodeModulatorContinuous : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t PitchModulationParams[0x20]; // 0x0038 (0x0020)
    uint8_t VolumeModulationParams[0x20]; // 0x0058 (0x0020)
};

// Class: Engine.SoundNodeOscillator
class SoundNodeOscillator : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bModulateVolume; // 0x0038 (0x0001)
    bool bModulatePitch; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    float AmplitudeMin; // 0x003C (0x0004)
    float AmplitudeMax; // 0x0040 (0x0004)
    float FrequencyMin; // 0x0044 (0x0004)
    float FrequencyMax; // 0x0048 (0x0004)
    float OffsetMin; // 0x004C (0x0004)
    float OffsetMax; // 0x0050 (0x0004)
    float CenterMin; // 0x0054 (0x0004)
    float CenterMax; // 0x0058 (0x0004)
};

// Class: Engine.SoundNodeQualityLevel
class SoundNodeQualityLevel : public SoundNode {
public:
};

// Class: Engine.SoundNodeRandom
class SoundNodeRandom : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct TArray<uint8_t> Weights; // 0x0038 (0x0010)
    int32_t PreselectAtLevelLoad; // 0x0048 (0x0004)
    bool bRandomizeWithoutReplacement; // 0x004C (0x0001)
    uint8_t Pad_1[0x3]; // 0x004D (0x0003)
    struct TArray<uint8_t> HasBeenUsed; // 0x0050 (0x0010)
    int32_t NumRandomUsed; // 0x0060 (0x0004)
};

// Class: Engine.SoundNodeSoundClass
class SoundNodeSoundClass : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    class UObject* SoundClassOverride; // 0x0038 (0x0008)
};

// Class: Engine.SoundNodeSwitch
class SoundNodeSwitch : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct FName IntParameterName; // 0x0038 (0x0008)
};

// Class: Engine.SoundNodeWaveParam
class SoundNodeWaveParam : public SoundNode {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    struct FName WaveParameterName; // 0x0038 (0x0008)
};

// Class: Engine.StaticMesh
class StaticMesh : public Object {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    int32_t MinLOD; // 0x0040 (0x0004)
    float MaxDrawDistance; // 0x0044 (0x0004)
    float MinScreenSize; // 0x0048 (0x0004)
    bool bHasBillboardLOD; // 0x004C (0x0001)
    uint8_t Pad_1[0x3]; // 0x004D (0x0003)
    struct TArray<uint8_t> Materials; // 0x0050 (0x0010)
    int32_t LightMapResolution; // 0x0060 (0x0004)
    int32_t LightMapCoordinateIndex; // 0x0064 (0x0004)
    class UObject* BodySetup; // 0x0068 (0x0008)
    int32_t CollisionLOD; // 0x0070 (0x0004)
    uint8_t CanCharacterStepUpOn; // 0x0074 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0075 (0x0003)
    bool bUseMaximumStreamingTexelRatio; // 0x0078 (0x0001)
    bool bStripComplexCollisionForConsole; // 0x0078 (0x0001)
    bool bExcludeFromBendMeshCollection; // 0x0078 (0x0001)
    bool bAllowMeshCollectionWithSockets; // 0x0078 (0x0001)
    bool bStripSocketsOnCook; // 0x0078 (0x0001)
    bool bMoveInstancesToFoliageSystem; // 0x0078 (0x0001)
    bool bDisableMeshLodDithering; // 0x0078 (0x0001)
    bool bHasNavigationData; // 0x0078 (0x0001)
    bool bNeverUseWetness; // 0x0079 (0x0001)
    bool bUsePaintedWetness; // 0x0079 (0x0001)
    bool bUseCombinedWetness; // 0x0079 (0x0001)
    bool bIgnoreMoveablityForWetness; // 0x0079 (0x0001)
    bool bIncludeInUIMap; // 0x0079 (0x0001)
    uint8_t Pad_3[0x2]; // 0x007A (0x0002)
    uint8_t UIMapColorType; // 0x007C (0x0001)
    uint8_t Pad_4[0x3]; // 0x007D (0x0003)
    bool bAllowVertexColorOverrides; // 0x0080 (0x0001)
    bool bHideInReflectionCapture; // 0x0080 (0x0001)
    bool bDisableOcclusionVoxelization; // 0x0080 (0x0001)
    bool bAllowMovableVoxelization; // 0x0080 (0x0001)
    bool bAllowMaskedVoxelization; // 0x0080 (0x0001)
    bool bDisableEmissiveVoxelization; // 0x0080 (0x0001)
    bool bAllowEmissiveVoxelNormalOffset; // 0x0080 (0x0001)
    bool bRenderInSkyCapture; // 0x0080 (0x0001)
    bool bRenderInTerrainHeightmapCapture; // 0x0081 (0x0001)
    bool bExcludeFromTerrainColorCapture; // 0x0081 (0x0001)
    bool bExcludeFromWeatherHeightmapCapture; // 0x0081 (0x0001)
    bool bCastShadows; // 0x0081 (0x0001)
    uint8_t Pad_5[0x2]; // 0x0082 (0x0002)
    uint8_t BendVoxelNormalOffset; // 0x0084 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0085 (0x0003)
    float StreamingDistanceMultiplier; // 0x0088 (0x0004)
    float LpvBiasMultiplier; // 0x008C (0x0004)
    uint8_t Pad_7[0x18]; // 0x0090 (0x0018)
    class UObject* ShadowProxyTexture; // 0x00A8 (0x0008)
    class UObject* MeshImposterData; // 0x00B0 (0x0008)
    bool bShadowProxyMatchesMesh; // 0x00B8 (0x0001)
    bool bShadowProxyCascade0; // 0x00B8 (0x0001)
    bool bShadowProxyCascade1; // 0x00B8 (0x0001)
    bool bShadowProxyCascade2; // 0x00B8 (0x0001)
    bool bUseApproximateTreeVoxelInjection; // 0x00B8 (0x0001)
    uint8_t Pad_8[0x3]; // 0x00B9 (0x0003)
    float ShadowProxyAOScale; // 0x00BC (0x0004)
    float ShadowProxySmallRadiusAOScale; // 0x00C0 (0x0004)
    uint8_t Pad_9[0x14]; // 0x00C4 (0x0014)
    struct TArray<uint8_t> Sockets; // 0x00D8 (0x0010)
    uint8_t Pad_10[0x10]; // 0x00E8 (0x0010)
    int32_t SpeedTreeGeometryVersion; // 0x00F8 (0x0004)
    uint8_t Pad_11[0x4]; // 0x00FC (0x0004)
    struct TArray<uint8_t> TraversalEdges; // 0x0100 (0x0010)
    uint8_t PositiveBoundsExtension[0xC]; // 0x0110 (0x000C)
    uint8_t NegativeBoundsExtension[0xC]; // 0x011C (0x000C)
    uint8_t ExtendedBounds[0x1C]; // 0x0128 (0x001C)
    int32_t ElementToIgnoreForTexFactor; // 0x0144 (0x0004)
    struct TArray<uint8_t> AssetUserData; // 0x0148 (0x0010)
    class UObject* NavCollision; // 0x0158 (0x0008)

public:
    uint8_t GetBoundingBox();
};

// Class: Engine.StaticMeshSocket
class StaticMeshSocket : public Object {
public:
    struct FName SocketName; // 0x0028 (0x0008)
    uint8_t RelativeLocation[0xC]; // 0x0030 (0x000C)
    uint8_t RelativeRotation[0xC]; // 0x003C (0x000C)
    uint8_t RelativeScale[0xC]; // 0x0048 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0054 (0x0004)
    struct FString Tag; // 0x0058 (0x0010)
};

// Class: Engine.StaticMeshTraversalEdge
class StaticMeshTraversalEdge : public Object {
public:
    struct FName traversalEdgeName; // 0x0028 (0x0008)
    uint8_t RelativeLocation[0xC]; // 0x0030 (0x000C)
    uint8_t PointLocations[0xC]; // 0x003C (0x000C)
    uint8_t Pad_0[0xC]; // 0x0048 (0x000C)
    uint8_t Normals[0xC]; // 0x0054 (0x000C)
    uint8_t Pad_1[0xC]; // 0x0060 (0x000C)
    uint8_t RelativeRotation[0xC]; // 0x006C (0x000C)
    uint8_t RelativeScale[0xC]; // 0x0078 (0x000C)
    bool guardRail; // 0x0084 (0x0001)
    bool forceVault; // 0x0085 (0x0001)
    bool climbable; // 0x0086 (0x0001)
    bool ladderEdge; // 0x0087 (0x0001)
    bool CrowsCanPerch; // 0x0088 (0x0001)
    bool windowEdge; // 0x0089 (0x0001)
    bool bRoofEdge; // 0x008A (0x0001)
    uint8_t LadderRungType; // 0x008B (0x0001)
    uint8_t Pad_2[0x4]; // 0x008C (0x0004)
    uint8_t ClimbStateData[0x20]; // 0x0090 (0x0020)
};

// Class: Engine.SubsurfaceProfile
class SubsurfaceProfile : public Object {
public:
    uint8_t Settings[0x24]; // 0x0028 (0x0024)
};

// Class: Engine.TextPropertyTestObject
class TextPropertyTestObject : public Object {
public:
    struct FText DefaultedText; // 0x0028 (0x0018)
    struct FText UndefaultedText; // 0x0040 (0x0018)
    struct FText TransientText; // 0x0058 (0x0018)
};

// Class: Engine.Texture
class Texture : public Object {
public:
    int32_t LODBias; // 0x0028 (0x0004)
    int32_t NumCinematicMipLevels; // 0x002C (0x0004)
    bool SRGB; // 0x0030 (0x0001)
    bool NeverStream; // 0x0030 (0x0001)
    bool bNoTiling; // 0x0030 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0031 (0x0003)
    bool VirtualTextureStreaming; // 0x0034 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0035 (0x0003)
    bool bUseCinematicMipLevels; // 0x0038 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0039 (0x0003)
    bool CompressionYCoCg; // 0x003C (0x0001)
    uint8_t Pad_3[0x3]; // 0x003D (0x0003)
    int32_t CachedCombinedLODBias; // 0x0040 (0x0004)
    bool bAsyncResourceReleaseHasBeenStarted; // 0x0044 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0045 (0x0003)
    uint8_t CompressionSettings; // 0x0048 (0x0001)
    uint8_t Filter; // 0x0049 (0x0001)
    uint8_t LODGroup; // 0x004A (0x0001)
};

// Class: Engine.Texture2D
class Texture2D : public Texture {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    int32_t RequestedMips; // 0x00A8 (0x0004)
    int32_t ResidentMips; // 0x00AC (0x0004)
    int32_t StreamingIndex; // 0x00B0 (0x0004)
    int32_t LevelIndex; // 0x00B4 (0x0004)
    int32_t FirstResourceMemMip; // 0x00B8 (0x0004)
    uint8_t Pad_1[0x4]; // 0x00BC (0x0004)
    uint8_t ImportedSize[0x8]; // 0x00C0 (0x0008)
    uint8_t MaxSize[0x8]; // 0x00C8 (0x0008)
    float ForceMipLevelsToBeResidentTimestamp; // 0x00D0 (0x0004)
    bool bTemporarilyDisableStreaming; // 0x00D4 (0x0001)
    bool bIsStreamable; // 0x00D4 (0x0001)
    bool bHasStreamingUpdatePending; // 0x00D4 (0x0001)
    bool bHasCancelationPending; // 0x00D4 (0x0001)
    bool bForceMiplevelsToBeResident; // 0x00D4 (0x0001)
    bool bIgnoreStreamingMipBias; // 0x00D4 (0x0001)
    bool bGlobalForceMipLevelsToBeResident; // 0x00D4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00D5 (0x0003)
    uint8_t AddressX; // 0x00D8 (0x0001)
    uint8_t AddressY; // 0x00D9 (0x0001)

public:
    int32_t Blueprint_GetSizeY();
    int32_t Blueprint_GetSizeX();
};

// Class: Engine.BendShadowProxyTexture
class BendShadowProxyTexture : public Texture2D {
public:
    uint8_t Pad_0[0xD0]; // 0x0028 (0x00D0)
    int32_t SliceCount; // 0x00F8 (0x0004)
    int32_t ProxyRadius; // 0x00FC (0x0004)
    int32_t ProxyHeight; // 0x0100 (0x0004)
};

// Class: Engine.LightMapTexture2D
class LightMapTexture2D : public Texture2D {
public:
};

// Class: Engine.ShadowMapTexture2D
class ShadowMapTexture2D : public Texture2D {
public:
    uint8_t Pad_0[0xD0]; // 0x0028 (0x00D0)
    uint8_t ShadowmapFlags; // 0x00F8 (0x0001)
};

// Class: Engine.TextureLightProfile
class TextureLightProfile : public Texture2D {
public:
    uint8_t Pad_0[0xD0]; // 0x0028 (0x00D0)
    float Brightness; // 0x00F8 (0x0004)
    float TextureMultiplier; // 0x00FC (0x0004)
};

// Class: Engine.Texture2DDynamic
class Texture2DDynamic : public Texture {
public:
    uint8_t Pad_0[0x88]; // 0x0028 (0x0088)
    uint8_t Format; // 0x00B0 (0x0001)
};

// Class: Engine.TextureCube
class TextureCube : public Texture {
public:
};

// Class: Engine.TextureRenderTarget
class TextureRenderTarget : public Texture {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    float TargetGamma; // 0x00A8 (0x0004)
};

// Class: Engine.TextureRenderTarget2D
class TextureRenderTarget2D : public TextureRenderTarget {
public:
    uint8_t Pad_0[0x88]; // 0x0028 (0x0088)
    int32_t SizeX; // 0x00B0 (0x0004)
    int32_t SizeY; // 0x00B4 (0x0004)
    uint8_t ClearColor[0x10]; // 0x00B8 (0x0010)
    uint8_t AddressX; // 0x00C8 (0x0001)
    uint8_t AddressY; // 0x00C9 (0x0001)
    uint8_t Pad_1[0x2]; // 0x00CA (0x0002)
    bool bForceLinearGamma; // 0x00CC (0x0001)
    bool bHDR; // 0x00CC (0x0001)
    bool bAutoGenerateMips; // 0x00CC (0x0001)
    uint8_t Pad_2[0x3]; // 0x00CD (0x0003)
    uint8_t OverrideFormat; // 0x00D0 (0x0001)
};

// Class: Engine.CanvasRenderTarget2D
class CanvasRenderTarget2D : public TextureRenderTarget2D {
public:
    uint8_t Pad_0[0xB0]; // 0x0028 (0x00B0)
    uint8_t OnCanvasRenderTargetUpdate[0x10]; // 0x00D8 (0x0010)
    uint64_t World; // 0x00E8 (0x0008)

public:
    void UpdateResource();
    void ReceiveUpdate(class UObject* Canvas, int32_t Width, int32_t Height);
    void GetSize(int32_t Width, int32_t Height);
    class UObject* CreateCanvasRenderTarget2D(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int32_t Width, int32_t Height);
};

// Class: Engine.TextureRenderTargetCube
class TextureRenderTargetCube : public TextureRenderTarget {
public:
    uint8_t Pad_0[0x88]; // 0x0028 (0x0088)
    int32_t SizeX; // 0x00B0 (0x0004)
    uint8_t ClearColor[0x10]; // 0x00B4 (0x0010)
    uint8_t OverrideFormat; // 0x00C4 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00C5 (0x0003)
    bool bHDR; // 0x00C8 (0x0001)
    bool bForceLinearGamma; // 0x00C8 (0x0001)
};

// Class: Engine.ThumbnailInfo
class ThumbnailInfo : public Object {
public:
};

// Class: Engine.TimelineTemplate
class TimelineTemplate : public Object {
public:
    float TimelineLength; // 0x0028 (0x0004)
    uint8_t LengthMode; // 0x002C (0x0001)
    uint8_t Pad_0[0x3]; // 0x002D (0x0003)
    bool bAutoPlay; // 0x0030 (0x0001)
    bool bLoop; // 0x0030 (0x0001)
    bool bReplicated; // 0x0030 (0x0001)
    bool bValidatedAsWired; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> EventTracks; // 0x0038 (0x0010)
    struct TArray<uint8_t> FloatTracks; // 0x0048 (0x0010)
    struct TArray<uint8_t> VectorTracks; // 0x0058 (0x0010)
    struct TArray<uint8_t> LinearColorTracks; // 0x0068 (0x0010)
    struct TArray<uint8_t> MetaDataArray; // 0x0078 (0x0010)
    uint8_t TimelineGuid[0x10]; // 0x0088 (0x0010)
};

// Class: Engine.TouchInterface
class TouchInterface : public Object {
public:
    struct TArray<uint8_t> Controls; // 0x0028 (0x0010)
    float ActiveOpacity; // 0x0038 (0x0004)
    float InactiveOpacity; // 0x003C (0x0004)
    float TimeUntilDeactive; // 0x0040 (0x0004)
    float TimeUntilReset; // 0x0044 (0x0004)
    float ActivationDelay; // 0x0048 (0x0004)
    bool bPreventRecenter; // 0x004C (0x0001)
    uint8_t Pad_0[0x3]; // 0x004D (0x0003)
    float StartupDelay; // 0x0050 (0x0004)
};

// Class: Engine.UserDefinedEnum
class UserDefinedEnum : public Enum {
public:
    uint8_t Pad_0[0x30]; // 0x0028 (0x0030)
    struct TArray<uint8_t> DisplayNames; // 0x0058 (0x0010)
};

// Class: Engine.VectorField
class VectorField : public Object {
public:
    uint8_t Bounds[0x1C]; // 0x0028 (0x001C)
    float intensity; // 0x0044 (0x0004)
};

// Class: Engine.BendVectorFieldComposited
class BendVectorFieldComposited : public VectorField {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    int32_t VolumeSizeX; // 0x0048 (0x0004)
    int32_t VolumeSizeY; // 0x004C (0x0004)
    int32_t VolumeSizeZ; // 0x0050 (0x0004)
    uint8_t Pad_1[0xC]; // 0x0054 (0x000C)
    uint8_t VolumeToWorld[0x40]; // 0x0060 (0x0040)
};

// Class: Engine.VectorFieldAnimated
class VectorFieldAnimated : public VectorField {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    class UObject* Texture; // 0x0048 (0x0008)
    uint8_t ConstructionOp; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    int32_t VolumeSizeX; // 0x0054 (0x0004)
    int32_t VolumeSizeY; // 0x0058 (0x0004)
    int32_t VolumeSizeZ; // 0x005C (0x0004)
    int32_t SubImagesX; // 0x0060 (0x0004)
    int32_t SubImagesY; // 0x0064 (0x0004)
    int32_t FrameCount; // 0x0068 (0x0004)
    float FramesPerSecond; // 0x006C (0x0004)
    bool bLoop; // 0x0070 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0071 (0x0007)
    class UObject* NoiseField; // 0x0078 (0x0008)
    float NoiseScale; // 0x0080 (0x0004)
    float NoiseMax; // 0x0084 (0x0004)
};

// Class: Engine.VectorFieldStatic
class VectorFieldStatic : public VectorField {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    int32_t SizeX; // 0x0048 (0x0004)
    int32_t SizeY; // 0x004C (0x0004)
    int32_t SizeZ; // 0x0050 (0x0004)
};

// Class: Engine.VertexAnimBase
class VertexAnimBase : public Object {
public:
    class UObject* BaseSkelMesh; // 0x0028 (0x0008)
};

// Class: Engine.MorphTarget
class MorphTarget : public VertexAnimBase {
public:
};

// Class: Engine.VertexAnimation
class VertexAnimation : public VertexAnimBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    int32_t NumAnimatedVerts; // 0x0030 (0x0004)
};

// Class: Engine.VisualLoggerAutomationTests
class VisualLoggerAutomationTests : public Object {
public:
};

// Class: Engine.VisualLoggerDebugSnapshotInterface
class VisualLoggerDebugSnapshotInterface : public Interface {
public:
};

// Class: Engine.WorldComposition
class WorldComposition : public Object {
public:
    uint8_t Pad_0[0x68]; // 0x0028 (0x0068)
    struct TArray<uint8_t> TilesStreaming; // 0x0090 (0x0010)
    double TilesStreamingTimeThreshold; // 0x00A0 (0x0008)
    bool bLoadAllTilesDuringCinematic; // 0x00A8 (0x0001)
    bool bRebaseOriginIn3DSpace; // 0x00A9 (0x0001)
    uint8_t Pad_1[0x2]; // 0x00AA (0x0002)
    float RebaseOriginDistance; // 0x00AC (0x0004)
};

// Class: Engine.Default__BlueprintGeneratedClass
class Default__BlueprintGeneratedClass : public UObject {
public:
};

// Class: Engine.Default__AnimBlueprintGeneratedClass
class Default__AnimBlueprintGeneratedClass : public UObject {
public:
};

} // namespace SDK

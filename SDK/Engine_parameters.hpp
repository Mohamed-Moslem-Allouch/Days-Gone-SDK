#pragma once
#include "Basic.hpp"
#include "Engine_structs.hpp"

namespace SDK {

// Function: Engine.Actor.UserConstructionScript
// Size: 0x0000
struct Actor_UserConstructionScript_Params {
public:
};

// Function: Engine.Actor.TearOff
// Size: 0x0000
struct Actor_TearOff_Params {
public:
};

// Function: Engine.Actor.SnapRootComponentTo
// Size: 0x0010
struct Actor_SnapRootComponentTo_Params {
public:
    class UObject* InParentActor; // 0x0000 (0x0008)
    struct FName InSocketName; // 0x0008 (0x0008)
};

// Function: Engine.Actor.SetTickGroup
// Size: 0x0001
struct Actor_SetTickGroup_Params {
public:
    uint8_t NewTickGroup; // 0x0000 (0x0001)
};

// Function: Engine.Actor.SetTickableWhenPaused
// Size: 0x0001
struct Actor_SetTickableWhenPaused_Params {
public:
    bool bTickableWhenPaused; // 0x0000 (0x0001)
};

// Function: Engine.Actor.SetReplicates
// Size: 0x0001
struct Actor_SetReplicates_Params {
public:
    bool bInReplicates; // 0x0000 (0x0001)
};

// Function: Engine.Actor.SetReplicateMovement
// Size: 0x0001
struct Actor_SetReplicateMovement_Params {
public:
    bool bInReplicateMovement; // 0x0000 (0x0001)
};

// Function: Engine.Actor.SetOwner
// Size: 0x0008
struct Actor_SetOwner_Params {
public:
    class UObject* NewOwner; // 0x0000 (0x0008)
};

// Function: Engine.Actor.SetLifeSpan
// Size: 0x0004
struct Actor_SetLifeSpan_Params {
public:
    float InLifespan; // 0x0000 (0x0004)
};

// Function: Engine.Actor.SetActorTickEnabled
// Size: 0x0001
struct Actor_SetActorTickEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.Actor.SetActorScale3D
// Size: 0x000C
struct Actor_SetActorScale3D_Params {
public:
    uint8_t NewScale3D[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.SetActorRotation
// Size: 0x000D
struct Actor_SetActorRotation_Params {
public:
    uint8_t NewRotation[0xC]; // 0x0000 (0x000C)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: Engine.Actor.SetActorRelativeScale3D
// Size: 0x000C
struct Actor_SetActorRelativeScale3D_Params {
public:
    uint8_t NewRelativeScale[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.SetActorHiddenInGame
// Size: 0x0001
struct Actor_SetActorHiddenInGame_Params {
public:
    bool bNewHidden; // 0x0000 (0x0001)
};

// Function: Engine.Actor.SetActorEnableCollision
// Size: 0x0001
struct Actor_SetActorEnableCollision_Params {
public:
    bool bNewActorEnableCollision; // 0x0000 (0x0001)
};

// Function: Engine.Actor.RemoveTickPrerequisiteComponent
// Size: 0x0008
struct Actor_RemoveTickPrerequisiteComponent_Params {
public:
    class UObject* PrerequisiteComponent; // 0x0000 (0x0008)
};

// Function: Engine.Actor.RemoveTickPrerequisiteActor
// Size: 0x0008
struct Actor_RemoveTickPrerequisiteActor_Params {
public:
    class UObject* PrerequisiteActor; // 0x0000 (0x0008)
};

// Function: Engine.Actor.ReceiveTick
// Size: 0x0004
struct Actor_ReceiveTick_Params {
public:
    float DeltaSeconds; // 0x0000 (0x0004)
};

// Function: Engine.Actor.ReceiveRadialDamage
// Size: 0x00B8
struct Actor_ReceiveRadialDamage_Params {
public:
    float DamageReceived; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* DamageType; // 0x0008 (0x0008)
    uint8_t Origin[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    uint8_t HitInfo[0x88]; // 0x0020 (0x0088)
    class UObject* InstigatedBy; // 0x00A8 (0x0008)
    class UObject* DamageCauser; // 0x00B0 (0x0008)
};

// Function: Engine.Actor.ReceivePreSaveGameLoaded
// Size: 0x0001
struct Actor_ReceivePreSaveGameLoaded_Params {
public:
    bool bIsCheckpoint; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceivePreCheckpointSave
// Size: 0x0000
struct Actor_ReceivePreCheckpointSave_Params {
public:
};

// Function: Engine.Actor.ReceivePostSaveGameLoaded
// Size: 0x0001
struct Actor_ReceivePostSaveGameLoaded_Params {
public:
    bool bIsCheckpoint; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceivePointDamage
// Size: 0x0058
struct Actor_ReceivePointDamage_Params {
public:
    float Damage; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* DamageType; // 0x0008 (0x0008)
    uint8_t HitLocation[0xC]; // 0x0010 (0x000C)
    uint8_t HitNormal[0xC]; // 0x001C (0x000C)
    class UObject* HitComponent; // 0x0028 (0x0008)
    struct FName BoneName; // 0x0030 (0x0008)
    uint8_t ShotFromDirection[0xC]; // 0x0038 (0x000C)
    uint8_t Pad_1[0x4]; // 0x0044 (0x0004)
    class UObject* InstigatedBy; // 0x0048 (0x0008)
    class UObject* DamageCauser; // 0x0050 (0x0008)
};

// Function: Engine.Actor.ReceiveHit
// Size: 0x00C8
struct Actor_ReceiveHit_Params {
public:
    class UObject* MyComp; // 0x0000 (0x0008)
    class UObject* Other; // 0x0008 (0x0008)
    class UObject* OtherComp; // 0x0010 (0x0008)
    bool bSelfMoved; // 0x0018 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0019 (0x0003)
    uint8_t HitLocation[0xC]; // 0x001C (0x000C)
    uint8_t HitNormal[0xC]; // 0x0028 (0x000C)
    uint8_t NormalImpulse[0xC]; // 0x0034 (0x000C)
    uint8_t Hit[0x88]; // 0x0040 (0x0088)
};

// Function: Engine.Actor.ReceiveEndPlay
// Size: 0x0001
struct Actor_ReceiveEndPlay_Params {
public:
    uint8_t EndPlayReason; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceiveDestroyed
// Size: 0x0000
struct Actor_ReceiveDestroyed_Params {
public:
};

// Function: Engine.Actor.ReceiveBeginPlay
// Size: 0x0000
struct Actor_ReceiveBeginPlay_Params {
public:
};

// Function: Engine.Actor.ReceiveAnyDamage
// Size: 0x0020
struct Actor_ReceiveAnyDamage_Params {
public:
    float Damage; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* DamageType; // 0x0008 (0x0008)
    class UObject* InstigatedBy; // 0x0010 (0x0008)
    class UObject* DamageCauser; // 0x0018 (0x0008)
};

// Function: Engine.Actor.ReceiveActorOnReleased
// Size: 0x0000
struct Actor_ReceiveActorOnReleased_Params {
public:
};

// Function: Engine.Actor.ReceiveActorOnInputTouchLeave
// Size: 0x0001
struct Actor_ReceiveActorOnInputTouchLeave_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceiveActorOnInputTouchEnter
// Size: 0x0001
struct Actor_ReceiveActorOnInputTouchEnter_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceiveActorOnInputTouchEnd
// Size: 0x0001
struct Actor_ReceiveActorOnInputTouchEnd_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceiveActorOnInputTouchBegin
// Size: 0x0001
struct Actor_ReceiveActorOnInputTouchBegin_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
};

// Function: Engine.Actor.ReceiveActorOnInputEnabled
// Size: 0x0000
struct Actor_ReceiveActorOnInputEnabled_Params {
public:
};

// Function: Engine.Actor.ReceiveActorOnInputDisabled
// Size: 0x0000
struct Actor_ReceiveActorOnInputDisabled_Params {
public:
};

// Function: Engine.Actor.ReceiveActorOnClicked
// Size: 0x0000
struct Actor_ReceiveActorOnClicked_Params {
public:
};

// Function: Engine.Actor.ReceiveActorEndOverlapComponent
// Size: 0x0014
struct Actor_ReceiveActorEndOverlapComponent_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    class UObject* OtherComp; // 0x0008 (0x0008)
    int32_t OtherBodyIndex; // 0x0010 (0x0004)
};

// Function: Engine.Actor.ReceiveActorEndOverlap
// Size: 0x0008
struct Actor_ReceiveActorEndOverlap_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
};

// Function: Engine.Actor.ReceiveActorEndCursorOver
// Size: 0x0000
struct Actor_ReceiveActorEndCursorOver_Params {
public:
};

// Function: Engine.Actor.ReceiveActorBeginOverlapComponent
// Size: 0x0014
struct Actor_ReceiveActorBeginOverlapComponent_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    class UObject* OtherComp; // 0x0008 (0x0008)
    int32_t OtherBodyIndex; // 0x0010 (0x0004)
};

// Function: Engine.Actor.ReceiveActorBeginOverlap
// Size: 0x0008
struct Actor_ReceiveActorBeginOverlap_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
};

// Function: Engine.Actor.ReceiveActorBeginCursorOver
// Size: 0x0000
struct Actor_ReceiveActorBeginCursorOver_Params {
public:
};

// Function: Engine.Actor.OnRep_ReplicateMovement
// Size: 0x0000
struct Actor_OnRep_ReplicateMovement_Params {
public:
};

// Function: Engine.Actor.OnRep_ReplicatedMovement
// Size: 0x0000
struct Actor_OnRep_ReplicatedMovement_Params {
public:
};

// Function: Engine.Actor.OnRep_Owner
// Size: 0x0000
struct Actor_OnRep_Owner_Params {
public:
};

// Function: Engine.Actor.OnRep_Instigator
// Size: 0x0000
struct Actor_OnRep_Instigator_Params {
public:
};

// Function: Engine.Actor.OnRep_AttachmentReplication
// Size: 0x0000
struct Actor_OnRep_AttachmentReplication_Params {
public:
};

// Function: Engine.Actor.OnFinishLoad
// Size: 0x0008
struct Actor_OnFinishLoad_Params {
public:
    class UClass* Actor; // 0x0000 (0x0008)
};

// Function: Engine.Actor.MakeNoise
// Size: 0x0028
struct Actor_MakeNoise_Params {
public:
    float Loudness; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* NoiseInstigator; // 0x0008 (0x0008)
    uint8_t NoiseLocation[0xC]; // 0x0010 (0x000C)
    float MaxRange; // 0x001C (0x0004)
    struct FName Tag; // 0x0020 (0x0008)
};

// Function: Engine.Actor.MakeMIDForMaterial
// Size: 0x0010
struct Actor_MakeMIDForMaterial_Params {
public:
    class UObject* Parent; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.Actor.K2_TeleportTo
// Size: 0x0019
struct Actor_K2_TeleportTo_Params {
public:
    uint8_t DestLocation[0xC]; // 0x0000 (0x000C)
    uint8_t DestRotation[0xC]; // 0x000C (0x000C)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.Actor.K2_SetActorTransform
// Size: 0x00C2
struct Actor_K2_SetActorTransform_Params {
public:
    uint8_t NewTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
    bool ReturnValue; // 0x00C1 (0x0001)
};

// Function: Engine.Actor.K2_SetActorRelativeTransform
// Size: 0x00C1
struct Actor_K2_SetActorRelativeTransform_Params {
public:
    uint8_t NewRelativeTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.Actor.K2_SetActorRelativeRotation
// Size: 0x0099
struct Actor_K2_SetActorRelativeRotation_Params {
public:
    uint8_t NewRelativeRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.Actor.K2_SetActorRelativeLocation
// Size: 0x0099
struct Actor_K2_SetActorRelativeLocation_Params {
public:
    uint8_t NewRelativeLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.Actor.K2_SetActorLocationAndRotation
// Size: 0x00AA
struct Actor_K2_SetActorLocationAndRotation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
    bool bSweep; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0020 (0x0088)
    bool bTeleport; // 0x00A8 (0x0001)
    bool ReturnValue; // 0x00A9 (0x0001)
};

// Function: Engine.Actor.K2_SetActorLocation
// Size: 0x009A
struct Actor_K2_SetActorLocation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
    bool ReturnValue; // 0x0099 (0x0001)
};

// Function: Engine.Actor.K2_OnReset
// Size: 0x0000
struct Actor_K2_OnReset_Params {
public:
};

// Function: Engine.Actor.K2_OnEndViewTarget
// Size: 0x0008
struct Actor_K2_OnEndViewTarget_Params {
public:
    class UObject* PC; // 0x0000 (0x0008)
};

// Function: Engine.Actor.K2_OnBecomeViewTarget
// Size: 0x0008
struct Actor_K2_OnBecomeViewTarget_Params {
public:
    class UObject* PC; // 0x0000 (0x0008)
};

// Function: Engine.Actor.K2_GetRootComponent
// Size: 0x0008
struct Actor_K2_GetRootComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Actor.K2_GetActorRotation
// Size: 0x000C
struct Actor_K2_GetActorRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.K2_GetActorLocation
// Size: 0x000C
struct Actor_K2_GetActorLocation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.K2_DestroyComponent
// Size: 0x0008
struct Actor_K2_DestroyComponent_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
};

// Function: Engine.Actor.K2_DestroyActor
// Size: 0x0000
struct Actor_K2_DestroyActor_Params {
public:
};

// Function: Engine.Actor.K2_AttachRootComponentToActor
// Size: 0x0012
struct Actor_K2_AttachRootComponentToActor_Params {
public:
    class UObject* InParentActor; // 0x0000 (0x0008)
    struct FName InSocketName; // 0x0008 (0x0008)
    uint8_t AttachLocationType; // 0x0010 (0x0001)
    bool bWeldSimulatedBodies; // 0x0011 (0x0001)
};

// Function: Engine.Actor.K2_AttachRootComponentTo
// Size: 0x0012
struct Actor_K2_AttachRootComponentTo_Params {
public:
    class UObject* InParent; // 0x0000 (0x0008)
    struct FName InSocketName; // 0x0008 (0x0008)
    uint8_t AttachLocationType; // 0x0010 (0x0001)
    bool bWeldSimulatedBodies; // 0x0011 (0x0001)
};

// Function: Engine.Actor.K2_AddActorWorldTransform
// Size: 0x00C1
struct Actor_K2_AddActorWorldTransform_Params {
public:
    uint8_t DeltaTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.Actor.K2_AddActorWorldRotation
// Size: 0x0099
struct Actor_K2_AddActorWorldRotation_Params {
public:
    uint8_t DeltaRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.Actor.K2_AddActorWorldOffset
// Size: 0x0099
struct Actor_K2_AddActorWorldOffset_Params {
public:
    uint8_t DeltaLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.Actor.K2_AddActorLocalTransform
// Size: 0x00C1
struct Actor_K2_AddActorLocalTransform_Params {
public:
    uint8_t NewTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.Actor.K2_AddActorLocalRotation
// Size: 0x0099
struct Actor_K2_AddActorLocalRotation_Params {
public:
    uint8_t DeltaRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.Actor.K2_AddActorLocalOffset
// Size: 0x0099
struct Actor_K2_AddActorLocalOffset_Params {
public:
    uint8_t DeltaLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.Actor.IsOverlappingActor
// Size: 0x0009
struct Actor_IsOverlappingActor_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.Actor.IsLiveSwapActive
// Size: 0x0001
struct Actor_IsLiveSwapActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.IsChildActor
// Size: 0x0001
struct Actor_IsChildActor_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.IsActorTickEnabled
// Size: 0x0001
struct Actor_IsActorTickEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.IsActorBeingDestroyed
// Size: 0x0001
struct Actor_IsActorBeingDestroyed_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.HasAuthority
// Size: 0x0001
struct Actor_HasAuthority_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.GetVerticalDistanceTo
// Size: 0x000C
struct Actor_GetVerticalDistanceTo_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetVelocity
// Size: 0x000C
struct Actor_GetVelocity_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.GetTransform
// Size: 0x0030
struct Actor_GetTransform_Params {
public:
    uint8_t ReturnValue[0x30]; // 0x0000 (0x0030)
};

// Function: Engine.Actor.GetTickableWhenPaused
// Size: 0x0001
struct Actor_GetTickableWhenPaused_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.GetSquaredDistanceTo
// Size: 0x000C
struct Actor_GetSquaredDistanceTo_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetParentComponent
// Size: 0x0008
struct Actor_GetParentComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Actor.GetOwner
// Size: 0x0008
struct Actor_GetOwner_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Actor.GetOverlappingComponents
// Size: 0x0010
struct Actor_GetOverlappingComponents_Params {
public:
    struct TArray<uint8_t> OverlappingComponents; // 0x0000 (0x0010)
};

// Function: Engine.Actor.GetOverlappingActors
// Size: 0x0018
struct Actor_GetOverlappingActors_Params {
public:
    struct TArray<uint8_t> OverlappingActors; // 0x0000 (0x0010)
    class UClass* ClassFilter; // 0x0010 (0x0008)
};

// Function: Engine.Actor.GetLifeSpan
// Size: 0x0004
struct Actor_GetLifeSpan_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.Actor.GetInstigatorController
// Size: 0x0008
struct Actor_GetInstigatorController_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Actor.GetInstigator
// Size: 0x0008
struct Actor_GetInstigator_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Actor.GetInputVectorAxisValue
// Size: 0x0024
struct Actor_GetInputVectorAxisValue_Params {
public:
    uint8_t InputAxisKey[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.Actor.GetInputAxisValue
// Size: 0x000C
struct Actor_GetInputAxisValue_Params {
public:
    struct FName InputAxisName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetInputAxisKeyValue
// Size: 0x001C
struct Actor_GetInputAxisKeyValue_Params {
public:
    uint8_t InputAxisKey[0x18]; // 0x0000 (0x0018)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.Actor.GetHorizontalDotProductTo
// Size: 0x000C
struct Actor_GetHorizontalDotProductTo_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetHorizontalDistanceTo
// Size: 0x000C
struct Actor_GetHorizontalDistanceTo_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetDotProductTo
// Size: 0x000C
struct Actor_GetDotProductTo_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetDistanceTo
// Size: 0x000C
struct Actor_GetDistanceTo_Params {
public:
    class UObject* OtherActor; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.Actor.GetComponentsByTag
// Size: 0x0020
struct Actor_GetComponentsByTag_Params {
public:
    class UClass* ComponentClass; // 0x0000 (0x0008)
    struct FName Tag; // 0x0008 (0x0008)
    struct TArray<uint8_t> ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.Actor.GetComponentsByClass
// Size: 0x0018
struct Actor_GetComponentsByClass_Params {
public:
    class UClass* ComponentClass; // 0x0000 (0x0008)
    struct TArray<uint8_t> ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.Actor.GetComponentByClass
// Size: 0x0010
struct Actor_GetComponentByClass_Params {
public:
    class UClass* ComponentClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.Actor.GetAttachedActors
// Size: 0x0010
struct Actor_GetAttachedActors_Params {
public:
    struct TArray<uint8_t> OutActors; // 0x0000 (0x0010)
};

// Function: Engine.Actor.GetActorUpVector
// Size: 0x000C
struct Actor_GetActorUpVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.GetActorTimeDilation
// Size: 0x0004
struct Actor_GetActorTimeDilation_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.Actor.GetActorScale3D
// Size: 0x000C
struct Actor_GetActorScale3D_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.GetActorRightVector
// Size: 0x000C
struct Actor_GetActorRightVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.GetActorRelativeScale3D
// Size: 0x000C
struct Actor_GetActorRelativeScale3D_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.GetActorForwardVector
// Size: 0x000C
struct Actor_GetActorForwardVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Actor.GetActorEyesViewPoint
// Size: 0x0018
struct Actor_GetActorEyesViewPoint_Params {
public:
    uint8_t OutLocation[0xC]; // 0x0000 (0x000C)
    uint8_t OutRotation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.Actor.GetActorEnableCollision
// Size: 0x0001
struct Actor_GetActorEnableCollision_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Actor.GetActorBounds
// Size: 0x001C
struct Actor_GetActorBounds_Params {
public:
    bool bOnlyCollidingComponents; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t Origin[0xC]; // 0x0004 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.Actor.ForceNetUpdate
// Size: 0x0000
struct Actor_ForceNetUpdate_Params {
public:
};

// Function: Engine.Actor.FlushNetDormancy
// Size: 0x0000
struct Actor_FlushNetDormancy_Params {
public:
};

// Function: Engine.Actor.EnableInput
// Size: 0x0008
struct Actor_EnableInput_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
};

// Function: Engine.Actor.DisableInput
// Size: 0x0008
struct Actor_DisableInput_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
};

// Function: Engine.Actor.DetachRootComponentFromParent
// Size: 0x0001
struct Actor_DetachRootComponentFromParent_Params {
public:
    bool bMaintainWorldPosition; // 0x0000 (0x0001)
};

// Function: Engine.Actor.AddTickPrerequisiteComponent
// Size: 0x0008
struct Actor_AddTickPrerequisiteComponent_Params {
public:
    class UObject* PrerequisiteComponent; // 0x0000 (0x0008)
};

// Function: Engine.Actor.AddTickPrerequisiteActor
// Size: 0x0008
struct Actor_AddTickPrerequisiteActor_Params {
public:
    class UObject* PrerequisiteActor; // 0x0000 (0x0008)
};

// Function: Engine.Actor.AddComponent
// Size: 0x0050
struct Actor_AddComponent_Params {
public:
    struct FName TemplateName; // 0x0000 (0x0008)
    bool bManualAttachment; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t RelativeTransform[0x30]; // 0x0010 (0x0030)
    class UObject* ComponentTemplateContext; // 0x0040 (0x0008)
    class UObject* ReturnValue; // 0x0048 (0x0008)
};

// Function: Engine.Actor.ActorHasTag
// Size: 0x0009
struct Actor_ActorHasTag_Params {
public:
    struct FName Tag; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.ActorComponent.ToggleActive
// Size: 0x0000
struct ActorComponent_ToggleActive_Params {
public:
};

// Function: Engine.ActorComponent.SetTickGroup
// Size: 0x0001
struct ActorComponent_SetTickGroup_Params {
public:
    uint8_t NewTickGroup; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.SetTickableWhenPaused
// Size: 0x0001
struct ActorComponent_SetTickableWhenPaused_Params {
public:
    bool bTickableWhenPaused; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.SetIsReplicated
// Size: 0x0001
struct ActorComponent_SetIsReplicated_Params {
public:
    bool ShouldReplicate; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.SetComponentTickEnabled
// Size: 0x0001
struct ActorComponent_SetComponentTickEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.SetActive
// Size: 0x0002
struct ActorComponent_SetActive_Params {
public:
    bool bNewActive; // 0x0000 (0x0001)
    bool bReset; // 0x0001 (0x0001)
};

// Function: Engine.ActorComponent.RemoveTickPrerequisiteComponent
// Size: 0x0008
struct ActorComponent_RemoveTickPrerequisiteComponent_Params {
public:
    class UObject* PrerequisiteComponent; // 0x0000 (0x0008)
};

// Function: Engine.ActorComponent.RemoveTickPrerequisiteActor
// Size: 0x0008
struct ActorComponent_RemoveTickPrerequisiteActor_Params {
public:
    class UObject* PrerequisiteActor; // 0x0000 (0x0008)
};

// Function: Engine.ActorComponent.ReceiveTick
// Size: 0x0004
struct ActorComponent_ReceiveTick_Params {
public:
    float DeltaSeconds; // 0x0000 (0x0004)
};

// Function: Engine.ActorComponent.ReceiveEndPlay
// Size: 0x0001
struct ActorComponent_ReceiveEndPlay_Params {
public:
    uint8_t EndPlayReason; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.ReceiveBeginPlay
// Size: 0x0000
struct ActorComponent_ReceiveBeginPlay_Params {
public:
};

// Function: Engine.ActorComponent.OnRep_IsActive
// Size: 0x0000
struct ActorComponent_OnRep_IsActive_Params {
public:
};

// Function: Engine.ActorComponent.K2_DestroyComponent
// Size: 0x0008
struct ActorComponent_K2_DestroyComponent_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
};

// Function: Engine.ActorComponent.IsComponentTickEnabled
// Size: 0x0001
struct ActorComponent_IsComponentTickEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.IsBeingDestroyed
// Size: 0x0001
struct ActorComponent_IsBeingDestroyed_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.IsActive
// Size: 0x0001
struct ActorComponent_IsActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.ActorComponent.GetOwner
// Size: 0x0008
struct ActorComponent_GetOwner_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.ActorComponent.Deactivate
// Size: 0x0000
struct ActorComponent_Deactivate_Params {
public:
};

// Function: Engine.ActorComponent.ComponentHasTag
// Size: 0x0009
struct ActorComponent_ComponentHasTag_Params {
public:
    struct FName Tag; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.ActorComponent.AddTickPrerequisiteComponent
// Size: 0x0008
struct ActorComponent_AddTickPrerequisiteComponent_Params {
public:
    class UObject* PrerequisiteComponent; // 0x0000 (0x0008)
};

// Function: Engine.ActorComponent.AddTickPrerequisiteActor
// Size: 0x0008
struct ActorComponent_AddTickPrerequisiteActor_Params {
public:
    class UObject* PrerequisiteActor; // 0x0000 (0x0008)
};

// Function: Engine.ActorComponent.Activate
// Size: 0x0001
struct ActorComponent_Activate_Params {
public:
    bool bReset; // 0x0000 (0x0001)
};

// Function: Engine.SceneComponent.ToggleVisibility
// Size: 0x0001
struct SceneComponent_ToggleVisibility_Params {
public:
    bool bPropagateToChildren; // 0x0000 (0x0001)
};

// Function: Engine.SceneComponent.SnapTo
// Size: 0x0010
struct SceneComponent_SnapTo_Params {
public:
    class UObject* InParent; // 0x0000 (0x0008)
    struct FName InSocketName; // 0x0008 (0x0008)
};

// Function: Engine.SceneComponent.SetWorldScale3D
// Size: 0x000C
struct SceneComponent_SetWorldScale3D_Params {
public:
    uint8_t NewScale[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.SetVisibility
// Size: 0x0002
struct SceneComponent_SetVisibility_Params {
public:
    bool bNewVisibility; // 0x0000 (0x0001)
    bool bPropagateToChildren; // 0x0001 (0x0001)
};

// Function: Engine.SceneComponent.SetRelativeScale3D
// Size: 0x000C
struct SceneComponent_SetRelativeScale3D_Params {
public:
    uint8_t NewScale3D[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.SetHiddenInGame
// Size: 0x0002
struct SceneComponent_SetHiddenInGame_Params {
public:
    bool NewHidden; // 0x0000 (0x0001)
    bool bPropagateToChildren; // 0x0001 (0x0001)
};

// Function: Engine.SceneComponent.SetAbsolute
// Size: 0x0003
struct SceneComponent_SetAbsolute_Params {
public:
    bool bNewAbsoluteLocation; // 0x0000 (0x0001)
    bool bNewAbsoluteRotation; // 0x0001 (0x0001)
    bool bNewAbsoluteScale; // 0x0002 (0x0001)
};

// Function: Engine.SceneComponent.ResetRelativeTransform
// Size: 0x0000
struct SceneComponent_ResetRelativeTransform_Params {
public:
};

// Function: Engine.SceneComponent.OnRep_Visibility
// Size: 0x0001
struct SceneComponent_OnRep_Visibility_Params {
public:
    bool OldValue; // 0x0000 (0x0001)
};

// Function: Engine.SceneComponent.OnRep_Transform
// Size: 0x0000
struct SceneComponent_OnRep_Transform_Params {
public:
};

// Function: Engine.SceneComponent.OnRep_AttachSocketName
// Size: 0x0000
struct SceneComponent_OnRep_AttachSocketName_Params {
public:
};

// Function: Engine.SceneComponent.OnRep_AttachParent
// Size: 0x0000
struct SceneComponent_OnRep_AttachParent_Params {
public:
};

// Function: Engine.SceneComponent.K2_SetWorldTransform
// Size: 0x00C1
struct SceneComponent_K2_SetWorldTransform_Params {
public:
    uint8_t NewTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetWorldRotation
// Size: 0x0099
struct SceneComponent_K2_SetWorldRotation_Params {
public:
    uint8_t NewRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetWorldLocationAndRotation
// Size: 0x00A9
struct SceneComponent_K2_SetWorldLocationAndRotation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
    bool bSweep; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0020 (0x0088)
    bool bTeleport; // 0x00A8 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetWorldLocation
// Size: 0x0099
struct SceneComponent_K2_SetWorldLocation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetRelativeTransform
// Size: 0x00C1
struct SceneComponent_K2_SetRelativeTransform_Params {
public:
    uint8_t NewTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetRelativeRotation
// Size: 0x0099
struct SceneComponent_K2_SetRelativeRotation_Params {
public:
    uint8_t NewRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetRelativeLocationAndRotation
// Size: 0x00A9
struct SceneComponent_K2_SetRelativeLocationAndRotation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
    bool bSweep; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0020 (0x0088)
    bool bTeleport; // 0x00A8 (0x0001)
};

// Function: Engine.SceneComponent.K2_SetRelativeLocation
// Size: 0x0099
struct SceneComponent_K2_SetRelativeLocation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_GetComponentToWorld
// Size: 0x0030
struct SceneComponent_K2_GetComponentToWorld_Params {
public:
    uint8_t ReturnValue[0x30]; // 0x0000 (0x0030)
};

// Function: Engine.SceneComponent.K2_GetComponentScale
// Size: 0x000C
struct SceneComponent_K2_GetComponentScale_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.K2_GetComponentRotation
// Size: 0x000C
struct SceneComponent_K2_GetComponentRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.K2_GetComponentLocation
// Size: 0x000C
struct SceneComponent_K2_GetComponentLocation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.K2_AttachTo
// Size: 0x0012
struct SceneComponent_K2_AttachTo_Params {
public:
    class UObject* InParent; // 0x0000 (0x0008)
    struct FName InSocketName; // 0x0008 (0x0008)
    uint8_t AttachType; // 0x0010 (0x0001)
    bool bWeldSimulatedBodies; // 0x0011 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddWorldTransform
// Size: 0x00C1
struct SceneComponent_K2_AddWorldTransform_Params {
public:
    uint8_t DeltaTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddWorldRotation
// Size: 0x0099
struct SceneComponent_K2_AddWorldRotation_Params {
public:
    uint8_t DeltaRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddWorldOffset
// Size: 0x0099
struct SceneComponent_K2_AddWorldOffset_Params {
public:
    uint8_t DeltaLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddRelativeRotation
// Size: 0x0099
struct SceneComponent_K2_AddRelativeRotation_Params {
public:
    uint8_t DeltaRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddRelativeLocation
// Size: 0x0099
struct SceneComponent_K2_AddRelativeLocation_Params {
public:
    uint8_t DeltaLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddLocalTransform
// Size: 0x00C1
struct SceneComponent_K2_AddLocalTransform_Params {
public:
    uint8_t DeltaTransform[0x30]; // 0x0000 (0x0030)
    bool bSweep; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t SweepHitResult[0x88]; // 0x0038 (0x0088)
    bool bTeleport; // 0x00C0 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddLocalRotation
// Size: 0x0099
struct SceneComponent_K2_AddLocalRotation_Params {
public:
    uint8_t DeltaRotation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.K2_AddLocalOffset
// Size: 0x0099
struct SceneComponent_K2_AddLocalOffset_Params {
public:
    uint8_t DeltaLocation[0xC]; // 0x0000 (0x000C)
    bool bSweep; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t SweepHitResult[0x88]; // 0x0010 (0x0088)
    bool bTeleport; // 0x0098 (0x0001)
};

// Function: Engine.SceneComponent.IsVisible
// Size: 0x0001
struct SceneComponent_IsVisible_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.SceneComponent.IsSimulatingPhysics
// Size: 0x0009
struct SceneComponent_IsSimulatingPhysics_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.SceneComponent.IsAnySimulatingPhysics
// Size: 0x0001
struct SceneComponent_IsAnySimulatingPhysics_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.SceneComponent.GetUpVector
// Size: 0x000C
struct SceneComponent_GetUpVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.GetSocketTransform
// Size: 0x0040
struct SceneComponent_GetSocketTransform_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    uint8_t TransformSpace; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.SceneComponent.GetSocketTagString
// Size: 0x0018
struct SceneComponent_GetSocketTagString_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.SceneComponent.GetSocketRotation
// Size: 0x0014
struct SceneComponent_GetSocketRotation_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SceneComponent.GetSocketQuaternion
// Size: 0x0020
struct SceneComponent_GetSocketQuaternion_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.SceneComponent.GetSocketPopTags
// Size: 0x0018
struct SceneComponent_GetSocketPopTags_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    struct TArray<uint8_t> ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.SceneComponent.GetSocketLocation
// Size: 0x0014
struct SceneComponent_GetSocketLocation_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SceneComponent.GetRightVector
// Size: 0x000C
struct SceneComponent_GetRightVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.GetRelativeTransform
// Size: 0x0030
struct SceneComponent_GetRelativeTransform_Params {
public:
    uint8_t ReturnValue[0x30]; // 0x0000 (0x0030)
};

// Function: Engine.SceneComponent.GetPhysicsVolume
// Size: 0x0008
struct SceneComponent_GetPhysicsVolume_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.SceneComponent.GetParentComponents
// Size: 0x0010
struct SceneComponent_GetParentComponents_Params {
public:
    struct TArray<uint8_t> Parents; // 0x0000 (0x0010)
};

// Function: Engine.SceneComponent.GetNumChildrenComponents
// Size: 0x0004
struct SceneComponent_GetNumChildrenComponents_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SceneComponent.GetForwardVector
// Size: 0x000C
struct SceneComponent_GetForwardVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.GetComponentVelocity
// Size: 0x000C
struct SceneComponent_GetComponentVelocity_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SceneComponent.GetChildrenComponents
// Size: 0x0018
struct SceneComponent_GetChildrenComponents_Params {
public:
    bool bIncludeAllDescendants; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> Children; // 0x0008 (0x0010)
};

// Function: Engine.SceneComponent.GetChildComponent
// Size: 0x0010
struct SceneComponent_GetChildComponent_Params {
public:
    int32_t ChildIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.SceneComponent.GetAttachSocketName
// Size: 0x0008
struct SceneComponent_GetAttachSocketName_Params {
public:
    struct FName ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.SceneComponent.GetAttachParent
// Size: 0x0008
struct SceneComponent_GetAttachParent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.SceneComponent.GetAllSocketNames
// Size: 0x0010
struct SceneComponent_GetAllSocketNames_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.SceneComponent.DoesSocketExist
// Size: 0x0009
struct SceneComponent_DoesSocketExist_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.SceneComponent.DetachFromParent
// Size: 0x0002
struct SceneComponent_DetachFromParent_Params {
public:
    bool bMaintainWorldPosition; // 0x0000 (0x0001)
    bool bCallModify; // 0x0001 (0x0001)
};

// Function: Engine.NavLinkProxy.SetSmartLinkEnabled
// Size: 0x0001
struct NavLinkProxy_SetSmartLinkEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.NavLinkProxy.ResumePathFollowing
// Size: 0x0008
struct NavLinkProxy_ResumePathFollowing_Params {
public:
    class UObject* Agent; // 0x0000 (0x0008)
};

// Function: Engine.NavLinkProxy.ReceiveSmartLinkReached
// Size: 0x0014
struct NavLinkProxy_ReceiveSmartLinkReached_Params {
public:
    class UObject* Agent; // 0x0000 (0x0008)
    uint8_t Destination[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.NavLinkProxy.IsSmartLinkEnabled
// Size: 0x0001
struct NavLinkProxy_IsSmartLinkEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavLinkProxy.HasMovingAgents
// Size: 0x0001
struct NavLinkProxy_HasMovingAgents_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AnimNotifyState.Received_NotifyTick
// Size: 0x0015
struct AnimNotifyState_Received_NotifyTick_Params {
public:
    class UObject* MeshComp; // 0x0000 (0x0008)
    class UObject* Animation; // 0x0008 (0x0008)
    float FrameDeltaTime; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.AnimNotifyState.Received_NotifyEnd
// Size: 0x0011
struct AnimNotifyState_Received_NotifyEnd_Params {
public:
    class UObject* MeshComp; // 0x0000 (0x0008)
    class UObject* Animation; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.AnimNotifyState.Received_NotifyBegin
// Size: 0x0015
struct AnimNotifyState_Received_NotifyBegin_Params {
public:
    class UObject* MeshComp; // 0x0000 (0x0008)
    class UObject* Animation; // 0x0008 (0x0008)
    float TotalDuration; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.AnimNotifyState.GetNotifyName
// Size: 0x0010
struct AnimNotifyState_GetNotifyName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.LevelScriptActor.WorldOriginLocationChanged
// Size: 0x0018
struct LevelScriptActor_WorldOriginLocationChanged_Params {
public:
    uint8_t OldOriginLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewOriginLocation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.LevelScriptActor.SetCinematicMode
// Size: 0x0005
struct LevelScriptActor_SetCinematicMode_Params {
public:
    bool bCinematicMode; // 0x0000 (0x0001)
    bool bHidePlayer; // 0x0001 (0x0001)
    bool bAffectsHUD; // 0x0002 (0x0001)
    bool bAffectsMovement; // 0x0003 (0x0001)
    bool bAffectsTurning; // 0x0004 (0x0001)
};

// Function: Engine.LevelScriptActor.RemoteEvent
// Size: 0x0009
struct LevelScriptActor_RemoteEvent_Params {
public:
    struct FName EventName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.LevelScriptActor.LevelReset
// Size: 0x0000
struct LevelScriptActor_LevelReset_Params {
public:
};

// Function: Engine.LevelScriptActor.GetNumTicksOfEndPlay
// Size: 0x0004
struct LevelScriptActor_GetNumTicksOfEndPlay_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.LevelScriptActor.GetCurrentNumTicks
// Size: 0x0004
struct LevelScriptActor_GetCurrentNumTicks_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.WakeRigidBody
// Size: 0x0008
struct PrimitiveComponent_WakeRigidBody_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.WakeAllRigidBodies
// Size: 0x0000
struct PrimitiveComponent_WakeAllRigidBodies_Params {
public:
};

// Function: Engine.PrimitiveComponent.SetWalkableSlopeOverride
// Size: 0x0008
struct PrimitiveComponent_SetWalkableSlopeOverride_Params {
public:
    uint8_t NewOverride[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetTranslucentSortPriority
// Size: 0x0004
struct PrimitiveComponent_SetTranslucentSortPriority_Params {
public:
    int32_t NewTranslucentSortPriority; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetSimulatePhysics
// Size: 0x0001
struct PrimitiveComponent_SetSimulatePhysics_Params {
public:
    bool bSimulate; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetRenderInMainPass
// Size: 0x0001
struct PrimitiveComponent_SetRenderInMainPass_Params {
public:
    bool bValue; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetRenderCustomDepth
// Size: 0x0001
struct PrimitiveComponent_SetRenderCustomDepth_Params {
public:
    bool bValue; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetReceivesDecals
// Size: 0x0001
struct PrimitiveComponent_SetReceivesDecals_Params {
public:
    bool bNewReceivesDecals; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetPhysMaterialOverride
// Size: 0x0008
struct PrimitiveComponent_SetPhysMaterialOverride_Params {
public:
    class UObject* NewPhysMaterial; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// Size: 0x0010
struct PrimitiveComponent_SetPhysicsMaxAngularVelocity_Params {
public:
    float NewMaxAngVel; // 0x0000 (0x0004)
    bool bAddToCurrent; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    struct FName BoneName; // 0x0008 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// Size: 0x0018
struct PrimitiveComponent_SetPhysicsLinearVelocity_Params {
public:
    uint8_t NewVel[0xC]; // 0x0000 (0x000C)
    bool bAddToCurrent; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    struct FName BoneName; // 0x0010 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// Size: 0x0018
struct PrimitiveComponent_SetPhysicsAngularVelocity_Params {
public:
    uint8_t NewAngVel[0xC]; // 0x0000 (0x000C)
    bool bAddToCurrent; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    struct FName BoneName; // 0x0010 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetOwnerNoSee
// Size: 0x0001
struct PrimitiveComponent_SetOwnerNoSee_Params {
public:
    bool bNewOwnerNoSee; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetOnlyOwnerSee
// Size: 0x0001
struct PrimitiveComponent_SetOnlyOwnerSee_Params {
public:
    bool bNewOnlyOwnerSee; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// Size: 0x0001
struct PrimitiveComponent_SetNotifyRigidBodyCollision_Params {
public:
    bool bNewNotifyRigidBodyCollision; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetMaterial
// Size: 0x0010
struct PrimitiveComponent_SetMaterial_Params {
public:
    int32_t ElementIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* Material; // 0x0008 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetMassScale
// Size: 0x000C
struct PrimitiveComponent_SetMassScale_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    float InMassScale; // 0x0008 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetMassOverrideInKg
// Size: 0x000D
struct PrimitiveComponent_SetMassOverrideInKg_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    float MassInKg; // 0x0008 (0x0004)
    bool bOverrideMass; // 0x000C (0x0001)
};

// Function: Engine.PrimitiveComponent.SetLockedAxis
// Size: 0x0001
struct PrimitiveComponent_SetLockedAxis_Params {
public:
    uint8_t LockedAxis; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetLinearDamping
// Size: 0x0004
struct PrimitiveComponent_SetLinearDamping_Params {
public:
    float InDamping; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetEnableOpaqueEmissiveLighting
// Size: 0x0001
struct PrimitiveComponent_SetEnableOpaqueEmissiveLighting_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetEnableGravity
// Size: 0x0001
struct PrimitiveComponent_SetEnableGravity_Params {
public:
    bool bGravityEnabled; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetCustomDepthStencilValue
// Size: 0x0004
struct PrimitiveComponent_SetCustomDepthStencilValue_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetCullDistance
// Size: 0x0004
struct PrimitiveComponent_SetCullDistance_Params {
public:
    float NewCullDistance; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetConstraintMode
// Size: 0x0001
struct PrimitiveComponent_SetConstraintMode_Params {
public:
    uint8_t ConstraintMode; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetCollisionResponseToChannel
// Size: 0x0002
struct PrimitiveComponent_SetCollisionResponseToChannel_Params {
public:
    uint8_t Channel; // 0x0000 (0x0001)
    uint8_t NewResponse; // 0x0001 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// Size: 0x0001
struct PrimitiveComponent_SetCollisionResponseToAllChannels_Params {
public:
    uint8_t NewResponse; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetCollisionProfileName
// Size: 0x0008
struct PrimitiveComponent_SetCollisionProfileName_Params {
public:
    struct FName InCollisionProfileName; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetCollisionObjectType
// Size: 0x0001
struct PrimitiveComponent_SetCollisionObjectType_Params {
public:
    uint8_t Channel; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetCollisionEnabled
// Size: 0x0001
struct PrimitiveComponent_SetCollisionEnabled_Params {
public:
    uint8_t NewType; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetCenterOfMass
// Size: 0x0018
struct PrimitiveComponent_SetCenterOfMass_Params {
public:
    uint8_t CenterOfMassOffset[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
};

// Function: Engine.PrimitiveComponent.SetCastShadow
// Size: 0x0001
struct PrimitiveComponent_SetCastShadow_Params {
public:
    bool NewCastShadow; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetBoundsScale
// Size: 0x0004
struct PrimitiveComponent_SetBoundsScale_Params {
public:
    float NewBoundsScale; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetBendShadowCastingCategory
// Size: 0x0001
struct PrimitiveComponent_SetBendShadowCastingCategory_Params {
public:
    uint8_t inBendShadowCastingCategory; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.SetAngularDamping
// Size: 0x0004
struct PrimitiveComponent_SetAngularDamping_Params {
public:
    float InDamping; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// Size: 0x000D
struct PrimitiveComponent_SetAllPhysicsLinearVelocity_Params {
public:
    uint8_t NewVel[0xC]; // 0x0000 (0x000C)
    bool bAddToCurrent; // 0x000C (0x0001)
};

// Function: Engine.PrimitiveComponent.SetAllMassScale
// Size: 0x0004
struct PrimitiveComponent_SetAllMassScale_Params {
public:
    float InMassScale; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.ScaleByMomentOfInertia
// Size: 0x0024
struct PrimitiveComponent_ScaleByMomentOfInertia_Params {
public:
    uint8_t InputVector[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.PrimitiveComponent.PutRigidBodyToSleep
// Size: 0x0008
struct PrimitiveComponent_PutRigidBodyToSleep_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.K2_LineTraceComponent
// Size: 0x0041
struct PrimitiveComponent_K2_LineTraceComponent_Params {
public:
    uint8_t TraceStart[0xC]; // 0x0000 (0x000C)
    uint8_t TraceEnd[0xC]; // 0x000C (0x000C)
    bool bTraceComplex; // 0x0018 (0x0001)
    bool bShowTrace; // 0x0019 (0x0001)
    uint8_t Pad_0[0x2]; // 0x001A (0x0002)
    uint8_t HitLocation[0xC]; // 0x001C (0x000C)
    uint8_t HitNormal[0xC]; // 0x0028 (0x000C)
    uint8_t Pad_1[0x4]; // 0x0034 (0x0004)
    struct FName BoneName; // 0x0038 (0x0008)
    bool ReturnValue; // 0x0040 (0x0001)
};

// Function: Engine.PrimitiveComponent.IsOverlappingComponent
// Size: 0x0009
struct PrimitiveComponent_IsOverlappingComponent_Params {
public:
    class UObject* OtherComp; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.PrimitiveComponent.IsOverlappingActor
// Size: 0x0009
struct PrimitiveComponent_IsOverlappingActor_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.PrimitiveComponent.IsGravityEnabled
// Size: 0x0001
struct PrimitiveComponent_IsGravityEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// Size: 0x0009
struct PrimitiveComponent_IgnoreComponentWhenMoving_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    bool bShouldIgnore; // 0x0008 (0x0001)
};

// Function: Engine.PrimitiveComponent.IgnoreActorWhenMoving
// Size: 0x0009
struct PrimitiveComponent_IgnoreActorWhenMoving_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    bool bShouldIgnore; // 0x0008 (0x0001)
};

// Function: Engine.PrimitiveComponent.HasSimpleCollision
// Size: 0x0001
struct PrimitiveComponent_HasSimpleCollision_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.GetWalkableSlopeOverride
// Size: 0x0008
struct PrimitiveComponent_GetWalkableSlopeOverride_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// Size: 0x0024
struct PrimitiveComponent_GetPhysicsLinearVelocityAtPoint_Params {
public:
    uint8_t Point[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// Size: 0x0014
struct PrimitiveComponent_GetPhysicsLinearVelocity_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// Size: 0x0014
struct PrimitiveComponent_GetPhysicsAngularVelocity_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.PrimitiveComponent.GetOverlappingComponents
// Size: 0x0010
struct PrimitiveComponent_GetOverlappingComponents_Params {
public:
    struct TArray<uint8_t> InOverlappingComponents; // 0x0000 (0x0010)
};

// Function: Engine.PrimitiveComponent.GetOverlappingActors
// Size: 0x0018
struct PrimitiveComponent_GetOverlappingActors_Params {
public:
    struct TArray<uint8_t> OverlappingActors; // 0x0000 (0x0010)
    class UClass* ClassFilter; // 0x0010 (0x0008)
};

// Function: Engine.PrimitiveComponent.GetOverlapInfos
// Size: 0x0010
struct PrimitiveComponent_GetOverlapInfos_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.PrimitiveComponent.GetNumMaterials
// Size: 0x0004
struct PrimitiveComponent_GetNumMaterials_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetMinScreenSize
// Size: 0x0004
struct PrimitiveComponent_GetMinScreenSize_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetMaxDrawDistance
// Size: 0x0004
struct PrimitiveComponent_GetMaxDrawDistance_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetMaterial
// Size: 0x0010
struct PrimitiveComponent_GetMaterial_Params {
public:
    int32_t ElementIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.PrimitiveComponent.GetMassScale
// Size: 0x000C
struct PrimitiveComponent_GetMassScale_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetMass
// Size: 0x0004
struct PrimitiveComponent_GetMass_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetLinearDamping
// Size: 0x0004
struct PrimitiveComponent_GetLinearDamping_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetInertiaTensor
// Size: 0x0014
struct PrimitiveComponent_GetInertiaTensor_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.PrimitiveComponent.GetCollisionResponseToChannel
// Size: 0x0002
struct PrimitiveComponent_GetCollisionResponseToChannel_Params {
public:
    uint8_t Channel; // 0x0000 (0x0001)
    uint8_t ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.PrimitiveComponent.GetCollisionProfileName
// Size: 0x0008
struct PrimitiveComponent_GetCollisionProfileName_Params {
public:
    struct FName ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.PrimitiveComponent.GetCollisionObjectType
// Size: 0x0001
struct PrimitiveComponent_GetCollisionObjectType_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PrimitiveComponent.GetClosestPointOnCollision
// Size: 0x0024
struct PrimitiveComponent_GetClosestPointOnCollision_Params {
public:
    uint8_t Point[0xC]; // 0x0000 (0x000C)
    uint8_t OutPointOnBody[0xC]; // 0x000C (0x000C)
    struct FName BoneName; // 0x0018 (0x0008)
    float ReturnValue; // 0x0020 (0x0004)
};

// Function: Engine.PrimitiveComponent.GetCenterOfMass
// Size: 0x0014
struct PrimitiveComponent_GetCenterOfMass_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.PrimitiveComponent.GetAngularDamping
// Size: 0x0004
struct PrimitiveComponent_GetAngularDamping_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// Size: 0x0018
struct PrimitiveComponent_CreateDynamicMaterialInstance_Params {
public:
    int32_t ElementIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* SourceMaterial; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// Size: 0x0018
struct PrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params {
public:
    int32_t ElementIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* Parent; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// Size: 0x0010
struct PrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Params {
public:
    int32_t ElementIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// Size: 0x0010
struct PrimitiveComponent_CopyArrayOfMoveIgnoreActors_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// Size: 0x0000
struct PrimitiveComponent_ClearMoveIgnoreComponents_Params {
public:
};

// Function: Engine.PrimitiveComponent.ClearMoveIgnoreActors
// Size: 0x0000
struct PrimitiveComponent_ClearMoveIgnoreActors_Params {
public:
};

// Function: Engine.PrimitiveComponent.CanCharacterStepUp
// Size: 0x0009
struct PrimitiveComponent_CanCharacterStepUp_Params {
public:
    class UObject* Pawn; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.PrimitiveComponent.AddTorque
// Size: 0x0019
struct PrimitiveComponent_AddTorque_Params {
public:
    uint8_t Torque[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
    bool bAccelChange; // 0x0018 (0x0001)
};

// Function: Engine.PrimitiveComponent.AddRadialImpulse
// Size: 0x0016
struct PrimitiveComponent_AddRadialImpulse_Params {
public:
    uint8_t Origin[0xC]; // 0x0000 (0x000C)
    float Radius; // 0x000C (0x0004)
    float Strength; // 0x0010 (0x0004)
    uint8_t Falloff; // 0x0014 (0x0001)
    bool bVelChange; // 0x0015 (0x0001)
};

// Function: Engine.PrimitiveComponent.AddRadialForce
// Size: 0x0016
struct PrimitiveComponent_AddRadialForce_Params {
public:
    uint8_t Origin[0xC]; // 0x0000 (0x000C)
    float Radius; // 0x000C (0x0004)
    float Strength; // 0x0010 (0x0004)
    uint8_t Falloff; // 0x0014 (0x0001)
    bool bAccelChange; // 0x0015 (0x0001)
};

// Function: Engine.PrimitiveComponent.AddImpulseAtLocation
// Size: 0x0020
struct PrimitiveComponent_AddImpulseAtLocation_Params {
public:
    uint8_t Impulse[0xC]; // 0x0000 (0x000C)
    uint8_t Location[0xC]; // 0x000C (0x000C)
    struct FName BoneName; // 0x0018 (0x0008)
};

// Function: Engine.PrimitiveComponent.AddImpulse
// Size: 0x0019
struct PrimitiveComponent_AddImpulse_Params {
public:
    uint8_t Impulse[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
    bool bVelChange; // 0x0018 (0x0001)
};

// Function: Engine.PrimitiveComponent.AddForceAtLocation
// Size: 0x0020
struct PrimitiveComponent_AddForceAtLocation_Params {
public:
    uint8_t Force[0xC]; // 0x0000 (0x000C)
    uint8_t Location[0xC]; // 0x000C (0x000C)
    struct FName BoneName; // 0x0018 (0x0008)
};

// Function: Engine.PrimitiveComponent.AddForce
// Size: 0x0019
struct PrimitiveComponent_AddForce_Params {
public:
    uint8_t Force[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
    bool bAccelChange; // 0x0018 (0x0001)
};

// Function: Engine.PrimitiveComponent.AddAngularImpulse
// Size: 0x0019
struct PrimitiveComponent_AddAngularImpulse_Params {
public:
    uint8_t Impulse[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName BoneName; // 0x0010 (0x0008)
    bool bVelChange; // 0x0018 (0x0001)
};

// Function: Engine.MeshComponent.SetVectorParameterValueOnMaterials
// Size: 0x0014
struct MeshComponent_SetVectorParameterValueOnMaterials_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t ParameterValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.MeshComponent.SetScalarParameterValueOnMaterials
// Size: 0x000C
struct MeshComponent_SetScalarParameterValueOnMaterials_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    float ParameterValue; // 0x0008 (0x0004)
};

// Function: Engine.MeshComponent.GetMaterials
// Size: 0x0010
struct MeshComponent_GetMaterials_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.StaticMeshComponent.SetStaticMesh
// Size: 0x0009
struct StaticMeshComponent_SetStaticMesh_Params {
public:
    class UObject* NewMesh; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.StaticMeshComponent.SetProxySettings
// Size: 0x0014
struct StaticMeshComponent_SetProxySettings_Params {
public:
    uint8_t ProxySettings[0x14]; // 0x0000 (0x0014)
};

// Function: Engine.StaticMeshComponent.SetForcedLodModel
// Size: 0x0004
struct StaticMeshComponent_SetForcedLodModel_Params {
public:
    int32_t NewForcedLodModel; // 0x0000 (0x0004)
};

// Function: Engine.StaticMeshComponent.RevertProxySettingsToDefaults
// Size: 0x0000
struct StaticMeshComponent_RevertProxySettingsToDefaults_Params {
public:
};

// Function: Engine.StaticMeshComponent.OnRep_StaticMesh
// Size: 0x0008
struct StaticMeshComponent_OnRep_StaticMesh_Params {
public:
    class UObject* OldStaticMesh; // 0x0000 (0x0008)
};

// Function: Engine.StaticMeshComponent.NumberOfTraversalEdges
// Size: 0x0004
struct StaticMeshComponent_NumberOfTraversalEdges_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.StaticMeshComponent.HasInstanceVertexColors
// Size: 0x0001
struct StaticMeshComponent_HasInstanceVertexColors_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.StaticMeshComponent.GetProxySettings
// Size: 0x0014
struct StaticMeshComponent_GetProxySettings_Params {
public:
    uint8_t ReturnValue[0x14]; // 0x0000 (0x0014)
};

// Function: Engine.StaticMeshComponent.GetLocalBounds
// Size: 0x0018
struct StaticMeshComponent_GetLocalBounds_Params {
public:
    uint8_t Min[0xC]; // 0x0000 (0x000C)
    uint8_t Max[0xC]; // 0x000C (0x000C)
};

// Function: Engine.Pawn.SpawnDefaultController
// Size: 0x0000
struct Pawn_SpawnDefaultController_Params {
public:
};

// Function: Engine.Pawn.SetCanAffectNavigationGeneration
// Size: 0x0002
struct Pawn_SetCanAffectNavigationGeneration_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
    bool bForceUpdate; // 0x0001 (0x0001)
};

// Function: Engine.Pawn.ReceiveUnpossessed
// Size: 0x0008
struct Pawn_ReceiveUnpossessed_Params {
public:
    class UObject* OldController; // 0x0000 (0x0008)
};

// Function: Engine.Pawn.ReceivePossessed
// Size: 0x0008
struct Pawn_ReceivePossessed_Params {
public:
    class UObject* NewController; // 0x0000 (0x0008)
};

// Function: Engine.Pawn.PawnMakeNoise
// Size: 0x0020
struct Pawn_PawnMakeNoise_Params {
public:
    float Loudness; // 0x0000 (0x0004)
    uint8_t NoiseLocation[0xC]; // 0x0004 (0x000C)
    bool bUseNoiseMakerLocation; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UObject* NoiseMaker; // 0x0018 (0x0008)
};

// Function: Engine.Pawn.OnRep_PlayerState
// Size: 0x0000
struct Pawn_OnRep_PlayerState_Params {
public:
};

// Function: Engine.Pawn.OnRep_Controller
// Size: 0x0000
struct Pawn_OnRep_Controller_Params {
public:
};

// Function: Engine.Pawn.LaunchPawn
// Size: 0x000E
struct Pawn_LaunchPawn_Params {
public:
    uint8_t LaunchVelocity[0xC]; // 0x0000 (0x000C)
    bool bXYOverride; // 0x000C (0x0001)
    bool bZOverride; // 0x000D (0x0001)
};

// Function: Engine.Pawn.K2_GetMovementInputVector
// Size: 0x000C
struct Pawn_K2_GetMovementInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.IsPlayerControlled
// Size: 0x0001
struct Pawn_IsPlayerControlled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Pawn.IsMoveInputIgnored
// Size: 0x0001
struct Pawn_IsMoveInputIgnored_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Pawn.IsLocallyControlled
// Size: 0x0001
struct Pawn_IsLocallyControlled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Pawn.IsControlled
// Size: 0x0001
struct Pawn_IsControlled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Pawn.GetPendingMovementInputVector
// Size: 0x000C
struct Pawn_GetPendingMovementInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.GetNavAgentLocation
// Size: 0x000C
struct Pawn_GetNavAgentLocation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.GetMovementComponent
// Size: 0x0008
struct Pawn_GetMovementComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Pawn.GetMovementBaseActor
// Size: 0x0010
struct Pawn_GetMovementBaseActor_Params {
public:
    class UObject* Pawn; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.Pawn.GetLastMovementInputVector
// Size: 0x000C
struct Pawn_GetLastMovementInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.GetControlRotation
// Size: 0x000C
struct Pawn_GetControlRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.GetController
// Size: 0x0008
struct Pawn_GetController_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Pawn.GetBaseAimRotation
// Size: 0x000C
struct Pawn_GetBaseAimRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.DetachFromControllerPendingDestroy
// Size: 0x0000
struct Pawn_DetachFromControllerPendingDestroy_Params {
public:
};

// Function: Engine.Pawn.ConsumeMovementInputVector
// Size: 0x000C
struct Pawn_ConsumeMovementInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Pawn.AddMovementInput
// Size: 0x0011
struct Pawn_AddMovementInput_Params {
public:
    uint8_t WorldDirection[0xC]; // 0x0000 (0x000C)
    float ScaleValue; // 0x000C (0x0004)
    bool bForce; // 0x0010 (0x0001)
};

// Function: Engine.Pawn.AddControllerYawInput
// Size: 0x0004
struct Pawn_AddControllerYawInput_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.Pawn.AddControllerRollInput
// Size: 0x0004
struct Pawn_AddControllerRollInput_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.Pawn.AddControllerPitchInput
// Size: 0x0004
struct Pawn_AddControllerPitchInput_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.Character.UnCrouch
// Size: 0x0001
struct Character_UnCrouch_Params {
public:
    bool bClientSimulation; // 0x0000 (0x0001)
};

// Function: Engine.Character.StopJumping
// Size: 0x0000
struct Character_StopJumping_Params {
public:
};

// Function: Engine.Character.StopAnimMontage
// Size: 0x0008
struct Character_StopAnimMontage_Params {
public:
    class UObject* AnimMontage; // 0x0000 (0x0008)
};

// Function: Engine.Character.SetReplicateMovement
// Size: 0x0001
struct Character_SetReplicateMovement_Params {
public:
    bool bInReplicateMovement; // 0x0000 (0x0001)
};

// Function: Engine.Character.RemoveBrightnessOverride
// Size: 0x0008
struct Character_RemoveBrightnessOverride_Params {
public:
    class UObject* BrightnessOverrideActor; // 0x0000 (0x0008)
};

// Function: Engine.Character.PlayAnimMontage
// Size: 0x001C
struct Character_PlayAnimMontage_Params {
public:
    class UObject* AnimMontage; // 0x0000 (0x0008)
    float InPlayRate; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName StartSectionName; // 0x0010 (0x0008)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.Character.OnWalkingOffLedge
// Size: 0x0028
struct Character_OnWalkingOffLedge_Params {
public:
    uint8_t PreviousFloorImpactNormal[0xC]; // 0x0000 (0x000C)
    uint8_t PreviousFloorContactNormal[0xC]; // 0x000C (0x000C)
    uint8_t PreviousLocation[0xC]; // 0x0018 (0x000C)
    float TimeDelta; // 0x0024 (0x0004)
};

// Function: Engine.Character.OnRep_RootMotion
// Size: 0x0000
struct Character_OnRep_RootMotion_Params {
public:
};

// Function: Engine.Character.OnRep_ReplicatedBasedMovement
// Size: 0x0000
struct Character_OnRep_ReplicatedBasedMovement_Params {
public:
};

// Function: Engine.Character.OnRep_IsCrouched
// Size: 0x0000
struct Character_OnRep_IsCrouched_Params {
public:
};

// Function: Engine.Character.OnLaunched
// Size: 0x000E
struct Character_OnLaunched_Params {
public:
    uint8_t LaunchVelocity[0xC]; // 0x0000 (0x000C)
    bool bXYOverride; // 0x000C (0x0001)
    bool bZOverride; // 0x000D (0x0001)
};

// Function: Engine.Character.OnLanded
// Size: 0x0088
struct Character_OnLanded_Params {
public:
    uint8_t Hit[0x88]; // 0x0000 (0x0088)
};

// Function: Engine.Character.OnJumped
// Size: 0x0000
struct Character_OnJumped_Params {
public:
};

// Function: Engine.Character.LaunchCharacter
// Size: 0x000E
struct Character_LaunchCharacter_Params {
public:
    uint8_t LaunchVelocity[0xC]; // 0x0000 (0x000C)
    bool bXYOverride; // 0x000C (0x0001)
    bool bZOverride; // 0x000D (0x0001)
};

// Function: Engine.Character.K2_UpdateCustomMovement
// Size: 0x0004
struct Character_K2_UpdateCustomMovement_Params {
public:
    float DeltaTime; // 0x0000 (0x0004)
};

// Function: Engine.Character.K2_OnStartCrouch
// Size: 0x0008
struct Character_K2_OnStartCrouch_Params {
public:
    float HalfHeightAdjust; // 0x0000 (0x0004)
    float ScaledHalfHeightAdjust; // 0x0004 (0x0004)
};

// Function: Engine.Character.K2_OnMovementModeChanged
// Size: 0x0004
struct Character_K2_OnMovementModeChanged_Params {
public:
    uint8_t PrevMovementMode; // 0x0000 (0x0001)
    uint8_t NewMovementMode; // 0x0001 (0x0001)
    uint8_t PrevCustomMode; // 0x0002 (0x0001)
    uint8_t NewCustomMode; // 0x0003 (0x0001)
};

// Function: Engine.Character.K2_OnEndCrouch
// Size: 0x0008
struct Character_K2_OnEndCrouch_Params {
public:
    float HalfHeightAdjust; // 0x0000 (0x0004)
    float ScaledHalfHeightAdjust; // 0x0004 (0x0004)
};

// Function: Engine.Character.Jump
// Size: 0x0000
struct Character_Jump_Params {
public:
};

// Function: Engine.Character.IsPlayingRootMotion
// Size: 0x0001
struct Character_IsPlayingRootMotion_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Character.IsPlayingNetworkedRootMotionMontage
// Size: 0x0001
struct Character_IsPlayingNetworkedRootMotionMontage_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Character.IsJumpProvidingForce
// Size: 0x0001
struct Character_IsJumpProvidingForce_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Character.GetCurrentMontage
// Size: 0x0008
struct Character_GetCurrentMontage_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Character.Crouch
// Size: 0x0001
struct Character_Crouch_Params {
public:
    bool bClientSimulation; // 0x0000 (0x0001)
};

// Function: Engine.Character.ClientCheatWalk
// Size: 0x0000
struct Character_ClientCheatWalk_Params {
public:
};

// Function: Engine.Character.ClientCheatGhost
// Size: 0x0000
struct Character_ClientCheatGhost_Params {
public:
};

// Function: Engine.Character.ClientCheatFly
// Size: 0x0000
struct Character_ClientCheatFly_Params {
public:
};

// Function: Engine.Character.CanJumpInternal
// Size: 0x0001
struct Character_CanJumpInternal_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Character.CanJump
// Size: 0x0001
struct Character_CanJump_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Character.AddBrightnessOverride
// Size: 0x000C
struct Character_AddBrightnessOverride_Params {
public:
    class UObject* BrightnessOverrideActor; // 0x0000 (0x0008)
    float Brightness; // 0x0008 (0x0004)
};

// Function: Engine.World.OnBeforeGC
// Size: 0x0000
struct World_OnBeforeGC_Params {
public:
};

// Function: Engine.Controller.UnPossess
// Size: 0x0000
struct Controller_UnPossess_Params {
public:
};

// Function: Engine.Controller.StopMovement
// Size: 0x0000
struct Controller_StopMovement_Params {
public:
};

// Function: Engine.Controller.SetInitialLocationAndRotation
// Size: 0x0018
struct Controller_SetInitialLocationAndRotation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.Controller.SetControlRotation
// Size: 0x000C
struct Controller_SetControlRotation_Params {
public:
    uint8_t NewRotation[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Controller.ReceiveInstigatedAnyDamage
// Size: 0x0020
struct Controller_ReceiveInstigatedAnyDamage_Params {
public:
    float Damage; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* DamageType; // 0x0008 (0x0008)
    class UObject* DamagedActor; // 0x0010 (0x0008)
    class UObject* DamageCauser; // 0x0018 (0x0008)
};

// Function: Engine.Controller.Possess
// Size: 0x0008
struct Controller_Possess_Params {
public:
    class UObject* InPawn; // 0x0000 (0x0008)
};

// Function: Engine.Controller.OnRep_PlayerState
// Size: 0x0000
struct Controller_OnRep_PlayerState_Params {
public:
};

// Function: Engine.Controller.OnRep_Pawn
// Size: 0x0000
struct Controller_OnRep_Pawn_Params {
public:
};

// Function: Engine.Controller.LineOfSightTo
// Size: 0x0016
struct Controller_LineOfSightTo_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
    uint8_t ViewPoint[0xC]; // 0x0008 (0x000C)
    bool bAlternateChecks; // 0x0014 (0x0001)
    bool ReturnValue; // 0x0015 (0x0001)
};

// Function: Engine.Controller.K2_GetPawn
// Size: 0x0008
struct Controller_K2_GetPawn_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Controller.IsLocalPlayerController
// Size: 0x0001
struct Controller_IsLocalPlayerController_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Controller.IsLocalController
// Size: 0x0001
struct Controller_IsLocalController_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Controller.GetViewTarget
// Size: 0x0008
struct Controller_GetViewTarget_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Controller.GetDesiredRotation
// Size: 0x000C
struct Controller_GetDesiredRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Controller.GetControlRotation
// Size: 0x000C
struct Controller_GetControlRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Controller.ClientSetRotation
// Size: 0x000D
struct Controller_ClientSetRotation_Params {
public:
    uint8_t NewRotation[0xC]; // 0x0000 (0x000C)
    bool bResetCamera; // 0x000C (0x0001)
};

// Function: Engine.Controller.ClientSetLocation
// Size: 0x0018
struct Controller_ClientSetLocation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.Controller.CastToPlayerController
// Size: 0x0008
struct Controller_CastToPlayerController_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.AnimNotify.Received_Notify
// Size: 0x0011
struct AnimNotify_Received_Notify_Params {
public:
    class UObject* MeshComp; // 0x0000 (0x0008)
    class UObject* Animation; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.AnimNotify.GetNotifyName
// Size: 0x0010
struct AnimNotify_GetNotifyName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.BlueprintFunctionLibrary.MakeStringAssetReference
// Size: 0x0020
struct BlueprintFunctionLibrary_MakeStringAssetReference_Params {
public:
    struct FString AssetLongPathname; // 0x0000 (0x0010)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.BlueprintAsyncActionBase.Activate
// Size: 0x0000
struct BlueprintAsyncActionBase_Activate_Params {
public:
};

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
// Size: 0x0000
struct SkeletalMeshActor_OnRep_ReplicatedPhysAsset_Params {
public:
};

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
// Size: 0x0000
struct SkeletalMeshActor_OnRep_ReplicatedMesh_Params {
public:
};

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
// Size: 0x0000
struct SkeletalMeshActor_OnRep_ReplicatedMaterial1_Params {
public:
};

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
// Size: 0x0000
struct SkeletalMeshActor_OnRep_ReplicatedMaterial0_Params {
public:
};

// Function: Engine.HUD.ShowStatObjectTypeCountsForType
// Size: 0x0008
struct HUD_ShowStatObjectTypeCountsForType_Params {
public:
    class UClass* DesiredClass; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ShowHUD
// Size: 0x0000
struct HUD_ShowHUD_Params {
public:
};

// Function: Engine.HUD.ShowDebugToggleSubCategory
// Size: 0x0008
struct HUD_ShowDebugToggleSubCategory_Params {
public:
    struct FName Category; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ShowDebugForReticleTargetToggle
// Size: 0x0008
struct HUD_ShowDebugForReticleTargetToggle_Params {
public:
    class UClass* DesiredClass; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ShowDebug
// Size: 0x0008
struct HUD_ShowDebug_Params {
public:
    struct FName DebugType; // 0x0000 (0x0008)
};

// Function: Engine.HUD.RemoveDebugText
// Size: 0x0009
struct HUD_RemoveDebugText_Params {
public:
    class UObject* SrcActor; // 0x0000 (0x0008)
    bool bLeaveDurationText; // 0x0008 (0x0001)
};

// Function: Engine.HUD.RemoveAllDebugStrings
// Size: 0x0000
struct HUD_RemoveAllDebugStrings_Params {
public:
};

// Function: Engine.HUD.ReceiveHitBoxRelease
// Size: 0x0008
struct HUD_ReceiveHitBoxRelease_Params {
public:
    struct FName BoxName; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ReceiveHitBoxEndCursorOver
// Size: 0x0008
struct HUD_ReceiveHitBoxEndCursorOver_Params {
public:
    struct FName BoxName; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ReceiveHitBoxClick
// Size: 0x0008
struct HUD_ReceiveHitBoxClick_Params {
public:
    struct FName BoxName; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ReceiveHitBoxBeginCursorOver
// Size: 0x0008
struct HUD_ReceiveHitBoxBeginCursorOver_Params {
public:
    struct FName BoxName; // 0x0000 (0x0008)
};

// Function: Engine.HUD.ReceiveDrawHUD
// Size: 0x0008
struct HUD_ReceiveDrawHUD_Params {
public:
    int32_t SizeX; // 0x0000 (0x0004)
    int32_t SizeY; // 0x0004 (0x0004)
};

// Function: Engine.HUD.Project
// Size: 0x0018
struct HUD_Project_Params {
public:
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.HUD.GetTextSize
// Size: 0x0024
struct HUD_GetTextSize_Params {
public:
    struct FString Text; // 0x0000 (0x0010)
    float OutWidth; // 0x0010 (0x0004)
    float OutHeight; // 0x0014 (0x0004)
    class UObject* Font; // 0x0018 (0x0008)
    float Scale; // 0x0020 (0x0004)
};

// Function: Engine.HUD.GetOwningPlayerController
// Size: 0x0008
struct HUD_GetOwningPlayerController_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.HUD.GetOwningPawn
// Size: 0x0008
struct HUD_GetOwningPawn_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.HUD.GetActorsInSelectionRectangle
// Size: 0x002A
struct HUD_GetActorsInSelectionRectangle_Params {
public:
    class UClass* ClassFilter; // 0x0000 (0x0008)
    uint8_t FirstPoint[0x8]; // 0x0008 (0x0008)
    uint8_t SecondPoint[0x8]; // 0x0010 (0x0008)
    struct TArray<uint8_t> OutActors; // 0x0018 (0x0010)
    bool bIncludeNonCollidingComponents; // 0x0028 (0x0001)
    bool bActorMustBeFullyEnclosed; // 0x0029 (0x0001)
};

// Function: Engine.HUD.DrawTextureSimple
// Size: 0x0015
struct HUD_DrawTextureSimple_Params {
public:
    class UObject* Texture; // 0x0000 (0x0008)
    float ScreenX; // 0x0008 (0x0004)
    float ScreenY; // 0x000C (0x0004)
    float Scale; // 0x0010 (0x0004)
    bool bScalePosition; // 0x0014 (0x0001)
};

// Function: Engine.HUD.DrawTexture
// Size: 0x0050
struct HUD_DrawTexture_Params {
public:
    class UObject* Texture; // 0x0000 (0x0008)
    float ScreenX; // 0x0008 (0x0004)
    float ScreenY; // 0x000C (0x0004)
    float ScreenW; // 0x0010 (0x0004)
    float ScreenH; // 0x0014 (0x0004)
    float TextureU; // 0x0018 (0x0004)
    float TextureV; // 0x001C (0x0004)
    float TextureUWidth; // 0x0020 (0x0004)
    float TextureVHeight; // 0x0024 (0x0004)
    uint8_t TintColor[0x10]; // 0x0028 (0x0010)
    uint8_t BlendMode; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    float Scale; // 0x003C (0x0004)
    bool bScalePosition; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    float Rotation; // 0x0044 (0x0004)
    uint8_t RotPivot[0x8]; // 0x0048 (0x0008)
};

// Function: Engine.HUD.DrawText
// Size: 0x0035
struct HUD_DrawText_Params {
public:
    struct FString Text; // 0x0000 (0x0010)
    uint8_t TextColor[0x10]; // 0x0010 (0x0010)
    float ScreenX; // 0x0020 (0x0004)
    float ScreenY; // 0x0024 (0x0004)
    class UObject* Font; // 0x0028 (0x0008)
    float Scale; // 0x0030 (0x0004)
    bool bScalePosition; // 0x0034 (0x0001)
};

// Function: Engine.HUD.DrawRect
// Size: 0x0020
struct HUD_DrawRect_Params {
public:
    uint8_t RectColor[0x10]; // 0x0000 (0x0010)
    float ScreenX; // 0x0010 (0x0004)
    float ScreenY; // 0x0014 (0x0004)
    float ScreenW; // 0x0018 (0x0004)
    float ScreenH; // 0x001C (0x0004)
};

// Function: Engine.HUD.DrawMaterialTriangle
// Size: 0x0068
struct HUD_DrawMaterialTriangle_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
    uint8_t V0_Pos[0x8]; // 0x0008 (0x0008)
    uint8_t V1_Pos[0x8]; // 0x0010 (0x0008)
    uint8_t V2_Pos[0x8]; // 0x0018 (0x0008)
    uint8_t V0_UV[0x8]; // 0x0020 (0x0008)
    uint8_t V1_UV[0x8]; // 0x0028 (0x0008)
    uint8_t V2_UV[0x8]; // 0x0030 (0x0008)
    uint8_t V0_Color[0x10]; // 0x0038 (0x0010)
    uint8_t V1_Color[0x10]; // 0x0048 (0x0010)
    uint8_t V2_Color[0x10]; // 0x0058 (0x0010)
};

// Function: Engine.HUD.DrawMaterialSimple
// Size: 0x001D
struct HUD_DrawMaterialSimple_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
    float ScreenX; // 0x0008 (0x0004)
    float ScreenY; // 0x000C (0x0004)
    float ScreenW; // 0x0010 (0x0004)
    float ScreenH; // 0x0014 (0x0004)
    float Scale; // 0x0018 (0x0004)
    bool bScalePosition; // 0x001C (0x0001)
};

// Function: Engine.HUD.DrawMaterial
// Size: 0x003C
struct HUD_DrawMaterial_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
    float ScreenX; // 0x0008 (0x0004)
    float ScreenY; // 0x000C (0x0004)
    float ScreenW; // 0x0010 (0x0004)
    float ScreenH; // 0x0014 (0x0004)
    float MaterialU; // 0x0018 (0x0004)
    float MaterialV; // 0x001C (0x0004)
    float MaterialUWidth; // 0x0020 (0x0004)
    float MaterialVHeight; // 0x0024 (0x0004)
    float Scale; // 0x0028 (0x0004)
    bool bScalePosition; // 0x002C (0x0001)
    uint8_t Pad_0[0x3]; // 0x002D (0x0003)
    float Rotation; // 0x0030 (0x0004)
    uint8_t RotPivot[0x8]; // 0x0034 (0x0008)
};

// Function: Engine.HUD.DrawLine
// Size: 0x0020
struct HUD_DrawLine_Params {
public:
    float StartScreenX; // 0x0000 (0x0004)
    float StartScreenY; // 0x0004 (0x0004)
    float EndScreenX; // 0x0008 (0x0004)
    float EndScreenY; // 0x000C (0x0004)
    uint8_t LineColor[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.HUD.Deproject
// Size: 0x0020
struct HUD_Deproject_Params {
public:
    float ScreenX; // 0x0000 (0x0004)
    float ScreenY; // 0x0004 (0x0004)
    uint8_t WorldPosition[0xC]; // 0x0008 (0x000C)
    uint8_t WorldDirection[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.HUD.AddHitBox
// Size: 0x0020
struct HUD_AddHitBox_Params {
public:
    uint8_t Position[0x8]; // 0x0000 (0x0008)
    uint8_t Size[0x8]; // 0x0008 (0x0008)
    struct FName InName; // 0x0010 (0x0008)
    bool bConsumesInput; // 0x0018 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0019 (0x0003)
    int32_t Priority; // 0x001C (0x0004)
};

// Function: Engine.HUD.AddDebugText
// Size: 0x004D
struct HUD_AddDebugText_Params {
public:
    struct FString DebugText; // 0x0000 (0x0010)
    class UObject* SrcActor; // 0x0010 (0x0008)
    float Duration; // 0x0018 (0x0004)
    uint8_t Offset[0xC]; // 0x001C (0x000C)
    uint8_t DesiredOffset[0xC]; // 0x0028 (0x000C)
    uint8_t TextColor[0x4]; // 0x0034 (0x0004)
    bool bSkipOverwriteCheck; // 0x0038 (0x0001)
    bool bAbsoluteLocation; // 0x0039 (0x0001)
    bool bKeepAttachedToActor; // 0x003A (0x0001)
    uint8_t Pad_0[0x5]; // 0x003B (0x0005)
    class UObject* InFont; // 0x0040 (0x0008)
    float FontScale; // 0x0048 (0x0004)
    bool bDrawShadow; // 0x004C (0x0001)
};

// Function: Engine.PlayerCameraManager.StopCameraShake
// Size: 0x0008
struct PlayerCameraManager_StopCameraShake_Params {
public:
    class UObject* ShakeInstance; // 0x0000 (0x0008)
};

// Function: Engine.PlayerCameraManager.StopCameraFade
// Size: 0x0000
struct PlayerCameraManager_StopCameraFade_Params {
public:
};

// Function: Engine.PlayerCameraManager.StopCameraAnimInst
// Size: 0x0009
struct PlayerCameraManager_StopCameraAnimInst_Params {
public:
    class UObject* AnimInst; // 0x0000 (0x0008)
    bool bImmediate; // 0x0008 (0x0001)
};

// Function: Engine.PlayerCameraManager.StopAllInstancesOfCameraShake
// Size: 0x0008
struct PlayerCameraManager_StopAllInstancesOfCameraShake_Params {
public:
    class UClass* Shake; // 0x0000 (0x0008)
};

// Function: Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim
// Size: 0x0009
struct PlayerCameraManager_StopAllInstancesOfCameraAnim_Params {
public:
    class UObject* anim; // 0x0000 (0x0008)
    bool bImmediate; // 0x0008 (0x0001)
};

// Function: Engine.PlayerCameraManager.StopAllCameraShakes
// Size: 0x0000
struct PlayerCameraManager_StopAllCameraShakes_Params {
public:
};

// Function: Engine.PlayerCameraManager.StopAllCameraAnims
// Size: 0x0001
struct PlayerCameraManager_StopAllCameraAnims_Params {
public:
    bool bImmediate; // 0x0000 (0x0001)
};

// Function: Engine.PlayerCameraManager.StartCameraFade
// Size: 0x001E
struct PlayerCameraManager_StartCameraFade_Params {
public:
    float FromAlpha; // 0x0000 (0x0004)
    float ToAlpha; // 0x0004 (0x0004)
    float Duration; // 0x0008 (0x0004)
    uint8_t Color[0x10]; // 0x000C (0x0010)
    bool bShouldFadeAudio; // 0x001C (0x0001)
    bool bHoldWhenFinished; // 0x001D (0x0001)
};

// Function: Engine.PlayerCameraManager.SetManualCameraFade
// Size: 0x0015
struct PlayerCameraManager_SetManualCameraFade_Params {
public:
    float InFadeAmount; // 0x0000 (0x0004)
    uint8_t Color[0x10]; // 0x0004 (0x0010)
    bool bInFadeAudio; // 0x0014 (0x0001)
};

// Function: Engine.PlayerCameraManager.RemoveCameraModifier
// Size: 0x0009
struct PlayerCameraManager_RemoveCameraModifier_Params {
public:
    class UObject* ModifierToRemove; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.PlayerCameraManager.RemoveCameraLensEffect
// Size: 0x0008
struct PlayerCameraManager_RemoveCameraLensEffect_Params {
public:
    class UObject* Emitter; // 0x0000 (0x0008)
};

// Function: Engine.PlayerCameraManager.PlayCameraShake
// Size: 0x0028
struct PlayerCameraManager_PlayCameraShake_Params {
public:
    class UClass* ShakeClass; // 0x0000 (0x0008)
    float Scale; // 0x0008 (0x0004)
    uint8_t PlaySpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t UserPlaySpaceRot[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: Engine.PlayerCameraManager.PlayCameraAnim
// Size: 0x0038
struct PlayerCameraManager_PlayCameraAnim_Params {
public:
    class UObject* anim; // 0x0000 (0x0008)
    float Rate; // 0x0008 (0x0004)
    float Scale; // 0x000C (0x0004)
    float BlendInTime; // 0x0010 (0x0004)
    float BlendOutTime; // 0x0014 (0x0004)
    bool bLoop; // 0x0018 (0x0001)
    bool bRandomStartTime; // 0x0019 (0x0001)
    uint8_t Pad_0[0x2]; // 0x001A (0x0002)
    float Duration; // 0x001C (0x0004)
    uint8_t PlaySpace; // 0x0020 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0021 (0x0003)
    uint8_t UserPlaySpaceRot[0xC]; // 0x0024 (0x000C)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: Engine.PlayerCameraManager.GetOwningPlayerController
// Size: 0x0008
struct PlayerCameraManager_GetOwningPlayerController_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.PlayerCameraManager.GetFOVAngle
// Size: 0x0004
struct PlayerCameraManager_GetFOVAngle_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PlayerCameraManager.GetCameraRotation
// Size: 0x000C
struct PlayerCameraManager_GetCameraRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PlayerCameraManager.GetCameraLocation
// Size: 0x000C
struct PlayerCameraManager_GetCameraLocation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PlayerCameraManager.FindCameraModifierByClass
// Size: 0x0010
struct PlayerCameraManager_FindCameraModifierByClass_Params {
public:
    class UClass* ModifierClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.PlayerCameraManager.ClearCameraLensEffects
// Size: 0x0000
struct PlayerCameraManager_ClearCameraLensEffects_Params {
public:
};

// Function: Engine.PlayerCameraManager.BlueprintUpdateCamera
// Size: 0x0025
struct PlayerCameraManager_BlueprintUpdateCamera_Params {
public:
    class UObject* CameraTarget; // 0x0000 (0x0008)
    uint8_t NewCameraLocation[0xC]; // 0x0008 (0x000C)
    uint8_t NewCameraRotation[0xC]; // 0x0014 (0x000C)
    float NewCameraFOV; // 0x0020 (0x0004)
    bool ReturnValue; // 0x0024 (0x0001)
};

// Function: Engine.PlayerCameraManager.AddNewCameraModifier
// Size: 0x0010
struct PlayerCameraManager_AddNewCameraModifier_Params {
public:
    class UClass* ModifierClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.PlayerCameraManager.AddCameraLensEffect
// Size: 0x0010
struct PlayerCameraManager_AddCameraLensEffect_Params {
public:
    class UClass* LensEffectEmitterClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.PlayerController.WasInputKeyJustReleased
// Size: 0x0019
struct PlayerController_WasInputKeyJustReleased_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.PlayerController.WasInputKeyJustPressed
// Size: 0x0019
struct PlayerController_WasInputKeyJustPressed_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.PlayerController.ToggleSpeaking
// Size: 0x0001
struct PlayerController_ToggleSpeaking_Params {
public:
    bool bInSpeaking; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.SwitchLevel
// Size: 0x0010
struct PlayerController_SwitchLevel_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.StopHapticEffect
// Size: 0x0001
struct PlayerController_StopHapticEffect_Params {
public:
    uint8_t Hand; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.StartFire
// Size: 0x0001
struct PlayerController_StartFire_Params {
public:
    uint8_t FireModeNum; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.SetVirtualJoystickVisibility
// Size: 0x0001
struct PlayerController_SetVirtualJoystickVisibility_Params {
public:
    bool bVisible; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.SetViewTargetWithBlend
// Size: 0x0015
struct PlayerController_SetViewTargetWithBlend_Params {
public:
    class UObject* NewViewTarget; // 0x0000 (0x0008)
    float BlendTime; // 0x0008 (0x0004)
    uint8_t BlendFunc; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    float BlendExp; // 0x0010 (0x0004)
    bool bLockOutgoing; // 0x0014 (0x0001)
};

// Function: Engine.PlayerController.SetName
// Size: 0x0010
struct PlayerController_SetName_Params {
public:
    struct FString S; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.SetMenu3DMode
// Size: 0x0001
struct PlayerController_SetMenu3DMode_Params {
public:
    bool bInMenu3DMode; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.SetIgnoreMoveInput
// Size: 0x0001
struct PlayerController_SetIgnoreMoveInput_Params {
public:
    bool bNewMoveInput; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.SetIgnoreLookInput
// Size: 0x0001
struct PlayerController_SetIgnoreLookInput_Params {
public:
    bool bNewLookInput; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.SetHapticsByValue
// Size: 0x0009
struct PlayerController_SetHapticsByValue_Params {
public:
    float Frequency; // 0x0000 (0x0004)
    float Amplitude; // 0x0004 (0x0004)
    uint8_t Hand; // 0x0008 (0x0001)
};

// Function: Engine.PlayerController.SetControllerLightColor
// Size: 0x0004
struct PlayerController_SetControllerLightColor_Params {
public:
    uint8_t Color[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.SetCinematicMode
// Size: 0x0005
struct PlayerController_SetCinematicMode_Params {
public:
    bool bInCinematicMode; // 0x0000 (0x0001)
    bool bHidePlayer; // 0x0001 (0x0001)
    bool bAffectsHUD; // 0x0002 (0x0001)
    bool bAffectsMovement; // 0x0003 (0x0001)
    bool bAffectsTurning; // 0x0004 (0x0001)
};

// Function: Engine.PlayerController.SetAudioListenerOverride
// Size: 0x0020
struct PlayerController_SetAudioListenerOverride_Params {
public:
    class UObject* AttachToComponent; // 0x0000 (0x0008)
    uint8_t Location[0xC]; // 0x0008 (0x000C)
    uint8_t Rotation[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.PlayerController.ServerViewSelf
// Size: 0x0010
struct PlayerController_ServerViewSelf_Params {
public:
    uint8_t TransitionParams[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ServerViewPrevPlayer
// Size: 0x0000
struct PlayerController_ServerViewPrevPlayer_Params {
public:
};

// Function: Engine.PlayerController.ServerViewNextPlayer
// Size: 0x0000
struct PlayerController_ServerViewNextPlayer_Params {
public:
};

// Function: Engine.PlayerController.ServerVerifyViewTarget
// Size: 0x0000
struct PlayerController_ServerVerifyViewTarget_Params {
public:
};

// Function: Engine.PlayerController.ServerUpdateLevelVisibility
// Size: 0x0009
struct PlayerController_ServerUpdateLevelVisibility_Params {
public:
    struct FName PackageName; // 0x0000 (0x0008)
    bool bIsVisible; // 0x0008 (0x0001)
};

// Function: Engine.PlayerController.ServerUpdateCamera
// Size: 0x0010
struct PlayerController_ServerUpdateCamera_Params {
public:
    uint8_t CamLoc[0xC]; // 0x0000 (0x000C)
    int32_t CamPitchAndYaw; // 0x000C (0x0004)
};

// Function: Engine.PlayerController.ServerUnmutePlayer
// Size: 0x0010
struct PlayerController_ServerUnmutePlayer_Params {
public:
    uint8_t PlayerId[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ServerToggleAILogging
// Size: 0x0000
struct PlayerController_ServerToggleAILogging_Params {
public:
};

// Function: Engine.PlayerController.ServerShortTimeout
// Size: 0x0000
struct PlayerController_ServerShortTimeout_Params {
public:
};

// Function: Engine.PlayerController.ServerSetSpectatorWaiting
// Size: 0x0001
struct PlayerController_ServerSetSpectatorWaiting_Params {
public:
    bool bWaiting; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.ServerSetSpectatorLocation
// Size: 0x0018
struct PlayerController_ServerSetSpectatorLocation_Params {
public:
    uint8_t NewLoc[0xC]; // 0x0000 (0x000C)
    uint8_t NewRot[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PlayerController.ServerRestartPlayer
// Size: 0x0000
struct PlayerController_ServerRestartPlayer_Params {
public:
};

// Function: Engine.PlayerController.ServerPause
// Size: 0x0000
struct PlayerController_ServerPause_Params {
public:
};

// Function: Engine.PlayerController.ServerNotifyLoadedWorld
// Size: 0x0008
struct PlayerController_ServerNotifyLoadedWorld_Params {
public:
    struct FName WorldPackageName; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ServerMutePlayer
// Size: 0x0010
struct PlayerController_ServerMutePlayer_Params {
public:
    uint8_t PlayerId[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ServerCheckClientPossessionReliable
// Size: 0x0000
struct PlayerController_ServerCheckClientPossessionReliable_Params {
public:
};

// Function: Engine.PlayerController.ServerCheckClientPossession
// Size: 0x0000
struct PlayerController_ServerCheckClientPossession_Params {
public:
};

// Function: Engine.PlayerController.ServerChangeName
// Size: 0x0010
struct PlayerController_ServerChangeName_Params {
public:
    struct FString S; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ServerCamera
// Size: 0x0008
struct PlayerController_ServerCamera_Params {
public:
    struct FName NewMode; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ServerAcknowledgePossession
// Size: 0x0008
struct PlayerController_ServerAcknowledgePossession_Params {
public:
    class UObject* P; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.SendToConsole
// Size: 0x0010
struct PlayerController_SendToConsole_Params {
public:
    struct FString Command; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.RestartLevel
// Size: 0x0000
struct PlayerController_RestartLevel_Params {
public:
};

// Function: Engine.PlayerController.ResetIgnoreMoveInput
// Size: 0x0000
struct PlayerController_ResetIgnoreMoveInput_Params {
public:
};

// Function: Engine.PlayerController.ResetIgnoreLookInput
// Size: 0x0000
struct PlayerController_ResetIgnoreLookInput_Params {
public:
};

// Function: Engine.PlayerController.ResetIgnoreInputFlags
// Size: 0x0000
struct PlayerController_ResetIgnoreInputFlags_Params {
public:
};

// Function: Engine.PlayerController.ProjectWorldLocationToScreen
// Size: 0x0015
struct PlayerController_ProjectWorldLocationToScreen_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t ScreenLocation[0x8]; // 0x000C (0x0008)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.PlayerController.PlayHapticEffect
// Size: 0x0010
struct PlayerController_PlayHapticEffect_Params {
public:
    class UObject* HapticEffect; // 0x0000 (0x0008)
    uint8_t Hand; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float Scale; // 0x000C (0x0004)
};

// Function: Engine.PlayerController.PlayDynamicForceFeedback
// Size: 0x0028
struct PlayerController_PlayDynamicForceFeedback_Params {
public:
    float intensity; // 0x0000 (0x0004)
    float Duration; // 0x0004 (0x0004)
    bool bAffectsLeftLarge; // 0x0008 (0x0001)
    bool bAffectsLeftSmall; // 0x0009 (0x0001)
    bool bAffectsRightLarge; // 0x000A (0x0001)
    bool bAffectsRightSmall; // 0x000B (0x0001)
    uint8_t Action; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t LatentInfo[0x18]; // 0x0010 (0x0018)
};

// Function: Engine.PlayerController.Pause
// Size: 0x0000
struct PlayerController_Pause_Params {
public:
};

// Function: Engine.PlayerController.OnServerStartedVisualLogger
// Size: 0x0001
struct PlayerController_OnServerStartedVisualLogger_Params {
public:
    bool bIsLogging; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.LocalTravel
// Size: 0x0010
struct PlayerController_LocalTravel_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.IsMoveInputIgnored
// Size: 0x0001
struct PlayerController_IsMoveInputIgnored_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.IsLookInputIgnored
// Size: 0x0001
struct PlayerController_IsLookInputIgnored_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.IsInputKeyDown
// Size: 0x0019
struct PlayerController_IsInputKeyDown_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.PlayerController.HasGameViewportFocus
// Size: 0x0001
struct PlayerController_HasGameViewportFocus_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.GetViewportSize
// Size: 0x0008
struct PlayerController_GetViewportSize_Params {
public:
    int32_t SizeX; // 0x0000 (0x0004)
    int32_t SizeY; // 0x0004 (0x0004)
};

// Function: Engine.PlayerController.GetSpectatorPawn
// Size: 0x0008
struct PlayerController_GetSpectatorPawn_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.GetMousePosition
// Size: 0x0009
struct PlayerController_GetMousePosition_Params {
public:
    float LocationX; // 0x0000 (0x0004)
    float LocationY; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.PlayerController.GetInputVectorKeyState
// Size: 0x0024
struct PlayerController_GetInputVectorKeyState_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.PlayerController.GetInputTouchState
// Size: 0x000D
struct PlayerController_GetInputTouchState_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float LocationX; // 0x0004 (0x0004)
    float LocationY; // 0x0008 (0x0004)
    bool bIsCurrentlyPressed; // 0x000C (0x0001)
};

// Function: Engine.PlayerController.GetInputMouseDelta
// Size: 0x0008
struct PlayerController_GetInputMouseDelta_Params {
public:
    float DeltaX; // 0x0000 (0x0004)
    float DeltaY; // 0x0004 (0x0004)
};

// Function: Engine.PlayerController.GetInputMotionState
// Size: 0x0030
struct PlayerController_GetInputMotionState_Params {
public:
    uint8_t Tilt[0xC]; // 0x0000 (0x000C)
    uint8_t RotationRate[0xC]; // 0x000C (0x000C)
    uint8_t Gravity[0xC]; // 0x0018 (0x000C)
    uint8_t Acceleration[0xC]; // 0x0024 (0x000C)
};

// Function: Engine.PlayerController.GetInputKeyTimeDown
// Size: 0x001C
struct PlayerController_GetInputKeyTimeDown_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.PlayerController.GetInputAnalogStickState
// Size: 0x000C
struct PlayerController_GetInputAnalogStickState_Params {
public:
    uint8_t WhichStick; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float StickX; // 0x0004 (0x0004)
    float StickY; // 0x0008 (0x0004)
};

// Function: Engine.PlayerController.GetInputAnalogKeyState
// Size: 0x001C
struct PlayerController_GetInputAnalogKeyState_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.PlayerController.GetHud
// Size: 0x0008
struct PlayerController_GetHud_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.GetHitResultUnderFingerForObjects
// Size: 0x00A9
struct PlayerController_GetHitResultUnderFingerForObjects_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> ObjectTypes; // 0x0008 (0x0010)
    bool bTraceComplex; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    uint8_t HitResult[0x88]; // 0x0020 (0x0088)
    bool ReturnValue; // 0x00A8 (0x0001)
};

// Function: Engine.PlayerController.GetHitResultUnderFingerByChannel
// Size: 0x0091
struct PlayerController_GetHitResultUnderFingerByChannel_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
    uint8_t TraceChannel; // 0x0001 (0x0001)
    bool bTraceComplex; // 0x0002 (0x0001)
    uint8_t Pad_0[0x5]; // 0x0003 (0x0005)
    uint8_t HitResult[0x88]; // 0x0008 (0x0088)
    bool ReturnValue; // 0x0090 (0x0001)
};

// Function: Engine.PlayerController.GetHitResultUnderFinger
// Size: 0x0091
struct PlayerController_GetHitResultUnderFinger_Params {
public:
    uint8_t FingerIndex; // 0x0000 (0x0001)
    uint8_t TraceChannel; // 0x0001 (0x0001)
    bool bTraceComplex; // 0x0002 (0x0001)
    uint8_t Pad_0[0x5]; // 0x0003 (0x0005)
    uint8_t HitResult[0x88]; // 0x0008 (0x0088)
    bool ReturnValue; // 0x0090 (0x0001)
};

// Function: Engine.PlayerController.GetHitResultUnderCursorForObjects
// Size: 0x00A1
struct PlayerController_GetHitResultUnderCursorForObjects_Params {
public:
    struct TArray<uint8_t> ObjectTypes; // 0x0000 (0x0010)
    bool bTraceComplex; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    uint8_t HitResult[0x88]; // 0x0018 (0x0088)
    bool ReturnValue; // 0x00A0 (0x0001)
};

// Function: Engine.PlayerController.GetHitResultUnderCursorByChannel
// Size: 0x0091
struct PlayerController_GetHitResultUnderCursorByChannel_Params {
public:
    uint8_t TraceChannel; // 0x0000 (0x0001)
    bool bTraceComplex; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    uint8_t HitResult[0x88]; // 0x0008 (0x0088)
    bool ReturnValue; // 0x0090 (0x0001)
};

// Function: Engine.PlayerController.GetHitResultUnderCursor
// Size: 0x0091
struct PlayerController_GetHitResultUnderCursor_Params {
public:
    uint8_t TraceChannel; // 0x0000 (0x0001)
    bool bTraceComplex; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    uint8_t HitResult[0x88]; // 0x0008 (0x0088)
    bool ReturnValue; // 0x0090 (0x0001)
};

// Function: Engine.PlayerController.GetFocalLocation
// Size: 0x000C
struct PlayerController_GetFocalLocation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PlayerController.FOVMultiplier
// Size: 0x0004
struct PlayerController_FOVMultiplier_Params {
public:
    float NewFOVMultiplier; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.FOV
// Size: 0x0004
struct PlayerController_FOV_Params {
public:
    float NewFOV; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.EnteredRegion
// Size: 0x0001
struct PlayerController_EnteredRegion_Params {
public:
    uint8_t Region; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.EnableCheats
// Size: 0x0000
struct PlayerController_EnableCheats_Params {
public:
};

// Function: Engine.PlayerController.DeprojectScreenPositionToWorld
// Size: 0x0021
struct PlayerController_DeprojectScreenPositionToWorld_Params {
public:
    float ScreenX; // 0x0000 (0x0004)
    float ScreenY; // 0x0004 (0x0004)
    uint8_t WorldLocation[0xC]; // 0x0008 (0x000C)
    uint8_t WorldDirection[0xC]; // 0x0014 (0x000C)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.PlayerController.DeprojectMousePositionToWorld
// Size: 0x0019
struct PlayerController_DeprojectMousePositionToWorld_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t WorldDirection[0xC]; // 0x000C (0x000C)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.PlayerController.ConsoleKey
// Size: 0x0018
struct PlayerController_ConsoleKey_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
};

// Function: Engine.PlayerController.ClientWasKicked
// Size: 0x0018
struct PlayerController_ClientWasKicked_Params {
public:
    struct FText KickReason; // 0x0000 (0x0018)
};

// Function: Engine.PlayerController.ClientVoiceHandshakeComplete
// Size: 0x0000
struct PlayerController_ClientVoiceHandshakeComplete_Params {
public:
};

// Function: Engine.PlayerController.ClientUpdateLevelStreamingStatus
// Size: 0x0010
struct PlayerController_ClientUpdateLevelStreamingStatus_Params {
public:
    struct FName PackageName; // 0x0000 (0x0008)
    bool bNewShouldBeLoaded; // 0x0008 (0x0001)
    bool bNewShouldBeVisible; // 0x0009 (0x0001)
    bool bNewShouldBlockOnLoad; // 0x000A (0x0001)
    uint8_t Pad_0[0x1]; // 0x000B (0x0001)
    int32_t LODIndex; // 0x000C (0x0004)
};

// Function: Engine.PlayerController.ClientUnmutePlayer
// Size: 0x0010
struct PlayerController_ClientUnmutePlayer_Params {
public:
    uint8_t PlayerId[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ClientTravelInternal
// Size: 0x0024
struct PlayerController_ClientTravelInternal_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
    uint8_t TravelType; // 0x0010 (0x0001)
    bool bSeamless; // 0x0011 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0012 (0x0002)
    uint8_t MapPackageGuid[0x10]; // 0x0014 (0x0010)
};

// Function: Engine.PlayerController.ClientTravel
// Size: 0x0024
struct PlayerController_ClientTravel_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
    uint8_t TravelType; // 0x0010 (0x0001)
    bool bSeamless; // 0x0011 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0012 (0x0002)
    uint8_t MapPackageGuid[0x10]; // 0x0014 (0x0010)
};

// Function: Engine.PlayerController.ClientTeamMessage
// Size: 0x0024
struct PlayerController_ClientTeamMessage_Params {
public:
    class UObject* SenderPlayerState; // 0x0000 (0x0008)
    struct FString S; // 0x0008 (0x0010)
    struct FName Type; // 0x0018 (0x0008)
    float MsgLifeTime; // 0x0020 (0x0004)
};

// Function: Engine.PlayerController.ClientStopForceFeedback
// Size: 0x0010
struct PlayerController_ClientStopForceFeedback_Params {
public:
    class UObject* ForceFeedbackEffect; // 0x0000 (0x0008)
    struct FName Tag; // 0x0008 (0x0008)
};

// Function: Engine.PlayerController.ClientStopCameraShake
// Size: 0x0008
struct PlayerController_ClientStopCameraShake_Params {
public:
    class UClass* Shake; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientStopCameraAnim
// Size: 0x0008
struct PlayerController_ClientStopCameraAnim_Params {
public:
    class UObject* AnimToStop; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientStartOnlineSession
// Size: 0x0000
struct PlayerController_ClientStartOnlineSession_Params {
public:
};

// Function: Engine.PlayerController.ClientSpawnCameraLensEffect
// Size: 0x0008
struct PlayerController_ClientSpawnCameraLensEffect_Params {
public:
    class UClass* LensEffectEmitterClass; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientSetViewTarget
// Size: 0x0018
struct PlayerController_ClientSetViewTarget_Params {
public:
    class UObject* A; // 0x0000 (0x0008)
    uint8_t TransitionParams[0x10]; // 0x0008 (0x0010)
};

// Function: Engine.PlayerController.ClientSetSpectatorWaiting
// Size: 0x0001
struct PlayerController_ClientSetSpectatorWaiting_Params {
public:
    bool bWaiting; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.ClientSetHUD
// Size: 0x0008
struct PlayerController_ClientSetHUD_Params {
public:
    class UClass* NewHUDClass; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientSetForceMipLevelsToBeResident
// Size: 0x0010
struct PlayerController_ClientSetForceMipLevelsToBeResident_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
    float ForceDuration; // 0x0008 (0x0004)
    int32_t CinematicTextureGroups; // 0x000C (0x0004)
};

// Function: Engine.PlayerController.ClientSetCinematicMode
// Size: 0x0004
struct PlayerController_ClientSetCinematicMode_Params {
public:
    bool bInCinematicMode; // 0x0000 (0x0001)
    bool bAffectsMovement; // 0x0001 (0x0001)
    bool bAffectsTurning; // 0x0002 (0x0001)
    bool bAffectsHUD; // 0x0003 (0x0001)
};

// Function: Engine.PlayerController.ClientSetCameraMode
// Size: 0x0008
struct PlayerController_ClientSetCameraMode_Params {
public:
    struct FName NewCamMode; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientSetCameraFade
// Size: 0x0015
struct PlayerController_ClientSetCameraFade_Params {
public:
    bool bEnableFading; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t FadeColor[0x4]; // 0x0004 (0x0004)
    uint8_t FadeAlpha[0x8]; // 0x0008 (0x0008)
    float FadeTime; // 0x0010 (0x0004)
    bool bFadeAudio; // 0x0014 (0x0001)
};

// Function: Engine.PlayerController.ClientSetBlockOnAsyncLoading
// Size: 0x0000
struct PlayerController_ClientSetBlockOnAsyncLoading_Params {
public:
};

// Function: Engine.PlayerController.ClientReturnToMainMenu
// Size: 0x0010
struct PlayerController_ClientReturnToMainMenu_Params {
public:
    struct FString ReturnReason; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ClientRetryClientRestart
// Size: 0x0008
struct PlayerController_ClientRetryClientRestart_Params {
public:
    class UObject* NewPawn; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientRestart
// Size: 0x0008
struct PlayerController_ClientRestart_Params {
public:
    class UObject* NewPawn; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientReset
// Size: 0x0000
struct PlayerController_ClientReset_Params {
public:
};

// Function: Engine.PlayerController.ClientRepObjRef
// Size: 0x0008
struct PlayerController_ClientRepObjRef_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientReceiveLocalizedMessage
// Size: 0x0028
struct PlayerController_ClientReceiveLocalizedMessage_Params {
public:
    class UClass* Message; // 0x0000 (0x0008)
    int32_t Switch; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* RelatedPlayerState_1; // 0x0010 (0x0008)
    class UObject* RelatedPlayerState_2; // 0x0018 (0x0008)
    class UObject* OptionalObject; // 0x0020 (0x0008)
};

// Function: Engine.PlayerController.ClientPrestreamTextures
// Size: 0x0014
struct PlayerController_ClientPrestreamTextures_Params {
public:
    class UObject* ForcedActor; // 0x0000 (0x0008)
    float ForceDuration; // 0x0008 (0x0004)
    bool bEnableStreaming; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    int32_t CinematicTextureGroups; // 0x0010 (0x0004)
};

// Function: Engine.PlayerController.ClientPrepareMapChange
// Size: 0x000A
struct PlayerController_ClientPrepareMapChange_Params {
public:
    struct FName levelName; // 0x0000 (0x0008)
    bool bFirst; // 0x0008 (0x0001)
    bool bLast; // 0x0009 (0x0001)
};

// Function: Engine.PlayerController.ClientPlaySoundAtLocation
// Size: 0x001C
struct PlayerController_ClientPlaySoundAtLocation_Params {
public:
    class UObject* Sound; // 0x0000 (0x0008)
    uint8_t Location[0xC]; // 0x0008 (0x000C)
    float VolumeMultiplier; // 0x0014 (0x0004)
    float PitchMultiplier; // 0x0018 (0x0004)
};

// Function: Engine.PlayerController.ClientPlaySound
// Size: 0x0010
struct PlayerController_ClientPlaySound_Params {
public:
    class UObject* Sound; // 0x0000 (0x0008)
    float VolumeMultiplier; // 0x0008 (0x0004)
    float PitchMultiplier; // 0x000C (0x0004)
};

// Function: Engine.PlayerController.ClientPlayForceFeedback
// Size: 0x0018
struct PlayerController_ClientPlayForceFeedback_Params {
public:
    class UObject* ForceFeedbackEffect; // 0x0000 (0x0008)
    bool bLooping; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FName Tag; // 0x0010 (0x0008)
};

// Function: Engine.PlayerController.ClientPlayCameraShake
// Size: 0x001C
struct PlayerController_ClientPlayCameraShake_Params {
public:
    class UClass* Shake; // 0x0000 (0x0008)
    float Scale; // 0x0008 (0x0004)
    uint8_t PlaySpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t UserPlaySpaceRot[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.PlayerController.ClientPlayCameraAnim
// Size: 0x0028
struct PlayerController_ClientPlayCameraAnim_Params {
public:
    class UObject* AnimToPlay; // 0x0000 (0x0008)
    float Scale; // 0x0008 (0x0004)
    float Rate; // 0x000C (0x0004)
    float BlendInTime; // 0x0010 (0x0004)
    float BlendOutTime; // 0x0014 (0x0004)
    bool bLoop; // 0x0018 (0x0001)
    bool bRandomStartTime; // 0x0019 (0x0001)
    uint8_t Space; // 0x001A (0x0001)
    uint8_t Pad_0[0x1]; // 0x001B (0x0001)
    uint8_t CustomPlaySpace[0xC]; // 0x001C (0x000C)
};

// Function: Engine.PlayerController.ClientMutePlayer
// Size: 0x0010
struct PlayerController_ClientMutePlayer_Params {
public:
    uint8_t PlayerId[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.PlayerController.ClientMessage
// Size: 0x001C
struct PlayerController_ClientMessage_Params {
public:
    struct FString S; // 0x0000 (0x0010)
    struct FName Type; // 0x0010 (0x0008)
    float MsgLifeTime; // 0x0018 (0x0004)
};

// Function: Engine.PlayerController.ClientIgnoreMoveInput
// Size: 0x0001
struct PlayerController_ClientIgnoreMoveInput_Params {
public:
    bool bIgnore; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.ClientIgnoreLookInput
// Size: 0x0001
struct PlayerController_ClientIgnoreLookInput_Params {
public:
    bool bIgnore; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.ClientGotoState
// Size: 0x0008
struct PlayerController_ClientGotoState_Params {
public:
    struct FName NewState; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.ClientGameEnded
// Size: 0x0009
struct PlayerController_ClientGameEnded_Params {
public:
    class UObject* EndGameFocus; // 0x0000 (0x0008)
    bool bIsWinner; // 0x0008 (0x0001)
};

// Function: Engine.PlayerController.ClientForceGarbageCollection
// Size: 0x0000
struct PlayerController_ClientForceGarbageCollection_Params {
public:
};

// Function: Engine.PlayerController.ClientFlushLevelStreaming
// Size: 0x0000
struct PlayerController_ClientFlushLevelStreaming_Params {
public:
};

// Function: Engine.PlayerController.ClientEndOnlineSession
// Size: 0x0000
struct PlayerController_ClientEndOnlineSession_Params {
public:
};

// Function: Engine.PlayerController.ClientEnableNetworkVoice
// Size: 0x0001
struct PlayerController_ClientEnableNetworkVoice_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.PlayerController.ClientCommitMapChange
// Size: 0x0000
struct PlayerController_ClientCommitMapChange_Params {
public:
};

// Function: Engine.PlayerController.ClientClearCameraLensEffects
// Size: 0x0000
struct PlayerController_ClientClearCameraLensEffects_Params {
public:
};

// Function: Engine.PlayerController.ClientCapBandwidth
// Size: 0x0004
struct PlayerController_ClientCapBandwidth_Params {
public:
    int32_t Cap; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.ClientCancelPendingMapChange
// Size: 0x0000
struct PlayerController_ClientCancelPendingMapChange_Params {
public:
};

// Function: Engine.PlayerController.ClientAddTextureStreamingLoc
// Size: 0x0011
struct PlayerController_ClientAddTextureStreamingLoc_Params {
public:
    uint8_t InLoc[0xC]; // 0x0000 (0x000C)
    float Duration; // 0x000C (0x0004)
    bool bOverrideLocation; // 0x0010 (0x0001)
};

// Function: Engine.PlayerController.ClearAudioListenerOverride
// Size: 0x0000
struct PlayerController_ClearAudioListenerOverride_Params {
public:
};

// Function: Engine.PlayerController.Camera
// Size: 0x0008
struct PlayerController_Camera_Params {
public:
    struct FName NewMode; // 0x0000 (0x0008)
};

// Function: Engine.PlayerController.AddYawInput
// Size: 0x0004
struct PlayerController_AddYawInput_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.AddRollInput
// Size: 0x0004
struct PlayerController_AddRollInput_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.AddPitchInput
// Size: 0x0004
struct PlayerController_AddPitchInput_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.PlayerController.ActivateTouchInterface
// Size: 0x0008
struct PlayerController_ActivateTouchInterface_Params {
public:
    class UObject* NewTouchInterface; // 0x0000 (0x0008)
};

// Function: Engine.SphereComponent.SetSphereRadius
// Size: 0x0005
struct SphereComponent_SetSphereRadius_Params {
public:
    float InSphereRadius; // 0x0000 (0x0004)
    bool bUpdateOverlaps; // 0x0004 (0x0001)
};

// Function: Engine.SphereComponent.GetUnscaledSphereRadius
// Size: 0x0004
struct SphereComponent_GetUnscaledSphereRadius_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SphereComponent.GetShapeScale
// Size: 0x0004
struct SphereComponent_GetShapeScale_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SphereComponent.GetScaledSphereRadius
// Size: 0x0004
struct SphereComponent_GetScaledSphereRadius_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.MovementComponent.StopMovementImmediately
// Size: 0x0000
struct MovementComponent_StopMovementImmediately_Params {
public:
};

// Function: Engine.MovementComponent.SnapUpdatedComponentToPlane
// Size: 0x0000
struct MovementComponent_SnapUpdatedComponentToPlane_Params {
public:
};

// Function: Engine.MovementComponent.SetUpdatedComponent
// Size: 0x0008
struct MovementComponent_SetUpdatedComponent_Params {
public:
    class UObject* NewUpdatedComponent; // 0x0000 (0x0008)
};

// Function: Engine.MovementComponent.SetPlaneConstraintOrigin
// Size: 0x000C
struct MovementComponent_SetPlaneConstraintOrigin_Params {
public:
    uint8_t PlaneOrigin[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.MovementComponent.SetPlaneConstraintNormal
// Size: 0x000C
struct MovementComponent_SetPlaneConstraintNormal_Params {
public:
    uint8_t PlaneNormal[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.MovementComponent.SetPlaneConstraintFromVectors
// Size: 0x0018
struct MovementComponent_SetPlaneConstraintFromVectors_Params {
public:
    uint8_t Forward[0xC]; // 0x0000 (0x000C)
    uint8_t Up[0xC]; // 0x000C (0x000C)
};

// Function: Engine.MovementComponent.SetPlaneConstraintEnabled
// Size: 0x0001
struct MovementComponent_SetPlaneConstraintEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.MovementComponent.SetPlaneConstraintAxisSetting
// Size: 0x0001
struct MovementComponent_SetPlaneConstraintAxisSetting_Params {
public:
    uint8_t NewAxisSetting; // 0x0000 (0x0001)
};

// Function: Engine.MovementComponent.PhysicsVolumeChanged
// Size: 0x0008
struct MovementComponent_PhysicsVolumeChanged_Params {
public:
    class UObject* NewVolume; // 0x0000 (0x0008)
};

// Function: Engine.MovementComponent.K2_MoveUpdatedComponent
// Size: 0x00A3
struct MovementComponent_K2_MoveUpdatedComponent_Params {
public:
    uint8_t Delta[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
    uint8_t OutHit[0x88]; // 0x0018 (0x0088)
    bool bSweep; // 0x00A0 (0x0001)
    bool bTeleport; // 0x00A1 (0x0001)
    bool ReturnValue; // 0x00A2 (0x0001)
};

// Function: Engine.MovementComponent.K2_GetModifiedMaxSpeed
// Size: 0x0004
struct MovementComponent_K2_GetModifiedMaxSpeed_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.MovementComponent.K2_GetMaxSpeedModifier
// Size: 0x0004
struct MovementComponent_K2_GetMaxSpeedModifier_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.MovementComponent.IsExceedingMaxSpeed
// Size: 0x0005
struct MovementComponent_IsExceedingMaxSpeed_Params {
public:
    float MaxSpeed; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.MovementComponent.GetPlaneConstraintOrigin
// Size: 0x000C
struct MovementComponent_GetPlaneConstraintOrigin_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.MovementComponent.GetPlaneConstraintNormal
// Size: 0x000C
struct MovementComponent_GetPlaneConstraintNormal_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.MovementComponent.GetPlaneConstraintAxisSetting
// Size: 0x0001
struct MovementComponent_GetPlaneConstraintAxisSetting_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.MovementComponent.GetPhysicsVolume
// Size: 0x0008
struct MovementComponent_GetPhysicsVolume_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.MovementComponent.GetMaxSpeed
// Size: 0x0004
struct MovementComponent_GetMaxSpeed_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.MovementComponent.GetGravityZ
// Size: 0x0004
struct MovementComponent_GetGravityZ_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.MovementComponent.ConstrainNormalToPlane
// Size: 0x0018
struct MovementComponent_ConstrainNormalToPlane_Params {
public:
    uint8_t Normal[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.MovementComponent.ConstrainLocationToPlane
// Size: 0x0018
struct MovementComponent_ConstrainLocationToPlane_Params {
public:
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.MovementComponent.ConstrainDirectionToPlane
// Size: 0x0018
struct MovementComponent_ConstrainDirectionToPlane_Params {
public:
    uint8_t Direction[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.NavMovementComponent.StopMovementKeepPathing
// Size: 0x0000
struct NavMovementComponent_StopMovementKeepPathing_Params {
public:
};

// Function: Engine.NavMovementComponent.StopActiveMovement
// Size: 0x0000
struct NavMovementComponent_StopActiveMovement_Params {
public:
};

// Function: Engine.NavMovementComponent.IsSwimming
// Size: 0x0001
struct NavMovementComponent_IsSwimming_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavMovementComponent.IsMovingOnGround
// Size: 0x0001
struct NavMovementComponent_IsMovingOnGround_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavMovementComponent.IsFlying
// Size: 0x0001
struct NavMovementComponent_IsFlying_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavMovementComponent.IsFalling
// Size: 0x0001
struct NavMovementComponent_IsFalling_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavMovementComponent.IsCrouching
// Size: 0x0001
struct NavMovementComponent_IsCrouching_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PawnMovementComponent.K2_GetInputVector
// Size: 0x000C
struct PawnMovementComponent_K2_GetInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PawnMovementComponent.IsMoveInputIgnored
// Size: 0x0001
struct PawnMovementComponent_IsMoveInputIgnored_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PawnMovementComponent.GetPendingInputVector
// Size: 0x000C
struct PawnMovementComponent_GetPendingInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PawnMovementComponent.GetPawnOwner
// Size: 0x0008
struct PawnMovementComponent_GetPawnOwner_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.PawnMovementComponent.GetLastInputVector
// Size: 0x000C
struct PawnMovementComponent_GetLastInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PawnMovementComponent.ConsumeInputVector
// Size: 0x000C
struct PawnMovementComponent_ConsumeInputVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PawnMovementComponent.AddInputVector
// Size: 0x000D
struct PawnMovementComponent_AddInputVector_Params {
public:
    uint8_t WorldVector[0xC]; // 0x0000 (0x000C)
    bool bForce; // 0x000C (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.SetUseAutoGears
// Size: 0x0001
struct WheeledVehicleMovementComponent_SetUseAutoGears_Params {
public:
    bool bUseAuto; // 0x0000 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.SetThrottleInput
// Size: 0x0004
struct WheeledVehicleMovementComponent_SetThrottleInput_Params {
public:
    float Throttle; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.SetTargetGear
// Size: 0x0005
struct WheeledVehicleMovementComponent_SetTargetGear_Params {
public:
    int32_t GearNum; // 0x0000 (0x0004)
    bool bImmediate; // 0x0004 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.SetSteeringInput
// Size: 0x0004
struct WheeledVehicleMovementComponent_SetSteeringInput_Params {
public:
    float Steering; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.SetHandbrakeInput
// Size: 0x0001
struct WheeledVehicleMovementComponent_SetHandbrakeInput_Params {
public:
    bool bNewHandbrake; // 0x0000 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.SetGroupsToIgnore
// Size: 0x0004
struct WheeledVehicleMovementComponent_SetGroupsToIgnore_Params {
public:
    int32_t GroupFlags; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.SetGroupsToAvoid
// Size: 0x0004
struct WheeledVehicleMovementComponent_SetGroupsToAvoid_Params {
public:
    int32_t GroupFlags; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.SetGearUp
// Size: 0x0001
struct WheeledVehicleMovementComponent_SetGearUp_Params {
public:
    bool bNewGearUp; // 0x0000 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.SetGearDown
// Size: 0x0001
struct WheeledVehicleMovementComponent_SetGearDown_Params {
public:
    bool bNewGearDown; // 0x0000 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.SetAvoidanceGroup
// Size: 0x0004
struct WheeledVehicleMovementComponent_SetAvoidanceGroup_Params {
public:
    int32_t GroupFlags; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// Size: 0x0001
struct WheeledVehicleMovementComponent_SetAvoidanceEnabled_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.ServerUpdateState
// Size: 0x0014
struct WheeledVehicleMovementComponent_ServerUpdateState_Params {
public:
    float InSteeringInput; // 0x0000 (0x0004)
    float InThrottleInput; // 0x0004 (0x0004)
    float InBrakeInput; // 0x0008 (0x0004)
    float InHandbrakeInput; // 0x000C (0x0004)
    int32_t CurrentGear; // 0x0010 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.GetUseAutoGears
// Size: 0x0001
struct WheeledVehicleMovementComponent_GetUseAutoGears_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.WheeledVehicleMovementComponent.GetTargetGear
// Size: 0x0004
struct WheeledVehicleMovementComponent_GetTargetGear_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.GetForwardSpeed
// Size: 0x0004
struct WheeledVehicleMovementComponent_GetForwardSpeed_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// Size: 0x0004
struct WheeledVehicleMovementComponent_GetEngineRotationSpeed_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// Size: 0x0004
struct WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.WheeledVehicleMovementComponent.GetCurrentGear
// Size: 0x0004
struct WheeledVehicleMovementComponent_GetCurrentGear_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.AnimInstance.UnlockAIResources
// Size: 0x0002
struct AnimInstance_UnlockAIResources_Params {
public:
    bool bUnlockMovement; // 0x0000 (0x0001)
    bool UnlockAILogic; // 0x0001 (0x0001)
};

// Function: Engine.AnimInstance.TryGetPawnOwner
// Size: 0x0008
struct AnimInstance_TryGetPawnOwner_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.AnimInstance.StopSlotAnimation
// Size: 0x0010
struct AnimInstance_StopSlotAnimation_Params {
public:
    float InBlendOutTime; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName SlotNodeName; // 0x0008 (0x0008)
};

// Function: Engine.AnimInstance.SetWorldSpaceAnchorTransform
// Size: 0x0041
struct AnimInstance_SetWorldSpaceAnchorTransform_Params {
public:
    int32_t AnchorIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0004 (0x000C)
    uint8_t WorldSpaceAnchorTransform[0x30]; // 0x0010 (0x0030)
    bool bSweep; // 0x0040 (0x0001)
};

// Function: Engine.AnimInstance.SetMorphTarget
// Size: 0x000C
struct AnimInstance_SetMorphTarget_Params {
public:
    struct FName MorphTargetName; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// Size: 0x0030
struct AnimInstance_PlaySlotAnimationAsDynamicMontage_Params {
public:
    class UObject* Asset; // 0x0000 (0x0008)
    struct FName SlotNodeName; // 0x0008 (0x0008)
    float BlendInTime; // 0x0010 (0x0004)
    float BlendOutTime; // 0x0014 (0x0004)
    float InPlayRate; // 0x0018 (0x0004)
    int32_t LoopCount; // 0x001C (0x0004)
    float BlendOutTriggerTime; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: Engine.AnimInstance.PlaySlotAnimation
// Size: 0x0024
struct AnimInstance_PlaySlotAnimation_Params {
public:
    class UObject* Asset; // 0x0000 (0x0008)
    struct FName SlotNodeName; // 0x0008 (0x0008)
    float BlendInTime; // 0x0010 (0x0004)
    float BlendOutTime; // 0x0014 (0x0004)
    float InPlayRate; // 0x0018 (0x0004)
    int32_t LoopCount; // 0x001C (0x0004)
    float ReturnValue; // 0x0020 (0x0004)
};

// Function: Engine.AnimInstance.Montage_Stop
// Size: 0x0010
struct AnimInstance_Montage_Stop_Params {
public:
    float InBlendOutTime; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* Montage; // 0x0008 (0x0008)
};

// Function: Engine.AnimInstance.Montage_SetPlayRate
// Size: 0x000C
struct AnimInstance_Montage_SetPlayRate_Params {
public:
    class UObject* Montage; // 0x0000 (0x0008)
    float NewPlayRate; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.Montage_SetNextSection
// Size: 0x0018
struct AnimInstance_Montage_SetNextSection_Params {
public:
    struct FName SectionNameToChange; // 0x0000 (0x0008)
    struct FName NextSection; // 0x0008 (0x0008)
    class UObject* Montage; // 0x0010 (0x0008)
};

// Function: Engine.AnimInstance.Montage_SetCategoryPlayRate
// Size: 0x000C
struct AnimInstance_Montage_SetCategoryPlayRate_Params {
public:
    struct FName CategoryName; // 0x0000 (0x0008)
    float PlayRate; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.Montage_Play
// Size: 0x0010
struct AnimInstance_Montage_Play_Params {
public:
    class UObject* MontageToPlay; // 0x0000 (0x0008)
    float InPlayRate; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.AnimInstance.Montage_Pause
// Size: 0x0008
struct AnimInstance_Montage_Pause_Params {
public:
    class UObject* Montage; // 0x0000 (0x0008)
};

// Function: Engine.AnimInstance.Montage_JumpToSectionsEnd
// Size: 0x0010
struct AnimInstance_Montage_JumpToSectionsEnd_Params {
public:
    struct FName SectionName; // 0x0000 (0x0008)
    class UObject* Montage; // 0x0008 (0x0008)
};

// Function: Engine.AnimInstance.Montage_JumpToSection
// Size: 0x0010
struct AnimInstance_Montage_JumpToSection_Params {
public:
    struct FName SectionName; // 0x0000 (0x0008)
    class UObject* Montage; // 0x0008 (0x0008)
};

// Function: Engine.AnimInstance.Montage_IsValidSlot
// Size: 0x0009
struct AnimInstance_Montage_IsValidSlot_Params {
public:
    struct FName SlotName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.AnimInstance.Montage_IsPlaying
// Size: 0x0009
struct AnimInstance_Montage_IsPlaying_Params {
public:
    class UObject* Montage; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.AnimInstance.Montage_IsInterrupted
// Size: 0x0001
struct AnimInstance_Montage_IsInterrupted_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AnimInstance.Montage_IsActive
// Size: 0x0009
struct AnimInstance_Montage_IsActive_Params {
public:
    class UObject* Montage; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.AnimInstance.Montage_GetCurrentSection
// Size: 0x0010
struct AnimInstance_Montage_GetCurrentSection_Params {
public:
    class UObject* Montage; // 0x0000 (0x0008)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.AnimInstance.Montage_GetCurrentCategory
// Size: 0x0008
struct AnimInstance_Montage_GetCurrentCategory_Params {
public:
    struct FName ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.AnimInstance.LockAIResources
// Size: 0x0002
struct AnimInstance_LockAIResources_Params {
public:
    bool bLockMovement; // 0x0000 (0x0001)
    bool LockAILogic; // 0x0001 (0x0001)
};

// Function: Engine.AnimInstance.IsSyncGroupBetweenMarkers
// Size: 0x001A
struct AnimInstance_IsSyncGroupBetweenMarkers_Params {
public:
    struct FName InSyncGroupName; // 0x0000 (0x0008)
    struct FName PreviousMarker; // 0x0008 (0x0008)
    struct FName NextMarker; // 0x0010 (0x0008)
    bool bRespectMarkerOrder; // 0x0018 (0x0001)
    bool ReturnValue; // 0x0019 (0x0001)
};

// Function: Engine.AnimInstance.IsPlayingSlotAnimation
// Size: 0x0011
struct AnimInstance_IsPlayingSlotAnimation_Params {
public:
    class UObject* Asset; // 0x0000 (0x0008)
    struct FName SlotNodeName; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.AnimInstance.HasMarkerBeenHitThisFrame
// Size: 0x0011
struct AnimInstance_HasMarkerBeenHitThisFrame_Params {
public:
    struct FName SyncGroup; // 0x0000 (0x0008)
    struct FName MarkerName; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.AnimInstance.GetTimeToClosestMarker
// Size: 0x0015
struct AnimInstance_GetTimeToClosestMarker_Params {
public:
    struct FName SyncGroup; // 0x0000 (0x0008)
    struct FName MarkerName; // 0x0008 (0x0008)
    float OutMarkerTime; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.AnimInstance.GetSyncGroupPosition
// Size: 0x0020
struct AnimInstance_GetSyncGroupPosition_Params {
public:
    struct FName InSyncGroupName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x18]; // 0x0008 (0x0018)
};

// Function: Engine.AnimInstance.GetStateWeight
// Size: 0x000C
struct AnimInstance_GetStateWeight_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// Size: 0x000C
struct AnimInstance_GetRelevantAnimTimeRemainingFraction_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetRelevantAnimTimeRemaining
// Size: 0x000C
struct AnimInstance_GetRelevantAnimTimeRemaining_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetRelevantAnimTimeFraction
// Size: 0x000C
struct AnimInstance_GetRelevantAnimTimeFraction_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetRelevantAnimTime
// Size: 0x000C
struct AnimInstance_GetRelevantAnimTime_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetRelevantAnimLength
// Size: 0x000C
struct AnimInstance_GetRelevantAnimLength_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetOwningComponent
// Size: 0x0008
struct AnimInstance_GetOwningComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.AnimInstance.GetOwningActor
// Size: 0x0008
struct AnimInstance_GetOwningActor_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.AnimInstance.GetNormalizedCurveValue
// Size: 0x000C
struct AnimInstance_GetNormalizedCurveValue_Params {
public:
    struct FName CurveName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetListenerCurveValue
// Size: 0x0018
struct AnimInstance_GetListenerCurveValue_Params {
public:
    struct FName CollectorName; // 0x0000 (0x0008)
    struct FName CurveName; // 0x0008 (0x0008)
    bool bNormalize; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// Size: 0x000C
struct AnimInstance_GetInstanceTransitionTimeElapsedFraction_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t TransitionIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// Size: 0x000C
struct AnimInstance_GetInstanceTransitionTimeElapsed_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t TransitionIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// Size: 0x000C
struct AnimInstance_GetInstanceTransitionCrossfadeDuration_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t TransitionIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceStateWeight
// Size: 0x000C
struct AnimInstance_GetInstanceStateWeight_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    int32_t StateIndex; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// Size: 0x0008
struct AnimInstance_GetInstanceCurrentStateElapsedTime_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// Size: 0x0008
struct AnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params {
public:
    int32_t AssetPlayerIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// Size: 0x0008
struct AnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params {
public:
    int32_t AssetPlayerIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// Size: 0x0008
struct AnimInstance_GetInstanceAssetPlayerTimeFraction_Params {
public:
    int32_t AssetPlayerIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTime
// Size: 0x0008
struct AnimInstance_GetInstanceAssetPlayerTime_Params {
public:
    int32_t AssetPlayerIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetInstanceAssetPlayerLength
// Size: 0x0008
struct AnimInstance_GetInstanceAssetPlayerLength_Params {
public:
    int32_t AssetPlayerIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetCurveValue
// Size: 0x000C
struct AnimInstance_GetCurveValue_Params {
public:
    struct FName CurveName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetCurrentStateName
// Size: 0x0010
struct AnimInstance_GetCurrentStateName_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.AnimInstance.GetCurrentStateElapsedTime
// Size: 0x0008
struct AnimInstance_GetCurrentStateElapsedTime_Params {
public:
    int32_t MachineIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
// Size: 0x0010
struct AnimInstance_GetAnimAssetPlayerTimeFromEndFraction_Params {
public:
    class UObject* AnimAsset; // 0x0000 (0x0008)
    float CurrentTime; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
// Size: 0x0010
struct AnimInstance_GetAnimAssetPlayerTimeFromEnd_Params {
public:
    class UObject* AnimAsset; // 0x0000 (0x0008)
    float CurrentTime; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
// Size: 0x0010
struct AnimInstance_GetAnimAssetPlayerTimeFraction_Params {
public:
    class UObject* AnimAsset; // 0x0000 (0x0008)
    float CurrentTime; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.AnimInstance.GetAnimAssetPlayerLength
// Size: 0x000C
struct AnimInstance_GetAnimAssetPlayerLength_Params {
public:
    class UObject* AnimAsset; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.GetAnchorIndexByName
// Size: 0x000C
struct AnimInstance_GetAnchorIndexByName_Params {
public:
    struct FName AnchorName; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.AnimInstance.ClearMorphTargets
// Size: 0x0000
struct AnimInstance_ClearMorphTargets_Params {
public:
};

// Function: Engine.AnimInstance.CalculateDirection
// Size: 0x001C
struct AnimInstance_CalculateDirection_Params {
public:
    uint8_t Velocity[0xC]; // 0x0000 (0x000C)
    uint8_t BaseRotation[0xC]; // 0x000C (0x000C)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.AnimInstance.BlueprintUpdateAnimation
// Size: 0x0004
struct AnimInstance_BlueprintUpdateAnimation_Params {
public:
    float DeltaTimeX; // 0x0000 (0x0004)
};

// Function: Engine.AnimInstance.BlueprintPostEvaluateAnimation
// Size: 0x0000
struct AnimInstance_BlueprintPostEvaluateAnimation_Params {
public:
};

// Function: Engine.AnimInstance.BlueprintInitializeAnimation
// Size: 0x0000
struct AnimInstance_BlueprintInitializeAnimation_Params {
public:
};

// Function: Engine.ChildActorComponent.SetChildActorClass
// Size: 0x0008
struct ChildActorComponent_SetChildActorClass_Params {
public:
    class UClass* Class; // 0x0000 (0x0008)
};

// Function: Engine.CameraModifier.IsDisabled
// Size: 0x0001
struct CameraModifier_IsDisabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.CameraModifier.GetViewTarget
// Size: 0x0008
struct CameraModifier_GetViewTarget_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.CameraModifier.EnableModifier
// Size: 0x0000
struct CameraModifier_EnableModifier_Params {
public:
};

// Function: Engine.CameraModifier.DisableModifier
// Size: 0x0001
struct CameraModifier_DisableModifier_Params {
public:
    bool bImmediate; // 0x0000 (0x0001)
};

// Function: Engine.CameraModifier.BlueprintModifyPostProcess
// Size: 0x0970
struct CameraModifier_BlueprintModifyPostProcess_Params {
public:
    float DeltaTime; // 0x0000 (0x0004)
    float PostProcessBlendWeight; // 0x0004 (0x0004)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t PostProcessSettings[0x960]; // 0x0010 (0x0960)
};

// Function: Engine.CameraModifier.BlueprintModifyCamera
// Size: 0x003C
struct CameraModifier_BlueprintModifyCamera_Params {
public:
    float DeltaTime; // 0x0000 (0x0004)
    uint8_t ViewLocation[0xC]; // 0x0004 (0x000C)
    uint8_t ViewRotation[0xC]; // 0x0010 (0x000C)
    float FOV; // 0x001C (0x0004)
    uint8_t NewViewLocation[0xC]; // 0x0020 (0x000C)
    uint8_t NewViewRotation[0xC]; // 0x002C (0x000C)
    float NewFOV; // 0x0038 (0x0004)
};

// Function: Engine.CharacterMovementComponent.SetWalkableFloorZ
// Size: 0x0004
struct CharacterMovementComponent_SetWalkableFloorZ_Params {
public:
    float InWalkableFloorZ; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.SetWalkableFloorAngle
// Size: 0x0004
struct CharacterMovementComponent_SetWalkableFloorAngle_Params {
public:
    float InWalkableFloorAngle; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.SetMovementMode
// Size: 0x0002
struct CharacterMovementComponent_SetMovementMode_Params {
public:
    uint8_t NewMovementMode; // 0x0000 (0x0001)
    uint8_t NewCustomMode; // 0x0001 (0x0001)
};

// Function: Engine.CharacterMovementComponent.SetGroupsToIgnore
// Size: 0x0004
struct CharacterMovementComponent_SetGroupsToIgnore_Params {
public:
    int32_t GroupFlags; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.SetGroupsToAvoid
// Size: 0x0004
struct CharacterMovementComponent_SetGroupsToAvoid_Params {
public:
    int32_t GroupFlags; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.SetAvoidanceGroup
// Size: 0x0004
struct CharacterMovementComponent_SetAvoidanceGroup_Params {
public:
    int32_t GroupFlags; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.SetAvoidanceEnabled
// Size: 0x0001
struct CharacterMovementComponent_SetAvoidanceEnabled_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ServerMoveOld
// Size: 0x0011
struct CharacterMovementComponent_ServerMoveOld_Params {
public:
    float OldTimeStamp; // 0x0000 (0x0004)
    uint8_t OldAccel[0xC]; // 0x0004 (0x000C)
    uint8_t OldMoveFlags; // 0x0010 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ServerMoveDualHybridRootMotion
// Size: 0x0051
struct CharacterMovementComponent_ServerMoveDualHybridRootMotion_Params {
public:
    float TimeStamp0; // 0x0000 (0x0004)
    uint8_t InAccel0[0xC]; // 0x0004 (0x000C)
    uint8_t PendingFlags; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    uint8_t View0[0x4]; // 0x0014 (0x0004)
    float TimeStamp; // 0x0018 (0x0004)
    uint8_t InAccel[0xC]; // 0x001C (0x000C)
    uint8_t ClientLoc[0xC]; // 0x0028 (0x000C)
    uint8_t NewFlags; // 0x0034 (0x0001)
    uint8_t ClientRoll; // 0x0035 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0036 (0x0002)
    uint8_t View[0x4]; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    class UObject* ClientMovementBase; // 0x0040 (0x0008)
    struct FName ClientBaseBoneName; // 0x0048 (0x0008)
    uint8_t ClientMovementMode; // 0x0050 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ServerMoveDual
// Size: 0x0051
struct CharacterMovementComponent_ServerMoveDual_Params {
public:
    float TimeStamp0; // 0x0000 (0x0004)
    uint8_t InAccel0[0xC]; // 0x0004 (0x000C)
    uint8_t PendingFlags; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    uint8_t View0[0x4]; // 0x0014 (0x0004)
    float TimeStamp; // 0x0018 (0x0004)
    uint8_t InAccel[0xC]; // 0x001C (0x000C)
    uint8_t ClientLoc[0xC]; // 0x0028 (0x000C)
    uint8_t NewFlags; // 0x0034 (0x0001)
    uint8_t ClientRoll; // 0x0035 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0036 (0x0002)
    uint8_t View[0x4]; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    class UObject* ClientMovementBase; // 0x0040 (0x0008)
    struct FName ClientBaseBoneName; // 0x0048 (0x0008)
    uint8_t ClientMovementMode; // 0x0050 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ServerMove
// Size: 0x0039
struct CharacterMovementComponent_ServerMove_Params {
public:
    float TimeStamp; // 0x0000 (0x0004)
    uint8_t InAccel[0xC]; // 0x0004 (0x000C)
    uint8_t ClientLoc[0xC]; // 0x0010 (0x000C)
    uint8_t CompressedMoveFlags; // 0x001C (0x0001)
    uint8_t ClientRoll; // 0x001D (0x0001)
    uint8_t Pad_0[0x2]; // 0x001E (0x0002)
    uint8_t View[0x4]; // 0x0020 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0024 (0x0004)
    class UObject* ClientMovementBase; // 0x0028 (0x0008)
    struct FName ClientBaseBoneName; // 0x0030 (0x0008)
    uint8_t ClientMovementMode; // 0x0038 (0x0001)
};

// Function: Engine.CharacterMovementComponent.K2_GetWalkableFloorZ
// Size: 0x0004
struct CharacterMovementComponent_K2_GetWalkableFloorZ_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle
// Size: 0x0004
struct CharacterMovementComponent_K2_GetWalkableFloorAngle_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration
// Size: 0x0004
struct CharacterMovementComponent_K2_GetModifiedMaxAcceleration_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.IsWalking
// Size: 0x0001
struct CharacterMovementComponent_IsWalking_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.CharacterMovementComponent.IsWalkable
// Size: 0x0089
struct CharacterMovementComponent_IsWalkable_Params {
public:
    uint8_t Hit[0x88]; // 0x0000 (0x0088)
    bool ReturnValue; // 0x0088 (0x0001)
};

// Function: Engine.CharacterMovementComponent.IsSliding
// Size: 0x0001
struct CharacterMovementComponent_IsSliding_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.CharacterMovementComponent.GetValidPerchRadius
// Size: 0x0004
struct CharacterMovementComponent_GetValidPerchRadius_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.GetSlidingNormal
// Size: 0x000C
struct CharacterMovementComponent_GetSlidingNormal_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.CharacterMovementComponent.GetPerchRadiusThreshold
// Size: 0x0004
struct CharacterMovementComponent_GetPerchRadiusThreshold_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.GetMovementPrecisionRatio
// Size: 0x0004
struct CharacterMovementComponent_GetMovementPrecisionRatio_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.GetMovementBase
// Size: 0x0008
struct CharacterMovementComponent_GetMovementBase_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.CharacterMovementComponent.GetMaxJumpHeight
// Size: 0x0004
struct CharacterMovementComponent_GetMaxJumpHeight_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.GetMaxAcceleration
// Size: 0x0004
struct CharacterMovementComponent_GetMaxAcceleration_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity
// Size: 0x000C
struct CharacterMovementComponent_GetImpartedMovementBaseVelocity_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.CharacterMovementComponent.GetCurrentAcceleration
// Size: 0x000C
struct CharacterMovementComponent_GetCurrentAcceleration_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.CharacterMovementComponent.GetCharacterOwner
// Size: 0x0008
struct CharacterMovementComponent_GetCharacterOwner_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.CharacterMovementComponent.GetAnalogInputModifier
// Size: 0x0004
struct CharacterMovementComponent_GetAnalogInputModifier_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.DisableMovement
// Size: 0x0000
struct CharacterMovementComponent_DisableMovement_Params {
public:
};

// Function: Engine.CharacterMovementComponent.ClientVeryShortAdjustPosition
// Size: 0x0023
struct CharacterMovementComponent_ClientVeryShortAdjustPosition_Params {
public:
    float TimeStamp; // 0x0000 (0x0004)
    uint8_t NewLoc[0xC]; // 0x0004 (0x000C)
    class UObject* NewBase; // 0x0010 (0x0008)
    struct FName NewBaseBoneName; // 0x0018 (0x0008)
    bool bHasBase; // 0x0020 (0x0001)
    bool bBaseRelativePosition; // 0x0021 (0x0001)
    uint8_t ServerMovementMode; // 0x0022 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ClientAdjustRootMotionSourcePosition
// Size: 0x0143
struct CharacterMovementComponent_ClientAdjustRootMotionSourcePosition_Params {
public:
    float TimeStamp; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ServerRootMotion[0x100]; // 0x0008 (0x0100)
    bool bHasAnimRootMotion; // 0x0108 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0109 (0x0003)
    float ServerMontageTrackPosition; // 0x010C (0x0004)
    uint8_t ServerLoc[0xC]; // 0x0110 (0x000C)
    uint8_t ServerRotation[0xC]; // 0x011C (0x000C)
    float ServerVelZ; // 0x0128 (0x0004)
    uint8_t Pad_2[0x4]; // 0x012C (0x0004)
    class UObject* ServerBase; // 0x0130 (0x0008)
    struct FName ServerBoneName; // 0x0138 (0x0008)
    bool bHasBase; // 0x0140 (0x0001)
    bool bBaseRelativePosition; // 0x0141 (0x0001)
    uint8_t ServerMovementMode; // 0x0142 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ClientAdjustRootMotionPosition
// Size: 0x003B
struct CharacterMovementComponent_ClientAdjustRootMotionPosition_Params {
public:
    float TimeStamp; // 0x0000 (0x0004)
    float ServerMontageTrackPosition; // 0x0004 (0x0004)
    uint8_t ServerLoc[0xC]; // 0x0008 (0x000C)
    uint8_t ServerRotation[0xC]; // 0x0014 (0x000C)
    float ServerVelZ; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    class UObject* ServerBase; // 0x0028 (0x0008)
    struct FName ServerBoneName; // 0x0030 (0x0008)
    bool bHasBase; // 0x0038 (0x0001)
    bool bBaseRelativePosition; // 0x0039 (0x0001)
    uint8_t ServerMovementMode; // 0x003A (0x0001)
};

// Function: Engine.CharacterMovementComponent.ClientAdjustPosition
// Size: 0x0033
struct CharacterMovementComponent_ClientAdjustPosition_Params {
public:
    float TimeStamp; // 0x0000 (0x0004)
    uint8_t NewLoc[0xC]; // 0x0004 (0x000C)
    uint8_t NewVel[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* NewBase; // 0x0020 (0x0008)
    struct FName NewBaseBoneName; // 0x0028 (0x0008)
    bool bHasBase; // 0x0030 (0x0001)
    bool bBaseRelativePosition; // 0x0031 (0x0001)
    uint8_t ServerMovementMode; // 0x0032 (0x0001)
};

// Function: Engine.CharacterMovementComponent.ClientAckGoodMove
// Size: 0x0004
struct CharacterMovementComponent_ClientAckGoodMove_Params {
public:
    float TimeStamp; // 0x0000 (0x0004)
};

// Function: Engine.CharacterMovementComponent.CapsuleTouched
// Size: 0x00A0
struct CharacterMovementComponent_CapsuleTouched_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
    class UObject* OtherComp; // 0x0008 (0x0008)
    int32_t OtherBodyIndex; // 0x0010 (0x0004)
    bool bFromSweep; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    uint8_t SweepResult[0x88]; // 0x0018 (0x0088)
};

// Function: Engine.CharacterMovementComponent.CalcVelocity
// Size: 0x0010
struct CharacterMovementComponent_CalcVelocity_Params {
public:
    float DeltaTime; // 0x0000 (0x0004)
    float Friction; // 0x0004 (0x0004)
    bool bFluid; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float BrakingDeceleration; // 0x000C (0x0004)
};

// Function: Engine.CharacterMovementComponent.AddImpulse
// Size: 0x000D
struct CharacterMovementComponent_AddImpulse_Params {
public:
    uint8_t Impulse[0xC]; // 0x0000 (0x000C)
    bool bVelocityChange; // 0x000C (0x0001)
};

// Function: Engine.CharacterMovementComponent.AddForce
// Size: 0x000C
struct CharacterMovementComponent_AddForce_Params {
public:
    uint8_t Force[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.CheatManager.WidgetReflector
// Size: 0x0000
struct CheatManager_WidgetReflector_Params {
public:
};

// Function: Engine.CheatManager.Walk
// Size: 0x0000
struct CheatManager_Walk_Params {
public:
};

// Function: Engine.CheatManager.ViewSelf
// Size: 0x0000
struct CheatManager_ViewSelf_Params {
public:
};

// Function: Engine.CheatManager.ViewPlayer
// Size: 0x0010
struct CheatManager_ViewPlayer_Params {
public:
    struct FString S; // 0x0000 (0x0010)
};

// Function: Engine.CheatManager.ViewClass
// Size: 0x0008
struct CheatManager_ViewClass_Params {
public:
    class UClass* DesiredClass; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.ViewActor
// Size: 0x0008
struct CheatManager_ViewActor_Params {
public:
    struct FName ActorName; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.ToggleDebugCamera
// Size: 0x0000
struct CheatManager_ToggleDebugCamera_Params {
public:
};

// Function: Engine.CheatManager.ToggleAILogging
// Size: 0x0000
struct CheatManager_ToggleAILogging_Params {
public:
};

// Function: Engine.CheatManager.TextureAtlasVisualizer
// Size: 0x0000
struct CheatManager_TextureAtlasVisualizer_Params {
public:
};

// Function: Engine.CheatManager.TestCollisionDistance
// Size: 0x0000
struct CheatManager_TestCollisionDistance_Params {
public:
};

// Function: Engine.CheatManager.Teleport
// Size: 0x0000
struct CheatManager_Teleport_Params {
public:
};

// Function: Engine.CheatManager.Summon
// Size: 0x0010
struct CheatManager_Summon_Params {
public:
    struct FString ClassName; // 0x0000 (0x0010)
};

// Function: Engine.CheatManager.StreamLevelOut
// Size: 0x0008
struct CheatManager_StreamLevelOut_Params {
public:
    struct FName PackageName; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.StreamLevelIn
// Size: 0x0008
struct CheatManager_StreamLevelIn_Params {
public:
    struct FName PackageName; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.Slomo
// Size: 0x0004
struct CheatManager_Slomo_Params {
public:
    float T; // 0x0000 (0x0004)
};

// Function: Engine.CheatManager.SetWorldOrigin
// Size: 0x0000
struct CheatManager_SetWorldOrigin_Params {
public:
};

// Function: Engine.CheatManager.SetNavDrawDistance
// Size: 0x0004
struct CheatManager_SetNavDrawDistance_Params {
public:
    float DrawDistance; // 0x0000 (0x0004)
};

// Function: Engine.CheatManager.SetMouseSensitivityToDefault
// Size: 0x0000
struct CheatManager_SetMouseSensitivityToDefault_Params {
public:
};

// Function: Engine.CheatManager.ServerToggleAILogging
// Size: 0x0000
struct CheatManager_ServerToggleAILogging_Params {
public:
};

// Function: Engine.CheatManager.RebuildNavigation
// Size: 0x0000
struct CheatManager_RebuildNavigation_Params {
public:
};

// Function: Engine.CheatManager.PlayersOnly
// Size: 0x0000
struct CheatManager_PlayersOnly_Params {
public:
};

// Function: Engine.CheatManager.OnlyLoadLevel
// Size: 0x0008
struct CheatManager_OnlyLoadLevel_Params {
public:
    struct FName PackageName; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.LogLoc
// Size: 0x0000
struct CheatManager_LogLoc_Params {
public:
};

// Function: Engine.CheatManager.InvertMouse
// Size: 0x0000
struct CheatManager_InvertMouse_Params {
public:
};

// Function: Engine.CheatManager.God
// Size: 0x0000
struct CheatManager_God_Params {
public:
};

// Function: Engine.CheatManager.Ghost
// Size: 0x0000
struct CheatManager_Ghost_Params {
public:
};

// Function: Engine.CheatManager.FreezeFrame
// Size: 0x0004
struct CheatManager_FreezeFrame_Params {
public:
    float Delay; // 0x0000 (0x0004)
};

// Function: Engine.CheatManager.FontAtlasVisualizer
// Size: 0x0000
struct CheatManager_FontAtlasVisualizer_Params {
public:
};

// Function: Engine.CheatManager.Fly
// Size: 0x0000
struct CheatManager_Fly_Params {
public:
};

// Function: Engine.CheatManager.FlushLog
// Size: 0x0000
struct CheatManager_FlushLog_Params {
public:
};

// Function: Engine.CheatManager.DumpVoiceMutingState
// Size: 0x0000
struct CheatManager_DumpVoiceMutingState_Params {
public:
};

// Function: Engine.CheatManager.DumpPartyState
// Size: 0x0000
struct CheatManager_DumpPartyState_Params {
public:
};

// Function: Engine.CheatManager.DumpOnlineSessionState
// Size: 0x0000
struct CheatManager_DumpOnlineSessionState_Params {
public:
};

// Function: Engine.CheatManager.DestroyTarget
// Size: 0x0000
struct CheatManager_DestroyTarget_Params {
public:
};

// Function: Engine.CheatManager.DestroyPawns
// Size: 0x0008
struct CheatManager_DestroyPawns_Params {
public:
    class UClass* aClass; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.DestroyAllPawnsExceptTarget
// Size: 0x0000
struct CheatManager_DestroyAllPawnsExceptTarget_Params {
public:
};

// Function: Engine.CheatManager.DestroyAll
// Size: 0x0008
struct CheatManager_DestroyAll_Params {
public:
    class UClass* aClass; // 0x0000 (0x0008)
};

// Function: Engine.CheatManager.DebugCapsuleSweepSize
// Size: 0x0008
struct CheatManager_DebugCapsuleSweepSize_Params {
public:
    float HalfHeight; // 0x0000 (0x0004)
    float Radius; // 0x0004 (0x0004)
};

// Function: Engine.CheatManager.DebugCapsuleSweepPawn
// Size: 0x0000
struct CheatManager_DebugCapsuleSweepPawn_Params {
public:
};

// Function: Engine.CheatManager.DebugCapsuleSweepComplex
// Size: 0x0001
struct CheatManager_DebugCapsuleSweepComplex_Params {
public:
    bool bTraceComplex; // 0x0000 (0x0001)
};

// Function: Engine.CheatManager.DebugCapsuleSweepClear
// Size: 0x0000
struct CheatManager_DebugCapsuleSweepClear_Params {
public:
};

// Function: Engine.CheatManager.DebugCapsuleSweepChannel
// Size: 0x0001
struct CheatManager_DebugCapsuleSweepChannel_Params {
public:
    uint8_t Channel; // 0x0000 (0x0001)
};

// Function: Engine.CheatManager.DebugCapsuleSweepCapture
// Size: 0x0000
struct CheatManager_DebugCapsuleSweepCapture_Params {
public:
};

// Function: Engine.CheatManager.DebugCapsuleSweep
// Size: 0x0000
struct CheatManager_DebugCapsuleSweep_Params {
public:
};

// Function: Engine.CheatManager.DamageTarget
// Size: 0x0004
struct CheatManager_DamageTarget_Params {
public:
    float DamageAmount; // 0x0000 (0x0004)
};

// Function: Engine.CheatManager.ChangeSize
// Size: 0x0004
struct CheatManager_ChangeSize_Params {
public:
    float F; // 0x0000 (0x0004)
};

// Function: Engine.CheatManager.BugItStringCreator
// Size: 0x0038
struct CheatManager_BugItStringCreator_Params {
public:
    uint8_t ViewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t ViewRotation[0xC]; // 0x000C (0x000C)
    struct FString GoString; // 0x0018 (0x0010)
    struct FString LocString; // 0x0028 (0x0010)
};

// Function: Engine.CheatManager.BugItGo
// Size: 0x0018
struct CheatManager_BugItGo_Params {
public:
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
    float Z; // 0x0008 (0x0004)
    float Pitch; // 0x000C (0x0004)
    float Yaw; // 0x0010 (0x0004)
    float Roll; // 0x0014 (0x0004)
};

// Function: Engine.CheatManager.BugIt
// Size: 0x0010
struct CheatManager_BugIt_Params {
public:
    struct FString ScreenShotDescription; // 0x0000 (0x0010)
};

// Function: Engine.BendLightRigBase.TurnOnPostCinematicEvent
// Size: 0x0008
struct BendLightRigBase_TurnOnPostCinematicEvent_Params {
public:
    struct FName CinematicName; // 0x0000 (0x0008)
};

// Function: Engine.BendLightRigBase.TurnOffPreCinematicEvent
// Size: 0x0008
struct BendLightRigBase_TurnOffPreCinematicEvent_Params {
public:
    struct FName CinematicName; // 0x0000 (0x0008)
};

// Function: Engine.BoxComponent.SetBoxExtent
// Size: 0x000D
struct BoxComponent_SetBoxExtent_Params {
public:
    uint8_t InBoxExtent[0xC]; // 0x0000 (0x000C)
    bool bUpdateOverlaps; // 0x000C (0x0001)
};

// Function: Engine.BoxComponent.GetUnscaledBoxExtent
// Size: 0x000C
struct BoxComponent_GetUnscaledBoxExtent_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.BoxComponent.GetScaledBoxExtent
// Size: 0x000C
struct BoxComponent_GetScaledBoxExtent_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.AnimSingleNodeInstance.StopAnim
// Size: 0x0000
struct AnimSingleNodeInstance_StopAnim_Params {
public:
};

// Function: Engine.AnimSingleNodeInstance.SetVertexAnimation
// Size: 0x0010
struct AnimSingleNodeInstance_SetVertexAnimation_Params {
public:
    class UObject* NewVertexAnim; // 0x0000 (0x0008)
    bool bIsLooping; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float InPlayRate; // 0x000C (0x0004)
};

// Function: Engine.AnimSingleNodeInstance.SetReverse
// Size: 0x0001
struct AnimSingleNodeInstance_SetReverse_Params {
public:
    bool bInReverse; // 0x0000 (0x0001)
};

// Function: Engine.AnimSingleNodeInstance.SetPosition
// Size: 0x0005
struct AnimSingleNodeInstance_SetPosition_Params {
public:
    float InPosition; // 0x0000 (0x0004)
    bool bFireNotifies; // 0x0004 (0x0001)
};

// Function: Engine.AnimSingleNodeInstance.SetPlayRate
// Size: 0x0004
struct AnimSingleNodeInstance_SetPlayRate_Params {
public:
    float InPlayRate; // 0x0000 (0x0004)
};

// Function: Engine.AnimSingleNodeInstance.SetPlaying
// Size: 0x0001
struct AnimSingleNodeInstance_SetPlaying_Params {
public:
    bool bIsPlaying; // 0x0000 (0x0001)
};

// Function: Engine.AnimSingleNodeInstance.SetLooping
// Size: 0x0001
struct AnimSingleNodeInstance_SetLooping_Params {
public:
    bool bIsLooping; // 0x0000 (0x0001)
};

// Function: Engine.AnimSingleNodeInstance.SetBlendSpaceInput
// Size: 0x000C
struct AnimSingleNodeInstance_SetBlendSpaceInput_Params {
public:
    uint8_t InBlendInput[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.AnimSingleNodeInstance.SetAnimationAsset
// Size: 0x0010
struct AnimSingleNodeInstance_SetAnimationAsset_Params {
public:
    class UObject* NewAsset; // 0x0000 (0x0008)
    bool bIsLooping; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float InPlayRate; // 0x000C (0x0004)
};

// Function: Engine.AnimSingleNodeInstance.PlayAnim
// Size: 0x000C
struct AnimSingleNodeInstance_PlayAnim_Params {
public:
    bool bIsLooping; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float InPlayRate; // 0x0004 (0x0004)
    float InStartPosition; // 0x0008 (0x0004)
};

// Function: Engine.AnimSingleNodeInstance.GetLength
// Size: 0x0004
struct AnimSingleNodeInstance_GetLength_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SkinnedMeshComponent.UnHideBoneByName
// Size: 0x0008
struct SkinnedMeshComponent_UnHideBoneByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
};

// Function: Engine.SkinnedMeshComponent.TransformToBoneSpace
// Size: 0x0038
struct SkinnedMeshComponent_TransformToBoneSpace_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t InPosition[0xC]; // 0x0008 (0x000C)
    uint8_t InRotation[0xC]; // 0x0014 (0x000C)
    uint8_t OutPosition[0xC]; // 0x0020 (0x000C)
    uint8_t OutRotation[0xC]; // 0x002C (0x000C)
};

// Function: Engine.SkinnedMeshComponent.TransformFromBoneSpace
// Size: 0x0038
struct SkinnedMeshComponent_TransformFromBoneSpace_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t InPosition[0xC]; // 0x0008 (0x000C)
    uint8_t InRotation[0xC]; // 0x0014 (0x000C)
    uint8_t OutPosition[0xC]; // 0x0020 (0x000C)
    uint8_t OutRotation[0xC]; // 0x002C (0x000C)
};

// Function: Engine.SkinnedMeshComponent.SetSkeletalMesh
// Size: 0x0008
struct SkinnedMeshComponent_SetSkeletalMesh_Params {
public:
    class UObject* NewMesh; // 0x0000 (0x0008)
};

// Function: Engine.SkinnedMeshComponent.SetPhysicsAsset
// Size: 0x0009
struct SkinnedMeshComponent_SetPhysicsAsset_Params {
public:
    class UObject* NewPhysicsAsset; // 0x0000 (0x0008)
    bool bForceReInit; // 0x0008 (0x0001)
};

// Function: Engine.SkinnedMeshComponent.SetMinLOD
// Size: 0x0004
struct SkinnedMeshComponent_SetMinLOD_Params {
public:
    int32_t InNewMinLOD; // 0x0000 (0x0004)
};

// Function: Engine.SkinnedMeshComponent.SetMasterPoseComponent
// Size: 0x0008
struct SkinnedMeshComponent_SetMasterPoseComponent_Params {
public:
    class UObject* NewMasterBoneComponent; // 0x0000 (0x0008)
};

// Function: Engine.SkinnedMeshComponent.SetForcedLOD
// Size: 0x0004
struct SkinnedMeshComponent_SetForcedLOD_Params {
public:
    int32_t InNewForcedLOD; // 0x0000 (0x0004)
};

// Function: Engine.SkinnedMeshComponent.SetAllowDynamicNormalRecalculation
// Size: 0x0001
struct SkinnedMeshComponent_SetAllowDynamicNormalRecalculation_Params {
public:
    bool Value; // 0x0000 (0x0001)
};

// Function: Engine.SkinnedMeshComponent.IsBoneHiddenByName
// Size: 0x0009
struct SkinnedMeshComponent_IsBoneHiddenByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.SkinnedMeshComponent.HideBoneByName
// Size: 0x0009
struct SkinnedMeshComponent_HideBoneByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t PhysBodyOption; // 0x0008 (0x0001)
};

// Function: Engine.SkinnedMeshComponent.GetSocketBoneName
// Size: 0x0010
struct SkinnedMeshComponent_GetSocketBoneName_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.SkinnedMeshComponent.GetParentBone
// Size: 0x0010
struct SkinnedMeshComponent_GetParentBone_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.SkinnedMeshComponent.GetBoneName
// Size: 0x0010
struct SkinnedMeshComponent_GetBoneName_Params {
public:
    int32_t BoneIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.SkinnedMeshComponent.GetBoneIndex
// Size: 0x000C
struct SkinnedMeshComponent_GetBoneIndex_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.SkinnedMeshComponent.BoneIsChildOf
// Size: 0x0011
struct SkinnedMeshComponent_BoneIsChildOf_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    struct FName ParentBoneName; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
// Size: 0x0001
struct SkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params {
public:
    bool bRestoreSimulationSpace; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.Stop
// Size: 0x0000
struct SkeletalMeshComponent_Stop_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.SetSkeletalMeshWithoutResettingAnimation
// Size: 0x0008
struct SkeletalMeshComponent_SetSkeletalMeshWithoutResettingAnimation_Params {
public:
    class UObject* NewMesh; // 0x0000 (0x0008)
};

// Function: Engine.SkeletalMeshComponent.SetPosition
// Size: 0x0005
struct SkeletalMeshComponent_SetPosition_Params {
public:
    float InPos; // 0x0000 (0x0004)
    bool bFireNotifies; // 0x0004 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetPlayRate
// Size: 0x0004
struct SkeletalMeshComponent_SetPlayRate_Params {
public:
    float Rate; // 0x0000 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
// Size: 0x0004
struct SkeletalMeshComponent_SetPhysicsBlendWeight_Params {
public:
    float PhysicsBlendWeight; // 0x0000 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.SetNamedMotorsAngularVelocityDrive
// Size: 0x0019
struct SkeletalMeshComponent_SetNamedMotorsAngularVelocityDrive_Params {
public:
    bool bEnableSwingDrive; // 0x0000 (0x0001)
    bool bEnableTwistDrive; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct TArray<uint8_t> BoneNames; // 0x0008 (0x0010)
    bool bSetOtherBodiesToComplement; // 0x0018 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetNamedMotorsAngularPositionDrive
// Size: 0x0019
struct SkeletalMeshComponent_SetNamedMotorsAngularPositionDrive_Params {
public:
    bool bEnableSwingDrive; // 0x0000 (0x0001)
    bool bEnableTwistDrive; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct TArray<uint8_t> BoneNames; // 0x0008 (0x0010)
    bool bSetOtherBodiesToComplement; // 0x0018 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetMorphTarget
// Size: 0x000D
struct SkeletalMeshComponent_SetMorphTarget_Params {
public:
    struct FName MorphTargetName; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
    bool bRemoveZeroWeight; // 0x000C (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetLook
// Size: 0x0009
struct SkeletalMeshComponent_SetLook_Params {
public:
    class UObject* NewLook; // 0x0000 (0x0008)
    bool bNeedsToWorkWithRagdoll; // 0x0008 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
// Size: 0x0001
struct SkeletalMeshComponent_SetEnablePhysicsBlending_Params {
public:
    bool bNewBlendPhysics; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetDefaultAnimToPlay
// Size: 0x0008
struct SkeletalMeshComponent_SetDefaultAnimToPlay_Params {
public:
    class UObject* NewAnim; // 0x0000 (0x0008)
};

// Function: Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
// Size: 0x0004
struct SkeletalMeshComponent_SetClothMaxDistanceScale_Params {
public:
    float Scale; // 0x0000 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.SetAnimInstanceClass
// Size: 0x0008
struct SkeletalMeshComponent_SetAnimInstanceClass_Params {
public:
    class UClass* NewClass; // 0x0000 (0x0008)
};

// Function: Engine.SkeletalMeshComponent.SetAnimationMode
// Size: 0x0001
struct SkeletalMeshComponent_SetAnimationMode_Params {
public:
    uint8_t InAnimationMode; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAnimation
// Size: 0x0008
struct SkeletalMeshComponent_SetAnimation_Params {
public:
    class UObject* NewAnimToPlay; // 0x0000 (0x0008)
};

// Function: Engine.SkeletalMeshComponent.SetAngularLimits
// Size: 0x0014
struct SkeletalMeshComponent_SetAngularLimits_Params {
public:
    struct FName InBoneName; // 0x0000 (0x0008)
    float Swing1LimitAngle; // 0x0008 (0x0004)
    float TwistLimitAngle; // 0x000C (0x0004)
    float Swing2LimitAngle; // 0x0010 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
// Size: 0x0003
struct SkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params {
public:
    bool bEnableSwingDrive; // 0x0000 (0x0001)
    bool bEnableTwistDrive; // 0x0001 (0x0001)
    bool bSkipCustomPhysicsType; // 0x0002 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
// Size: 0x0003
struct SkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params {
public:
    bool bEnableSwingDrive; // 0x0000 (0x0001)
    bool bEnableTwistDrive; // 0x0001 (0x0001)
    bool bSkipCustomPhysicsType; // 0x0002 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
// Size: 0x000D
struct SkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params {
public:
    float InSpring; // 0x0000 (0x0004)
    float InDamping; // 0x0004 (0x0004)
    float InForceLimit; // 0x0008 (0x0004)
    bool bSkipCustomPhysicsType; // 0x000C (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
// Size: 0x0001
struct SkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params {
public:
    bool bNewSimulate; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
// Size: 0x0005
struct SkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params {
public:
    float PhysicsBlendWeight; // 0x0000 (0x0004)
    bool bSkipCustomPhysicsType; // 0x0004 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
// Size: 0x0009
struct SkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params {
public:
    struct FName InBoneName; // 0x0000 (0x0008)
    bool bNewSimulate; // 0x0008 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
// Size: 0x000D
struct SkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params {
public:
    struct FName InBoneName; // 0x0000 (0x0008)
    float PhysicsBlendWeight; // 0x0008 (0x0004)
    bool bSkipCustomPhysicsType; // 0x000C (0x0001)
};

// Function: Engine.SkeletalMeshComponent.ResetClothTeleportMode
// Size: 0x0000
struct SkeletalMeshComponent_ResetClothTeleportMode_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
// Size: 0x0000
struct SkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.ReleaseAnchoring
// Size: 0x0000
struct SkeletalMeshComponent_ReleaseAnchoring_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.PlayAnimation
// Size: 0x0009
struct SkeletalMeshComponent_PlayAnimation_Params {
public:
    class UObject* NewAnimToPlay; // 0x0000 (0x0008)
    bool bLooping; // 0x0008 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.Play
// Size: 0x0001
struct SkeletalMeshComponent_Play_Params {
public:
    bool bLooping; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.IsPlaying
// Size: 0x0001
struct SkeletalMeshComponent_IsPlaying_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.GetPosition
// Size: 0x0004
struct SkeletalMeshComponent_GetPosition_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.GetPlayRate
// Size: 0x0004
struct SkeletalMeshComponent_GetPlayRate_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.GetMorphTarget
// Size: 0x000C
struct SkeletalMeshComponent_GetMorphTarget_Params {
public:
    struct FName MorphTargetName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.GetCurrentJointAngles
// Size: 0x0014
struct SkeletalMeshComponent_GetCurrentJointAngles_Params {
public:
    struct FName InBoneName; // 0x0000 (0x0008)
    float Swing1Angle; // 0x0008 (0x0004)
    float TwistAngle; // 0x000C (0x0004)
    float Swing2Angle; // 0x0010 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
// Size: 0x0004
struct SkeletalMeshComponent_GetClothMaxDistanceScale_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SkeletalMeshComponent.GetAnimInstance
// Size: 0x0008
struct SkeletalMeshComponent_GetAnimInstance_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.SkeletalMeshComponent.GetAnimationMode
// Size: 0x0001
struct SkeletalMeshComponent_GetAnimationMode_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
// Size: 0x0000
struct SkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
// Size: 0x0000
struct SkeletalMeshComponent_ForceClothNextUpdateTeleport_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.DisableMeshMaterialVariation
// Size: 0x0001
struct SkeletalMeshComponent_DisableMeshMaterialVariation_Params {
public:
    bool bDisable; // 0x0000 (0x0001)
};

// Function: Engine.SkeletalMeshComponent.ClearMorphTargets
// Size: 0x0000
struct SkeletalMeshComponent_ClearMorphTargets_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.BreakConstraint
// Size: 0x0020
struct SkeletalMeshComponent_BreakConstraint_Params {
public:
    uint8_t Impulse[0xC]; // 0x0000 (0x000C)
    uint8_t HitLocation[0xC]; // 0x000C (0x000C)
    struct FName InBoneName; // 0x0018 (0x0008)
};

// Function: Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
// Size: 0x0000
struct SkeletalMeshComponent_BindClothToMasterPoseComponent_Params {
public:
};

// Function: Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
// Size: 0x000D
struct SkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params {
public:
    struct FName InBoneName; // 0x0000 (0x0008)
    float AddPhysicsBlendWeight; // 0x0008 (0x0004)
    bool bSkipCustomPhysicsType; // 0x000C (0x0001)
};

// Function: Engine.GameInstance.ReceiveShutdown
// Size: 0x0000
struct GameInstance_ReceiveShutdown_Params {
public:
};

// Function: Engine.GameInstance.ReceiveInit
// Size: 0x0000
struct GameInstance_ReceiveInit_Params {
public:
};

// Function: Engine.GameInstance.HandleTravelError
// Size: 0x0001
struct GameInstance_HandleTravelError_Params {
public:
    uint8_t FailureType; // 0x0000 (0x0001)
};

// Function: Engine.GameInstance.HandleNetworkError
// Size: 0x0002
struct GameInstance_HandleNetworkError_Params {
public:
    uint8_t FailureType; // 0x0000 (0x0001)
    bool bIsServer; // 0x0001 (0x0001)
};

// Function: Engine.GameInstance.DebugRemovePlayer
// Size: 0x0004
struct GameInstance_DebugRemovePlayer_Params {
public:
    int32_t ControllerId; // 0x0000 (0x0004)
};

// Function: Engine.GameInstance.DebugCreatePlayer
// Size: 0x0004
struct GameInstance_DebugCreatePlayer_Params {
public:
    int32_t ControllerId; // 0x0000 (0x0004)
};

// Function: Engine.GameMode.StartPlay
// Size: 0x0000
struct GameMode_StartPlay_Params {
public:
};

// Function: Engine.GameMode.StartMatch
// Size: 0x0000
struct GameMode_StartMatch_Params {
public:
};

// Function: Engine.GameMode.SpawnDefaultPawnFor
// Size: 0x0018
struct GameMode_SpawnDefaultPawnFor_Params {
public:
    class UObject* NewPlayer; // 0x0000 (0x0008)
    class UObject* StartSpot; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameMode.ShouldReset
// Size: 0x0009
struct GameMode_ShouldReset_Params {
public:
    class UObject* ActorToReset; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.GameMode.SetBandwidthLimit
// Size: 0x0004
struct GameMode_SetBandwidthLimit_Params {
public:
    float AsyncIOBandwidthLimit; // 0x0000 (0x0004)
};

// Function: Engine.GameMode.ReturnToMainMenuHost
// Size: 0x0000
struct GameMode_ReturnToMainMenuHost_Params {
public:
};

// Function: Engine.GameMode.RestartGame
// Size: 0x0000
struct GameMode_RestartGame_Params {
public:
};

// Function: Engine.GameMode.ResetLevel
// Size: 0x0000
struct GameMode_ResetLevel_Params {
public:
};

// Function: Engine.GameMode.ReadyToStartMatch
// Size: 0x0001
struct GameMode_ReadyToStartMatch_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameMode.ReadyToEndMatch
// Size: 0x0001
struct GameMode_ReadyToEndMatch_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameMode.PlayerCanRestart
// Size: 0x0009
struct GameMode_PlayerCanRestart_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.GameMode.MustSpectate
// Size: 0x0009
struct GameMode_MustSpectate_Params {
public:
    class UObject* NewPlayerController; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.GameMode.K2_PostLogin
// Size: 0x0008
struct GameMode_K2_PostLogin_Params {
public:
    class UObject* NewPlayer; // 0x0000 (0x0008)
};

// Function: Engine.GameMode.K2_OnSwapPlayerControllers
// Size: 0x0010
struct GameMode_K2_OnSwapPlayerControllers_Params {
public:
    class UObject* OldPC; // 0x0000 (0x0008)
    class UObject* NewPC; // 0x0008 (0x0008)
};

// Function: Engine.GameMode.K2_OnSetMatchState
// Size: 0x0008
struct GameMode_K2_OnSetMatchState_Params {
public:
    struct FName NewState; // 0x0000 (0x0008)
};

// Function: Engine.GameMode.K2_OnRestartPlayer
// Size: 0x0008
struct GameMode_K2_OnRestartPlayer_Params {
public:
    class UObject* NewPlayer; // 0x0000 (0x0008)
};

// Function: Engine.GameMode.K2_OnLogout
// Size: 0x0008
struct GameMode_K2_OnLogout_Params {
public:
    class UObject* ExitingController; // 0x0000 (0x0008)
};

// Function: Engine.GameMode.K2_OnChangeName
// Size: 0x0019
struct GameMode_K2_OnChangeName_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
    struct FString NewName; // 0x0008 (0x0010)
    bool bNameChange; // 0x0018 (0x0001)
};

// Function: Engine.GameMode.K2_FindPlayerStart
// Size: 0x0010
struct GameMode_K2_FindPlayerStart_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameMode.IsMatchInProgress
// Size: 0x0001
struct GameMode_IsMatchInProgress_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameMode.InitStartSpot
// Size: 0x0010
struct GameMode_InitStartSpot_Params {
public:
    class UObject* StartSpot; // 0x0000 (0x0008)
    class UObject* NewPlayer; // 0x0008 (0x0008)
};

// Function: Engine.GameMode.HasMatchStarted
// Size: 0x0001
struct GameMode_HasMatchStarted_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameMode.HasMatchEnded
// Size: 0x0001
struct GameMode_HasMatchEnded_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameMode.GetNumPlayers
// Size: 0x0004
struct GameMode_GetNumPlayers_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameMode.GetMatchState
// Size: 0x0008
struct GameMode_GetMatchState_Params {
public:
    struct FName ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.GameMode.GetDefaultPawnClassForController
// Size: 0x0010
struct GameMode_GetDefaultPawnClassForController_Params {
public:
    class UObject* InController; // 0x0000 (0x0008)
    class UClass* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameMode.FindPlayerStart
// Size: 0x0020
struct GameMode_FindPlayerStart_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    struct FString IncomingName; // 0x0008 (0x0010)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: Engine.GameMode.EndMatch
// Size: 0x0000
struct GameMode_EndMatch_Params {
public:
};

// Function: Engine.GameMode.ChoosePlayerStart
// Size: 0x0010
struct GameMode_ChoosePlayerStart_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameMode.ChangeName
// Size: 0x0019
struct GameMode_ChangeName_Params {
public:
    class UObject* Controller; // 0x0000 (0x0008)
    struct FString NewName; // 0x0008 (0x0010)
    bool bNameChange; // 0x0018 (0x0001)
};

// Function: Engine.GameMode.CanSpectate
// Size: 0x0011
struct GameMode_CanSpectate_Params {
public:
    class UObject* Viewer; // 0x0000 (0x0008)
    class UObject* ViewTarget; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.GameMode.AbortMatch
// Size: 0x0000
struct GameMode_AbortMatch_Params {
public:
};

// Function: Engine.LightComponentBase.SetCastShadows
// Size: 0x0001
struct LightComponentBase_SetCastShadows_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponentBase.GetLightColor
// Size: 0x0010
struct LightComponentBase_GetLightColor_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.LightComponent.SetUseTemperature
// Size: 0x0001
struct LightComponent_SetUseTemperature_Params {
public:
    bool bNewUseTemperature; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.SetTemperature
// Size: 0x0004
struct LightComponent_SetTemperature_Params {
public:
    float NewTemperature; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetScaleToDirectionalLighting
// Size: 0x0001
struct LightComponent_SetScaleToDirectionalLighting_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.SetScaleToAmbientLighting
// Size: 0x0001
struct LightComponent_SetScaleToAmbientLighting_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.SetProjectionTexture
// Size: 0x0008
struct LightComponent_SetProjectionTexture_Params {
public:
    class UObject* NewValue; // 0x0000 (0x0008)
};

// Function: Engine.LightComponent.SetLightFunctionScale
// Size: 0x000C
struct LightComponent_SetLightFunctionScale_Params {
public:
    uint8_t NewLightFunctionScale[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.LightComponent.SetLightFunctionMaterial
// Size: 0x0008
struct LightComponent_SetLightFunctionMaterial_Params {
public:
    class UObject* NewLightFunctionMaterial; // 0x0000 (0x0008)
};

// Function: Engine.LightComponent.SetLightFunctionFadeDistance
// Size: 0x0004
struct LightComponent_SetLightFunctionFadeDistance_Params {
public:
    float NewLightFunctionFadeDistance; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetLightFunctionDisabledBrightness
// Size: 0x0004
struct LightComponent_SetLightFunctionDisabledBrightness_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetLightColor
// Size: 0x0011
struct LightComponent_SetLightColor_Params {
public:
    uint8_t NewLightColor[0x10]; // 0x0000 (0x0010)
    bool bSRGB; // 0x0010 (0x0001)
};

// Function: Engine.LightComponent.SetIntensity
// Size: 0x0004
struct LightComponent_SetIntensity_Params {
public:
    float NewIntensity; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetIndirectLightingIntensity
// Size: 0x0004
struct LightComponent_SetIndirectLightingIntensity_Params {
public:
    float NewIntensity; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetIESTexture
// Size: 0x0008
struct LightComponent_SetIESTexture_Params {
public:
    class UObject* NewValue; // 0x0000 (0x0008)
};

// Function: Engine.LightComponent.SetEnableLightShaftBloom
// Size: 0x0001
struct LightComponent_SetEnableLightShaftBloom_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.SetCinematicLightInfulence
// Size: 0x0001
struct LightComponent_SetCinematicLightInfulence_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.SetBloomTint
// Size: 0x0004
struct LightComponent_SetBloomTint_Params {
public:
    uint8_t NewValue[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetBloomThreshold
// Size: 0x0004
struct LightComponent_SetBloomThreshold_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetBloomScale
// Size: 0x0004
struct LightComponent_SetBloomScale_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.LightComponent.SetBendShadowFilterCategory
// Size: 0x0002
struct LightComponent_SetBendShadowFilterCategory_Params {
public:
    uint8_t NewCategory; // 0x0000 (0x0001)
    bool FilteringEnabled; // 0x0001 (0x0001)
};

// Function: Engine.LightComponent.SetAffectTranslucentLighting
// Size: 0x0001
struct LightComponent_SetAffectTranslucentLighting_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.SetAffectDynamicIndirectLighting
// Size: 0x0001
struct LightComponent_SetAffectDynamicIndirectLighting_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.LightComponent.RemoveCinematicLightInfulence
// Size: 0x0008
struct LightComponent_RemoveCinematicLightInfulence_Params {
public:
    class UObject* InActor; // 0x0000 (0x0008)
};

// Function: Engine.LightComponent.ClearBendShadowFilterCategories
// Size: 0x0000
struct LightComponent_ClearBendShadowFilterCategories_Params {
public:
};

// Function: Engine.LightComponent.AddCinematicLightInfulence
// Size: 0x0008
struct LightComponent_AddCinematicLightInfulence_Params {
public:
    class UObject* InActor; // 0x0000 (0x0008)
};

// Function: Engine.LightComponent.AddBendShadowFilterCategory
// Size: 0x0001
struct LightComponent_AddBendShadowFilterCategory_Params {
public:
    uint8_t NewCategory; // 0x0000 (0x0001)
};

// Function: Engine.PointLightComponent.SetSourceRadius
// Size: 0x0004
struct PointLightComponent_SetSourceRadius_Params {
public:
    float bNewValue; // 0x0000 (0x0004)
};

// Function: Engine.PointLightComponent.SetSourceLength
// Size: 0x0004
struct PointLightComponent_SetSourceLength_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.PointLightComponent.SetLightFalloffExponent
// Size: 0x0004
struct PointLightComponent_SetLightFalloffExponent_Params {
public:
    float NewLightFalloffExponent; // 0x0000 (0x0004)
};

// Function: Engine.PointLightComponent.SetAttenuationRadius
// Size: 0x0004
struct PointLightComponent_SetAttenuationRadius_Params {
public:
    float NewRadius; // 0x0000 (0x0004)
};

// Function: Engine.SpotLightComponent.SetTranslucentInjectionTransisionDistance
// Size: 0x0004
struct SpotLightComponent_SetTranslucentInjectionTransisionDistance_Params {
public:
    float NewTranslucentInjectionTransisionDistance; // 0x0000 (0x0004)
};

// Function: Engine.SpotLightComponent.SetTranslucentInjectionMaxIntensity
// Size: 0x0004
struct SpotLightComponent_SetTranslucentInjectionMaxIntensity_Params {
public:
    float NewTranslucentInjectionMaxIntensity; // 0x0000 (0x0004)
};

// Function: Engine.SpotLightComponent.SetOuterConeAngle
// Size: 0x0004
struct SpotLightComponent_SetOuterConeAngle_Params {
public:
    float NewOuterConeAngle; // 0x0000 (0x0004)
};

// Function: Engine.SpotLightComponent.SetNearClipRatio
// Size: 0x0004
struct SpotLightComponent_SetNearClipRatio_Params {
public:
    float NewNearClipRatio; // 0x0000 (0x0004)
};

// Function: Engine.SpotLightComponent.SetInnerConeAngle
// Size: 0x0004
struct SpotLightComponent_SetInnerConeAngle_Params {
public:
    float NewInnerConeAngle; // 0x0000 (0x0004)
};

// Function: Engine.GameState.OnRep_SpectatorClass
// Size: 0x0000
struct GameState_OnRep_SpectatorClass_Params {
public:
};

// Function: Engine.GameState.OnRep_ReplicatedWorldTimeSeconds
// Size: 0x0000
struct GameState_OnRep_ReplicatedWorldTimeSeconds_Params {
public:
};

// Function: Engine.GameState.OnRep_MatchState
// Size: 0x0000
struct GameState_OnRep_MatchState_Params {
public:
};

// Function: Engine.GameState.OnRep_GameModeClass
// Size: 0x0000
struct GameState_OnRep_GameModeClass_Params {
public:
};

// Function: Engine.GameState.OnRep_ElapsedTime
// Size: 0x0000
struct GameState_OnRep_ElapsedTime_Params {
public:
};

// Function: Engine.GameState.GetServerWorldTimeSeconds
// Size: 0x0004
struct GameState_GetServerWorldTimeSeconds_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.NavigationSystem.UnregisterNavigationInvoker
// Size: 0x0008
struct NavigationSystem_UnregisterNavigationInvoker_Params {
public:
    class UObject* Invoker; // 0x0000 (0x0008)
};

// Function: Engine.NavigationSystem.SimpleMoveToLocation
// Size: 0x0014
struct NavigationSystem_SimpleMoveToLocation_Params {
public:
    class UObject* Controller; // 0x0000 (0x0008)
    uint8_t Goal[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.NavigationSystem.SimpleMoveToActor
// Size: 0x0010
struct NavigationSystem_SimpleMoveToActor_Params {
public:
    class UObject* Controller; // 0x0000 (0x0008)
    class UObject* Goal; // 0x0008 (0x0008)
};

// Function: Engine.NavigationSystem.SetMaxSimultaneousTileGenerationJobsCount
// Size: 0x0004
struct NavigationSystem_SetMaxSimultaneousTileGenerationJobsCount_Params {
public:
    int32_t MaxNumberOfJobs; // 0x0000 (0x0004)
};

// Function: Engine.NavigationSystem.SetGeometryGatheringMode
// Size: 0x0001
struct NavigationSystem_SetGeometryGatheringMode_Params {
public:
    uint8_t NewMode; // 0x0000 (0x0001)
};

// Function: Engine.NavigationSystem.ResetMaxSimultaneousTileGenerationJobsCount
// Size: 0x0000
struct NavigationSystem_ResetMaxSimultaneousTileGenerationJobsCount_Params {
public:
};

// Function: Engine.NavigationSystem.RegisterNavigationInvoker
// Size: 0x0010
struct NavigationSystem_RegisterNavigationInvoker_Params {
public:
    class UObject* Invoker; // 0x0000 (0x0008)
    float TileGenerationRadius; // 0x0008 (0x0004)
    float TileRemovalRadius; // 0x000C (0x0004)
};

// Function: Engine.NavigationSystem.ProjectPointToNavigation
// Size: 0x0040
struct NavigationSystem_ProjectPointToNavigation_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t Point[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UObject* NavData; // 0x0018 (0x0008)
    class UClass* FilterClass; // 0x0020 (0x0008)
    uint8_t QueryExtent[0xC]; // 0x0028 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0034 (0x000C)
};

// Function: Engine.NavigationSystem.OnNavigationBoundsUpdated
// Size: 0x0008
struct NavigationSystem_OnNavigationBoundsUpdated_Params {
public:
    class UObject* NavVolume; // 0x0000 (0x0008)
};

// Function: Engine.NavigationSystem.NavigationRaycast
// Size: 0x0041
struct NavigationSystem_NavigationRaycast_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t RayStart[0xC]; // 0x0008 (0x000C)
    uint8_t RayEnd[0xC]; // 0x0014 (0x000C)
    uint8_t HitLocation[0xC]; // 0x0020 (0x000C)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    class UClass* FilterClass; // 0x0030 (0x0008)
    class UObject* Querier; // 0x0038 (0x0008)
    bool ReturnValue; // 0x0040 (0x0001)
};

// Function: Engine.NavigationSystem.IsNavigationBeingBuilt
// Size: 0x0009
struct NavigationSystem_IsNavigationBeingBuilt_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.NavigationSystem.GetRandomReachablePointInRadius
// Size: 0x0034
struct NavigationSystem_GetRandomReachablePointInRadius_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    class UObject* NavData; // 0x0018 (0x0008)
    class UClass* FilterClass; // 0x0020 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0028 (0x000C)
};

// Function: Engine.NavigationSystem.GetRandomPointInRadius
// Size: 0x0034
struct NavigationSystem_GetRandomPointInRadius_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    class UObject* NavData; // 0x0018 (0x0008)
    class UClass* FilterClass; // 0x0020 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0028 (0x000C)
};

// Function: Engine.NavigationSystem.GetRandomPointInNavigableRadius
// Size: 0x0034
struct NavigationSystem_GetRandomPointInNavigableRadius_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    class UObject* NavData; // 0x0018 (0x0008)
    class UClass* FilterClass; // 0x0020 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0028 (0x000C)
};

// Function: Engine.NavigationSystem.GetRandomPoint
// Size: 0x0024
struct NavigationSystem_GetRandomPoint_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    class UObject* NavData; // 0x0008 (0x0008)
    class UClass* FilterClass; // 0x0010 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.NavigationSystem.GetPathLength
// Size: 0x0039
struct NavigationSystem_GetPathLength_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t PathStart[0xC]; // 0x0008 (0x000C)
    uint8_t PathEnd[0xC]; // 0x0014 (0x000C)
    float PathLength; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    class UObject* NavData; // 0x0028 (0x0008)
    class UClass* FilterClass; // 0x0030 (0x0008)
    uint8_t ReturnValue; // 0x0038 (0x0001)
};

// Function: Engine.NavigationSystem.GetPathCost
// Size: 0x0039
struct NavigationSystem_GetPathCost_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t PathStart[0xC]; // 0x0008 (0x000C)
    uint8_t PathEnd[0xC]; // 0x0014 (0x000C)
    float PathCost; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    class UObject* NavData; // 0x0028 (0x0008)
    class UClass* FilterClass; // 0x0030 (0x0008)
    uint8_t ReturnValue; // 0x0038 (0x0001)
};

// Function: Engine.NavigationSystem.GetNavigationSystem
// Size: 0x0010
struct NavigationSystem_GetNavigationSystem_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.NavigationSystem.FindPathToLocationSynchronously
// Size: 0x0038
struct NavigationSystem_FindPathToLocationSynchronously_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t PathStart[0xC]; // 0x0008 (0x000C)
    uint8_t PathEnd[0xC]; // 0x0014 (0x000C)
    class UObject* PathfindingContext; // 0x0020 (0x0008)
    class UClass* FilterClass; // 0x0028 (0x0008)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: Engine.NavigationSystem.FindPathToActorSynchronously
// Size: 0x0040
struct NavigationSystem_FindPathToActorSynchronously_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    uint8_t PathStart[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UObject* GoalActor; // 0x0018 (0x0008)
    float TetherDistance; // 0x0020 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0024 (0x0004)
    class UObject* PathfindingContext; // 0x0028 (0x0008)
    class UClass* FilterClass; // 0x0030 (0x0008)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: Engine.NavRelevantComponent.SetNavigationRelevancy
// Size: 0x0001
struct NavRelevantComponent_SetNavigationRelevancy_Params {
public:
    bool bRelevant; // 0x0000 (0x0001)
};

// Function: Engine.PlayerState.OnRep_UniqueId
// Size: 0x0000
struct PlayerState_OnRep_UniqueId_Params {
public:
};

// Function: Engine.PlayerState.OnRep_Score
// Size: 0x0000
struct PlayerState_OnRep_Score_Params {
public:
};

// Function: Engine.PlayerState.OnRep_PlayerName
// Size: 0x0000
struct PlayerState_OnRep_PlayerName_Params {
public:
};

// Function: Engine.PlayerState.OnRep_bIsInactive
// Size: 0x0000
struct PlayerState_OnRep_bIsInactive_Params {
public:
};

// Function: Engine.ProjectileMovementComponent.StopSimulating
// Size: 0x0088
struct ProjectileMovementComponent_StopSimulating_Params {
public:
    uint8_t HitResult[0x88]; // 0x0000 (0x0088)
};

// Function: Engine.ProjectileMovementComponent.SetVelocityInLocalSpace
// Size: 0x000C
struct ProjectileMovementComponent_SetVelocityInLocalSpace_Params {
public:
    uint8_t NewVelocity[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature
// Size: 0x0088
struct ProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
};

// Function: Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature
// Size: 0x0094
struct ProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
    uint8_t ImpactVelocity[0xC]; // 0x0088 (0x000C)
};

// Function: Engine.ProjectileMovementComponent.LimitVelocity
// Size: 0x0018
struct ProjectileMovementComponent_LimitVelocity_Params {
public:
    uint8_t NewVelocity[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.VehicleWheel.GetSuspensionOffset
// Size: 0x0004
struct VehicleWheel_GetSuspensionOffset_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.VehicleWheel.GetSteerAngle
// Size: 0x0004
struct VehicleWheel_GetSteerAngle_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.VehicleWheel.GetRotationAngle
// Size: 0x0004
struct VehicleWheel_GetRotationAngle_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.SetCapsuleSize
// Size: 0x0009
struct CapsuleComponent_SetCapsuleSize_Params {
public:
    float InRadius; // 0x0000 (0x0004)
    float InHalfHeight; // 0x0004 (0x0004)
    bool bUpdateOverlaps; // 0x0008 (0x0001)
};

// Function: Engine.CapsuleComponent.SetCapsuleRadius
// Size: 0x0005
struct CapsuleComponent_SetCapsuleRadius_Params {
public:
    float Radius; // 0x0000 (0x0004)
    bool bUpdateOverlaps; // 0x0004 (0x0001)
};

// Function: Engine.CapsuleComponent.SetCapsuleHalfHeight
// Size: 0x0005
struct CapsuleComponent_SetCapsuleHalfHeight_Params {
public:
    float HalfHeight; // 0x0000 (0x0004)
    bool bUpdateOverlaps; // 0x0004 (0x0001)
};

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere
// Size: 0x0008
struct CapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Params {
public:
    float OutRadius; // 0x0000 (0x0004)
    float OutHalfHeightWithoutHemisphere; // 0x0004 (0x0004)
};

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleSize
// Size: 0x0008
struct CapsuleComponent_GetUnscaledCapsuleSize_Params {
public:
    float OutRadius; // 0x0000 (0x0004)
    float OutHalfHeight; // 0x0004 (0x0004)
};

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleRadius
// Size: 0x0004
struct CapsuleComponent_GetUnscaledCapsuleRadius_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere
// Size: 0x0004
struct CapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight
// Size: 0x0004
struct CapsuleComponent_GetUnscaledCapsuleHalfHeight_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.GetShapeScale
// Size: 0x0004
struct CapsuleComponent_GetShapeScale_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere
// Size: 0x0008
struct CapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Params {
public:
    float OutRadius; // 0x0000 (0x0004)
    float OutHalfHeightWithoutHemisphere; // 0x0004 (0x0004)
};

// Function: Engine.CapsuleComponent.GetScaledCapsuleSize
// Size: 0x0008
struct CapsuleComponent_GetScaledCapsuleSize_Params {
public:
    float OutRadius; // 0x0000 (0x0004)
    float OutHalfHeight; // 0x0004 (0x0004)
};

// Function: Engine.CapsuleComponent.GetScaledCapsuleRadius
// Size: 0x0004
struct CapsuleComponent_GetScaledCapsuleRadius_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere
// Size: 0x0004
struct CapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CapsuleComponent.GetScaledCapsuleHalfHeight
// Size: 0x0004
struct CapsuleComponent_GetScaledCapsuleHalfHeight_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.WorldSettings.OnRep_WorldGravityZ
// Size: 0x0000
struct WorldSettings_OnRep_WorldGravityZ_Params {
public:
};

// Function: Engine.BendMaterialBillboardComponent.SetYSize
// Size: 0x0004
struct BendMaterialBillboardComponent_SetYSize_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.BendMaterialBillboardComponent.SetXSize
// Size: 0x0004
struct BendMaterialBillboardComponent_SetXSize_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.BendMaterialBillboardComponent.SetScreenScale
// Size: 0x0004
struct BendMaterialBillboardComponent_SetScreenScale_Params {
public:
    float InScale; // 0x0000 (0x0004)
};

// Function: Engine.BendMaterialBillboardComponent.SetBillboardMaterial
// Size: 0x0008
struct BendMaterialBillboardComponent_SetBillboardMaterial_Params {
public:
    class UObject* InMaterial; // 0x0000 (0x0008)
};

// Function: Engine.BendMaterialBillboardComponent.GetBillboardMaterial
// Size: 0x0008
struct BendMaterialBillboardComponent_GetBillboardMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.InstancedStaticMeshComponent.UpdateInstanceTransform
// Size: 0x0043
struct InstancedStaticMeshComponent_UpdateInstanceTransform_Params {
public:
    int32_t InstanceIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0004 (0x000C)
    uint8_t NewInstanceTransform[0x30]; // 0x0010 (0x0030)
    bool bWorldSpace; // 0x0040 (0x0001)
    bool bMarkRenderStateDirty; // 0x0041 (0x0001)
    bool ReturnValue; // 0x0042 (0x0001)
};

// Function: Engine.InstancedStaticMeshComponent.SetCullDistances
// Size: 0x0008
struct InstancedStaticMeshComponent_SetCullDistances_Params {
public:
    int32_t StartCullDistance; // 0x0000 (0x0004)
    int32_t EndCullDistance; // 0x0004 (0x0004)
};

// Function: Engine.InstancedStaticMeshComponent.RemoveInstance
// Size: 0x0005
struct InstancedStaticMeshComponent_RemoveInstance_Params {
public:
    int32_t InstanceIndex; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.InstancedStaticMeshComponent.GetInstanceTransform
// Size: 0x0042
struct InstancedStaticMeshComponent_GetInstanceTransform_Params {
public:
    int32_t InstanceIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0004 (0x000C)
    uint8_t OutInstanceTransform[0x30]; // 0x0010 (0x0030)
    bool bWorldSpace; // 0x0040 (0x0001)
    bool ReturnValue; // 0x0041 (0x0001)
};

// Function: Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere
// Size: 0x0028
struct InstancedStaticMeshComponent_GetInstancesOverlappingSphere_Params {
public:
    uint8_t Center[0xC]; // 0x0000 (0x000C)
    float Radius; // 0x000C (0x0004)
    bool bSphereInWorldSpace; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    struct TArray<uint8_t> ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.InstancedStaticMeshComponent.GetInstanceCount
// Size: 0x0004
struct InstancedStaticMeshComponent_GetInstanceCount_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.InstancedStaticMeshComponent.ClearInstances
// Size: 0x0000
struct InstancedStaticMeshComponent_ClearInstances_Params {
public:
};

// Function: Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace
// Size: 0x0034
struct InstancedStaticMeshComponent_AddInstanceWorldSpace_Params {
public:
    uint8_t WorldTransform[0x30]; // 0x0000 (0x0030)
    int32_t ReturnValue; // 0x0030 (0x0004)
};

// Function: Engine.InstancedStaticMeshComponent.AddInstance
// Size: 0x0034
struct InstancedStaticMeshComponent_AddInstance_Params {
public:
    uint8_t InstanceTransform[0x30]; // 0x0000 (0x0030)
    int32_t ReturnValue; // 0x0030 (0x0004)
};

// Function: Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances
// Size: 0x0011
struct HierarchicalInstancedStaticMeshComponent_RemoveInstances_Params {
public:
    struct TArray<uint8_t> InstancesToRemove; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.MaterialInterface.GetPhysicalMaterial
// Size: 0x0008
struct MaterialInterface_GetPhysicalMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.MaterialInterface.GetBaseMaterial
// Size: 0x0008
struct MaterialInterface_GetBaseMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.GameplayDebuggerHelper.PrintDebugString
// Size: 0x0010
struct GameplayDebuggerHelper_PrintDebugString_Params {
public:
    struct FString InString; // 0x0000 (0x0010)
};

// Function: Engine.GameplayDebuggerBaseObject.ServerRequestPacket
// Size: 0x0004
struct GameplayDebuggerBaseObject_ServerRequestPacket_Params {
public:
    int32_t Offset; // 0x0000 (0x0004)
};

// Function: Engine.GameplayDebuggerBaseObject.OnRep_ReplicatedBlob
// Size: 0x0000
struct GameplayDebuggerBaseObject_OnRep_ReplicatedBlob_Params {
public:
};

// Function: Engine.GameplayDebuggerBaseObject.OnRep_GenericShapeElements
// Size: 0x0000
struct GameplayDebuggerBaseObject_OnRep_GenericShapeElements_Params {
public:
};

// Function: Engine.GameplayDebuggerBaseObject.CollectDataToReplicateOnServer
// Size: 0x0010
struct GameplayDebuggerBaseObject_CollectDataToReplicateOnServer_Params {
public:
    class UObject* MyPC; // 0x0000 (0x0008)
    class UObject* SelectedActor; // 0x0008 (0x0008)
};

// Function: Engine.AmbientSound.Stop
// Size: 0x0000
struct AmbientSound_Stop_Params {
public:
};

// Function: Engine.AmbientSound.Play
// Size: 0x0004
struct AmbientSound_Play_Params {
public:
    float StartTime; // 0x0000 (0x0004)
};

// Function: Engine.AmbientSound.FadeOut
// Size: 0x0008
struct AmbientSound_FadeOut_Params {
public:
    float FadeOutDuration; // 0x0000 (0x0004)
    float FadeVolumeLevel; // 0x0004 (0x0004)
};

// Function: Engine.AmbientSound.FadeIn
// Size: 0x0008
struct AmbientSound_FadeIn_Params {
public:
    float FadeInDuration; // 0x0000 (0x0004)
    float FadeVolumeLevel; // 0x0004 (0x0004)
};

// Function: Engine.AmbientSound.AdjustVolume
// Size: 0x0008
struct AmbientSound_AdjustVolume_Params {
public:
    float AdjustVolumeDuration; // 0x0000 (0x0004)
    float AdjustVolumeLevel; // 0x0004 (0x0004)
};

// Function: Engine.SplineMeshComponent.UpdateMesh
// Size: 0x0000
struct SplineMeshComponent_UpdateMesh_Params {
public:
};

// Function: Engine.SplineMeshComponent.SetStartTangent
// Size: 0x000D
struct SplineMeshComponent_SetStartTangent_Params {
public:
    uint8_t StartTangent[0xC]; // 0x0000 (0x000C)
    bool bUpdateMesh; // 0x000C (0x0001)
};

// Function: Engine.SplineMeshComponent.SetStartScale
// Size: 0x0009
struct SplineMeshComponent_SetStartScale_Params {
public:
    uint8_t StartScale[0x8]; // 0x0000 (0x0008)
    bool bUpdateMesh; // 0x0008 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetStartRoll
// Size: 0x0005
struct SplineMeshComponent_SetStartRoll_Params {
public:
    float StartRoll; // 0x0000 (0x0004)
    bool bUpdateMesh; // 0x0004 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetStartPosition
// Size: 0x000D
struct SplineMeshComponent_SetStartPosition_Params {
public:
    uint8_t StartPos[0xC]; // 0x0000 (0x000C)
    bool bUpdateMesh; // 0x000C (0x0001)
};

// Function: Engine.SplineMeshComponent.SetStartOffset
// Size: 0x0009
struct SplineMeshComponent_SetStartOffset_Params {
public:
    uint8_t StartOffset[0x8]; // 0x0000 (0x0008)
    bool bUpdateMesh; // 0x0008 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetStartAndEnd
// Size: 0x0031
struct SplineMeshComponent_SetStartAndEnd_Params {
public:
    uint8_t StartPos[0xC]; // 0x0000 (0x000C)
    uint8_t StartTangent[0xC]; // 0x000C (0x000C)
    uint8_t EndPos[0xC]; // 0x0018 (0x000C)
    uint8_t EndTangent[0xC]; // 0x0024 (0x000C)
    bool bUpdateMesh; // 0x0030 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetSplineUpDir
// Size: 0x000D
struct SplineMeshComponent_SetSplineUpDir_Params {
public:
    uint8_t InSplineUpDir[0xC]; // 0x0000 (0x000C)
    bool bUpdateMesh; // 0x000C (0x0001)
};

// Function: Engine.SplineMeshComponent.SetForwardAxis
// Size: 0x0002
struct SplineMeshComponent_SetForwardAxis_Params {
public:
    uint8_t InForwardAxis; // 0x0000 (0x0001)
    bool bUpdateMesh; // 0x0001 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetEndTangent
// Size: 0x000D
struct SplineMeshComponent_SetEndTangent_Params {
public:
    uint8_t EndTangent[0xC]; // 0x0000 (0x000C)
    bool bUpdateMesh; // 0x000C (0x0001)
};

// Function: Engine.SplineMeshComponent.SetEndScale
// Size: 0x0009
struct SplineMeshComponent_SetEndScale_Params {
public:
    uint8_t EndScale[0x8]; // 0x0000 (0x0008)
    bool bUpdateMesh; // 0x0008 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetEndRoll
// Size: 0x0005
struct SplineMeshComponent_SetEndRoll_Params {
public:
    float EndRoll; // 0x0000 (0x0004)
    bool bUpdateMesh; // 0x0004 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetEndPosition
// Size: 0x000D
struct SplineMeshComponent_SetEndPosition_Params {
public:
    uint8_t EndPos[0xC]; // 0x0000 (0x000C)
    bool bUpdateMesh; // 0x000C (0x0001)
};

// Function: Engine.SplineMeshComponent.SetEndOffset
// Size: 0x0009
struct SplineMeshComponent_SetEndOffset_Params {
public:
    uint8_t EndOffset[0x8]; // 0x0000 (0x0008)
    bool bUpdateMesh; // 0x0008 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetBoundaryMin
// Size: 0x0005
struct SplineMeshComponent_SetBoundaryMin_Params {
public:
    float InBoundaryMin; // 0x0000 (0x0004)
    bool bUpdateMesh; // 0x0004 (0x0001)
};

// Function: Engine.SplineMeshComponent.SetBoundaryMax
// Size: 0x0005
struct SplineMeshComponent_SetBoundaryMax_Params {
public:
    float InBoundaryMax; // 0x0000 (0x0004)
    bool bUpdateMesh; // 0x0004 (0x0001)
};

// Function: Engine.SplineMeshComponent.GetStartTangent
// Size: 0x000C
struct SplineMeshComponent_GetStartTangent_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SplineMeshComponent.GetStartScale
// Size: 0x0008
struct SplineMeshComponent_GetStartScale_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.SplineMeshComponent.GetStartRoll
// Size: 0x0004
struct SplineMeshComponent_GetStartRoll_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SplineMeshComponent.GetStartPosition
// Size: 0x000C
struct SplineMeshComponent_GetStartPosition_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SplineMeshComponent.GetStartOffset
// Size: 0x0008
struct SplineMeshComponent_GetStartOffset_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.SplineMeshComponent.GetSplineUpDir
// Size: 0x000C
struct SplineMeshComponent_GetSplineUpDir_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SplineMeshComponent.GetForwardAxis
// Size: 0x0001
struct SplineMeshComponent_GetForwardAxis_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.SplineMeshComponent.GetEndTangent
// Size: 0x000C
struct SplineMeshComponent_GetEndTangent_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SplineMeshComponent.GetEndScale
// Size: 0x0008
struct SplineMeshComponent_GetEndScale_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.SplineMeshComponent.GetEndRoll
// Size: 0x0004
struct SplineMeshComponent_GetEndRoll_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SplineMeshComponent.GetEndPosition
// Size: 0x000C
struct SplineMeshComponent_GetEndPosition_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SplineMeshComponent.GetEndOffset
// Size: 0x0008
struct SplineMeshComponent_GetEndOffset_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.SplineMeshComponent.GetBoundaryMin
// Size: 0x0004
struct SplineMeshComponent_GetBoundaryMin_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SplineMeshComponent.GetBoundaryMax
// Size: 0x0004
struct SplineMeshComponent_GetBoundaryMax_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.BendAnimAnchorActor.GetAnimAnchorComponent
// Size: 0x0008
struct BendAnimAnchorActor_GetAnimAnchorComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.BendEyeReflectionLight.SetActorHiddenInGame
// Size: 0x0001
struct BendEyeReflectionLight_SetActorHiddenInGame_Params {
public:
    bool bNewHidden; // 0x0000 (0x0001)
};

// Function: Engine.BendFogVolumeComponent.SetThickness
// Size: 0x0004
struct BendFogVolumeComponent_SetThickness_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.BendFogVolumeComponent.SetShape
// Size: 0x0001
struct BendFogVolumeComponent_SetShape_Params {
public:
    uint8_t Value; // 0x0000 (0x0001)
};

// Function: Engine.BendFogVolumeComponent.SetEnabled
// Size: 0x0001
struct BendFogVolumeComponent_SetEnabled_Params {
public:
    bool Value; // 0x0000 (0x0001)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearZLimit
// Size: 0x0008
struct PhysicsConstraintComponent_SetLinearZLimit_Params {
public:
    uint8_t ConstraintType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float LimitSize; // 0x0004 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearYLimit
// Size: 0x0008
struct PhysicsConstraintComponent_SetLinearYLimit_Params {
public:
    uint8_t ConstraintType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float LimitSize; // 0x0004 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearXLimit
// Size: 0x0008
struct PhysicsConstraintComponent_SetLinearXLimit_Params {
public:
    uint8_t ConstraintType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float LimitSize; // 0x0004 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearVelocityTarget
// Size: 0x000C
struct PhysicsConstraintComponent_SetLinearVelocityTarget_Params {
public:
    uint8_t InVelTarget[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearVelocityDrive
// Size: 0x0003
struct PhysicsConstraintComponent_SetLinearVelocityDrive_Params {
public:
    bool bEnableDriveX; // 0x0000 (0x0001)
    bool bEnableDriveY; // 0x0001 (0x0001)
    bool bEnableDriveZ; // 0x0002 (0x0001)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearPositionTarget
// Size: 0x000C
struct PhysicsConstraintComponent_SetLinearPositionTarget_Params {
public:
    uint8_t InPosTarget[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearPositionDrive
// Size: 0x0003
struct PhysicsConstraintComponent_SetLinearPositionDrive_Params {
public:
    bool bEnableDriveX; // 0x0000 (0x0001)
    bool bEnableDriveY; // 0x0001 (0x0001)
    bool bEnableDriveZ; // 0x0002 (0x0001)
};

// Function: Engine.PhysicsConstraintComponent.SetLinearDriveParams
// Size: 0x000C
struct PhysicsConstraintComponent_SetLinearDriveParams_Params {
public:
    float InSpring; // 0x0000 (0x0004)
    float InDamping; // 0x0004 (0x0004)
    float InForceLimit; // 0x0008 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetDisableCollision
// Size: 0x0001
struct PhysicsConstraintComponent_SetDisableCollision_Params {
public:
    bool bDisableCollision; // 0x0000 (0x0001)
};

// Function: Engine.PhysicsConstraintComponent.SetConstraintReferencePosition
// Size: 0x0010
struct PhysicsConstraintComponent_SetConstraintReferencePosition_Params {
public:
    uint8_t Frame; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t RefPosition[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation
// Size: 0x001C
struct PhysicsConstraintComponent_SetConstraintReferenceOrientation_Params {
public:
    uint8_t Frame; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t PriAxis[0xC]; // 0x0004 (0x000C)
    uint8_t SecAxis[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame
// Size: 0x0040
struct PhysicsConstraintComponent_SetConstraintReferenceFrame_Params {
public:
    uint8_t Frame; // 0x0000 (0x0001)
    uint8_t Pad_0[0xF]; // 0x0001 (0x000F)
    uint8_t RefFrame[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.PhysicsConstraintComponent.SetConstrainedComponents
// Size: 0x0020
struct PhysicsConstraintComponent_SetConstrainedComponents_Params {
public:
    class UObject* Component1; // 0x0000 (0x0008)
    struct FName BoneName1; // 0x0008 (0x0008)
    class UObject* Component2; // 0x0010 (0x0008)
    struct FName BoneName2; // 0x0018 (0x0008)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularVelocityTarget
// Size: 0x000C
struct PhysicsConstraintComponent_SetAngularVelocityTarget_Params {
public:
    uint8_t InVelTarget[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularVelocityDrive
// Size: 0x0002
struct PhysicsConstraintComponent_SetAngularVelocityDrive_Params {
public:
    bool bEnableSwingDrive; // 0x0000 (0x0001)
    bool bEnableTwistDrive; // 0x0001 (0x0001)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularTwistLimit
// Size: 0x0008
struct PhysicsConstraintComponent_SetAngularTwistLimit_Params {
public:
    uint8_t ConstraintType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float TwistLimitAngle; // 0x0004 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularSwing2Limit
// Size: 0x0008
struct PhysicsConstraintComponent_SetAngularSwing2Limit_Params {
public:
    uint8_t MotionType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Swing2LimitAngle; // 0x0004 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularSwing1Limit
// Size: 0x0008
struct PhysicsConstraintComponent_SetAngularSwing1Limit_Params {
public:
    uint8_t MotionType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Swing1LimitAngle; // 0x0004 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularOrientationTarget
// Size: 0x000C
struct PhysicsConstraintComponent_SetAngularOrientationTarget_Params {
public:
    uint8_t InPosTarget[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularOrientationDrive
// Size: 0x0002
struct PhysicsConstraintComponent_SetAngularOrientationDrive_Params {
public:
    bool bEnableSwingDrive; // 0x0000 (0x0001)
    bool bEnableTwistDrive; // 0x0001 (0x0001)
};

// Function: Engine.PhysicsConstraintComponent.SetAngularDriveParams
// Size: 0x000C
struct PhysicsConstraintComponent_SetAngularDriveParams_Params {
public:
    float InSpring; // 0x0000 (0x0004)
    float InDamping; // 0x0004 (0x0004)
    float InForceLimit; // 0x0008 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.GetCurrentTwist
// Size: 0x0004
struct PhysicsConstraintComponent_GetCurrentTwist_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.GetCurrentSwing2
// Size: 0x0004
struct PhysicsConstraintComponent_GetCurrentSwing2_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.GetCurrentSwing1
// Size: 0x0004
struct PhysicsConstraintComponent_GetCurrentSwing1_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsConstraintComponent.GetConstraintForce
// Size: 0x0018
struct PhysicsConstraintComponent_GetConstraintForce_Params {
public:
    uint8_t OutLinearForce[0xC]; // 0x0000 (0x000C)
    uint8_t OutAngularForce[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PhysicsConstraintComponent.BreakConstraint
// Size: 0x0000
struct PhysicsConstraintComponent_BreakConstraint_Params {
public:
};

// Function: Engine.CurveBase.GetValueRange
// Size: 0x0008
struct CurveBase_GetValueRange_Params {
public:
    float MinValue; // 0x0000 (0x0004)
    float MaxValue; // 0x0004 (0x0004)
};

// Function: Engine.CurveBase.GetTimeRange
// Size: 0x0008
struct CurveBase_GetTimeRange_Params {
public:
    float MinTime; // 0x0000 (0x0004)
    float MaxTime; // 0x0004 (0x0004)
};

// Function: Engine.CurveFloat.GetFloatValue
// Size: 0x0008
struct CurveFloat_GetFloatValue_Params {
public:
    float InTime; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.SkeletalMesh.IsSectionUsingCloth
// Size: 0x0006
struct SkeletalMesh_IsSectionUsingCloth_Params {
public:
    int32_t InSectionIndex; // 0x0000 (0x0004)
    bool bCheckCorrespondingSections; // 0x0004 (0x0001)
    bool ReturnValue; // 0x0005 (0x0001)
};

// Function: Engine.SkeletalMesh.FindSocket
// Size: 0x0010
struct SkeletalMesh_FindSocket_Params {
public:
    struct FName InSocketName; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.BendOcclusionVolumeComponent.SetEnabled
// Size: 0x0001
struct BendOcclusionVolumeComponent_SetEnabled_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.BendOcclusionVolume.ActorLeavingVolume
// Size: 0x0008
struct BendOcclusionVolume_ActorLeavingVolume_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
};

// Function: Engine.BendOcclusionVolume.ActorEnteredVolume
// Size: 0x0008
struct BendOcclusionVolume_ActorEnteredVolume_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
};

// Function: Engine.BendWetnessVolumeComponent.SetWetnessAccumulation
// Size: 0x0004
struct BendWetnessVolumeComponent_SetWetnessAccumulation_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.BendWetnessVolumeComponent.SetSnowAccumulation
// Size: 0x0004
struct BendWetnessVolumeComponent_SetSnowAccumulation_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.BendWetnessVolumeComponent.SetRemoveWetness
// Size: 0x0001
struct BendWetnessVolumeComponent_SetRemoveWetness_Params {
public:
    bool Value; // 0x0000 (0x0001)
};

// Function: Engine.BendWetnessVolumeComponent.SetPuddleAccumulation
// Size: 0x0004
struct BendWetnessVolumeComponent_SetPuddleAccumulation_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.BendWetnessVolumeComponent.SetEnabled
// Size: 0x0001
struct BendWetnessVolumeComponent_SetEnabled_Params {
public:
    bool Value; // 0x0000 (0x0001)
};

// Function: Engine.NavModifierVolume.SetAreaClass
// Size: 0x0008
struct NavModifierVolume_SetAreaClass_Params {
public:
    class UClass* NewAreaClass; // 0x0000 (0x0008)
};

// Function: Engine.PostProcessVolume.AddOrUpdateBlendable
// Size: 0x0014
struct PostProcessVolume_AddOrUpdateBlendable_Params {
public:
    uint8_t InBlendableObject[0x10]; // 0x0000 (0x0010)
    float InWeight; // 0x0010 (0x0004)
};

// Function: Engine.CameraActor.GetAutoActivatePlayerIndex
// Size: 0x0004
struct CameraActor_GetAutoActivatePlayerIndex_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CameraShake.ReceiveStopShake
// Size: 0x0000
struct CameraShake_ReceiveStopShake_Params {
public:
};

// Function: Engine.CameraShake.ReceivePlayShake
// Size: 0x0004
struct CameraShake_ReceivePlayShake_Params {
public:
    float Scale; // 0x0000 (0x0004)
};

// Function: Engine.CameraShake.ReceiveIsFinished
// Size: 0x0001
struct CameraShake_ReceiveIsFinished_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.CameraShake.BlueprintUpdateCameraShake
// Size: 0x1350
struct CameraShake_BlueprintUpdateCameraShake_Params {
public:
    float DeltaTime; // 0x0000 (0x0004)
    float Alpha; // 0x0004 (0x0004)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t POV[0x9A0]; // 0x0010 (0x09A0)
    uint8_t ModifiedPOV[0x9A0]; // 0x09B0 (0x09A0)
};

// Function: Engine.InputComponent.WasControllerKeyJustReleased
// Size: 0x0019
struct InputComponent_WasControllerKeyJustReleased_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.InputComponent.WasControllerKeyJustPressed
// Size: 0x0019
struct InputComponent_WasControllerKeyJustPressed_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.InputComponent.IsControllerKeyDown
// Size: 0x0019
struct InputComponent_IsControllerKeyDown_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.InputComponent.GetTouchState
// Size: 0x000D
struct InputComponent_GetTouchState_Params {
public:
    int32_t FingerIndex; // 0x0000 (0x0004)
    float LocationX; // 0x0004 (0x0004)
    float LocationY; // 0x0008 (0x0004)
    bool bIsCurrentlyPressed; // 0x000C (0x0001)
};

// Function: Engine.InputComponent.GetControllerVectorKeyState
// Size: 0x0024
struct InputComponent_GetControllerVectorKeyState_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.InputComponent.GetControllerMouseDelta
// Size: 0x0008
struct InputComponent_GetControllerMouseDelta_Params {
public:
    float DeltaX; // 0x0000 (0x0004)
    float DeltaY; // 0x0004 (0x0004)
};

// Function: Engine.InputComponent.GetControllerKeyTimeDown
// Size: 0x001C
struct InputComponent_GetControllerKeyTimeDown_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.InputComponent.GetControllerAnalogStickState
// Size: 0x000C
struct InputComponent_GetControllerAnalogStickState_Params {
public:
    uint8_t WhichStick; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float StickX; // 0x0004 (0x0004)
    float StickY; // 0x0008 (0x0004)
};

// Function: Engine.InputComponent.GetControllerAnalogKeyState
// Size: 0x001C
struct InputComponent_GetControllerAnalogKeyState_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.DebugCameraController.ShowDebugSelectedInfo
// Size: 0x0000
struct DebugCameraController_ShowDebugSelectedInfo_Params {
public:
};

// Function: Engine.DecalActor.SetDecalMaterial
// Size: 0x0008
struct DecalActor_SetDecalMaterial_Params {
public:
    class UObject* NewDecalMaterial; // 0x0000 (0x0008)
};

// Function: Engine.DecalActor.GetDecalMaterial
// Size: 0x0008
struct DecalActor_GetDecalMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.DecalActor.CreateDynamicMaterialInstance
// Size: 0x0008
struct DecalActor_CreateDynamicMaterialInstance_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.Emitter.ToggleActive
// Size: 0x0000
struct Emitter_ToggleActive_Params {
public:
};

// Function: Engine.Emitter.SetVectorParameter
// Size: 0x0014
struct Emitter_SetVectorParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t Param[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.Emitter.SetTemplate
// Size: 0x0008
struct Emitter_SetTemplate_Params {
public:
    class UObject* NewTemplate; // 0x0000 (0x0008)
};

// Function: Engine.Emitter.SetMaterialParameter
// Size: 0x0010
struct Emitter_SetMaterialParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* Param; // 0x0008 (0x0008)
};

// Function: Engine.Emitter.SetFloatParameter
// Size: 0x000C
struct Emitter_SetFloatParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    float Param; // 0x0008 (0x0004)
};

// Function: Engine.Emitter.SetColorParameter
// Size: 0x0018
struct Emitter_SetColorParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t Param[0x10]; // 0x0008 (0x0010)
};

// Function: Engine.Emitter.SetActorParameter
// Size: 0x0010
struct Emitter_SetActorParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* Param; // 0x0008 (0x0008)
};

// Function: Engine.Emitter.OnRep_bCurrentlyActive
// Size: 0x0000
struct Emitter_OnRep_bCurrentlyActive_Params {
public:
};

// Function: Engine.Emitter.OnParticleSystemFinished
// Size: 0x0008
struct Emitter_OnParticleSystemFinished_Params {
public:
    class UObject* FinishedComponent; // 0x0000 (0x0008)
};

// Function: Engine.Emitter.IsActive
// Size: 0x0001
struct Emitter_IsActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Emitter.Deactivate
// Size: 0x0000
struct Emitter_Deactivate_Params {
public:
};

// Function: Engine.Emitter.Activate
// Size: 0x0000
struct Emitter_Activate_Params {
public:
};

// Function: Engine.ExponentialHeightFog.OnRep_bEnabled
// Size: 0x0000
struct ExponentialHeightFog_OnRep_bEnabled_Params {
public:
};

// Function: Engine.SkyLight.OnRep_bEnabled
// Size: 0x0000
struct SkyLight_OnRep_bEnabled_Params {
public:
};

// Function: Engine.LevelBounds.GetAutoUpdateBounds
// Size: 0x0001
struct LevelBounds_GetAutoUpdateBounds_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Light.ToggleEnabled
// Size: 0x0000
struct Light_ToggleEnabled_Params {
public:
};

// Function: Engine.Light.SetLightFunctionScale
// Size: 0x000C
struct Light_SetLightFunctionScale_Params {
public:
    uint8_t NewLightFunctionScale[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.Light.SetLightFunctionMaterial
// Size: 0x0008
struct Light_SetLightFunctionMaterial_Params {
public:
    class UObject* NewLightFunctionMaterial; // 0x0000 (0x0008)
};

// Function: Engine.Light.SetLightFunctionFadeDistance
// Size: 0x0004
struct Light_SetLightFunctionFadeDistance_Params {
public:
    float NewLightFunctionFadeDistance; // 0x0000 (0x0004)
};

// Function: Engine.Light.SetLightColor
// Size: 0x0010
struct Light_SetLightColor_Params {
public:
    uint8_t NewLightColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.Light.SetEnabled
// Size: 0x0001
struct Light_SetEnabled_Params {
public:
    bool bSetEnabled; // 0x0000 (0x0001)
};

// Function: Engine.Light.SetCastShadows
// Size: 0x0001
struct Light_SetCastShadows_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.Light.SetBrightness
// Size: 0x0004
struct Light_SetBrightness_Params {
public:
    float NewBrightness; // 0x0000 (0x0004)
};

// Function: Engine.Light.SetAffectTranslucentLighting
// Size: 0x0001
struct Light_SetAffectTranslucentLighting_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.Light.OnRep_bEnabled
// Size: 0x0000
struct Light_OnRep_bEnabled_Params {
public:
};

// Function: Engine.Light.IsEnabled
// Size: 0x0001
struct Light_IsEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.Light.GetLightColor
// Size: 0x0010
struct Light_GetLightColor_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.Light.GetBrightness
// Size: 0x0004
struct Light_GetBrightness_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PointLight.SetRadius
// Size: 0x0004
struct PointLight_SetRadius_Params {
public:
    float NewRadius; // 0x0000 (0x0004)
};

// Function: Engine.PointLight.SetLightFalloffExponent
// Size: 0x0004
struct PointLight_SetLightFalloffExponent_Params {
public:
    float NewLightFalloffExponent; // 0x0000 (0x0004)
};

// Function: Engine.SpotLight.SetOuterConeAngle
// Size: 0x0004
struct SpotLight_SetOuterConeAngle_Params {
public:
    float NewOuterConeAngle; // 0x0000 (0x0004)
};

// Function: Engine.SpotLight.SetInnerConeAngle
// Size: 0x0004
struct SpotLight_SetInnerConeAngle_Params {
public:
    float NewInnerConeAngle; // 0x0000 (0x0004)
};

// Function: Engine.MatineeActor.Stop
// Size: 0x0000
struct MatineeActor_Stop_Params {
public:
};

// Function: Engine.MatineeActor.Skip
// Size: 0x0000
struct MatineeActor_Skip_Params {
public:
};

// Function: Engine.MatineeActor.SetPosition
// Size: 0x0005
struct MatineeActor_SetPosition_Params {
public:
    float NewPosition; // 0x0000 (0x0004)
    bool bJump; // 0x0004 (0x0001)
};

// Function: Engine.MatineeActor.SetMatineeChaining
// Size: 0x0008
struct MatineeActor_SetMatineeChaining_Params {
public:
    class UObject* NextMatinee; // 0x0000 (0x0008)
};

// Function: Engine.MatineeActor.SetLoopingState
// Size: 0x0001
struct MatineeActor_SetLoopingState_Params {
public:
    bool bNewLooping; // 0x0000 (0x0001)
};

// Function: Engine.MatineeActor.Reverse
// Size: 0x0000
struct MatineeActor_Reverse_Params {
public:
};

// Function: Engine.MatineeActor.PreLoad
// Size: 0x0020
struct MatineeActor_PreLoad_Params {
public:
    bool bShouldBlockOnLoad; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t LatentInfo[0x18]; // 0x0008 (0x0018)
};

// Function: Engine.MatineeActor.Play
// Size: 0x0000
struct MatineeActor_Play_Params {
public:
};

// Function: Engine.MatineeActor.Pause
// Size: 0x0000
struct MatineeActor_Pause_Params {
public:
};

// Function: Engine.MatineeActor.ForceStreamInResources
// Size: 0x0008
struct MatineeActor_ForceStreamInResources_Params {
public:
    float TimeAllowed; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.MatineeActor.ChangePlaybackDirection
// Size: 0x0000
struct MatineeActor_ChangePlaybackDirection_Params {
public:
};

// Function: Engine.DefaultPawn.TurnAtRate
// Size: 0x0004
struct DefaultPawn_TurnAtRate_Params {
public:
    float Rate; // 0x0000 (0x0004)
};

// Function: Engine.DefaultPawn.Turn
// Size: 0x0004
struct DefaultPawn_Turn_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.DefaultPawn.MoveUp_World
// Size: 0x0004
struct DefaultPawn_MoveUp_World_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.DefaultPawn.MoveRight
// Size: 0x0004
struct DefaultPawn_MoveRight_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.DefaultPawn.MoveForward
// Size: 0x0004
struct DefaultPawn_MoveForward_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.DefaultPawn.LookUpAtRate
// Size: 0x0004
struct DefaultPawn_LookUpAtRate_Params {
public:
    float Rate; // 0x0000 (0x0004)
};

// Function: Engine.DefaultPawn.LookUp
// Size: 0x0004
struct DefaultPawn_LookUp_Params {
public:
    float Val; // 0x0000 (0x0004)
};

// Function: Engine.RadialForceActor.ToggleForce
// Size: 0x0000
struct RadialForceActor_ToggleForce_Params {
public:
};

// Function: Engine.RadialForceActor.FireImpulse
// Size: 0x0000
struct RadialForceActor_FireImpulse_Params {
public:
};

// Function: Engine.RadialForceActor.EnableForce
// Size: 0x0000
struct RadialForceActor_EnableForce_Params {
public:
};

// Function: Engine.RadialForceActor.DisableForce
// Size: 0x0000
struct RadialForceActor_DisableForce_Params {
public:
};

// Function: Engine.SceneCapture2D.OnInterpToggle
// Size: 0x0001
struct SceneCapture2D_OnInterpToggle_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.SceneCaptureCube.OnInterpToggle
// Size: 0x0001
struct SceneCaptureCube_OnInterpToggle_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature
// Size: 0x0000
struct ApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Params {
public:
};

// Function: Engine.SplineComponent.UpdateSpline
// Size: 0x0000
struct SplineComponent_UpdateSpline_Params {
public:
};

// Function: Engine.SplineComponent.SetWorldLocationAtSplinePoint
// Size: 0x0010
struct SplineComponent_SetWorldLocationAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t InLocation[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.SetUnselectedSplineSegmentColor
// Size: 0x0010
struct SplineComponent_SetUnselectedSplineSegmentColor_Params {
public:
    uint8_t SegmentColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.SplineComponent.SetTangentAtSplinePoint
// Size: 0x0011
struct SplineComponent_SetTangentAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t InTangent[0xC]; // 0x0004 (0x000C)
    uint8_t CoordinateSpace; // 0x0010 (0x0001)
};

// Function: Engine.SplineComponent.SetSplineWorldPoints
// Size: 0x0010
struct SplineComponent_SetSplineWorldPoints_Params {
public:
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
};

// Function: Engine.SplineComponent.SetSplinePointType
// Size: 0x0005
struct SplineComponent_SetSplinePointType_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t Type; // 0x0004 (0x0001)
};

// Function: Engine.SplineComponent.SetSplinePoints
// Size: 0x0011
struct SplineComponent_SetSplinePoints_Params {
public:
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    uint8_t CoordinateSpace; // 0x0010 (0x0001)
};

// Function: Engine.SplineComponent.SetSplineLocalPoints
// Size: 0x0010
struct SplineComponent_SetSplineLocalPoints_Params {
public:
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
};

// Function: Engine.SplineComponent.SetSelectedSplineSegmentColor
// Size: 0x0010
struct SplineComponent_SetSelectedSplineSegmentColor_Params {
public:
    uint8_t SegmentColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.SplineComponent.SetLocationAtSplinePoint
// Size: 0x0011
struct SplineComponent_SetLocationAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t InLocation[0xC]; // 0x0004 (0x000C)
    uint8_t CoordinateSpace; // 0x0010 (0x0001)
};

// Function: Engine.SplineComponent.SetDefaultUpVector
// Size: 0x000D
struct SplineComponent_SetDefaultUpVector_Params {
public:
    uint8_t UpVector[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
};

// Function: Engine.SplineComponent.SetClosedLoop
// Size: 0x0001
struct SplineComponent_SetClosedLoop_Params {
public:
    bool bInClosedLoop; // 0x0000 (0x0001)
};

// Function: Engine.SplineComponent.RemoveSplinePoint
// Size: 0x0004
struct SplineComponent_RemoveSplinePoint_Params {
public:
    int32_t Index; // 0x0000 (0x0004)
};

// Function: Engine.SplineComponent.IsClosedLoop
// Size: 0x0001
struct SplineComponent_IsClosedLoop_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
// Size: 0x0010
struct SplineComponent_GetWorldTangentAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldRotationAtTime
// Size: 0x0014
struct SplineComponent_GetWorldRotationAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    bool bUseConstantVelocity; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
// Size: 0x0010
struct SplineComponent_GetWorldRotationAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldLocationAtTime
// Size: 0x0014
struct SplineComponent_GetWorldLocationAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    bool bUseConstantVelocity; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldLocationAtSplinePoint
// Size: 0x0010
struct SplineComponent_GetWorldLocationAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
// Size: 0x0010
struct SplineComponent_GetWorldLocationAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldDirectionAtTime
// Size: 0x0014
struct SplineComponent_GetWorldDirectionAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    bool bUseConstantVelocity; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
// Size: 0x0010
struct SplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetUpVectorAtTime
// Size: 0x0014
struct SplineComponent_GetUpVectorAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetUpVectorAtSplinePoint
// Size: 0x0014
struct SplineComponent_GetUpVectorAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
// Size: 0x0014
struct SplineComponent_GetUpVectorAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetTransformAtTime
// Size: 0x0040
struct SplineComponent_GetTransformAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    bool bUseScale; // 0x0006 (0x0001)
    uint8_t Pad_0[0x9]; // 0x0007 (0x0009)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.SplineComponent.GetTransformAtSplinePoint
// Size: 0x0040
struct SplineComponent_GetTransformAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseScale; // 0x0005 (0x0001)
    uint8_t Pad_0[0xA]; // 0x0006 (0x000A)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.SplineComponent.GetTransformAtDistanceAlongSpline
// Size: 0x0040
struct SplineComponent_GetTransformAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseScale; // 0x0005 (0x0001)
    uint8_t Pad_0[0xA]; // 0x0006 (0x000A)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.SplineComponent.GetTangentAtTime
// Size: 0x0014
struct SplineComponent_GetTangentAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetTangentAtSplinePoint
// Size: 0x0014
struct SplineComponent_GetTangentAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetTangentAtDistanceAlongSpline
// Size: 0x0014
struct SplineComponent_GetTangentAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetSplinePointType
// Size: 0x0005
struct SplineComponent_GetSplinePointType_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.SplineComponent.GetSplineLength
// Size: 0x0004
struct SplineComponent_GetSplineLength_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SplineComponent.GetScaleAtTime
// Size: 0x0014
struct SplineComponent_GetScaleAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    bool bUseConstantVelocity; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetScaleAtSplinePoint
// Size: 0x0010
struct SplineComponent_GetScaleAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetScaleAtDistanceAlongSpline
// Size: 0x0010
struct SplineComponent_GetScaleAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.GetRotationAtTime
// Size: 0x0014
struct SplineComponent_GetRotationAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetRotationAtSplinePoint
// Size: 0x0014
struct SplineComponent_GetRotationAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetRotationAtDistanceAlongSpline
// Size: 0x0014
struct SplineComponent_GetRotationAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetRollAtTime
// Size: 0x000C
struct SplineComponent_GetRollAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.SplineComponent.GetRollAtSplinePoint
// Size: 0x000C
struct SplineComponent_GetRollAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.SplineComponent.GetRollAtDistanceAlongSpline
// Size: 0x000C
struct SplineComponent_GetRollAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.SplineComponent.GetRightVectorAtTime
// Size: 0x0014
struct SplineComponent_GetRightVectorAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetRightVectorAtSplinePoint
// Size: 0x0014
struct SplineComponent_GetRightVectorAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
// Size: 0x0014
struct SplineComponent_GetRightVectorAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetQuaternionAtTime
// Size: 0x0020
struct SplineComponent_GetQuaternionAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0xA]; // 0x0006 (0x000A)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.SplineComponent.GetQuaternionAtSplinePoint
// Size: 0x0020
struct SplineComponent_GetQuaternionAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0xB]; // 0x0005 (0x000B)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.SplineComponent.GetQuaternionAtDistanceAlongSpline
// Size: 0x0020
struct SplineComponent_GetQuaternionAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0xB]; // 0x0005 (0x000B)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.SplineComponent.GetNumberOfSplinePoints
// Size: 0x0004
struct SplineComponent_GetNumberOfSplinePoints_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.SplineComponent.GetLocationAtTime
// Size: 0x0014
struct SplineComponent_GetLocationAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetLocationAtSplinePoint
// Size: 0x0014
struct SplineComponent_GetLocationAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetLocationAtDistanceAlongSpline
// Size: 0x0014
struct SplineComponent_GetLocationAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
// Size: 0x001D
struct SplineComponent_GetLocationAndTangentAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t Location[0xC]; // 0x0004 (0x000C)
    uint8_t Tangent[0xC]; // 0x0010 (0x000C)
    uint8_t CoordinateSpace; // 0x001C (0x0001)
};

// Function: Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
// Size: 0x001C
struct SplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t LocalLocation[0xC]; // 0x0004 (0x000C)
    uint8_t LocalTangent[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
// Size: 0x0008
struct SplineComponent_GetInputKeyAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
// Size: 0x0008
struct SplineComponent_GetDistanceAlongSplineAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.SplineComponent.GetDirectionAtTime
// Size: 0x0014
struct SplineComponent_GetDirectionAtTime_Params {
public:
    float Time; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    bool bUseConstantVelocity; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetDirectionAtSplinePoint
// Size: 0x0014
struct SplineComponent_GetDirectionAtSplinePoint_Params {
public:
    int32_t PointIndex; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
// Size: 0x0014
struct SplineComponent_GetDirectionAtDistanceAlongSpline_Params {
public:
    float Distance; // 0x0000 (0x0004)
    uint8_t CoordinateSpace; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.SplineComponent.GetDefaultUpVector
// Size: 0x0010
struct SplineComponent_GetDefaultUpVector_Params {
public:
    uint8_t CoordinateSpace; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.SplineComponent.FindUpVectorClosestToWorldLocation
// Size: 0x001C
struct SplineComponent_FindUpVectorClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.FindTransformClosestToWorldLocation
// Size: 0x0040
struct SplineComponent_FindTransformClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    bool bUseScale; // 0x000D (0x0001)
    uint8_t Pad_0[0x2]; // 0x000E (0x0002)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.SplineComponent.FindTangentClosestToWorldLocation
// Size: 0x001C
struct SplineComponent_FindTangentClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.FindScaleClosestToWorldLocation
// Size: 0x0018
struct SplineComponent_FindScaleClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.SplineComponent.FindRotationClosestToWorldLocation
// Size: 0x001C
struct SplineComponent_FindRotationClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.FindRollClosestToWorldLocation
// Size: 0x0014
struct SplineComponent_FindRollClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.SplineComponent.FindRightVectorClosestToWorldLocation
// Size: 0x001C
struct SplineComponent_FindRightVectorClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.FindQuaternionClosestToWorldLocation
// Size: 0x0020
struct SplineComponent_FindQuaternionClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.SplineComponent.FindLocationClosestToWorldLocation
// Size: 0x001C
struct SplineComponent_FindLocationClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.FindInputKeyClosestToWorldLocation
// Size: 0x0010
struct SplineComponent_FindInputKeyClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.SplineComponent.FindDirectionClosestToWorldLocation
// Size: 0x001C
struct SplineComponent_FindDirectionClosestToWorldLocation_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.SplineComponent.ClearSplinePoints
// Size: 0x0000
struct SplineComponent_ClearSplinePoints_Params {
public:
};

// Function: Engine.SplineComponent.AddSplineWorldPoint
// Size: 0x000C
struct SplineComponent_AddSplineWorldPoint_Params {
public:
    uint8_t Position[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.SplineComponent.AddSplinePointAtIndex
// Size: 0x0011
struct SplineComponent_AddSplinePointAtIndex_Params {
public:
    uint8_t Position[0xC]; // 0x0000 (0x000C)
    int32_t Index; // 0x000C (0x0004)
    uint8_t CoordinateSpace; // 0x0010 (0x0001)
};

// Function: Engine.SplineComponent.AddSplinePoint
// Size: 0x000D
struct SplineComponent_AddSplinePoint_Params {
public:
    uint8_t Position[0xC]; // 0x0000 (0x000C)
    uint8_t CoordinateSpace; // 0x000C (0x0001)
};

// Function: Engine.SplineComponent.AddSplineLocalPoint
// Size: 0x000C
struct SplineComponent_AddSplineLocalPoint_Params {
public:
    uint8_t Position[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.InterpToMovementComponent.StopSimulating
// Size: 0x0088
struct InterpToMovementComponent_StopSimulating_Params {
public:
    uint8_t HitResult[0x88]; // 0x0000 (0x0088)
};

// Function: Engine.InterpToMovementComponent.RestartMovement
// Size: 0x0004
struct InterpToMovementComponent_RestartMovement_Params {
public:
    float InitialDirection; // 0x0000 (0x0004)
};

// Function: Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature
// Size: 0x008C
struct InterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
    float Time; // 0x0088 (0x0004)
};

// Function: Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature
// Size: 0x008C
struct InterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
    float Time; // 0x0088 (0x0004)
};

// Function: Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature
// Size: 0x008C
struct InterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
    float Time; // 0x0088 (0x0004)
};

// Function: Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature
// Size: 0x008C
struct InterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
    float Time; // 0x0088 (0x0004)
};

// Function: Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature
// Size: 0x008C
struct InterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Params {
public:
    uint8_t ImpactResult[0x88]; // 0x0000 (0x0088)
    float Time; // 0x0088 (0x0004)
};

// Function: Engine.InterpToMovementComponent.FinaliseControlPoints
// Size: 0x0000
struct InterpToMovementComponent_FinaliseControlPoints_Params {
public:
};

// Function: Engine.PawnNoiseEmitterComponent.MakeNoise
// Size: 0x0018
struct PawnNoiseEmitterComponent_MakeNoise_Params {
public:
    class UObject* NoiseMaker; // 0x0000 (0x0008)
    float Loudness; // 0x0008 (0x0004)
    uint8_t NoiseLocation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PhysicsHandleComponent.SetTargetRotation
// Size: 0x000C
struct PhysicsHandleComponent_SetTargetRotation_Params {
public:
    uint8_t NewRotation[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsHandleComponent.SetTargetLocationAndRotation
// Size: 0x0018
struct PhysicsHandleComponent_SetTargetLocationAndRotation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
    uint8_t NewRotation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PhysicsHandleComponent.SetTargetLocation
// Size: 0x000C
struct PhysicsHandleComponent_SetTargetLocation_Params {
public:
    uint8_t NewLocation[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsHandleComponent.SetLinearStiffness
// Size: 0x0004
struct PhysicsHandleComponent_SetLinearStiffness_Params {
public:
    float NewLinearStiffness; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsHandleComponent.SetLinearDamping
// Size: 0x0004
struct PhysicsHandleComponent_SetLinearDamping_Params {
public:
    float NewLinearDamping; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsHandleComponent.SetInterpolationSpeed
// Size: 0x0004
struct PhysicsHandleComponent_SetInterpolationSpeed_Params {
public:
    float NewInterpolationSpeed; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsHandleComponent.SetAngularStiffness
// Size: 0x0004
struct PhysicsHandleComponent_SetAngularStiffness_Params {
public:
    float NewAngularStiffness; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsHandleComponent.SetAngularDamping
// Size: 0x0004
struct PhysicsHandleComponent_SetAngularDamping_Params {
public:
    float NewAngularDamping; // 0x0000 (0x0004)
};

// Function: Engine.PhysicsHandleComponent.ReleaseComponent
// Size: 0x0000
struct PhysicsHandleComponent_ReleaseComponent_Params {
public:
};

// Function: Engine.PhysicsHandleComponent.GrabComponent
// Size: 0x001D
struct PhysicsHandleComponent_GrabComponent_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    struct FName InBoneName; // 0x0008 (0x0008)
    uint8_t GrabLocation[0xC]; // 0x0010 (0x000C)
    bool bConstrainRotation; // 0x001C (0x0001)
};

// Function: Engine.PhysicsHandleComponent.GetTargetLocationAndRotation
// Size: 0x0018
struct PhysicsHandleComponent_GetTargetLocationAndRotation_Params {
public:
    uint8_t TargetLocation[0xC]; // 0x0000 (0x000C)
    uint8_t TargetRotation[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PlatformEventsComponent.SupportsConvertibleLaptops
// Size: 0x0001
struct PlatformEventsComponent_SupportsConvertibleLaptops_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature
// Size: 0x0000
struct PlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Params {
public:
};

// Function: Engine.PlatformEventsComponent.IsInTabletMode
// Size: 0x0001
struct PlatformEventsComponent_IsInTabletMode_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PlatformEventsComponent.IsInLaptopMode
// Size: 0x0001
struct PlatformEventsComponent_IsInLaptopMode_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AtmosphericFogComponent.StartPrecompute
// Size: 0x0000
struct AtmosphericFogComponent_StartPrecompute_Params {
public:
};

// Function: Engine.AtmosphericFogComponent.SetSunMultiplier
// Size: 0x0004
struct AtmosphericFogComponent_SetSunMultiplier_Params {
public:
    float NewSunMultiplier; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetStartDistance
// Size: 0x0004
struct AtmosphericFogComponent_SetStartDistance_Params {
public:
    float NewStartDistance; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetPrecomputeParams
// Size: 0x000C
struct AtmosphericFogComponent_SetPrecomputeParams_Params {
public:
    float DensityHeight; // 0x0000 (0x0004)
    int32_t MaxScatteringOrder; // 0x0004 (0x0004)
    int32_t InscatterAltitudeSampleNum; // 0x0008 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetMipFogTransitionDistance
// Size: 0x0004
struct AtmosphericFogComponent_SetMipFogTransitionDistance_Params {
public:
    float NewMipFogTransitionDistance; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetMipFogMipLevels
// Size: 0x0008
struct AtmosphericFogComponent_SetMipFogMipLevels_Params {
public:
    float NewMipFogBackgroundMipLevel; // 0x0000 (0x0004)
    float NewMipFogForegroundMipLevel; // 0x0004 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetFogMultiplier
// Size: 0x0004
struct AtmosphericFogComponent_SetFogMultiplier_Params {
public:
    float NewFogMultiplier; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetFogDistanceLinearity
// Size: 0x0004
struct AtmosphericFogComponent_SetFogDistanceLinearity_Params {
public:
    float NewFogDistanceLinearity; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetFogDensityColor
// Size: 0x0010
struct AtmosphericFogComponent_SetFogDensityColor_Params {
public:
    uint8_t NewFogDensityColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.AtmosphericFogComponent.SetDistanceScale
// Size: 0x0004
struct AtmosphericFogComponent_SetDistanceScale_Params {
public:
    float NewDistanceScale; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetDistanceOffset
// Size: 0x0004
struct AtmosphericFogComponent_SetDistanceOffset_Params {
public:
    float NewDistanceOffset; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetDensityOffset
// Size: 0x0004
struct AtmosphericFogComponent_SetDensityOffset_Params {
public:
    float NewDensityOffset; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetDensityMultiplier
// Size: 0x0004
struct AtmosphericFogComponent_SetDensityMultiplier_Params {
public:
    float NewDensityMultiplier; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetDefaultLightColor
// Size: 0x0010
struct AtmosphericFogComponent_SetDefaultLightColor_Params {
public:
    uint8_t NewLightColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.AtmosphericFogComponent.SetDefaultBrightness
// Size: 0x0004
struct AtmosphericFogComponent_SetDefaultBrightness_Params {
public:
    float NewBrightness; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBlendWithUnlitGeometry
// Size: 0x0001
struct AtmosphericFogComponent_SetBlendWithUnlitGeometry_Params {
public:
    bool NewBlendWithUnlitGeometry; // 0x0000 (0x0001)
};

// Function: Engine.AtmosphericFogComponent.SetBendTerrainCloudTint
// Size: 0x0010
struct AtmosphericFogComponent_SetBendTerrainCloudTint_Params {
public:
    uint8_t NewValue[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.AtmosphericFogComponent.SetBendTerrainAtmosphereTint
// Size: 0x0010
struct AtmosphericFogComponent_SetBendTerrainAtmosphereTint_Params {
public:
    uint8_t NewValue[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.AtmosphericFogComponent.SetBendReferenceAltitudeMeters
// Size: 0x0004
struct AtmosphericFogComponent_SetBendReferenceAltitudeMeters_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScatterTerm_Terrain
// Size: 0x000C
struct AtmosphericFogComponent_SetBendRayleighScatterTerm_Terrain_Params {
public:
    uint8_t NewValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScatterTerm
// Size: 0x000C
struct AtmosphericFogComponent_SetBendRayleighScatterTerm_Params {
public:
    uint8_t NewValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScaleTerm_Terrain
// Size: 0x0004
struct AtmosphericFogComponent_SetBendRayleighScaleTerm_Terrain_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScaleTerm
// Size: 0x0004
struct AtmosphericFogComponent_SetBendRayleighScaleTerm_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendRayleighDirectionalScale_Terrain
// Size: 0x0004
struct AtmosphericFogComponent_SetBendRayleighDirectionalScale_Terrain_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieScatterTerm_Terrain
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieScatterTerm_Terrain_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieScatterTerm
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieScatterTerm_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieScaleTerm_Terrain
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieScaleTerm_Terrain_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieScaleTerm
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieScaleTerm_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieDirectionTerm_Terrain
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieDirectionTerm_Terrain_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieDirectionTerm
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieDirectionTerm_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendMieDirectionalScale_Terrain
// Size: 0x0004
struct AtmosphericFogComponent_SetBendMieDirectionalScale_Terrain_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendExtendedHorizon
// Size: 0x0004
struct AtmosphericFogComponent_SetBendExtendedHorizon_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetBendCloudsLightingHeightMeters
// Size: 0x0004
struct AtmosphericFogComponent_SetBendCloudsLightingHeightMeters_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.SetAltitudeScale
// Size: 0x0004
struct AtmosphericFogComponent_SetAltitudeScale_Params {
public:
    float NewAltitudeScale; // 0x0000 (0x0004)
};

// Function: Engine.AtmosphericFogComponent.DisableSunDisk
// Size: 0x0001
struct AtmosphericFogComponent_DisableSunDisk_Params {
public:
    bool NewSunDisk; // 0x0000 (0x0001)
};

// Function: Engine.AtmosphericFogComponent.DisableGroundScattering
// Size: 0x0001
struct AtmosphericFogComponent_DisableGroundScattering_Params {
public:
    bool NewGroundScattering; // 0x0000 (0x0001)
};

// Function: Engine.AudioComponent.Unpause
// Size: 0x0001
struct AudioComponent_Unpause_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AudioComponent.Stop
// Size: 0x0000
struct AudioComponent_Stop_Params {
public:
};

// Function: Engine.AudioComponent.SetWaveParameter
// Size: 0x0010
struct AudioComponent_SetWaveParameter_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    class UObject* InWave; // 0x0008 (0x0008)
};

// Function: Engine.AudioComponent.SetVolumeMultiplier
// Size: 0x0004
struct AudioComponent_SetVolumeMultiplier_Params {
public:
    float NewVolumeMultiplier; // 0x0000 (0x0004)
};

// Function: Engine.AudioComponent.SetUISound
// Size: 0x0001
struct AudioComponent_SetUISound_Params {
public:
    bool bInUISound; // 0x0000 (0x0001)
};

// Function: Engine.AudioComponent.SetSound
// Size: 0x0008
struct AudioComponent_SetSound_Params {
public:
    class UObject* NewSound; // 0x0000 (0x0008)
};

// Function: Engine.AudioComponent.SetPitchMultiplier
// Size: 0x0004
struct AudioComponent_SetPitchMultiplier_Params {
public:
    float NewPitchMultiplier; // 0x0000 (0x0004)
};

// Function: Engine.AudioComponent.SetIntParameter
// Size: 0x000C
struct AudioComponent_SetIntParameter_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    int32_t InInt; // 0x0008 (0x0004)
};

// Function: Engine.AudioComponent.SetFloatParameter
// Size: 0x000C
struct AudioComponent_SetFloatParameter_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    float InFloat; // 0x0008 (0x0004)
};

// Function: Engine.AudioComponent.SetBoolParameter
// Size: 0x0009
struct AudioComponent_SetBoolParameter_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    bool InBool; // 0x0008 (0x0001)
};

// Function: Engine.AudioComponent.Play
// Size: 0x0004
struct AudioComponent_Play_Params {
public:
    float StartTime; // 0x0000 (0x0004)
};

// Function: Engine.AudioComponent.Pause
// Size: 0x0001
struct AudioComponent_Pause_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AudioComponent.IsPlaying
// Size: 0x0001
struct AudioComponent_IsPlaying_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AudioComponent.IsPaused
// Size: 0x0001
struct AudioComponent_IsPaused_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.AudioComponent.FadeOut
// Size: 0x0008
struct AudioComponent_FadeOut_Params {
public:
    float FadeOutDuration; // 0x0000 (0x0004)
    float FadeVolumeLevel; // 0x0004 (0x0004)
};

// Function: Engine.AudioComponent.FadeIn
// Size: 0x000C
struct AudioComponent_FadeIn_Params {
public:
    float FadeInDuration; // 0x0000 (0x0004)
    float FadeVolumeLevel; // 0x0004 (0x0004)
    float StartTime; // 0x0008 (0x0004)
};

// Function: Engine.AudioComponent.BP_GetAttenuationSettingsToApply
// Size: 0x00F9
struct AudioComponent_BP_GetAttenuationSettingsToApply_Params {
public:
    uint8_t OutAttenuationSettings[0xF8]; // 0x0000 (0x00F8)
    bool ReturnValue; // 0x00F8 (0x0001)
};

// Function: Engine.AudioComponent.AdjustVolume
// Size: 0x0008
struct AudioComponent_AdjustVolume_Params {
public:
    float AdjustVolumeDuration; // 0x0000 (0x0004)
    float AdjustVolumeLevel; // 0x0004 (0x0004)
};

// Function: Engine.AudioComponent.AdjustAttenuation
// Size: 0x00F8
struct AudioComponent_AdjustAttenuation_Params {
public:
    uint8_t InAttenuationSettings[0xF8]; // 0x0000 (0x00F8)
};

// Function: Engine.BendAmbientLightComponent.SetIntensity
// Size: 0x0004
struct BendAmbientLightComponent_SetIntensity_Params {
public:
    float inIntensity; // 0x0000 (0x0004)
};

// Function: Engine.BendAmbientLightComponent.SetDirection
// Size: 0x0008
struct BendAmbientLightComponent_SetDirection_Params {
public:
    uint8_t inDirection[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.BendAmbientLightComponent.SetColor
// Size: 0x0004
struct BendAmbientLightComponent_SetColor_Params {
public:
    uint8_t InColor[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.AnimSequenceBase.GetPlayLength
// Size: 0x0004
struct AnimSequenceBase_GetPlayLength_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.BendAnimAnchorComponent.SetIsEnabled
// Size: 0x0001
struct BendAnimAnchorComponent_SetIsEnabled_Params {
public:
    bool IsEnabled; // 0x0000 (0x0001)
};

// Function: Engine.BendAnimAnchorComponent.SetAnimInstance
// Size: 0x0008
struct BendAnimAnchorComponent_SetAnimInstance_Params {
public:
    class UObject* InAnimInstance; // 0x0000 (0x0008)
};

// Function: Engine.BendAnimAnchorComponent.SetAnchorName
// Size: 0x0008
struct BendAnimAnchorComponent_SetAnchorName_Params {
public:
    struct FName InAnchorName; // 0x0000 (0x0008)
};

// Function: Engine.BendAnimAnchorComponent.GetIsEnabled
// Size: 0x0001
struct BendAnimAnchorComponent_GetIsEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.BendAnimAnchorComponentWithOffset.SetOffsetTransform
// Size: 0x0030
struct BendAnimAnchorComponentWithOffset_SetOffsetTransform_Params {
public:
    uint8_t InOffsetTransform[0x30]; // 0x0000 (0x0030)
};

// Function: Engine.BendAnimAnchorComponentWithOffset.GetOffsetTransform
// Size: 0x0030
struct BendAnimAnchorComponentWithOffset_GetOffsetTransform_Params {
public:
    uint8_t ReturnValue[0x30]; // 0x0000 (0x0030)
};

// Function: Engine.BendEyeReflectionLightComponent.ToggleVisibility
// Size: 0x0001
struct BendEyeReflectionLightComponent_ToggleVisibility_Params {
public:
    bool bPropagateToChildren; // 0x0000 (0x0001)
};

// Function: Engine.BendEyeReflectionLightComponent.SetVisibility
// Size: 0x0002
struct BendEyeReflectionLightComponent_SetVisibility_Params {
public:
    bool bNewVisibility; // 0x0000 (0x0001)
    bool bPropagateToChildren; // 0x0001 (0x0001)
};

// Function: Engine.BendEyeReflectionLightComponent.SetTextureIndex
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetTextureIndex_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.SetScaleToAmbientLighting
// Size: 0x0001
struct BendEyeReflectionLightComponent_SetScaleToAmbientLighting_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.BendEyeReflectionLightComponent.SetReflectionSize
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetReflectionSize_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.SetIntensity
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetIntensity_Params {
public:
    float inIntensity; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerSmoothing
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetFlickerSmoothing_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerScale
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetFlickerScale_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerSaturation
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetFlickerSaturation_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerPositionOffset
// Size: 0x000C
struct BendEyeReflectionLightComponent_SetFlickerPositionOffset_Params {
public:
    uint8_t InValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.BendEyeReflectionLightComponent.SetEnabled
// Size: 0x0001
struct BendEyeReflectionLightComponent_SetEnabled_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.BendEyeReflectionLightComponent.SetColor
// Size: 0x0004
struct BendEyeReflectionLightComponent_SetColor_Params {
public:
    uint8_t InColor[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.BendEyeReflectionLightComponent.IsVisible
// Size: 0x0001
struct BendEyeReflectionLightComponent_IsVisible_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.BendEyeReflectionLightComponent.GetEnabled
// Size: 0x0001
struct BendEyeReflectionLightComponent_GetEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.BendVoxelLightComponent.SetScaleToAmbientLighting
// Size: 0x0001
struct BendVoxelLightComponent_SetScaleToAmbientLighting_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.BendVoxelLightComponent.SetIntensity
// Size: 0x0004
struct BendVoxelLightComponent_SetIntensity_Params {
public:
    float inIntensity; // 0x0000 (0x0004)
};

// Function: Engine.BendVoxelLightComponent.SetFlickerSmoothing
// Size: 0x0004
struct BendVoxelLightComponent_SetFlickerSmoothing_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendVoxelLightComponent.SetFlickerScale
// Size: 0x0004
struct BendVoxelLightComponent_SetFlickerScale_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendVoxelLightComponent.SetFlickerSaturation
// Size: 0x0004
struct BendVoxelLightComponent_SetFlickerSaturation_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.BendVoxelLightComponent.SetFlickerPositionOffset
// Size: 0x000C
struct BendVoxelLightComponent_SetFlickerPositionOffset_Params {
public:
    uint8_t InValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.BendVoxelLightComponent.SetEnabled
// Size: 0x0001
struct BendVoxelLightComponent_SetEnabled_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.BendVoxelLightComponent.SetColor
// Size: 0x0004
struct BendVoxelLightComponent_SetColor_Params {
public:
    uint8_t InColor[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.SetUseFieldOfViewForLOD
// Size: 0x0001
struct CameraComponent_SetUseFieldOfViewForLOD_Params {
public:
    bool bInUseFieldOfViewForLOD; // 0x0000 (0x0001)
};

// Function: Engine.CameraComponent.SetProjectionMode
// Size: 0x0001
struct CameraComponent_SetProjectionMode_Params {
public:
    uint8_t InProjectionMode; // 0x0000 (0x0001)
};

// Function: Engine.CameraComponent.SetPostProcessBlendWeight
// Size: 0x0004
struct CameraComponent_SetPostProcessBlendWeight_Params {
public:
    float InPostProcessBlendWeight; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.SetOrthoWidth
// Size: 0x0004
struct CameraComponent_SetOrthoWidth_Params {
public:
    float InOrthoWidth; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.SetOrthoNearClipPlane
// Size: 0x0004
struct CameraComponent_SetOrthoNearClipPlane_Params {
public:
    float InOrthoNearClipPlane; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.SetOrthoFarClipPlane
// Size: 0x0004
struct CameraComponent_SetOrthoFarClipPlane_Params {
public:
    float InOrthoFarClipPlane; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.SetFieldOfView
// Size: 0x0004
struct CameraComponent_SetFieldOfView_Params {
public:
    float InFieldOfView; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.SetConstraintAspectRatio
// Size: 0x0001
struct CameraComponent_SetConstraintAspectRatio_Params {
public:
    bool bInConstrainAspectRatio; // 0x0000 (0x0001)
};

// Function: Engine.CameraComponent.SetAspectRatio
// Size: 0x0004
struct CameraComponent_SetAspectRatio_Params {
public:
    float InAspectRatio; // 0x0000 (0x0004)
};

// Function: Engine.CameraComponent.GetCameraView
// Size: 0x09B0
struct CameraComponent_GetCameraView_Params {
public:
    float DeltaTime; // 0x0000 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0004 (0x000C)
    uint8_t DesiredView[0x9A0]; // 0x0010 (0x09A0)
};

// Function: Engine.CameraComponent.ClearFocusActors
// Size: 0x0000
struct CameraComponent_ClearFocusActors_Params {
public:
};

// Function: Engine.CameraComponent.AddOrUpdateBlendable
// Size: 0x0014
struct CameraComponent_AddOrUpdateBlendable_Params {
public:
    uint8_t InBlendableObject[0x10]; // 0x0000 (0x0010)
    float InWeight; // 0x0010 (0x0004)
};

// Function: Engine.CameraComponent.AddFocusActor
// Size: 0x0010
struct CameraComponent_AddFocusActor_Params {
public:
    class UObject* SkelMesh; // 0x0000 (0x0008)
    struct FName BoneName; // 0x0008 (0x0008)
};

// Function: Engine.DecalComponent.SetSortOrder
// Size: 0x0004
struct DecalComponent_SetSortOrder_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.DecalComponent.SetDecalMaterial
// Size: 0x0008
struct DecalComponent_SetDecalMaterial_Params {
public:
    class UObject* NewDecalMaterial; // 0x0000 (0x0008)
};

// Function: Engine.DecalComponent.SetDecalFadeSize
// Size: 0x0008
struct DecalComponent_SetDecalFadeSize_Params {
public:
    float inFadeSizeStart; // 0x0000 (0x0004)
    float inFadeSizeEnd; // 0x0004 (0x0004)
};

// Function: Engine.DecalComponent.ScaleDecalFadeSize
// Size: 0x0004
struct DecalComponent_ScaleDecalFadeSize_Params {
public:
    float inFadeRangeScale; // 0x0000 (0x0004)
};

// Function: Engine.DecalComponent.GetDecalMaterial
// Size: 0x0008
struct DecalComponent_GetDecalMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.DecalComponent.CreateDynamicMaterialInstance
// Size: 0x0008
struct DecalComponent_CreateDynamicMaterialInstance_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.ExponentialHeightFogComponent.SetStartDistance
// Size: 0x0004
struct ExponentialHeightFogComponent_SetStartDistance_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.ExponentialHeightFogComponent.SetFogMaxOpacity
// Size: 0x0004
struct ExponentialHeightFogComponent_SetFogMaxOpacity_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.ExponentialHeightFogComponent.SetFogInscatteringColor
// Size: 0x0010
struct ExponentialHeightFogComponent_SetFogInscatteringColor_Params {
public:
    uint8_t Value[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.ExponentialHeightFogComponent.SetFogHeightFalloff
// Size: 0x0004
struct ExponentialHeightFogComponent_SetFogHeightFalloff_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.ExponentialHeightFogComponent.SetFogDensity
// Size: 0x0004
struct ExponentialHeightFogComponent_SetFogDensity_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance
// Size: 0x0004
struct ExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent
// Size: 0x0004
struct ExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor
// Size: 0x0010
struct ExponentialHeightFogComponent_SetDirectionalInscatteringColor_Params {
public:
    uint8_t Value[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction
// Size: 0x0004
struct DirectionalLightComponent_SetShadowDistanceFadeoutFraction_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetOcclusionMaskDarkness
// Size: 0x0004
struct DirectionalLightComponent_SetOcclusionMaskDarkness_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetLightShaftOverrideDirection
// Size: 0x000C
struct DirectionalLightComponent_SetLightShaftOverrideDirection_Params {
public:
    uint8_t NewValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion
// Size: 0x0001
struct DirectionalLightComponent_SetEnableLightShaftOcclusion_Params {
public:
    bool bNewValue; // 0x0000 (0x0001)
};

// Function: Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight
// Size: 0x0004
struct DirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight
// Size: 0x0004
struct DirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetDynamicShadowCascades
// Size: 0x0004
struct DirectionalLightComponent_SetDynamicShadowCascades_Params {
public:
    int32_t NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetCascadeTransitionFraction
// Size: 0x0004
struct DirectionalLightComponent_SetCascadeTransitionFraction_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetCascadeDistributionExponent
// Size: 0x0004
struct DirectionalLightComponent_SetCascadeDistributionExponent_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetBendSunLightingTintTemperature
// Size: 0x0004
struct DirectionalLightComponent_SetBendSunLightingTintTemperature_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetBendSunLightingTint
// Size: 0x0004
struct DirectionalLightComponent_SetBendSunLightingTint_Params {
public:
    uint8_t NewValue[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetBendCloudLightingTintTemperature
// Size: 0x0004
struct DirectionalLightComponent_SetBendCloudLightingTintTemperature_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetBendCloudLightingTint
// Size: 0x0004
struct DirectionalLightComponent_SetBendCloudLightingTint_Params {
public:
    uint8_t NewValue[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.SetBendAtmosphereCaptureSaturation
// Size: 0x0004
struct DirectionalLightComponent_SetBendAtmosphereCaptureSaturation_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: Engine.DirectionalLightComponent.GetBendAtmosphereAffectedColor
// Size: 0x0010
struct DirectionalLightComponent_GetBendAtmosphereAffectedColor_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.SkyLightComponent.SetOcclusionTint
// Size: 0x0004
struct SkyLightComponent_SetOcclusionTint_Params {
public:
    uint8_t InTint[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.SkyLightComponent.SetMinOcclusion
// Size: 0x0004
struct SkyLightComponent_SetMinOcclusion_Params {
public:
    float InMinOcclusion; // 0x0000 (0x0004)
};

// Function: Engine.SkyLightComponent.SetLightColor
// Size: 0x0010
struct SkyLightComponent_SetLightColor_Params {
public:
    uint8_t NewLightColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.SkyLightComponent.SetIntensity
// Size: 0x0004
struct SkyLightComponent_SetIntensity_Params {
public:
    float NewIntensity; // 0x0000 (0x0004)
};

// Function: Engine.SkyLightComponent.SetIndirectLightingIntensity
// Size: 0x0004
struct SkyLightComponent_SetIndirectLightingIntensity_Params {
public:
    float NewIntensity; // 0x0000 (0x0004)
};

// Function: Engine.SkyLightComponent.SetCubemapBlend
// Size: 0x0014
struct SkyLightComponent_SetCubemapBlend_Params {
public:
    class UObject* SourceCubemap; // 0x0000 (0x0008)
    class UObject* DestinationCubemap; // 0x0008 (0x0008)
    float InBlendFraction; // 0x0010 (0x0004)
};

// Function: Engine.SkyLightComponent.SetCubemap
// Size: 0x0008
struct SkyLightComponent_SetCubemap_Params {
public:
    class UObject* NewCubemap; // 0x0000 (0x0008)
};

// Function: Engine.SkyLightComponent.RecaptureSky
// Size: 0x0000
struct SkyLightComponent_RecaptureSky_Params {
public:
};

// Function: Engine.PhysicsSpringComponent.GetSpringRestingPoint
// Size: 0x000C
struct PhysicsSpringComponent_GetSpringRestingPoint_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsSpringComponent.GetSpringDirection
// Size: 0x000C
struct PhysicsSpringComponent_GetSpringDirection_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint
// Size: 0x000C
struct PhysicsSpringComponent_GetSpringCurrentEndPoint_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar
// Size: 0x0004
struct PhysicsSpringComponent_GetNormalizedCompressionScalar_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PostProcessComponent.AddOrUpdateBlendable
// Size: 0x0014
struct PostProcessComponent_AddOrUpdateBlendable_Params {
public:
    uint8_t InBlendableObject[0x10]; // 0x0000 (0x0010)
    float InWeight; // 0x0010 (0x0004)
};

// Function: Engine.ArrowComponent.SetArrowColor_New
// Size: 0x0010
struct ArrowComponent_SetArrowColor_New_Params {
public:
    uint8_t NewColor[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.ArrowComponent.SetArrowColor_DEPRECATED
// Size: 0x0004
struct ArrowComponent_SetArrowColor_DEPRECATED_Params {
public:
    uint8_t NewColor[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.BillboardComponent.SetUV
// Size: 0x0010
struct BillboardComponent_SetUV_Params {
public:
    int32_t NewU; // 0x0000 (0x0004)
    int32_t NewUL; // 0x0004 (0x0004)
    int32_t NewV; // 0x0008 (0x0004)
    int32_t NewVL; // 0x000C (0x0004)
};

// Function: Engine.BillboardComponent.SetSpriteAndUV
// Size: 0x0018
struct BillboardComponent_SetSpriteAndUV_Params {
public:
    class UObject* NewSprite; // 0x0000 (0x0008)
    int32_t NewU; // 0x0008 (0x0004)
    int32_t NewUL; // 0x000C (0x0004)
    int32_t NewV; // 0x0010 (0x0004)
    int32_t NewVL; // 0x0014 (0x0004)
};

// Function: Engine.BillboardComponent.SetSprite
// Size: 0x0008
struct BillboardComponent_SetSprite_Params {
public:
    class UObject* NewSprite; // 0x0000 (0x0008)
};

// Function: Engine.MaterialBillboardComponent.AddElement
// Size: 0x0028
struct MaterialBillboardComponent_AddElement_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
    class UObject* DistanceToOpacityCurve; // 0x0008 (0x0008)
    bool bSizeIsInScreenSpace; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float BaseSizeX; // 0x0014 (0x0004)
    float BaseSizeY; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* DistanceToSizeCurve; // 0x0020 (0x0008)
};

// Function: Engine.DestructibleComponent.SetDestructibleMesh
// Size: 0x0008
struct DestructibleComponent_SetDestructibleMesh_Params {
public:
    class UObject* NewMesh; // 0x0000 (0x0008)
};

// Function: Engine.DestructibleComponent.GetDestructibleMesh
// Size: 0x0008
struct DestructibleComponent_GetDestructibleMesh_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.DestructibleComponent.ApplyRadiusDamage
// Size: 0x0019
struct DestructibleComponent_ApplyRadiusDamage_Params {
public:
    float BaseDamage; // 0x0000 (0x0004)
    uint8_t HurtOrigin[0xC]; // 0x0004 (0x000C)
    float DamageRadius; // 0x0010 (0x0004)
    float ImpulseStrength; // 0x0014 (0x0004)
    bool bFullDamage; // 0x0018 (0x0001)
};

// Function: Engine.DestructibleComponent.ApplyDamage
// Size: 0x0020
struct DestructibleComponent_ApplyDamage_Params {
public:
    float DamageAmount; // 0x0000 (0x0004)
    uint8_t HitLocation[0xC]; // 0x0004 (0x000C)
    uint8_t ImpulseDir[0xC]; // 0x0010 (0x000C)
    float ImpulseStrength; // 0x001C (0x0004)
};

// Function: Engine.PoseableMeshComponent.SetBoneTransformByName
// Size: 0x0041
struct PoseableMeshComponent_SetBoneTransformByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t InTransform[0x30]; // 0x0010 (0x0030)
    uint8_t BoneSpace; // 0x0040 (0x0001)
};

// Function: Engine.PoseableMeshComponent.SetBoneScaleByName
// Size: 0x0015
struct PoseableMeshComponent_SetBoneScaleByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t InScale3D[0xC]; // 0x0008 (0x000C)
    uint8_t BoneSpace; // 0x0014 (0x0001)
};

// Function: Engine.PoseableMeshComponent.SetBoneRotationByName
// Size: 0x0015
struct PoseableMeshComponent_SetBoneRotationByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t InRotation[0xC]; // 0x0008 (0x000C)
    uint8_t BoneSpace; // 0x0014 (0x0001)
};

// Function: Engine.PoseableMeshComponent.SetBoneLocationByName
// Size: 0x0015
struct PoseableMeshComponent_SetBoneLocationByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t InLocation[0xC]; // 0x0008 (0x000C)
    uint8_t BoneSpace; // 0x0014 (0x0001)
};

// Function: Engine.PoseableMeshComponent.ResetBoneTransformByName
// Size: 0x0008
struct PoseableMeshComponent_ResetBoneTransformByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
};

// Function: Engine.PoseableMeshComponent.GetBoneTransformByName
// Size: 0x0040
struct PoseableMeshComponent_GetBoneTransformByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t BoneSpace; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.PoseableMeshComponent.GetBoneScaleByName
// Size: 0x0018
struct PoseableMeshComponent_GetBoneScaleByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t BoneSpace; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PoseableMeshComponent.GetBoneRotationByName
// Size: 0x0018
struct PoseableMeshComponent_GetBoneRotationByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t BoneSpace; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PoseableMeshComponent.GetBoneLocationByName
// Size: 0x0018
struct PoseableMeshComponent_GetBoneLocationByName_Params {
public:
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t BoneSpace; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.PoseableMeshComponent.CopyPoseFromSkeletalComponent
// Size: 0x0008
struct PoseableMeshComponent_CopyPoseFromSkeletalComponent_Params {
public:
    class UObject* InComponentToCopy; // 0x0000 (0x0008)
};

// Function: Engine.ParticleSystem.ContainsEmitterType
// Size: 0x0009
struct ParticleSystem_ContainsEmitterType_Params {
public:
    class UClass* TypeData; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.ParticleSystemComponent.SetVectorParameter
// Size: 0x0014
struct ParticleSystemComponent_SetVectorParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t Param[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.ParticleSystemComponent.SetTrailSourceData
// Size: 0x0018
struct ParticleSystemComponent_SetTrailSourceData_Params {
public:
    struct FName InFirstSocketName; // 0x0000 (0x0008)
    struct FName InSecondSocketName; // 0x0008 (0x0008)
    uint8_t InWidthMode; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float InWidth; // 0x0014 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetTemplate
// Size: 0x0008
struct ParticleSystemComponent_SetTemplate_Params {
public:
    class UObject* NewTemplate; // 0x0000 (0x0008)
};

// Function: Engine.ParticleSystemComponent.SetMaterialParameter
// Size: 0x0010
struct ParticleSystemComponent_SetMaterialParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* Param; // 0x0008 (0x0008)
};

// Function: Engine.ParticleSystemComponent.SetFloatParameter
// Size: 0x000C
struct ParticleSystemComponent_SetFloatParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    float Param; // 0x0008 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetEmitterEnable
// Size: 0x0009
struct ParticleSystemComponent_SetEmitterEnable_Params {
public:
    struct FName EmitterName; // 0x0000 (0x0008)
    bool bNewEnableState; // 0x0008 (0x0001)
};

// Function: Engine.ParticleSystemComponent.SetColorParameter
// Size: 0x0018
struct ParticleSystemComponent_SetColorParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t Param[0x10]; // 0x0008 (0x0010)
};

// Function: Engine.ParticleSystemComponent.SetBeamTargetTangent
// Size: 0x0014
struct ParticleSystemComponent_SetBeamTargetTangent_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    uint8_t NewTangentPoint[0xC]; // 0x0004 (0x000C)
    int32_t TargetIndex; // 0x0010 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetBeamTargetStrength
// Size: 0x000C
struct ParticleSystemComponent_SetBeamTargetStrength_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    float NewTargetStrength; // 0x0004 (0x0004)
    int32_t TargetIndex; // 0x0008 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetBeamTargetPoint
// Size: 0x0014
struct ParticleSystemComponent_SetBeamTargetPoint_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    uint8_t NewTargetPoint[0xC]; // 0x0004 (0x000C)
    int32_t TargetIndex; // 0x0010 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetBeamSourceTangent
// Size: 0x0014
struct ParticleSystemComponent_SetBeamSourceTangent_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    uint8_t NewTangentPoint[0xC]; // 0x0004 (0x000C)
    int32_t SourceIndex; // 0x0010 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetBeamSourceStrength
// Size: 0x000C
struct ParticleSystemComponent_SetBeamSourceStrength_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    float NewSourceStrength; // 0x0004 (0x0004)
    int32_t SourceIndex; // 0x0008 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetBeamSourcePoint
// Size: 0x0014
struct ParticleSystemComponent_SetBeamSourcePoint_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    uint8_t NewSourcePoint[0xC]; // 0x0004 (0x000C)
    int32_t SourceIndex; // 0x0010 (0x0004)
};

// Function: Engine.ParticleSystemComponent.SetBeamEndPoint
// Size: 0x0010
struct ParticleSystemComponent_SetBeamEndPoint_Params {
public:
    int32_t EmitterIndex; // 0x0000 (0x0004)
    uint8_t NewEndPoint[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.ParticleSystemComponent.SetAutoAttachParams
// Size: 0x0011
struct ParticleSystemComponent_SetAutoAttachParams_Params {
public:
    class UObject* Parent; // 0x0000 (0x0008)
    struct FName SocketName; // 0x0008 (0x0008)
    uint8_t LocationType; // 0x0010 (0x0001)
};

// Function: Engine.ParticleSystemComponent.SetActorParameter
// Size: 0x0010
struct ParticleSystemComponent_SetActorParameter_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* Param; // 0x0008 (0x0008)
};

// Function: Engine.ParticleSystemComponent.GetNumActiveParticles
// Size: 0x0004
struct ParticleSystemComponent_GetNumActiveParticles_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.ParticleSystemComponent.GetNamedMaterial
// Size: 0x0010
struct ParticleSystemComponent_GetNamedMaterial_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.ParticleSystemComponent.GetCollisionHitData
// Size: 0x0088
struct ParticleSystemComponent_GetCollisionHitData_Params {
public:
    uint8_t ReturnValue[0x88]; // 0x0000 (0x0088)
};

// Function: Engine.ParticleSystemComponent.GenerateParticleEvent
// Size: 0x0030
struct ParticleSystemComponent_GenerateParticleEvent_Params {
public:
    struct FName InEventName; // 0x0000 (0x0008)
    float InEmitterTime; // 0x0008 (0x0004)
    uint8_t InLocation[0xC]; // 0x000C (0x000C)
    uint8_t inDirection[0xC]; // 0x0018 (0x000C)
    uint8_t InVelocity[0xC]; // 0x0024 (0x000C)
};

// Function: Engine.ParticleSystemComponent.EndTrails
// Size: 0x0000
struct ParticleSystemComponent_EndTrails_Params {
public:
};

// Function: Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance
// Size: 0x0018
struct ParticleSystemComponent_CreateNamedDynamicMaterialInstance_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    class UObject* SourceMaterial; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.ParticleSystemComponent.BeginTrails
// Size: 0x0018
struct ParticleSystemComponent_BeginTrails_Params {
public:
    struct FName InFirstSocketName; // 0x0000 (0x0008)
    struct FName InSecondSocketName; // 0x0008 (0x0008)
    uint8_t InWidthMode; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float InWidth; // 0x0014 (0x0004)
};

// Function: Engine.BendNavModifierComponent.SetNavigationRelevancy
// Size: 0x0001
struct BendNavModifierComponent_SetNavigationRelevancy_Params {
public:
    bool bRelevant; // 0x0000 (0x0001)
};

// Function: Engine.BendSplineComponent.GetLocationAlongSplineFromWorldLocation
// Size: 0x0020
struct BendSplineComponent_GetLocationAlongSplineFromWorldLocation_Params {
public:
    uint8_t StartWorldLocation[0xC]; // 0x0000 (0x000C)
    float distFrom; // 0x000C (0x0004)
    uint8_t CoordinateSpace; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.BendSplineComponent.GetDistanceAlongSpline
// Size: 0x0010
struct BendSplineComponent_GetDistanceAlongSpline_Params {
public:
    uint8_t StartWorldLocation[0xC]; // 0x0000 (0x000C)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.BendSplineComponent.GetClosestSegmentIndex
// Size: 0x0010
struct BendSplineComponent_GetClosestSegmentIndex_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.TextRenderComponent.SetYScale
// Size: 0x0004
struct TextRenderComponent_SetYScale_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.TextRenderComponent.SetXScale
// Size: 0x0004
struct TextRenderComponent_SetXScale_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.TextRenderComponent.SetWorldSize
// Size: 0x0004
struct TextRenderComponent_SetWorldSize_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.TextRenderComponent.SetTextRenderColor
// Size: 0x0004
struct TextRenderComponent_SetTextRenderColor_Params {
public:
    uint8_t Value[0x4]; // 0x0000 (0x0004)
};

// Function: Engine.TextRenderComponent.SetTextMaterial
// Size: 0x0008
struct TextRenderComponent_SetTextMaterial_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
};

// Function: Engine.TextRenderComponent.SetText
// Size: 0x0010
struct TextRenderComponent_SetText_Params {
public:
    struct FString Value; // 0x0000 (0x0010)
};

// Function: Engine.TextRenderComponent.SetHorizSpacingAdjust
// Size: 0x0004
struct TextRenderComponent_SetHorizSpacingAdjust_Params {
public:
    float Value; // 0x0000 (0x0004)
};

// Function: Engine.TextRenderComponent.SetHorizontalAlignment
// Size: 0x0001
struct TextRenderComponent_SetHorizontalAlignment_Params {
public:
    uint8_t Value; // 0x0000 (0x0001)
};

// Function: Engine.TextRenderComponent.SetFont
// Size: 0x0008
struct TextRenderComponent_SetFont_Params {
public:
    class UObject* Value; // 0x0000 (0x0008)
};

// Function: Engine.TextRenderComponent.K2_SetText
// Size: 0x0018
struct TextRenderComponent_K2_SetText_Params {
public:
    struct FText Value; // 0x0000 (0x0018)
};

// Function: Engine.TextRenderComponent.GetTextWorldSize
// Size: 0x000C
struct TextRenderComponent_GetTextWorldSize_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.TextRenderComponent.GetTextLocalSize
// Size: 0x000C
struct TextRenderComponent_GetTextLocalSize_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.VectorFieldComponent.SetIntensity
// Size: 0x0004
struct VectorFieldComponent_SetIntensity_Params {
public:
    float NewIntensity; // 0x0000 (0x0004)
};

// Function: Engine.RadialForceComponent.RemoveObjectTypeToAffect
// Size: 0x0001
struct RadialForceComponent_RemoveObjectTypeToAffect_Params {
public:
    uint8_t ObjectType; // 0x0000 (0x0001)
};

// Function: Engine.RadialForceComponent.FireImpulse
// Size: 0x0000
struct RadialForceComponent_FireImpulse_Params {
public:
};

// Function: Engine.RadialForceComponent.AddObjectTypeToAffect
// Size: 0x0001
struct RadialForceComponent_AddObjectTypeToAffect_Params {
public:
    uint8_t ObjectType; // 0x0000 (0x0001)
};

// Function: Engine.SceneCaptureComponent.HideComponent
// Size: 0x0008
struct SceneCaptureComponent_HideComponent_Params {
public:
    class UObject* InComponent; // 0x0000 (0x0008)
};

// Function: Engine.SceneCaptureComponent.HideActorComponents
// Size: 0x0008
struct SceneCaptureComponent_HideActorComponents_Params {
public:
    class UObject* InActor; // 0x0000 (0x0008)
};

// Function: Engine.SceneCaptureComponent2D.UpdateContent
// Size: 0x0000
struct SceneCaptureComponent2D_UpdateContent_Params {
public:
};

// Function: Engine.SceneCaptureComponent2D.AddOrUpdateBlendable
// Size: 0x0014
struct SceneCaptureComponent2D_AddOrUpdateBlendable_Params {
public:
    uint8_t InBlendableObject[0x10]; // 0x0000 (0x0010)
    float InWeight; // 0x0010 (0x0004)
};

// Function: Engine.SceneCaptureComponentCube.UpdateContent
// Size: 0x0000
struct SceneCaptureComponentCube_UpdateContent_Params {
public:
};

// Function: Engine.SpringArmComponent.UpdateDesiredArmLocation_BP
// Size: 0x0000
struct SpringArmComponent_UpdateDesiredArmLocation_BP_Params {
public:
};

// Function: Engine.TimelineComponent.Stop
// Size: 0x0000
struct TimelineComponent_Stop_Params {
public:
};

// Function: Engine.TimelineComponent.SetTimelineLengthMode
// Size: 0x0001
struct TimelineComponent_SetTimelineLengthMode_Params {
public:
    uint8_t NewLengthMode; // 0x0000 (0x0001)
};

// Function: Engine.TimelineComponent.SetTimelineLength
// Size: 0x0004
struct TimelineComponent_SetTimelineLength_Params {
public:
    float NewLength; // 0x0000 (0x0004)
};

// Function: Engine.TimelineComponent.SetPlayRate
// Size: 0x0004
struct TimelineComponent_SetPlayRate_Params {
public:
    float NewRate; // 0x0000 (0x0004)
};

// Function: Engine.TimelineComponent.SetPlaybackPosition
// Size: 0x0006
struct TimelineComponent_SetPlaybackPosition_Params {
public:
    float NewPosition; // 0x0000 (0x0004)
    bool bFireEvents; // 0x0004 (0x0001)
    bool bFireUpdate; // 0x0005 (0x0001)
};

// Function: Engine.TimelineComponent.SetNewTime
// Size: 0x0004
struct TimelineComponent_SetNewTime_Params {
public:
    float NewTime; // 0x0000 (0x0004)
};

// Function: Engine.TimelineComponent.SetLooping
// Size: 0x0001
struct TimelineComponent_SetLooping_Params {
public:
    bool bNewLooping; // 0x0000 (0x0001)
};

// Function: Engine.TimelineComponent.ReverseFromEnd
// Size: 0x0000
struct TimelineComponent_ReverseFromEnd_Params {
public:
};

// Function: Engine.TimelineComponent.Reverse
// Size: 0x0000
struct TimelineComponent_Reverse_Params {
public:
};

// Function: Engine.TimelineComponent.PlayFromStart
// Size: 0x0000
struct TimelineComponent_PlayFromStart_Params {
public:
};

// Function: Engine.TimelineComponent.Play
// Size: 0x0000
struct TimelineComponent_Play_Params {
public:
};

// Function: Engine.TimelineComponent.OnRep_Timeline
// Size: 0x0000
struct TimelineComponent_OnRep_Timeline_Params {
public:
};

// Function: Engine.TimelineComponent.IsReversing
// Size: 0x0001
struct TimelineComponent_IsReversing_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.TimelineComponent.IsPlaying
// Size: 0x0001
struct TimelineComponent_IsPlaying_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.TimelineComponent.IsLooping
// Size: 0x0001
struct TimelineComponent_IsLooping_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.TimelineComponent.GetTimelineLength
// Size: 0x0004
struct TimelineComponent_GetTimelineLength_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.TimelineComponent.GetPlayRate
// Size: 0x0004
struct TimelineComponent_GetPlayRate_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.TimelineComponent.GetPlaybackPosition
// Size: 0x0004
struct TimelineComponent_GetPlaybackPosition_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.VehicleAnimInstance.GetVehicle
// Size: 0x0008
struct VehicleAnimInstance_GetVehicle_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.AnimNotifyState_Trail.OverridePSTemplate
// Size: 0x0018
struct AnimNotifyState_Trail_OverridePSTemplate_Params {
public:
    class UObject* MeshComp; // 0x0000 (0x0008)
    class UObject* Animation; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.AvoidanceManager.RegisterMovementComponent
// Size: 0x000D
struct AvoidanceManager_RegisterMovementComponent_Params {
public:
    class UObject* MovementComp; // 0x0000 (0x0008)
    float AvoidanceWeight; // 0x0008 (0x0004)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: Engine.AvoidanceManager.GetObjectCount
// Size: 0x0004
struct AvoidanceManager_GetObjectCount_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.AvoidanceManager.GetNewAvoidanceUID
// Size: 0x0004
struct AvoidanceManager_GetNewAvoidanceUID_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.AvoidanceManager.GetAvoidanceVelocityIgnoringUID
// Size: 0x0050
struct AvoidanceManager_GetAvoidanceVelocityIgnoringUID_Params {
public:
    uint8_t AvoidanceData[0x3C]; // 0x0000 (0x003C)
    float DeltaTime; // 0x003C (0x0004)
    int32_t IgnoreThisUID; // 0x0040 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0044 (0x000C)
};

// Function: Engine.AvoidanceManager.GetAvoidanceVelocityForComponent
// Size: 0x0014
struct AvoidanceManager_GetAvoidanceVelocityForComponent_Params {
public:
    class UObject* MovementComp; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.AvoidanceManager.GetAvoidanceVelocity
// Size: 0x004C
struct AvoidanceManager_GetAvoidanceVelocity_Params {
public:
    uint8_t AvoidanceData[0x3C]; // 0x0000 (0x003C)
    float DeltaTime; // 0x003C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0040 (0x000C)
};

// Function: Engine.KismetMathLibrary.Xor_IntInt
// Size: 0x000C
struct KismetMathLibrary_Xor_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.VSizeSquared
// Size: 0x0010
struct KismetMathLibrary_VSizeSquared_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.VSize2DSquared
// Size: 0x000C
struct KismetMathLibrary_VSize2DSquared_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.VSize2D
// Size: 0x000C
struct KismetMathLibrary_VSize2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.VSize
// Size: 0x0010
struct KismetMathLibrary_VSize_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.VLerp
// Size: 0x0028
struct KismetMathLibrary_VLerp_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float Alpha; // 0x0018 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x001C (0x000C)
};

// Function: Engine.KismetMathLibrary.VInterpTo_Constant
// Size: 0x002C
struct KismetMathLibrary_VInterpTo_Constant_Params {
public:
    uint8_t Current[0xC]; // 0x0000 (0x000C)
    uint8_t Target[0xC]; // 0x000C (0x000C)
    float DeltaTime; // 0x0018 (0x0004)
    float InterpSpeed; // 0x001C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0020 (0x000C)
};

// Function: Engine.KismetMathLibrary.VInterpTo
// Size: 0x002C
struct KismetMathLibrary_VInterpTo_Params {
public:
    uint8_t Current[0xC]; // 0x0000 (0x000C)
    uint8_t Target[0xC]; // 0x000C (0x000C)
    float DeltaTime; // 0x0018 (0x0004)
    float InterpSpeed; // 0x001C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0020 (0x000C)
};

// Function: Engine.KismetMathLibrary.Vector2DInterpTo_Constant
// Size: 0x0020
struct KismetMathLibrary_Vector2DInterpTo_Constant_Params {
public:
    uint8_t Current[0x8]; // 0x0000 (0x0008)
    uint8_t Target[0x8]; // 0x0008 (0x0008)
    float DeltaTime; // 0x0010 (0x0004)
    float InterpSpeed; // 0x0014 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0018 (0x0008)
};

// Function: Engine.KismetMathLibrary.Vector2DInterpTo
// Size: 0x0020
struct KismetMathLibrary_Vector2DInterpTo_Params {
public:
    uint8_t Current[0x8]; // 0x0000 (0x0008)
    uint8_t Target[0x8]; // 0x0008 (0x0008)
    float DeltaTime; // 0x0010 (0x0004)
    float InterpSpeed; // 0x0014 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0018 (0x0008)
};

// Function: Engine.KismetMathLibrary.VEase
// Size: 0x0034
struct KismetMathLibrary_VEase_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float Alpha; // 0x0018 (0x0004)
    uint8_t EasingFunc; // 0x001C (0x0001)
    uint8_t Pad_0[0x3]; // 0x001D (0x0003)
    float BlendExp; // 0x0020 (0x0004)
    int32_t Steps; // 0x0024 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0028 (0x000C)
};

// Function: Engine.KismetMathLibrary.UtcNow
// Size: 0x0008
struct KismetMathLibrary_UtcNow_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.TransformLocation
// Size: 0x0048
struct KismetMathLibrary_TransformLocation_Params {
public:
    uint8_t T[0x30]; // 0x0000 (0x0030)
    uint8_t Location[0xC]; // 0x0030 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x003C (0x000C)
};

// Function: Engine.KismetMathLibrary.TransformDirection
// Size: 0x0048
struct KismetMathLibrary_TransformDirection_Params {
public:
    uint8_t T[0x30]; // 0x0000 (0x0030)
    uint8_t Direction[0xC]; // 0x0030 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x003C (0x000C)
};

// Function: Engine.KismetMathLibrary.Today
// Size: 0x0008
struct KismetMathLibrary_Today_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.TLerp
// Size: 0x00A0
struct KismetMathLibrary_TLerp_Params {
public:
    uint8_t A[0x30]; // 0x0000 (0x0030)
    uint8_t B[0x30]; // 0x0030 (0x0030)
    float Alpha; // 0x0060 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0064 (0x000C)
    uint8_t ReturnValue[0x30]; // 0x0070 (0x0030)
};

// Function: Engine.KismetMathLibrary.TInterpTo
// Size: 0x00A0
struct KismetMathLibrary_TInterpTo_Params {
public:
    uint8_t Current[0x30]; // 0x0000 (0x0030)
    uint8_t Target[0x30]; // 0x0030 (0x0030)
    float DeltaTime; // 0x0060 (0x0004)
    float InterpSpeed; // 0x0064 (0x0004)
    uint8_t Pad_0[0x8]; // 0x0068 (0x0008)
    uint8_t ReturnValue[0x30]; // 0x0070 (0x0030)
};

// Function: Engine.KismetMathLibrary.TimespanZeroValue
// Size: 0x0008
struct KismetMathLibrary_TimespanZeroValue_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.TimespanRatio
// Size: 0x0014
struct KismetMathLibrary_TimespanRatio_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.TimespanMinValue
// Size: 0x0008
struct KismetMathLibrary_TimespanMinValue_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.TimespanMaxValue
// Size: 0x0008
struct KismetMathLibrary_TimespanMaxValue_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.TimespanFromString
// Size: 0x0019
struct KismetMathLibrary_TimespanFromString_Params {
public:
    struct FString TimespanString; // 0x0000 (0x0010)
    uint8_t Result[0x8]; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetMathLibrary.TEase
// Size: 0x00A0
struct KismetMathLibrary_TEase_Params {
public:
    uint8_t A[0x30]; // 0x0000 (0x0030)
    uint8_t B[0x30]; // 0x0030 (0x0030)
    float Alpha; // 0x0060 (0x0004)
    uint8_t EasingFunc; // 0x0064 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0065 (0x0003)
    float BlendExp; // 0x0068 (0x0004)
    int32_t Steps; // 0x006C (0x0004)
    uint8_t ReturnValue[0x30]; // 0x0070 (0x0030)
};

// Function: Engine.KismetMathLibrary.Tan
// Size: 0x0008
struct KismetMathLibrary_Tan_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Subtract_VectorVector
// Size: 0x0024
struct KismetMathLibrary_Subtract_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.Subtract_VectorInt
// Size: 0x001C
struct KismetMathLibrary_Subtract_VectorInt_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    int32_t B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Subtract_VectorFloat
// Size: 0x001C
struct KismetMathLibrary_Subtract_VectorFloat_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Subtract_Vector2DVector2D
// Size: 0x0018
struct KismetMathLibrary_Subtract_Vector2DVector2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Subtract_Vector2DFloat
// Size: 0x0014
struct KismetMathLibrary_Subtract_Vector2DFloat_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float B; // 0x0008 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x000C (0x0008)
};

// Function: Engine.KismetMathLibrary.Subtract_TimespanTimespan
// Size: 0x0018
struct KismetMathLibrary_Subtract_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Subtract_IntInt
// Size: 0x000C
struct KismetMathLibrary_Subtract_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Subtract_FloatFloat
// Size: 0x000C
struct KismetMathLibrary_Subtract_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Subtract_DateTimeTimespan
// Size: 0x0018
struct KismetMathLibrary_Subtract_DateTimeTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Subtract_DateTimeDateTime
// Size: 0x0018
struct KismetMathLibrary_Subtract_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Subtract_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Subtract_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Square
// Size: 0x0008
struct KismetMathLibrary_Square_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Sqrt
// Size: 0x0008
struct KismetMathLibrary_Sqrt_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Sin
// Size: 0x0008
struct KismetMathLibrary_Sin_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.SignOfInteger
// Size: 0x0008
struct KismetMathLibrary_SignOfInteger_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.SignOfFloat
// Size: 0x0008
struct KismetMathLibrary_SignOfFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.SetRandomStreamSeed
// Size: 0x000C
struct KismetMathLibrary_SetRandomStreamSeed_Params {
public:
    uint8_t Stream[0x8]; // 0x0000 (0x0008)
    int32_t NewSeed; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.SelectVector
// Size: 0x0028
struct KismetMathLibrary_SelectVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    bool bPickA; // 0x0018 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0019 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x001C (0x000C)
};

// Function: Engine.KismetMathLibrary.SelectTransform
// Size: 0x00A0
struct KismetMathLibrary_SelectTransform_Params {
public:
    uint8_t A[0x30]; // 0x0000 (0x0030)
    uint8_t B[0x30]; // 0x0030 (0x0030)
    bool bPickA; // 0x0060 (0x0001)
    uint8_t Pad_0[0xF]; // 0x0061 (0x000F)
    uint8_t ReturnValue[0x30]; // 0x0070 (0x0030)
};

// Function: Engine.KismetMathLibrary.SelectString
// Size: 0x0038
struct KismetMathLibrary_SelectString_Params {
public:
    struct FString A; // 0x0000 (0x0010)
    struct FString B; // 0x0010 (0x0010)
    bool bPickA; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    struct FString ReturnValue; // 0x0028 (0x0010)
};

// Function: Engine.KismetMathLibrary.SelectRotator
// Size: 0x0028
struct KismetMathLibrary_SelectRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    bool bPickA; // 0x0018 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0019 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x001C (0x000C)
};

// Function: Engine.KismetMathLibrary.SelectObject
// Size: 0x0020
struct KismetMathLibrary_SelectObject_Params {
public:
    class UObject* A; // 0x0000 (0x0008)
    class UObject* B; // 0x0008 (0x0008)
    bool bSelectA; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: Engine.KismetMathLibrary.SelectInt
// Size: 0x0010
struct KismetMathLibrary_SelectInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool bPickA; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.SelectFloat
// Size: 0x0010
struct KismetMathLibrary_SelectFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool bPickA; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.SelectColor
// Size: 0x0034
struct KismetMathLibrary_SelectColor_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    uint8_t B[0x10]; // 0x0010 (0x0010)
    bool bPickA; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    uint8_t ReturnValue[0x10]; // 0x0024 (0x0010)
};

// Function: Engine.KismetMathLibrary.SelectClass
// Size: 0x0020
struct KismetMathLibrary_SelectClass_Params {
public:
    class UClass* A; // 0x0000 (0x0008)
    class UClass* B; // 0x0008 (0x0008)
    bool bSelectA; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UClass* ReturnValue; // 0x0018 (0x0008)
};

// Function: Engine.KismetMathLibrary.SeedRandomStream
// Size: 0x0008
struct KismetMathLibrary_SeedRandomStream_Params {
public:
    uint8_t Stream[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.Round
// Size: 0x0008
struct KismetMathLibrary_Round_Params {
public:
    float A; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.RotatorFromAxisAndAngle
// Size: 0x001C
struct KismetMathLibrary_RotatorFromAxisAndAngle_Params {
public:
    uint8_t Axis[0xC]; // 0x0000 (0x000C)
    float angle; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.RotateAngleAxis
// Size: 0x0028
struct KismetMathLibrary_RotateAngleAxis_Params {
public:
    uint8_t InVect[0xC]; // 0x0000 (0x000C)
    float AngleDeg; // 0x000C (0x0004)
    uint8_t Axis[0xC]; // 0x0010 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x001C (0x000C)
};

// Function: Engine.KismetMathLibrary.RLerp
// Size: 0x002C
struct KismetMathLibrary_RLerp_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float Alpha; // 0x0018 (0x0004)
    bool bShortestPath; // 0x001C (0x0001)
    uint8_t Pad_0[0x3]; // 0x001D (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0020 (0x000C)
};

// Function: Engine.KismetMathLibrary.RInterpTo_Constant
// Size: 0x002C
struct KismetMathLibrary_RInterpTo_Constant_Params {
public:
    uint8_t Current[0xC]; // 0x0000 (0x000C)
    uint8_t Target[0xC]; // 0x000C (0x000C)
    float DeltaTime; // 0x0018 (0x0004)
    float InterpSpeed; // 0x001C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0020 (0x000C)
};

// Function: Engine.KismetMathLibrary.RInterpTo
// Size: 0x002C
struct KismetMathLibrary_RInterpTo_Params {
public:
    uint8_t Current[0xC]; // 0x0000 (0x000C)
    uint8_t Target[0xC]; // 0x000C (0x000C)
    float DeltaTime; // 0x0018 (0x0004)
    float InterpSpeed; // 0x001C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0020 (0x000C)
};

// Function: Engine.KismetMathLibrary.RGBToHSV_Vector
// Size: 0x0020
struct KismetMathLibrary_RGBToHSV_Vector_Params {
public:
    uint8_t RGB[0x10]; // 0x0000 (0x0010)
    uint8_t HSV[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.KismetMathLibrary.RGBToHSV
// Size: 0x0020
struct KismetMathLibrary_RGBToHSV_Params {
public:
    uint8_t InColor[0x10]; // 0x0000 (0x0010)
    float H; // 0x0010 (0x0004)
    float S; // 0x0014 (0x0004)
    float V; // 0x0018 (0x0004)
    float A; // 0x001C (0x0004)
};

// Function: Engine.KismetMathLibrary.ResetRandomStream
// Size: 0x0008
struct KismetMathLibrary_ResetRandomStream_Params {
public:
    uint8_t Stream[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.REase
// Size: 0x0034
struct KismetMathLibrary_REase_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float Alpha; // 0x0018 (0x0004)
    bool bShortestPath; // 0x001C (0x0001)
    uint8_t EasingFunc; // 0x001D (0x0001)
    uint8_t Pad_0[0x2]; // 0x001E (0x0002)
    float BlendExp; // 0x0020 (0x0004)
    int32_t Steps; // 0x0024 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0028 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomUnitVectorInConeWithYawAndPitch
// Size: 0x0020
struct KismetMathLibrary_RandomUnitVectorInConeWithYawAndPitch_Params {
public:
    uint8_t ConeDir[0xC]; // 0x0000 (0x000C)
    float MaxYawInDegrees; // 0x000C (0x0004)
    float MaxPitchInDegrees; // 0x0010 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomUnitVectorInCone
// Size: 0x001C
struct KismetMathLibrary_RandomUnitVectorInCone_Params {
public:
    uint8_t ConeDir[0xC]; // 0x0000 (0x000C)
    float ConeHalfAngle; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomUnitVectorFromStream
// Size: 0x0014
struct KismetMathLibrary_RandomUnitVectorFromStream_Params {
public:
    uint8_t Stream[0x8]; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomUnitVector
// Size: 0x000C
struct KismetMathLibrary_RandomUnitVector_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomRotatorFromStream
// Size: 0x0018
struct KismetMathLibrary_RandomRotatorFromStream_Params {
public:
    bool bRoll; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t Stream[0x8]; // 0x0004 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomRotator
// Size: 0x0010
struct KismetMathLibrary_RandomRotator_Params {
public:
    bool bRoll; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomPointInBoundingBox
// Size: 0x0024
struct KismetMathLibrary_RandomPointInBoundingBox_Params {
public:
    uint8_t Origin[0xC]; // 0x0000 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.RandomIntegerInRangeFromStream
// Size: 0x0014
struct KismetMathLibrary_RandomIntegerInRangeFromStream_Params {
public:
    int32_t Min; // 0x0000 (0x0004)
    int32_t Max; // 0x0004 (0x0004)
    uint8_t Stream[0x8]; // 0x0008 (0x0008)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomIntegerInRange
// Size: 0x000C
struct KismetMathLibrary_RandomIntegerInRange_Params {
public:
    int32_t Min; // 0x0000 (0x0004)
    int32_t Max; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomIntegerFromStream
// Size: 0x0010
struct KismetMathLibrary_RandomIntegerFromStream_Params {
public:
    int32_t Max; // 0x0000 (0x0004)
    uint8_t Stream[0x8]; // 0x0004 (0x0008)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomInteger
// Size: 0x0008
struct KismetMathLibrary_RandomInteger_Params {
public:
    int32_t Max; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomFloatInRangeFromStream
// Size: 0x0014
struct KismetMathLibrary_RandomFloatInRangeFromStream_Params {
public:
    float Min; // 0x0000 (0x0004)
    float Max; // 0x0004 (0x0004)
    uint8_t Stream[0x8]; // 0x0008 (0x0008)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomFloatInRange
// Size: 0x000C
struct KismetMathLibrary_RandomFloatInRange_Params {
public:
    float Min; // 0x0000 (0x0004)
    float Max; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomFloatFromStream
// Size: 0x000C
struct KismetMathLibrary_RandomFloatFromStream_Params {
public:
    uint8_t Stream[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomFloat
// Size: 0x0004
struct KismetMathLibrary_RandomFloat_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.KismetMathLibrary.RandomBoolFromStream
// Size: 0x0009
struct KismetMathLibrary_RandomBoolFromStream_Params {
public:
    uint8_t Stream[0x8]; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.RandomBool
// Size: 0x0001
struct KismetMathLibrary_RandomBool_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.KismetMathLibrary.RadiansToDegrees
// Size: 0x0008
struct KismetMathLibrary_RadiansToDegrees_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.ProjectVectorOnToVector
// Size: 0x0024
struct KismetMathLibrary_ProjectVectorOnToVector_Params {
public:
    uint8_t V[0xC]; // 0x0000 (0x000C)
    uint8_t Target[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.ProjectVectorOnToPlane
// Size: 0x0024
struct KismetMathLibrary_ProjectVectorOnToPlane_Params {
public:
    uint8_t V[0xC]; // 0x0000 (0x000C)
    uint8_t PlaneNormal[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.ProjectPointOnToPlane
// Size: 0x0030
struct KismetMathLibrary_ProjectPointOnToPlane_Params {
public:
    uint8_t Point[0xC]; // 0x0000 (0x000C)
    uint8_t PlaneBase[0xC]; // 0x000C (0x000C)
    uint8_t PlaneNormal[0xC]; // 0x0018 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0024 (0x000C)
};

// Function: Engine.KismetMathLibrary.PointsAreCoplanar
// Size: 0x0015
struct KismetMathLibrary_PointsAreCoplanar_Params {
public:
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    float Tolerance; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetMathLibrary.Percent_IntInt
// Size: 0x000C
struct KismetMathLibrary_Percent_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Percent_FloatFloat
// Size: 0x000C
struct KismetMathLibrary_Percent_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Percent_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Percent_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Or_IntInt
// Size: 0x000C
struct KismetMathLibrary_Or_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Now
// Size: 0x0008
struct KismetMathLibrary_Now_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.NotEqual_VectorVector
// Size: 0x001D
struct KismetMathLibrary_NotEqual_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float ErrorTolerance; // 0x0018 (0x0004)
    bool ReturnValue; // 0x001C (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_Vector2DVector2D
// Size: 0x0015
struct KismetMathLibrary_NotEqual_Vector2DVector2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    float ErrorTolerance; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_TimespanTimespan
// Size: 0x0011
struct KismetMathLibrary_NotEqual_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_RotatorRotator
// Size: 0x001D
struct KismetMathLibrary_NotEqual_RotatorRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float ErrorTolerance; // 0x0018 (0x0004)
    bool ReturnValue; // 0x001C (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_ObjectObject
// Size: 0x0011
struct KismetMathLibrary_NotEqual_ObjectObject_Params {
public:
    class UObject* A; // 0x0000 (0x0008)
    class UObject* B; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_NameName
// Size: 0x0011
struct KismetMathLibrary_NotEqual_NameName_Params {
public:
    struct FName A; // 0x0000 (0x0008)
    struct FName B; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_IntInt
// Size: 0x0009
struct KismetMathLibrary_NotEqual_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_FloatFloat
// Size: 0x0009
struct KismetMathLibrary_NotEqual_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_DateTimeDateTime
// Size: 0x0011
struct KismetMathLibrary_NotEqual_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_ClassClass
// Size: 0x0011
struct KismetMathLibrary_NotEqual_ClassClass_Params {
public:
    class UClass* A; // 0x0000 (0x0008)
    class UClass* B; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_ByteByte
// Size: 0x0003
struct KismetMathLibrary_NotEqual_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.NotEqual_BoolBool
// Size: 0x0003
struct KismetMathLibrary_NotEqual_BoolBool_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Not_PreBool
// Size: 0x0002
struct KismetMathLibrary_Not_PreBool_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.KismetMathLibrary.NormalizeToRange
// Size: 0x0010
struct KismetMathLibrary_NormalizeToRange_Params {
public:
    float Value; // 0x0000 (0x0004)
    float RangeMin; // 0x0004 (0x0004)
    float RangeMax; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.NormalizedDeltaRotator
// Size: 0x0024
struct KismetMathLibrary_NormalizedDeltaRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.NormalizeAxis
// Size: 0x0008
struct KismetMathLibrary_NormalizeAxis_Params {
public:
    float angle; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Normal2D
// Size: 0x0010
struct KismetMathLibrary_Normal2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.Normal
// Size: 0x0018
struct KismetMathLibrary_Normal_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.NegateVector
// Size: 0x0018
struct KismetMathLibrary_NegateVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.NegateRotator
// Size: 0x0018
struct KismetMathLibrary_NegateRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.NearlyEqual_TransformTransform
// Size: 0x006D
struct KismetMathLibrary_NearlyEqual_TransformTransform_Params {
public:
    uint8_t A[0x30]; // 0x0000 (0x0030)
    uint8_t B[0x30]; // 0x0030 (0x0030)
    float LocationTolerance; // 0x0060 (0x0004)
    float RotationTolerance; // 0x0064 (0x0004)
    float Scale3DTolerance; // 0x0068 (0x0004)
    bool ReturnValue; // 0x006C (0x0001)
};

// Function: Engine.KismetMathLibrary.NearlyEqual_FloatFloat
// Size: 0x000D
struct KismetMathLibrary_NearlyEqual_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ErrorTolerance; // 0x0008 (0x0004)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat
// Size: 0x000C
struct KismetMathLibrary_MultiplyMultiply_FloatFloat_Params {
public:
    float Base; // 0x0000 (0x0004)
    float Exp; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.MultiplyByPi
// Size: 0x0008
struct KismetMathLibrary_MultiplyByPi_Params {
public:
    float Value; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Multiply_VectorVector
// Size: 0x0024
struct KismetMathLibrary_Multiply_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.Multiply_VectorInt
// Size: 0x001C
struct KismetMathLibrary_Multiply_VectorInt_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    int32_t B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Multiply_VectorFloat
// Size: 0x001C
struct KismetMathLibrary_Multiply_VectorFloat_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Multiply_Vector2DFloat
// Size: 0x0014
struct KismetMathLibrary_Multiply_Vector2DFloat_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float B; // 0x0008 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x000C (0x0008)
};

// Function: Engine.KismetMathLibrary.Multiply_TimespanFloat
// Size: 0x0018
struct KismetMathLibrary_Multiply_TimespanFloat_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float Scalar; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Multiply_RotatorInt
// Size: 0x001C
struct KismetMathLibrary_Multiply_RotatorInt_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    int32_t B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Multiply_RotatorFloat
// Size: 0x001C
struct KismetMathLibrary_Multiply_RotatorFloat_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Multiply_LinearColorLinearColor
// Size: 0x0030
struct KismetMathLibrary_Multiply_LinearColorLinearColor_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    uint8_t B[0x10]; // 0x0010 (0x0010)
    uint8_t ReturnValue[0x10]; // 0x0020 (0x0010)
};

// Function: Engine.KismetMathLibrary.Multiply_LinearColorFloat
// Size: 0x0024
struct KismetMathLibrary_Multiply_LinearColorFloat_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    float B; // 0x0010 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0014 (0x0010)
};

// Function: Engine.KismetMathLibrary.Multiply_IntInt
// Size: 0x000C
struct KismetMathLibrary_Multiply_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Multiply_IntFloat
// Size: 0x000C
struct KismetMathLibrary_Multiply_IntFloat_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Multiply_FloatFloat
// Size: 0x000C
struct KismetMathLibrary_Multiply_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Multiply_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Multiply_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.MirrorVectorByNormal
// Size: 0x0024
struct KismetMathLibrary_MirrorVectorByNormal_Params {
public:
    uint8_t InVect[0xC]; // 0x0000 (0x000C)
    uint8_t InNormal[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MinOfIntArray
// Size: 0x0018
struct KismetMathLibrary_MinOfIntArray_Params {
public:
    struct TArray<uint8_t> IntArray; // 0x0000 (0x0010)
    int32_t IndexOfMinValue; // 0x0010 (0x0004)
    int32_t MinValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.MinOfFloatArray
// Size: 0x0018
struct KismetMathLibrary_MinOfFloatArray_Params {
public:
    struct TArray<uint8_t> FloatArray; // 0x0000 (0x0010)
    int32_t IndexOfMinValue; // 0x0010 (0x0004)
    float MinValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.MinOfByteArray
// Size: 0x0015
struct KismetMathLibrary_MinOfByteArray_Params {
public:
    struct TArray<uint8_t> ByteArray; // 0x0000 (0x0010)
    int32_t IndexOfMinValue; // 0x0010 (0x0004)
    uint8_t MinValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetMathLibrary.MinimumAreaRectangle
// Size: 0x0045
struct KismetMathLibrary_MinimumAreaRectangle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> InVerts; // 0x0008 (0x0010)
    uint8_t SampleSurfaceNormal[0xC]; // 0x0018 (0x000C)
    uint8_t OutRectCenter[0xC]; // 0x0024 (0x000C)
    uint8_t OutRectRotation[0xC]; // 0x0030 (0x000C)
    float OutSideLengthX; // 0x003C (0x0004)
    float OutSideLengthY; // 0x0040 (0x0004)
    bool bDebugDraw; // 0x0044 (0x0001)
};

// Function: Engine.KismetMathLibrary.Min
// Size: 0x000C
struct KismetMathLibrary_Min_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.MaxOfIntArray
// Size: 0x0018
struct KismetMathLibrary_MaxOfIntArray_Params {
public:
    struct TArray<uint8_t> IntArray; // 0x0000 (0x0010)
    int32_t IndexOfMaxValue; // 0x0010 (0x0004)
    int32_t MaxValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.MaxOfFloatArray
// Size: 0x0018
struct KismetMathLibrary_MaxOfFloatArray_Params {
public:
    struct TArray<uint8_t> FloatArray; // 0x0000 (0x0010)
    int32_t IndexOfMaxValue; // 0x0010 (0x0004)
    float MaxValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.MaxOfByteArray
// Size: 0x0015
struct KismetMathLibrary_MaxOfByteArray_Params {
public:
    struct TArray<uint8_t> ByteArray; // 0x0000 (0x0010)
    int32_t IndexOfMaxValue; // 0x0010 (0x0004)
    uint8_t MaxValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetMathLibrary.Max
// Size: 0x000C
struct KismetMathLibrary_Max_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.MapRangeUnclamped
// Size: 0x0018
struct KismetMathLibrary_MapRangeUnclamped_Params {
public:
    float Value; // 0x0000 (0x0004)
    float InRangeA; // 0x0004 (0x0004)
    float InRangeB; // 0x0008 (0x0004)
    float OutRangeA; // 0x000C (0x0004)
    float OutRangeB; // 0x0010 (0x0004)
    float ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.MapRangeClamped
// Size: 0x0018
struct KismetMathLibrary_MapRangeClamped_Params {
public:
    float Value; // 0x0000 (0x0004)
    float InRangeA; // 0x0004 (0x0004)
    float InRangeB; // 0x0008 (0x0004)
    float OutRangeA; // 0x000C (0x0004)
    float OutRangeB; // 0x0010 (0x0004)
    float ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.MakeVector2D
// Size: 0x0010
struct KismetMathLibrary_MakeVector2D_Params {
public:
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.MakeVector
// Size: 0x0018
struct KismetMathLibrary_MakeVector_Params {
public:
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
    float Z; // 0x0008 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeTransform
// Size: 0x0060
struct KismetMathLibrary_MakeTransform_Params {
public:
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Rotation[0xC]; // 0x000C (0x000C)
    uint8_t Scale[0xC]; // 0x0018 (0x000C)
    uint8_t Pad_0[0xC]; // 0x0024 (0x000C)
    uint8_t ReturnValue[0x30]; // 0x0030 (0x0030)
};

// Function: Engine.KismetMathLibrary.MakeTimespan
// Size: 0x0020
struct KismetMathLibrary_MakeTimespan_Params {
public:
    int32_t Days; // 0x0000 (0x0004)
    int32_t Hours; // 0x0004 (0x0004)
    int32_t Minutes; // 0x0008 (0x0004)
    int32_t Seconds; // 0x000C (0x0004)
    int32_t Milliseconds; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0018 (0x0008)
};

// Function: Engine.KismetMathLibrary.MakeRotFromZY
// Size: 0x0024
struct KismetMathLibrary_MakeRotFromZY_Params {
public:
    uint8_t Z[0xC]; // 0x0000 (0x000C)
    uint8_t Y[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromZX
// Size: 0x0024
struct KismetMathLibrary_MakeRotFromZX_Params {
public:
    uint8_t Z[0xC]; // 0x0000 (0x000C)
    uint8_t X[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromZ
// Size: 0x0018
struct KismetMathLibrary_MakeRotFromZ_Params {
public:
    uint8_t Z[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromYZ
// Size: 0x0024
struct KismetMathLibrary_MakeRotFromYZ_Params {
public:
    uint8_t Y[0xC]; // 0x0000 (0x000C)
    uint8_t Z[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromYX
// Size: 0x0024
struct KismetMathLibrary_MakeRotFromYX_Params {
public:
    uint8_t Y[0xC]; // 0x0000 (0x000C)
    uint8_t X[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromY
// Size: 0x0018
struct KismetMathLibrary_MakeRotFromY_Params {
public:
    uint8_t Y[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromXZ
// Size: 0x0024
struct KismetMathLibrary_MakeRotFromXZ_Params {
public:
    uint8_t X[0xC]; // 0x0000 (0x000C)
    uint8_t Z[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromXY
// Size: 0x0024
struct KismetMathLibrary_MakeRotFromXY_Params {
public:
    uint8_t X[0xC]; // 0x0000 (0x000C)
    uint8_t Y[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotFromX
// Size: 0x0018
struct KismetMathLibrary_MakeRotFromX_Params {
public:
    uint8_t X[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotator
// Size: 0x0018
struct KismetMathLibrary_MakeRotator_Params {
public:
    float Roll; // 0x0000 (0x0004)
    float Pitch; // 0x0004 (0x0004)
    float Yaw; // 0x0008 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRotationFromAxes
// Size: 0x0030
struct KismetMathLibrary_MakeRotationFromAxes_Params {
public:
    uint8_t Forward[0xC]; // 0x0000 (0x000C)
    uint8_t Right[0xC]; // 0x000C (0x000C)
    uint8_t Up[0xC]; // 0x0018 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0024 (0x000C)
};

// Function: Engine.KismetMathLibrary.MakeRandomStream
// Size: 0x000C
struct KismetMathLibrary_MakeRandomStream_Params {
public:
    int32_t InitialSeed; // 0x0000 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0004 (0x0008)
};

// Function: Engine.KismetMathLibrary.MakePulsatingValue
// Size: 0x0010
struct KismetMathLibrary_MakePulsatingValue_Params {
public:
    float InCurrentTime; // 0x0000 (0x0004)
    float InPulsesPerSecond; // 0x0004 (0x0004)
    float InPhase; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.MakeDateTime
// Size: 0x0028
struct KismetMathLibrary_MakeDateTime_Params {
public:
    int32_t Year; // 0x0000 (0x0004)
    int32_t Month; // 0x0004 (0x0004)
    int32_t Day; // 0x0008 (0x0004)
    int32_t Hour; // 0x000C (0x0004)
    int32_t Minute; // 0x0010 (0x0004)
    int32_t second; // 0x0014 (0x0004)
    int32_t Millisecond; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0020 (0x0008)
};

// Function: Engine.KismetMathLibrary.MakeColor
// Size: 0x0020
struct KismetMathLibrary_MakeColor_Params {
public:
    float R; // 0x0000 (0x0004)
    float G; // 0x0004 (0x0004)
    float B; // 0x0008 (0x0004)
    float A; // 0x000C (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.KismetMathLibrary.Loge
// Size: 0x0008
struct KismetMathLibrary_Loge_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal
// Size: 0x0041
struct KismetMathLibrary_LinePlaneIntersection_OriginNormal_Params {
public:
    uint8_t LineStart[0xC]; // 0x0000 (0x000C)
    uint8_t LineEnd[0xC]; // 0x000C (0x000C)
    uint8_t PlaneOrigin[0xC]; // 0x0018 (0x000C)
    uint8_t PlaneNormal[0xC]; // 0x0024 (0x000C)
    float T; // 0x0030 (0x0004)
    uint8_t Intersection[0xC]; // 0x0034 (0x000C)
    bool ReturnValue; // 0x0040 (0x0001)
};

// Function: Engine.KismetMathLibrary.LinePlaneIntersection
// Size: 0x0041
struct KismetMathLibrary_LinePlaneIntersection_Params {
public:
    uint8_t LineStart[0xC]; // 0x0000 (0x000C)
    uint8_t LineEnd[0xC]; // 0x000C (0x000C)
    uint8_t Pad_0[0x8]; // 0x0018 (0x0008)
    uint8_t APlane[0x10]; // 0x0020 (0x0010)
    float T; // 0x0030 (0x0004)
    uint8_t Intersection[0xC]; // 0x0034 (0x000C)
    bool ReturnValue; // 0x0040 (0x0001)
};

// Function: Engine.KismetMathLibrary.LinearColorLerpUsingHSV
// Size: 0x0034
struct KismetMathLibrary_LinearColorLerpUsingHSV_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    uint8_t B[0x10]; // 0x0010 (0x0010)
    float Alpha; // 0x0020 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0024 (0x0010)
};

// Function: Engine.KismetMathLibrary.LinearColorLerp
// Size: 0x0034
struct KismetMathLibrary_LinearColorLerp_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    uint8_t B[0x10]; // 0x0010 (0x0010)
    float Alpha; // 0x0020 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0024 (0x0010)
};

// Function: Engine.KismetMathLibrary.LessLess_VectorRotator
// Size: 0x0024
struct KismetMathLibrary_LessLess_VectorRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.LessEqual_TimespanTimespan
// Size: 0x0011
struct KismetMathLibrary_LessEqual_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.LessEqual_IntInt
// Size: 0x0009
struct KismetMathLibrary_LessEqual_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.LessEqual_FloatFloat
// Size: 0x0009
struct KismetMathLibrary_LessEqual_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.LessEqual_DateTimeDateTime
// Size: 0x0011
struct KismetMathLibrary_LessEqual_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.LessEqual_ByteByte
// Size: 0x0003
struct KismetMathLibrary_LessEqual_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Less_TimespanTimespan
// Size: 0x0011
struct KismetMathLibrary_Less_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.Less_IntInt
// Size: 0x0009
struct KismetMathLibrary_Less_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.Less_FloatFloat
// Size: 0x0009
struct KismetMathLibrary_Less_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.Less_DateTimeDateTime
// Size: 0x0011
struct KismetMathLibrary_Less_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.Less_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Less_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Lerp
// Size: 0x0010
struct KismetMathLibrary_Lerp_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float Alpha; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.IsMorning
// Size: 0x0009
struct KismetMathLibrary_IsMorning_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.IsLeapYear
// Size: 0x0005
struct KismetMathLibrary_IsLeapYear_Params {
public:
    int32_t Year; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.KismetMathLibrary.IsAfternoon
// Size: 0x0009
struct KismetMathLibrary_IsAfternoon_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.InvertTransform
// Size: 0x0060
struct KismetMathLibrary_InvertTransform_Params {
public:
    uint8_t T[0x30]; // 0x0000 (0x0030)
    uint8_t ReturnValue[0x30]; // 0x0030 (0x0030)
};

// Function: Engine.KismetMathLibrary.InverseTransformLocation
// Size: 0x0048
struct KismetMathLibrary_InverseTransformLocation_Params {
public:
    uint8_t T[0x30]; // 0x0000 (0x0030)
    uint8_t Location[0xC]; // 0x0030 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x003C (0x000C)
};

// Function: Engine.KismetMathLibrary.InverseTransformDirection
// Size: 0x0048
struct KismetMathLibrary_InverseTransformDirection_Params {
public:
    uint8_t T[0x30]; // 0x0000 (0x0030)
    uint8_t Direction[0xC]; // 0x0030 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x003C (0x000C)
};

// Function: Engine.KismetMathLibrary.InverseLerp
// Size: 0x0010
struct KismetMathLibrary_InverseLerp_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float Value; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.InRange_FloatFloat
// Size: 0x000F
struct KismetMathLibrary_InRange_FloatFloat_Params {
public:
    float Value; // 0x0000 (0x0004)
    float Min; // 0x0004 (0x0004)
    float Max; // 0x0008 (0x0004)
    bool InclusiveMin; // 0x000C (0x0001)
    bool InclusiveMax; // 0x000D (0x0001)
    bool ReturnValue; // 0x000E (0x0001)
};

// Function: Engine.KismetMathLibrary.Hypotenuse
// Size: 0x000C
struct KismetMathLibrary_Hypotenuse_Params {
public:
    float Width; // 0x0000 (0x0004)
    float Height; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.HSVToRGB_Vector
// Size: 0x0020
struct KismetMathLibrary_HSVToRGB_Vector_Params {
public:
    uint8_t HSV[0x10]; // 0x0000 (0x0010)
    uint8_t RGB[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.KismetMathLibrary.HSVToRGB
// Size: 0x0020
struct KismetMathLibrary_HSVToRGB_Params {
public:
    float H; // 0x0000 (0x0004)
    float S; // 0x0004 (0x0004)
    float V; // 0x0008 (0x0004)
    float A; // 0x000C (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.KismetMathLibrary.GridSnap_Float
// Size: 0x000C
struct KismetMathLibrary_GridSnap_Float_Params {
public:
    float Location; // 0x0000 (0x0004)
    float GridSize; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GreaterGreater_VectorRotator
// Size: 0x0024
struct KismetMathLibrary_GreaterGreater_VectorRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan
// Size: 0x0011
struct KismetMathLibrary_GreaterEqual_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.GreaterEqual_IntInt
// Size: 0x0009
struct KismetMathLibrary_GreaterEqual_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.GreaterEqual_FloatFloat
// Size: 0x0009
struct KismetMathLibrary_GreaterEqual_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime
// Size: 0x0011
struct KismetMathLibrary_GreaterEqual_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.GreaterEqual_ByteByte
// Size: 0x0003
struct KismetMathLibrary_GreaterEqual_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Greater_TimespanTimespan
// Size: 0x0011
struct KismetMathLibrary_Greater_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.Greater_IntInt
// Size: 0x0009
struct KismetMathLibrary_Greater_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.Greater_FloatFloat
// Size: 0x0009
struct KismetMathLibrary_Greater_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.Greater_DateTimeDateTime
// Size: 0x0011
struct KismetMathLibrary_Greater_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.Greater_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Greater_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.GetYear
// Size: 0x000C
struct KismetMathLibrary_GetYear_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetYawPitchFromVector
// Size: 0x0014
struct KismetMathLibrary_GetYawPitchFromVector_Params {
public:
    uint8_t InVec[0xC]; // 0x0000 (0x000C)
    float Yaw; // 0x000C (0x0004)
    float Pitch; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetVectorArrayAverage
// Size: 0x001C
struct KismetMathLibrary_GetVectorArrayAverage_Params {
public:
    struct TArray<uint8_t> Vectors; // 0x0000 (0x0010)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.GetUpVector
// Size: 0x0018
struct KismetMathLibrary_GetUpVector_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.GetTotalSeconds
// Size: 0x000C
struct KismetMathLibrary_GetTotalSeconds_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetTotalMinutes
// Size: 0x000C
struct KismetMathLibrary_GetTotalMinutes_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetTotalMilliseconds
// Size: 0x000C
struct KismetMathLibrary_GetTotalMilliseconds_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetTotalHours
// Size: 0x000C
struct KismetMathLibrary_GetTotalHours_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetTotalDays
// Size: 0x000C
struct KismetMathLibrary_GetTotalDays_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetTimeOfDay
// Size: 0x0010
struct KismetMathLibrary_GetTimeOfDay_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.GetSeconds
// Size: 0x000C
struct KismetMathLibrary_GetSeconds_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetSecond
// Size: 0x000C
struct KismetMathLibrary_GetSecond_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetRightVector
// Size: 0x0018
struct KismetMathLibrary_GetRightVector_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.GetPI
// Size: 0x0004
struct KismetMathLibrary_GetPI_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMonth
// Size: 0x000C
struct KismetMathLibrary_GetMonth_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMinutes
// Size: 0x000C
struct KismetMathLibrary_GetMinutes_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMinute
// Size: 0x000C
struct KismetMathLibrary_GetMinute_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMinElement
// Size: 0x0010
struct KismetMathLibrary_GetMinElement_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMilliseconds
// Size: 0x000C
struct KismetMathLibrary_GetMilliseconds_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMillisecond
// Size: 0x000C
struct KismetMathLibrary_GetMillisecond_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetMaxElement
// Size: 0x0010
struct KismetMathLibrary_GetMaxElement_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.GetHours
// Size: 0x000C
struct KismetMathLibrary_GetHours_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetHour12
// Size: 0x000C
struct KismetMathLibrary_GetHour12_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetHour
// Size: 0x000C
struct KismetMathLibrary_GetHour_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetForwardVector
// Size: 0x0018
struct KismetMathLibrary_GetForwardVector_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.GetDuration
// Size: 0x0010
struct KismetMathLibrary_GetDuration_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.GetDirectionVector
// Size: 0x0024
struct KismetMathLibrary_GetDirectionVector_Params {
public:
    uint8_t From[0xC]; // 0x0000 (0x000C)
    uint8_t To[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.GetDays
// Size: 0x000C
struct KismetMathLibrary_GetDays_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetDayOfYear
// Size: 0x000C
struct KismetMathLibrary_GetDayOfYear_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetDay
// Size: 0x000C
struct KismetMathLibrary_GetDay_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.GetDate
// Size: 0x0010
struct KismetMathLibrary_GetDate_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.GetAxes
// Size: 0x0030
struct KismetMathLibrary_GetAxes_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t X[0xC]; // 0x000C (0x000C)
    uint8_t Y[0xC]; // 0x0018 (0x000C)
    uint8_t Z[0xC]; // 0x0024 (0x000C)
};

// Function: Engine.KismetMathLibrary.FTrunc
// Size: 0x0008
struct KismetMathLibrary_FTrunc_Params {
public:
    float A; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.FromSeconds
// Size: 0x0010
struct KismetMathLibrary_FromSeconds_Params {
public:
    float Seconds; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.FromMinutes
// Size: 0x0010
struct KismetMathLibrary_FromMinutes_Params {
public:
    float Minutes; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.FromMilliseconds
// Size: 0x0010
struct KismetMathLibrary_FromMilliseconds_Params {
public:
    float Milliseconds; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.FromHours
// Size: 0x0010
struct KismetMathLibrary_FromHours_Params {
public:
    float Hours; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.FromDays
// Size: 0x0010
struct KismetMathLibrary_FromDays_Params {
public:
    float Days; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: Engine.KismetMathLibrary.Fraction
// Size: 0x0008
struct KismetMathLibrary_Fraction_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.FMod
// Size: 0x0010
struct KismetMathLibrary_FMod_Params {
public:
    float Dividend; // 0x0000 (0x0004)
    float Divisor; // 0x0004 (0x0004)
    float Remainder; // 0x0008 (0x0004)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.FMin
// Size: 0x000C
struct KismetMathLibrary_FMin_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.FMax
// Size: 0x000C
struct KismetMathLibrary_FMax_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.FixedTurn
// Size: 0x0010
struct KismetMathLibrary_FixedTurn_Params {
public:
    float InCurrent; // 0x0000 (0x0004)
    float InDesired; // 0x0004 (0x0004)
    float InDeltaRate; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.FInterpTo_Constant
// Size: 0x0014
struct KismetMathLibrary_FInterpTo_Constant_Params {
public:
    float Current; // 0x0000 (0x0004)
    float Target; // 0x0004 (0x0004)
    float DeltaTime; // 0x0008 (0x0004)
    float InterpSpeed; // 0x000C (0x0004)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.FInterpTo
// Size: 0x0014
struct KismetMathLibrary_FInterpTo_Params {
public:
    float Current; // 0x0000 (0x0004)
    float Target; // 0x0004 (0x0004)
    float DeltaTime; // 0x0008 (0x0004)
    float InterpSpeed; // 0x000C (0x0004)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.FInterpEaseInOut
// Size: 0x0014
struct KismetMathLibrary_FInterpEaseInOut_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float Alpha; // 0x0008 (0x0004)
    float Exponent; // 0x000C (0x0004)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.FindLookAtRotation
// Size: 0x0024
struct KismetMathLibrary_FindLookAtRotation_Params {
public:
    uint8_t Start[0xC]; // 0x0000 (0x000C)
    uint8_t Target[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.FFloor
// Size: 0x0008
struct KismetMathLibrary_FFloor_Params {
public:
    float A; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.FClamp
// Size: 0x0010
struct KismetMathLibrary_FClamp_Params {
public:
    float Value; // 0x0000 (0x0004)
    float Min; // 0x0004 (0x0004)
    float Max; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.FCeil
// Size: 0x0008
struct KismetMathLibrary_FCeil_Params {
public:
    float A; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Exp
// Size: 0x0008
struct KismetMathLibrary_Exp_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.EqualEqual_VectorVector
// Size: 0x001D
struct KismetMathLibrary_EqualEqual_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float ErrorTolerance; // 0x0018 (0x0004)
    bool ReturnValue; // 0x001C (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_Vector2DVector2D
// Size: 0x0015
struct KismetMathLibrary_EqualEqual_Vector2DVector2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    float ErrorTolerance; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_TransformTransform
// Size: 0x0061
struct KismetMathLibrary_EqualEqual_TransformTransform_Params {
public:
    uint8_t A[0x30]; // 0x0000 (0x0030)
    uint8_t B[0x30]; // 0x0030 (0x0030)
    bool ReturnValue; // 0x0060 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_TimespanTimespan
// Size: 0x0011
struct KismetMathLibrary_EqualEqual_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_RotatorRotator
// Size: 0x001D
struct KismetMathLibrary_EqualEqual_RotatorRotator_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float ErrorTolerance; // 0x0018 (0x0004)
    bool ReturnValue; // 0x001C (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_ObjectObject
// Size: 0x0011
struct KismetMathLibrary_EqualEqual_ObjectObject_Params {
public:
    class UObject* A; // 0x0000 (0x0008)
    class UObject* B; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_NameName
// Size: 0x0011
struct KismetMathLibrary_EqualEqual_NameName_Params {
public:
    struct FName A; // 0x0000 (0x0008)
    struct FName B; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_IntInt
// Size: 0x0009
struct KismetMathLibrary_EqualEqual_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_FloatFloat
// Size: 0x0009
struct KismetMathLibrary_EqualEqual_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime
// Size: 0x0011
struct KismetMathLibrary_EqualEqual_DateTimeDateTime_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_ClassClass
// Size: 0x0011
struct KismetMathLibrary_EqualEqual_ClassClass_Params {
public:
    class UClass* A; // 0x0000 (0x0008)
    class UClass* B; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_ByteByte
// Size: 0x0003
struct KismetMathLibrary_EqualEqual_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.EqualEqual_BoolBool
// Size: 0x0003
struct KismetMathLibrary_EqualEqual_BoolBool_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Ease
// Size: 0x001C
struct KismetMathLibrary_Ease_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float Alpha; // 0x0008 (0x0004)
    uint8_t EasingFunc; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    float BlendExp; // 0x0010 (0x0004)
    int32_t Steps; // 0x0014 (0x0004)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.KismetMathLibrary.DotProduct2D
// Size: 0x0014
struct KismetMathLibrary_DotProduct2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.Dot_VectorVector
// Size: 0x001C
struct KismetMathLibrary_Dot_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.KismetMathLibrary.Divide_VectorVector
// Size: 0x0024
struct KismetMathLibrary_Divide_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.Divide_VectorInt
// Size: 0x001C
struct KismetMathLibrary_Divide_VectorInt_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    int32_t B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Divide_VectorFloat
// Size: 0x001C
struct KismetMathLibrary_Divide_VectorFloat_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Divide_Vector2DFloat
// Size: 0x0014
struct KismetMathLibrary_Divide_Vector2DFloat_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float B; // 0x0008 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x000C (0x0008)
};

// Function: Engine.KismetMathLibrary.Divide_IntInt
// Size: 0x000C
struct KismetMathLibrary_Divide_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Divide_FloatFloat
// Size: 0x000C
struct KismetMathLibrary_Divide_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Divide_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Divide_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.DegTan
// Size: 0x0008
struct KismetMathLibrary_DegTan_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegSin
// Size: 0x0008
struct KismetMathLibrary_DegSin_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegreesToRadians
// Size: 0x0008
struct KismetMathLibrary_DegreesToRadians_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegCos
// Size: 0x0008
struct KismetMathLibrary_DegCos_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegAtan2
// Size: 0x000C
struct KismetMathLibrary_DegAtan2_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegAtan
// Size: 0x0008
struct KismetMathLibrary_DegAtan_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegAsin
// Size: 0x0008
struct KismetMathLibrary_DegAsin_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DegAcos
// Size: 0x0008
struct KismetMathLibrary_DegAcos_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DaysInYear
// Size: 0x0008
struct KismetMathLibrary_DaysInYear_Params {
public:
    int32_t Year; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.DaysInMonth
// Size: 0x000C
struct KismetMathLibrary_DaysInMonth_Params {
public:
    int32_t Year; // 0x0000 (0x0004)
    int32_t Month; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.DateTimeMinValue
// Size: 0x0008
struct KismetMathLibrary_DateTimeMinValue_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.DateTimeMaxValue
// Size: 0x0008
struct KismetMathLibrary_DateTimeMaxValue_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.KismetMathLibrary.DateTimeFromString
// Size: 0x0019
struct KismetMathLibrary_DateTimeFromString_Params {
public:
    struct FString DateTimeString; // 0x0000 (0x0010)
    uint8_t Result[0x8]; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetMathLibrary.DateTimeFromIsoString
// Size: 0x0019
struct KismetMathLibrary_DateTimeFromIsoString_Params {
public:
    struct FString IsoString; // 0x0000 (0x0010)
    uint8_t Result[0x8]; // 0x0010 (0x0008)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetMathLibrary.CrossProduct2D
// Size: 0x0014
struct KismetMathLibrary_CrossProduct2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.Cross_VectorVector
// Size: 0x0024
struct KismetMathLibrary_Cross_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.CreateVectorFromYawPitch
// Size: 0x0018
struct KismetMathLibrary_CreateVectorFromYawPitch_Params {
public:
    float Yaw; // 0x0000 (0x0004)
    float Pitch; // 0x0004 (0x0004)
    float Length; // 0x0008 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.Cos
// Size: 0x0008
struct KismetMathLibrary_Cos_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.ConvertTransformToRelative
// Size: 0x0090
struct KismetMathLibrary_ConvertTransformToRelative_Params {
public:
    uint8_t Transform[0x30]; // 0x0000 (0x0030)
    uint8_t ParentTransform[0x30]; // 0x0030 (0x0030)
    uint8_t ReturnValue[0x30]; // 0x0060 (0x0030)
};

// Function: Engine.KismetMathLibrary.Conv_VectorToVector2D
// Size: 0x0014
struct KismetMathLibrary_Conv_VectorToVector2D_Params {
public:
    uint8_t InVector[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0x8]; // 0x000C (0x0008)
};

// Function: Engine.KismetMathLibrary.Conv_VectorToTransform
// Size: 0x0040
struct KismetMathLibrary_Conv_VectorToTransform_Params {
public:
    uint8_t InLocation[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.KismetMathLibrary.Conv_VectorToRotator
// Size: 0x0018
struct KismetMathLibrary_Conv_VectorToRotator_Params {
public:
    uint8_t InVec[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.Conv_VectorToLinearColor
// Size: 0x001C
struct KismetMathLibrary_Conv_VectorToLinearColor_Params {
public:
    uint8_t InVec[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0x10]; // 0x000C (0x0010)
};

// Function: Engine.KismetMathLibrary.Conv_Vector2DToVector
// Size: 0x0018
struct KismetMathLibrary_Conv_Vector2DToVector_Params {
public:
    uint8_t InVector2D[0x8]; // 0x0000 (0x0008)
    float Z; // 0x0008 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.Conv_RotatorToVector
// Size: 0x0018
struct KismetMathLibrary_Conv_RotatorToVector_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.KismetMathLibrary.Conv_LinearColorToVector
// Size: 0x001C
struct KismetMathLibrary_Conv_LinearColorToVector_Params {
public:
    uint8_t InLinearColor[0x10]; // 0x0000 (0x0010)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Conv_LinearColorToColor
// Size: 0x0014
struct KismetMathLibrary_Conv_LinearColorToColor_Params {
public:
    uint8_t InLinearColor[0x10]; // 0x0000 (0x0010)
    uint8_t ReturnValue[0x4]; // 0x0010 (0x0004)
};

// Function: Engine.KismetMathLibrary.Conv_IntToFloat
// Size: 0x0008
struct KismetMathLibrary_Conv_IntToFloat_Params {
public:
    int32_t InInt; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Conv_IntToByte
// Size: 0x0005
struct KismetMathLibrary_Conv_IntToByte_Params {
public:
    int32_t InInt; // 0x0000 (0x0004)
    uint8_t ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.KismetMathLibrary.Conv_IntToBool
// Size: 0x0005
struct KismetMathLibrary_Conv_IntToBool_Params {
public:
    int32_t InInt; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.KismetMathLibrary.Conv_FloatToVector
// Size: 0x0010
struct KismetMathLibrary_Conv_FloatToVector_Params {
public:
    float InFloat; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.KismetMathLibrary.Conv_FloatToLinearColor
// Size: 0x0014
struct KismetMathLibrary_Conv_FloatToLinearColor_Params {
public:
    float InFloat; // 0x0000 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0004 (0x0010)
};

// Function: Engine.KismetMathLibrary.Conv_ColorToLinearColor
// Size: 0x0014
struct KismetMathLibrary_Conv_ColorToLinearColor_Params {
public:
    uint8_t InColor[0x4]; // 0x0000 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0004 (0x0010)
};

// Function: Engine.KismetMathLibrary.Conv_ByteToInt
// Size: 0x0008
struct KismetMathLibrary_Conv_ByteToInt_Params {
public:
    uint8_t InByte; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Conv_ByteToFloat
// Size: 0x0008
struct KismetMathLibrary_Conv_ByteToFloat_Params {
public:
    uint8_t InByte; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Conv_BoolToInt
// Size: 0x0008
struct KismetMathLibrary_Conv_BoolToInt_Params {
public:
    bool InBool; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Conv_BoolToFloat
// Size: 0x0008
struct KismetMathLibrary_Conv_BoolToFloat_Params {
public:
    bool InBool; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Conv_BoolToByte
// Size: 0x0002
struct KismetMathLibrary_Conv_BoolToByte_Params {
public:
    bool InBool; // 0x0000 (0x0001)
    uint8_t ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.KismetMathLibrary.ComposeTransforms
// Size: 0x0090
struct KismetMathLibrary_ComposeTransforms_Params {
public:
    uint8_t A[0x30]; // 0x0000 (0x0030)
    uint8_t B[0x30]; // 0x0030 (0x0030)
    uint8_t ReturnValue[0x30]; // 0x0060 (0x0030)
};

// Function: Engine.KismetMathLibrary.ComposeRotators
// Size: 0x0024
struct KismetMathLibrary_ComposeRotators_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.ClassIsChildOf
// Size: 0x0011
struct KismetMathLibrary_ClassIsChildOf_Params {
public:
    class UClass* TestClass; // 0x0000 (0x0008)
    class UClass* ParentClass; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetMathLibrary.ClampVectorSize
// Size: 0x0020
struct KismetMathLibrary_ClampVectorSize_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float Min; // 0x000C (0x0004)
    float Max; // 0x0010 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.KismetMathLibrary.ClampAxis
// Size: 0x0008
struct KismetMathLibrary_ClampAxis_Params {
public:
    float angle; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.ClampAngle
// Size: 0x0010
struct KismetMathLibrary_ClampAngle_Params {
public:
    float AngleDegrees; // 0x0000 (0x0004)
    float MinAngleDegrees; // 0x0004 (0x0004)
    float MaxAngleDegrees; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.Clamp
// Size: 0x0010
struct KismetMathLibrary_Clamp_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
    int32_t Min; // 0x0004 (0x0004)
    int32_t Max; // 0x0008 (0x0004)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.CInterpTo
// Size: 0x0038
struct KismetMathLibrary_CInterpTo_Params {
public:
    uint8_t Current[0x10]; // 0x0000 (0x0010)
    uint8_t Target[0x10]; // 0x0010 (0x0010)
    float DeltaTime; // 0x0020 (0x0004)
    float InterpSpeed; // 0x0024 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0028 (0x0010)
};

// Function: Engine.KismetMathLibrary.BreakVector2D
// Size: 0x0010
struct KismetMathLibrary_BreakVector2D_Params {
public:
    uint8_t InVec[0x8]; // 0x0000 (0x0008)
    float X; // 0x0008 (0x0004)
    float Y; // 0x000C (0x0004)
};

// Function: Engine.KismetMathLibrary.BreakVector
// Size: 0x0018
struct KismetMathLibrary_BreakVector_Params {
public:
    uint8_t InVec[0xC]; // 0x0000 (0x000C)
    float X; // 0x000C (0x0004)
    float Y; // 0x0010 (0x0004)
    float Z; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.BreakTransform
// Size: 0x0054
struct KismetMathLibrary_BreakTransform_Params {
public:
    uint8_t InTransform[0x30]; // 0x0000 (0x0030)
    uint8_t Location[0xC]; // 0x0030 (0x000C)
    uint8_t Rotation[0xC]; // 0x003C (0x000C)
    uint8_t Scale[0xC]; // 0x0048 (0x000C)
};

// Function: Engine.KismetMathLibrary.BreakTimespan
// Size: 0x001C
struct KismetMathLibrary_BreakTimespan_Params {
public:
    uint8_t InTimespan[0x8]; // 0x0000 (0x0008)
    int32_t Days; // 0x0008 (0x0004)
    int32_t Hours; // 0x000C (0x0004)
    int32_t Minutes; // 0x0010 (0x0004)
    int32_t Seconds; // 0x0014 (0x0004)
    int32_t Milliseconds; // 0x0018 (0x0004)
};

// Function: Engine.KismetMathLibrary.BreakRotIntoAxes
// Size: 0x0030
struct KismetMathLibrary_BreakRotIntoAxes_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    uint8_t X[0xC]; // 0x000C (0x000C)
    uint8_t Y[0xC]; // 0x0018 (0x000C)
    uint8_t Z[0xC]; // 0x0024 (0x000C)
};

// Function: Engine.KismetMathLibrary.BreakRotator
// Size: 0x0018
struct KismetMathLibrary_BreakRotator_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    float Roll; // 0x000C (0x0004)
    float Pitch; // 0x0010 (0x0004)
    float Yaw; // 0x0014 (0x0004)
};

// Function: Engine.KismetMathLibrary.BreakRandomStream
// Size: 0x000C
struct KismetMathLibrary_BreakRandomStream_Params {
public:
    uint8_t InRandomStream[0x8]; // 0x0000 (0x0008)
    int32_t InitialSeed; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.BreakDateTime
// Size: 0x0024
struct KismetMathLibrary_BreakDateTime_Params {
public:
    uint8_t InDateTime[0x8]; // 0x0000 (0x0008)
    int32_t Year; // 0x0008 (0x0004)
    int32_t Month; // 0x000C (0x0004)
    int32_t Day; // 0x0010 (0x0004)
    int32_t Hour; // 0x0014 (0x0004)
    int32_t Minute; // 0x0018 (0x0004)
    int32_t second; // 0x001C (0x0004)
    int32_t Millisecond; // 0x0020 (0x0004)
};

// Function: Engine.KismetMathLibrary.BreakColor
// Size: 0x0020
struct KismetMathLibrary_BreakColor_Params {
public:
    uint8_t InColor[0x10]; // 0x0000 (0x0010)
    float R; // 0x0010 (0x0004)
    float G; // 0x0014 (0x0004)
    float B; // 0x0018 (0x0004)
    float A; // 0x001C (0x0004)
};

// Function: Engine.KismetMathLibrary.BooleanXOR
// Size: 0x0003
struct KismetMathLibrary_BooleanXOR_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.BooleanOR
// Size: 0x0003
struct KismetMathLibrary_BooleanOR_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.BooleanNOR
// Size: 0x0003
struct KismetMathLibrary_BooleanNOR_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.BooleanNAND
// Size: 0x0003
struct KismetMathLibrary_BooleanNAND_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.BooleanAND
// Size: 0x0003
struct KismetMathLibrary_BooleanAND_Params {
public:
    bool A; // 0x0000 (0x0001)
    bool B; // 0x0001 (0x0001)
    bool ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.BMin
// Size: 0x0003
struct KismetMathLibrary_BMin_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.BMax
// Size: 0x0003
struct KismetMathLibrary_BMax_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Atan2
// Size: 0x000C
struct KismetMathLibrary_Atan2_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Atan
// Size: 0x0008
struct KismetMathLibrary_Atan_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Asin
// Size: 0x0008
struct KismetMathLibrary_Asin_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.And_IntInt
// Size: 0x000C
struct KismetMathLibrary_And_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Add_VectorVector
// Size: 0x0024
struct KismetMathLibrary_Add_VectorVector_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    uint8_t B[0xC]; // 0x000C (0x000C)
    uint8_t ReturnValue[0xC]; // 0x0018 (0x000C)
};

// Function: Engine.KismetMathLibrary.Add_VectorInt
// Size: 0x001C
struct KismetMathLibrary_Add_VectorInt_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    int32_t B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Add_VectorFloat
// Size: 0x001C
struct KismetMathLibrary_Add_VectorFloat_Params {
public:
    uint8_t A[0xC]; // 0x0000 (0x000C)
    float B; // 0x000C (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetMathLibrary.Add_Vector2DVector2D
// Size: 0x0018
struct KismetMathLibrary_Add_Vector2DVector2D_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Add_Vector2DFloat
// Size: 0x0014
struct KismetMathLibrary_Add_Vector2DFloat_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    float B; // 0x0008 (0x0004)
    uint8_t ReturnValue[0x8]; // 0x000C (0x0008)
};

// Function: Engine.KismetMathLibrary.Add_TimespanTimespan
// Size: 0x0018
struct KismetMathLibrary_Add_TimespanTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Add_IntInt
// Size: 0x000C
struct KismetMathLibrary_Add_IntInt_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Add_FloatFloat
// Size: 0x000C
struct KismetMathLibrary_Add_FloatFloat_Params {
public:
    float A; // 0x0000 (0x0004)
    float B; // 0x0004 (0x0004)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetMathLibrary.Add_DateTimeTimespan
// Size: 0x0018
struct KismetMathLibrary_Add_DateTimeTimespan_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    uint8_t B[0x8]; // 0x0008 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetMathLibrary.Add_ByteByte
// Size: 0x0003
struct KismetMathLibrary_Add_ByteByte_Params {
public:
    uint8_t A; // 0x0000 (0x0001)
    uint8_t B; // 0x0001 (0x0001)
    uint8_t ReturnValue; // 0x0002 (0x0001)
};

// Function: Engine.KismetMathLibrary.Acos
// Size: 0x0008
struct KismetMathLibrary_Acos_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Abs_Int
// Size: 0x0008
struct KismetMathLibrary_Abs_Int_Params {
public:
    int32_t A; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetMathLibrary.Abs
// Size: 0x0008
struct KismetMathLibrary_Abs_Params {
public:
    float A; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.DataTableFunctionLibrary.GetDataTableRowNames
// Size: 0x0018
struct DataTableFunctionLibrary_GetDataTableRowNames_Params {
public:
    class UObject* Table; // 0x0000 (0x0008)
    struct TArray<uint8_t> OutRowNames; // 0x0008 (0x0010)
};

// Function: Engine.DataTableFunctionLibrary.GetDataTableRowFromName
// Size: 0x0012
struct DataTableFunctionLibrary_GetDataTableRowFromName_Params {
public:
    class UObject* Table; // 0x0000 (0x0008)
    struct FName RowName; // 0x0008 (0x0008)
    uint8_t OutRow; // 0x0010 (0x0001)
    bool ReturnValue; // 0x0011 (0x0001)
};

// Function: Engine.DataTableFunctionLibrary.EvaluateCurveTableRow
// Size: 0x001C
struct DataTableFunctionLibrary_EvaluateCurveTableRow_Params {
public:
    class UObject* CurveTable; // 0x0000 (0x0008)
    struct FName RowName; // 0x0008 (0x0008)
    float InXY; // 0x0010 (0x0004)
    uint8_t outResult; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    float OutXY; // 0x0018 (0x0004)
};

// Function: Engine.GameplayStatics.UnloadStreamLevelArray
// Size: 0x0030
struct GameplayStatics_UnloadStreamLevelArray_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> LevelNames; // 0x0008 (0x0010)
    uint8_t LatentInfo[0x18]; // 0x0018 (0x0018)
};

// Function: Engine.GameplayStatics.UnloadStreamLevel
// Size: 0x0028
struct GameplayStatics_UnloadStreamLevel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName levelName; // 0x0008 (0x0008)
    uint8_t LatentInfo[0x18]; // 0x0010 (0x0018)
};

// Function: Engine.GameplayStatics.TransitionRegion
// Size: 0x0010
struct GameplayStatics_TransitionRegion_Params {
public:
    struct FName levelName; // 0x0000 (0x0008)
    struct FName DependentUnloadLevelName; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.ToggleStreamingLog
// Size: 0x0008
struct GameplayStatics_ToggleStreamingLog_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnSoundAttached
// Size: 0x0058
struct GameplayStatics_SpawnSoundAttached_Params {
public:
    class UObject* Sound; // 0x0000 (0x0008)
    class UObject* AttachToComponent; // 0x0008 (0x0008)
    struct FName AttachPointName; // 0x0010 (0x0008)
    uint8_t Location[0xC]; // 0x0018 (0x000C)
    uint8_t Rotation[0xC]; // 0x0024 (0x000C)
    uint8_t LocationType; // 0x0030 (0x0001)
    bool bStopWhenAttachedToDestroyed; // 0x0031 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0032 (0x0002)
    float VolumeMultiplier; // 0x0034 (0x0004)
    float PitchMultiplier; // 0x0038 (0x0004)
    float StartTime; // 0x003C (0x0004)
    class UObject* AttenuationSettings; // 0x0040 (0x0008)
    class UObject* ConcurrencySettings; // 0x0048 (0x0008)
    class UObject* ReturnValue; // 0x0050 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnSoundAtLocation
// Size: 0x0050
struct GameplayStatics_SpawnSoundAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Sound; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    float VolumeMultiplier; // 0x0028 (0x0004)
    float PitchMultiplier; // 0x002C (0x0004)
    float StartTime; // 0x0030 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    class UObject* AttenuationSettings; // 0x0038 (0x0008)
    class UObject* ConcurrencySettings; // 0x0040 (0x0008)
    class UObject* ReturnValue; // 0x0048 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnSound2D
// Size: 0x0030
struct GameplayStatics_SpawnSound2D_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Sound; // 0x0008 (0x0008)
    float VolumeMultiplier; // 0x0010 (0x0004)
    float PitchMultiplier; // 0x0014 (0x0004)
    float StartTime; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* ConcurrencySettings; // 0x0020 (0x0008)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnObject
// Size: 0x0018
struct GameplayStatics_SpawnObject_Params {
public:
    class UClass* ObjectClass; // 0x0000 (0x0008)
    class UObject* Outer; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnEmitterAttached
// Size: 0x0040
struct GameplayStatics_SpawnEmitterAttached_Params {
public:
    class UObject* EmitterTemplate; // 0x0000 (0x0008)
    class UObject* AttachToComponent; // 0x0008 (0x0008)
    struct FName AttachPointName; // 0x0010 (0x0008)
    uint8_t Location[0xC]; // 0x0018 (0x000C)
    uint8_t Rotation[0xC]; // 0x0024 (0x000C)
    uint8_t LocationType; // 0x0030 (0x0001)
    bool bAutoDestroy; // 0x0031 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0032 (0x0006)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnEmitterAtLocation
// Size: 0x0038
struct GameplayStatics_SpawnEmitterAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* EmitterTemplate; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    bool bAutoDestroy; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnDialogueAttached
// Size: 0x0068
struct GameplayStatics_SpawnDialogueAttached_Params {
public:
    class UObject* Dialogue; // 0x0000 (0x0008)
    uint8_t Context[0x18]; // 0x0008 (0x0018)
    class UObject* AttachToComponent; // 0x0020 (0x0008)
    struct FName AttachPointName; // 0x0028 (0x0008)
    uint8_t Location[0xC]; // 0x0030 (0x000C)
    uint8_t Rotation[0xC]; // 0x003C (0x000C)
    uint8_t LocationType; // 0x0048 (0x0001)
    bool bStopWhenAttachedToDestroyed; // 0x0049 (0x0001)
    uint8_t Pad_0[0x2]; // 0x004A (0x0002)
    float VolumeMultiplier; // 0x004C (0x0004)
    float PitchMultiplier; // 0x0050 (0x0004)
    float StartTime; // 0x0054 (0x0004)
    class UObject* AttenuationSettings; // 0x0058 (0x0008)
    class UObject* ReturnValue; // 0x0060 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnDialogueAtLocation
// Size: 0x0060
struct GameplayStatics_SpawnDialogueAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Dialogue; // 0x0008 (0x0008)
    uint8_t Context[0x18]; // 0x0010 (0x0018)
    uint8_t Location[0xC]; // 0x0028 (0x000C)
    uint8_t Rotation[0xC]; // 0x0034 (0x000C)
    float VolumeMultiplier; // 0x0040 (0x0004)
    float PitchMultiplier; // 0x0044 (0x0004)
    float StartTime; // 0x0048 (0x0004)
    uint8_t Pad_0[0x4]; // 0x004C (0x0004)
    class UObject* AttenuationSettings; // 0x0050 (0x0008)
    class UObject* ReturnValue; // 0x0058 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnDialogue2D
// Size: 0x0040
struct GameplayStatics_SpawnDialogue2D_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Dialogue; // 0x0008 (0x0008)
    uint8_t Context[0x18]; // 0x0010 (0x0018)
    float VolumeMultiplier; // 0x0028 (0x0004)
    float PitchMultiplier; // 0x002C (0x0004)
    float StartTime; // 0x0030 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnDecalAttached
// Size: 0x0050
struct GameplayStatics_SpawnDecalAttached_Params {
public:
    class UObject* DecalMaterial; // 0x0000 (0x0008)
    uint8_t DecalSize[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UObject* AttachToComponent; // 0x0018 (0x0008)
    struct FName AttachPointName; // 0x0020 (0x0008)
    uint8_t Location[0xC]; // 0x0028 (0x000C)
    uint8_t Rotation[0xC]; // 0x0034 (0x000C)
    uint8_t LocationType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    float LifeSpan; // 0x0044 (0x0004)
    class UObject* ReturnValue; // 0x0048 (0x0008)
};

// Function: Engine.GameplayStatics.SpawnDecalAtLocation
// Size: 0x0040
struct GameplayStatics_SpawnDecalAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* DecalMaterial; // 0x0008 (0x0008)
    uint8_t DecalSize[0xC]; // 0x0010 (0x000C)
    uint8_t Location[0xC]; // 0x001C (0x000C)
    uint8_t Rotation[0xC]; // 0x0028 (0x000C)
    float LifeSpan; // 0x0034 (0x0004)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: Engine.GameplayStatics.SetWorldOriginLocation
// Size: 0x0014
struct GameplayStatics_SetWorldOriginLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t NewLocation[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.GameplayStatics.SetWorldCurrentLevel
// Size: 0x0009
struct GameplayStatics_SetWorldCurrentLevel_Params {
public:
    class UObject* NewCurrentLevel; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.GameplayStatics.SetIgnoreStreamingDistance
// Size: 0x0020
struct GameplayStatics_SetIgnoreStreamingDistance_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool bIgnoreStreamingDistance; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct TArray<uint8_t> PreserveLevels; // 0x0010 (0x0010)
};

// Function: Engine.GameplayStatics.SetGlobalTimeDilation
// Size: 0x000C
struct GameplayStatics_SetGlobalTimeDilation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float TimeDilation; // 0x0008 (0x0004)
};

// Function: Engine.GameplayStatics.SetGlobalPitchModulation
// Size: 0x0010
struct GameplayStatics_SetGlobalPitchModulation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float PitchModulation; // 0x0008 (0x0004)
    float TimeSec; // 0x000C (0x0004)
};

// Function: Engine.GameplayStatics.SetGamePaused
// Size: 0x000A
struct GameplayStatics_SetGamePaused_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool bPaused; // 0x0008 (0x0001)
    bool ReturnValue; // 0x0009 (0x0001)
};

// Function: Engine.GameplayStatics.SetBaseSoundMix
// Size: 0x0010
struct GameplayStatics_SetBaseSoundMix_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* InSoundMix; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.SaveGameToSlot
// Size: 0x001E
struct GameplayStatics_SaveGameToSlot_Params {
public:
    class UObject* SaveGameObject; // 0x0000 (0x0008)
    struct FString SlotName; // 0x0008 (0x0010)
    int32_t UserIndex; // 0x0018 (0x0004)
    bool isSynchronous; // 0x001C (0x0001)
    bool ReturnValue; // 0x001D (0x0001)
};

// Function: Engine.GameplayStatics.ResetWeeklyChallengeTag
// Size: 0x0000
struct GameplayStatics_ResetWeeklyChallengeTag_Params {
public:
};

// Function: Engine.GameplayStatics.RemovePlayer
// Size: 0x0009
struct GameplayStatics_RemovePlayer_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    bool bDestroyPawn; // 0x0008 (0x0001)
};

// Function: Engine.GameplayStatics.PushSoundMixModifier
// Size: 0x0010
struct GameplayStatics_PushSoundMixModifier_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* InSoundMixModifier; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.ProjectWorldToScreenWithDistance
// Size: 0x0021
struct GameplayStatics_ProjectWorldToScreenWithDistance_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    uint8_t WorldPosition[0xC]; // 0x0008 (0x000C)
    uint8_t ScreenPosition[0xC]; // 0x0014 (0x000C)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.GameplayStatics.ProjectWorldToScreen
// Size: 0x001D
struct GameplayStatics_ProjectWorldToScreen_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    uint8_t WorldPosition[0xC]; // 0x0008 (0x000C)
    uint8_t ScreenPosition[0x8]; // 0x0014 (0x0008)
    bool ReturnValue; // 0x001C (0x0001)
};

// Function: Engine.GameplayStatics.PrintMessage
// Size: 0x0008
struct GameplayStatics_PrintMessage_Params {
public:
    struct FName aMessage; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.PopSoundMixModifier
// Size: 0x0010
struct GameplayStatics_PopSoundMixModifier_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* InSoundMixModifier; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.PlayWorldCameraShake
// Size: 0x0029
struct GameplayStatics_PlayWorldCameraShake_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* Shake; // 0x0008 (0x0008)
    uint8_t Epicenter[0xC]; // 0x0010 (0x000C)
    float InnerRadius; // 0x001C (0x0004)
    float OuterRadius; // 0x0020 (0x0004)
    float Falloff; // 0x0024 (0x0004)
    bool bOrientShakeTowardsEpicenter; // 0x0028 (0x0001)
};

// Function: Engine.GameplayStatics.PlaySoundAtLocation
// Size: 0x0048
struct GameplayStatics_PlaySoundAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Sound; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    float VolumeMultiplier; // 0x0028 (0x0004)
    float PitchMultiplier; // 0x002C (0x0004)
    float StartTime; // 0x0030 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    class UObject* AttenuationSettings; // 0x0038 (0x0008)
    class UObject* ConcurrencySettings; // 0x0040 (0x0008)
};

// Function: Engine.GameplayStatics.PlaySound2D
// Size: 0x0028
struct GameplayStatics_PlaySound2D_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Sound; // 0x0008 (0x0008)
    float VolumeMultiplier; // 0x0010 (0x0004)
    float PitchMultiplier; // 0x0014 (0x0004)
    float StartTime; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* ConcurrencySettings; // 0x0020 (0x0008)
};

// Function: Engine.GameplayStatics.PlayDialogueAtLocation
// Size: 0x0058
struct GameplayStatics_PlayDialogueAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Dialogue; // 0x0008 (0x0008)
    uint8_t Context[0x18]; // 0x0010 (0x0018)
    uint8_t Location[0xC]; // 0x0028 (0x000C)
    uint8_t Rotation[0xC]; // 0x0034 (0x000C)
    float VolumeMultiplier; // 0x0040 (0x0004)
    float PitchMultiplier; // 0x0044 (0x0004)
    float StartTime; // 0x0048 (0x0004)
    uint8_t Pad_0[0x4]; // 0x004C (0x0004)
    class UObject* AttenuationSettings; // 0x0050 (0x0008)
};

// Function: Engine.GameplayStatics.PlayDialogue2D
// Size: 0x0034
struct GameplayStatics_PlayDialogue2D_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Dialogue; // 0x0008 (0x0008)
    uint8_t Context[0x18]; // 0x0010 (0x0018)
    float VolumeMultiplier; // 0x0028 (0x0004)
    float PitchMultiplier; // 0x002C (0x0004)
    float StartTime; // 0x0030 (0x0004)
};

// Function: Engine.GameplayStatics.PerformActionOnStreamingLevels
// Size: 0x001A
struct GameplayStatics_PerformActionOnStreamingLevels_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> LevelNames; // 0x0008 (0x0010)
    bool bLoadAndSetInvisible; // 0x0018 (0x0001)
    bool bBlockFromLoading; // 0x0019 (0x0001)
};

// Function: Engine.GameplayStatics.PerformActionOnGlobalLevels
// Size: 0x0019
struct GameplayStatics_PerformActionOnGlobalLevels_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> LevelNames; // 0x0008 (0x0010)
    bool bSetActorsInvisible; // 0x0018 (0x0001)
};

// Function: Engine.GameplayStatics.ParseOption
// Size: 0x0030
struct GameplayStatics_ParseOption_Params {
public:
    struct FString Options; // 0x0000 (0x0010)
    struct FString Key; // 0x0010 (0x0010)
    struct FString ReturnValue; // 0x0020 (0x0010)
};

// Function: Engine.GameplayStatics.OpenLevel
// Size: 0x0028
struct GameplayStatics_OpenLevel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName levelName; // 0x0008 (0x0008)
    bool bAbsolute; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    struct FString Options; // 0x0018 (0x0010)
};

// Function: Engine.GameplayStatics.LoadStreamLevelArray
// Size: 0x0038
struct GameplayStatics_LoadStreamLevelArray_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> LevelNames; // 0x0008 (0x0010)
    bool bMakeVisibleAfterLoad; // 0x0018 (0x0001)
    bool bShouldBlockOnLoad; // 0x0019 (0x0001)
    bool bWaitForAllBeforeMakingVisible; // 0x001A (0x0001)
    bool bNeverUnloadDuringCinematics; // 0x001B (0x0001)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t LatentInfo[0x18]; // 0x0020 (0x0018)
};

// Function: Engine.GameplayStatics.LoadStreamLevel
// Size: 0x0030
struct GameplayStatics_LoadStreamLevel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName levelName; // 0x0008 (0x0008)
    bool bMakeVisibleAfterLoad; // 0x0010 (0x0001)
    bool bShouldBlockOnLoad; // 0x0011 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0012 (0x0006)
    uint8_t LatentInfo[0x18]; // 0x0018 (0x0018)
};

// Function: Engine.GameplayStatics.LoadGameFromSlot
// Size: 0x0020
struct GameplayStatics_LoadGameFromSlot_Params {
public:
    struct FString SlotName; // 0x0000 (0x0010)
    int32_t UserIndex; // 0x0010 (0x0004)
    bool bUseUI; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: Engine.GameplayStatics.IsGamePaused
// Size: 0x0009
struct GameplayStatics_IsGamePaused_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.GameplayStatics.HasOption
// Size: 0x0021
struct GameplayStatics_HasOption_Params {
public:
    struct FString Options; // 0x0000 (0x0010)
    struct FString InKey; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.GameplayStatics.GrassOverlappingSphereCount
// Size: 0x0024
struct GameplayStatics_GrassOverlappingSphereCount_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* StaticMesh; // 0x0008 (0x0008)
    uint8_t CenterPosition[0xC]; // 0x0010 (0x000C)
    float Radius; // 0x001C (0x0004)
    int32_t ReturnValue; // 0x0020 (0x0004)
};

// Function: Engine.GameplayStatics.GetWorldOriginLocation
// Size: 0x0014
struct GameplayStatics_GetWorldOriginLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.GameplayStatics.GetWorldDeltaSeconds
// Size: 0x000C
struct GameplayStatics_GetWorldDeltaSeconds_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.GameplayStatics.GetWorldCurrentLevel
// Size: 0x0008
struct GameplayStatics_GetWorldCurrentLevel_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.GetWeeklyChallengeTag
// Size: 0x0008
struct GameplayStatics_GetWeeklyChallengeTag_Params {
public:
    struct FName ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.GetSurfaceType
// Size: 0x0089
struct GameplayStatics_GetSurfaceType_Params {
public:
    uint8_t Hit[0x88]; // 0x0000 (0x0088)
    uint8_t ReturnValue; // 0x0088 (0x0001)
};

// Function: Engine.GameplayStatics.GetStreamingLevel
// Size: 0x0018
struct GameplayStatics_GetStreamingLevel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName PackageName; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.GetRealTimeSeconds
// Size: 0x000C
struct GameplayStatics_GetRealTimeSeconds_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.GameplayStatics.GetPlayerPawn
// Size: 0x0018
struct GameplayStatics_GetPlayerPawn_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    int32_t PlayerIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.GetPlayerController
// Size: 0x0018
struct GameplayStatics_GetPlayerController_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    int32_t PlayerIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.GetPlayerCharacter
// Size: 0x0018
struct GameplayStatics_GetPlayerCharacter_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    int32_t PlayerIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.GetPlayerCameraManager
// Size: 0x0018
struct GameplayStatics_GetPlayerCameraManager_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    int32_t PlayerIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.GetPlatformName
// Size: 0x0010
struct GameplayStatics_GetPlatformName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameplayStatics.GetObjectOutermost
// Size: 0x0010
struct GameplayStatics_GetObjectOutermost_Params {
public:
    class UObject* InObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.GetObjectOuter
// Size: 0x0010
struct GameplayStatics_GetObjectOuter_Params {
public:
    class UObject* InObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.GetObjectClass
// Size: 0x0010
struct GameplayStatics_GetObjectClass_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    class UClass* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.GetKeyValue
// Size: 0x0030
struct GameplayStatics_GetKeyValue_Params {
public:
    struct FString Pair; // 0x0000 (0x0010)
    struct FString Key; // 0x0010 (0x0010)
    struct FString Value; // 0x0020 (0x0010)
};

// Function: Engine.GameplayStatics.GetIntOption
// Size: 0x0028
struct GameplayStatics_GetIntOption_Params {
public:
    struct FString Options; // 0x0000 (0x0010)
    struct FString Key; // 0x0010 (0x0010)
    int32_t DefaultValue; // 0x0020 (0x0004)
    int32_t ReturnValue; // 0x0024 (0x0004)
};

// Function: Engine.GameplayStatics.GetGlobalTimeDilation
// Size: 0x000C
struct GameplayStatics_GetGlobalTimeDilation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.GameplayStatics.GetGameState
// Size: 0x0010
struct GameplayStatics_GetGameState_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.GetGameMode
// Size: 0x0010
struct GameplayStatics_GetGameMode_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.GetGameInstance
// Size: 0x0010
struct GameplayStatics_GetGameInstance_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.GetFileNameBySaveType
// Size: 0x0018
struct GameplayStatics_GetFileNameBySaveType_Params {
public:
    uint8_t SaveGameType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.GameplayStatics.GetCurrentLevelName
// Size: 0x0020
struct GameplayStatics_GetCurrentLevelName_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool bRemovePrefixString; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.GameplayStatics.GetBPStreamingLevel
// Size: 0x0018
struct GameplayStatics_GetBPStreamingLevel_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName PackageName; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.GetAudioTimeSeconds
// Size: 0x000C
struct GameplayStatics_GetAudioTimeSeconds_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.GameplayStatics.GetAllActorsWithInterface
// Size: 0x0020
struct GameplayStatics_GetAllActorsWithInterface_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* Interface; // 0x0008 (0x0008)
    struct TArray<uint8_t> OutActors; // 0x0010 (0x0010)
};

// Function: Engine.GameplayStatics.GetAllActorsOfClass
// Size: 0x0020
struct GameplayStatics_GetAllActorsOfClass_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* ActorClass; // 0x0008 (0x0008)
    struct TArray<uint8_t> OutActors; // 0x0010 (0x0010)
};

// Function: Engine.GameplayStatics.GetActorArrayBounds
// Size: 0x002C
struct GameplayStatics_GetActorArrayBounds_Params {
public:
    struct TArray<uint8_t> Actors; // 0x0000 (0x0010)
    bool bOnlyCollidingComponents; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    uint8_t Center[0xC]; // 0x0014 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x0020 (0x000C)
};

// Function: Engine.GameplayStatics.GetActorArrayAverageLocation
// Size: 0x001C
struct GameplayStatics_GetActorArrayAverageLocation_Params {
public:
    struct TArray<uint8_t> Actors; // 0x0000 (0x0010)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.GameplayStatics.GetAccurateRealTime
// Size: 0x0010
struct GameplayStatics_GetAccurateRealTime_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    int32_t Seconds; // 0x0008 (0x0004)
    float PartialSeconds; // 0x000C (0x0004)
};

// Function: Engine.GameplayStatics.FlushLevelStreaming
// Size: 0x0008
struct GameplayStatics_FlushLevelStreaming_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.FinishSpawningActor
// Size: 0x0048
struct GameplayStatics_FinishSpawningActor_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t SpawnTransform[0x30]; // 0x0010 (0x0030)
    class UObject* ReturnValue; // 0x0040 (0x0008)
};

// Function: Engine.GameplayStatics.EnableLiveStreaming
// Size: 0x0001
struct GameplayStatics_EnableLiveStreaming_Params {
public:
    bool enable; // 0x0000 (0x0001)
};

// Function: Engine.GameplayStatics.DeprojectScreenToWorld
// Size: 0x0029
struct GameplayStatics_DeprojectScreenToWorld_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    uint8_t ScreenPosition[0x8]; // 0x0008 (0x0008)
    uint8_t WorldPosition[0xC]; // 0x0010 (0x000C)
    uint8_t WorldDirection[0xC]; // 0x001C (0x000C)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.GameplayStatics.DeleteGameInSlot
// Size: 0x0015
struct GameplayStatics_DeleteGameInSlot_Params {
public:
    struct FString SlotName; // 0x0000 (0x0010)
    int32_t UserIndex; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.GameplayStatics.DeactivateReverbEffect
// Size: 0x0010
struct GameplayStatics_DeactivateReverbEffect_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FName TagName; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.CreateSound2D
// Size: 0x0030
struct GameplayStatics_CreateSound2D_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Sound; // 0x0008 (0x0008)
    float VolumeMultiplier; // 0x0010 (0x0004)
    float PitchMultiplier; // 0x0014 (0x0004)
    float StartTime; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* ConcurrencySettings; // 0x0020 (0x0008)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint
// Size: 0x0010
struct GameplayStatics_CreateSaveGameObjectFromBlueprint_Params {
public:
    class UObject* SaveGameBlueprint; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.CreateSaveGameObject
// Size: 0x0010
struct GameplayStatics_CreateSaveGameObject_Params {
public:
    class UClass* SaveGameClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.GameplayStatics.CreatePlayer
// Size: 0x0018
struct GameplayStatics_CreatePlayer_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    int32_t ControllerId; // 0x0008 (0x0004)
    bool bSpawnPawn; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.GameplayStatics.ClearSoundMixModifiers
// Size: 0x0008
struct GameplayStatics_ClearSoundMixModifiers_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.ClearActionOnStreamingLevels
// Size: 0x0018
struct GameplayStatics_ClearActionOnStreamingLevels_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> LevelNames; // 0x0008 (0x0010)
};

// Function: Engine.GameplayStatics.ClearActionOnGlobalLevels
// Size: 0x0018
struct GameplayStatics_ClearActionOnGlobalLevels_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> LevelNames; // 0x0008 (0x0010)
};

// Function: Engine.GameplayStatics.ClearActionOnAllStreamingLevels
// Size: 0x0008
struct GameplayStatics_ClearActionOnAllStreamingLevels_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: Engine.GameplayStatics.CancelAsyncLoading
// Size: 0x0000
struct GameplayStatics_CancelAsyncLoading_Params {
public:
};

// Function: Engine.GameplayStatics.BreakHitResult
// Size: 0x00FC
struct GameplayStatics_BreakHitResult_Params {
public:
    uint8_t Hit[0x88]; // 0x0000 (0x0088)
    bool bBlockingHit; // 0x0088 (0x0001)
    bool bInitialOverlap; // 0x0089 (0x0001)
    uint8_t Pad_0[0x2]; // 0x008A (0x0002)
    float Time; // 0x008C (0x0004)
    uint8_t Location[0xC]; // 0x0090 (0x000C)
    uint8_t ImpactPoint[0xC]; // 0x009C (0x000C)
    uint8_t Normal[0xC]; // 0x00A8 (0x000C)
    uint8_t ImpactNormal[0xC]; // 0x00B4 (0x000C)
    class UObject* PhysMat; // 0x00C0 (0x0008)
    class UObject* HitActor; // 0x00C8 (0x0008)
    class UObject* HitComponent; // 0x00D0 (0x0008)
    struct FName HitBoneName; // 0x00D8 (0x0008)
    int32_t HitItem; // 0x00E0 (0x0004)
    uint8_t TraceStart[0xC]; // 0x00E4 (0x000C)
    uint8_t TraceEnd[0xC]; // 0x00F0 (0x000C)
};

// Function: Engine.GameplayStatics.BLUTILITY_SelectNone
// Size: 0x0000
struct GameplayStatics_BLUTILITY_SelectNone_Params {
public:
};

// Function: Engine.GameplayStatics.BlueprintSuggestProjectileVelocity
// Size: 0x003F
struct GameplayStatics_BlueprintSuggestProjectileVelocity_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t TossVelocity[0xC]; // 0x0008 (0x000C)
    uint8_t StartLocation[0xC]; // 0x0014 (0x000C)
    uint8_t EndLocation[0xC]; // 0x0020 (0x000C)
    float LaunchSpeed; // 0x002C (0x0004)
    float OverrideGravityZ; // 0x0030 (0x0004)
    uint8_t TraceOption; // 0x0034 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0035 (0x0003)
    float CollisionRadius; // 0x0038 (0x0004)
    bool bFavorHighArc; // 0x003C (0x0001)
    bool bDrawDebug; // 0x003D (0x0001)
    bool ReturnValue; // 0x003E (0x0001)
};

// Function: Engine.GameplayStatics.BeginSpawningActorFromClass
// Size: 0x0058
struct GameplayStatics_BeginSpawningActorFromClass_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* ActorClass; // 0x0008 (0x0008)
    uint8_t SpawnTransform[0x30]; // 0x0010 (0x0030)
    bool bNoCollisionFail; // 0x0040 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0041 (0x0007)
    class UObject* Owner; // 0x0048 (0x0008)
    class UObject* ReturnValue; // 0x0050 (0x0008)
};

// Function: Engine.GameplayStatics.BeginSpawningActorFromBlueprint
// Size: 0x0050
struct GameplayStatics_BeginSpawningActorFromBlueprint_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Blueprint; // 0x0008 (0x0008)
    uint8_t SpawnTransform[0x30]; // 0x0010 (0x0030)
    bool bNoCollisionFail; // 0x0040 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0041 (0x0007)
    class UObject* ReturnValue; // 0x0048 (0x0008)
};

// Function: Engine.GameplayStatics.BeginDeferredActorSpawnFromClass
// Size: 0x0058
struct GameplayStatics_BeginDeferredActorSpawnFromClass_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* ActorClass; // 0x0008 (0x0008)
    uint8_t SpawnTransform[0x30]; // 0x0010 (0x0030)
    uint8_t CollisionHandlingOverride; // 0x0040 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0041 (0x0007)
    class UObject* Owner; // 0x0048 (0x0008)
    class UObject* ReturnValue; // 0x0050 (0x0008)
};

// Function: Engine.GameplayStatics.AreAnyListenersWithinRange
// Size: 0x0019
struct GameplayStatics_AreAnyListenersWithinRange_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Location[0xC]; // 0x0008 (0x000C)
    float MaximumRange; // 0x0014 (0x0004)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.GameplayStatics.ApplyRadialDamageWithFalloff
// Size: 0x0052
struct GameplayStatics_ApplyRadialDamageWithFalloff_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float BaseDamage; // 0x0008 (0x0004)
    float MinimumDamage; // 0x000C (0x0004)
    uint8_t Origin[0xC]; // 0x0010 (0x000C)
    float DamageInnerRadius; // 0x001C (0x0004)
    float DamageOuterRadius; // 0x0020 (0x0004)
    float DamageFalloff; // 0x0024 (0x0004)
    class UClass* DamageTypeClass; // 0x0028 (0x0008)
    struct TArray<uint8_t> IgnoreActors; // 0x0030 (0x0010)
    class UObject* DamageCauser; // 0x0040 (0x0008)
    class UObject* InstigatedByController; // 0x0048 (0x0008)
    uint8_t DamagePreventionChannel; // 0x0050 (0x0001)
    bool ReturnValue; // 0x0051 (0x0001)
};

// Function: Engine.GameplayStatics.ApplyRadialDamage
// Size: 0x004B
struct GameplayStatics_ApplyRadialDamage_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float BaseDamage; // 0x0008 (0x0004)
    uint8_t Origin[0xC]; // 0x000C (0x000C)
    float DamageRadius; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UClass* DamageTypeClass; // 0x0020 (0x0008)
    struct TArray<uint8_t> IgnoreActors; // 0x0028 (0x0010)
    class UObject* DamageCauser; // 0x0038 (0x0008)
    class UObject* InstigatedByController; // 0x0040 (0x0008)
    bool bDoFullDamage; // 0x0048 (0x0001)
    uint8_t DamagePreventionChannel; // 0x0049 (0x0001)
    bool ReturnValue; // 0x004A (0x0001)
};

// Function: Engine.GameplayStatics.ApplyPointDamageWithFalloff
// Size: 0x0062
struct GameplayStatics_ApplyPointDamageWithFalloff_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float BaseDamage; // 0x0008 (0x0004)
    float MinimumDamage; // 0x000C (0x0004)
    uint8_t Origin[0xC]; // 0x0010 (0x000C)
    float DamageInnerRadius; // 0x001C (0x0004)
    float DamageOuterRadius; // 0x0020 (0x0004)
    float DamageFalloff; // 0x0024 (0x0004)
    class UClass* DamageTypeClass; // 0x0028 (0x0008)
    struct TArray<uint8_t> IgnoreActors; // 0x0030 (0x0010)
    struct TArray<uint8_t> AffectedActors; // 0x0040 (0x0010)
    class UObject* DamageCauser; // 0x0050 (0x0008)
    class UObject* InstigatedByController; // 0x0058 (0x0008)
    uint8_t DamagePreventionChannel; // 0x0060 (0x0001)
    bool ReturnValue; // 0x0061 (0x0001)
};

// Function: Engine.GameplayStatics.ApplyPointDamage
// Size: 0x00BC
struct GameplayStatics_ApplyPointDamage_Params {
public:
    class UObject* DamagedActor; // 0x0000 (0x0008)
    float BaseDamage; // 0x0008 (0x0004)
    uint8_t HitFromDirection[0xC]; // 0x000C (0x000C)
    uint8_t HitInfo[0x88]; // 0x0018 (0x0088)
    class UObject* EventInstigator; // 0x00A0 (0x0008)
    class UObject* DamageCauser; // 0x00A8 (0x0008)
    class UClass* DamageTypeClass; // 0x00B0 (0x0008)
    int32_t DamagedBodyIndex; // 0x00B8 (0x0004)
};

// Function: Engine.GameplayStatics.ApplyDamage
// Size: 0x002C
struct GameplayStatics_ApplyDamage_Params {
public:
    class UObject* DamagedActor; // 0x0000 (0x0008)
    float BaseDamage; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* EventInstigator; // 0x0010 (0x0008)
    class UObject* DamageCauser; // 0x0018 (0x0008)
    class UClass* DamageTypeClass; // 0x0020 (0x0008)
    int32_t DamagedBodyIndex; // 0x0028 (0x0004)
};

// Function: Engine.GameplayStatics.ActivateReverbEffect
// Size: 0x0024
struct GameplayStatics_ActivateReverbEffect_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* ReverbEffect; // 0x0008 (0x0008)
    struct FName TagName; // 0x0010 (0x0008)
    float Priority; // 0x0018 (0x0004)
    float Volume; // 0x001C (0x0004)
    float FadeTime; // 0x0020 (0x0004)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// Size: 0x000C
struct HeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    float NewScale; // 0x0008 (0x0004)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// Size: 0x0001
struct HeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params {
public:
    uint8_t Origin; // 0x0000 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// Size: 0x0008
struct HeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params {
public:
    float Near; // 0x0000 (0x0004)
    float Far; // 0x0004 (0x0004)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// Size: 0x0005
struct HeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params {
public:
    float Yaw; // 0x0000 (0x0004)
    uint8_t Options; // 0x0004 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// Size: 0x0001
struct HeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// Size: 0x0001
struct HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// Size: 0x0001
struct HeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// Size: 0x000C
struct HeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params {
public:
    class UObject* WorldContext; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// Size: 0x0002
struct HeadMountedDisplayFunctionLibrary_GetVRFocusState_Params {
public:
    bool bUseFocus; // 0x0000 (0x0001)
    bool bHasFocus; // 0x0001 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// Size: 0x0001
struct HeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// Size: 0x0004
struct HeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// Size: 0x002C
struct HeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params {
public:
    uint8_t CameraOrigin[0xC]; // 0x0000 (0x000C)
    uint8_t CameraRotation[0xC]; // 0x000C (0x000C)
    float HFOV; // 0x0018 (0x0004)
    float VFOV; // 0x001C (0x0004)
    float CameraDistance; // 0x0020 (0x0004)
    float NearPlane; // 0x0024 (0x0004)
    float FarPlane; // 0x0028 (0x0004)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// Size: 0x0018
struct HeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params {
public:
    uint8_t DeviceRotation[0xC]; // 0x0000 (0x000C)
    uint8_t DevicePosition[0xC]; // 0x000C (0x000C)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// Size: 0x0001
struct HeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.HeadMountedDisplayFunctionLibrary.EnableHMD
// Size: 0x0002
struct HeadMountedDisplayFunctionLibrary_EnableHMD_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
    bool ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.KismetArrayLibrary.SetArrayPropertyByName
// Size: 0x0020
struct KismetArrayLibrary_SetArrayPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    struct TArray<uint8_t> Value; // 0x0010 (0x0010)
};

// Function: Engine.KismetArrayLibrary.FilterArray
// Size: 0x0028
struct KismetArrayLibrary_FilterArray_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    class UClass* FilterClass; // 0x0010 (0x0008)
    struct TArray<uint8_t> FilteredArray; // 0x0018 (0x0010)
};

// Function: Engine.KismetArrayLibrary.Array_Shuffle
// Size: 0x0010
struct KismetArrayLibrary_Array_Shuffle_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
};

// Function: Engine.KismetArrayLibrary.Array_Set
// Size: 0x0019
struct KismetArrayLibrary_Array_Set_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t Index; // 0x0010 (0x0004)
    int32_t Item; // 0x0014 (0x0004)
    bool bSizeToFit; // 0x0018 (0x0001)
};

// Function: Engine.KismetArrayLibrary.Array_Resize
// Size: 0x0014
struct KismetArrayLibrary_Array_Resize_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t Size; // 0x0010 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_RemoveItem
// Size: 0x0015
struct KismetArrayLibrary_Array_RemoveItem_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t Item; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetArrayLibrary.Array_Remove
// Size: 0x0014
struct KismetArrayLibrary_Array_Remove_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t IndexToRemove; // 0x0010 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_Length
// Size: 0x0014
struct KismetArrayLibrary_Array_Length_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_LastIndex
// Size: 0x0014
struct KismetArrayLibrary_Array_LastIndex_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_Insert
// Size: 0x0018
struct KismetArrayLibrary_Array_Insert_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t newItem; // 0x0010 (0x0004)
    int32_t Index; // 0x0014 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_Get
// Size: 0x0018
struct KismetArrayLibrary_Array_Get_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t Index; // 0x0010 (0x0004)
    int32_t Item; // 0x0014 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_Find
// Size: 0x0018
struct KismetArrayLibrary_Array_Find_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t ItemToFind; // 0x0010 (0x0004)
    int32_t ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_Contains
// Size: 0x0015
struct KismetArrayLibrary_Array_Contains_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t ItemToFind; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: Engine.KismetArrayLibrary.Array_Clear
// Size: 0x0010
struct KismetArrayLibrary_Array_Clear_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
};

// Function: Engine.KismetArrayLibrary.Array_Append
// Size: 0x0020
struct KismetArrayLibrary_Array_Append_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    struct TArray<uint8_t> SourceArray; // 0x0010 (0x0010)
};

// Function: Engine.KismetArrayLibrary.Array_AddUnique
// Size: 0x0018
struct KismetArrayLibrary_Array_AddUnique_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t newItem; // 0x0010 (0x0004)
    int32_t ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetArrayLibrary.Array_Add
// Size: 0x0018
struct KismetArrayLibrary_Array_Add_Params {
public:
    struct TArray<uint8_t> TargetArray; // 0x0000 (0x0010)
    int32_t newItem; // 0x0010 (0x0004)
    int32_t ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetGuidLibrary.Parse_StringToGuid
// Size: 0x0021
struct KismetGuidLibrary_Parse_StringToGuid_Params {
public:
    struct FString GuidString; // 0x0000 (0x0010)
    uint8_t OutGuid[0x10]; // 0x0010 (0x0010)
    bool Success; // 0x0020 (0x0001)
};

// Function: Engine.KismetGuidLibrary.NotEqual_GuidGuid
// Size: 0x0021
struct KismetGuidLibrary_NotEqual_GuidGuid_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    uint8_t B[0x10]; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.KismetGuidLibrary.NewGuid
// Size: 0x0010
struct KismetGuidLibrary_NewGuid_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.KismetGuidLibrary.IsValid_Guid
// Size: 0x0011
struct KismetGuidLibrary_IsValid_Guid_Params {
public:
    uint8_t InGuid[0x10]; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetGuidLibrary.Invalidate_Guid
// Size: 0x0010
struct KismetGuidLibrary_Invalidate_Guid_Params {
public:
    uint8_t InGuid[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.KismetGuidLibrary.EqualEqual_GuidGuid
// Size: 0x0021
struct KismetGuidLibrary_EqualEqual_GuidGuid_Params {
public:
    uint8_t A[0x10]; // 0x0000 (0x0010)
    uint8_t B[0x10]; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.KismetGuidLibrary.Conv_GuidToString
// Size: 0x0020
struct KismetGuidLibrary_Conv_GuidToString_Params {
public:
    uint8_t InGuid[0x10]; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetInputLibrary.PointerEvent_IsTouchEvent
// Size: 0x0079
struct KismetInputLibrary_PointerEvent_IsTouchEvent_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    bool ReturnValue; // 0x0078 (0x0001)
};

// Function: Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown
// Size: 0x0091
struct KismetInputLibrary_PointerEvent_IsMouseButtonDown_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    uint8_t MouseButton[0x18]; // 0x0078 (0x0018)
    bool ReturnValue; // 0x0090 (0x0001)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetWheelDelta
// Size: 0x007C
struct KismetInputLibrary_PointerEvent_GetWheelDelta_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    float ReturnValue; // 0x0078 (0x0004)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetUserIndex
// Size: 0x007C
struct KismetInputLibrary_PointerEvent_GetUserIndex_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    int32_t ReturnValue; // 0x0078 (0x0004)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex
// Size: 0x007C
struct KismetInputLibrary_PointerEvent_GetTouchpadIndex_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    int32_t ReturnValue; // 0x0078 (0x0004)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition
// Size: 0x0080
struct KismetInputLibrary_PointerEvent_GetScreenSpacePosition_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    uint8_t ReturnValue[0x8]; // 0x0078 (0x0008)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetPointerIndex
// Size: 0x007C
struct KismetInputLibrary_PointerEvent_GetPointerIndex_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    int32_t ReturnValue; // 0x0078 (0x0004)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition
// Size: 0x0080
struct KismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    uint8_t ReturnValue[0x8]; // 0x0078 (0x0008)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetGestureDelta
// Size: 0x0080
struct KismetInputLibrary_PointerEvent_GetGestureDelta_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    uint8_t ReturnValue[0x8]; // 0x0078 (0x0008)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetEffectingButton
// Size: 0x0090
struct KismetInputLibrary_PointerEvent_GetEffectingButton_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    uint8_t ReturnValue[0x18]; // 0x0078 (0x0018)
};

// Function: Engine.KismetInputLibrary.PointerEvent_GetCursorDelta
// Size: 0x0080
struct KismetInputLibrary_PointerEvent_GetCursorDelta_Params {
public:
    uint8_t Input[0x78]; // 0x0000 (0x0078)
    uint8_t ReturnValue[0x8]; // 0x0078 (0x0008)
};

// Function: Engine.KismetInputLibrary.Key_IsVectorAxis
// Size: 0x0019
struct KismetInputLibrary_Key_IsVectorAxis_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetInputLibrary.Key_IsMouseButton
// Size: 0x0019
struct KismetInputLibrary_Key_IsMouseButton_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetInputLibrary.Key_IsModifierKey
// Size: 0x0019
struct KismetInputLibrary_Key_IsModifierKey_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetInputLibrary.Key_IsKeyboardKey
// Size: 0x0019
struct KismetInputLibrary_Key_IsKeyboardKey_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetInputLibrary.Key_IsGamepadKey
// Size: 0x0019
struct KismetInputLibrary_Key_IsGamepadKey_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetInputLibrary.Key_IsFloatAxis
// Size: 0x0019
struct KismetInputLibrary_Key_IsFloatAxis_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetInputLibrary.Key_GetDisplayName
// Size: 0x0030
struct KismetInputLibrary_Key_GetDisplayName_Params {
public:
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsShiftDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsShiftDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsRightShiftDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsRightShiftDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsRightControlDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsRightControlDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsRightCommandDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsRightCommandDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsRightAltDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsRightAltDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsRepeat
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsRepeat_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsLeftShiftDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftControlDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsLeftControlDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsLeftCommandDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftAltDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsLeftAltDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsControlDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsControlDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsCommandDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsCommandDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.InputEvent_IsAltDown
// Size: 0x0029
struct KismetInputLibrary_InputEvent_IsAltDown_Params {
public:
    uint8_t Input[0x28]; // 0x0000 (0x0028)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.KismetInputLibrary.GetUserIndex
// Size: 0x004C
struct KismetInputLibrary_GetUserIndex_Params {
public:
    uint8_t Input[0x48]; // 0x0000 (0x0048)
    int32_t ReturnValue; // 0x0048 (0x0004)
};

// Function: Engine.KismetInputLibrary.GetKey
// Size: 0x0060
struct KismetInputLibrary_GetKey_Params {
public:
    uint8_t Input[0x48]; // 0x0000 (0x0048)
    uint8_t ReturnValue[0x18]; // 0x0048 (0x0018)
};

// Function: Engine.KismetInputLibrary.GetAnalogValue
// Size: 0x0054
struct KismetInputLibrary_GetAnalogValue_Params {
public:
    uint8_t Input[0x50]; // 0x0000 (0x0050)
    float ReturnValue; // 0x0050 (0x0004)
};

// Function: Engine.KismetInputLibrary.EqualEqual_KeyKey
// Size: 0x0031
struct KismetInputLibrary_EqualEqual_KeyKey_Params {
public:
    uint8_t A[0x18]; // 0x0000 (0x0018)
    uint8_t B[0x18]; // 0x0018 (0x0018)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: Engine.KismetInputLibrary.ControllerEvent_GetUserIndex
// Size: 0x004C
struct KismetInputLibrary_ControllerEvent_GetUserIndex_Params {
public:
    uint8_t Input[0x48]; // 0x0000 (0x0048)
    int32_t ReturnValue; // 0x0048 (0x0004)
};

// Function: Engine.KismetInputLibrary.ControllerEvent_GetEffectingButton
// Size: 0x0060
struct KismetInputLibrary_ControllerEvent_GetEffectingButton_Params {
public:
    uint8_t Input[0x48]; // 0x0000 (0x0048)
    uint8_t ReturnValue[0x18]; // 0x0048 (0x0018)
};

// Function: Engine.KismetInputLibrary.ControllerEvent_GetAnalogValue
// Size: 0x004C
struct KismetInputLibrary_ControllerEvent_GetAnalogValue_Params {
public:
    uint8_t Input[0x48]; // 0x0000 (0x0048)
    float ReturnValue; // 0x0048 (0x0004)
};

// Function: Engine.KismetInputLibrary.CalibrateTilt
// Size: 0x0000
struct KismetInputLibrary_CalibrateTilt_Params {
public:
};

// Function: Engine.KismetInternationalizationLibrary.GetCurrentCulture
// Size: 0x0010
struct KismetInternationalizationLibrary_GetCurrentCulture_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetMaterialLibrary.SetVectorParameterValue
// Size: 0x0028
struct KismetMaterialLibrary_SetVectorParameterValue_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Collection; // 0x0008 (0x0008)
    struct FName ParameterName; // 0x0010 (0x0008)
    uint8_t ParameterValue[0x10]; // 0x0018 (0x0010)
};

// Function: Engine.KismetMaterialLibrary.SetScalarParameterValue
// Size: 0x001C
struct KismetMaterialLibrary_SetScalarParameterValue_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Collection; // 0x0008 (0x0008)
    struct FName ParameterName; // 0x0010 (0x0008)
    float ParameterValue; // 0x0018 (0x0004)
};

// Function: Engine.KismetMaterialLibrary.GetVectorParameterValue
// Size: 0x0028
struct KismetMaterialLibrary_GetVectorParameterValue_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Collection; // 0x0008 (0x0008)
    struct FName ParameterName; // 0x0010 (0x0008)
    uint8_t ReturnValue[0x10]; // 0x0018 (0x0010)
};

// Function: Engine.KismetMaterialLibrary.GetScalarParameterValue
// Size: 0x001C
struct KismetMaterialLibrary_GetScalarParameterValue_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Collection; // 0x0008 (0x0008)
    struct FName ParameterName; // 0x0010 (0x0008)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance
// Size: 0x0018
struct KismetMaterialLibrary_CreateDynamicMaterialInstance_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* Parent; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.KismetNodeHelperLibrary.MarkBit
// Size: 0x0008
struct KismetNodeHelperLibrary_MarkBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t Index; // 0x0004 (0x0004)
};

// Function: Engine.KismetNodeHelperLibrary.HasUnmarkedBit
// Size: 0x0009
struct KismetNodeHelperLibrary_HasUnmarkedBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t NumBits; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetNodeHelperLibrary.HasMarkedBit
// Size: 0x0009
struct KismetNodeHelperLibrary_HasMarkedBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t NumBits; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetNodeHelperLibrary.GetValidValue
// Size: 0x000A
struct KismetNodeHelperLibrary_GetValidValue_Params {
public:
    class UObject* Enum; // 0x0000 (0x0008)
    uint8_t EnumeratorValue; // 0x0008 (0x0001)
    uint8_t ReturnValue; // 0x0009 (0x0001)
};

// Function: Engine.KismetNodeHelperLibrary.GetUnmarkedBit
// Size: 0x0014
struct KismetNodeHelperLibrary_GetUnmarkedBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t StartIdx; // 0x0004 (0x0004)
    int32_t NumBits; // 0x0008 (0x0004)
    bool bRandom; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit
// Size: 0x0010
struct KismetNodeHelperLibrary_GetRandomUnmarkedBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t StartIdx; // 0x0004 (0x0004)
    int32_t NumBits; // 0x0008 (0x0004)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit
// Size: 0x0010
struct KismetNodeHelperLibrary_GetFirstUnmarkedBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t StartIdx; // 0x0004 (0x0004)
    int32_t NumBits; // 0x0008 (0x0004)
    int32_t ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetNodeHelperLibrary.GetEnumeratorValueFromIndex
// Size: 0x000A
struct KismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Params {
public:
    class UObject* Enum; // 0x0000 (0x0008)
    uint8_t EnumeratorIndex; // 0x0008 (0x0001)
    uint8_t ReturnValue; // 0x0009 (0x0001)
};

// Function: Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName
// Size: 0x0020
struct KismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Params {
public:
    class UObject* Enum; // 0x0000 (0x0008)
    uint8_t EnumeratorValue; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetNodeHelperLibrary.GetEnumeratorName
// Size: 0x0018
struct KismetNodeHelperLibrary_GetEnumeratorName_Params {
public:
    class UObject* Enum; // 0x0000 (0x0008)
    uint8_t EnumeratorValue; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FName ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.KismetNodeHelperLibrary.ClearBit
// Size: 0x0008
struct KismetNodeHelperLibrary_ClearBit_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t Index; // 0x0004 (0x0004)
};

// Function: Engine.KismetNodeHelperLibrary.ClearAllBits
// Size: 0x0004
struct KismetNodeHelperLibrary_ClearAllBits_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
};

// Function: Engine.KismetNodeHelperLibrary.BitIsMarked
// Size: 0x0009
struct KismetNodeHelperLibrary_BitIsMarked_Params {
public:
    int32_t Data; // 0x0000 (0x0004)
    int32_t Index; // 0x0004 (0x0004)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetStringLibrary.TrimTrailing
// Size: 0x0020
struct KismetStringLibrary_TrimTrailing_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.Trim
// Size: 0x0020
struct KismetStringLibrary_Trim_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.ToUpper
// Size: 0x0020
struct KismetStringLibrary_ToUpper_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.ToLower
// Size: 0x0020
struct KismetStringLibrary_ToLower_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.TimeSecondsToString
// Size: 0x0018
struct KismetStringLibrary_TimeSecondsToString_Params {
public:
    float InSeconds; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.StartsWith
// Size: 0x0022
struct KismetStringLibrary_StartsWith_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString InPrefix; // 0x0010 (0x0010)
    uint8_t SearchCase; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: Engine.KismetStringLibrary.Split
// Size: 0x0043
struct KismetStringLibrary_Split_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString InStr; // 0x0010 (0x0010)
    struct FString LeftS; // 0x0020 (0x0010)
    struct FString RightS; // 0x0030 (0x0010)
    uint8_t SearchCase; // 0x0040 (0x0001)
    uint8_t SearchDir; // 0x0041 (0x0001)
    bool ReturnValue; // 0x0042 (0x0001)
};

// Function: Engine.KismetStringLibrary.RightPad
// Size: 0x0028
struct KismetStringLibrary_RightPad_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t ChCount; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.RightChop
// Size: 0x0028
struct KismetStringLibrary_RightChop_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.Right
// Size: 0x0028
struct KismetStringLibrary_Right_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.Reverse
// Size: 0x0020
struct KismetStringLibrary_Reverse_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.ReplaceInline
// Size: 0x0038
struct KismetStringLibrary_ReplaceInline_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString SearchText; // 0x0010 (0x0010)
    struct FString ReplacementText; // 0x0020 (0x0010)
    uint8_t SearchCase; // 0x0030 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0031 (0x0003)
    int32_t ReturnValue; // 0x0034 (0x0004)
};

// Function: Engine.KismetStringLibrary.Replace
// Size: 0x0048
struct KismetStringLibrary_Replace_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString From; // 0x0010 (0x0010)
    struct FString To; // 0x0020 (0x0010)
    uint8_t SearchCase; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetStringLibrary.ParseIntoArray
// Size: 0x0038
struct KismetStringLibrary_ParseIntoArray_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString Delimiter; // 0x0010 (0x0010)
    bool CullEmptyStrings; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    struct TArray<uint8_t> ReturnValue; // 0x0028 (0x0010)
};

// Function: Engine.KismetStringLibrary.NotEqual_StrStr
// Size: 0x0021
struct KismetStringLibrary_NotEqual_StrStr_Params {
public:
    struct FString A; // 0x0000 (0x0010)
    struct FString B; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.KismetStringLibrary.NotEqual_StriStri
// Size: 0x0021
struct KismetStringLibrary_NotEqual_StriStri_Params {
public:
    struct FString A; // 0x0000 (0x0010)
    struct FString B; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.KismetStringLibrary.Mid
// Size: 0x0028
struct KismetStringLibrary_Mid_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t Start; // 0x0010 (0x0004)
    int32_t Count; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.MatchesWildcard
// Size: 0x0022
struct KismetStringLibrary_MatchesWildcard_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString Wildcard; // 0x0010 (0x0010)
    uint8_t SearchCase; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: Engine.KismetStringLibrary.Len
// Size: 0x0014
struct KismetStringLibrary_Len_Params {
public:
    struct FString S; // 0x0000 (0x0010)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetStringLibrary.LeftPad
// Size: 0x0028
struct KismetStringLibrary_LeftPad_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t ChCount; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.LeftChop
// Size: 0x0028
struct KismetStringLibrary_LeftChop_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.Left
// Size: 0x0028
struct KismetStringLibrary_Left_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.JoinStringArray
// Size: 0x0030
struct KismetStringLibrary_JoinStringArray_Params {
public:
    struct TArray<uint8_t> SourceArray; // 0x0000 (0x0010)
    struct FString Separator; // 0x0010 (0x0010)
    struct FString ReturnValue; // 0x0020 (0x0010)
};

// Function: Engine.KismetStringLibrary.IsNumeric
// Size: 0x0011
struct KismetStringLibrary_IsNumeric_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetStringLibrary.GetSubstring
// Size: 0x0028
struct KismetStringLibrary_GetSubstring_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t StartIndex; // 0x0010 (0x0004)
    int32_t Length; // 0x0014 (0x0004)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetStringLibrary.GetCharacterAsNumber
// Size: 0x0018
struct KismetStringLibrary_GetCharacterAsNumber_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    int32_t Index; // 0x0010 (0x0004)
    int32_t ReturnValue; // 0x0014 (0x0004)
};

// Function: Engine.KismetStringLibrary.GetCharacterArrayFromString
// Size: 0x0020
struct KismetStringLibrary_GetCharacterArrayFromString_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct TArray<uint8_t> ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.FindSubstring
// Size: 0x002C
struct KismetStringLibrary_FindSubstring_Params {
public:
    struct FString SearchIn; // 0x0000 (0x0010)
    struct FString Substring; // 0x0010 (0x0010)
    bool bUseCase; // 0x0020 (0x0001)
    bool bSearchFromEnd; // 0x0021 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0022 (0x0002)
    int32_t StartPosition; // 0x0024 (0x0004)
    int32_t ReturnValue; // 0x0028 (0x0004)
};

// Function: Engine.KismetStringLibrary.EqualEqual_StrStr
// Size: 0x0021
struct KismetStringLibrary_EqualEqual_StrStr_Params {
public:
    struct FString A; // 0x0000 (0x0010)
    struct FString B; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.KismetStringLibrary.EqualEqual_StriStri
// Size: 0x0021
struct KismetStringLibrary_EqualEqual_StriStri_Params {
public:
    struct FString A; // 0x0000 (0x0010)
    struct FString B; // 0x0010 (0x0010)
    bool ReturnValue; // 0x0020 (0x0001)
};

// Function: Engine.KismetStringLibrary.EndsWith
// Size: 0x0022
struct KismetStringLibrary_EndsWith_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString InSuffix; // 0x0010 (0x0010)
    uint8_t SearchCase; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: Engine.KismetStringLibrary.CullArray
// Size: 0x0024
struct KismetStringLibrary_CullArray_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct TArray<uint8_t> InArray; // 0x0010 (0x0010)
    int32_t ReturnValue; // 0x0020 (0x0004)
};

// Function: Engine.KismetStringLibrary.Conv_VectorToString
// Size: 0x0020
struct KismetStringLibrary_Conv_VectorToString_Params {
public:
    uint8_t InVec[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_Vector2dToString
// Size: 0x0018
struct KismetStringLibrary_Conv_Vector2dToString_Params {
public:
    uint8_t InVec[0x8]; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_TransformToString
// Size: 0x0040
struct KismetStringLibrary_Conv_TransformToString_Params {
public:
    uint8_t InTrans[0x30]; // 0x0000 (0x0030)
    struct FString ReturnValue; // 0x0030 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_StringToName
// Size: 0x0018
struct KismetStringLibrary_Conv_StringToName_Params {
public:
    struct FString InString; // 0x0000 (0x0010)
    struct FName ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.KismetStringLibrary.Conv_StringToInt
// Size: 0x0014
struct KismetStringLibrary_Conv_StringToInt_Params {
public:
    struct FString InString; // 0x0000 (0x0010)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetStringLibrary.Conv_StringToFloat
// Size: 0x0014
struct KismetStringLibrary_Conv_StringToFloat_Params {
public:
    struct FString InString; // 0x0000 (0x0010)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetStringLibrary.Conv_RotatorToString
// Size: 0x0020
struct KismetStringLibrary_Conv_RotatorToString_Params {
public:
    uint8_t InRot[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_ObjectToString
// Size: 0x0018
struct KismetStringLibrary_Conv_ObjectToString_Params {
public:
    class UObject* InObj; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_NameToString
// Size: 0x0018
struct KismetStringLibrary_Conv_NameToString_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_IntToString
// Size: 0x0018
struct KismetStringLibrary_Conv_IntToString_Params {
public:
    int32_t InInt; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_FloatToString
// Size: 0x0018
struct KismetStringLibrary_Conv_FloatToString_Params {
public:
    float InFloat; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_ColorToString
// Size: 0x0020
struct KismetStringLibrary_Conv_ColorToString_Params {
public:
    uint8_t InColor[0x10]; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_ByteToString
// Size: 0x0018
struct KismetStringLibrary_Conv_ByteToString_Params {
public:
    uint8_t InByte; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_BoolToString
// Size: 0x0018
struct KismetStringLibrary_Conv_BoolToString_Params {
public:
    bool InBool; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetStringLibrary.Conv_AssetPtrToString
// Size: 0x0030
struct KismetStringLibrary_Conv_AssetPtrToString_Params {
public:
    uint8_t InObj[0x20]; // 0x0000 (0x0020)
    struct FString ReturnValue; // 0x0020 (0x0010)
};

// Function: Engine.KismetStringLibrary.Concat_StrStr
// Size: 0x0030
struct KismetStringLibrary_Concat_StrStr_Params {
public:
    struct FString A; // 0x0000 (0x0010)
    struct FString B; // 0x0010 (0x0010)
    struct FString ReturnValue; // 0x0020 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Vector2d
// Size: 0x0048
struct KismetStringLibrary_BuildString_Vector2d_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    uint8_t InVector2D[0x8]; // 0x0020 (0x0008)
    struct FString Suffix; // 0x0028 (0x0010)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Vector
// Size: 0x0050
struct KismetStringLibrary_BuildString_Vector_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    uint8_t InVector[0xC]; // 0x0020 (0x000C)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct FString Suffix; // 0x0030 (0x0010)
    struct FString ReturnValue; // 0x0040 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Rotator
// Size: 0x0050
struct KismetStringLibrary_BuildString_Rotator_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    uint8_t InRot[0xC]; // 0x0020 (0x000C)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct FString Suffix; // 0x0030 (0x0010)
    struct FString ReturnValue; // 0x0040 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Object
// Size: 0x0048
struct KismetStringLibrary_BuildString_Object_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    class UObject* InObj; // 0x0020 (0x0008)
    struct FString Suffix; // 0x0028 (0x0010)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Name
// Size: 0x0048
struct KismetStringLibrary_BuildString_Name_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    struct FName InName; // 0x0020 (0x0008)
    struct FString Suffix; // 0x0028 (0x0010)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Int
// Size: 0x0048
struct KismetStringLibrary_BuildString_Int_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    int32_t InInt; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FString Suffix; // 0x0028 (0x0010)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Float
// Size: 0x0048
struct KismetStringLibrary_BuildString_Float_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    float InFloat; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FString Suffix; // 0x0028 (0x0010)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Color
// Size: 0x0050
struct KismetStringLibrary_BuildString_Color_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    uint8_t InColor[0x10]; // 0x0020 (0x0010)
    struct FString Suffix; // 0x0030 (0x0010)
    struct FString ReturnValue; // 0x0040 (0x0010)
};

// Function: Engine.KismetStringLibrary.BuildString_Bool
// Size: 0x0048
struct KismetStringLibrary_BuildString_Bool_Params {
public:
    struct FString AppendTo; // 0x0000 (0x0010)
    struct FString Prefix; // 0x0010 (0x0010)
    bool InBool; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    struct FString Suffix; // 0x0028 (0x0010)
    struct FString ReturnValue; // 0x0038 (0x0010)
};

// Function: Engine.KismetSystemLibrary.StackTrace
// Size: 0x0000
struct KismetSystemLibrary_StackTrace_Params {
public:
};

// Function: Engine.KismetSystemLibrary.SphereTraceSingleForObjects
// Size: 0x00E2
struct KismetSystemLibrary_SphereTraceSingleForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0051 (0x0007)
    uint8_t OutHit[0x88]; // 0x0058 (0x0088)
    bool bIgnoreSelf; // 0x00E0 (0x0001)
    bool ReturnValue; // 0x00E1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceSingleByObject_DEPRECATED
// Size: 0x00E2
struct KismetSystemLibrary_SphereTraceSingleByObject_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectsToTrace; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0051 (0x0007)
    uint8_t OutHit[0x88]; // 0x0058 (0x0088)
    bool bIgnoreSelf; // 0x00E0 (0x0001)
    bool ReturnValue; // 0x00E1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceSingle_NEW
// Size: 0x00CA
struct KismetSystemLibrary_SphereTraceSingle_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t TraceChannel; // 0x0024 (0x0001)
    bool bTraceComplex; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t OutHit[0x88]; // 0x0040 (0x0088)
    bool bIgnoreSelf; // 0x00C8 (0x0001)
    bool ReturnValue; // 0x00C9 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceSingle_DEPRECATED
// Size: 0x00CA
struct KismetSystemLibrary_SphereTraceSingle_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t TraceChannel; // 0x0024 (0x0001)
    bool bTraceComplex; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t OutHit[0x88]; // 0x0040 (0x0088)
    bool bIgnoreSelf; // 0x00C8 (0x0001)
    bool ReturnValue; // 0x00C9 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceMultiForObjects
// Size: 0x006A
struct KismetSystemLibrary_SphereTraceMultiForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0058 (0x0010)
    bool bIgnoreSelf; // 0x0068 (0x0001)
    bool ReturnValue; // 0x0069 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceMultiByObject_DEPRECATED
// Size: 0x006A
struct KismetSystemLibrary_SphereTraceMultiByObject_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectsToTrace; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0058 (0x0010)
    bool bIgnoreSelf; // 0x0068 (0x0001)
    bool ReturnValue; // 0x0069 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceMulti_PROFILE
// Size: 0x0062
struct KismetSystemLibrary_SphereTraceMulti_PROFILE_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FName ProfileName; // 0x0028 (0x0008)
    bool bTraceComplex; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    uint8_t DrawDebugType; // 0x0048 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0050 (0x0010)
    bool bIgnoreSelf; // 0x0060 (0x0001)
    bool ReturnValue; // 0x0061 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceMulti_NEW
// Size: 0x0052
struct KismetSystemLibrary_SphereTraceMulti_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t TraceChannel; // 0x0024 (0x0001)
    bool bTraceComplex; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0040 (0x0010)
    bool bIgnoreSelf; // 0x0050 (0x0001)
    bool ReturnValue; // 0x0051 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereTraceMulti_DEPRECATED
// Size: 0x0052
struct KismetSystemLibrary_SphereTraceMulti_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    uint8_t TraceChannel; // 0x0024 (0x0001)
    bool bTraceComplex; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0040 (0x0010)
    bool bIgnoreSelf; // 0x0050 (0x0001)
    bool ReturnValue; // 0x0051 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereOverlapComponents_NEW
// Size: 0x0051
struct KismetSystemLibrary_SphereOverlapComponents_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t SpherePos[0xC]; // 0x0008 (0x000C)
    float SphereRadius; // 0x0014 (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0018 (0x0010)
    class UClass* ComponentClassFilter; // 0x0028 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0040 (0x0010)
    bool ReturnValue; // 0x0050 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereOverlapComponents_DEPRECATED
// Size: 0x0049
struct KismetSystemLibrary_SphereOverlapComponents_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t SpherePos[0xC]; // 0x0008 (0x000C)
    float SphereRadius; // 0x0014 (0x0004)
    uint8_t Filter; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UClass* ComponentClassFilter; // 0x0020 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0038 (0x0010)
    bool ReturnValue; // 0x0048 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereOverlapActors_NEW
// Size: 0x0051
struct KismetSystemLibrary_SphereOverlapActors_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t SpherePos[0xC]; // 0x0008 (0x000C)
    float SphereRadius; // 0x0014 (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0018 (0x0010)
    class UClass* ActorClassFilter; // 0x0028 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0040 (0x0010)
    bool ReturnValue; // 0x0050 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SphereOverlapActors_DEPRECATED
// Size: 0x0049
struct KismetSystemLibrary_SphereOverlapActors_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t SpherePos[0xC]; // 0x0008 (0x000C)
    float SphereRadius; // 0x0014 (0x0004)
    uint8_t Filter; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    class UClass* ActorClassFilter; // 0x0020 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0038 (0x0010)
    bool ReturnValue; // 0x0048 (0x0001)
};

// Function: Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen
// Size: 0x0010
struct KismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Params {
public:
    struct FString CategoryName; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen
// Size: 0x0008
struct KismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Params {
public:
    class UObject* SpecificPlayer; // 0x0000 (0x0008)
};

// Function: Engine.KismetSystemLibrary.ShowAdBanner
// Size: 0x0005
struct KismetSystemLibrary_ShowAdBanner_Params {
public:
    int32_t AdIdIndex; // 0x0000 (0x0004)
    bool bShowOnBottomOfScreen; // 0x0004 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SetWindowTitle
// Size: 0x0018
struct KismetSystemLibrary_SetWindowTitle_Params {
public:
    struct FText Title; // 0x0000 (0x0018)
};

// Function: Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem
// Size: 0x0001
struct KismetSystemLibrary_SetVolumeButtonsHandledBySystem_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SetVectorPropertyByName
// Size: 0x001C
struct KismetSystemLibrary_SetVectorPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetSystemLibrary.SetTransformPropertyByName
// Size: 0x0040
struct KismetSystemLibrary_SetTransformPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.KismetSystemLibrary.SetTextPropertyByName
// Size: 0x0028
struct KismetSystemLibrary_SetTextPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    struct FText Value; // 0x0010 (0x0018)
};

// Function: Engine.KismetSystemLibrary.SetSupressViewportTransitionMessage
// Size: 0x0009
struct KismetSystemLibrary_SetSupressViewportTransitionMessage_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool bState; // 0x0008 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SetStructurePropertyByName
// Size: 0x0014
struct KismetSystemLibrary_SetStructurePropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x4]; // 0x0010 (0x0004)
};

// Function: Engine.KismetSystemLibrary.SetStringPropertyByName
// Size: 0x0020
struct KismetSystemLibrary_SetStringPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    struct FString Value; // 0x0010 (0x0010)
};

// Function: Engine.KismetSystemLibrary.SetRotatorPropertyByName
// Size: 0x001C
struct KismetSystemLibrary_SetRotatorPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetSystemLibrary.SetObjectPropertyByName
// Size: 0x0018
struct KismetSystemLibrary_SetObjectPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    class UObject* Value; // 0x0010 (0x0008)
};

// Function: Engine.KismetSystemLibrary.SetNamePropertyByName
// Size: 0x0018
struct KismetSystemLibrary_SetNamePropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    struct FName Value; // 0x0010 (0x0008)
};

// Function: Engine.KismetSystemLibrary.SetLinearColorPropertyByName
// Size: 0x0020
struct KismetSystemLibrary_SetLinearColorPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.KismetSystemLibrary.SetIntPropertyByName
// Size: 0x0014
struct KismetSystemLibrary_SetIntPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    int32_t Value; // 0x0010 (0x0004)
};

// Function: Engine.KismetSystemLibrary.SetInterfacePropertyByName
// Size: 0x0020
struct KismetSystemLibrary_SetInterfacePropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x10]; // 0x0010 (0x0010)
};

// Function: Engine.KismetSystemLibrary.SetFloatPropertyByName
// Size: 0x0014
struct KismetSystemLibrary_SetFloatPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    float Value; // 0x0010 (0x0004)
};

// Function: Engine.KismetSystemLibrary.SetCollisionProfileNameProperty
// Size: 0x0018
struct KismetSystemLibrary_SetCollisionProfileNameProperty_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x8]; // 0x0010 (0x0008)
};

// Function: Engine.KismetSystemLibrary.SetClassPropertyByName
// Size: 0x0018
struct KismetSystemLibrary_SetClassPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    class UClass* Value; // 0x0010 (0x0008)
};

// Function: Engine.KismetSystemLibrary.SetBytePropertyByName
// Size: 0x0011
struct KismetSystemLibrary_SetBytePropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SetBoolPropertyByName
// Size: 0x0011
struct KismetSystemLibrary_SetBoolPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    bool Value; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.SetAssetPropertyByName
// Size: 0x0030
struct KismetSystemLibrary_SetAssetPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x20]; // 0x0010 (0x0020)
};

// Function: Engine.KismetSystemLibrary.SetAssetClassPropertyByName
// Size: 0x0030
struct KismetSystemLibrary_SetAssetClassPropertyByName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FName PropertyName; // 0x0008 (0x0008)
    uint8_t Value[0x20]; // 0x0010 (0x0020)
};

// Function: Engine.KismetSystemLibrary.RetriggerableDelay
// Size: 0x0028
struct KismetSystemLibrary_RetriggerableDelay_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float Duration; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t LatentInfo[0x18]; // 0x0010 (0x0018)
};

// Function: Engine.KismetSystemLibrary.ResetGamepadAssignmentToController
// Size: 0x0004
struct KismetSystemLibrary_ResetGamepadAssignmentToController_Params {
public:
    int32_t ControllerId; // 0x0000 (0x0004)
};

// Function: Engine.KismetSystemLibrary.ResetGamepadAssignments
// Size: 0x0000
struct KismetSystemLibrary_ResetGamepadAssignments_Params {
public:
};

// Function: Engine.KismetSystemLibrary.RegisterForRemoteNotifications
// Size: 0x0000
struct KismetSystemLibrary_RegisterForRemoteNotifications_Params {
public:
};

// Function: Engine.KismetSystemLibrary.QuitGame
// Size: 0x0011
struct KismetSystemLibrary_QuitGame_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* SpecificPlayer; // 0x0008 (0x0008)
    uint8_t QuitPreference; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.PrintWarning
// Size: 0x0010
struct KismetSystemLibrary_PrintWarning_Params {
public:
    struct FString InString; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.PrintText
// Size: 0x0038
struct KismetSystemLibrary_PrintText_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FText InText; // 0x0008 (0x0018)
    bool bPrintToScreen; // 0x0020 (0x0001)
    bool bPrintToLog; // 0x0021 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0022 (0x0002)
    uint8_t TextColor[0x10]; // 0x0024 (0x0010)
    float Duration; // 0x0034 (0x0004)
};

// Function: Engine.KismetSystemLibrary.PrintString
// Size: 0x0030
struct KismetSystemLibrary_PrintString_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FString InString; // 0x0008 (0x0010)
    bool bPrintToScreen; // 0x0018 (0x0001)
    bool bPrintToLog; // 0x0019 (0x0001)
    uint8_t Pad_0[0x2]; // 0x001A (0x0002)
    uint8_t TextColor[0x10]; // 0x001C (0x0010)
    float Duration; // 0x002C (0x0004)
};

// Function: Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature
// Size: 0x0008
struct KismetSystemLibrary_OnAssetLoaded__DelegateSignature_Params {
public:
    class UObject* Loaded; // 0x0000 (0x0008)
};

// Function: Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature
// Size: 0x0008
struct KismetSystemLibrary_OnAssetClassLoaded__DelegateSignature_Params {
public:
    class UClass* Loaded; // 0x0000 (0x0008)
};

// Function: Engine.KismetSystemLibrary.MoveComponentTo
// Size: 0x0048
struct KismetSystemLibrary_MoveComponentTo_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    uint8_t TargetRelativeLocation[0xC]; // 0x0008 (0x000C)
    uint8_t TargetRelativeRotation[0xC]; // 0x0014 (0x000C)
    bool bEaseOut; // 0x0020 (0x0001)
    bool bEaseIn; // 0x0021 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0022 (0x0002)
    float OverTime; // 0x0024 (0x0004)
    uint8_t MoveAction; // 0x0028 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0029 (0x0007)
    uint8_t LatentInfo[0x18]; // 0x0030 (0x0018)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralText
// Size: 0x0030
struct KismetSystemLibrary_MakeLiteralText_Params {
public:
    struct FText Value; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralString
// Size: 0x0020
struct KismetSystemLibrary_MakeLiteralString_Params {
public:
    struct FString Value; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralName
// Size: 0x0010
struct KismetSystemLibrary_MakeLiteralName_Params {
public:
    struct FName Value; // 0x0000 (0x0008)
    struct FName ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralInt
// Size: 0x0008
struct KismetSystemLibrary_MakeLiteralInt_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
    int32_t ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralFloat
// Size: 0x0008
struct KismetSystemLibrary_MakeLiteralFloat_Params {
public:
    float Value; // 0x0000 (0x0004)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralByte
// Size: 0x0002
struct KismetSystemLibrary_MakeLiteralByte_Params {
public:
    uint8_t Value; // 0x0000 (0x0001)
    uint8_t ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.KismetSystemLibrary.MakeLiteralBool
// Size: 0x0002
struct KismetSystemLibrary_MakeLiteralBool_Params {
public:
    bool Value; // 0x0000 (0x0001)
    bool ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LoadAssetClass
// Size: 0x0050
struct KismetSystemLibrary_LoadAssetClass_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t AssetClass[0x20]; // 0x0008 (0x0020)
    uint8_t OnLoaded[0x10]; // 0x0028 (0x0010)
    uint8_t LatentInfo[0x18]; // 0x0038 (0x0018)
};

// Function: Engine.KismetSystemLibrary.LoadAsset
// Size: 0x0050
struct KismetSystemLibrary_LoadAsset_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Asset[0x20]; // 0x0008 (0x0020)
    uint8_t OnLoaded[0x10]; // 0x0028 (0x0010)
    uint8_t LatentInfo[0x18]; // 0x0038 (0x0018)
};

// Function: Engine.KismetSystemLibrary.LineTraceSingleForObjects
// Size: 0x00DA
struct KismetSystemLibrary_LineTraceSingleForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    struct TArray<uint8_t> ObjectTypes; // 0x0020 (0x0010)
    bool bTraceComplex; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    uint8_t DrawDebugType; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    uint8_t OutHit[0x88]; // 0x0050 (0x0088)
    bool bIgnoreSelf; // 0x00D8 (0x0001)
    bool ReturnValue; // 0x00D9 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceSingleByObject_DEPRECATED
// Size: 0x00DA
struct KismetSystemLibrary_LineTraceSingleByObject_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    struct TArray<uint8_t> ObjectsToTrace; // 0x0020 (0x0010)
    bool bTraceComplex; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    uint8_t DrawDebugType; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    uint8_t OutHit[0x88]; // 0x0050 (0x0088)
    bool bIgnoreSelf; // 0x00D8 (0x0001)
    bool ReturnValue; // 0x00D9 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceSingle_PROFILE
// Size: 0x00D2
struct KismetSystemLibrary_LineTraceSingle_PROFILE_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    struct FName ProfileName; // 0x0020 (0x0008)
    bool bTraceComplex; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    uint8_t DrawDebugType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    uint8_t OutHit[0x88]; // 0x0048 (0x0088)
    bool bIgnoreSelf; // 0x00D0 (0x0001)
    bool ReturnValue; // 0x00D1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceSingle_NEW
// Size: 0x00CA
struct KismetSystemLibrary_LineTraceSingle_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t TraceChannel; // 0x0020 (0x0001)
    bool bTraceComplex; // 0x0021 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0022 (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t OutHit[0x88]; // 0x0040 (0x0088)
    bool bIgnoreSelf; // 0x00C8 (0x0001)
    bool ReturnValue; // 0x00C9 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceSingle_DEPRECATED
// Size: 0x00CA
struct KismetSystemLibrary_LineTraceSingle_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t TraceChannel; // 0x0020 (0x0001)
    bool bTraceComplex; // 0x0021 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0022 (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t OutHit[0x88]; // 0x0040 (0x0088)
    bool bIgnoreSelf; // 0x00C8 (0x0001)
    bool ReturnValue; // 0x00C9 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceMultiForObjects
// Size: 0x0062
struct KismetSystemLibrary_LineTraceMultiForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    struct TArray<uint8_t> ObjectTypes; // 0x0020 (0x0010)
    bool bTraceComplex; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    uint8_t DrawDebugType; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0050 (0x0010)
    bool bIgnoreSelf; // 0x0060 (0x0001)
    bool ReturnValue; // 0x0061 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceMultiByObject_DEPRECATED
// Size: 0x0062
struct KismetSystemLibrary_LineTraceMultiByObject_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    struct TArray<uint8_t> ObjectsToTrace; // 0x0020 (0x0010)
    bool bTraceComplex; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    uint8_t DrawDebugType; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0050 (0x0010)
    bool bIgnoreSelf; // 0x0060 (0x0001)
    bool ReturnValue; // 0x0061 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceMulti_NEW
// Size: 0x0052
struct KismetSystemLibrary_LineTraceMulti_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t TraceChannel; // 0x0020 (0x0001)
    bool bTraceComplex; // 0x0021 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0022 (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0040 (0x0010)
    bool bIgnoreSelf; // 0x0050 (0x0001)
    bool ReturnValue; // 0x0051 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LineTraceMulti_DEPRECATED
// Size: 0x0052
struct KismetSystemLibrary_LineTraceMulti_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t TraceChannel; // 0x0020 (0x0001)
    bool bTraceComplex; // 0x0021 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0022 (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    uint8_t DrawDebugType; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0040 (0x0010)
    bool bIgnoreSelf; // 0x0050 (0x0001)
    bool ReturnValue; // 0x0051 (0x0001)
};

// Function: Engine.KismetSystemLibrary.LaunchURL
// Size: 0x0010
struct KismetSystemLibrary_LaunchURL_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.K2_UnPauseTimerHandle
// Size: 0x000C
struct KismetSystemLibrary_K2_UnPauseTimerHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate
// Size: 0x0010
struct KismetSystemLibrary_K2_UnPauseTimerDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.K2_UnPauseTimer
// Size: 0x0018
struct KismetSystemLibrary_K2_UnPauseTimer_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.K2_TimerExistsHandle
// Size: 0x000D
struct KismetSystemLibrary_K2_TimerExistsHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_TimerExistsDelegate
// Size: 0x0011
struct KismetSystemLibrary_K2_TimerExistsDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_TimerExists
// Size: 0x0019
struct KismetSystemLibrary_K2_TimerExists_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_SetTimerDelegate
// Size: 0x001C
struct KismetSystemLibrary_K2_SetTimerDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
    float Time; // 0x0010 (0x0004)
    bool bLooping; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    uint8_t ReturnValue[0x4]; // 0x0018 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_SetTimer
// Size: 0x0024
struct KismetSystemLibrary_K2_SetTimer_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
    float Time; // 0x0018 (0x0004)
    bool bLooping; // 0x001C (0x0001)
    uint8_t Pad_0[0x3]; // 0x001D (0x0003)
    uint8_t ReturnValue[0x4]; // 0x0020 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_PauseTimerHandle
// Size: 0x000C
struct KismetSystemLibrary_K2_PauseTimerHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_PauseTimerDelegate
// Size: 0x0010
struct KismetSystemLibrary_K2_PauseTimerDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.K2_PauseTimer
// Size: 0x0018
struct KismetSystemLibrary_K2_PauseTimer_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.K2_IsValidTimerHandle
// Size: 0x0005
struct KismetSystemLibrary_K2_IsValidTimerHandle_Params {
public:
    uint8_t Handle[0x4]; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_IsTimerPausedHandle
// Size: 0x000D
struct KismetSystemLibrary_K2_IsTimerPausedHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate
// Size: 0x0011
struct KismetSystemLibrary_K2_IsTimerPausedDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_IsTimerPaused
// Size: 0x0019
struct KismetSystemLibrary_K2_IsTimerPaused_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_IsTimerActiveHandle
// Size: 0x000D
struct KismetSystemLibrary_K2_IsTimerActiveHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    bool ReturnValue; // 0x000C (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate
// Size: 0x0011
struct KismetSystemLibrary_K2_IsTimerActiveDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_IsTimerActive
// Size: 0x0019
struct KismetSystemLibrary_K2_IsTimerActive_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetSystemLibrary.K2_InvalidateTimerHandle
// Size: 0x0008
struct KismetSystemLibrary_K2_InvalidateTimerHandle_Params {
public:
    uint8_t Handle[0x4]; // 0x0000 (0x0004)
    uint8_t ReturnValue[0x4]; // 0x0004 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle
// Size: 0x0010
struct KismetSystemLibrary_K2_GetTimerRemainingTimeHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate
// Size: 0x0014
struct KismetSystemLibrary_K2_GetTimerRemainingTimeDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_GetTimerRemainingTime
// Size: 0x001C
struct KismetSystemLibrary_K2_GetTimerRemainingTime_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle
// Size: 0x0010
struct KismetSystemLibrary_K2_GetTimerElapsedTimeHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
    float ReturnValue; // 0x000C (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate
// Size: 0x0014
struct KismetSystemLibrary_K2_GetTimerElapsedTimeDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
    float ReturnValue; // 0x0010 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_GetTimerElapsedTime
// Size: 0x001C
struct KismetSystemLibrary_K2_GetTimerElapsedTime_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
    float ReturnValue; // 0x0018 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_ClearTimerHandle
// Size: 0x000C
struct KismetSystemLibrary_K2_ClearTimerHandle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Handle[0x4]; // 0x0008 (0x0004)
};

// Function: Engine.KismetSystemLibrary.K2_ClearTimerDelegate
// Size: 0x0010
struct KismetSystemLibrary_K2_ClearTimerDelegate_Params {
public:
    uint8_t Delegate[0x10]; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.K2_ClearTimer
// Size: 0x0018
struct KismetSystemLibrary_K2_ClearTimer_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString FunctionName; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.IsValidReferencedLocation
// Size: 0x0011
struct KismetSystemLibrary_IsValidReferencedLocation_Params {
public:
    uint8_t LocationReference[0x10]; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsValidClass
// Size: 0x0009
struct KismetSystemLibrary_IsValidClass_Params {
public:
    class UClass* Class; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsValid
// Size: 0x0009
struct KismetSystemLibrary_IsValid_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsServer
// Size: 0x0009
struct KismetSystemLibrary_IsServer_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsPackagedForDistribution
// Size: 0x0001
struct KismetSystemLibrary_IsPackagedForDistribution_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsLoggedIn
// Size: 0x0009
struct KismetSystemLibrary_IsLoggedIn_Params {
public:
    class UObject* SpecificPlayer; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsDedicatedServer
// Size: 0x0009
struct KismetSystemLibrary_IsDedicatedServer_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: Engine.KismetSystemLibrary.IsControllerAssignedToGamepad
// Size: 0x0005
struct KismetSystemLibrary_IsControllerAssignedToGamepad_Params {
public:
    int32_t ControllerId; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: Engine.KismetSystemLibrary.HideAdBanner
// Size: 0x0000
struct KismetSystemLibrary_HideAdBanner_Params {
public:
};

// Function: Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem
// Size: 0x0001
struct KismetSystemLibrary_GetVolumeButtonsHandledBySystem_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.KismetSystemLibrary.GetUniqueDeviceId
// Size: 0x0010
struct KismetSystemLibrary_GetUniqueDeviceId_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions
// Size: 0x0011
struct KismetSystemLibrary_GetSupportedFullscreenResolutions_Params {
public:
    struct TArray<uint8_t> Resolutions; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel
// Size: 0x0004
struct KismetSystemLibrary_GetRenderingMaterialQualityLevel_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.KismetSystemLibrary.GetRenderingDetailMode
// Size: 0x0004
struct KismetSystemLibrary_GetRenderingDetailMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.KismetSystemLibrary.GetReferencedTransform
// Size: 0x0040
struct KismetSystemLibrary_GetReferencedTransform_Params {
public:
    uint8_t LocationReference[0x10]; // 0x0000 (0x0010)
    uint8_t ReturnValue[0x30]; // 0x0010 (0x0030)
};

// Function: Engine.KismetSystemLibrary.GetReferencedRotation
// Size: 0x001C
struct KismetSystemLibrary_GetReferencedRotation_Params {
public:
    uint8_t LocationReference[0x10]; // 0x0000 (0x0010)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetSystemLibrary.GetReferencedLocation
// Size: 0x001C
struct KismetSystemLibrary_GetReferencedLocation_Params {
public:
    uint8_t LocationReference[0x10]; // 0x0000 (0x0010)
    uint8_t ReturnValue[0xC]; // 0x0010 (0x000C)
};

// Function: Engine.KismetSystemLibrary.GetPreferredLanguages
// Size: 0x0010
struct KismetSystemLibrary_GetPreferredLanguages_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetPlatformUserName
// Size: 0x0010
struct KismetSystemLibrary_GetPlatformUserName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetPathName
// Size: 0x0018
struct KismetSystemLibrary_GetPathName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetObjectName
// Size: 0x0018
struct KismetSystemLibrary_GetObjectName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetLocalCurrencySymbol
// Size: 0x0010
struct KismetSystemLibrary_GetLocalCurrencySymbol_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetLocalCurrencyCode
// Size: 0x0010
struct KismetSystemLibrary_GetLocalCurrencyCode_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetGameTimeInSeconds
// Size: 0x000C
struct KismetSystemLibrary_GetGameTimeInSeconds_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.KismetSystemLibrary.GetGameName
// Size: 0x0010
struct KismetSystemLibrary_GetGameName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetEngineVersion
// Size: 0x0010
struct KismetSystemLibrary_GetEngineVersion_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetDisplayName
// Size: 0x0018
struct KismetSystemLibrary_GetDisplayName_Params {
public:
    class UObject* Object; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetComponentBounds
// Size: 0x0024
struct KismetSystemLibrary_GetComponentBounds_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x0014 (0x000C)
    float SphereRadius; // 0x0020 (0x0004)
};

// Function: Engine.KismetSystemLibrary.GetClassDisplayName
// Size: 0x0018
struct KismetSystemLibrary_GetClassDisplayName_Params {
public:
    class UClass* Class; // 0x0000 (0x0008)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetAdIDCount
// Size: 0x0004
struct KismetSystemLibrary_GetAdIDCount_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.KismetSystemLibrary.GetActorListFromComponentList
// Size: 0x0028
struct KismetSystemLibrary_GetActorListFromComponentList_Params {
public:
    struct TArray<uint8_t> ComponentList; // 0x0000 (0x0010)
    class UClass* ActorClassFilter; // 0x0010 (0x0008)
    struct TArray<uint8_t> OutActorList; // 0x0018 (0x0010)
};

// Function: Engine.KismetSystemLibrary.GetActorBounds
// Size: 0x0020
struct KismetSystemLibrary_GetActorBounds_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.KismetSystemLibrary.ForceCloseAdBanner
// Size: 0x0000
struct KismetSystemLibrary_ForceCloseAdBanner_Params {
public:
};

// Function: Engine.KismetSystemLibrary.FlushPersistentDebugLines
// Size: 0x0008
struct KismetSystemLibrary_FlushPersistentDebugLines_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: Engine.KismetSystemLibrary.FlushDebugStrings
// Size: 0x0008
struct KismetSystemLibrary_FlushDebugStrings_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: Engine.KismetSystemLibrary.ExecuteEditorConsoleCommand
// Size: 0x0018
struct KismetSystemLibrary_ExecuteEditorConsoleCommand_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FString Command; // 0x0008 (0x0010)
};

// Function: Engine.KismetSystemLibrary.ExecuteConsoleCommand
// Size: 0x0020
struct KismetSystemLibrary_ExecuteConsoleCommand_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FString Command; // 0x0008 (0x0010)
    class UObject* SpecificPlayer; // 0x0018 (0x0008)
};

// Function: Engine.KismetSystemLibrary.DrawDebugString
// Size: 0x0044
struct KismetSystemLibrary_DrawDebugString_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t TextLocation[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString Text; // 0x0018 (0x0010)
    class UObject* TestBaseActor; // 0x0028 (0x0008)
    uint8_t TextColor[0x10]; // 0x0030 (0x0010)
    float Duration; // 0x0040 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugSphere
// Size: 0x0030
struct KismetSystemLibrary_DrawDebugSphere_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Center[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    int32_t Segments; // 0x0018 (0x0004)
    uint8_t LineColor[0x10]; // 0x001C (0x0010)
    float Duration; // 0x002C (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugPoint
// Size: 0x002C
struct KismetSystemLibrary_DrawDebugPoint_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Position[0xC]; // 0x0008 (0x000C)
    float Size; // 0x0014 (0x0004)
    uint8_t PointColor[0x10]; // 0x0018 (0x0010)
    float Duration; // 0x0028 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugPlane
// Size: 0x0044
struct KismetSystemLibrary_DrawDebugPlane_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t PlaneCoordinates[0x10]; // 0x0010 (0x0010)
    uint8_t Location[0xC]; // 0x0020 (0x000C)
    float Size; // 0x002C (0x0004)
    uint8_t PlaneColor[0x10]; // 0x0030 (0x0010)
    float Duration; // 0x0040 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugLine
// Size: 0x0038
struct KismetSystemLibrary_DrawDebugLine_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t LineStart[0xC]; // 0x0008 (0x000C)
    uint8_t LineEnd[0xC]; // 0x0014 (0x000C)
    uint8_t LineColor[0x10]; // 0x0020 (0x0010)
    float Duration; // 0x0030 (0x0004)
    float Thickness; // 0x0034 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugFrustum
// Size: 0x0054
struct KismetSystemLibrary_DrawDebugFrustum_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t FrustumTransform[0x30]; // 0x0010 (0x0030)
    uint8_t FrustumColor[0x10]; // 0x0040 (0x0010)
    float Duration; // 0x0050 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform
// Size: 0x007C
struct KismetSystemLibrary_DrawDebugFloatHistoryTransform_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t FloatHistory[0x20]; // 0x0008 (0x0020)
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t DrawTransform[0x30]; // 0x0030 (0x0030)
    uint8_t DrawSize[0x8]; // 0x0060 (0x0008)
    uint8_t DrawColor[0x10]; // 0x0068 (0x0010)
    float Duration; // 0x0078 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation
// Size: 0x0050
struct KismetSystemLibrary_DrawDebugFloatHistoryLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t FloatHistory[0x20]; // 0x0008 (0x0020)
    uint8_t DrawLocation[0xC]; // 0x0028 (0x000C)
    uint8_t DrawSize[0x8]; // 0x0034 (0x0008)
    uint8_t DrawColor[0x10]; // 0x003C (0x0010)
    float Duration; // 0x004C (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugCylinder
// Size: 0x003C
struct KismetSystemLibrary_DrawDebugCylinder_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    int32_t Segments; // 0x0024 (0x0004)
    uint8_t LineColor[0x10]; // 0x0028 (0x0010)
    float Duration; // 0x0038 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugCoordinateSystem
// Size: 0x0028
struct KismetSystemLibrary_DrawDebugCoordinateSystem_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t AxisLoc[0xC]; // 0x0008 (0x000C)
    uint8_t AxisRot[0xC]; // 0x0014 (0x000C)
    float Scale; // 0x0020 (0x0004)
    float Duration; // 0x0024 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugConeInDegrees
// Size: 0x0044
struct KismetSystemLibrary_DrawDebugConeInDegrees_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    uint8_t Direction[0xC]; // 0x0014 (0x000C)
    float Length; // 0x0020 (0x0004)
    float AngleWidth; // 0x0024 (0x0004)
    float AngleHeight; // 0x0028 (0x0004)
    int32_t NumSides; // 0x002C (0x0004)
    uint8_t LineColor[0x10]; // 0x0030 (0x0010)
    float Duration; // 0x0040 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugCone
// Size: 0x0040
struct KismetSystemLibrary_DrawDebugCone_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Origin[0xC]; // 0x0008 (0x000C)
    uint8_t Direction[0xC]; // 0x0014 (0x000C)
    float Length; // 0x0020 (0x0004)
    float AngleWidth; // 0x0024 (0x0004)
    float AngleHeight; // 0x0028 (0x0004)
    int32_t NumSides; // 0x002C (0x0004)
    uint8_t LineColor[0x10]; // 0x0030 (0x0010)
};

// Function: Engine.KismetSystemLibrary.DrawDebugCircle
// Size: 0x004D
struct KismetSystemLibrary_DrawDebugCircle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Center[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    int32_t NumSegments; // 0x0018 (0x0004)
    uint8_t LineColor[0x10]; // 0x001C (0x0010)
    float Duration; // 0x002C (0x0004)
    float Thickness; // 0x0030 (0x0004)
    uint8_t YAxis[0xC]; // 0x0034 (0x000C)
    uint8_t ZAxis[0xC]; // 0x0040 (0x000C)
    bool bDrawAxis; // 0x004C (0x0001)
};

// Function: Engine.KismetSystemLibrary.DrawDebugCapsule
// Size: 0x003C
struct KismetSystemLibrary_DrawDebugCapsule_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Center[0xC]; // 0x0008 (0x000C)
    float HalfHeight; // 0x0014 (0x0004)
    float Radius; // 0x0018 (0x0004)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    uint8_t LineColor[0x10]; // 0x0028 (0x0010)
    float Duration; // 0x0038 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugCamera
// Size: 0x001C
struct KismetSystemLibrary_DrawDebugCamera_Params {
public:
    class UObject* CameraActor; // 0x0000 (0x0008)
    uint8_t CameraColor[0x10]; // 0x0008 (0x0010)
    float Duration; // 0x0018 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugBox
// Size: 0x0040
struct KismetSystemLibrary_DrawDebugBox_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Center[0xC]; // 0x0008 (0x000C)
    uint8_t Extent[0xC]; // 0x0014 (0x000C)
    uint8_t LineColor[0x10]; // 0x0020 (0x0010)
    uint8_t Rotation[0xC]; // 0x0030 (0x000C)
    float Duration; // 0x003C (0x0004)
};

// Function: Engine.KismetSystemLibrary.DrawDebugArrow
// Size: 0x0038
struct KismetSystemLibrary_DrawDebugArrow_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t LineStart[0xC]; // 0x0008 (0x000C)
    uint8_t LineEnd[0xC]; // 0x0014 (0x000C)
    float ArrowSize; // 0x0020 (0x0004)
    uint8_t LineColor[0x10]; // 0x0024 (0x0010)
    float Duration; // 0x0034 (0x0004)
};

// Function: Engine.KismetSystemLibrary.DoesImplementInterface
// Size: 0x0011
struct KismetSystemLibrary_DoesImplementInterface_Params {
public:
    class UObject* TestObject; // 0x0000 (0x0008)
    class UClass* Interface; // 0x0008 (0x0008)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.Delay
// Size: 0x0028
struct KismetSystemLibrary_Delay_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float Duration; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t LatentInfo[0x18]; // 0x0010 (0x0018)
};

// Function: Engine.KismetSystemLibrary.CreateCopyForUndoBuffer
// Size: 0x0008
struct KismetSystemLibrary_CreateCopyForUndoBuffer_Params {
public:
    class UObject* ObjectToModify; // 0x0000 (0x0008)
};

// Function: Engine.KismetSystemLibrary.Conv_InterfaceToObject
// Size: 0x0018
struct KismetSystemLibrary_Conv_InterfaceToObject_Params {
public:
    uint8_t Interface[0x10]; // 0x0000 (0x0010)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.KismetSystemLibrary.Conv_AssetToObject
// Size: 0x0028
struct KismetSystemLibrary_Conv_AssetToObject_Params {
public:
    uint8_t Asset[0x20]; // 0x0000 (0x0020)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: Engine.KismetSystemLibrary.Conv_AssetClassToClass
// Size: 0x0028
struct KismetSystemLibrary_Conv_AssetClassToClass_Params {
public:
    uint8_t AssetClass[0x20]; // 0x0000 (0x0020)
    class UClass* ReturnValue; // 0x0020 (0x0008)
};

// Function: Engine.KismetSystemLibrary.ControlScreensaver
// Size: 0x0001
struct KismetSystemLibrary_ControlScreensaver_Params {
public:
    bool bAllowScreenSaver; // 0x0000 (0x0001)
};

// Function: Engine.KismetSystemLibrary.ComponentOverlapComponents_NEW
// Size: 0x0079
struct KismetSystemLibrary_ComponentOverlapComponents_NEW_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t ComponentTransform[0x30]; // 0x0010 (0x0030)
    struct TArray<uint8_t> ObjectTypes; // 0x0040 (0x0010)
    class UClass* ComponentClassFilter; // 0x0050 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0058 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0068 (0x0010)
    bool ReturnValue; // 0x0078 (0x0001)
};

// Function: Engine.KismetSystemLibrary.ComponentOverlapComponents_DEPRECATED
// Size: 0x0071
struct KismetSystemLibrary_ComponentOverlapComponents_DEPRECATED_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t ComponentTransform[0x30]; // 0x0010 (0x0030)
    uint8_t Filter; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    class UClass* ComponentClassFilter; // 0x0048 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0050 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0060 (0x0010)
    bool ReturnValue; // 0x0070 (0x0001)
};

// Function: Engine.KismetSystemLibrary.ComponentOverlapActors_NEW
// Size: 0x0079
struct KismetSystemLibrary_ComponentOverlapActors_NEW_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t ComponentTransform[0x30]; // 0x0010 (0x0030)
    struct TArray<uint8_t> ObjectTypes; // 0x0040 (0x0010)
    class UClass* ActorClassFilter; // 0x0050 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0058 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0068 (0x0010)
    bool ReturnValue; // 0x0078 (0x0001)
};

// Function: Engine.KismetSystemLibrary.ComponentOverlapActors_DEPRECATED
// Size: 0x0071
struct KismetSystemLibrary_ComponentOverlapActors_DEPRECATED_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t ComponentTransform[0x30]; // 0x0010 (0x0030)
    uint8_t Filter; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    class UClass* ActorClassFilter; // 0x0048 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0050 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0060 (0x0010)
    bool ReturnValue; // 0x0070 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CollectGarbage
// Size: 0x0000
struct KismetSystemLibrary_CollectGarbage_Params {
public:
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects
// Size: 0x00E2
struct KismetSystemLibrary_CapsuleTraceSingleForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    uint8_t OutHit[0x88]; // 0x0058 (0x0088)
    bool bIgnoreSelf; // 0x00E0 (0x0001)
    bool ReturnValue; // 0x00E1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingleByObject_DEPRECATED
// Size: 0x00E2
struct KismetSystemLibrary_CapsuleTraceSingleByObject_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectsToTrace; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    uint8_t OutHit[0x88]; // 0x0058 (0x0088)
    bool bIgnoreSelf; // 0x00E0 (0x0001)
    bool ReturnValue; // 0x00E1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingle_NEW
// Size: 0x00D2
struct KismetSystemLibrary_CapsuleTraceSingle_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    uint8_t TraceChannel; // 0x0028 (0x0001)
    bool bTraceComplex; // 0x0029 (0x0001)
    uint8_t Pad_0[0x6]; // 0x002A (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    uint8_t DrawDebugType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    uint8_t OutHit[0x88]; // 0x0048 (0x0088)
    bool bIgnoreSelf; // 0x00D0 (0x0001)
    bool ReturnValue; // 0x00D1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingle_DEPRECATED
// Size: 0x00D2
struct KismetSystemLibrary_CapsuleTraceSingle_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    uint8_t TraceChannel; // 0x0028 (0x0001)
    bool bTraceComplex; // 0x0029 (0x0001)
    uint8_t Pad_0[0x6]; // 0x002A (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    uint8_t DrawDebugType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    uint8_t OutHit[0x88]; // 0x0048 (0x0088)
    bool bIgnoreSelf; // 0x00D0 (0x0001)
    bool ReturnValue; // 0x00D1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects
// Size: 0x006A
struct KismetSystemLibrary_CapsuleTraceMultiForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0058 (0x0010)
    bool bIgnoreSelf; // 0x0068 (0x0001)
    bool ReturnValue; // 0x0069 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceMultiByObject_DEPRECATED
// Size: 0x006A
struct KismetSystemLibrary_CapsuleTraceMultiByObject_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    struct TArray<uint8_t> ObjectsToTrace; // 0x0028 (0x0010)
    bool bTraceComplex; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0058 (0x0010)
    bool bIgnoreSelf; // 0x0068 (0x0001)
    bool ReturnValue; // 0x0069 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceMulti_NEW
// Size: 0x005A
struct KismetSystemLibrary_CapsuleTraceMulti_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    uint8_t TraceChannel; // 0x0028 (0x0001)
    bool bTraceComplex; // 0x0029 (0x0001)
    uint8_t Pad_0[0x6]; // 0x002A (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    uint8_t DrawDebugType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0048 (0x0010)
    bool bIgnoreSelf; // 0x0058 (0x0001)
    bool ReturnValue; // 0x0059 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleTraceMulti_DEPRECATED
// Size: 0x005A
struct KismetSystemLibrary_CapsuleTraceMulti_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    float Radius; // 0x0020 (0x0004)
    float HalfHeight; // 0x0024 (0x0004)
    uint8_t TraceChannel; // 0x0028 (0x0001)
    bool bTraceComplex; // 0x0029 (0x0001)
    uint8_t Pad_0[0x6]; // 0x002A (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    uint8_t DrawDebugType; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0048 (0x0010)
    bool bIgnoreSelf; // 0x0058 (0x0001)
    bool ReturnValue; // 0x0059 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleOverlapComponents_NEW
// Size: 0x0059
struct KismetSystemLibrary_CapsuleOverlapComponents_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t CapsulePos[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    float HalfHeight; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0020 (0x0010)
    class UClass* ComponentClassFilter; // 0x0030 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0048 (0x0010)
    bool ReturnValue; // 0x0058 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleOverlapComponents_DEPRECATED
// Size: 0x0049
struct KismetSystemLibrary_CapsuleOverlapComponents_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t CapsulePos[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    float HalfHeight; // 0x0018 (0x0004)
    uint8_t Filter; // 0x001C (0x0001)
    uint8_t Pad_0[0x3]; // 0x001D (0x0003)
    class UClass* ComponentClassFilter; // 0x0020 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0038 (0x0010)
    bool ReturnValue; // 0x0048 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleOverlapActors_NEW
// Size: 0x0059
struct KismetSystemLibrary_CapsuleOverlapActors_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t CapsulePos[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    float HalfHeight; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> ObjectTypes; // 0x0020 (0x0010)
    class UClass* ActorClassFilter; // 0x0030 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0048 (0x0010)
    bool ReturnValue; // 0x0058 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CapsuleOverlapActors_DEPRECATED
// Size: 0x0049
struct KismetSystemLibrary_CapsuleOverlapActors_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t CapsulePos[0xC]; // 0x0008 (0x000C)
    float Radius; // 0x0014 (0x0004)
    float HalfHeight; // 0x0018 (0x0004)
    uint8_t Filter; // 0x001C (0x0001)
    uint8_t Pad_0[0x3]; // 0x001D (0x0003)
    class UClass* ActorClassFilter; // 0x0020 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0028 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0038 (0x0010)
    bool ReturnValue; // 0x0048 (0x0001)
};

// Function: Engine.KismetSystemLibrary.CanLaunchURL
// Size: 0x0011
struct KismetSystemLibrary_CanLaunchURL_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxTraceSingleForObjects
// Size: 0x00F2
struct KismetSystemLibrary_BoxTraceSingleForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t HalfSize[0xC]; // 0x0020 (0x000C)
    uint8_t Orientation[0xC]; // 0x002C (0x000C)
    struct TArray<uint8_t> ObjectTypes; // 0x0038 (0x0010)
    bool bTraceComplex; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0050 (0x0010)
    uint8_t DrawDebugType; // 0x0060 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0061 (0x0007)
    uint8_t OutHit[0x88]; // 0x0068 (0x0088)
    bool bIgnoreSelf; // 0x00F0 (0x0001)
    bool ReturnValue; // 0x00F1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxTraceSingle
// Size: 0x00E2
struct KismetSystemLibrary_BoxTraceSingle_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t HalfSize[0xC]; // 0x0020 (0x000C)
    uint8_t Orientation[0xC]; // 0x002C (0x000C)
    uint8_t TraceChannel; // 0x0038 (0x0001)
    bool bTraceComplex; // 0x0039 (0x0001)
    uint8_t Pad_0[0x6]; // 0x003A (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    uint8_t OutHit[0x88]; // 0x0058 (0x0088)
    bool bIgnoreSelf; // 0x00E0 (0x0001)
    bool ReturnValue; // 0x00E1 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxTraceMultiForObjects
// Size: 0x007A
struct KismetSystemLibrary_BoxTraceMultiForObjects_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t HalfSize[0xC]; // 0x0020 (0x000C)
    uint8_t Orientation[0xC]; // 0x002C (0x000C)
    struct TArray<uint8_t> ObjectTypes; // 0x0038 (0x0010)
    bool bTraceComplex; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0050 (0x0010)
    uint8_t DrawDebugType; // 0x0060 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0061 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0068 (0x0010)
    bool bIgnoreSelf; // 0x0078 (0x0001)
    bool ReturnValue; // 0x0079 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxTraceMulti
// Size: 0x006A
struct KismetSystemLibrary_BoxTraceMulti_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Start[0xC]; // 0x0008 (0x000C)
    uint8_t End[0xC]; // 0x0014 (0x000C)
    uint8_t HalfSize[0xC]; // 0x0020 (0x000C)
    uint8_t Orientation[0xC]; // 0x002C (0x000C)
    uint8_t TraceChannel; // 0x0038 (0x0001)
    bool bTraceComplex; // 0x0039 (0x0001)
    uint8_t Pad_0[0x6]; // 0x003A (0x0006)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0040 (0x0010)
    uint8_t DrawDebugType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> OutHits; // 0x0058 (0x0010)
    bool bIgnoreSelf; // 0x0068 (0x0001)
    bool ReturnValue; // 0x0069 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxOverlapComponents_NEW
// Size: 0x0059
struct KismetSystemLibrary_BoxOverlapComponents_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t BoxPos[0xC]; // 0x0008 (0x000C)
    uint8_t Extent[0xC]; // 0x0014 (0x000C)
    struct TArray<uint8_t> ObjectTypes; // 0x0020 (0x0010)
    class UClass* ComponentClassFilter; // 0x0030 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0048 (0x0010)
    bool ReturnValue; // 0x0058 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxOverlapComponents_DEPRECATED
// Size: 0x0051
struct KismetSystemLibrary_BoxOverlapComponents_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t BoxPos[0xC]; // 0x0008 (0x000C)
    uint8_t Extent[0xC]; // 0x0014 (0x000C)
    uint8_t Filter; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    class UClass* ComponentClassFilter; // 0x0028 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    struct TArray<uint8_t> OutComponents; // 0x0040 (0x0010)
    bool ReturnValue; // 0x0050 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxOverlapActors_NEW
// Size: 0x0059
struct KismetSystemLibrary_BoxOverlapActors_NEW_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t BoxPos[0xC]; // 0x0008 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x0014 (0x000C)
    struct TArray<uint8_t> ObjectTypes; // 0x0020 (0x0010)
    class UClass* ActorClassFilter; // 0x0030 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0038 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0048 (0x0010)
    bool ReturnValue; // 0x0058 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BoxOverlapActors_DEPRECATED
// Size: 0x0051
struct KismetSystemLibrary_BoxOverlapActors_DEPRECATED_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t BoxPos[0xC]; // 0x0008 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x0014 (0x000C)
    uint8_t Filter; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    class UClass* ActorClassFilter; // 0x0028 (0x0008)
    struct TArray<uint8_t> ActorsToIgnore; // 0x0030 (0x0010)
    struct TArray<uint8_t> OutActors; // 0x0040 (0x0010)
    bool ReturnValue; // 0x0050 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BendSaveStringToFile
// Size: 0x0031
struct KismetSystemLibrary_BendSaveStringToFile_Params {
public:
    struct FString FilePath; // 0x0000 (0x0010)
    struct FString FileName; // 0x0010 (0x0010)
    struct FString InString; // 0x0020 (0x0010)
    bool Append; // 0x0030 (0x0001)
};

// Function: Engine.KismetSystemLibrary.BendLoadFileToString
// Size: 0x0030
struct KismetSystemLibrary_BendLoadFileToString_Params {
public:
    struct FString FilePath; // 0x0000 (0x0010)
    struct FString FileName; // 0x0010 (0x0010)
    struct FString ReturnValue; // 0x0020 (0x0010)
};

// Function: Engine.KismetSystemLibrary.AddFloatHistorySample
// Size: 0x0048
struct KismetSystemLibrary_AddFloatHistorySample_Params {
public:
    float Value; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t FloatHistory[0x20]; // 0x0008 (0x0020)
    uint8_t ReturnValue[0x20]; // 0x0028 (0x0020)
};

// Function: Engine.KismetTextLibrary.TextTrimTrailing
// Size: 0x0030
struct KismetTextLibrary_TextTrimTrailing_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing
// Size: 0x0030
struct KismetTextLibrary_TextTrimPrecedingAndTrailing_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.TextTrimPreceding
// Size: 0x0030
struct KismetTextLibrary_TextTrimPreceding_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.TextToUpper
// Size: 0x0030
struct KismetTextLibrary_TextToUpper_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.TextToLower
// Size: 0x0030
struct KismetTextLibrary_TextToLower_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.TextIsTransient
// Size: 0x0019
struct KismetTextLibrary_TextIsTransient_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetTextLibrary.TextIsEmpty
// Size: 0x0019
struct KismetTextLibrary_TextIsEmpty_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetTextLibrary.TextIsCultureInvariant
// Size: 0x0019
struct KismetTextLibrary_TextIsCultureInvariant_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: Engine.KismetTextLibrary.TextGetSourceString
// Size: 0x0028
struct KismetTextLibrary_TextGetSourceString_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetTextLibrary.NotEqual_TextText
// Size: 0x0031
struct KismetTextLibrary_NotEqual_TextText_Params {
public:
    struct FText A; // 0x0000 (0x0018)
    struct FText B; // 0x0018 (0x0018)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText
// Size: 0x0031
struct KismetTextLibrary_NotEqual_IgnoreCase_TextText_Params {
public:
    struct FText A; // 0x0000 (0x0018)
    struct FText B; // 0x0018 (0x0018)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: Engine.KismetTextLibrary.GetEmptyText
// Size: 0x0018
struct KismetTextLibrary_GetEmptyText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: Engine.KismetTextLibrary.Format
// Size: 0x0040
struct KismetTextLibrary_Format_Params {
public:
    struct FText InPattern; // 0x0000 (0x0018)
    struct TArray<uint8_t> InArgs; // 0x0018 (0x0010)
    struct FText ReturnValue; // 0x0028 (0x0018)
};

// Function: Engine.KismetTextLibrary.FindTextInLocalizationTable
// Size: 0x0039
struct KismetTextLibrary_FindTextInLocalizationTable_Params {
public:
    struct FString Namespace; // 0x0000 (0x0010)
    struct FString Key; // 0x0010 (0x0010)
    struct FText OutText; // 0x0020 (0x0018)
    bool ReturnValue; // 0x0038 (0x0001)
};

// Function: Engine.KismetTextLibrary.EqualEqual_TextText
// Size: 0x0031
struct KismetTextLibrary_EqualEqual_TextText_Params {
public:
    struct FText A; // 0x0000 (0x0018)
    struct FText B; // 0x0018 (0x0018)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText
// Size: 0x0031
struct KismetTextLibrary_EqualEqual_IgnoreCase_TextText_Params {
public:
    struct FText A; // 0x0000 (0x0018)
    struct FText B; // 0x0018 (0x0018)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: Engine.KismetTextLibrary.CreateTextInLocalizationTable
// Size: 0x0048
struct KismetTextLibrary_CreateTextInLocalizationTable_Params {
public:
    struct FString SourceString; // 0x0000 (0x0010)
    struct FString Namespace; // 0x0010 (0x0010)
    struct FString Key; // 0x0020 (0x0010)
    struct FText ReturnValue; // 0x0030 (0x0018)
};

// Function: Engine.KismetTextLibrary.Conv_TextToString
// Size: 0x0028
struct KismetTextLibrary_Conv_TextToString_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
    struct FString ReturnValue; // 0x0018 (0x0010)
};

// Function: Engine.KismetTextLibrary.Conv_StringToText
// Size: 0x0028
struct KismetTextLibrary_Conv_StringToText_Params {
public:
    struct FString InString; // 0x0000 (0x0010)
    struct FText ReturnValue; // 0x0010 (0x0018)
};

// Function: Engine.KismetTextLibrary.Conv_NameToText
// Size: 0x0020
struct KismetTextLibrary_Conv_NameToText_Params {
public:
    struct FName InName; // 0x0000 (0x0008)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.Conv_IntToText
// Size: 0x0028
struct KismetTextLibrary_Conv_IntToText_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
    bool bUseGrouping; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    int32_t MinimumIntegralDigits; // 0x0008 (0x0004)
    int32_t MaximumIntegralDigits; // 0x000C (0x0004)
    struct FText ReturnValue; // 0x0010 (0x0018)
};

// Function: Engine.KismetTextLibrary.Conv_FloatToText
// Size: 0x0030
struct KismetTextLibrary_Conv_FloatToText_Params {
public:
    float Value; // 0x0000 (0x0004)
    uint8_t RoundingMode; // 0x0004 (0x0001)
    bool bUseGrouping; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    int32_t MinimumIntegralDigits; // 0x0008 (0x0004)
    int32_t MaximumIntegralDigits; // 0x000C (0x0004)
    int32_t MinimumFractionalDigits; // 0x0010 (0x0004)
    int32_t MaximumFractionalDigits; // 0x0014 (0x0004)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.Conv_ByteToText
// Size: 0x0020
struct KismetTextLibrary_Conv_ByteToText_Params {
public:
    uint8_t Value; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.Conv_BoolToText
// Size: 0x0020
struct KismetTextLibrary_Conv_BoolToText_Params {
public:
    bool InBool; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsTimespan_Timespan
// Size: 0x0020
struct KismetTextLibrary_AsTimespan_Timespan_Params {
public:
    uint8_t InTimespan[0x8]; // 0x0000 (0x0008)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsTime_DateTime
// Size: 0x0020
struct KismetTextLibrary_AsTime_DateTime_Params {
public:
    uint8_t In[0x8]; // 0x0000 (0x0008)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsPercent_Float
// Size: 0x0030
struct KismetTextLibrary_AsPercent_Float_Params {
public:
    float Value; // 0x0000 (0x0004)
    uint8_t RoundingMode; // 0x0004 (0x0001)
    bool bUseGrouping; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    int32_t MinimumIntegralDigits; // 0x0008 (0x0004)
    int32_t MaximumIntegralDigits; // 0x000C (0x0004)
    int32_t MinimumFractionalDigits; // 0x0010 (0x0004)
    int32_t MaximumFractionalDigits; // 0x0014 (0x0004)
    struct FText ReturnValue; // 0x0018 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsDateTime_DateTime
// Size: 0x0020
struct KismetTextLibrary_AsDateTime_DateTime_Params {
public:
    uint8_t In[0x8]; // 0x0000 (0x0008)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsDate_DateTime
// Size: 0x0020
struct KismetTextLibrary_AsDate_DateTime_Params {
public:
    uint8_t InDateTime[0x8]; // 0x0000 (0x0008)
    struct FText ReturnValue; // 0x0008 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsCurrency_Integer
// Size: 0x0040
struct KismetTextLibrary_AsCurrency_Integer_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
    uint8_t RoundingMode; // 0x0004 (0x0001)
    bool bUseGrouping; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    int32_t MinimumIntegralDigits; // 0x0008 (0x0004)
    int32_t MaximumIntegralDigits; // 0x000C (0x0004)
    int32_t MinimumFractionalDigits; // 0x0010 (0x0004)
    int32_t MaximumFractionalDigits; // 0x0014 (0x0004)
    struct FString CurrencyCode; // 0x0018 (0x0010)
    struct FText ReturnValue; // 0x0028 (0x0018)
};

// Function: Engine.KismetTextLibrary.AsCurrency_Float
// Size: 0x0040
struct KismetTextLibrary_AsCurrency_Float_Params {
public:
    float Value; // 0x0000 (0x0004)
    uint8_t RoundingMode; // 0x0004 (0x0001)
    bool bUseGrouping; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    int32_t MinimumIntegralDigits; // 0x0008 (0x0004)
    int32_t MaximumIntegralDigits; // 0x000C (0x0004)
    int32_t MinimumFractionalDigits; // 0x0010 (0x0004)
    int32_t MaximumFractionalDigits; // 0x0014 (0x0004)
    struct FString CurrencyCode; // 0x0018 (0x0010)
    struct FText ReturnValue; // 0x0028 (0x0018)
};

// Function: Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices
// Size: 0x0008
struct MeshVertexPainterKismetLibrary_RemovePaintedVertices_Params {
public:
    class UObject* StaticMeshComponent; // 0x0000 (0x0008)
};

// Function: Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor
// Size: 0x0019
struct MeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Params {
public:
    class UObject* StaticMeshComponent; // 0x0000 (0x0008)
    uint8_t FillColor[0x10]; // 0x0008 (0x0010)
    bool bConvertToSRGB; // 0x0018 (0x0001)
};

// Function: Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis
// Size: 0x002A
struct MeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Params {
public:
    class UObject* StaticMeshComponent; // 0x0000 (0x0008)
    uint8_t StartColor[0x10]; // 0x0008 (0x0010)
    uint8_t EndColor[0x10]; // 0x0018 (0x0010)
    uint8_t Axis; // 0x0028 (0x0001)
    bool bConvertToSRGB; // 0x0029 (0x0001)
};

// Function: Engine.VisualLoggerKismetLibrary.LogTextBend
// Size: 0x0020
struct VisualLoggerKismetLibrary_LogTextBend_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FString Text; // 0x0008 (0x0010)
    struct FName LogCategory; // 0x0018 (0x0008)
};

// Function: Engine.VisualLoggerKismetLibrary.LogText
// Size: 0x0020
struct VisualLoggerKismetLibrary_LogText_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct FString Text; // 0x0008 (0x0010)
    struct FName LogCategory; // 0x0018 (0x0008)
};

// Function: Engine.VisualLoggerKismetLibrary.LogLocation
// Size: 0x0048
struct VisualLoggerKismetLibrary_LogLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Location[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString Text; // 0x0018 (0x0010)
    uint8_t ObjectColor[0x10]; // 0x0028 (0x0010)
    float Radius; // 0x0038 (0x0004)
    uint8_t Pad_1[0x4]; // 0x003C (0x0004)
    struct FName LogCategory; // 0x0040 (0x0008)
};

// Function: Engine.VisualLoggerKismetLibrary.LogBox
// Size: 0x0050
struct VisualLoggerKismetLibrary_LogBox_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t BoxShape[0x1C]; // 0x0008 (0x001C)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FString Text; // 0x0028 (0x0010)
    uint8_t ObjectColor[0x10]; // 0x0038 (0x0010)
    struct FName LogCategory; // 0x0048 (0x0008)
};

// Function: Engine.CameraAnimInst.Stop
// Size: 0x0001
struct CameraAnimInst_Stop_Params {
public:
    bool bImmediate; // 0x0000 (0x0001)
};

// Function: Engine.CameraAnimInst.SetScale
// Size: 0x0004
struct CameraAnimInst_SetScale_Params {
public:
    float newDuration; // 0x0000 (0x0004)
};

// Function: Engine.CameraAnimInst.SetDuration
// Size: 0x0004
struct CameraAnimInst_SetDuration_Params {
public:
    float newDuration; // 0x0000 (0x0004)
};

// Function: Engine.CameraModifier_CameraFocusActor.SetPostProcessSettingsDefault
// Size: 0x0960
struct CameraModifier_CameraFocusActor_SetPostProcessSettingsDefault_Params {
public:
    uint8_t PostProcessSettings[0x960]; // 0x0000 (0x0960)
};

// Function: Engine.CameraModifier_CameraFocusActor.SetFStop
// Size: 0x0004
struct CameraModifier_CameraFocusActor_SetFStop_Params {
public:
    float FStopIn; // 0x0000 (0x0004)
};

// Function: Engine.CameraModifier_CameraFocusActor.SetFOV
// Size: 0x0004
struct CameraModifier_CameraFocusActor_SetFOV_Params {
public:
    float FOVIn; // 0x0000 (0x0004)
};

// Function: Engine.CameraModifier_CameraFocusActor.RemoveFocusActor
// Size: 0x0008
struct CameraModifier_CameraFocusActor_RemoveFocusActor_Params {
public:
    class UObject* SkelMesh; // 0x0000 (0x0008)
};

// Function: Engine.CameraModifier_CameraFocusActor.ClearFocusActors
// Size: 0x0000
struct CameraModifier_CameraFocusActor_ClearFocusActors_Params {
public:
};

// Function: Engine.CameraModifier_CameraFocusActor.AddFocusActor
// Size: 0x0010
struct CameraModifier_CameraFocusActor_AddFocusActor_Params {
public:
    class UObject* SkelMesh; // 0x0000 (0x0008)
    struct FName BoneName; // 0x0008 (0x0008)
};

// Function: Engine.Canvas.K2_TextSize
// Size: 0x0028
struct Canvas_K2_TextSize_Params {
public:
    class UObject* RenderFont; // 0x0000 (0x0008)
    struct FString RenderText; // 0x0008 (0x0010)
    uint8_t Scale[0x8]; // 0x0018 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0020 (0x0008)
};

// Function: Engine.Canvas.K2_StrLen
// Size: 0x0020
struct Canvas_K2_StrLen_Params {
public:
    class UObject* RenderFont; // 0x0000 (0x0008)
    struct FString RenderText; // 0x0008 (0x0010)
    uint8_t ReturnValue[0x8]; // 0x0018 (0x0008)
};

// Function: Engine.Canvas.K2_Project
// Size: 0x0018
struct Canvas_K2_Project_Params {
public:
    uint8_t WorldLocation[0xC]; // 0x0000 (0x000C)
    uint8_t ReturnValue[0xC]; // 0x000C (0x000C)
};

// Function: Engine.Canvas.K2_DrawTriangle
// Size: 0x0018
struct Canvas_K2_DrawTriangle_Params {
public:
    class UObject* RenderTexture; // 0x0000 (0x0008)
    struct TArray<uint8_t> Triangles; // 0x0008 (0x0010)
};

// Function: Engine.Canvas.K2_DrawTexture
// Size: 0x0048
struct Canvas_K2_DrawTexture_Params {
public:
    class UObject* RenderTexture; // 0x0000 (0x0008)
    uint8_t ScreenPosition[0x8]; // 0x0008 (0x0008)
    uint8_t ScreenSize[0x8]; // 0x0010 (0x0008)
    uint8_t CoordinatePosition[0x8]; // 0x0018 (0x0008)
    uint8_t CoordinateSize[0x8]; // 0x0020 (0x0008)
    uint8_t RenderColor[0x10]; // 0x0028 (0x0010)
    uint8_t BlendMode; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    float Rotation; // 0x003C (0x0004)
    uint8_t PivotPoint[0x8]; // 0x0040 (0x0008)
};

// Function: Engine.Canvas.K2_DrawText
// Size: 0x0060
struct Canvas_K2_DrawText_Params {
public:
    class UObject* RenderFont; // 0x0000 (0x0008)
    struct FString RenderText; // 0x0008 (0x0010)
    uint8_t ScreenPosition[0x8]; // 0x0018 (0x0008)
    uint8_t RenderColor[0x10]; // 0x0020 (0x0010)
    float Kerning; // 0x0030 (0x0004)
    uint8_t ShadowColor[0x10]; // 0x0034 (0x0010)
    uint8_t ShadowOffset[0x8]; // 0x0044 (0x0008)
    bool bCentreX; // 0x004C (0x0001)
    bool bCentreY; // 0x004D (0x0001)
    bool bOutlined; // 0x004E (0x0001)
    uint8_t Pad_0[0x1]; // 0x004F (0x0001)
    uint8_t OutlineColor[0x10]; // 0x0050 (0x0010)
};

// Function: Engine.Canvas.K2_DrawPolygon
// Size: 0x002C
struct Canvas_K2_DrawPolygon_Params {
public:
    class UObject* RenderTexture; // 0x0000 (0x0008)
    uint8_t ScreenPosition[0x8]; // 0x0008 (0x0008)
    uint8_t Radius[0x8]; // 0x0010 (0x0008)
    int32_t NumberOfSides; // 0x0018 (0x0004)
    uint8_t RenderColor[0x10]; // 0x001C (0x0010)
};

// Function: Engine.Canvas.K2_DrawMaterialTriangle
// Size: 0x0018
struct Canvas_K2_DrawMaterialTriangle_Params {
public:
    class UObject* RenderMaterial; // 0x0000 (0x0008)
    struct TArray<uint8_t> Triangles; // 0x0008 (0x0010)
};

// Function: Engine.Canvas.K2_DrawMaterial
// Size: 0x0034
struct Canvas_K2_DrawMaterial_Params {
public:
    class UObject* RenderMaterial; // 0x0000 (0x0008)
    uint8_t ScreenPosition[0x8]; // 0x0008 (0x0008)
    uint8_t ScreenSize[0x8]; // 0x0010 (0x0008)
    uint8_t CoordinatePosition[0x8]; // 0x0018 (0x0008)
    uint8_t CoordinateSize[0x8]; // 0x0020 (0x0008)
    float Rotation; // 0x0028 (0x0004)
    uint8_t PivotPoint[0x8]; // 0x002C (0x0008)
};

// Function: Engine.Canvas.K2_DrawLine
// Size: 0x0024
struct Canvas_K2_DrawLine_Params {
public:
    uint8_t ScreenPositionA[0x8]; // 0x0000 (0x0008)
    uint8_t ScreenPositionB[0x8]; // 0x0008 (0x0008)
    float Thickness; // 0x0010 (0x0004)
    uint8_t RenderColor[0x10]; // 0x0014 (0x0010)
};

// Function: Engine.Canvas.K2_DrawBox
// Size: 0x0014
struct Canvas_K2_DrawBox_Params {
public:
    uint8_t ScreenPosition[0x8]; // 0x0000 (0x0008)
    uint8_t ScreenSize[0x8]; // 0x0008 (0x0008)
    float Thickness; // 0x0010 (0x0004)
};

// Function: Engine.Canvas.K2_DrawBorder
// Size: 0x0084
struct Canvas_K2_DrawBorder_Params {
public:
    class UObject* BorderTexture; // 0x0000 (0x0008)
    class UObject* BackgroundTexture; // 0x0008 (0x0008)
    class UObject* LeftBorderTexture; // 0x0010 (0x0008)
    class UObject* RightBorderTexture; // 0x0018 (0x0008)
    class UObject* TopBorderTexture; // 0x0020 (0x0008)
    class UObject* BottomBorderTexture; // 0x0028 (0x0008)
    uint8_t ScreenPosition[0x8]; // 0x0030 (0x0008)
    uint8_t ScreenSize[0x8]; // 0x0038 (0x0008)
    uint8_t CoordinatePosition[0x8]; // 0x0040 (0x0008)
    uint8_t CoordinateSize[0x8]; // 0x0048 (0x0008)
    uint8_t RenderColor[0x10]; // 0x0050 (0x0010)
    uint8_t BorderScale[0x8]; // 0x0060 (0x0008)
    uint8_t BackgroundScale[0x8]; // 0x0068 (0x0008)
    float Rotation; // 0x0070 (0x0004)
    uint8_t PivotPoint[0x8]; // 0x0074 (0x0008)
    uint8_t CornerSize[0x8]; // 0x007C (0x0008)
};

// Function: Engine.Canvas.K2_Deproject
// Size: 0x0020
struct Canvas_K2_Deproject_Params {
public:
    uint8_t ScreenPosition[0x8]; // 0x0000 (0x0008)
    uint8_t WorldOrigin[0xC]; // 0x0008 (0x000C)
    uint8_t WorldDirection[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.GameViewportClient.SSSwapControllers
// Size: 0x0000
struct GameViewportClient_SSSwapControllers_Params {
public:
};

// Function: Engine.GameViewportClient.ShowTitleSafeArea
// Size: 0x0000
struct GameViewportClient_ShowTitleSafeArea_Params {
public:
};

// Function: Engine.GameViewportClient.SetConsoleTarget
// Size: 0x0004
struct GameViewportClient_SetConsoleTarget_Params {
public:
    int32_t PlayerIndex; // 0x0000 (0x0004)
};

// Function: Engine.CurveLinearColor.GetLinearColorValue
// Size: 0x0014
struct CurveLinearColor_GetLinearColorValue_Params {
public:
    float InTime; // 0x0000 (0x0004)
    uint8_t ReturnValue[0x10]; // 0x0004 (0x0010)
};

// Function: Engine.CurveVector.GetVectorValue
// Size: 0x0010
struct CurveVector_GetVectorValue_Params {
public:
    float InTime; // 0x0000 (0x0004)
    uint8_t ReturnValue[0xC]; // 0x0004 (0x000C)
};

// Function: Engine.TireType.GetTopSpeed
// Size: 0x0004
struct TireType_GetTopSpeed_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.TireType.GetFrictionScale
// Size: 0x0004
struct TireType_GetFrictionScale_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PlayerInput.SetMouseSensitivity
// Size: 0x0004
struct PlayerInput_SetMouseSensitivity_Params {
public:
    float Sensitivity; // 0x0000 (0x0004)
};

// Function: Engine.PlayerInput.SetBind
// Size: 0x0018
struct PlayerInput_SetBind_Params {
public:
    struct FName BindName; // 0x0000 (0x0008)
    struct FString Command; // 0x0008 (0x0010)
};

// Function: Engine.PlayerInput.InvertAxisKey
// Size: 0x0018
struct PlayerInput_InvertAxisKey_Params {
public:
    uint8_t AxisKey[0x18]; // 0x0000 (0x0018)
};

// Function: Engine.PlayerInput.InvertAxis
// Size: 0x0008
struct PlayerInput_InvertAxis_Params {
public:
    struct FName AxisName; // 0x0000 (0x0008)
};

// Function: Engine.PlayerInput.ClearSmoothing
// Size: 0x0000
struct PlayerInput_ClearSmoothing_Params {
public:
};

// Function: Engine.GameUserSettings.ValidateSettings
// Size: 0x0000
struct GameUserSettings_ValidateSettings_Params {
public:
};

// Function: Engine.GameUserSettings.UpdateHCMMaterialParameters
// Size: 0x0000
struct GameUserSettings_UpdateHCMMaterialParameters_Params {
public:
};

// Function: Engine.GameUserSettings.SetXPIndicatorsEnabled
// Size: 0x0001
struct GameUserSettings_SetXPIndicatorsEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetWeaponSelectionPreviewMode
// Size: 0x0004
struct GameUserSettings_SetWeaponSelectionPreviewMode_Params {
public:
    int32_t InPreviewMode; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetVSyncEnabled
// Size: 0x0001
struct GameUserSettings_SetVSyncEnabled_Params {
public:
    bool bEnable; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetVisualPreset
// Size: 0x0004
struct GameUserSettings_SetVisualPreset_Params {
public:
    int32_t InVisualPreset; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetVisualEffectQuality
// Size: 0x0004
struct GameUserSettings_SetVisualEffectQuality_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetViewDistanceQuality
// Size: 0x0004
struct GameUserSettings_SetViewDistanceQuality_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetVibrationEnabled
// Size: 0x0001
struct GameUserSettings_SetVibrationEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetVehicleCameraTrackingEnabled
// Size: 0x0001
struct GameUserSettings_SetVehicleCameraTrackingEnabled_Params {
public:
    bool bEnableCameraTracking; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetUINarrationOn
// Size: 0x0001
struct GameUserSettings_SetUINarrationOn_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetTrackAssistEnabled
// Size: 0x0001
struct GameUserSettings_SetTrackAssistEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetToDefaults
// Size: 0x0000
struct GameUserSettings_SetToDefaults_Params {
public:
};

// Function: Engine.GameUserSettings.SetTextureStreamingQuality
// Size: 0x0004
struct GameUserSettings_SetTextureStreamingQuality_Params {
public:
    int32_t InTextureStreamingQuality; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetTextureQuality
// Size: 0x0004
struct GameUserSettings_SetTextureQuality_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetTextureFilterQuality
// Size: 0x0004
struct GameUserSettings_SetTextureFilterQuality_Params {
public:
    int32_t InTextureFilterQuality; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetTelemetryEnabled
// Size: 0x0001
struct GameUserSettings_SetTelemetryEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetSyncInterval
// Size: 0x0004
struct GameUserSettings_SetSyncInterval_Params {
public:
    int32_t InSyncInterval; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSwipeVerticalDeadzoneBuffer
// Size: 0x0004
struct GameUserSettings_SetSwipeVerticalDeadzoneBuffer_Params {
public:
    float InDeadzoneBuffer; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSwipeVerticalDeadzone
// Size: 0x0004
struct GameUserSettings_SetSwipeVerticalDeadzone_Params {
public:
    float InDeadzone; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSwipeLength
// Size: 0x0004
struct GameUserSettings_SetSwipeLength_Params {
public:
    int32_t InSwipeLength; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSwipeHorizontalDeadzoneBuffer
// Size: 0x0004
struct GameUserSettings_SetSwipeHorizontalDeadzoneBuffer_Params {
public:
    float InDeadzoneBuffer; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSwipeHorizontalDeadzone
// Size: 0x0004
struct GameUserSettings_SetSwipeHorizontalDeadzone_Params {
public:
    float InDeadzone; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSwipeControlsEnabled
// Size: 0x0001
struct GameUserSettings_SetSwipeControlsEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetSurvivalWheelSmartScrollDelay
// Size: 0x0004
struct GameUserSettings_SetSurvivalWheelSmartScrollDelay_Params {
public:
    float InSmartScrollDelay; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSurvivalWheelMouseMode
// Size: 0x0004
struct GameUserSettings_SetSurvivalWheelMouseMode_Params {
public:
    int32_t InMouseMode; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSurvivalWheelMinimumItemWidth
// Size: 0x0004
struct GameUserSettings_SetSurvivalWheelMinimumItemWidth_Params {
public:
    float InMinimumItemWidth; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSurvivalWheelMinimumExpansionWidth
// Size: 0x0004
struct GameUserSettings_SetSurvivalWheelMinimumExpansionWidth_Params {
public:
    float InMinimumExpansionWidth; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSurvivalWheelDebugRenderingEnabled
// Size: 0x0001
struct GameUserSettings_SetSurvivalWheelDebugRenderingEnabled_Params {
public:
    bool InToggleEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetSubtitleSize
// Size: 0x0004
struct GameUserSettings_SetSubtitleSize_Params {
public:
    int32_t InSize; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSubtitlesEnabled
// Size: 0x0001
struct GameUserSettings_SetSubtitlesEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetSubtitleNamesEnabled
// Size: 0x0001
struct GameUserSettings_SetSubtitleNamesEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetSubtitleNameColor
// Size: 0x0004
struct GameUserSettings_SetSubtitleNameColor_Params {
public:
    int32_t InColor; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSubtitleLanguage
// Size: 0x0004
struct GameUserSettings_SetSubtitleLanguage_Params {
public:
    int32_t InLanguage; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSubtitleColor
// Size: 0x0004
struct GameUserSettings_SetSubtitleColor_Params {
public:
    int32_t InColor; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSubtitleBackgroundOpacity
// Size: 0x0004
struct GameUserSettings_SetSubtitleBackgroundOpacity_Params {
public:
    int32_t InOpacity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSpeechVolume
// Size: 0x0004
struct GameUserSettings_SetSpeechVolume_Params {
public:
    float InVolume; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetShadowQuality
// Size: 0x0004
struct GameUserSettings_SetShadowQuality_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetSfxVolume
// Size: 0x0004
struct GameUserSettings_SetSfxVolume_Params {
public:
    float InVolume; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetScreenResolution
// Size: 0x0008
struct GameUserSettings_SetScreenResolution_Params {
public:
    uint8_t Resolution[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.GameUserSettings.SetScalabilityProfile
// Size: 0x0008
struct GameUserSettings_SetScalabilityProfile_Params {
public:
    float InRenderScale; // 0x0000 (0x0004)
    int32_t InQualityLevel; // 0x0004 (0x0004)
};

// Function: Engine.GameUserSettings.SetResolutionScaleValue
// Size: 0x0004
struct GameUserSettings_SetResolutionScaleValue_Params {
public:
    int32_t NewScaleValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetResolutionScaleNormalized
// Size: 0x0004
struct GameUserSettings_SetResolutionScaleNormalized_Params {
public:
    float NewScaleNormalized; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetRepeatedButtonSize
// Size: 0x0004
struct GameUserSettings_SetRepeatedButtonSize_Params {
public:
    int32_t InSize; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetRepeatedButtonHoldEnabled
// Size: 0x0001
struct GameUserSettings_SetRepeatedButtonHoldEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetRenderScale
// Size: 0x0004
struct GameUserSettings_SetRenderScale_Params {
public:
    float InRenderScale; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetRememberScopeZoomEnabled
// Size: 0x0001
struct GameUserSettings_SetRememberScopeZoomEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetRememberAimSideEnabled
// Size: 0x0001
struct GameUserSettings_SetRememberAimSideEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetRefreshRate
// Size: 0x0008
struct GameUserSettings_SetRefreshRate_Params {
public:
    int32_t InNumerator; // 0x0000 (0x0004)
    int32_t InDenominator; // 0x0004 (0x0004)
};

// Function: Engine.GameUserSettings.SetRecenterCameraOnAttack
// Size: 0x0001
struct GameUserSettings_SetRecenterCameraOnAttack_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetPSSREnabled
// Size: 0x0001
struct GameUserSettings_SetPSSREnabled_Params {
public:
    bool InPSSREnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetPS5RenderMode
// Size: 0x0004
struct GameUserSettings_SetPS5RenderMode_Params {
public:
    int32_t InPS5RenderMode; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetPostProcessingQuality
// Size: 0x0004
struct GameUserSettings_SetPostProcessingQuality_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetPlayerCameraVerticalInverted
// Size: 0x0001
struct GameUserSettings_SetPlayerCameraVerticalInverted_Params {
public:
    bool bInverted; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetPlayerCameraSensitivity
// Size: 0x0004
struct GameUserSettings_SetPlayerCameraSensitivity_Params {
public:
    float InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetPlayerCameraHorizontalInverted
// Size: 0x0001
struct GameUserSettings_SetPlayerCameraHorizontalInverted_Params {
public:
    bool bInverted; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetPersistentCenterDotEnabled
// Size: 0x0001
struct GameUserSettings_SetPersistentCenterDotEnabled_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetOverallScalabilityLevel
// Size: 0x0004
struct GameUserSettings_SetOverallScalabilityLevel_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetMusicVolume
// Size: 0x0004
struct GameUserSettings_SetMusicVolume_Params {
public:
    float InVolume; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetMotionControlAimSensitivity
// Size: 0x0004
struct GameUserSettings_SetMotionControlAimSensitivity_Params {
public:
    float InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetMotionBlurEnabled
// Size: 0x0001
struct GameUserSettings_SetMotionBlurEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetLockMouseInput
// Size: 0x0001
struct GameUserSettings_SetLockMouseInput_Params {
public:
    bool bLockMouseInput; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetLightingQuality
// Size: 0x0004
struct GameUserSettings_SetLightingQuality_Params {
public:
    int32_t InLightingQuality; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetInterfaceLanguage
// Size: 0x0004
struct GameUserSettings_SetInterfaceLanguage_Params {
public:
    int32_t InLanguage; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetInterfaceColorMode
// Size: 0x0004
struct GameUserSettings_SetInterfaceColorMode_Params {
public:
    int32_t InColorMode; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetInputDeviceMode
// Size: 0x0004
struct GameUserSettings_SetInputDeviceMode_Params {
public:
    int32_t InDeviceMode; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetIgnoreGamepad
// Size: 0x0001
struct GameUserSettings_SetIgnoreGamepad_Params {
public:
    bool bIgnore; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHordeAssaultFirstPlaySeen
// Size: 0x0001
struct GameUserSettings_SetHordeAssaultFirstPlaySeen_Params {
public:
    bool bPlayed; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHordeAssaultFirstBootSeen
// Size: 0x0001
struct GameUserSettings_SetHordeAssaultFirstBootSeen_Params {
public:
    bool bSeen; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHighFramerate
// Size: 0x0001
struct GameUserSettings_SetHighFramerate_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHighContrastPreset
// Size: 0x0004
struct GameUserSettings_SetHighContrastPreset_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHighContrastModeOn
// Size: 0x0001
struct GameUserSettings_SetHighContrastModeOn_Params {
public:
    bool InEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHighContrastInteractibleColor
// Size: 0x0004
struct GameUserSettings_SetHighContrastInteractibleColor_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHighContrastHUDEnabled
// Size: 0x0001
struct GameUserSettings_SetHighContrastHUDEnabled_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHighContrastHeroColor
// Size: 0x0004
struct GameUserSettings_SetHighContrastHeroColor_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHighContrastFriendlyNPCColor
// Size: 0x0004
struct GameUserSettings_SetHighContrastFriendlyNPCColor_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHighContrastEnemyColor
// Size: 0x0004
struct GameUserSettings_SetHighContrastEnemyColor_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHDRUIBrightness
// Size: 0x0004
struct GameUserSettings_SetHDRUIBrightness_Params {
public:
    int32_t InHDRUIBrightness; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHDRGamePeakBrightness
// Size: 0x0004
struct GameUserSettings_SetHDRGamePeakBrightness_Params {
public:
    int32_t InHDRGamePeakBrightness; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHDRGameBrightness
// Size: 0x0004
struct GameUserSettings_SetHDRGameBrightness_Params {
public:
    int32_t InHDRGameBrightness; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHDREnabled
// Size: 0x0001
struct GameUserSettings_SetHDREnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHapticVibrationIntensity
// Size: 0x0004
struct GameUserSettings_SetHapticVibrationIntensity_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticsWeapon
// Size: 0x0004
struct GameUserSettings_SetHapticsWeapon_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticsMaster
// Size: 0x0004
struct GameUserSettings_SetHapticsMaster_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticsEngine
// Size: 0x0004
struct GameUserSettings_SetHapticsEngine_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticsEnabled
// Size: 0x0001
struct GameUserSettings_SetHapticsEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetHapticsBike
// Size: 0x0004
struct GameUserSettings_SetHapticsBike_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticPlayerDamage
// Size: 0x0004
struct GameUserSettings_SetHapticPlayerDamage_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticMelee
// Size: 0x0004
struct GameUserSettings_SetHapticMelee_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticIntensity
// Size: 0x0008
struct GameUserSettings_SetHapticIntensity_Params {
public:
    uint8_t HapticCategory; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float InValue; // 0x0004 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticHorde
// Size: 0x0004
struct GameUserSettings_SetHapticHorde_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticExplosion
// Size: 0x0004
struct GameUserSettings_SetHapticExplosion_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticEnvironmental
// Size: 0x0004
struct GameUserSettings_SetHapticEnvironmental_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetHapticCollectible
// Size: 0x0004
struct GameUserSettings_SetHapticCollectible_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetGeometryQuality
// Size: 0x0004
struct GameUserSettings_SetGeometryQuality_Params {
public:
    int32_t InGeometryQuality; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetGameSpeedTimeDilationID
// Size: 0x0004
struct GameUserSettings_SetGameSpeedTimeDilationID_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetGameSpeed
// Size: 0x0004
struct GameUserSettings_SetGameSpeed_Params {
public:
    int32_t InValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetGamepadDisplayMode
// Size: 0x0004
struct GameUserSettings_SetGamepadDisplayMode_Params {
public:
    int32_t InDisplayMode; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetFullscreenMode
// Size: 0x0001
struct GameUserSettings_SetFullscreenMode_Params {
public:
    uint8_t InFullscreenMode; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetFullDataEnabled
// Size: 0x0001
struct GameUserSettings_SetFullDataEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetFrameRateLimit
// Size: 0x0004
struct GameUserSettings_SetFrameRateLimit_Params {
public:
    float newLimit; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetFOV
// Size: 0x0004
struct GameUserSettings_SetFOV_Params {
public:
    float InFOV; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetFoliageDrawDistance
// Size: 0x0004
struct GameUserSettings_SetFoliageDrawDistance_Params {
public:
    int32_t InFoliageDrawDistance; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetFirstBootAccessibilitySeen
// Size: 0x0001
struct GameUserSettings_SetFirstBootAccessibilitySeen_Params {
public:
    bool bSeen; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetDisplayIndex
// Size: 0x0004
struct GameUserSettings_SetDisplayIndex_Params {
public:
    int32_t InIndex; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetDialogLanguage
// Size: 0x0004
struct GameUserSettings_SetDialogLanguage_Params {
public:
    int32_t InLanguage; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetDepthOfFieldEnabled
// Size: 0x0001
struct GameUserSettings_SetDepthOfFieldEnabled_Params {
public:
    bool InDepthOfFieldEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetDataPolicySeen
// Size: 0x0001
struct GameUserSettings_SetDataPolicySeen_Params {
public:
    bool bSeen; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetControllerVolume
// Size: 0x0004
struct GameUserSettings_SetControllerVolume_Params {
public:
    float InVolume; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetControllerDeadzoneSensitivity
// Size: 0x0004
struct GameUserSettings_SetControllerDeadzoneSensitivity_Params {
public:
    int32_t InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetCollectibleAudioCues
// Size: 0x0001
struct GameUserSettings_SetCollectibleAudioCues_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetCloudAndFogQuality
// Size: 0x0004
struct GameUserSettings_SetCloudAndFogQuality_Params {
public:
    int32_t InCloudAndFogQuality; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetCinematicActive
// Size: 0x0001
struct GameUserSettings_SetCinematicActive_Params {
public:
    bool InEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetChromaticAberrationEnabled
// Size: 0x0001
struct GameUserSettings_SetChromaticAberrationEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetCameraFollowTrackingEnabled
// Size: 0x0001
struct GameUserSettings_SetCameraFollowTrackingEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetBrightness
// Size: 0x0004
struct GameUserSettings_SetBrightness_Params {
public:
    float InBrightness; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetBikeSteeringSensitivity
// Size: 0x0004
struct GameUserSettings_SetBikeSteeringSensitivity_Params {
public:
    float InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetBikeCameraVerticalInverted
// Size: 0x0001
struct GameUserSettings_SetBikeCameraVerticalInverted_Params {
public:
    bool bInverted; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetBikeCameraSensitivity
// Size: 0x0004
struct GameUserSettings_SetBikeCameraSensitivity_Params {
public:
    float InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetBikeCameraHorizontalInverted
// Size: 0x0001
struct GameUserSettings_SetBikeCameraHorizontalInverted_Params {
public:
    bool bInverted; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetBikeBackupCameraEnabled
// Size: 0x0001
struct GameUserSettings_SetBikeBackupCameraEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetBendShadowQuality
// Size: 0x0004
struct GameUserSettings_SetBendShadowQuality_Params {
public:
    int32_t InShadowQuality; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetBenchmarkFallbackValues
// Size: 0x0000
struct GameUserSettings_SetBenchmarkFallbackValues_Params {
public:
};

// Function: Engine.GameUserSettings.SetAutoCompleteReactionEventsEnabled
// Size: 0x0001
struct GameUserSettings_SetAutoCompleteReactionEventsEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetAudioQualityLevel
// Size: 0x0004
struct GameUserSettings_SetAudioQualityLevel_Params {
public:
    int32_t QualityLevel; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAudioFormat
// Size: 0x0004
struct GameUserSettings_SetAudioFormat_Params {
public:
    int32_t InFormat; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAudioDynamicRange
// Size: 0x0004
struct GameUserSettings_SetAudioDynamicRange_Params {
public:
    int32_t InDynamicRange; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAntiAliasingQuality
// Size: 0x0004
struct GameUserSettings_SetAntiAliasingQuality_Params {
public:
    int32_t Value; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAimStickinessSensitivity
// Size: 0x0004
struct GameUserSettings_SetAimStickinessSensitivity_Params {
public:
    int32_t InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAimSnapEnabled
// Size: 0x0001
struct GameUserSettings_SetAimSnapEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SetAimFrictionSensitivity
// Size: 0x0004
struct GameUserSettings_SetAimFrictionSensitivity_Params {
public:
    int32_t InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAimCameraSensitivity
// Size: 0x0004
struct GameUserSettings_SetAimCameraSensitivity_Params {
public:
    float InSensitivity; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.SetAdaptiveTriggerStrength
// Size: 0x0005
struct GameUserSettings_SetAdaptiveTriggerStrength_Params {
public:
    float Strength; // 0x0000 (0x0004)
    uint8_t AdaptiveTriggerCategory; // 0x0004 (0x0001)
};

// Function: Engine.GameUserSettings.SetAdaptiveTriggersEnabled
// Size: 0x0002
struct GameUserSettings_SetAdaptiveTriggersEnabled_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
    uint8_t AdaptiveTriggerCategory; // 0x0001 (0x0001)
};

// Function: Engine.GameUserSettings.Set30HzFramerate
// Size: 0x0001
struct GameUserSettings_Set30HzFramerate_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.SaveSettings
// Size: 0x0000
struct GameUserSettings_SaveSettings_Params {
public:
};

// Function: Engine.GameUserSettings.RevertVideoMode
// Size: 0x0000
struct GameUserSettings_RevertVideoMode_Params {
public:
};

// Function: Engine.GameUserSettings.RevertScalabilityOptions
// Size: 0x0000
struct GameUserSettings_RevertScalabilityOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetToCurrentSettings
// Size: 0x0000
struct GameUserSettings_ResetToCurrentSettings_Params {
public:
};

// Function: Engine.GameUserSettings.ResetTelemetryOptions
// Size: 0x0000
struct GameUserSettings_ResetTelemetryOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetSurvivalWheelOptions
// Size: 0x0000
struct GameUserSettings_ResetSurvivalWheelOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetScalabilityOptions
// Size: 0x0000
struct GameUserSettings_ResetScalabilityOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetLanguageOptions
// Size: 0x0000
struct GameUserSettings_ResetLanguageOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetHapticOptions
// Size: 0x0000
struct GameUserSettings_ResetHapticOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetGameplayOptions
// Size: 0x0000
struct GameUserSettings_ResetGameplayOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetGamepadOptions
// Size: 0x0000
struct GameUserSettings_ResetGamepadOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetAudioOptions
// Size: 0x0000
struct GameUserSettings_ResetAudioOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetAllOptions
// Size: 0x0000
struct GameUserSettings_ResetAllOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetAdaptiveTriggerOptions
// Size: 0x0000
struct GameUserSettings_ResetAdaptiveTriggerOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ResetAccessibilityOptions
// Size: 0x0000
struct GameUserSettings_ResetAccessibilityOptions_Params {
public:
};

// Function: Engine.GameUserSettings.RequestAutodetect
// Size: 0x0000
struct GameUserSettings_RequestAutodetect_Params {
public:
};

// Function: Engine.GameUserSettings.OnPhotoModeOpened
// Size: 0x0001
struct GameUserSettings_OnPhotoModeOpened_Params {
public:
    bool bIsOpened; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.MatchCurrentVideoSettings
// Size: 0x0000
struct GameUserSettings_MatchCurrentVideoSettings_Params {
public:
};

// Function: Engine.GameUserSettings.MatchCurrentScalabilityOptions
// Size: 0x0000
struct GameUserSettings_MatchCurrentScalabilityOptions_Params {
public:
};

// Function: Engine.GameUserSettings.LoadSettings
// Size: 0x0001
struct GameUserSettings_LoadSettings_Params {
public:
    bool bForceReload; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsVSyncEnabled
// Size: 0x0001
struct GameUserSettings_IsVSyncEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsVSyncDirty
// Size: 0x0001
struct GameUserSettings_IsVSyncDirty_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsVibrationEnabled
// Size: 0x0001
struct GameUserSettings_IsVibrationEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsVehicleCameraTrackingEnabled
// Size: 0x0001
struct GameUserSettings_IsVehicleCameraTrackingEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsTrackAssistEnabled
// Size: 0x0001
struct GameUserSettings_IsTrackAssistEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsTelemetryEnabled
// Size: 0x0001
struct GameUserSettings_IsTelemetryEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsSurvivalWheelSmartScrollEnabled
// Size: 0x0001
struct GameUserSettings_IsSurvivalWheelSmartScrollEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsSurvivalWheelDebugRenderingEnabled
// Size: 0x0001
struct GameUserSettings_IsSurvivalWheelDebugRenderingEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsScreenResolutionDirty
// Size: 0x0001
struct GameUserSettings_IsScreenResolutionDirty_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsRepeatedButtonHoldEnabled
// Size: 0x0001
struct GameUserSettings_IsRepeatedButtonHoldEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsRememberScopeZoomEnabled
// Size: 0x0001
struct GameUserSettings_IsRememberScopeZoomEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsRememberAimSideEnabled
// Size: 0x0001
struct GameUserSettings_IsRememberAimSideEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsPSSRInhibited
// Size: 0x0001
struct GameUserSettings_IsPSSRInhibited_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsPS5Trinity
// Size: 0x0001
struct GameUserSettings_IsPS5Trinity_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsPlayerCameraVerticalInverted
// Size: 0x0001
struct GameUserSettings_IsPlayerCameraVerticalInverted_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsPlayerCameraHorizontalInverted
// Size: 0x0001
struct GameUserSettings_IsPlayerCameraHorizontalInverted_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsMotionControlAimEnabled
// Size: 0x0001
struct GameUserSettings_IsMotionControlAimEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsMotionBlurEnabled
// Size: 0x0001
struct GameUserSettings_IsMotionBlurEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsLanguageSupportedByTTS
// Size: 0x0001
struct GameUserSettings_IsLanguageSupportedByTTS_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsHordeAssaultFirstPlaySeen
// Size: 0x0001
struct GameUserSettings_IsHordeAssaultFirstPlaySeen_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsHordeAssaultFirstBootSeen
// Size: 0x0001
struct GameUserSettings_IsHordeAssaultFirstBootSeen_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsHighFramerateSupported
// Size: 0x0001
struct GameUserSettings_IsHighFramerateSupported_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsHDRSupported
// Size: 0x0001
struct GameUserSettings_IsHDRSupported_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsHDREnabled
// Size: 0x0001
struct GameUserSettings_IsHDREnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsFullscreenModeDirty
// Size: 0x0001
struct GameUserSettings_IsFullscreenModeDirty_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsFullDataEnabled
// Size: 0x0001
struct GameUserSettings_IsFullDataEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsFirstBootAccessibilitySeen
// Size: 0x0001
struct GameUserSettings_IsFirstBootAccessibilitySeen_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsDirty
// Size: 0x0001
struct GameUserSettings_IsDirty_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsDataPolicySeen
// Size: 0x0001
struct GameUserSettings_IsDataPolicySeen_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsControllerAudioEnabled
// Size: 0x0001
struct GameUserSettings_IsControllerAudioEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsCollectibleAudioCuesEnabled
// Size: 0x0001
struct GameUserSettings_IsCollectibleAudioCuesEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsChromaticAberrationEnabled
// Size: 0x0001
struct GameUserSettings_IsChromaticAberrationEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsCameraFollowTrackingEnabled
// Size: 0x0001
struct GameUserSettings_IsCameraFollowTrackingEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsBikeCameraVerticalInverted
// Size: 0x0001
struct GameUserSettings_IsBikeCameraVerticalInverted_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsBikeCameraHorizontalInverted
// Size: 0x0001
struct GameUserSettings_IsBikeCameraHorizontalInverted_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsBikeBackupCameraEnabled
// Size: 0x0001
struct GameUserSettings_IsBikeBackupCameraEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsAutoCompleteReactionEventsEnabled
// Size: 0x0001
struct GameUserSettings_IsAutoCompleteReactionEventsEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.IsAimSnapEnabled
// Size: 0x0001
struct GameUserSettings_IsAimSnapEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetWeaponSelectionPreviewMode
// Size: 0x0004
struct GameUserSettings_GetWeaponSelectionPreviewMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetVisualPreset
// Size: 0x0004
struct GameUserSettings_GetVisualPreset_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetVisualEffectQuality
// Size: 0x0004
struct GameUserSettings_GetVisualEffectQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetViewDistanceQuality
// Size: 0x0004
struct GameUserSettings_GetViewDistanceQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetUINarrationOn
// Size: 0x0001
struct GameUserSettings_GetUINarrationOn_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetTextureStreamingQuality
// Size: 0x0004
struct GameUserSettings_GetTextureStreamingQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetTextureQuality
// Size: 0x0004
struct GameUserSettings_GetTextureQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetTextureFilterQuality
// Size: 0x0004
struct GameUserSettings_GetTextureFilterQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSyncInterval
// Size: 0x0004
struct GameUserSettings_GetSyncInterval_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSwipeVerticalDeadzoneBuffer
// Size: 0x0004
struct GameUserSettings_GetSwipeVerticalDeadzoneBuffer_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSwipeVerticalDeadzone
// Size: 0x0004
struct GameUserSettings_GetSwipeVerticalDeadzone_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSwipeLength
// Size: 0x0004
struct GameUserSettings_GetSwipeLength_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSwipeHorizontalDeadzoneBuffer
// Size: 0x0004
struct GameUserSettings_GetSwipeHorizontalDeadzoneBuffer_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSwipeHorizontalDeadzone
// Size: 0x0004
struct GameUserSettings_GetSwipeHorizontalDeadzone_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSurvivalWheelSmartScrollDelay
// Size: 0x0004
struct GameUserSettings_GetSurvivalWheelSmartScrollDelay_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSurvivalWheelMouseMode
// Size: 0x0004
struct GameUserSettings_GetSurvivalWheelMouseMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSurvivalWheelMinimumItemWidth
// Size: 0x0004
struct GameUserSettings_GetSurvivalWheelMinimumItemWidth_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSurvivalWheelMinimumExpansionWidth
// Size: 0x0004
struct GameUserSettings_GetSurvivalWheelMinimumExpansionWidth_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSupportedSyncIntervals
// Size: 0x0020
struct GameUserSettings_GetSupportedSyncIntervals_Params {
public:
    struct TArray<uint8_t> SyncIntervals; // 0x0000 (0x0010)
    struct TArray<uint8_t> FrameRates; // 0x0010 (0x0010)
};

// Function: Engine.GameUserSettings.GetSupportedResolutions
// Size: 0x0010
struct GameUserSettings_GetSupportedResolutions_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetSupportedRefreshRates
// Size: 0x0010
struct GameUserSettings_GetSupportedRefreshRates_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetSubtitlesShouldBeShown
// Size: 0x0001
struct GameUserSettings_GetSubtitlesShouldBeShown_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetSubtitleSize
// Size: 0x0004
struct GameUserSettings_GetSubtitleSize_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSubtitleNameColor
// Size: 0x0004
struct GameUserSettings_GetSubtitleNameColor_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSubtitleLanguage
// Size: 0x0004
struct GameUserSettings_GetSubtitleLanguage_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSubtitleCultureName
// Size: 0x0010
struct GameUserSettings_GetSubtitleCultureName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetSubtitleColor
// Size: 0x0004
struct GameUserSettings_GetSubtitleColor_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSubtitleBackgroundOpacity
// Size: 0x0004
struct GameUserSettings_GetSubtitleBackgroundOpacity_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSpeechVolume
// Size: 0x0004
struct GameUserSettings_GetSpeechVolume_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetShadowQuality
// Size: 0x0004
struct GameUserSettings_GetShadowQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetSfxVolume
// Size: 0x0004
struct GameUserSettings_GetSfxVolume_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetScreenResolution
// Size: 0x0008
struct GameUserSettings_GetScreenResolution_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.GameUserSettings.GetResolutionScaleInformation
// Size: 0x0010
struct GameUserSettings_GetResolutionScaleInformation_Params {
public:
    float CurrentScaleNormalized; // 0x0000 (0x0004)
    int32_t CurrentScaleValue; // 0x0004 (0x0004)
    int32_t MinScaleValue; // 0x0008 (0x0004)
    int32_t MaxScaleValue; // 0x000C (0x0004)
};

// Function: Engine.GameUserSettings.GetRepeatedButtonSize
// Size: 0x0004
struct GameUserSettings_GetRepeatedButtonSize_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetRenderScale
// Size: 0x0004
struct GameUserSettings_GetRenderScale_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetRefreshRate
// Size: 0x000C
struct GameUserSettings_GetRefreshRate_Params {
public:
    float RefreshRate; // 0x0000 (0x0004)
    int32_t Numerator; // 0x0004 (0x0004)
    int32_t Denominator; // 0x0008 (0x0004)
};

// Function: Engine.GameUserSettings.GetRecenterCameraOnAttack
// Size: 0x0001
struct GameUserSettings_GetRecenterCameraOnAttack_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetPSSRSupported
// Size: 0x0001
struct GameUserSettings_GetPSSRSupported_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetPSSRIsRunning
// Size: 0x0001
struct GameUserSettings_GetPSSRIsRunning_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetPSSRInhibitedReason
// Size: 0x0010
struct GameUserSettings_GetPSSRInhibitedReason_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetPSSREnabled
// Size: 0x0001
struct GameUserSettings_GetPSSREnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetPS5RenderMode
// Size: 0x0004
struct GameUserSettings_GetPS5RenderMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetPostProcessingQuality
// Size: 0x0004
struct GameUserSettings_GetPostProcessingQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetPlayerCameraSensitivity
// Size: 0x0004
struct GameUserSettings_GetPlayerCameraSensitivity_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetPersistentCenterDotEnabled
// Size: 0x0001
struct GameUserSettings_GetPersistentCenterDotEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetOverallScalabilityLevel
// Size: 0x0004
struct GameUserSettings_GetOverallScalabilityLevel_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetMusicVolume
// Size: 0x0004
struct GameUserSettings_GetMusicVolume_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetMotionControlAimSensitivity
// Size: 0x0004
struct GameUserSettings_GetMotionControlAimSensitivity_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetLockMouseInput
// Size: 0x0001
struct GameUserSettings_GetLockMouseInput_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetLightingQuality
// Size: 0x0004
struct GameUserSettings_GetLightingQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetLastConfirmedScreenResolution
// Size: 0x0008
struct GameUserSettings_GetLastConfirmedScreenResolution_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.GameUserSettings.GetLastConfirmedFullscreenMode
// Size: 0x0001
struct GameUserSettings_GetLastConfirmedFullscreenMode_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetInterfaceLanguage
// Size: 0x0004
struct GameUserSettings_GetInterfaceLanguage_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetInterfaceCultureName
// Size: 0x0010
struct GameUserSettings_GetInterfaceCultureName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetInterfaceColorMode
// Size: 0x0004
struct GameUserSettings_GetInterfaceColorMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetInputDeviceMode
// Size: 0x0004
struct GameUserSettings_GetInputDeviceMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetIgnoreGamepad
// Size: 0x0001
struct GameUserSettings_GetIgnoreGamepad_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetHighFramerateEnabled
// Size: 0x0001
struct GameUserSettings_GetHighFramerateEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetHighContrastPreset
// Size: 0x0004
struct GameUserSettings_GetHighContrastPreset_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHighContrastModeOn
// Size: 0x0001
struct GameUserSettings_GetHighContrastModeOn_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetHighContrastInteractibleColor
// Size: 0x0004
struct GameUserSettings_GetHighContrastInteractibleColor_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHighContrastHUDEnabled
// Size: 0x0001
struct GameUserSettings_GetHighContrastHUDEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetHighContrastHeroColor
// Size: 0x0004
struct GameUserSettings_GetHighContrastHeroColor_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHighContrastFriendlyNPCColor
// Size: 0x0004
struct GameUserSettings_GetHighContrastFriendlyNPCColor_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHighContrastEnemyColor
// Size: 0x0004
struct GameUserSettings_GetHighContrastEnemyColor_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHDRUIBrightness
// Size: 0x0004
struct GameUserSettings_GetHDRUIBrightness_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHDRGamePeakBrightness
// Size: 0x0004
struct GameUserSettings_GetHDRGamePeakBrightness_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHDRGameBrightness
// Size: 0x0004
struct GameUserSettings_GetHDRGameBrightness_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticVibrationIntensity
// Size: 0x0004
struct GameUserSettings_GetHapticVibrationIntensity_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsWeapon
// Size: 0x0004
struct GameUserSettings_GetHapticsWeapon_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsPlayerDamage
// Size: 0x0004
struct GameUserSettings_GetHapticsPlayerDamage_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsMelee
// Size: 0x0004
struct GameUserSettings_GetHapticsMelee_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsMaster
// Size: 0x0004
struct GameUserSettings_GetHapticsMaster_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsHorde
// Size: 0x0004
struct GameUserSettings_GetHapticsHorde_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsExplosion
// Size: 0x0004
struct GameUserSettings_GetHapticsExplosion_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticSettings
// Size: 0x002C
struct GameUserSettings_GetHapticSettings_Params {
public:
    uint8_t ReturnValue[0x2C]; // 0x0000 (0x002C)
};

// Function: Engine.GameUserSettings.GetHapticsEnvironmental
// Size: 0x0004
struct GameUserSettings_GetHapticsEnvironmental_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsEngine
// Size: 0x0004
struct GameUserSettings_GetHapticsEngine_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsCollectible
// Size: 0x0004
struct GameUserSettings_GetHapticsCollectible_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetHapticsBike
// Size: 0x0004
struct GameUserSettings_GetHapticsBike_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetGeometryQuality
// Size: 0x0004
struct GameUserSettings_GetGeometryQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetGameUserSettings
// Size: 0x0008
struct GameUserSettings_GetGameUserSettings_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.GameUserSettings.GetGameSpeedTimeDilationID
// Size: 0x0004
struct GameUserSettings_GetGameSpeedTimeDilationID_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetGameSpeedFloat
// Size: 0x0004
struct GameUserSettings_GetGameSpeedFloat_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetGameSpeed
// Size: 0x0004
struct GameUserSettings_GetGameSpeed_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetGamepadDisplayMode
// Size: 0x0004
struct GameUserSettings_GetGamepadDisplayMode_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetFullscreenMode
// Size: 0x0001
struct GameUserSettings_GetFullscreenMode_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetFrameRateLimit
// Size: 0x0004
struct GameUserSettings_GetFrameRateLimit_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetFOV
// Size: 0x0004
struct GameUserSettings_GetFOV_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetFoliageDrawDistance
// Size: 0x0004
struct GameUserSettings_GetFoliageDrawDistance_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetDisplayIndex
// Size: 0x0004
struct GameUserSettings_GetDisplayIndex_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetDialogLanguage
// Size: 0x0004
struct GameUserSettings_GetDialogLanguage_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetDialogCultureName
// Size: 0x0010
struct GameUserSettings_GetDialogCultureName_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetDepthOfFieldEnabled
// Size: 0x0001
struct GameUserSettings_GetDepthOfFieldEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetDefaultWindowPosition
// Size: 0x0008
struct GameUserSettings_GetDefaultWindowPosition_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.GameUserSettings.GetDefaultWindowMode
// Size: 0x0001
struct GameUserSettings_GetDefaultWindowMode_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetDefaultResolution
// Size: 0x0008
struct GameUserSettings_GetDefaultResolution_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: Engine.GameUserSettings.GetControllerVolume
// Size: 0x0004
struct GameUserSettings_GetControllerVolume_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetControllerDeadzoneSensitivity
// Size: 0x0004
struct GameUserSettings_GetControllerDeadzoneSensitivity_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetCloudAndFogQuality
// Size: 0x0004
struct GameUserSettings_GetCloudAndFogQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetCinematicActive
// Size: 0x0001
struct GameUserSettings_GetCinematicActive_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.GetBrightness
// Size: 0x0004
struct GameUserSettings_GetBrightness_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetBikeSteeringSensitivity
// Size: 0x0004
struct GameUserSettings_GetBikeSteeringSensitivity_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetBikeCameraSensitivity
// Size: 0x0004
struct GameUserSettings_GetBikeCameraSensitivity_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetBendShadowQuality
// Size: 0x0004
struct GameUserSettings_GetBendShadowQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAvailableSubtitleCultures
// Size: 0x0010
struct GameUserSettings_GetAvailableSubtitleCultures_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetAvailableInterfaceCultures
// Size: 0x0010
struct GameUserSettings_GetAvailableInterfaceCultures_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetAvailableDialogCultures
// Size: 0x0010
struct GameUserSettings_GetAvailableDialogCultures_Params {
public:
    struct TArray<uint8_t> ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.GameUserSettings.GetAvailableDeviceCount
// Size: 0x0004
struct GameUserSettings_GetAvailableDeviceCount_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAudioQualityLevel
// Size: 0x0004
struct GameUserSettings_GetAudioQualityLevel_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAudioFormat
// Size: 0x0004
struct GameUserSettings_GetAudioFormat_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAudioDynamicRange
// Size: 0x0004
struct GameUserSettings_GetAudioDynamicRange_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAntiAliasingQuality
// Size: 0x0004
struct GameUserSettings_GetAntiAliasingQuality_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAimStickinessSensitivity
// Size: 0x0004
struct GameUserSettings_GetAimStickinessSensitivity_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAimFrictionSensitivity
// Size: 0x0004
struct GameUserSettings_GetAimFrictionSensitivity_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAimCameraSensitivity
// Size: 0x0004
struct GameUserSettings_GetAimCameraSensitivity_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.GameUserSettings.GetAdaptiveTriggerStrengthModifier
// Size: 0x0008
struct GameUserSettings_GetAdaptiveTriggerStrengthModifier_Params {
public:
    uint8_t AdaptiveTriggerCategory; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.GameUserSettings.GetAdaptiveTriggerStrength
// Size: 0x0008
struct GameUserSettings_GetAdaptiveTriggerStrength_Params {
public:
    uint8_t AdaptiveTriggerCategory; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ReturnValue; // 0x0004 (0x0004)
};

// Function: Engine.GameUserSettings.GetAdaptiveTriggerSettings
// Size: 0x0018
struct GameUserSettings_GetAdaptiveTriggerSettings_Params {
public:
    uint8_t ReturnValue[0x18]; // 0x0000 (0x0018)
};

// Function: Engine.GameUserSettings.GetAdaptiveTriggersEnabled
// Size: 0x0002
struct GameUserSettings_GetAdaptiveTriggersEnabled_Params {
public:
    uint8_t AdaptiveTriggerCategory; // 0x0000 (0x0001)
    bool ReturnValue; // 0x0001 (0x0001)
};

// Function: Engine.GameUserSettings.Get30HzFramerateEnabled
// Size: 0x0001
struct GameUserSettings_Get30HzFramerateEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.ConfirmVideoMode
// Size: 0x0000
struct GameUserSettings_ConfirmVideoMode_Params {
public:
};

// Function: Engine.GameUserSettings.CompleteAutodetect
// Size: 0x0000
struct GameUserSettings_CompleteAutodetect_Params {
public:
};

// Function: Engine.GameUserSettings.CacheScalabilityOptions
// Size: 0x0000
struct GameUserSettings_CacheScalabilityOptions_Params {
public:
};

// Function: Engine.GameUserSettings.CacheDeviceCapabilities
// Size: 0x0000
struct GameUserSettings_CacheDeviceCapabilities_Params {
public:
};

// Function: Engine.GameUserSettings.BroadcastOnOptionsClosed
// Size: 0x0000
struct GameUserSettings_BroadcastOnOptionsClosed_Params {
public:
};

// Function: Engine.GameUserSettings.BroadcastHCMSettingsChanged
// Size: 0x0000
struct GameUserSettings_BroadcastHCMSettingsChanged_Params {
public:
};

// Function: Engine.GameUserSettings.AreXPIndicatorsEnabled
// Size: 0x0001
struct GameUserSettings_AreXPIndicatorsEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.AreVideoSettingsDirty
// Size: 0x0001
struct GameUserSettings_AreVideoSettingsDirty_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.AreSwipeControlsEnabled
// Size: 0x0001
struct GameUserSettings_AreSwipeControlsEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.AreSubtitlesEnabled
// Size: 0x0001
struct GameUserSettings_AreSubtitlesEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.AreSubtitleNamesEnabled
// Size: 0x0001
struct GameUserSettings_AreSubtitleNamesEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.ApplySettings
// Size: 0x0001
struct GameUserSettings_ApplySettings_Params {
public:
    bool bCheckForCommandLineOverrides; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.ApplyScalabilityOptions
// Size: 0x0000
struct GameUserSettings_ApplyScalabilityOptions_Params {
public:
};

// Function: Engine.GameUserSettings.ApplyResolutionSettings
// Size: 0x0001
struct GameUserSettings_ApplyResolutionSettings_Params {
public:
    bool bCheckForCommandLineOverrides; // 0x0000 (0x0001)
};

// Function: Engine.GameUserSettings.ApplyNonResolutionSettings
// Size: 0x0000
struct GameUserSettings_ApplyNonResolutionSettings_Params {
public:
};

// Function: Engine.GameUserSettings.AccessibilitySettingsChanged
// Size: 0x0000
struct GameUserSettings_AccessibilitySettingsChanged_Params {
public:
};

// Function: Engine.LevelStreaming.IsStreamingStatePending
// Size: 0x0001
struct LevelStreaming_IsStreamingStatePending_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.LevelStreaming.IsLevelVisible
// Size: 0x0001
struct LevelStreaming_IsLevelVisible_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.LevelStreaming.IsLevelLoaded
// Size: 0x0001
struct LevelStreaming_IsLevelLoaded_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.LevelStreaming.GetLevelScriptActor
// Size: 0x0008
struct LevelStreaming_GetLevelScriptActor_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: Engine.LevelStreaming.GetLevelCenter
// Size: 0x000C
struct LevelStreaming_GetLevelCenter_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: Engine.LevelStreaming.CreateInstance
// Size: 0x0018
struct LevelStreaming_CreateInstance_Params {
public:
    struct FString UniqueInstanceName; // 0x0000 (0x0010)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: Engine.MaterialInstanceDynamic.SetVectorParameterValue
// Size: 0x0018
struct MaterialInstanceDynamic_SetVectorParameterValue_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t Value[0x10]; // 0x0008 (0x0010)
};

// Function: Engine.MaterialInstanceDynamic.SetTextureParameterValue
// Size: 0x0010
struct MaterialInstanceDynamic_SetTextureParameterValue_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* Value; // 0x0008 (0x0008)
};

// Function: Engine.MaterialInstanceDynamic.SetScalarParameterValue
// Size: 0x000C
struct MaterialInstanceDynamic_SetScalarParameterValue_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
};

// Function: Engine.MaterialInstanceDynamic.ResetParent
// Size: 0x0008
struct MaterialInstanceDynamic_ResetParent_Params {
public:
    class UObject* ParentMaterial; // 0x0000 (0x0008)
};

// Function: Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams
// Size: 0x0014
struct MaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Params {
public:
    class UObject* SourceA; // 0x0000 (0x0008)
    class UObject* SourceB; // 0x0008 (0x0008)
    float Alpha; // 0x0010 (0x0004)
};

// Function: Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue
// Size: 0x0018
struct MaterialInstanceDynamic_K2_GetVectorParameterValue_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x10]; // 0x0008 (0x0010)
};

// Function: Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue
// Size: 0x0010
struct MaterialInstanceDynamic_K2_GetTextureParameterValue_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue
// Size: 0x000C
struct MaterialInstanceDynamic_K2_GetScalarParameterValue_Params {
public:
    struct FName ParameterName; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters
// Size: 0x0008
struct MaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Params {
public:
    class UObject* Source; // 0x0000 (0x0008)
};

// Function: Engine.MaterialInstanceDynamic.CopyParameterOverrides
// Size: 0x0008
struct MaterialInstanceDynamic_CopyParameterOverrides_Params {
public:
    class UObject* MaterialInstance; // 0x0000 (0x0008)
};

// Function: Engine.MaterialInstanceDynamic.CopyInterpParameters
// Size: 0x0008
struct MaterialInstanceDynamic_CopyInterpParameters_Params {
public:
    class UObject* Source; // 0x0000 (0x0008)
};

// Function: Engine.NavigationPath.IsValid
// Size: 0x0001
struct NavigationPath_IsValid_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavigationPath.IsStringPulled
// Size: 0x0001
struct NavigationPath_IsStringPulled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavigationPath.IsPartial
// Size: 0x0001
struct NavigationPath_IsPartial_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.NavigationPath.GetPathLength
// Size: 0x0004
struct NavigationPath_GetPathLength_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.NavigationPath.GetPathCost
// Size: 0x0004
struct NavigationPath_GetPathCost_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.NavigationPath.GetDebugString
// Size: 0x0010
struct NavigationPath_GetDebugString_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: Engine.NavigationPath.EnableRecalculationOnInvalidation
// Size: 0x0001
struct NavigationPath_EnableRecalculationOnInvalidation_Params {
public:
    uint8_t DoRecalculation; // 0x0000 (0x0001)
};

// Function: Engine.NavigationPath.EnableDebugDrawing
// Size: 0x0014
struct NavigationPath_EnableDebugDrawing_Params {
public:
    bool bShouldDrawDebugData; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t PathColor[0x10]; // 0x0004 (0x0010)
};

// Function: Engine.ObjectFloat.SetValue
// Size: 0x0004
struct ObjectFloat_SetValue_Params {
public:
    float In_Value; // 0x0000 (0x0004)
};

// Function: Engine.ObjectFloat.GetValue
// Size: 0x0004
struct ObjectFloat_GetValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.TwitterIntegrationBase.TwitterRequest
// Size: 0x0029
struct TwitterIntegrationBase_TwitterRequest_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
    struct TArray<uint8_t> ParamKeysAndValues; // 0x0010 (0x0010)
    uint8_t RequestMethod; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    int32_t AccountIndex; // 0x0024 (0x0004)
    bool ReturnValue; // 0x0028 (0x0001)
};

// Function: Engine.TwitterIntegrationBase.ShowTweetUI
// Size: 0x0031
struct TwitterIntegrationBase_ShowTweetUI_Params {
public:
    struct FString InitialMessage; // 0x0000 (0x0010)
    struct FString URL; // 0x0010 (0x0010)
    struct FString Picture; // 0x0020 (0x0010)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: Engine.TwitterIntegrationBase.Init
// Size: 0x0000
struct TwitterIntegrationBase_Init_Params {
public:
};

// Function: Engine.TwitterIntegrationBase.GetNumAccounts
// Size: 0x0004
struct TwitterIntegrationBase_GetNumAccounts_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.TwitterIntegrationBase.GetAccountName
// Size: 0x0018
struct TwitterIntegrationBase_GetAccountName_Params {
public:
    int32_t AccountIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: Engine.TwitterIntegrationBase.CanShowTweetUI
// Size: 0x0001
struct TwitterIntegrationBase_CanShowTweetUI_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.TwitterIntegrationBase.AuthorizeAccounts
// Size: 0x0001
struct TwitterIntegrationBase_AuthorizeAccounts_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: Engine.PlatformInterfaceWebResponse.GetNumHeaders
// Size: 0x0004
struct PlatformInterfaceWebResponse_GetNumHeaders_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.PlatformInterfaceWebResponse.GetHeaderValue
// Size: 0x0020
struct PlatformInterfaceWebResponse_GetHeaderValue_Params {
public:
    struct FString HeaderName; // 0x0000 (0x0010)
    struct FString ReturnValue; // 0x0010 (0x0010)
};

// Function: Engine.PlatformInterfaceWebResponse.GetHeader
// Size: 0x0028
struct PlatformInterfaceWebResponse_GetHeader_Params {
public:
    int32_t HeaderIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString Header; // 0x0008 (0x0010)
    struct FString Value; // 0x0018 (0x0010)
};

// Function: Engine.SkeletalMeshSocket.InitializeSocketFromLocation
// Size: 0x0020
struct SkeletalMeshSocket_InitializeSocketFromLocation_Params {
public:
    class UObject* SkelComp; // 0x0000 (0x0008)
    uint8_t WorldLocation[0xC]; // 0x0008 (0x000C)
    uint8_t WorldNormal[0xC]; // 0x0014 (0x000C)
};

// Function: Engine.SkeletalMeshSocket.GetSocketLocation
// Size: 0x0014
struct SkeletalMeshSocket_GetSocketLocation_Params {
public:
    class UObject* SkelComp; // 0x0000 (0x0008)
    uint8_t ReturnValue[0xC]; // 0x0008 (0x000C)
};

// Function: Engine.StaticMesh.GetBoundingBox
// Size: 0x001C
struct StaticMesh_GetBoundingBox_Params {
public:
    uint8_t ReturnValue[0x1C]; // 0x0000 (0x001C)
};

// Function: Engine.Texture2D.Blueprint_GetSizeY
// Size: 0x0004
struct Texture2D_Blueprint_GetSizeY_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.Texture2D.Blueprint_GetSizeX
// Size: 0x0004
struct Texture2D_Blueprint_GetSizeX_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: Engine.CanvasRenderTarget2D.UpdateResource
// Size: 0x0000
struct CanvasRenderTarget2D_UpdateResource_Params {
public:
};

// Function: Engine.CanvasRenderTarget2D.ReceiveUpdate
// Size: 0x0010
struct CanvasRenderTarget2D_ReceiveUpdate_Params {
public:
    class UObject* Canvas; // 0x0000 (0x0008)
    int32_t Width; // 0x0008 (0x0004)
    int32_t Height; // 0x000C (0x0004)
};

// Function: Engine.CanvasRenderTarget2D.GetSize
// Size: 0x0008
struct CanvasRenderTarget2D_GetSize_Params {
public:
    int32_t Width; // 0x0000 (0x0004)
    int32_t Height; // 0x0004 (0x0004)
};

// Function: Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D
// Size: 0x0020
struct CanvasRenderTarget2D_CreateCanvasRenderTarget2D_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* CanvasRenderTarget2DClass; // 0x0008 (0x0008)
    int32_t Width; // 0x0010 (0x0004)
    int32_t Height; // 0x0014 (0x0004)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

} // namespace SDK

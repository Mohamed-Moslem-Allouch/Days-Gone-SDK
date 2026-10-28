#include "Basic.hpp"
#include "Engine_classes.hpp"
#include "Engine_parameters.hpp"

namespace SDK {

// Function: Engine.Actor.UserConstructionScript
void Actor::UserConstructionScript() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.TearOff
void Actor::TearOff() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.SnapRootComponentTo
void Actor::SnapRootComponentTo(class UObject* InParentActor, struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    Actor_SnapRootComponentTo_Params Parms{};
    Parms.InParentActor = InParentActor;
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetTickGroup
void Actor::SetTickGroup(uint8_t NewTickGroup) {
    static class UFunction* Func = nullptr;
    Actor_SetTickGroup_Params Parms{};
    Parms.NewTickGroup = NewTickGroup;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetTickableWhenPaused
void Actor::SetTickableWhenPaused(bool bTickableWhenPaused) {
    static class UFunction* Func = nullptr;
    Actor_SetTickableWhenPaused_Params Parms{};
    Parms.bTickableWhenPaused = bTickableWhenPaused;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetReplicates
void Actor::SetReplicates(bool bInReplicates) {
    static class UFunction* Func = nullptr;
    Actor_SetReplicates_Params Parms{};
    Parms.bInReplicates = bInReplicates;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetReplicateMovement
void Actor::SetReplicateMovement(bool bInReplicateMovement) {
    static class UFunction* Func = nullptr;
    Actor_SetReplicateMovement_Params Parms{};
    Parms.bInReplicateMovement = bInReplicateMovement;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetOwner
void Actor::SetOwner(class UObject* NewOwner) {
    static class UFunction* Func = nullptr;
    Actor_SetOwner_Params Parms{};
    Parms.NewOwner = NewOwner;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetLifeSpan
void Actor::SetLifeSpan(float InLifespan) {
    static class UFunction* Func = nullptr;
    Actor_SetLifeSpan_Params Parms{};
    Parms.InLifespan = InLifespan;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetActorTickEnabled
void Actor::SetActorTickEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    Actor_SetActorTickEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetActorScale3D
void Actor::SetActorScale3D(uint8_t NewScale3D) {
    static class UFunction* Func = nullptr;
    Actor_SetActorScale3D_Params Parms{};
    Parms.NewScale3D = NewScale3D;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetActorRotation
bool Actor::SetActorRotation(uint8_t NewRotation) {
    static class UFunction* Func = nullptr;
    Actor_SetActorRotation_Params Parms{};
    Parms.NewRotation = NewRotation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.SetActorRelativeScale3D
void Actor::SetActorRelativeScale3D(uint8_t NewRelativeScale) {
    static class UFunction* Func = nullptr;
    Actor_SetActorRelativeScale3D_Params Parms{};
    Parms.NewRelativeScale = NewRelativeScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetActorHiddenInGame
void Actor::SetActorHiddenInGame(bool bNewHidden) {
    static class UFunction* Func = nullptr;
    Actor_SetActorHiddenInGame_Params Parms{};
    Parms.bNewHidden = bNewHidden;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.SetActorEnableCollision
void Actor::SetActorEnableCollision(bool bNewActorEnableCollision) {
    static class UFunction* Func = nullptr;
    Actor_SetActorEnableCollision_Params Parms{};
    Parms.bNewActorEnableCollision = bNewActorEnableCollision;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.RemoveTickPrerequisiteComponent
void Actor::RemoveTickPrerequisiteComponent(class UObject* PrerequisiteComponent) {
    static class UFunction* Func = nullptr;
    Actor_RemoveTickPrerequisiteComponent_Params Parms{};
    Parms.PrerequisiteComponent = PrerequisiteComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.RemoveTickPrerequisiteActor
void Actor::RemoveTickPrerequisiteActor(class UObject* PrerequisiteActor) {
    static class UFunction* Func = nullptr;
    Actor_RemoveTickPrerequisiteActor_Params Parms{};
    Parms.PrerequisiteActor = PrerequisiteActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveTick
void Actor::ReceiveTick(float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveTick_Params Parms{};
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveRadialDamage
void Actor::ReceiveRadialDamage(float DamageReceived, class UObject* DamageType, uint8_t Origin, uint8_t HitInfo, class UObject* InstigatedBy, class UObject* DamageCauser) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveRadialDamage_Params Parms{};
    Parms.DamageReceived = DamageReceived;
    Parms.DamageType = DamageType;
    Parms.Origin = Origin;
    Parms.HitInfo = HitInfo;
    Parms.InstigatedBy = InstigatedBy;
    Parms.DamageCauser = DamageCauser;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceivePreSaveGameLoaded
void Actor::ReceivePreSaveGameLoaded(bool bIsCheckpoint) {
    static class UFunction* Func = nullptr;
    Actor_ReceivePreSaveGameLoaded_Params Parms{};
    Parms.bIsCheckpoint = bIsCheckpoint;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceivePreCheckpointSave
void Actor::ReceivePreCheckpointSave() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceivePostSaveGameLoaded
void Actor::ReceivePostSaveGameLoaded(bool bIsCheckpoint) {
    static class UFunction* Func = nullptr;
    Actor_ReceivePostSaveGameLoaded_Params Parms{};
    Parms.bIsCheckpoint = bIsCheckpoint;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceivePointDamage
void Actor::ReceivePointDamage(float Damage, class UObject* DamageType, uint8_t HitLocation, uint8_t HitNormal, class UObject* HitComponent, struct FName BoneName, uint8_t ShotFromDirection, class UObject* InstigatedBy, class UObject* DamageCauser) {
    static class UFunction* Func = nullptr;
    Actor_ReceivePointDamage_Params Parms{};
    Parms.Damage = Damage;
    Parms.DamageType = DamageType;
    Parms.HitLocation = HitLocation;
    Parms.HitNormal = HitNormal;
    Parms.HitComponent = HitComponent;
    Parms.BoneName = BoneName;
    Parms.ShotFromDirection = ShotFromDirection;
    Parms.InstigatedBy = InstigatedBy;
    Parms.DamageCauser = DamageCauser;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveHit
void Actor::ReceiveHit(class UObject* MyComp, class UObject* Other, class UObject* OtherComp, bool bSelfMoved, uint8_t HitLocation, uint8_t HitNormal, uint8_t NormalImpulse, uint8_t Hit) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveHit_Params Parms{};
    Parms.MyComp = MyComp;
    Parms.Other = Other;
    Parms.OtherComp = OtherComp;
    Parms.bSelfMoved = bSelfMoved;
    Parms.HitLocation = HitLocation;
    Parms.HitNormal = HitNormal;
    Parms.NormalImpulse = NormalImpulse;
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveEndPlay
void Actor::ReceiveEndPlay(uint8_t EndPlayReason) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveEndPlay_Params Parms{};
    Parms.EndPlayReason = EndPlayReason;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveDestroyed
void Actor::ReceiveDestroyed() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveBeginPlay
void Actor::ReceiveBeginPlay() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveAnyDamage
void Actor::ReceiveAnyDamage(float Damage, class UObject* DamageType, class UObject* InstigatedBy, class UObject* DamageCauser) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveAnyDamage_Params Parms{};
    Parms.Damage = Damage;
    Parms.DamageType = DamageType;
    Parms.InstigatedBy = InstigatedBy;
    Parms.DamageCauser = DamageCauser;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorOnReleased
void Actor::ReceiveActorOnReleased() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveActorOnInputTouchLeave
void Actor::ReceiveActorOnInputTouchLeave(uint8_t FingerIndex) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorOnInputTouchLeave_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorOnInputTouchEnter
void Actor::ReceiveActorOnInputTouchEnter(uint8_t FingerIndex) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorOnInputTouchEnter_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorOnInputTouchEnd
void Actor::ReceiveActorOnInputTouchEnd(uint8_t FingerIndex) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorOnInputTouchEnd_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorOnInputTouchBegin
void Actor::ReceiveActorOnInputTouchBegin(uint8_t FingerIndex) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorOnInputTouchBegin_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorOnInputEnabled
void Actor::ReceiveActorOnInputEnabled() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveActorOnInputDisabled
void Actor::ReceiveActorOnInputDisabled() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveActorOnClicked
void Actor::ReceiveActorOnClicked() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveActorEndOverlapComponent
void Actor::ReceiveActorEndOverlapComponent(class UObject* OtherActor, class UObject* OtherComp, int32_t OtherBodyIndex) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorEndOverlapComponent_Params Parms{};
    Parms.OtherActor = OtherActor;
    Parms.OtherComp = OtherComp;
    Parms.OtherBodyIndex = OtherBodyIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorEndOverlap
void Actor::ReceiveActorEndOverlap(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorEndOverlap_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorEndCursorOver
void Actor::ReceiveActorEndCursorOver() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.ReceiveActorBeginOverlapComponent
void Actor::ReceiveActorBeginOverlapComponent(class UObject* OtherActor, class UObject* OtherComp, int32_t OtherBodyIndex) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorBeginOverlapComponent_Params Parms{};
    Parms.OtherActor = OtherActor;
    Parms.OtherComp = OtherComp;
    Parms.OtherBodyIndex = OtherBodyIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorBeginOverlap
void Actor::ReceiveActorBeginOverlap(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_ReceiveActorBeginOverlap_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ReceiveActorBeginCursorOver
void Actor::ReceiveActorBeginCursorOver() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.OnRep_ReplicateMovement
void Actor::OnRep_ReplicateMovement() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.OnRep_ReplicatedMovement
void Actor::OnRep_ReplicatedMovement() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.OnRep_Owner
void Actor::OnRep_Owner() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.OnRep_Instigator
void Actor::OnRep_Instigator() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.OnRep_AttachmentReplication
void Actor::OnRep_AttachmentReplication() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.OnFinishLoad
void Actor::OnFinishLoad(class UClass* Actor) {
    static class UFunction* Func = nullptr;
    Actor_OnFinishLoad_Params Parms{};
    Parms.Actor = Actor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.MakeNoise
void Actor::MakeNoise(float Loudness, class UObject* NoiseInstigator, uint8_t NoiseLocation, float MaxRange, struct FName Tag) {
    static class UFunction* Func = nullptr;
    Actor_MakeNoise_Params Parms{};
    Parms.Loudness = Loudness;
    Parms.NoiseInstigator = NoiseInstigator;
    Parms.NoiseLocation = NoiseLocation;
    Parms.MaxRange = MaxRange;
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.MakeMIDForMaterial
class UObject* Actor::MakeMIDForMaterial(class UObject* Parent) {
    static class UFunction* Func = nullptr;
    Actor_MakeMIDForMaterial_Params Parms{};
    Parms.Parent = Parent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_TeleportTo
bool Actor::K2_TeleportTo(uint8_t DestLocation, uint8_t DestRotation) {
    static class UFunction* Func = nullptr;
    Actor_K2_TeleportTo_Params Parms{};
    Parms.DestLocation = DestLocation;
    Parms.DestRotation = DestRotation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_SetActorTransform
bool Actor::K2_SetActorTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_SetActorTransform_Params Parms{};
    Parms.NewTransform = NewTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_SetActorRelativeTransform
void Actor::K2_SetActorRelativeTransform(uint8_t NewRelativeTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_SetActorRelativeTransform_Params Parms{};
    Parms.NewRelativeTransform = NewRelativeTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_SetActorRelativeRotation
void Actor::K2_SetActorRelativeRotation(uint8_t NewRelativeRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_SetActorRelativeRotation_Params Parms{};
    Parms.NewRelativeRotation = NewRelativeRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_SetActorRelativeLocation
void Actor::K2_SetActorRelativeLocation(uint8_t NewRelativeLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_SetActorRelativeLocation_Params Parms{};
    Parms.NewRelativeLocation = NewRelativeLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_SetActorLocationAndRotation
bool Actor::K2_SetActorLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_SetActorLocationAndRotation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.NewRotation = NewRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_SetActorLocation
bool Actor::K2_SetActorLocation(uint8_t NewLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_SetActorLocation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_OnReset
void Actor::K2_OnReset() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.K2_OnEndViewTarget
void Actor::K2_OnEndViewTarget(class UObject* PC) {
    static class UFunction* Func = nullptr;
    Actor_K2_OnEndViewTarget_Params Parms{};
    Parms.PC = PC;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_OnBecomeViewTarget
void Actor::K2_OnBecomeViewTarget(class UObject* PC) {
    static class UFunction* Func = nullptr;
    Actor_K2_OnBecomeViewTarget_Params Parms{};
    Parms.PC = PC;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_GetRootComponent
class UObject* Actor::K2_GetRootComponent() {
    static class UFunction* Func = nullptr;
    Actor_K2_GetRootComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_GetActorRotation
uint8_t Actor::K2_GetActorRotation() {
    static class UFunction* Func = nullptr;
    Actor_K2_GetActorRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_GetActorLocation
uint8_t Actor::K2_GetActorLocation() {
    static class UFunction* Func = nullptr;
    Actor_K2_GetActorLocation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.K2_DestroyComponent
void Actor::K2_DestroyComponent(class UObject* Component) {
    static class UFunction* Func = nullptr;
    Actor_K2_DestroyComponent_Params Parms{};
    Parms.Component = Component;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_DestroyActor
void Actor::K2_DestroyActor() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.K2_AttachRootComponentToActor
void Actor::K2_AttachRootComponentToActor(class UObject* InParentActor, struct FName InSocketName, uint8_t AttachLocationType, bool bWeldSimulatedBodies) {
    static class UFunction* Func = nullptr;
    Actor_K2_AttachRootComponentToActor_Params Parms{};
    Parms.InParentActor = InParentActor;
    Parms.InSocketName = InSocketName;
    Parms.AttachLocationType = AttachLocationType;
    Parms.bWeldSimulatedBodies = bWeldSimulatedBodies;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AttachRootComponentTo
void Actor::K2_AttachRootComponentTo(class UObject* InParent, struct FName InSocketName, uint8_t AttachLocationType, bool bWeldSimulatedBodies) {
    static class UFunction* Func = nullptr;
    Actor_K2_AttachRootComponentTo_Params Parms{};
    Parms.InParent = InParent;
    Parms.InSocketName = InSocketName;
    Parms.AttachLocationType = AttachLocationType;
    Parms.bWeldSimulatedBodies = bWeldSimulatedBodies;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AddActorWorldTransform
void Actor::K2_AddActorWorldTransform(uint8_t DeltaTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_AddActorWorldTransform_Params Parms{};
    Parms.DeltaTransform = DeltaTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AddActorWorldRotation
void Actor::K2_AddActorWorldRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_AddActorWorldRotation_Params Parms{};
    Parms.DeltaRotation = DeltaRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AddActorWorldOffset
void Actor::K2_AddActorWorldOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_AddActorWorldOffset_Params Parms{};
    Parms.DeltaLocation = DeltaLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AddActorLocalTransform
void Actor::K2_AddActorLocalTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_AddActorLocalTransform_Params Parms{};
    Parms.NewTransform = NewTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AddActorLocalRotation
void Actor::K2_AddActorLocalRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_AddActorLocalRotation_Params Parms{};
    Parms.DeltaRotation = DeltaRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.K2_AddActorLocalOffset
void Actor::K2_AddActorLocalOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    Actor_K2_AddActorLocalOffset_Params Parms{};
    Parms.DeltaLocation = DeltaLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.IsOverlappingActor
bool Actor::IsOverlappingActor(class UObject* Other) {
    static class UFunction* Func = nullptr;
    Actor_IsOverlappingActor_Params Parms{};
    Parms.Other = Other;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.IsLiveSwapActive
bool Actor::IsLiveSwapActive() {
    static class UFunction* Func = nullptr;
    Actor_IsLiveSwapActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.IsChildActor
bool Actor::IsChildActor() {
    static class UFunction* Func = nullptr;
    Actor_IsChildActor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.IsActorTickEnabled
bool Actor::IsActorTickEnabled() {
    static class UFunction* Func = nullptr;
    Actor_IsActorTickEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.IsActorBeingDestroyed
bool Actor::IsActorBeingDestroyed() {
    static class UFunction* Func = nullptr;
    Actor_IsActorBeingDestroyed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.HasAuthority
bool Actor::HasAuthority() {
    static class UFunction* Func = nullptr;
    Actor_HasAuthority_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetVerticalDistanceTo
float Actor::GetVerticalDistanceTo(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_GetVerticalDistanceTo_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetVelocity
uint8_t Actor::GetVelocity() {
    static class UFunction* Func = nullptr;
    Actor_GetVelocity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetTransform
uint8_t Actor::GetTransform() {
    static class UFunction* Func = nullptr;
    Actor_GetTransform_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetTickableWhenPaused
bool Actor::GetTickableWhenPaused() {
    static class UFunction* Func = nullptr;
    Actor_GetTickableWhenPaused_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetSquaredDistanceTo
float Actor::GetSquaredDistanceTo(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_GetSquaredDistanceTo_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetParentComponent
class UObject* Actor::GetParentComponent() {
    static class UFunction* Func = nullptr;
    Actor_GetParentComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetOwner
class UObject* Actor::GetOwner() {
    static class UFunction* Func = nullptr;
    Actor_GetOwner_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetOverlappingComponents
void Actor::GetOverlappingComponents(struct TArray<uint8_t> OverlappingComponents) {
    static class UFunction* Func = nullptr;
    Actor_GetOverlappingComponents_Params Parms{};
    Parms.OverlappingComponents = OverlappingComponents;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.GetOverlappingActors
void Actor::GetOverlappingActors(struct TArray<uint8_t> OverlappingActors, class UClass* ClassFilter) {
    static class UFunction* Func = nullptr;
    Actor_GetOverlappingActors_Params Parms{};
    Parms.OverlappingActors = OverlappingActors;
    Parms.ClassFilter = ClassFilter;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.GetLifeSpan
float Actor::GetLifeSpan() {
    static class UFunction* Func = nullptr;
    Actor_GetLifeSpan_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetInstigatorController
class UObject* Actor::GetInstigatorController() {
    static class UFunction* Func = nullptr;
    Actor_GetInstigatorController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetInstigator
class UObject* Actor::GetInstigator() {
    static class UFunction* Func = nullptr;
    Actor_GetInstigator_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetInputVectorAxisValue
uint8_t Actor::GetInputVectorAxisValue(uint8_t InputAxisKey) {
    static class UFunction* Func = nullptr;
    Actor_GetInputVectorAxisValue_Params Parms{};
    Parms.InputAxisKey = InputAxisKey;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetInputAxisValue
float Actor::GetInputAxisValue(struct FName InputAxisName) {
    static class UFunction* Func = nullptr;
    Actor_GetInputAxisValue_Params Parms{};
    Parms.InputAxisName = InputAxisName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetInputAxisKeyValue
float Actor::GetInputAxisKeyValue(uint8_t InputAxisKey) {
    static class UFunction* Func = nullptr;
    Actor_GetInputAxisKeyValue_Params Parms{};
    Parms.InputAxisKey = InputAxisKey;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetHorizontalDotProductTo
float Actor::GetHorizontalDotProductTo(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_GetHorizontalDotProductTo_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetHorizontalDistanceTo
float Actor::GetHorizontalDistanceTo(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_GetHorizontalDistanceTo_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetDotProductTo
float Actor::GetDotProductTo(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_GetDotProductTo_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetDistanceTo
float Actor::GetDistanceTo(class UObject* OtherActor) {
    static class UFunction* Func = nullptr;
    Actor_GetDistanceTo_Params Parms{};
    Parms.OtherActor = OtherActor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetComponentsByTag
struct TArray<uint8_t> Actor::GetComponentsByTag(class UClass* ComponentClass, struct FName Tag) {
    static class UFunction* Func = nullptr;
    Actor_GetComponentsByTag_Params Parms{};
    Parms.ComponentClass = ComponentClass;
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetComponentsByClass
struct TArray<uint8_t> Actor::GetComponentsByClass(class UClass* ComponentClass) {
    static class UFunction* Func = nullptr;
    Actor_GetComponentsByClass_Params Parms{};
    Parms.ComponentClass = ComponentClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetComponentByClass
class UObject* Actor::GetComponentByClass(class UClass* ComponentClass) {
    static class UFunction* Func = nullptr;
    Actor_GetComponentByClass_Params Parms{};
    Parms.ComponentClass = ComponentClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetAttachedActors
void Actor::GetAttachedActors(struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    Actor_GetAttachedActors_Params Parms{};
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.GetActorUpVector
uint8_t Actor::GetActorUpVector() {
    static class UFunction* Func = nullptr;
    Actor_GetActorUpVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorTimeDilation
float Actor::GetActorTimeDilation() {
    static class UFunction* Func = nullptr;
    Actor_GetActorTimeDilation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorScale3D
uint8_t Actor::GetActorScale3D() {
    static class UFunction* Func = nullptr;
    Actor_GetActorScale3D_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorRightVector
uint8_t Actor::GetActorRightVector() {
    static class UFunction* Func = nullptr;
    Actor_GetActorRightVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorRelativeScale3D
uint8_t Actor::GetActorRelativeScale3D() {
    static class UFunction* Func = nullptr;
    Actor_GetActorRelativeScale3D_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorForwardVector
uint8_t Actor::GetActorForwardVector() {
    static class UFunction* Func = nullptr;
    Actor_GetActorForwardVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorEyesViewPoint
void Actor::GetActorEyesViewPoint(uint8_t OutLocation, uint8_t OutRotation) {
    static class UFunction* Func = nullptr;
    Actor_GetActorEyesViewPoint_Params Parms{};
    Parms.OutLocation = OutLocation;
    Parms.OutRotation = OutRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.GetActorEnableCollision
bool Actor::GetActorEnableCollision() {
    static class UFunction* Func = nullptr;
    Actor_GetActorEnableCollision_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.GetActorBounds
void Actor::GetActorBounds(bool bOnlyCollidingComponents, uint8_t Origin, uint8_t BoxExtent) {
    static class UFunction* Func = nullptr;
    Actor_GetActorBounds_Params Parms{};
    Parms.bOnlyCollidingComponents = bOnlyCollidingComponents;
    Parms.Origin = Origin;
    Parms.BoxExtent = BoxExtent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.ForceNetUpdate
void Actor::ForceNetUpdate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.FlushNetDormancy
void Actor::FlushNetDormancy() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Actor.EnableInput
void Actor::EnableInput(class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    Actor_EnableInput_Params Parms{};
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.DisableInput
void Actor::DisableInput(class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    Actor_DisableInput_Params Parms{};
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.DetachRootComponentFromParent
void Actor::DetachRootComponentFromParent(bool bMaintainWorldPosition) {
    static class UFunction* Func = nullptr;
    Actor_DetachRootComponentFromParent_Params Parms{};
    Parms.bMaintainWorldPosition = bMaintainWorldPosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.AddTickPrerequisiteComponent
void Actor::AddTickPrerequisiteComponent(class UObject* PrerequisiteComponent) {
    static class UFunction* Func = nullptr;
    Actor_AddTickPrerequisiteComponent_Params Parms{};
    Parms.PrerequisiteComponent = PrerequisiteComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.AddTickPrerequisiteActor
void Actor::AddTickPrerequisiteActor(class UObject* PrerequisiteActor) {
    static class UFunction* Func = nullptr;
    Actor_AddTickPrerequisiteActor_Params Parms{};
    Parms.PrerequisiteActor = PrerequisiteActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Actor.AddComponent
class UObject* Actor::AddComponent(struct FName TemplateName, bool bManualAttachment, uint8_t RelativeTransform, class UObject* ComponentTemplateContext) {
    static class UFunction* Func = nullptr;
    Actor_AddComponent_Params Parms{};
    Parms.TemplateName = TemplateName;
    Parms.bManualAttachment = bManualAttachment;
    Parms.RelativeTransform = RelativeTransform;
    Parms.ComponentTemplateContext = ComponentTemplateContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Actor.ActorHasTag
bool Actor::ActorHasTag(struct FName Tag) {
    static class UFunction* Func = nullptr;
    Actor_ActorHasTag_Params Parms{};
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ActorComponent.ToggleActive
void ActorComponent::ToggleActive() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ActorComponent.SetTickGroup
void ActorComponent::SetTickGroup(uint8_t NewTickGroup) {
    static class UFunction* Func = nullptr;
    ActorComponent_SetTickGroup_Params Parms{};
    Parms.NewTickGroup = NewTickGroup;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.SetTickableWhenPaused
void ActorComponent::SetTickableWhenPaused(bool bTickableWhenPaused) {
    static class UFunction* Func = nullptr;
    ActorComponent_SetTickableWhenPaused_Params Parms{};
    Parms.bTickableWhenPaused = bTickableWhenPaused;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.SetIsReplicated
void ActorComponent::SetIsReplicated(bool ShouldReplicate) {
    static class UFunction* Func = nullptr;
    ActorComponent_SetIsReplicated_Params Parms{};
    Parms.ShouldReplicate = ShouldReplicate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.SetComponentTickEnabled
void ActorComponent::SetComponentTickEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    ActorComponent_SetComponentTickEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.SetActive
void ActorComponent::SetActive(bool bNewActive, bool bReset) {
    static class UFunction* Func = nullptr;
    ActorComponent_SetActive_Params Parms{};
    Parms.bNewActive = bNewActive;
    Parms.bReset = bReset;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.RemoveTickPrerequisiteComponent
void ActorComponent::RemoveTickPrerequisiteComponent(class UObject* PrerequisiteComponent) {
    static class UFunction* Func = nullptr;
    ActorComponent_RemoveTickPrerequisiteComponent_Params Parms{};
    Parms.PrerequisiteComponent = PrerequisiteComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.RemoveTickPrerequisiteActor
void ActorComponent::RemoveTickPrerequisiteActor(class UObject* PrerequisiteActor) {
    static class UFunction* Func = nullptr;
    ActorComponent_RemoveTickPrerequisiteActor_Params Parms{};
    Parms.PrerequisiteActor = PrerequisiteActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.ReceiveTick
void ActorComponent::ReceiveTick(float DeltaSeconds) {
    static class UFunction* Func = nullptr;
    ActorComponent_ReceiveTick_Params Parms{};
    Parms.DeltaSeconds = DeltaSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.ReceiveEndPlay
void ActorComponent::ReceiveEndPlay(uint8_t EndPlayReason) {
    static class UFunction* Func = nullptr;
    ActorComponent_ReceiveEndPlay_Params Parms{};
    Parms.EndPlayReason = EndPlayReason;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.ReceiveBeginPlay
void ActorComponent::ReceiveBeginPlay() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ActorComponent.OnRep_IsActive
void ActorComponent::OnRep_IsActive() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ActorComponent.K2_DestroyComponent
void ActorComponent::K2_DestroyComponent(class UObject* Object) {
    static class UFunction* Func = nullptr;
    ActorComponent_K2_DestroyComponent_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.IsComponentTickEnabled
bool ActorComponent::IsComponentTickEnabled() {
    static class UFunction* Func = nullptr;
    ActorComponent_IsComponentTickEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ActorComponent.IsBeingDestroyed
bool ActorComponent::IsBeingDestroyed() {
    static class UFunction* Func = nullptr;
    ActorComponent_IsBeingDestroyed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ActorComponent.IsActive
bool ActorComponent::IsActive() {
    static class UFunction* Func = nullptr;
    ActorComponent_IsActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ActorComponent.GetOwner
class UObject* ActorComponent::GetOwner() {
    static class UFunction* Func = nullptr;
    ActorComponent_GetOwner_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ActorComponent.Deactivate
void ActorComponent::Deactivate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ActorComponent.ComponentHasTag
bool ActorComponent::ComponentHasTag(struct FName Tag) {
    static class UFunction* Func = nullptr;
    ActorComponent_ComponentHasTag_Params Parms{};
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ActorComponent.AddTickPrerequisiteComponent
void ActorComponent::AddTickPrerequisiteComponent(class UObject* PrerequisiteComponent) {
    static class UFunction* Func = nullptr;
    ActorComponent_AddTickPrerequisiteComponent_Params Parms{};
    Parms.PrerequisiteComponent = PrerequisiteComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.AddTickPrerequisiteActor
void ActorComponent::AddTickPrerequisiteActor(class UObject* PrerequisiteActor) {
    static class UFunction* Func = nullptr;
    ActorComponent_AddTickPrerequisiteActor_Params Parms{};
    Parms.PrerequisiteActor = PrerequisiteActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ActorComponent.Activate
void ActorComponent::Activate(bool bReset) {
    static class UFunction* Func = nullptr;
    ActorComponent_Activate_Params Parms{};
    Parms.bReset = bReset;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.ToggleVisibility
void SceneComponent::ToggleVisibility(bool bPropagateToChildren) {
    static class UFunction* Func = nullptr;
    SceneComponent_ToggleVisibility_Params Parms{};
    Parms.bPropagateToChildren = bPropagateToChildren;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.SnapTo
void SceneComponent::SnapTo(class UObject* InParent, struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_SnapTo_Params Parms{};
    Parms.InParent = InParent;
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.SetWorldScale3D
void SceneComponent::SetWorldScale3D(uint8_t NewScale) {
    static class UFunction* Func = nullptr;
    SceneComponent_SetWorldScale3D_Params Parms{};
    Parms.NewScale = NewScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.SetVisibility
void SceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
    static class UFunction* Func = nullptr;
    SceneComponent_SetVisibility_Params Parms{};
    Parms.bNewVisibility = bNewVisibility;
    Parms.bPropagateToChildren = bPropagateToChildren;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.SetRelativeScale3D
void SceneComponent::SetRelativeScale3D(uint8_t NewScale3D) {
    static class UFunction* Func = nullptr;
    SceneComponent_SetRelativeScale3D_Params Parms{};
    Parms.NewScale3D = NewScale3D;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.SetHiddenInGame
void SceneComponent::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren) {
    static class UFunction* Func = nullptr;
    SceneComponent_SetHiddenInGame_Params Parms{};
    Parms.NewHidden = NewHidden;
    Parms.bPropagateToChildren = bPropagateToChildren;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.SetAbsolute
void SceneComponent::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
    static class UFunction* Func = nullptr;
    SceneComponent_SetAbsolute_Params Parms{};
    Parms.bNewAbsoluteLocation = bNewAbsoluteLocation;
    Parms.bNewAbsoluteRotation = bNewAbsoluteRotation;
    Parms.bNewAbsoluteScale = bNewAbsoluteScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.ResetRelativeTransform
void SceneComponent::ResetRelativeTransform() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SceneComponent.OnRep_Visibility
void SceneComponent::OnRep_Visibility(bool OldValue) {
    static class UFunction* Func = nullptr;
    SceneComponent_OnRep_Visibility_Params Parms{};
    Parms.OldValue = OldValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.OnRep_Transform
void SceneComponent::OnRep_Transform() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SceneComponent.OnRep_AttachSocketName
void SceneComponent::OnRep_AttachSocketName() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SceneComponent.OnRep_AttachParent
void SceneComponent::OnRep_AttachParent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SceneComponent.K2_SetWorldTransform
void SceneComponent::K2_SetWorldTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetWorldTransform_Params Parms{};
    Parms.NewTransform = NewTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetWorldRotation
void SceneComponent::K2_SetWorldRotation(uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetWorldRotation_Params Parms{};
    Parms.NewRotation = NewRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetWorldLocationAndRotation
void SceneComponent::K2_SetWorldLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetWorldLocationAndRotation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.NewRotation = NewRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetWorldLocation
void SceneComponent::K2_SetWorldLocation(uint8_t NewLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetWorldLocation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetRelativeTransform
void SceneComponent::K2_SetRelativeTransform(uint8_t NewTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetRelativeTransform_Params Parms{};
    Parms.NewTransform = NewTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetRelativeRotation
void SceneComponent::K2_SetRelativeRotation(uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetRelativeRotation_Params Parms{};
    Parms.NewRotation = NewRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetRelativeLocationAndRotation
void SceneComponent::K2_SetRelativeLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetRelativeLocationAndRotation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.NewRotation = NewRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_SetRelativeLocation
void SceneComponent::K2_SetRelativeLocation(uint8_t NewLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_SetRelativeLocation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_GetComponentToWorld
uint8_t SceneComponent::K2_GetComponentToWorld() {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_GetComponentToWorld_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.K2_GetComponentScale
uint8_t SceneComponent::K2_GetComponentScale() {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_GetComponentScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.K2_GetComponentRotation
uint8_t SceneComponent::K2_GetComponentRotation() {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_GetComponentRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.K2_GetComponentLocation
uint8_t SceneComponent::K2_GetComponentLocation() {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_GetComponentLocation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.K2_AttachTo
void SceneComponent::K2_AttachTo(class UObject* InParent, struct FName InSocketName, uint8_t AttachType, bool bWeldSimulatedBodies) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AttachTo_Params Parms{};
    Parms.InParent = InParent;
    Parms.InSocketName = InSocketName;
    Parms.AttachType = AttachType;
    Parms.bWeldSimulatedBodies = bWeldSimulatedBodies;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddWorldTransform
void SceneComponent::K2_AddWorldTransform(uint8_t DeltaTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddWorldTransform_Params Parms{};
    Parms.DeltaTransform = DeltaTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddWorldRotation
void SceneComponent::K2_AddWorldRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddWorldRotation_Params Parms{};
    Parms.DeltaRotation = DeltaRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddWorldOffset
void SceneComponent::K2_AddWorldOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddWorldOffset_Params Parms{};
    Parms.DeltaLocation = DeltaLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddRelativeRotation
void SceneComponent::K2_AddRelativeRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddRelativeRotation_Params Parms{};
    Parms.DeltaRotation = DeltaRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddRelativeLocation
void SceneComponent::K2_AddRelativeLocation(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddRelativeLocation_Params Parms{};
    Parms.DeltaLocation = DeltaLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddLocalTransform
void SceneComponent::K2_AddLocalTransform(uint8_t DeltaTransform, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddLocalTransform_Params Parms{};
    Parms.DeltaTransform = DeltaTransform;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddLocalRotation
void SceneComponent::K2_AddLocalRotation(uint8_t DeltaRotation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddLocalRotation_Params Parms{};
    Parms.DeltaRotation = DeltaRotation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.K2_AddLocalOffset
void SceneComponent::K2_AddLocalOffset(uint8_t DeltaLocation, bool bSweep, uint8_t SweepHitResult, bool bTeleport) {
    static class UFunction* Func = nullptr;
    SceneComponent_K2_AddLocalOffset_Params Parms{};
    Parms.DeltaLocation = DeltaLocation;
    Parms.bSweep = bSweep;
    Parms.SweepHitResult = SweepHitResult;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.IsVisible
bool SceneComponent::IsVisible() {
    static class UFunction* Func = nullptr;
    SceneComponent_IsVisible_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.IsSimulatingPhysics
bool SceneComponent::IsSimulatingPhysics(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    SceneComponent_IsSimulatingPhysics_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.IsAnySimulatingPhysics
bool SceneComponent::IsAnySimulatingPhysics() {
    static class UFunction* Func = nullptr;
    SceneComponent_IsAnySimulatingPhysics_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetUpVector
uint8_t SceneComponent::GetUpVector() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetUpVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetSocketTransform
uint8_t SceneComponent::GetSocketTransform(struct FName InSocketName, uint8_t TransformSpace) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetSocketTransform_Params Parms{};
    Parms.InSocketName = InSocketName;
    Parms.TransformSpace = TransformSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetSocketTagString
struct FString SceneComponent::GetSocketTagString(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetSocketTagString_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetSocketRotation
uint8_t SceneComponent::GetSocketRotation(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetSocketRotation_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetSocketQuaternion
uint8_t SceneComponent::GetSocketQuaternion(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetSocketQuaternion_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetSocketPopTags
struct TArray<uint8_t> SceneComponent::GetSocketPopTags(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetSocketPopTags_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetSocketLocation
uint8_t SceneComponent::GetSocketLocation(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetSocketLocation_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetRightVector
uint8_t SceneComponent::GetRightVector() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetRightVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetRelativeTransform
uint8_t SceneComponent::GetRelativeTransform() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetRelativeTransform_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetPhysicsVolume
class UObject* SceneComponent::GetPhysicsVolume() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetPhysicsVolume_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetParentComponents
void SceneComponent::GetParentComponents(struct TArray<uint8_t> Parents) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetParentComponents_Params Parms{};
    Parms.Parents = Parents;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.GetNumChildrenComponents
int32_t SceneComponent::GetNumChildrenComponents() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetNumChildrenComponents_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetForwardVector
uint8_t SceneComponent::GetForwardVector() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetForwardVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetComponentVelocity
uint8_t SceneComponent::GetComponentVelocity() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetComponentVelocity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetChildrenComponents
void SceneComponent::GetChildrenComponents(bool bIncludeAllDescendants, struct TArray<uint8_t> Children) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetChildrenComponents_Params Parms{};
    Parms.bIncludeAllDescendants = bIncludeAllDescendants;
    Parms.Children = Children;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneComponent.GetChildComponent
class UObject* SceneComponent::GetChildComponent(int32_t ChildIndex) {
    static class UFunction* Func = nullptr;
    SceneComponent_GetChildComponent_Params Parms{};
    Parms.ChildIndex = ChildIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetAttachSocketName
struct FName SceneComponent::GetAttachSocketName() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetAttachSocketName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetAttachParent
class UObject* SceneComponent::GetAttachParent() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetAttachParent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.GetAllSocketNames
struct TArray<uint8_t> SceneComponent::GetAllSocketNames() {
    static class UFunction* Func = nullptr;
    SceneComponent_GetAllSocketNames_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.DoesSocketExist
bool SceneComponent::DoesSocketExist(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SceneComponent_DoesSocketExist_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SceneComponent.DetachFromParent
void SceneComponent::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) {
    static class UFunction* Func = nullptr;
    SceneComponent_DetachFromParent_Params Parms{};
    Parms.bMaintainWorldPosition = bMaintainWorldPosition;
    Parms.bCallModify = bCallModify;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavLinkProxy.SetSmartLinkEnabled
void NavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    NavLinkProxy_SetSmartLinkEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavLinkProxy.ResumePathFollowing
void NavLinkProxy::ResumePathFollowing(class UObject* Agent) {
    static class UFunction* Func = nullptr;
    NavLinkProxy_ResumePathFollowing_Params Parms{};
    Parms.Agent = Agent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavLinkProxy.ReceiveSmartLinkReached
void NavLinkProxy::ReceiveSmartLinkReached(class UObject* Agent, uint8_t Destination) {
    static class UFunction* Func = nullptr;
    NavLinkProxy_ReceiveSmartLinkReached_Params Parms{};
    Parms.Agent = Agent;
    Parms.Destination = Destination;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavLinkProxy.IsSmartLinkEnabled
bool NavLinkProxy::IsSmartLinkEnabled() {
    static class UFunction* Func = nullptr;
    NavLinkProxy_IsSmartLinkEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavLinkProxy.HasMovingAgents
bool NavLinkProxy::HasMovingAgents() {
    static class UFunction* Func = nullptr;
    NavLinkProxy_HasMovingAgents_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotifyState.Received_NotifyTick
bool AnimNotifyState::Received_NotifyTick(class UObject* MeshComp, class UObject* Animation, float FrameDeltaTime) {
    static class UFunction* Func = nullptr;
    AnimNotifyState_Received_NotifyTick_Params Parms{};
    Parms.MeshComp = MeshComp;
    Parms.Animation = Animation;
    Parms.FrameDeltaTime = FrameDeltaTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotifyState.Received_NotifyEnd
bool AnimNotifyState::Received_NotifyEnd(class UObject* MeshComp, class UObject* Animation) {
    static class UFunction* Func = nullptr;
    AnimNotifyState_Received_NotifyEnd_Params Parms{};
    Parms.MeshComp = MeshComp;
    Parms.Animation = Animation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotifyState.Received_NotifyBegin
bool AnimNotifyState::Received_NotifyBegin(class UObject* MeshComp, class UObject* Animation, float TotalDuration) {
    static class UFunction* Func = nullptr;
    AnimNotifyState_Received_NotifyBegin_Params Parms{};
    Parms.MeshComp = MeshComp;
    Parms.Animation = Animation;
    Parms.TotalDuration = TotalDuration;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotifyState.GetNotifyName
struct FString AnimNotifyState::GetNotifyName() {
    static class UFunction* Func = nullptr;
    AnimNotifyState_GetNotifyName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelScriptActor.WorldOriginLocationChanged
void LevelScriptActor::WorldOriginLocationChanged(uint8_t OldOriginLocation, uint8_t NewOriginLocation) {
    static class UFunction* Func = nullptr;
    LevelScriptActor_WorldOriginLocationChanged_Params Parms{};
    Parms.OldOriginLocation = OldOriginLocation;
    Parms.NewOriginLocation = NewOriginLocation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LevelScriptActor.SetCinematicMode
void LevelScriptActor::SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
    static class UFunction* Func = nullptr;
    LevelScriptActor_SetCinematicMode_Params Parms{};
    Parms.bCinematicMode = bCinematicMode;
    Parms.bHidePlayer = bHidePlayer;
    Parms.bAffectsHUD = bAffectsHUD;
    Parms.bAffectsMovement = bAffectsMovement;
    Parms.bAffectsTurning = bAffectsTurning;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LevelScriptActor.RemoteEvent
bool LevelScriptActor::RemoteEvent(struct FName EventName) {
    static class UFunction* Func = nullptr;
    LevelScriptActor_RemoteEvent_Params Parms{};
    Parms.EventName = EventName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelScriptActor.LevelReset
void LevelScriptActor::LevelReset() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.LevelScriptActor.GetNumTicksOfEndPlay
float LevelScriptActor::GetNumTicksOfEndPlay() {
    static class UFunction* Func = nullptr;
    LevelScriptActor_GetNumTicksOfEndPlay_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelScriptActor.GetCurrentNumTicks
float LevelScriptActor::GetCurrentNumTicks() {
    static class UFunction* Func = nullptr;
    LevelScriptActor_GetCurrentNumTicks_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.WakeRigidBody
void PrimitiveComponent::WakeRigidBody(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_WakeRigidBody_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.WakeAllRigidBodies
void PrimitiveComponent::WakeAllRigidBodies() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PrimitiveComponent.SetWalkableSlopeOverride
void PrimitiveComponent::SetWalkableSlopeOverride(uint8_t NewOverride) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetWalkableSlopeOverride_Params Parms{};
    Parms.NewOverride = NewOverride;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetTranslucentSortPriority
void PrimitiveComponent::SetTranslucentSortPriority(int32_t NewTranslucentSortPriority) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetTranslucentSortPriority_Params Parms{};
    Parms.NewTranslucentSortPriority = NewTranslucentSortPriority;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetSimulatePhysics
void PrimitiveComponent::SetSimulatePhysics(bool bSimulate) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetSimulatePhysics_Params Parms{};
    Parms.bSimulate = bSimulate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetRenderInMainPass
void PrimitiveComponent::SetRenderInMainPass(bool bValue) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetRenderInMainPass_Params Parms{};
    Parms.bValue = bValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetRenderCustomDepth
void PrimitiveComponent::SetRenderCustomDepth(bool bValue) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetRenderCustomDepth_Params Parms{};
    Parms.bValue = bValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetReceivesDecals
void PrimitiveComponent::SetReceivesDecals(bool bNewReceivesDecals) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetReceivesDecals_Params Parms{};
    Parms.bNewReceivesDecals = bNewReceivesDecals;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetPhysMaterialOverride
void PrimitiveComponent::SetPhysMaterialOverride(class UObject* NewPhysMaterial) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetPhysMaterialOverride_Params Parms{};
    Parms.NewPhysMaterial = NewPhysMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
void PrimitiveComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetPhysicsMaxAngularVelocity_Params Parms{};
    Parms.NewMaxAngVel = NewMaxAngVel;
    Parms.bAddToCurrent = bAddToCurrent;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetPhysicsLinearVelocity
void PrimitiveComponent::SetPhysicsLinearVelocity(uint8_t NewVel, bool bAddToCurrent, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetPhysicsLinearVelocity_Params Parms{};
    Parms.NewVel = NewVel;
    Parms.bAddToCurrent = bAddToCurrent;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetPhysicsAngularVelocity
void PrimitiveComponent::SetPhysicsAngularVelocity(uint8_t NewAngVel, bool bAddToCurrent, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetPhysicsAngularVelocity_Params Parms{};
    Parms.NewAngVel = NewAngVel;
    Parms.bAddToCurrent = bAddToCurrent;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetOwnerNoSee
void PrimitiveComponent::SetOwnerNoSee(bool bNewOwnerNoSee) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetOwnerNoSee_Params Parms{};
    Parms.bNewOwnerNoSee = bNewOwnerNoSee;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetOnlyOwnerSee
void PrimitiveComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetOnlyOwnerSee_Params Parms{};
    Parms.bNewOnlyOwnerSee = bNewOnlyOwnerSee;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
void PrimitiveComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetNotifyRigidBodyCollision_Params Parms{};
    Parms.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetMaterial
void PrimitiveComponent::SetMaterial(int32_t ElementIndex, class UObject* Material) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetMaterial_Params Parms{};
    Parms.ElementIndex = ElementIndex;
    Parms.Material = Material;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetMassScale
void PrimitiveComponent::SetMassScale(struct FName BoneName, float InMassScale) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetMassScale_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InMassScale = InMassScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetMassOverrideInKg
void PrimitiveComponent::SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetMassOverrideInKg_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.MassInKg = MassInKg;
    Parms.bOverrideMass = bOverrideMass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetLockedAxis
void PrimitiveComponent::SetLockedAxis(uint8_t LockedAxis) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetLockedAxis_Params Parms{};
    Parms.LockedAxis = LockedAxis;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetLinearDamping
void PrimitiveComponent::SetLinearDamping(float InDamping) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetLinearDamping_Params Parms{};
    Parms.InDamping = InDamping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetEnableOpaqueEmissiveLighting
void PrimitiveComponent::SetEnableOpaqueEmissiveLighting(bool InValue) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetEnableOpaqueEmissiveLighting_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetEnableGravity
void PrimitiveComponent::SetEnableGravity(bool bGravityEnabled) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetEnableGravity_Params Parms{};
    Parms.bGravityEnabled = bGravityEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCustomDepthStencilValue
void PrimitiveComponent::SetCustomDepthStencilValue(int32_t Value) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCustomDepthStencilValue_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCullDistance
void PrimitiveComponent::SetCullDistance(float NewCullDistance) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCullDistance_Params Parms{};
    Parms.NewCullDistance = NewCullDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetConstraintMode
void PrimitiveComponent::SetConstraintMode(uint8_t ConstraintMode) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetConstraintMode_Params Parms{};
    Parms.ConstraintMode = ConstraintMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCollisionResponseToChannel
void PrimitiveComponent::SetCollisionResponseToChannel(uint8_t Channel, uint8_t NewResponse) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCollisionResponseToChannel_Params Parms{};
    Parms.Channel = Channel;
    Parms.NewResponse = NewResponse;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
void PrimitiveComponent::SetCollisionResponseToAllChannels(uint8_t NewResponse) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCollisionResponseToAllChannels_Params Parms{};
    Parms.NewResponse = NewResponse;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCollisionProfileName
void PrimitiveComponent::SetCollisionProfileName(struct FName InCollisionProfileName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCollisionProfileName_Params Parms{};
    Parms.InCollisionProfileName = InCollisionProfileName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCollisionObjectType
void PrimitiveComponent::SetCollisionObjectType(uint8_t Channel) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCollisionObjectType_Params Parms{};
    Parms.Channel = Channel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCollisionEnabled
void PrimitiveComponent::SetCollisionEnabled(uint8_t NewType) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCollisionEnabled_Params Parms{};
    Parms.NewType = NewType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCenterOfMass
void PrimitiveComponent::SetCenterOfMass(uint8_t CenterOfMassOffset, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCenterOfMass_Params Parms{};
    Parms.CenterOfMassOffset = CenterOfMassOffset;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetCastShadow
void PrimitiveComponent::SetCastShadow(bool NewCastShadow) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetCastShadow_Params Parms{};
    Parms.NewCastShadow = NewCastShadow;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetBoundsScale
void PrimitiveComponent::SetBoundsScale(float NewBoundsScale) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetBoundsScale_Params Parms{};
    Parms.NewBoundsScale = NewBoundsScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetBendShadowCastingCategory
void PrimitiveComponent::SetBendShadowCastingCategory(uint8_t inBendShadowCastingCategory) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetBendShadowCastingCategory_Params Parms{};
    Parms.inBendShadowCastingCategory = inBendShadowCastingCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetAngularDamping
void PrimitiveComponent::SetAngularDamping(float InDamping) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetAngularDamping_Params Parms{};
    Parms.InDamping = InDamping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
void PrimitiveComponent::SetAllPhysicsLinearVelocity(uint8_t NewVel, bool bAddToCurrent) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetAllPhysicsLinearVelocity_Params Parms{};
    Parms.NewVel = NewVel;
    Parms.bAddToCurrent = bAddToCurrent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.SetAllMassScale
void PrimitiveComponent::SetAllMassScale(float InMassScale) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_SetAllMassScale_Params Parms{};
    Parms.InMassScale = InMassScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.ScaleByMomentOfInertia
uint8_t PrimitiveComponent::ScaleByMomentOfInertia(uint8_t InputVector, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_ScaleByMomentOfInertia_Params Parms{};
    Parms.InputVector = InputVector;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.PutRigidBodyToSleep
void PrimitiveComponent::PutRigidBodyToSleep(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_PutRigidBodyToSleep_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.K2_LineTraceComponent
bool PrimitiveComponent::K2_LineTraceComponent(uint8_t TraceStart, uint8_t TraceEnd, bool bTraceComplex, bool bShowTrace, uint8_t HitLocation, uint8_t HitNormal, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_K2_LineTraceComponent_Params Parms{};
    Parms.TraceStart = TraceStart;
    Parms.TraceEnd = TraceEnd;
    Parms.bTraceComplex = bTraceComplex;
    Parms.bShowTrace = bShowTrace;
    Parms.HitLocation = HitLocation;
    Parms.HitNormal = HitNormal;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.IsOverlappingComponent
bool PrimitiveComponent::IsOverlappingComponent(class UObject* OtherComp) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_IsOverlappingComponent_Params Parms{};
    Parms.OtherComp = OtherComp;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.IsOverlappingActor
bool PrimitiveComponent::IsOverlappingActor(class UObject* Other) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_IsOverlappingActor_Params Parms{};
    Parms.Other = Other;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.IsGravityEnabled
bool PrimitiveComponent::IsGravityEnabled() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_IsGravityEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.IgnoreComponentWhenMoving
void PrimitiveComponent::IgnoreComponentWhenMoving(class UObject* Component, bool bShouldIgnore) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_IgnoreComponentWhenMoving_Params Parms{};
    Parms.Component = Component;
    Parms.bShouldIgnore = bShouldIgnore;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.IgnoreActorWhenMoving
void PrimitiveComponent::IgnoreActorWhenMoving(class UObject* Actor, bool bShouldIgnore) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_IgnoreActorWhenMoving_Params Parms{};
    Parms.Actor = Actor;
    Parms.bShouldIgnore = bShouldIgnore;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.HasSimpleCollision
bool PrimitiveComponent::HasSimpleCollision() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_HasSimpleCollision_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetWalkableSlopeOverride
uint8_t PrimitiveComponent::GetWalkableSlopeOverride() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetWalkableSlopeOverride_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
uint8_t PrimitiveComponent::GetPhysicsLinearVelocityAtPoint(uint8_t Point, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetPhysicsLinearVelocityAtPoint_Params Parms{};
    Parms.Point = Point;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetPhysicsLinearVelocity
uint8_t PrimitiveComponent::GetPhysicsLinearVelocity(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetPhysicsLinearVelocity_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetPhysicsAngularVelocity
uint8_t PrimitiveComponent::GetPhysicsAngularVelocity(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetPhysicsAngularVelocity_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetOverlappingComponents
void PrimitiveComponent::GetOverlappingComponents(struct TArray<uint8_t> InOverlappingComponents) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetOverlappingComponents_Params Parms{};
    Parms.InOverlappingComponents = InOverlappingComponents;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.GetOverlappingActors
void PrimitiveComponent::GetOverlappingActors(struct TArray<uint8_t> OverlappingActors, class UClass* ClassFilter) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetOverlappingActors_Params Parms{};
    Parms.OverlappingActors = OverlappingActors;
    Parms.ClassFilter = ClassFilter;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.GetOverlapInfos
struct TArray<uint8_t> PrimitiveComponent::GetOverlapInfos() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetOverlapInfos_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetNumMaterials
int32_t PrimitiveComponent::GetNumMaterials() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetNumMaterials_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetMinScreenSize
float PrimitiveComponent::GetMinScreenSize() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetMinScreenSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetMaxDrawDistance
float PrimitiveComponent::GetMaxDrawDistance() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetMaxDrawDistance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetMaterial
class UObject* PrimitiveComponent::GetMaterial(int32_t ElementIndex) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetMaterial_Params Parms{};
    Parms.ElementIndex = ElementIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetMassScale
float PrimitiveComponent::GetMassScale(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetMassScale_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetMass
float PrimitiveComponent::GetMass() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetMass_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetLinearDamping
float PrimitiveComponent::GetLinearDamping() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetLinearDamping_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetInertiaTensor
uint8_t PrimitiveComponent::GetInertiaTensor(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetInertiaTensor_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetCollisionResponseToChannel
uint8_t PrimitiveComponent::GetCollisionResponseToChannel(uint8_t Channel) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetCollisionResponseToChannel_Params Parms{};
    Parms.Channel = Channel;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetCollisionProfileName
struct FName PrimitiveComponent::GetCollisionProfileName() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetCollisionProfileName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetCollisionObjectType
uint8_t PrimitiveComponent::GetCollisionObjectType() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetCollisionObjectType_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetClosestPointOnCollision
float PrimitiveComponent::GetClosestPointOnCollision(uint8_t Point, uint8_t OutPointOnBody, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetClosestPointOnCollision_Params Parms{};
    Parms.Point = Point;
    Parms.OutPointOnBody = OutPointOnBody;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetCenterOfMass
uint8_t PrimitiveComponent::GetCenterOfMass(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetCenterOfMass_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.GetAngularDamping
float PrimitiveComponent::GetAngularDamping() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_GetAngularDamping_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.CreateDynamicMaterialInstance
class UObject* PrimitiveComponent::CreateDynamicMaterialInstance(int32_t ElementIndex, class UObject* SourceMaterial) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_CreateDynamicMaterialInstance_Params Parms{};
    Parms.ElementIndex = ElementIndex;
    Parms.SourceMaterial = SourceMaterial;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
class UObject* PrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, class UObject* Parent) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params Parms{};
    Parms.ElementIndex = ElementIndex;
    Parms.Parent = Parent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
class UObject* PrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Params Parms{};
    Parms.ElementIndex = ElementIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct TArray<uint8_t> PrimitiveComponent::CopyArrayOfMoveIgnoreActors() {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_CopyArrayOfMoveIgnoreActors_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.ClearMoveIgnoreComponents
void PrimitiveComponent::ClearMoveIgnoreComponents() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PrimitiveComponent.ClearMoveIgnoreActors
void PrimitiveComponent::ClearMoveIgnoreActors() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PrimitiveComponent.CanCharacterStepUp
bool PrimitiveComponent::CanCharacterStepUp(class UObject* Pawn) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_CanCharacterStepUp_Params Parms{};
    Parms.Pawn = Pawn;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PrimitiveComponent.AddTorque
void PrimitiveComponent::AddTorque(uint8_t Torque, struct FName BoneName, bool bAccelChange) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddTorque_Params Parms{};
    Parms.Torque = Torque;
    Parms.BoneName = BoneName;
    Parms.bAccelChange = bAccelChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddRadialImpulse
void PrimitiveComponent::AddRadialImpulse(uint8_t Origin, float Radius, float Strength, uint8_t Falloff, bool bVelChange) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddRadialImpulse_Params Parms{};
    Parms.Origin = Origin;
    Parms.Radius = Radius;
    Parms.Strength = Strength;
    Parms.Falloff = Falloff;
    Parms.bVelChange = bVelChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddRadialForce
void PrimitiveComponent::AddRadialForce(uint8_t Origin, float Radius, float Strength, uint8_t Falloff, bool bAccelChange) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddRadialForce_Params Parms{};
    Parms.Origin = Origin;
    Parms.Radius = Radius;
    Parms.Strength = Strength;
    Parms.Falloff = Falloff;
    Parms.bAccelChange = bAccelChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddImpulseAtLocation
void PrimitiveComponent::AddImpulseAtLocation(uint8_t Impulse, uint8_t Location, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddImpulseAtLocation_Params Parms{};
    Parms.Impulse = Impulse;
    Parms.Location = Location;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddImpulse
void PrimitiveComponent::AddImpulse(uint8_t Impulse, struct FName BoneName, bool bVelChange) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddImpulse_Params Parms{};
    Parms.Impulse = Impulse;
    Parms.BoneName = BoneName;
    Parms.bVelChange = bVelChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddForceAtLocation
void PrimitiveComponent::AddForceAtLocation(uint8_t Force, uint8_t Location, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddForceAtLocation_Params Parms{};
    Parms.Force = Force;
    Parms.Location = Location;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddForce
void PrimitiveComponent::AddForce(uint8_t Force, struct FName BoneName, bool bAccelChange) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddForce_Params Parms{};
    Parms.Force = Force;
    Parms.BoneName = BoneName;
    Parms.bAccelChange = bAccelChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PrimitiveComponent.AddAngularImpulse
void PrimitiveComponent::AddAngularImpulse(uint8_t Impulse, struct FName BoneName, bool bVelChange) {
    static class UFunction* Func = nullptr;
    PrimitiveComponent_AddAngularImpulse_Params Parms{};
    Parms.Impulse = Impulse;
    Parms.BoneName = BoneName;
    Parms.bVelChange = bVelChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MeshComponent.SetVectorParameterValueOnMaterials
void MeshComponent::SetVectorParameterValueOnMaterials(struct FName ParameterName, uint8_t ParameterValue) {
    static class UFunction* Func = nullptr;
    MeshComponent_SetVectorParameterValueOnMaterials_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.ParameterValue = ParameterValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MeshComponent.SetScalarParameterValueOnMaterials
void MeshComponent::SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue) {
    static class UFunction* Func = nullptr;
    MeshComponent_SetScalarParameterValueOnMaterials_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.ParameterValue = ParameterValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MeshComponent.GetMaterials
struct TArray<uint8_t> MeshComponent::GetMaterials() {
    static class UFunction* Func = nullptr;
    MeshComponent_GetMaterials_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.StaticMeshComponent.SetStaticMesh
bool StaticMeshComponent::SetStaticMesh(class UObject* NewMesh) {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_SetStaticMesh_Params Parms{};
    Parms.NewMesh = NewMesh;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.StaticMeshComponent.SetProxySettings
void StaticMeshComponent::SetProxySettings(uint8_t ProxySettings) {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_SetProxySettings_Params Parms{};
    Parms.ProxySettings = ProxySettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.StaticMeshComponent.SetForcedLodModel
void StaticMeshComponent::SetForcedLodModel(int32_t NewForcedLodModel) {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_SetForcedLodModel_Params Parms{};
    Parms.NewForcedLodModel = NewForcedLodModel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.StaticMeshComponent.RevertProxySettingsToDefaults
void StaticMeshComponent::RevertProxySettingsToDefaults() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.StaticMeshComponent.OnRep_StaticMesh
void StaticMeshComponent::OnRep_StaticMesh(class UObject* OldStaticMesh) {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_OnRep_StaticMesh_Params Parms{};
    Parms.OldStaticMesh = OldStaticMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.StaticMeshComponent.NumberOfTraversalEdges
int32_t StaticMeshComponent::NumberOfTraversalEdges() {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_NumberOfTraversalEdges_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.StaticMeshComponent.HasInstanceVertexColors
bool StaticMeshComponent::HasInstanceVertexColors() {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_HasInstanceVertexColors_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.StaticMeshComponent.GetProxySettings
uint8_t StaticMeshComponent::GetProxySettings() {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_GetProxySettings_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.StaticMeshComponent.GetLocalBounds
void StaticMeshComponent::GetLocalBounds(uint8_t Min, uint8_t Max) {
    static class UFunction* Func = nullptr;
    StaticMeshComponent_GetLocalBounds_Params Parms{};
    Parms.Min = Min;
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.SpawnDefaultController
void Pawn::SpawnDefaultController() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Pawn.SetCanAffectNavigationGeneration
void Pawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
    static class UFunction* Func = nullptr;
    Pawn_SetCanAffectNavigationGeneration_Params Parms{};
    Parms.bNewValue = bNewValue;
    Parms.bForceUpdate = bForceUpdate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.ReceiveUnpossessed
void Pawn::ReceiveUnpossessed(class UObject* OldController) {
    static class UFunction* Func = nullptr;
    Pawn_ReceiveUnpossessed_Params Parms{};
    Parms.OldController = OldController;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.ReceivePossessed
void Pawn::ReceivePossessed(class UObject* NewController) {
    static class UFunction* Func = nullptr;
    Pawn_ReceivePossessed_Params Parms{};
    Parms.NewController = NewController;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.PawnMakeNoise
void Pawn::PawnMakeNoise(float Loudness, uint8_t NoiseLocation, bool bUseNoiseMakerLocation, class UObject* NoiseMaker) {
    static class UFunction* Func = nullptr;
    Pawn_PawnMakeNoise_Params Parms{};
    Parms.Loudness = Loudness;
    Parms.NoiseLocation = NoiseLocation;
    Parms.bUseNoiseMakerLocation = bUseNoiseMakerLocation;
    Parms.NoiseMaker = NoiseMaker;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.OnRep_PlayerState
void Pawn::OnRep_PlayerState() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Pawn.OnRep_Controller
void Pawn::OnRep_Controller() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Pawn.LaunchPawn
void Pawn::LaunchPawn(uint8_t LaunchVelocity, bool bXYOverride, bool bZOverride) {
    static class UFunction* Func = nullptr;
    Pawn_LaunchPawn_Params Parms{};
    Parms.LaunchVelocity = LaunchVelocity;
    Parms.bXYOverride = bXYOverride;
    Parms.bZOverride = bZOverride;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.K2_GetMovementInputVector
uint8_t Pawn::K2_GetMovementInputVector() {
    static class UFunction* Func = nullptr;
    Pawn_K2_GetMovementInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.IsPlayerControlled
bool Pawn::IsPlayerControlled() {
    static class UFunction* Func = nullptr;
    Pawn_IsPlayerControlled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.IsMoveInputIgnored
bool Pawn::IsMoveInputIgnored() {
    static class UFunction* Func = nullptr;
    Pawn_IsMoveInputIgnored_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.IsLocallyControlled
bool Pawn::IsLocallyControlled() {
    static class UFunction* Func = nullptr;
    Pawn_IsLocallyControlled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.IsControlled
bool Pawn::IsControlled() {
    static class UFunction* Func = nullptr;
    Pawn_IsControlled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetPendingMovementInputVector
uint8_t Pawn::GetPendingMovementInputVector() {
    static class UFunction* Func = nullptr;
    Pawn_GetPendingMovementInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetNavAgentLocation
uint8_t Pawn::GetNavAgentLocation() {
    static class UFunction* Func = nullptr;
    Pawn_GetNavAgentLocation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetMovementComponent
class UObject* Pawn::GetMovementComponent() {
    static class UFunction* Func = nullptr;
    Pawn_GetMovementComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetMovementBaseActor
class UObject* Pawn::GetMovementBaseActor(class UObject* Pawn) {
    static class UFunction* Func = nullptr;
    Pawn_GetMovementBaseActor_Params Parms{};
    Parms.Pawn = Pawn;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetLastMovementInputVector
uint8_t Pawn::GetLastMovementInputVector() {
    static class UFunction* Func = nullptr;
    Pawn_GetLastMovementInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetControlRotation
uint8_t Pawn::GetControlRotation() {
    static class UFunction* Func = nullptr;
    Pawn_GetControlRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetController
class UObject* Pawn::GetController() {
    static class UFunction* Func = nullptr;
    Pawn_GetController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.GetBaseAimRotation
uint8_t Pawn::GetBaseAimRotation() {
    static class UFunction* Func = nullptr;
    Pawn_GetBaseAimRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.DetachFromControllerPendingDestroy
void Pawn::DetachFromControllerPendingDestroy() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Pawn.ConsumeMovementInputVector
uint8_t Pawn::ConsumeMovementInputVector() {
    static class UFunction* Func = nullptr;
    Pawn_ConsumeMovementInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Pawn.AddMovementInput
void Pawn::AddMovementInput(uint8_t WorldDirection, float ScaleValue, bool bForce) {
    static class UFunction* Func = nullptr;
    Pawn_AddMovementInput_Params Parms{};
    Parms.WorldDirection = WorldDirection;
    Parms.ScaleValue = ScaleValue;
    Parms.bForce = bForce;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.AddControllerYawInput
void Pawn::AddControllerYawInput(float Val) {
    static class UFunction* Func = nullptr;
    Pawn_AddControllerYawInput_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.AddControllerRollInput
void Pawn::AddControllerRollInput(float Val) {
    static class UFunction* Func = nullptr;
    Pawn_AddControllerRollInput_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Pawn.AddControllerPitchInput
void Pawn::AddControllerPitchInput(float Val) {
    static class UFunction* Func = nullptr;
    Pawn_AddControllerPitchInput_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.UnCrouch
void Character::UnCrouch(bool bClientSimulation) {
    static class UFunction* Func = nullptr;
    Character_UnCrouch_Params Parms{};
    Parms.bClientSimulation = bClientSimulation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.StopJumping
void Character::StopJumping() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.StopAnimMontage
void Character::StopAnimMontage(class UObject* AnimMontage) {
    static class UFunction* Func = nullptr;
    Character_StopAnimMontage_Params Parms{};
    Parms.AnimMontage = AnimMontage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.SetReplicateMovement
void Character::SetReplicateMovement(bool bInReplicateMovement) {
    static class UFunction* Func = nullptr;
    Character_SetReplicateMovement_Params Parms{};
    Parms.bInReplicateMovement = bInReplicateMovement;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.RemoveBrightnessOverride
void Character::RemoveBrightnessOverride(class UObject* BrightnessOverrideActor) {
    static class UFunction* Func = nullptr;
    Character_RemoveBrightnessOverride_Params Parms{};
    Parms.BrightnessOverrideActor = BrightnessOverrideActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.PlayAnimMontage
float Character::PlayAnimMontage(class UObject* AnimMontage, float InPlayRate, struct FName StartSectionName) {
    static class UFunction* Func = nullptr;
    Character_PlayAnimMontage_Params Parms{};
    Parms.AnimMontage = AnimMontage;
    Parms.InPlayRate = InPlayRate;
    Parms.StartSectionName = StartSectionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.OnWalkingOffLedge
void Character::OnWalkingOffLedge(uint8_t PreviousFloorImpactNormal, uint8_t PreviousFloorContactNormal, uint8_t PreviousLocation, float TimeDelta) {
    static class UFunction* Func = nullptr;
    Character_OnWalkingOffLedge_Params Parms{};
    Parms.PreviousFloorImpactNormal = PreviousFloorImpactNormal;
    Parms.PreviousFloorContactNormal = PreviousFloorContactNormal;
    Parms.PreviousLocation = PreviousLocation;
    Parms.TimeDelta = TimeDelta;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.OnRep_RootMotion
void Character::OnRep_RootMotion() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.OnRep_ReplicatedBasedMovement
void Character::OnRep_ReplicatedBasedMovement() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.OnRep_IsCrouched
void Character::OnRep_IsCrouched() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.OnLaunched
void Character::OnLaunched(uint8_t LaunchVelocity, bool bXYOverride, bool bZOverride) {
    static class UFunction* Func = nullptr;
    Character_OnLaunched_Params Parms{};
    Parms.LaunchVelocity = LaunchVelocity;
    Parms.bXYOverride = bXYOverride;
    Parms.bZOverride = bZOverride;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.OnLanded
void Character::OnLanded(uint8_t Hit) {
    static class UFunction* Func = nullptr;
    Character_OnLanded_Params Parms{};
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.OnJumped
void Character::OnJumped() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.LaunchCharacter
void Character::LaunchCharacter(uint8_t LaunchVelocity, bool bXYOverride, bool bZOverride) {
    static class UFunction* Func = nullptr;
    Character_LaunchCharacter_Params Parms{};
    Parms.LaunchVelocity = LaunchVelocity;
    Parms.bXYOverride = bXYOverride;
    Parms.bZOverride = bZOverride;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.K2_UpdateCustomMovement
void Character::K2_UpdateCustomMovement(float DeltaTime) {
    static class UFunction* Func = nullptr;
    Character_K2_UpdateCustomMovement_Params Parms{};
    Parms.DeltaTime = DeltaTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.K2_OnStartCrouch
void Character::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    static class UFunction* Func = nullptr;
    Character_K2_OnStartCrouch_Params Parms{};
    Parms.HalfHeightAdjust = HalfHeightAdjust;
    Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.K2_OnMovementModeChanged
void Character::K2_OnMovementModeChanged(uint8_t PrevMovementMode, uint8_t NewMovementMode, uint8_t PrevCustomMode, uint8_t NewCustomMode) {
    static class UFunction* Func = nullptr;
    Character_K2_OnMovementModeChanged_Params Parms{};
    Parms.PrevMovementMode = PrevMovementMode;
    Parms.NewMovementMode = NewMovementMode;
    Parms.PrevCustomMode = PrevCustomMode;
    Parms.NewCustomMode = NewCustomMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.K2_OnEndCrouch
void Character::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    static class UFunction* Func = nullptr;
    Character_K2_OnEndCrouch_Params Parms{};
    Parms.HalfHeightAdjust = HalfHeightAdjust;
    Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.Jump
void Character::Jump() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.IsPlayingRootMotion
bool Character::IsPlayingRootMotion() {
    static class UFunction* Func = nullptr;
    Character_IsPlayingRootMotion_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.IsPlayingNetworkedRootMotionMontage
bool Character::IsPlayingNetworkedRootMotionMontage() {
    static class UFunction* Func = nullptr;
    Character_IsPlayingNetworkedRootMotionMontage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.IsJumpProvidingForce
bool Character::IsJumpProvidingForce() {
    static class UFunction* Func = nullptr;
    Character_IsJumpProvidingForce_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.GetCurrentMontage
class UObject* Character::GetCurrentMontage() {
    static class UFunction* Func = nullptr;
    Character_GetCurrentMontage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.Crouch
void Character::Crouch(bool bClientSimulation) {
    static class UFunction* Func = nullptr;
    Character_Crouch_Params Parms{};
    Parms.bClientSimulation = bClientSimulation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Character.ClientCheatWalk
void Character::ClientCheatWalk() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.ClientCheatGhost
void Character::ClientCheatGhost() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.ClientCheatFly
void Character::ClientCheatFly() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Character.CanJumpInternal
bool Character::CanJumpInternal() {
    static class UFunction* Func = nullptr;
    Character_CanJumpInternal_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.CanJump
bool Character::CanJump() {
    static class UFunction* Func = nullptr;
    Character_CanJump_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Character.AddBrightnessOverride
void Character::AddBrightnessOverride(class UObject* BrightnessOverrideActor, float Brightness) {
    static class UFunction* Func = nullptr;
    Character_AddBrightnessOverride_Params Parms{};
    Parms.BrightnessOverrideActor = BrightnessOverrideActor;
    Parms.Brightness = Brightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.World.OnBeforeGC
void World::OnBeforeGC() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Controller.UnPossess
void Controller::UnPossess() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Controller.StopMovement
void Controller::StopMovement() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Controller.SetInitialLocationAndRotation
void Controller::SetInitialLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation) {
    static class UFunction* Func = nullptr;
    Controller_SetInitialLocationAndRotation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.NewRotation = NewRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Controller.SetControlRotation
void Controller::SetControlRotation(uint8_t NewRotation) {
    static class UFunction* Func = nullptr;
    Controller_SetControlRotation_Params Parms{};
    Parms.NewRotation = NewRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Controller.ReceiveInstigatedAnyDamage
void Controller::ReceiveInstigatedAnyDamage(float Damage, class UObject* DamageType, class UObject* DamagedActor, class UObject* DamageCauser) {
    static class UFunction* Func = nullptr;
    Controller_ReceiveInstigatedAnyDamage_Params Parms{};
    Parms.Damage = Damage;
    Parms.DamageType = DamageType;
    Parms.DamagedActor = DamagedActor;
    Parms.DamageCauser = DamageCauser;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Controller.Possess
void Controller::Possess(class UObject* InPawn) {
    static class UFunction* Func = nullptr;
    Controller_Possess_Params Parms{};
    Parms.InPawn = InPawn;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Controller.OnRep_PlayerState
void Controller::OnRep_PlayerState() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Controller.OnRep_Pawn
void Controller::OnRep_Pawn() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Controller.LineOfSightTo
bool Controller::LineOfSightTo(class UObject* Other, uint8_t ViewPoint, bool bAlternateChecks) {
    static class UFunction* Func = nullptr;
    Controller_LineOfSightTo_Params Parms{};
    Parms.Other = Other;
    Parms.ViewPoint = ViewPoint;
    Parms.bAlternateChecks = bAlternateChecks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.K2_GetPawn
class UObject* Controller::K2_GetPawn() {
    static class UFunction* Func = nullptr;
    Controller_K2_GetPawn_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.IsLocalPlayerController
bool Controller::IsLocalPlayerController() {
    static class UFunction* Func = nullptr;
    Controller_IsLocalPlayerController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.IsLocalController
bool Controller::IsLocalController() {
    static class UFunction* Func = nullptr;
    Controller_IsLocalController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.GetViewTarget
class UObject* Controller::GetViewTarget() {
    static class UFunction* Func = nullptr;
    Controller_GetViewTarget_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.GetDesiredRotation
uint8_t Controller::GetDesiredRotation() {
    static class UFunction* Func = nullptr;
    Controller_GetDesiredRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.GetControlRotation
uint8_t Controller::GetControlRotation() {
    static class UFunction* Func = nullptr;
    Controller_GetControlRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Controller.ClientSetRotation
void Controller::ClientSetRotation(uint8_t NewRotation, bool bResetCamera) {
    static class UFunction* Func = nullptr;
    Controller_ClientSetRotation_Params Parms{};
    Parms.NewRotation = NewRotation;
    Parms.bResetCamera = bResetCamera;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Controller.ClientSetLocation
void Controller::ClientSetLocation(uint8_t NewLocation, uint8_t NewRotation) {
    static class UFunction* Func = nullptr;
    Controller_ClientSetLocation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.NewRotation = NewRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Controller.CastToPlayerController
class UObject* Controller::CastToPlayerController() {
    static class UFunction* Func = nullptr;
    Controller_CastToPlayerController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotify.Received_Notify
bool AnimNotify::Received_Notify(class UObject* MeshComp, class UObject* Animation) {
    static class UFunction* Func = nullptr;
    AnimNotify_Received_Notify_Params Parms{};
    Parms.MeshComp = MeshComp;
    Parms.Animation = Animation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotify.GetNotifyName
struct FString AnimNotify::GetNotifyName() {
    static class UFunction* Func = nullptr;
    AnimNotify_GetNotifyName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BlueprintFunctionLibrary.MakeStringAssetReference
uint8_t BlueprintFunctionLibrary::MakeStringAssetReference(struct FString AssetLongPathname) {
    static class UFunction* Func = nullptr;
    BlueprintFunctionLibrary_MakeStringAssetReference_Params Parms{};
    Parms.AssetLongPathname = AssetLongPathname;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BlueprintAsyncActionBase.Activate
void BlueprintAsyncActionBase::Activate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
void SkeletalMeshActor::OnRep_ReplicatedPhysAsset() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
void SkeletalMeshActor::OnRep_ReplicatedMesh() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
void SkeletalMeshActor::OnRep_ReplicatedMaterial1() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
void SkeletalMeshActor::OnRep_ReplicatedMaterial0() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.HUD.ShowStatObjectTypeCountsForType
void HUD::ShowStatObjectTypeCountsForType(class UClass* DesiredClass) {
    static class UFunction* Func = nullptr;
    HUD_ShowStatObjectTypeCountsForType_Params Parms{};
    Parms.DesiredClass = DesiredClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ShowHUD
void HUD::ShowHUD() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.HUD.ShowDebugToggleSubCategory
void HUD::ShowDebugToggleSubCategory(struct FName Category) {
    static class UFunction* Func = nullptr;
    HUD_ShowDebugToggleSubCategory_Params Parms{};
    Parms.Category = Category;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ShowDebugForReticleTargetToggle
void HUD::ShowDebugForReticleTargetToggle(class UClass* DesiredClass) {
    static class UFunction* Func = nullptr;
    HUD_ShowDebugForReticleTargetToggle_Params Parms{};
    Parms.DesiredClass = DesiredClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ShowDebug
void HUD::ShowDebug(struct FName DebugType) {
    static class UFunction* Func = nullptr;
    HUD_ShowDebug_Params Parms{};
    Parms.DebugType = DebugType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.RemoveDebugText
void HUD::RemoveDebugText(class UObject* SrcActor, bool bLeaveDurationText) {
    static class UFunction* Func = nullptr;
    HUD_RemoveDebugText_Params Parms{};
    Parms.SrcActor = SrcActor;
    Parms.bLeaveDurationText = bLeaveDurationText;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.RemoveAllDebugStrings
void HUD::RemoveAllDebugStrings() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.HUD.ReceiveHitBoxRelease
void HUD::ReceiveHitBoxRelease(struct FName BoxName) {
    static class UFunction* Func = nullptr;
    HUD_ReceiveHitBoxRelease_Params Parms{};
    Parms.BoxName = BoxName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ReceiveHitBoxEndCursorOver
void HUD::ReceiveHitBoxEndCursorOver(struct FName BoxName) {
    static class UFunction* Func = nullptr;
    HUD_ReceiveHitBoxEndCursorOver_Params Parms{};
    Parms.BoxName = BoxName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ReceiveHitBoxClick
void HUD::ReceiveHitBoxClick(struct FName BoxName) {
    static class UFunction* Func = nullptr;
    HUD_ReceiveHitBoxClick_Params Parms{};
    Parms.BoxName = BoxName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ReceiveHitBoxBeginCursorOver
void HUD::ReceiveHitBoxBeginCursorOver(struct FName BoxName) {
    static class UFunction* Func = nullptr;
    HUD_ReceiveHitBoxBeginCursorOver_Params Parms{};
    Parms.BoxName = BoxName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.ReceiveDrawHUD
void HUD::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY) {
    static class UFunction* Func = nullptr;
    HUD_ReceiveDrawHUD_Params Parms{};
    Parms.SizeX = SizeX;
    Parms.SizeY = SizeY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.Project
uint8_t HUD::Project(uint8_t Location) {
    static class UFunction* Func = nullptr;
    HUD_Project_Params Parms{};
    Parms.Location = Location;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HUD.GetTextSize
void HUD::GetTextSize(struct FString Text, float OutWidth, float OutHeight, class UObject* Font, float Scale) {
    static class UFunction* Func = nullptr;
    HUD_GetTextSize_Params Parms{};
    Parms.Text = Text;
    Parms.OutWidth = OutWidth;
    Parms.OutHeight = OutHeight;
    Parms.Font = Font;
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.GetOwningPlayerController
class UObject* HUD::GetOwningPlayerController() {
    static class UFunction* Func = nullptr;
    HUD_GetOwningPlayerController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HUD.GetOwningPawn
class UObject* HUD::GetOwningPawn() {
    static class UFunction* Func = nullptr;
    HUD_GetOwningPawn_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HUD.GetActorsInSelectionRectangle
void HUD::GetActorsInSelectionRectangle(class UClass* ClassFilter, uint8_t FirstPoint, uint8_t SecondPoint, struct TArray<uint8_t> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed) {
    static class UFunction* Func = nullptr;
    HUD_GetActorsInSelectionRectangle_Params Parms{};
    Parms.ClassFilter = ClassFilter;
    Parms.FirstPoint = FirstPoint;
    Parms.SecondPoint = SecondPoint;
    Parms.OutActors = OutActors;
    Parms.bIncludeNonCollidingComponents = bIncludeNonCollidingComponents;
    Parms.bActorMustBeFullyEnclosed = bActorMustBeFullyEnclosed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawTextureSimple
void HUD::DrawTextureSimple(class UObject* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition) {
    static class UFunction* Func = nullptr;
    HUD_DrawTextureSimple_Params Parms{};
    Parms.Texture = Texture;
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.Scale = Scale;
    Parms.bScalePosition = bScalePosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawTexture
void HUD::DrawTexture(class UObject* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, uint8_t TintColor, uint8_t BlendMode, float Scale, bool bScalePosition, float Rotation, uint8_t RotPivot) {
    static class UFunction* Func = nullptr;
    HUD_DrawTexture_Params Parms{};
    Parms.Texture = Texture;
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.ScreenW = ScreenW;
    Parms.ScreenH = ScreenH;
    Parms.TextureU = TextureU;
    Parms.TextureV = TextureV;
    Parms.TextureUWidth = TextureUWidth;
    Parms.TextureVHeight = TextureVHeight;
    Parms.TintColor = TintColor;
    Parms.BlendMode = BlendMode;
    Parms.Scale = Scale;
    Parms.bScalePosition = bScalePosition;
    Parms.Rotation = Rotation;
    Parms.RotPivot = RotPivot;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawText
void HUD::DrawText(struct FString Text, uint8_t TextColor, float ScreenX, float ScreenY, class UObject* Font, float Scale, bool bScalePosition) {
    static class UFunction* Func = nullptr;
    HUD_DrawText_Params Parms{};
    Parms.Text = Text;
    Parms.TextColor = TextColor;
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.Font = Font;
    Parms.Scale = Scale;
    Parms.bScalePosition = bScalePosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawRect
void HUD::DrawRect(uint8_t RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH) {
    static class UFunction* Func = nullptr;
    HUD_DrawRect_Params Parms{};
    Parms.RectColor = RectColor;
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.ScreenW = ScreenW;
    Parms.ScreenH = ScreenH;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawMaterialTriangle
void HUD::DrawMaterialTriangle(class UObject* Material, uint8_t V0_Pos, uint8_t V1_Pos, uint8_t V2_Pos, uint8_t V0_UV, uint8_t V1_UV, uint8_t V2_UV, uint8_t V0_Color, uint8_t V1_Color, uint8_t V2_Color) {
    static class UFunction* Func = nullptr;
    HUD_DrawMaterialTriangle_Params Parms{};
    Parms.Material = Material;
    Parms.V0_Pos = V0_Pos;
    Parms.V1_Pos = V1_Pos;
    Parms.V2_Pos = V2_Pos;
    Parms.V0_UV = V0_UV;
    Parms.V1_UV = V1_UV;
    Parms.V2_UV = V2_UV;
    Parms.V0_Color = V0_Color;
    Parms.V1_Color = V1_Color;
    Parms.V2_Color = V2_Color;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawMaterialSimple
void HUD::DrawMaterialSimple(class UObject* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition) {
    static class UFunction* Func = nullptr;
    HUD_DrawMaterialSimple_Params Parms{};
    Parms.Material = Material;
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.ScreenW = ScreenW;
    Parms.ScreenH = ScreenH;
    Parms.Scale = Scale;
    Parms.bScalePosition = bScalePosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawMaterial
void HUD::DrawMaterial(class UObject* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, uint8_t RotPivot) {
    static class UFunction* Func = nullptr;
    HUD_DrawMaterial_Params Parms{};
    Parms.Material = Material;
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.ScreenW = ScreenW;
    Parms.ScreenH = ScreenH;
    Parms.MaterialU = MaterialU;
    Parms.MaterialV = MaterialV;
    Parms.MaterialUWidth = MaterialUWidth;
    Parms.MaterialVHeight = MaterialVHeight;
    Parms.Scale = Scale;
    Parms.bScalePosition = bScalePosition;
    Parms.Rotation = Rotation;
    Parms.RotPivot = RotPivot;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.DrawLine
void HUD::DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, uint8_t LineColor) {
    static class UFunction* Func = nullptr;
    HUD_DrawLine_Params Parms{};
    Parms.StartScreenX = StartScreenX;
    Parms.StartScreenY = StartScreenY;
    Parms.EndScreenX = EndScreenX;
    Parms.EndScreenY = EndScreenY;
    Parms.LineColor = LineColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.Deproject
void HUD::Deproject(float ScreenX, float ScreenY, uint8_t WorldPosition, uint8_t WorldDirection) {
    static class UFunction* Func = nullptr;
    HUD_Deproject_Params Parms{};
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.WorldPosition = WorldPosition;
    Parms.WorldDirection = WorldDirection;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.AddHitBox
void HUD::AddHitBox(uint8_t Position, uint8_t Size, struct FName InName, bool bConsumesInput, int32_t Priority) {
    static class UFunction* Func = nullptr;
    HUD_AddHitBox_Params Parms{};
    Parms.Position = Position;
    Parms.Size = Size;
    Parms.InName = InName;
    Parms.bConsumesInput = bConsumesInput;
    Parms.Priority = Priority;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HUD.AddDebugText
void HUD::AddDebugText(struct FString DebugText, class UObject* SrcActor, float Duration, uint8_t Offset, uint8_t DesiredOffset, uint8_t TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UObject* InFont, float FontScale, bool bDrawShadow) {
    static class UFunction* Func = nullptr;
    HUD_AddDebugText_Params Parms{};
    Parms.DebugText = DebugText;
    Parms.SrcActor = SrcActor;
    Parms.Duration = Duration;
    Parms.Offset = Offset;
    Parms.DesiredOffset = DesiredOffset;
    Parms.TextColor = TextColor;
    Parms.bSkipOverwriteCheck = bSkipOverwriteCheck;
    Parms.bAbsoluteLocation = bAbsoluteLocation;
    Parms.bKeepAttachedToActor = bKeepAttachedToActor;
    Parms.InFont = InFont;
    Parms.FontScale = FontScale;
    Parms.bDrawShadow = bDrawShadow;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.StopCameraShake
void PlayerCameraManager::StopCameraShake(class UObject* ShakeInstance) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_StopCameraShake_Params Parms{};
    Parms.ShakeInstance = ShakeInstance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.StopCameraFade
void PlayerCameraManager::StopCameraFade() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerCameraManager.StopCameraAnimInst
void PlayerCameraManager::StopCameraAnimInst(class UObject* AnimInst, bool bImmediate) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_StopCameraAnimInst_Params Parms{};
    Parms.AnimInst = AnimInst;
    Parms.bImmediate = bImmediate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.StopAllInstancesOfCameraShake
void PlayerCameraManager::StopAllInstancesOfCameraShake(class UClass* Shake) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_StopAllInstancesOfCameraShake_Params Parms{};
    Parms.Shake = Shake;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim
void PlayerCameraManager::StopAllInstancesOfCameraAnim(class UObject* anim, bool bImmediate) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_StopAllInstancesOfCameraAnim_Params Parms{};
    Parms.anim = anim;
    Parms.bImmediate = bImmediate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.StopAllCameraShakes
void PlayerCameraManager::StopAllCameraShakes() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerCameraManager.StopAllCameraAnims
void PlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_StopAllCameraAnims_Params Parms{};
    Parms.bImmediate = bImmediate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.StartCameraFade
void PlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, uint8_t Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_StartCameraFade_Params Parms{};
    Parms.FromAlpha = FromAlpha;
    Parms.ToAlpha = ToAlpha;
    Parms.Duration = Duration;
    Parms.Color = Color;
    Parms.bShouldFadeAudio = bShouldFadeAudio;
    Parms.bHoldWhenFinished = bHoldWhenFinished;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.SetManualCameraFade
void PlayerCameraManager::SetManualCameraFade(float InFadeAmount, uint8_t Color, bool bInFadeAudio) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_SetManualCameraFade_Params Parms{};
    Parms.InFadeAmount = InFadeAmount;
    Parms.Color = Color;
    Parms.bInFadeAudio = bInFadeAudio;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.RemoveCameraModifier
bool PlayerCameraManager::RemoveCameraModifier(class UObject* ModifierToRemove) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_RemoveCameraModifier_Params Parms{};
    Parms.ModifierToRemove = ModifierToRemove;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.RemoveCameraLensEffect
void PlayerCameraManager::RemoveCameraLensEffect(class UObject* Emitter) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_RemoveCameraLensEffect_Params Parms{};
    Parms.Emitter = Emitter;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerCameraManager.PlayCameraShake
class UObject* PlayerCameraManager::PlayCameraShake(class UClass* ShakeClass, float Scale, uint8_t PlaySpace, uint8_t UserPlaySpaceRot) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_PlayCameraShake_Params Parms{};
    Parms.ShakeClass = ShakeClass;
    Parms.Scale = Scale;
    Parms.PlaySpace = PlaySpace;
    Parms.UserPlaySpaceRot = UserPlaySpaceRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.PlayCameraAnim
class UObject* PlayerCameraManager::PlayCameraAnim(class UObject* anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, uint8_t PlaySpace, uint8_t UserPlaySpaceRot) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_PlayCameraAnim_Params Parms{};
    Parms.anim = anim;
    Parms.Rate = Rate;
    Parms.Scale = Scale;
    Parms.BlendInTime = BlendInTime;
    Parms.BlendOutTime = BlendOutTime;
    Parms.bLoop = bLoop;
    Parms.bRandomStartTime = bRandomStartTime;
    Parms.Duration = Duration;
    Parms.PlaySpace = PlaySpace;
    Parms.UserPlaySpaceRot = UserPlaySpaceRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.GetOwningPlayerController
class UObject* PlayerCameraManager::GetOwningPlayerController() {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_GetOwningPlayerController_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.GetFOVAngle
float PlayerCameraManager::GetFOVAngle() {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_GetFOVAngle_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.GetCameraRotation
uint8_t PlayerCameraManager::GetCameraRotation() {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_GetCameraRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.GetCameraLocation
uint8_t PlayerCameraManager::GetCameraLocation() {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_GetCameraLocation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.FindCameraModifierByClass
class UObject* PlayerCameraManager::FindCameraModifierByClass(class UClass* ModifierClass) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_FindCameraModifierByClass_Params Parms{};
    Parms.ModifierClass = ModifierClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.ClearCameraLensEffects
void PlayerCameraManager::ClearCameraLensEffects() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerCameraManager.BlueprintUpdateCamera
bool PlayerCameraManager::BlueprintUpdateCamera(class UObject* CameraTarget, uint8_t NewCameraLocation, uint8_t NewCameraRotation, float NewCameraFOV) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_BlueprintUpdateCamera_Params Parms{};
    Parms.CameraTarget = CameraTarget;
    Parms.NewCameraLocation = NewCameraLocation;
    Parms.NewCameraRotation = NewCameraRotation;
    Parms.NewCameraFOV = NewCameraFOV;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.AddNewCameraModifier
class UObject* PlayerCameraManager::AddNewCameraModifier(class UClass* ModifierClass) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_AddNewCameraModifier_Params Parms{};
    Parms.ModifierClass = ModifierClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerCameraManager.AddCameraLensEffect
class UObject* PlayerCameraManager::AddCameraLensEffect(class UClass* LensEffectEmitterClass) {
    static class UFunction* Func = nullptr;
    PlayerCameraManager_AddCameraLensEffect_Params Parms{};
    Parms.LensEffectEmitterClass = LensEffectEmitterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.WasInputKeyJustReleased
bool PlayerController::WasInputKeyJustReleased(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_WasInputKeyJustReleased_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.WasInputKeyJustPressed
bool PlayerController::WasInputKeyJustPressed(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_WasInputKeyJustPressed_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.ToggleSpeaking
void PlayerController::ToggleSpeaking(bool bInSpeaking) {
    static class UFunction* Func = nullptr;
    PlayerController_ToggleSpeaking_Params Parms{};
    Parms.bInSpeaking = bInSpeaking;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SwitchLevel
void PlayerController::SwitchLevel(struct FString URL) {
    static class UFunction* Func = nullptr;
    PlayerController_SwitchLevel_Params Parms{};
    Parms.URL = URL;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.StopHapticEffect
void PlayerController::StopHapticEffect(uint8_t Hand) {
    static class UFunction* Func = nullptr;
    PlayerController_StopHapticEffect_Params Parms{};
    Parms.Hand = Hand;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.StartFire
void PlayerController::StartFire(uint8_t FireModeNum) {
    static class UFunction* Func = nullptr;
    PlayerController_StartFire_Params Parms{};
    Parms.FireModeNum = FireModeNum;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetVirtualJoystickVisibility
void PlayerController::SetVirtualJoystickVisibility(bool bVisible) {
    static class UFunction* Func = nullptr;
    PlayerController_SetVirtualJoystickVisibility_Params Parms{};
    Parms.bVisible = bVisible;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetViewTargetWithBlend
void PlayerController::SetViewTargetWithBlend(class UObject* NewViewTarget, float BlendTime, uint8_t BlendFunc, float BlendExp, bool bLockOutgoing) {
    static class UFunction* Func = nullptr;
    PlayerController_SetViewTargetWithBlend_Params Parms{};
    Parms.NewViewTarget = NewViewTarget;
    Parms.BlendTime = BlendTime;
    Parms.BlendFunc = BlendFunc;
    Parms.BlendExp = BlendExp;
    Parms.bLockOutgoing = bLockOutgoing;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetName
void PlayerController::SetName(struct FString S) {
    static class UFunction* Func = nullptr;
    PlayerController_SetName_Params Parms{};
    Parms.S = S;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetMenu3DMode
void PlayerController::SetMenu3DMode(bool bInMenu3DMode) {
    static class UFunction* Func = nullptr;
    PlayerController_SetMenu3DMode_Params Parms{};
    Parms.bInMenu3DMode = bInMenu3DMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetIgnoreMoveInput
void PlayerController::SetIgnoreMoveInput(bool bNewMoveInput) {
    static class UFunction* Func = nullptr;
    PlayerController_SetIgnoreMoveInput_Params Parms{};
    Parms.bNewMoveInput = bNewMoveInput;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetIgnoreLookInput
void PlayerController::SetIgnoreLookInput(bool bNewLookInput) {
    static class UFunction* Func = nullptr;
    PlayerController_SetIgnoreLookInput_Params Parms{};
    Parms.bNewLookInput = bNewLookInput;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetHapticsByValue
void PlayerController::SetHapticsByValue(float Frequency, float Amplitude, uint8_t Hand) {
    static class UFunction* Func = nullptr;
    PlayerController_SetHapticsByValue_Params Parms{};
    Parms.Frequency = Frequency;
    Parms.Amplitude = Amplitude;
    Parms.Hand = Hand;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetControllerLightColor
void PlayerController::SetControllerLightColor(uint8_t Color) {
    static class UFunction* Func = nullptr;
    PlayerController_SetControllerLightColor_Params Parms{};
    Parms.Color = Color;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetCinematicMode
void PlayerController::SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
    static class UFunction* Func = nullptr;
    PlayerController_SetCinematicMode_Params Parms{};
    Parms.bInCinematicMode = bInCinematicMode;
    Parms.bHidePlayer = bHidePlayer;
    Parms.bAffectsHUD = bAffectsHUD;
    Parms.bAffectsMovement = bAffectsMovement;
    Parms.bAffectsTurning = bAffectsTurning;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SetAudioListenerOverride
void PlayerController::SetAudioListenerOverride(class UObject* AttachToComponent, uint8_t Location, uint8_t Rotation) {
    static class UFunction* Func = nullptr;
    PlayerController_SetAudioListenerOverride_Params Parms{};
    Parms.AttachToComponent = AttachToComponent;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerViewSelf
void PlayerController::ServerViewSelf(uint8_t TransitionParams) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerViewSelf_Params Parms{};
    Parms.TransitionParams = TransitionParams;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerViewPrevPlayer
void PlayerController::ServerViewPrevPlayer() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerViewNextPlayer
void PlayerController::ServerViewNextPlayer() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerVerifyViewTarget
void PlayerController::ServerVerifyViewTarget() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerUpdateLevelVisibility
void PlayerController::ServerUpdateLevelVisibility(struct FName PackageName, bool bIsVisible) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerUpdateLevelVisibility_Params Parms{};
    Parms.PackageName = PackageName;
    Parms.bIsVisible = bIsVisible;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerUpdateCamera
void PlayerController::ServerUpdateCamera(uint8_t CamLoc, int32_t CamPitchAndYaw) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerUpdateCamera_Params Parms{};
    Parms.CamLoc = CamLoc;
    Parms.CamPitchAndYaw = CamPitchAndYaw;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerUnmutePlayer
void PlayerController::ServerUnmutePlayer(uint8_t PlayerId) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerUnmutePlayer_Params Parms{};
    Parms.PlayerId = PlayerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerToggleAILogging
void PlayerController::ServerToggleAILogging() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerShortTimeout
void PlayerController::ServerShortTimeout() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerSetSpectatorWaiting
void PlayerController::ServerSetSpectatorWaiting(bool bWaiting) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerSetSpectatorWaiting_Params Parms{};
    Parms.bWaiting = bWaiting;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerSetSpectatorLocation
void PlayerController::ServerSetSpectatorLocation(uint8_t NewLoc, uint8_t NewRot) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerSetSpectatorLocation_Params Parms{};
    Parms.NewLoc = NewLoc;
    Parms.NewRot = NewRot;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerRestartPlayer
void PlayerController::ServerRestartPlayer() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerPause
void PlayerController::ServerPause() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerNotifyLoadedWorld
void PlayerController::ServerNotifyLoadedWorld(struct FName WorldPackageName) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerNotifyLoadedWorld_Params Parms{};
    Parms.WorldPackageName = WorldPackageName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerMutePlayer
void PlayerController::ServerMutePlayer(uint8_t PlayerId) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerMutePlayer_Params Parms{};
    Parms.PlayerId = PlayerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerCheckClientPossessionReliable
void PlayerController::ServerCheckClientPossessionReliable() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerCheckClientPossession
void PlayerController::ServerCheckClientPossession() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ServerChangeName
void PlayerController::ServerChangeName(struct FString S) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerChangeName_Params Parms{};
    Parms.S = S;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerCamera
void PlayerController::ServerCamera(struct FName NewMode) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerCamera_Params Parms{};
    Parms.NewMode = NewMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ServerAcknowledgePossession
void PlayerController::ServerAcknowledgePossession(class UObject* P) {
    static class UFunction* Func = nullptr;
    PlayerController_ServerAcknowledgePossession_Params Parms{};
    Parms.P = P;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.SendToConsole
void PlayerController::SendToConsole(struct FString Command) {
    static class UFunction* Func = nullptr;
    PlayerController_SendToConsole_Params Parms{};
    Parms.Command = Command;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.RestartLevel
void PlayerController::RestartLevel() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ResetIgnoreMoveInput
void PlayerController::ResetIgnoreMoveInput() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ResetIgnoreLookInput
void PlayerController::ResetIgnoreLookInput() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ResetIgnoreInputFlags
void PlayerController::ResetIgnoreInputFlags() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ProjectWorldLocationToScreen
bool PlayerController::ProjectWorldLocationToScreen(uint8_t WorldLocation, uint8_t ScreenLocation) {
    static class UFunction* Func = nullptr;
    PlayerController_ProjectWorldLocationToScreen_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.ScreenLocation = ScreenLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.PlayHapticEffect
void PlayerController::PlayHapticEffect(class UObject* HapticEffect, uint8_t Hand, float Scale) {
    static class UFunction* Func = nullptr;
    PlayerController_PlayHapticEffect_Params Parms{};
    Parms.HapticEffect = HapticEffect;
    Parms.Hand = Hand;
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.PlayDynamicForceFeedback
void PlayerController::PlayDynamicForceFeedback(float intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, uint8_t Action, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    PlayerController_PlayDynamicForceFeedback_Params Parms{};
    Parms.intensity = intensity;
    Parms.Duration = Duration;
    Parms.bAffectsLeftLarge = bAffectsLeftLarge;
    Parms.bAffectsLeftSmall = bAffectsLeftSmall;
    Parms.bAffectsRightLarge = bAffectsRightLarge;
    Parms.bAffectsRightSmall = bAffectsRightSmall;
    Parms.Action = Action;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.Pause
void PlayerController::Pause() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.OnServerStartedVisualLogger
void PlayerController::OnServerStartedVisualLogger(bool bIsLogging) {
    static class UFunction* Func = nullptr;
    PlayerController_OnServerStartedVisualLogger_Params Parms{};
    Parms.bIsLogging = bIsLogging;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.LocalTravel
void PlayerController::LocalTravel(struct FString URL) {
    static class UFunction* Func = nullptr;
    PlayerController_LocalTravel_Params Parms{};
    Parms.URL = URL;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.IsMoveInputIgnored
bool PlayerController::IsMoveInputIgnored() {
    static class UFunction* Func = nullptr;
    PlayerController_IsMoveInputIgnored_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.IsLookInputIgnored
bool PlayerController::IsLookInputIgnored() {
    static class UFunction* Func = nullptr;
    PlayerController_IsLookInputIgnored_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.IsInputKeyDown
bool PlayerController::IsInputKeyDown(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_IsInputKeyDown_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.HasGameViewportFocus
bool PlayerController::HasGameViewportFocus() {
    static class UFunction* Func = nullptr;
    PlayerController_HasGameViewportFocus_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetViewportSize
void PlayerController::GetViewportSize(int32_t SizeX, int32_t SizeY) {
    static class UFunction* Func = nullptr;
    PlayerController_GetViewportSize_Params Parms{};
    Parms.SizeX = SizeX;
    Parms.SizeY = SizeY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.GetSpectatorPawn
class UObject* PlayerController::GetSpectatorPawn() {
    static class UFunction* Func = nullptr;
    PlayerController_GetSpectatorPawn_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetMousePosition
bool PlayerController::GetMousePosition(float LocationX, float LocationY) {
    static class UFunction* Func = nullptr;
    PlayerController_GetMousePosition_Params Parms{};
    Parms.LocationX = LocationX;
    Parms.LocationY = LocationY;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetInputVectorKeyState
uint8_t PlayerController::GetInputVectorKeyState(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputVectorKeyState_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetInputTouchState
void PlayerController::GetInputTouchState(uint8_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputTouchState_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    Parms.LocationX = LocationX;
    Parms.LocationY = LocationY;
    Parms.bIsCurrentlyPressed = bIsCurrentlyPressed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.GetInputMouseDelta
void PlayerController::GetInputMouseDelta(float DeltaX, float DeltaY) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputMouseDelta_Params Parms{};
    Parms.DeltaX = DeltaX;
    Parms.DeltaY = DeltaY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.GetInputMotionState
void PlayerController::GetInputMotionState(uint8_t Tilt, uint8_t RotationRate, uint8_t Gravity, uint8_t Acceleration) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputMotionState_Params Parms{};
    Parms.Tilt = Tilt;
    Parms.RotationRate = RotationRate;
    Parms.Gravity = Gravity;
    Parms.Acceleration = Acceleration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.GetInputKeyTimeDown
float PlayerController::GetInputKeyTimeDown(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputKeyTimeDown_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetInputAnalogStickState
void PlayerController::GetInputAnalogStickState(uint8_t WhichStick, float StickX, float StickY) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputAnalogStickState_Params Parms{};
    Parms.WhichStick = WhichStick;
    Parms.StickX = StickX;
    Parms.StickY = StickY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.GetInputAnalogKeyState
float PlayerController::GetInputAnalogKeyState(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_GetInputAnalogKeyState_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHud
class UObject* PlayerController::GetHud() {
    static class UFunction* Func = nullptr;
    PlayerController_GetHud_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHitResultUnderFingerForObjects
bool PlayerController::GetHitResultUnderFingerForObjects(uint8_t FingerIndex, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    PlayerController_GetHitResultUnderFingerForObjects_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHitResultUnderFingerByChannel
bool PlayerController::GetHitResultUnderFingerByChannel(uint8_t FingerIndex, uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    PlayerController_GetHitResultUnderFingerByChannel_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHitResultUnderFinger
bool PlayerController::GetHitResultUnderFinger(uint8_t FingerIndex, uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    PlayerController_GetHitResultUnderFinger_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHitResultUnderCursorForObjects
bool PlayerController::GetHitResultUnderCursorForObjects(struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    PlayerController_GetHitResultUnderCursorForObjects_Params Parms{};
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHitResultUnderCursorByChannel
bool PlayerController::GetHitResultUnderCursorByChannel(uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    PlayerController_GetHitResultUnderCursorByChannel_Params Parms{};
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetHitResultUnderCursor
bool PlayerController::GetHitResultUnderCursor(uint8_t TraceChannel, bool bTraceComplex, uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    PlayerController_GetHitResultUnderCursor_Params Parms{};
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.GetFocalLocation
uint8_t PlayerController::GetFocalLocation() {
    static class UFunction* Func = nullptr;
    PlayerController_GetFocalLocation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.FOVMultiplier
void PlayerController::FOVMultiplier(float NewFOVMultiplier) {
    static class UFunction* Func = nullptr;
    PlayerController_FOVMultiplier_Params Parms{};
    Parms.NewFOVMultiplier = NewFOVMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.FOV
void PlayerController::FOV(float NewFOV) {
    static class UFunction* Func = nullptr;
    PlayerController_FOV_Params Parms{};
    Parms.NewFOV = NewFOV;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.EnteredRegion
void PlayerController::EnteredRegion(uint8_t Region) {
    static class UFunction* Func = nullptr;
    PlayerController_EnteredRegion_Params Parms{};
    Parms.Region = Region;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.EnableCheats
void PlayerController::EnableCheats() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.DeprojectScreenPositionToWorld
bool PlayerController::DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, uint8_t WorldLocation, uint8_t WorldDirection) {
    static class UFunction* Func = nullptr;
    PlayerController_DeprojectScreenPositionToWorld_Params Parms{};
    Parms.ScreenX = ScreenX;
    Parms.ScreenY = ScreenY;
    Parms.WorldLocation = WorldLocation;
    Parms.WorldDirection = WorldDirection;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.DeprojectMousePositionToWorld
bool PlayerController::DeprojectMousePositionToWorld(uint8_t WorldLocation, uint8_t WorldDirection) {
    static class UFunction* Func = nullptr;
    PlayerController_DeprojectMousePositionToWorld_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.WorldDirection = WorldDirection;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerController.ConsoleKey
void PlayerController::ConsoleKey(uint8_t Key) {
    static class UFunction* Func = nullptr;
    PlayerController_ConsoleKey_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientWasKicked
void PlayerController::ClientWasKicked(struct FText KickReason) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientWasKicked_Params Parms{};
    Parms.KickReason = KickReason;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientVoiceHandshakeComplete
void PlayerController::ClientVoiceHandshakeComplete() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientUpdateLevelStreamingStatus
void PlayerController::ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientUpdateLevelStreamingStatus_Params Parms{};
    Parms.PackageName = PackageName;
    Parms.bNewShouldBeLoaded = bNewShouldBeLoaded;
    Parms.bNewShouldBeVisible = bNewShouldBeVisible;
    Parms.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad;
    Parms.LODIndex = LODIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientUnmutePlayer
void PlayerController::ClientUnmutePlayer(uint8_t PlayerId) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientUnmutePlayer_Params Parms{};
    Parms.PlayerId = PlayerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientTravelInternal
void PlayerController::ClientTravelInternal(struct FString URL, uint8_t TravelType, bool bSeamless, uint8_t MapPackageGuid) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientTravelInternal_Params Parms{};
    Parms.URL = URL;
    Parms.TravelType = TravelType;
    Parms.bSeamless = bSeamless;
    Parms.MapPackageGuid = MapPackageGuid;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientTravel
void PlayerController::ClientTravel(struct FString URL, uint8_t TravelType, bool bSeamless, uint8_t MapPackageGuid) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientTravel_Params Parms{};
    Parms.URL = URL;
    Parms.TravelType = TravelType;
    Parms.bSeamless = bSeamless;
    Parms.MapPackageGuid = MapPackageGuid;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientTeamMessage
void PlayerController::ClientTeamMessage(class UObject* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientTeamMessage_Params Parms{};
    Parms.SenderPlayerState = SenderPlayerState;
    Parms.S = S;
    Parms.Type = Type;
    Parms.MsgLifeTime = MsgLifeTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientStopForceFeedback
void PlayerController::ClientStopForceFeedback(class UObject* ForceFeedbackEffect, struct FName Tag) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientStopForceFeedback_Params Parms{};
    Parms.ForceFeedbackEffect = ForceFeedbackEffect;
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientStopCameraShake
void PlayerController::ClientStopCameraShake(class UClass* Shake) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientStopCameraShake_Params Parms{};
    Parms.Shake = Shake;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientStopCameraAnim
void PlayerController::ClientStopCameraAnim(class UObject* AnimToStop) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientStopCameraAnim_Params Parms{};
    Parms.AnimToStop = AnimToStop;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientStartOnlineSession
void PlayerController::ClientStartOnlineSession() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientSpawnCameraLensEffect
void PlayerController::ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSpawnCameraLensEffect_Params Parms{};
    Parms.LensEffectEmitterClass = LensEffectEmitterClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetViewTarget
void PlayerController::ClientSetViewTarget(class UObject* A, uint8_t TransitionParams) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetViewTarget_Params Parms{};
    Parms.A = A;
    Parms.TransitionParams = TransitionParams;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetSpectatorWaiting
void PlayerController::ClientSetSpectatorWaiting(bool bWaiting) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetSpectatorWaiting_Params Parms{};
    Parms.bWaiting = bWaiting;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetHUD
void PlayerController::ClientSetHUD(class UClass* NewHUDClass) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetHUD_Params Parms{};
    Parms.NewHUDClass = NewHUDClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetForceMipLevelsToBeResident
void PlayerController::ClientSetForceMipLevelsToBeResident(class UObject* Material, float ForceDuration, int32_t CinematicTextureGroups) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetForceMipLevelsToBeResident_Params Parms{};
    Parms.Material = Material;
    Parms.ForceDuration = ForceDuration;
    Parms.CinematicTextureGroups = CinematicTextureGroups;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetCinematicMode
void PlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetCinematicMode_Params Parms{};
    Parms.bInCinematicMode = bInCinematicMode;
    Parms.bAffectsMovement = bAffectsMovement;
    Parms.bAffectsTurning = bAffectsTurning;
    Parms.bAffectsHUD = bAffectsHUD;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetCameraMode
void PlayerController::ClientSetCameraMode(struct FName NewCamMode) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetCameraMode_Params Parms{};
    Parms.NewCamMode = NewCamMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetCameraFade
void PlayerController::ClientSetCameraFade(bool bEnableFading, uint8_t FadeColor, uint8_t FadeAlpha, float FadeTime, bool bFadeAudio) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientSetCameraFade_Params Parms{};
    Parms.bEnableFading = bEnableFading;
    Parms.FadeColor = FadeColor;
    Parms.FadeAlpha = FadeAlpha;
    Parms.FadeTime = FadeTime;
    Parms.bFadeAudio = bFadeAudio;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientSetBlockOnAsyncLoading
void PlayerController::ClientSetBlockOnAsyncLoading() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientReturnToMainMenu
void PlayerController::ClientReturnToMainMenu(struct FString ReturnReason) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientReturnToMainMenu_Params Parms{};
    Parms.ReturnReason = ReturnReason;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientRetryClientRestart
void PlayerController::ClientRetryClientRestart(class UObject* NewPawn) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientRetryClientRestart_Params Parms{};
    Parms.NewPawn = NewPawn;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientRestart
void PlayerController::ClientRestart(class UObject* NewPawn) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientRestart_Params Parms{};
    Parms.NewPawn = NewPawn;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientReset
void PlayerController::ClientReset() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientRepObjRef
void PlayerController::ClientRepObjRef(class UObject* Object) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientRepObjRef_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientReceiveLocalizedMessage
void PlayerController::ClientReceiveLocalizedMessage(class UClass* Message, int32_t Switch, class UObject* RelatedPlayerState_1, class UObject* RelatedPlayerState_2, class UObject* OptionalObject) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientReceiveLocalizedMessage_Params Parms{};
    Parms.Message = Message;
    Parms.Switch = Switch;
    Parms.RelatedPlayerState_1 = RelatedPlayerState_1;
    Parms.RelatedPlayerState_2 = RelatedPlayerState_2;
    Parms.OptionalObject = OptionalObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPrestreamTextures
void PlayerController::ClientPrestreamTextures(class UObject* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPrestreamTextures_Params Parms{};
    Parms.ForcedActor = ForcedActor;
    Parms.ForceDuration = ForceDuration;
    Parms.bEnableStreaming = bEnableStreaming;
    Parms.CinematicTextureGroups = CinematicTextureGroups;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPrepareMapChange
void PlayerController::ClientPrepareMapChange(struct FName levelName, bool bFirst, bool bLast) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPrepareMapChange_Params Parms{};
    Parms.levelName = levelName;
    Parms.bFirst = bFirst;
    Parms.bLast = bLast;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPlaySoundAtLocation
void PlayerController::ClientPlaySoundAtLocation(class UObject* Sound, uint8_t Location, float VolumeMultiplier, float PitchMultiplier) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPlaySoundAtLocation_Params Parms{};
    Parms.Sound = Sound;
    Parms.Location = Location;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPlaySound
void PlayerController::ClientPlaySound(class UObject* Sound, float VolumeMultiplier, float PitchMultiplier) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPlaySound_Params Parms{};
    Parms.Sound = Sound;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPlayForceFeedback
void PlayerController::ClientPlayForceFeedback(class UObject* ForceFeedbackEffect, bool bLooping, struct FName Tag) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPlayForceFeedback_Params Parms{};
    Parms.ForceFeedbackEffect = ForceFeedbackEffect;
    Parms.bLooping = bLooping;
    Parms.Tag = Tag;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPlayCameraShake
void PlayerController::ClientPlayCameraShake(class UClass* Shake, float Scale, uint8_t PlaySpace, uint8_t UserPlaySpaceRot) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPlayCameraShake_Params Parms{};
    Parms.Shake = Shake;
    Parms.Scale = Scale;
    Parms.PlaySpace = PlaySpace;
    Parms.UserPlaySpaceRot = UserPlaySpaceRot;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientPlayCameraAnim
void PlayerController::ClientPlayCameraAnim(class UObject* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, uint8_t Space, uint8_t CustomPlaySpace) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientPlayCameraAnim_Params Parms{};
    Parms.AnimToPlay = AnimToPlay;
    Parms.Scale = Scale;
    Parms.Rate = Rate;
    Parms.BlendInTime = BlendInTime;
    Parms.BlendOutTime = BlendOutTime;
    Parms.bLoop = bLoop;
    Parms.bRandomStartTime = bRandomStartTime;
    Parms.Space = Space;
    Parms.CustomPlaySpace = CustomPlaySpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientMutePlayer
void PlayerController::ClientMutePlayer(uint8_t PlayerId) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientMutePlayer_Params Parms{};
    Parms.PlayerId = PlayerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientMessage
void PlayerController::ClientMessage(struct FString S, struct FName Type, float MsgLifeTime) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientMessage_Params Parms{};
    Parms.S = S;
    Parms.Type = Type;
    Parms.MsgLifeTime = MsgLifeTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientIgnoreMoveInput
void PlayerController::ClientIgnoreMoveInput(bool bIgnore) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientIgnoreMoveInput_Params Parms{};
    Parms.bIgnore = bIgnore;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientIgnoreLookInput
void PlayerController::ClientIgnoreLookInput(bool bIgnore) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientIgnoreLookInput_Params Parms{};
    Parms.bIgnore = bIgnore;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientGotoState
void PlayerController::ClientGotoState(struct FName NewState) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientGotoState_Params Parms{};
    Parms.NewState = NewState;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientGameEnded
void PlayerController::ClientGameEnded(class UObject* EndGameFocus, bool bIsWinner) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientGameEnded_Params Parms{};
    Parms.EndGameFocus = EndGameFocus;
    Parms.bIsWinner = bIsWinner;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientForceGarbageCollection
void PlayerController::ClientForceGarbageCollection() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientFlushLevelStreaming
void PlayerController::ClientFlushLevelStreaming() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientEndOnlineSession
void PlayerController::ClientEndOnlineSession() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientEnableNetworkVoice
void PlayerController::ClientEnableNetworkVoice(bool bEnable) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientEnableNetworkVoice_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientCommitMapChange
void PlayerController::ClientCommitMapChange() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientClearCameraLensEffects
void PlayerController::ClientClearCameraLensEffects() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientCapBandwidth
void PlayerController::ClientCapBandwidth(int32_t Cap) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientCapBandwidth_Params Parms{};
    Parms.Cap = Cap;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClientCancelPendingMapChange
void PlayerController::ClientCancelPendingMapChange() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.ClientAddTextureStreamingLoc
void PlayerController::ClientAddTextureStreamingLoc(uint8_t InLoc, float Duration, bool bOverrideLocation) {
    static class UFunction* Func = nullptr;
    PlayerController_ClientAddTextureStreamingLoc_Params Parms{};
    Parms.InLoc = InLoc;
    Parms.Duration = Duration;
    Parms.bOverrideLocation = bOverrideLocation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ClearAudioListenerOverride
void PlayerController::ClearAudioListenerOverride() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerController.Camera
void PlayerController::Camera(struct FName NewMode) {
    static class UFunction* Func = nullptr;
    PlayerController_Camera_Params Parms{};
    Parms.NewMode = NewMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.AddYawInput
void PlayerController::AddYawInput(float Val) {
    static class UFunction* Func = nullptr;
    PlayerController_AddYawInput_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.AddRollInput
void PlayerController::AddRollInput(float Val) {
    static class UFunction* Func = nullptr;
    PlayerController_AddRollInput_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.AddPitchInput
void PlayerController::AddPitchInput(float Val) {
    static class UFunction* Func = nullptr;
    PlayerController_AddPitchInput_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerController.ActivateTouchInterface
void PlayerController::ActivateTouchInterface(class UObject* NewTouchInterface) {
    static class UFunction* Func = nullptr;
    PlayerController_ActivateTouchInterface_Params Parms{};
    Parms.NewTouchInterface = NewTouchInterface;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SphereComponent.SetSphereRadius
void SphereComponent::SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) {
    static class UFunction* Func = nullptr;
    SphereComponent_SetSphereRadius_Params Parms{};
    Parms.InSphereRadius = InSphereRadius;
    Parms.bUpdateOverlaps = bUpdateOverlaps;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SphereComponent.GetUnscaledSphereRadius
float SphereComponent::GetUnscaledSphereRadius() {
    static class UFunction* Func = nullptr;
    SphereComponent_GetUnscaledSphereRadius_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SphereComponent.GetShapeScale
float SphereComponent::GetShapeScale() {
    static class UFunction* Func = nullptr;
    SphereComponent_GetShapeScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SphereComponent.GetScaledSphereRadius
float SphereComponent::GetScaledSphereRadius() {
    static class UFunction* Func = nullptr;
    SphereComponent_GetScaledSphereRadius_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.StopMovementImmediately
void MovementComponent::StopMovementImmediately() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MovementComponent.SnapUpdatedComponentToPlane
void MovementComponent::SnapUpdatedComponentToPlane() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MovementComponent.SetUpdatedComponent
void MovementComponent::SetUpdatedComponent(class UObject* NewUpdatedComponent) {
    static class UFunction* Func = nullptr;
    MovementComponent_SetUpdatedComponent_Params Parms{};
    Parms.NewUpdatedComponent = NewUpdatedComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.SetPlaneConstraintOrigin
void MovementComponent::SetPlaneConstraintOrigin(uint8_t PlaneOrigin) {
    static class UFunction* Func = nullptr;
    MovementComponent_SetPlaneConstraintOrigin_Params Parms{};
    Parms.PlaneOrigin = PlaneOrigin;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.SetPlaneConstraintNormal
void MovementComponent::SetPlaneConstraintNormal(uint8_t PlaneNormal) {
    static class UFunction* Func = nullptr;
    MovementComponent_SetPlaneConstraintNormal_Params Parms{};
    Parms.PlaneNormal = PlaneNormal;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.SetPlaneConstraintFromVectors
void MovementComponent::SetPlaneConstraintFromVectors(uint8_t Forward, uint8_t Up) {
    static class UFunction* Func = nullptr;
    MovementComponent_SetPlaneConstraintFromVectors_Params Parms{};
    Parms.Forward = Forward;
    Parms.Up = Up;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.SetPlaneConstraintEnabled
void MovementComponent::SetPlaneConstraintEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    MovementComponent_SetPlaneConstraintEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.SetPlaneConstraintAxisSetting
void MovementComponent::SetPlaneConstraintAxisSetting(uint8_t NewAxisSetting) {
    static class UFunction* Func = nullptr;
    MovementComponent_SetPlaneConstraintAxisSetting_Params Parms{};
    Parms.NewAxisSetting = NewAxisSetting;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.PhysicsVolumeChanged
void MovementComponent::PhysicsVolumeChanged(class UObject* NewVolume) {
    static class UFunction* Func = nullptr;
    MovementComponent_PhysicsVolumeChanged_Params Parms{};
    Parms.NewVolume = NewVolume;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MovementComponent.K2_MoveUpdatedComponent
bool MovementComponent::K2_MoveUpdatedComponent(uint8_t Delta, uint8_t NewRotation, uint8_t OutHit, bool bSweep, bool bTeleport) {
    static class UFunction* Func = nullptr;
    MovementComponent_K2_MoveUpdatedComponent_Params Parms{};
    Parms.Delta = Delta;
    Parms.NewRotation = NewRotation;
    Parms.OutHit = OutHit;
    Parms.bSweep = bSweep;
    Parms.bTeleport = bTeleport;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.K2_GetModifiedMaxSpeed
float MovementComponent::K2_GetModifiedMaxSpeed() {
    static class UFunction* Func = nullptr;
    MovementComponent_K2_GetModifiedMaxSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.K2_GetMaxSpeedModifier
float MovementComponent::K2_GetMaxSpeedModifier() {
    static class UFunction* Func = nullptr;
    MovementComponent_K2_GetMaxSpeedModifier_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.IsExceedingMaxSpeed
bool MovementComponent::IsExceedingMaxSpeed(float MaxSpeed) {
    static class UFunction* Func = nullptr;
    MovementComponent_IsExceedingMaxSpeed_Params Parms{};
    Parms.MaxSpeed = MaxSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.GetPlaneConstraintOrigin
uint8_t MovementComponent::GetPlaneConstraintOrigin() {
    static class UFunction* Func = nullptr;
    MovementComponent_GetPlaneConstraintOrigin_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.GetPlaneConstraintNormal
uint8_t MovementComponent::GetPlaneConstraintNormal() {
    static class UFunction* Func = nullptr;
    MovementComponent_GetPlaneConstraintNormal_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.GetPlaneConstraintAxisSetting
uint8_t MovementComponent::GetPlaneConstraintAxisSetting() {
    static class UFunction* Func = nullptr;
    MovementComponent_GetPlaneConstraintAxisSetting_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.GetPhysicsVolume
class UObject* MovementComponent::GetPhysicsVolume() {
    static class UFunction* Func = nullptr;
    MovementComponent_GetPhysicsVolume_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.GetMaxSpeed
float MovementComponent::GetMaxSpeed() {
    static class UFunction* Func = nullptr;
    MovementComponent_GetMaxSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.GetGravityZ
float MovementComponent::GetGravityZ() {
    static class UFunction* Func = nullptr;
    MovementComponent_GetGravityZ_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.ConstrainNormalToPlane
uint8_t MovementComponent::ConstrainNormalToPlane(uint8_t Normal) {
    static class UFunction* Func = nullptr;
    MovementComponent_ConstrainNormalToPlane_Params Parms{};
    Parms.Normal = Normal;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.ConstrainLocationToPlane
uint8_t MovementComponent::ConstrainLocationToPlane(uint8_t Location) {
    static class UFunction* Func = nullptr;
    MovementComponent_ConstrainLocationToPlane_Params Parms{};
    Parms.Location = Location;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MovementComponent.ConstrainDirectionToPlane
uint8_t MovementComponent::ConstrainDirectionToPlane(uint8_t Direction) {
    static class UFunction* Func = nullptr;
    MovementComponent_ConstrainDirectionToPlane_Params Parms{};
    Parms.Direction = Direction;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavMovementComponent.StopMovementKeepPathing
void NavMovementComponent::StopMovementKeepPathing() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.NavMovementComponent.StopActiveMovement
void NavMovementComponent::StopActiveMovement() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.NavMovementComponent.IsSwimming
bool NavMovementComponent::IsSwimming() {
    static class UFunction* Func = nullptr;
    NavMovementComponent_IsSwimming_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavMovementComponent.IsMovingOnGround
bool NavMovementComponent::IsMovingOnGround() {
    static class UFunction* Func = nullptr;
    NavMovementComponent_IsMovingOnGround_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavMovementComponent.IsFlying
bool NavMovementComponent::IsFlying() {
    static class UFunction* Func = nullptr;
    NavMovementComponent_IsFlying_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavMovementComponent.IsFalling
bool NavMovementComponent::IsFalling() {
    static class UFunction* Func = nullptr;
    NavMovementComponent_IsFalling_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavMovementComponent.IsCrouching
bool NavMovementComponent::IsCrouching() {
    static class UFunction* Func = nullptr;
    NavMovementComponent_IsCrouching_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.K2_GetInputVector
uint8_t PawnMovementComponent::K2_GetInputVector() {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_K2_GetInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.IsMoveInputIgnored
bool PawnMovementComponent::IsMoveInputIgnored() {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_IsMoveInputIgnored_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.GetPendingInputVector
uint8_t PawnMovementComponent::GetPendingInputVector() {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_GetPendingInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.GetPawnOwner
class UObject* PawnMovementComponent::GetPawnOwner() {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_GetPawnOwner_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.GetLastInputVector
uint8_t PawnMovementComponent::GetLastInputVector() {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_GetLastInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.ConsumeInputVector
uint8_t PawnMovementComponent::ConsumeInputVector() {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_ConsumeInputVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PawnMovementComponent.AddInputVector
void PawnMovementComponent::AddInputVector(uint8_t WorldVector, bool bForce) {
    static class UFunction* Func = nullptr;
    PawnMovementComponent_AddInputVector_Params Parms{};
    Parms.WorldVector = WorldVector;
    Parms.bForce = bForce;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetUseAutoGears
void WheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetUseAutoGears_Params Parms{};
    Parms.bUseAuto = bUseAuto;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetThrottleInput
void WheeledVehicleMovementComponent::SetThrottleInput(float Throttle) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetThrottleInput_Params Parms{};
    Parms.Throttle = Throttle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetTargetGear
void WheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetTargetGear_Params Parms{};
    Parms.GearNum = GearNum;
    Parms.bImmediate = bImmediate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetSteeringInput
void WheeledVehicleMovementComponent::SetSteeringInput(float Steering) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetSteeringInput_Params Parms{};
    Parms.Steering = Steering;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetHandbrakeInput
void WheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetHandbrakeInput_Params Parms{};
    Parms.bNewHandbrake = bNewHandbrake;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetGroupsToIgnore
void WheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetGroupsToIgnore_Params Parms{};
    Parms.GroupFlags = GroupFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetGroupsToAvoid
void WheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetGroupsToAvoid_Params Parms{};
    Parms.GroupFlags = GroupFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetGearUp
void WheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetGearUp_Params Parms{};
    Parms.bNewGearUp = bNewGearUp;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetGearDown
void WheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetGearDown_Params Parms{};
    Parms.bNewGearDown = bNewGearDown;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetAvoidanceGroup
void WheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetAvoidanceGroup_Params Parms{};
    Parms.GroupFlags = GroupFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.SetAvoidanceEnabled
void WheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_SetAvoidanceEnabled_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.ServerUpdateState
void WheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear) {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_ServerUpdateState_Params Parms{};
    Parms.InSteeringInput = InSteeringInput;
    Parms.InThrottleInput = InThrottleInput;
    Parms.InBrakeInput = InBrakeInput;
    Parms.InHandbrakeInput = InHandbrakeInput;
    Parms.CurrentGear = CurrentGear;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.WheeledVehicleMovementComponent.GetUseAutoGears
bool WheeledVehicleMovementComponent::GetUseAutoGears() {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_GetUseAutoGears_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.WheeledVehicleMovementComponent.GetTargetGear
int32_t WheeledVehicleMovementComponent::GetTargetGear() {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_GetTargetGear_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.WheeledVehicleMovementComponent.GetForwardSpeed
float WheeledVehicleMovementComponent::GetForwardSpeed() {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_GetForwardSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.WheeledVehicleMovementComponent.GetEngineRotationSpeed
float WheeledVehicleMovementComponent::GetEngineRotationSpeed() {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_GetEngineRotationSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
float WheeledVehicleMovementComponent::GetEngineMaxRotationSpeed() {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.WheeledVehicleMovementComponent.GetCurrentGear
int32_t WheeledVehicleMovementComponent::GetCurrentGear() {
    static class UFunction* Func = nullptr;
    WheeledVehicleMovementComponent_GetCurrentGear_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.UnlockAIResources
void AnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
    static class UFunction* Func = nullptr;
    AnimInstance_UnlockAIResources_Params Parms{};
    Parms.bUnlockMovement = bUnlockMovement;
    Parms.UnlockAILogic = UnlockAILogic;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.TryGetPawnOwner
class UObject* AnimInstance::TryGetPawnOwner() {
    static class UFunction* Func = nullptr;
    AnimInstance_TryGetPawnOwner_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.StopSlotAnimation
void AnimInstance::StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName) {
    static class UFunction* Func = nullptr;
    AnimInstance_StopSlotAnimation_Params Parms{};
    Parms.InBlendOutTime = InBlendOutTime;
    Parms.SlotNodeName = SlotNodeName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.SetWorldSpaceAnchorTransform
void AnimInstance::SetWorldSpaceAnchorTransform(int32_t AnchorIndex, uint8_t WorldSpaceAnchorTransform, bool bSweep) {
    static class UFunction* Func = nullptr;
    AnimInstance_SetWorldSpaceAnchorTransform_Params Parms{};
    Parms.AnchorIndex = AnchorIndex;
    Parms.WorldSpaceAnchorTransform = WorldSpaceAnchorTransform;
    Parms.bSweep = bSweep;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.SetMorphTarget
void AnimInstance::SetMorphTarget(struct FName MorphTargetName, float Value) {
    static class UFunction* Func = nullptr;
    AnimInstance_SetMorphTarget_Params Parms{};
    Parms.MorphTargetName = MorphTargetName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
class UObject* AnimInstance::PlaySlotAnimationAsDynamicMontage(class UObject* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime) {
    static class UFunction* Func = nullptr;
    AnimInstance_PlaySlotAnimationAsDynamicMontage_Params Parms{};
    Parms.Asset = Asset;
    Parms.SlotNodeName = SlotNodeName;
    Parms.BlendInTime = BlendInTime;
    Parms.BlendOutTime = BlendOutTime;
    Parms.InPlayRate = InPlayRate;
    Parms.LoopCount = LoopCount;
    Parms.BlendOutTriggerTime = BlendOutTriggerTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.PlaySlotAnimation
float AnimInstance::PlaySlotAnimation(class UObject* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount) {
    static class UFunction* Func = nullptr;
    AnimInstance_PlaySlotAnimation_Params Parms{};
    Parms.Asset = Asset;
    Parms.SlotNodeName = SlotNodeName;
    Parms.BlendInTime = BlendInTime;
    Parms.BlendOutTime = BlendOutTime;
    Parms.InPlayRate = InPlayRate;
    Parms.LoopCount = LoopCount;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_Stop
void AnimInstance::Montage_Stop(float InBlendOutTime, class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_Stop_Params Parms{};
    Parms.InBlendOutTime = InBlendOutTime;
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_SetPlayRate
void AnimInstance::Montage_SetPlayRate(class UObject* Montage, float NewPlayRate) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_SetPlayRate_Params Parms{};
    Parms.Montage = Montage;
    Parms.NewPlayRate = NewPlayRate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_SetNextSection
void AnimInstance::Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_SetNextSection_Params Parms{};
    Parms.SectionNameToChange = SectionNameToChange;
    Parms.NextSection = NextSection;
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_SetCategoryPlayRate
void AnimInstance::Montage_SetCategoryPlayRate(struct FName CategoryName, float PlayRate) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_SetCategoryPlayRate_Params Parms{};
    Parms.CategoryName = CategoryName;
    Parms.PlayRate = PlayRate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_Play
float AnimInstance::Montage_Play(class UObject* MontageToPlay, float InPlayRate) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_Play_Params Parms{};
    Parms.MontageToPlay = MontageToPlay;
    Parms.InPlayRate = InPlayRate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_Pause
void AnimInstance::Montage_Pause(class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_Pause_Params Parms{};
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_JumpToSectionsEnd
void AnimInstance::Montage_JumpToSectionsEnd(struct FName SectionName, class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_JumpToSectionsEnd_Params Parms{};
    Parms.SectionName = SectionName;
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_JumpToSection
void AnimInstance::Montage_JumpToSection(struct FName SectionName, class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_JumpToSection_Params Parms{};
    Parms.SectionName = SectionName;
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.Montage_IsValidSlot
bool AnimInstance::Montage_IsValidSlot(struct FName SlotName) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_IsValidSlot_Params Parms{};
    Parms.SlotName = SlotName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_IsPlaying
bool AnimInstance::Montage_IsPlaying(class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_IsPlaying_Params Parms{};
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_IsInterrupted
bool AnimInstance::Montage_IsInterrupted() {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_IsInterrupted_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_IsActive
bool AnimInstance::Montage_IsActive(class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_IsActive_Params Parms{};
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_GetCurrentSection
struct FName AnimInstance::Montage_GetCurrentSection(class UObject* Montage) {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_GetCurrentSection_Params Parms{};
    Parms.Montage = Montage;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.Montage_GetCurrentCategory
struct FName AnimInstance::Montage_GetCurrentCategory() {
    static class UFunction* Func = nullptr;
    AnimInstance_Montage_GetCurrentCategory_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.LockAIResources
void AnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
    static class UFunction* Func = nullptr;
    AnimInstance_LockAIResources_Params Parms{};
    Parms.bLockMovement = bLockMovement;
    Parms.LockAILogic = LockAILogic;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.IsSyncGroupBetweenMarkers
bool AnimInstance::IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder) {
    static class UFunction* Func = nullptr;
    AnimInstance_IsSyncGroupBetweenMarkers_Params Parms{};
    Parms.InSyncGroupName = InSyncGroupName;
    Parms.PreviousMarker = PreviousMarker;
    Parms.NextMarker = NextMarker;
    Parms.bRespectMarkerOrder = bRespectMarkerOrder;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.IsPlayingSlotAnimation
bool AnimInstance::IsPlayingSlotAnimation(class UObject* Asset, struct FName SlotNodeName) {
    static class UFunction* Func = nullptr;
    AnimInstance_IsPlayingSlotAnimation_Params Parms{};
    Parms.Asset = Asset;
    Parms.SlotNodeName = SlotNodeName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.HasMarkerBeenHitThisFrame
bool AnimInstance::HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName) {
    static class UFunction* Func = nullptr;
    AnimInstance_HasMarkerBeenHitThisFrame_Params Parms{};
    Parms.SyncGroup = SyncGroup;
    Parms.MarkerName = MarkerName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetTimeToClosestMarker
bool AnimInstance::GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float OutMarkerTime) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetTimeToClosestMarker_Params Parms{};
    Parms.SyncGroup = SyncGroup;
    Parms.MarkerName = MarkerName;
    Parms.OutMarkerTime = OutMarkerTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetSyncGroupPosition
uint8_t AnimInstance::GetSyncGroupPosition(struct FName InSyncGroupName) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetSyncGroupPosition_Params Parms{};
    Parms.InSyncGroupName = InSyncGroupName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetStateWeight
float AnimInstance::GetStateWeight(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetStateWeight_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
float AnimInstance::GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetRelevantAnimTimeRemainingFraction_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetRelevantAnimTimeRemaining
float AnimInstance::GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetRelevantAnimTimeRemaining_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetRelevantAnimTimeFraction
float AnimInstance::GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetRelevantAnimTimeFraction_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetRelevantAnimTime
float AnimInstance::GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetRelevantAnimTime_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetRelevantAnimLength
float AnimInstance::GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetRelevantAnimLength_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetOwningComponent
class UObject* AnimInstance::GetOwningComponent() {
    static class UFunction* Func = nullptr;
    AnimInstance_GetOwningComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetOwningActor
class UObject* AnimInstance::GetOwningActor() {
    static class UFunction* Func = nullptr;
    AnimInstance_GetOwningActor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetNormalizedCurveValue
float AnimInstance::GetNormalizedCurveValue(struct FName CurveName) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetNormalizedCurveValue_Params Parms{};
    Parms.CurveName = CurveName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetListenerCurveValue
float AnimInstance::GetListenerCurveValue(struct FName CollectorName, struct FName CurveName, bool bNormalize) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetListenerCurveValue_Params Parms{};
    Parms.CollectorName = CollectorName;
    Parms.CurveName = CurveName;
    Parms.bNormalize = bNormalize;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
float AnimInstance::GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceTransitionTimeElapsedFraction_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.TransitionIndex = TransitionIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceTransitionTimeElapsed
float AnimInstance::GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceTransitionTimeElapsed_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.TransitionIndex = TransitionIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
float AnimInstance::GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceTransitionCrossfadeDuration_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.TransitionIndex = TransitionIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceStateWeight
float AnimInstance::GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceStateWeight_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    Parms.StateIndex = StateIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
float AnimInstance::GetInstanceCurrentStateElapsedTime(int32_t MachineIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceCurrentStateElapsedTime_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
float AnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params Parms{};
    Parms.AssetPlayerIndex = AssetPlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
float AnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params Parms{};
    Parms.AssetPlayerIndex = AssetPlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
float AnimInstance::GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceAssetPlayerTimeFraction_Params Parms{};
    Parms.AssetPlayerIndex = AssetPlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceAssetPlayerTime
float AnimInstance::GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceAssetPlayerTime_Params Parms{};
    Parms.AssetPlayerIndex = AssetPlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetInstanceAssetPlayerLength
float AnimInstance::GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetInstanceAssetPlayerLength_Params Parms{};
    Parms.AssetPlayerIndex = AssetPlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetCurveValue
float AnimInstance::GetCurveValue(struct FName CurveName) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetCurveValue_Params Parms{};
    Parms.CurveName = CurveName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetCurrentStateName
struct FName AnimInstance::GetCurrentStateName(int32_t MachineIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetCurrentStateName_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetCurrentStateElapsedTime
float AnimInstance::GetCurrentStateElapsedTime(int32_t MachineIndex) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetCurrentStateElapsedTime_Params Parms{};
    Parms.MachineIndex = MachineIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
float AnimInstance::GetAnimAssetPlayerTimeFromEndFraction(class UObject* AnimAsset, float CurrentTime) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetAnimAssetPlayerTimeFromEndFraction_Params Parms{};
    Parms.AnimAsset = AnimAsset;
    Parms.CurrentTime = CurrentTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
float AnimInstance::GetAnimAssetPlayerTimeFromEnd(class UObject* AnimAsset, float CurrentTime) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetAnimAssetPlayerTimeFromEnd_Params Parms{};
    Parms.AnimAsset = AnimAsset;
    Parms.CurrentTime = CurrentTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
float AnimInstance::GetAnimAssetPlayerTimeFraction(class UObject* AnimAsset, float CurrentTime) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetAnimAssetPlayerTimeFraction_Params Parms{};
    Parms.AnimAsset = AnimAsset;
    Parms.CurrentTime = CurrentTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetAnimAssetPlayerLength
float AnimInstance::GetAnimAssetPlayerLength(class UObject* AnimAsset) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetAnimAssetPlayerLength_Params Parms{};
    Parms.AnimAsset = AnimAsset;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.GetAnchorIndexByName
int32_t AnimInstance::GetAnchorIndexByName(struct FName AnchorName) {
    static class UFunction* Func = nullptr;
    AnimInstance_GetAnchorIndexByName_Params Parms{};
    Parms.AnchorName = AnchorName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.ClearMorphTargets
void AnimInstance::ClearMorphTargets() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.AnimInstance.CalculateDirection
float AnimInstance::CalculateDirection(uint8_t Velocity, uint8_t BaseRotation) {
    static class UFunction* Func = nullptr;
    AnimInstance_CalculateDirection_Params Parms{};
    Parms.Velocity = Velocity;
    Parms.BaseRotation = BaseRotation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimInstance.BlueprintUpdateAnimation
void AnimInstance::BlueprintUpdateAnimation(float DeltaTimeX) {
    static class UFunction* Func = nullptr;
    AnimInstance_BlueprintUpdateAnimation_Params Parms{};
    Parms.DeltaTimeX = DeltaTimeX;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimInstance.BlueprintPostEvaluateAnimation
void AnimInstance::BlueprintPostEvaluateAnimation() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.AnimInstance.BlueprintInitializeAnimation
void AnimInstance::BlueprintInitializeAnimation() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ChildActorComponent.SetChildActorClass
void ChildActorComponent::SetChildActorClass(class UClass* Class) {
    static class UFunction* Func = nullptr;
    ChildActorComponent_SetChildActorClass_Params Parms{};
    Parms.Class = Class;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier.IsDisabled
bool CameraModifier::IsDisabled() {
    static class UFunction* Func = nullptr;
    CameraModifier_IsDisabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CameraModifier.GetViewTarget
class UObject* CameraModifier::GetViewTarget() {
    static class UFunction* Func = nullptr;
    CameraModifier_GetViewTarget_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CameraModifier.EnableModifier
void CameraModifier::EnableModifier() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CameraModifier.DisableModifier
void CameraModifier::DisableModifier(bool bImmediate) {
    static class UFunction* Func = nullptr;
    CameraModifier_DisableModifier_Params Parms{};
    Parms.bImmediate = bImmediate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier.BlueprintModifyPostProcess
void CameraModifier::BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, uint8_t PostProcessSettings) {
    static class UFunction* Func = nullptr;
    CameraModifier_BlueprintModifyPostProcess_Params Parms{};
    Parms.DeltaTime = DeltaTime;
    Parms.PostProcessBlendWeight = PostProcessBlendWeight;
    Parms.PostProcessSettings = PostProcessSettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier.BlueprintModifyCamera
void CameraModifier::BlueprintModifyCamera(float DeltaTime, uint8_t ViewLocation, uint8_t ViewRotation, float FOV, uint8_t NewViewLocation, uint8_t NewViewRotation, float NewFOV) {
    static class UFunction* Func = nullptr;
    CameraModifier_BlueprintModifyCamera_Params Parms{};
    Parms.DeltaTime = DeltaTime;
    Parms.ViewLocation = ViewLocation;
    Parms.ViewRotation = ViewRotation;
    Parms.FOV = FOV;
    Parms.NewViewLocation = NewViewLocation;
    Parms.NewViewRotation = NewViewRotation;
    Parms.NewFOV = NewFOV;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetWalkableFloorZ
void CharacterMovementComponent::SetWalkableFloorZ(float InWalkableFloorZ) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetWalkableFloorZ_Params Parms{};
    Parms.InWalkableFloorZ = InWalkableFloorZ;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetWalkableFloorAngle
void CharacterMovementComponent::SetWalkableFloorAngle(float InWalkableFloorAngle) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetWalkableFloorAngle_Params Parms{};
    Parms.InWalkableFloorAngle = InWalkableFloorAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetMovementMode
void CharacterMovementComponent::SetMovementMode(uint8_t NewMovementMode, uint8_t NewCustomMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetMovementMode_Params Parms{};
    Parms.NewMovementMode = NewMovementMode;
    Parms.NewCustomMode = NewCustomMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetGroupsToIgnore
void CharacterMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetGroupsToIgnore_Params Parms{};
    Parms.GroupFlags = GroupFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetGroupsToAvoid
void CharacterMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetGroupsToAvoid_Params Parms{};
    Parms.GroupFlags = GroupFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetAvoidanceGroup
void CharacterMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetAvoidanceGroup_Params Parms{};
    Parms.GroupFlags = GroupFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.SetAvoidanceEnabled
void CharacterMovementComponent::SetAvoidanceEnabled(bool bEnable) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_SetAvoidanceEnabled_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ServerMoveOld
void CharacterMovementComponent::ServerMoveOld(float OldTimeStamp, uint8_t OldAccel, uint8_t OldMoveFlags) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ServerMoveOld_Params Parms{};
    Parms.OldTimeStamp = OldTimeStamp;
    Parms.OldAccel = OldAccel;
    Parms.OldMoveFlags = OldMoveFlags;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ServerMoveDualHybridRootMotion
void CharacterMovementComponent::ServerMoveDualHybridRootMotion(float TimeStamp0, uint8_t InAccel0, uint8_t PendingFlags, uint8_t View0, float TimeStamp, uint8_t InAccel, uint8_t ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint8_t View, class UObject* ClientMovementBase, struct FName ClientBaseBoneName, uint8_t ClientMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ServerMoveDualHybridRootMotion_Params Parms{};
    Parms.TimeStamp0 = TimeStamp0;
    Parms.InAccel0 = InAccel0;
    Parms.PendingFlags = PendingFlags;
    Parms.View0 = View0;
    Parms.TimeStamp = TimeStamp;
    Parms.InAccel = InAccel;
    Parms.ClientLoc = ClientLoc;
    Parms.NewFlags = NewFlags;
    Parms.ClientRoll = ClientRoll;
    Parms.View = View;
    Parms.ClientMovementBase = ClientMovementBase;
    Parms.ClientBaseBoneName = ClientBaseBoneName;
    Parms.ClientMovementMode = ClientMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ServerMoveDual
void CharacterMovementComponent::ServerMoveDual(float TimeStamp0, uint8_t InAccel0, uint8_t PendingFlags, uint8_t View0, float TimeStamp, uint8_t InAccel, uint8_t ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint8_t View, class UObject* ClientMovementBase, struct FName ClientBaseBoneName, uint8_t ClientMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ServerMoveDual_Params Parms{};
    Parms.TimeStamp0 = TimeStamp0;
    Parms.InAccel0 = InAccel0;
    Parms.PendingFlags = PendingFlags;
    Parms.View0 = View0;
    Parms.TimeStamp = TimeStamp;
    Parms.InAccel = InAccel;
    Parms.ClientLoc = ClientLoc;
    Parms.NewFlags = NewFlags;
    Parms.ClientRoll = ClientRoll;
    Parms.View = View;
    Parms.ClientMovementBase = ClientMovementBase;
    Parms.ClientBaseBoneName = ClientBaseBoneName;
    Parms.ClientMovementMode = ClientMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ServerMove
void CharacterMovementComponent::ServerMove(float TimeStamp, uint8_t InAccel, uint8_t ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, uint8_t View, class UObject* ClientMovementBase, struct FName ClientBaseBoneName, uint8_t ClientMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ServerMove_Params Parms{};
    Parms.TimeStamp = TimeStamp;
    Parms.InAccel = InAccel;
    Parms.ClientLoc = ClientLoc;
    Parms.CompressedMoveFlags = CompressedMoveFlags;
    Parms.ClientRoll = ClientRoll;
    Parms.View = View;
    Parms.ClientMovementBase = ClientMovementBase;
    Parms.ClientBaseBoneName = ClientBaseBoneName;
    Parms.ClientMovementMode = ClientMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.K2_GetWalkableFloorZ
float CharacterMovementComponent::K2_GetWalkableFloorZ() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_K2_GetWalkableFloorZ_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle
float CharacterMovementComponent::K2_GetWalkableFloorAngle() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_K2_GetWalkableFloorAngle_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration
float CharacterMovementComponent::K2_GetModifiedMaxAcceleration() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_K2_GetModifiedMaxAcceleration_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.IsWalking
bool CharacterMovementComponent::IsWalking() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_IsWalking_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.IsWalkable
bool CharacterMovementComponent::IsWalkable(uint8_t Hit) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_IsWalkable_Params Parms{};
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.IsSliding
bool CharacterMovementComponent::IsSliding() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_IsSliding_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetValidPerchRadius
float CharacterMovementComponent::GetValidPerchRadius() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetValidPerchRadius_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetSlidingNormal
uint8_t CharacterMovementComponent::GetSlidingNormal() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetSlidingNormal_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetPerchRadiusThreshold
float CharacterMovementComponent::GetPerchRadiusThreshold() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetPerchRadiusThreshold_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetMovementPrecisionRatio
float CharacterMovementComponent::GetMovementPrecisionRatio() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetMovementPrecisionRatio_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetMovementBase
class UObject* CharacterMovementComponent::GetMovementBase() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetMovementBase_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetMaxJumpHeight
float CharacterMovementComponent::GetMaxJumpHeight() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetMaxJumpHeight_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetMaxAcceleration
float CharacterMovementComponent::GetMaxAcceleration() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetMaxAcceleration_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity
uint8_t CharacterMovementComponent::GetImpartedMovementBaseVelocity() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetImpartedMovementBaseVelocity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetCurrentAcceleration
uint8_t CharacterMovementComponent::GetCurrentAcceleration() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetCurrentAcceleration_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetCharacterOwner
class UObject* CharacterMovementComponent::GetCharacterOwner() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetCharacterOwner_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.GetAnalogInputModifier
float CharacterMovementComponent::GetAnalogInputModifier() {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_GetAnalogInputModifier_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CharacterMovementComponent.DisableMovement
void CharacterMovementComponent::DisableMovement() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CharacterMovementComponent.ClientVeryShortAdjustPosition
void CharacterMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, uint8_t NewLoc, class UObject* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ClientVeryShortAdjustPosition_Params Parms{};
    Parms.TimeStamp = TimeStamp;
    Parms.NewLoc = NewLoc;
    Parms.NewBase = NewBase;
    Parms.NewBaseBoneName = NewBaseBoneName;
    Parms.bHasBase = bHasBase;
    Parms.bBaseRelativePosition = bBaseRelativePosition;
    Parms.ServerMovementMode = ServerMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ClientAdjustRootMotionSourcePosition
void CharacterMovementComponent::ClientAdjustRootMotionSourcePosition(float TimeStamp, uint8_t ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, uint8_t ServerLoc, uint8_t ServerRotation, float ServerVelZ, class UObject* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ClientAdjustRootMotionSourcePosition_Params Parms{};
    Parms.TimeStamp = TimeStamp;
    Parms.ServerRootMotion = ServerRootMotion;
    Parms.bHasAnimRootMotion = bHasAnimRootMotion;
    Parms.ServerMontageTrackPosition = ServerMontageTrackPosition;
    Parms.ServerLoc = ServerLoc;
    Parms.ServerRotation = ServerRotation;
    Parms.ServerVelZ = ServerVelZ;
    Parms.ServerBase = ServerBase;
    Parms.ServerBoneName = ServerBoneName;
    Parms.bHasBase = bHasBase;
    Parms.bBaseRelativePosition = bBaseRelativePosition;
    Parms.ServerMovementMode = ServerMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ClientAdjustRootMotionPosition
void CharacterMovementComponent::ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, uint8_t ServerLoc, uint8_t ServerRotation, float ServerVelZ, class UObject* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ClientAdjustRootMotionPosition_Params Parms{};
    Parms.TimeStamp = TimeStamp;
    Parms.ServerMontageTrackPosition = ServerMontageTrackPosition;
    Parms.ServerLoc = ServerLoc;
    Parms.ServerRotation = ServerRotation;
    Parms.ServerVelZ = ServerVelZ;
    Parms.ServerBase = ServerBase;
    Parms.ServerBoneName = ServerBoneName;
    Parms.bHasBase = bHasBase;
    Parms.bBaseRelativePosition = bBaseRelativePosition;
    Parms.ServerMovementMode = ServerMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ClientAdjustPosition
void CharacterMovementComponent::ClientAdjustPosition(float TimeStamp, uint8_t NewLoc, uint8_t NewVel, class UObject* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ClientAdjustPosition_Params Parms{};
    Parms.TimeStamp = TimeStamp;
    Parms.NewLoc = NewLoc;
    Parms.NewVel = NewVel;
    Parms.NewBase = NewBase;
    Parms.NewBaseBoneName = NewBaseBoneName;
    Parms.bHasBase = bHasBase;
    Parms.bBaseRelativePosition = bBaseRelativePosition;
    Parms.ServerMovementMode = ServerMovementMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.ClientAckGoodMove
void CharacterMovementComponent::ClientAckGoodMove(float TimeStamp) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_ClientAckGoodMove_Params Parms{};
    Parms.TimeStamp = TimeStamp;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.CapsuleTouched
void CharacterMovementComponent::CapsuleTouched(class UObject* Other, class UObject* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, uint8_t SweepResult) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_CapsuleTouched_Params Parms{};
    Parms.Other = Other;
    Parms.OtherComp = OtherComp;
    Parms.OtherBodyIndex = OtherBodyIndex;
    Parms.bFromSweep = bFromSweep;
    Parms.SweepResult = SweepResult;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.CalcVelocity
void CharacterMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_CalcVelocity_Params Parms{};
    Parms.DeltaTime = DeltaTime;
    Parms.Friction = Friction;
    Parms.bFluid = bFluid;
    Parms.BrakingDeceleration = BrakingDeceleration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.AddImpulse
void CharacterMovementComponent::AddImpulse(uint8_t Impulse, bool bVelocityChange) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_AddImpulse_Params Parms{};
    Parms.Impulse = Impulse;
    Parms.bVelocityChange = bVelocityChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CharacterMovementComponent.AddForce
void CharacterMovementComponent::AddForce(uint8_t Force) {
    static class UFunction* Func = nullptr;
    CharacterMovementComponent_AddForce_Params Parms{};
    Parms.Force = Force;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.WidgetReflector
void CheatManager::WidgetReflector() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.Walk
void CheatManager::Walk() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.ViewSelf
void CheatManager::ViewSelf() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.ViewPlayer
void CheatManager::ViewPlayer(struct FString S) {
    static class UFunction* Func = nullptr;
    CheatManager_ViewPlayer_Params Parms{};
    Parms.S = S;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.ViewClass
void CheatManager::ViewClass(class UClass* DesiredClass) {
    static class UFunction* Func = nullptr;
    CheatManager_ViewClass_Params Parms{};
    Parms.DesiredClass = DesiredClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.ViewActor
void CheatManager::ViewActor(struct FName ActorName) {
    static class UFunction* Func = nullptr;
    CheatManager_ViewActor_Params Parms{};
    Parms.ActorName = ActorName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.ToggleDebugCamera
void CheatManager::ToggleDebugCamera() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.ToggleAILogging
void CheatManager::ToggleAILogging() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.TextureAtlasVisualizer
void CheatManager::TextureAtlasVisualizer() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.TestCollisionDistance
void CheatManager::TestCollisionDistance() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.Teleport
void CheatManager::Teleport() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.Summon
void CheatManager::Summon(struct FString ClassName) {
    static class UFunction* Func = nullptr;
    CheatManager_Summon_Params Parms{};
    Parms.ClassName = ClassName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.StreamLevelOut
void CheatManager::StreamLevelOut(struct FName PackageName) {
    static class UFunction* Func = nullptr;
    CheatManager_StreamLevelOut_Params Parms{};
    Parms.PackageName = PackageName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.StreamLevelIn
void CheatManager::StreamLevelIn(struct FName PackageName) {
    static class UFunction* Func = nullptr;
    CheatManager_StreamLevelIn_Params Parms{};
    Parms.PackageName = PackageName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.Slomo
void CheatManager::Slomo(float T) {
    static class UFunction* Func = nullptr;
    CheatManager_Slomo_Params Parms{};
    Parms.T = T;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.SetWorldOrigin
void CheatManager::SetWorldOrigin() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.SetNavDrawDistance
void CheatManager::SetNavDrawDistance(float DrawDistance) {
    static class UFunction* Func = nullptr;
    CheatManager_SetNavDrawDistance_Params Parms{};
    Parms.DrawDistance = DrawDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.SetMouseSensitivityToDefault
void CheatManager::SetMouseSensitivityToDefault() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.ServerToggleAILogging
void CheatManager::ServerToggleAILogging() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.RebuildNavigation
void CheatManager::RebuildNavigation() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.PlayersOnly
void CheatManager::PlayersOnly() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.OnlyLoadLevel
void CheatManager::OnlyLoadLevel(struct FName PackageName) {
    static class UFunction* Func = nullptr;
    CheatManager_OnlyLoadLevel_Params Parms{};
    Parms.PackageName = PackageName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.LogLoc
void CheatManager::LogLoc() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.InvertMouse
void CheatManager::InvertMouse() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.God
void CheatManager::God() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.Ghost
void CheatManager::Ghost() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.FreezeFrame
void CheatManager::FreezeFrame(float Delay) {
    static class UFunction* Func = nullptr;
    CheatManager_FreezeFrame_Params Parms{};
    Parms.Delay = Delay;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.FontAtlasVisualizer
void CheatManager::FontAtlasVisualizer() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.Fly
void CheatManager::Fly() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.FlushLog
void CheatManager::FlushLog() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DumpVoiceMutingState
void CheatManager::DumpVoiceMutingState() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DumpPartyState
void CheatManager::DumpPartyState() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DumpOnlineSessionState
void CheatManager::DumpOnlineSessionState() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DestroyTarget
void CheatManager::DestroyTarget() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DestroyPawns
void CheatManager::DestroyPawns(class UClass* aClass) {
    static class UFunction* Func = nullptr;
    CheatManager_DestroyPawns_Params Parms{};
    Parms.aClass = aClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.DestroyAllPawnsExceptTarget
void CheatManager::DestroyAllPawnsExceptTarget() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DestroyAll
void CheatManager::DestroyAll(class UClass* aClass) {
    static class UFunction* Func = nullptr;
    CheatManager_DestroyAll_Params Parms{};
    Parms.aClass = aClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.DebugCapsuleSweepSize
void CheatManager::DebugCapsuleSweepSize(float HalfHeight, float Radius) {
    static class UFunction* Func = nullptr;
    CheatManager_DebugCapsuleSweepSize_Params Parms{};
    Parms.HalfHeight = HalfHeight;
    Parms.Radius = Radius;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.DebugCapsuleSweepPawn
void CheatManager::DebugCapsuleSweepPawn() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DebugCapsuleSweepComplex
void CheatManager::DebugCapsuleSweepComplex(bool bTraceComplex) {
    static class UFunction* Func = nullptr;
    CheatManager_DebugCapsuleSweepComplex_Params Parms{};
    Parms.bTraceComplex = bTraceComplex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.DebugCapsuleSweepClear
void CheatManager::DebugCapsuleSweepClear() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DebugCapsuleSweepChannel
void CheatManager::DebugCapsuleSweepChannel(uint8_t Channel) {
    static class UFunction* Func = nullptr;
    CheatManager_DebugCapsuleSweepChannel_Params Parms{};
    Parms.Channel = Channel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.DebugCapsuleSweepCapture
void CheatManager::DebugCapsuleSweepCapture() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DebugCapsuleSweep
void CheatManager::DebugCapsuleSweep() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CheatManager.DamageTarget
void CheatManager::DamageTarget(float DamageAmount) {
    static class UFunction* Func = nullptr;
    CheatManager_DamageTarget_Params Parms{};
    Parms.DamageAmount = DamageAmount;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.ChangeSize
void CheatManager::ChangeSize(float F) {
    static class UFunction* Func = nullptr;
    CheatManager_ChangeSize_Params Parms{};
    Parms.F = F;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.BugItStringCreator
void CheatManager::BugItStringCreator(uint8_t ViewLocation, uint8_t ViewRotation, struct FString GoString, struct FString LocString) {
    static class UFunction* Func = nullptr;
    CheatManager_BugItStringCreator_Params Parms{};
    Parms.ViewLocation = ViewLocation;
    Parms.ViewRotation = ViewRotation;
    Parms.GoString = GoString;
    Parms.LocString = LocString;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.BugItGo
void CheatManager::BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) {
    static class UFunction* Func = nullptr;
    CheatManager_BugItGo_Params Parms{};
    Parms.X = X;
    Parms.Y = Y;
    Parms.Z = Z;
    Parms.Pitch = Pitch;
    Parms.Yaw = Yaw;
    Parms.Roll = Roll;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CheatManager.BugIt
void CheatManager::BugIt(struct FString ScreenShotDescription) {
    static class UFunction* Func = nullptr;
    CheatManager_BugIt_Params Parms{};
    Parms.ScreenShotDescription = ScreenShotDescription;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendLightRigBase.TurnOnPostCinematicEvent
void BendLightRigBase::TurnOnPostCinematicEvent(struct FName CinematicName) {
    static class UFunction* Func = nullptr;
    BendLightRigBase_TurnOnPostCinematicEvent_Params Parms{};
    Parms.CinematicName = CinematicName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendLightRigBase.TurnOffPreCinematicEvent
void BendLightRigBase::TurnOffPreCinematicEvent(struct FName CinematicName) {
    static class UFunction* Func = nullptr;
    BendLightRigBase_TurnOffPreCinematicEvent_Params Parms{};
    Parms.CinematicName = CinematicName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BoxComponent.SetBoxExtent
void BoxComponent::SetBoxExtent(uint8_t InBoxExtent, bool bUpdateOverlaps) {
    static class UFunction* Func = nullptr;
    BoxComponent_SetBoxExtent_Params Parms{};
    Parms.InBoxExtent = InBoxExtent;
    Parms.bUpdateOverlaps = bUpdateOverlaps;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BoxComponent.GetUnscaledBoxExtent
uint8_t BoxComponent::GetUnscaledBoxExtent() {
    static class UFunction* Func = nullptr;
    BoxComponent_GetUnscaledBoxExtent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BoxComponent.GetScaledBoxExtent
uint8_t BoxComponent::GetScaledBoxExtent() {
    static class UFunction* Func = nullptr;
    BoxComponent_GetScaledBoxExtent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimSingleNodeInstance.StopAnim
void AnimSingleNodeInstance::StopAnim() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.AnimSingleNodeInstance.SetVertexAnimation
void AnimSingleNodeInstance::SetVertexAnimation(class UObject* NewVertexAnim, bool bIsLooping, float InPlayRate) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetVertexAnimation_Params Parms{};
    Parms.NewVertexAnim = NewVertexAnim;
    Parms.bIsLooping = bIsLooping;
    Parms.InPlayRate = InPlayRate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetReverse
void AnimSingleNodeInstance::SetReverse(bool bInReverse) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetReverse_Params Parms{};
    Parms.bInReverse = bInReverse;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetPosition
void AnimSingleNodeInstance::SetPosition(float InPosition, bool bFireNotifies) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetPosition_Params Parms{};
    Parms.InPosition = InPosition;
    Parms.bFireNotifies = bFireNotifies;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetPlayRate
void AnimSingleNodeInstance::SetPlayRate(float InPlayRate) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetPlayRate_Params Parms{};
    Parms.InPlayRate = InPlayRate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetPlaying
void AnimSingleNodeInstance::SetPlaying(bool bIsPlaying) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetPlaying_Params Parms{};
    Parms.bIsPlaying = bIsPlaying;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetLooping
void AnimSingleNodeInstance::SetLooping(bool bIsLooping) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetLooping_Params Parms{};
    Parms.bIsLooping = bIsLooping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetBlendSpaceInput
void AnimSingleNodeInstance::SetBlendSpaceInput(uint8_t InBlendInput) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetBlendSpaceInput_Params Parms{};
    Parms.InBlendInput = InBlendInput;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.SetAnimationAsset
void AnimSingleNodeInstance::SetAnimationAsset(class UObject* NewAsset, bool bIsLooping, float InPlayRate) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_SetAnimationAsset_Params Parms{};
    Parms.NewAsset = NewAsset;
    Parms.bIsLooping = bIsLooping;
    Parms.InPlayRate = InPlayRate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.PlayAnim
void AnimSingleNodeInstance::PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition) {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_PlayAnim_Params Parms{};
    Parms.bIsLooping = bIsLooping;
    Parms.InPlayRate = InPlayRate;
    Parms.InStartPosition = InStartPosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSingleNodeInstance.GetLength
float AnimSingleNodeInstance::GetLength() {
    static class UFunction* Func = nullptr;
    AnimSingleNodeInstance_GetLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkinnedMeshComponent.UnHideBoneByName
void SkinnedMeshComponent::UnHideBoneByName(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_UnHideBoneByName_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.TransformToBoneSpace
void SkinnedMeshComponent::TransformToBoneSpace(struct FName BoneName, uint8_t InPosition, uint8_t InRotation, uint8_t OutPosition, uint8_t OutRotation) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_TransformToBoneSpace_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InPosition = InPosition;
    Parms.InRotation = InRotation;
    Parms.OutPosition = OutPosition;
    Parms.OutRotation = OutRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.TransformFromBoneSpace
void SkinnedMeshComponent::TransformFromBoneSpace(struct FName BoneName, uint8_t InPosition, uint8_t InRotation, uint8_t OutPosition, uint8_t OutRotation) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_TransformFromBoneSpace_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InPosition = InPosition;
    Parms.InRotation = InRotation;
    Parms.OutPosition = OutPosition;
    Parms.OutRotation = OutRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.SetSkeletalMesh
void SkinnedMeshComponent::SetSkeletalMesh(class UObject* NewMesh) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_SetSkeletalMesh_Params Parms{};
    Parms.NewMesh = NewMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.SetPhysicsAsset
void SkinnedMeshComponent::SetPhysicsAsset(class UObject* NewPhysicsAsset, bool bForceReInit) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_SetPhysicsAsset_Params Parms{};
    Parms.NewPhysicsAsset = NewPhysicsAsset;
    Parms.bForceReInit = bForceReInit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.SetMinLOD
void SkinnedMeshComponent::SetMinLOD(int32_t InNewMinLOD) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_SetMinLOD_Params Parms{};
    Parms.InNewMinLOD = InNewMinLOD;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.SetMasterPoseComponent
void SkinnedMeshComponent::SetMasterPoseComponent(class UObject* NewMasterBoneComponent) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_SetMasterPoseComponent_Params Parms{};
    Parms.NewMasterBoneComponent = NewMasterBoneComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.SetForcedLOD
void SkinnedMeshComponent::SetForcedLOD(int32_t InNewForcedLOD) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_SetForcedLOD_Params Parms{};
    Parms.InNewForcedLOD = InNewForcedLOD;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.SetAllowDynamicNormalRecalculation
void SkinnedMeshComponent::SetAllowDynamicNormalRecalculation(bool Value) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_SetAllowDynamicNormalRecalculation_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.IsBoneHiddenByName
bool SkinnedMeshComponent::IsBoneHiddenByName(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_IsBoneHiddenByName_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkinnedMeshComponent.HideBoneByName
void SkinnedMeshComponent::HideBoneByName(struct FName BoneName, uint8_t PhysBodyOption) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_HideBoneByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.PhysBodyOption = PhysBodyOption;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkinnedMeshComponent.GetSocketBoneName
struct FName SkinnedMeshComponent::GetSocketBoneName(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_GetSocketBoneName_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkinnedMeshComponent.GetParentBone
struct FName SkinnedMeshComponent::GetParentBone(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_GetParentBone_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkinnedMeshComponent.GetBoneName
struct FName SkinnedMeshComponent::GetBoneName(int32_t BoneIndex) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_GetBoneName_Params Parms{};
    Parms.BoneIndex = BoneIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkinnedMeshComponent.GetBoneIndex
int32_t SkinnedMeshComponent::GetBoneIndex(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_GetBoneIndex_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkinnedMeshComponent.BoneIsChildOf
bool SkinnedMeshComponent::BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName) {
    static class UFunction* Func = nullptr;
    SkinnedMeshComponent_BoneIsChildOf_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.ParentBoneName = ParentBoneName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
void SkeletalMeshComponent::UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params Parms{};
    Parms.bRestoreSimulationSpace = bRestoreSimulationSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.Stop
void SkeletalMeshComponent::Stop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.SetSkeletalMeshWithoutResettingAnimation
void SkeletalMeshComponent::SetSkeletalMeshWithoutResettingAnimation(class UObject* NewMesh) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetSkeletalMeshWithoutResettingAnimation_Params Parms{};
    Parms.NewMesh = NewMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetPosition
void SkeletalMeshComponent::SetPosition(float InPos, bool bFireNotifies) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetPosition_Params Parms{};
    Parms.InPos = InPos;
    Parms.bFireNotifies = bFireNotifies;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetPlayRate
void SkeletalMeshComponent::SetPlayRate(float Rate) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetPlayRate_Params Parms{};
    Parms.Rate = Rate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
void SkeletalMeshComponent::SetPhysicsBlendWeight(float PhysicsBlendWeight) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetPhysicsBlendWeight_Params Parms{};
    Parms.PhysicsBlendWeight = PhysicsBlendWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetNamedMotorsAngularVelocityDrive
void SkeletalMeshComponent::SetNamedMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, struct TArray<uint8_t> BoneNames, bool bSetOtherBodiesToComplement) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetNamedMotorsAngularVelocityDrive_Params Parms{};
    Parms.bEnableSwingDrive = bEnableSwingDrive;
    Parms.bEnableTwistDrive = bEnableTwistDrive;
    Parms.BoneNames = BoneNames;
    Parms.bSetOtherBodiesToComplement = bSetOtherBodiesToComplement;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetNamedMotorsAngularPositionDrive
void SkeletalMeshComponent::SetNamedMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, struct TArray<uint8_t> BoneNames, bool bSetOtherBodiesToComplement) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetNamedMotorsAngularPositionDrive_Params Parms{};
    Parms.bEnableSwingDrive = bEnableSwingDrive;
    Parms.bEnableTwistDrive = bEnableTwistDrive;
    Parms.BoneNames = BoneNames;
    Parms.bSetOtherBodiesToComplement = bSetOtherBodiesToComplement;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetMorphTarget
void SkeletalMeshComponent::SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetMorphTarget_Params Parms{};
    Parms.MorphTargetName = MorphTargetName;
    Parms.Value = Value;
    Parms.bRemoveZeroWeight = bRemoveZeroWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetLook
void SkeletalMeshComponent::SetLook(class UObject* NewLook, bool bNeedsToWorkWithRagdoll) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetLook_Params Parms{};
    Parms.NewLook = NewLook;
    Parms.bNeedsToWorkWithRagdoll = bNeedsToWorkWithRagdoll;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
void SkeletalMeshComponent::SetEnablePhysicsBlending(bool bNewBlendPhysics) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetEnablePhysicsBlending_Params Parms{};
    Parms.bNewBlendPhysics = bNewBlendPhysics;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetDefaultAnimToPlay
void SkeletalMeshComponent::SetDefaultAnimToPlay(class UObject* NewAnim) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetDefaultAnimToPlay_Params Parms{};
    Parms.NewAnim = NewAnim;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
void SkeletalMeshComponent::SetClothMaxDistanceScale(float Scale) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetClothMaxDistanceScale_Params Parms{};
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAnimInstanceClass
void SkeletalMeshComponent::SetAnimInstanceClass(class UClass* NewClass) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAnimInstanceClass_Params Parms{};
    Parms.NewClass = NewClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAnimationMode
void SkeletalMeshComponent::SetAnimationMode(uint8_t InAnimationMode) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAnimationMode_Params Parms{};
    Parms.InAnimationMode = InAnimationMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAnimation
void SkeletalMeshComponent::SetAnimation(class UObject* NewAnimToPlay) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAnimation_Params Parms{};
    Parms.NewAnimToPlay = NewAnimToPlay;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAngularLimits
void SkeletalMeshComponent::SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAngularLimits_Params Parms{};
    Parms.InBoneName = InBoneName;
    Parms.Swing1LimitAngle = Swing1LimitAngle;
    Parms.TwistLimitAngle = TwistLimitAngle;
    Parms.Swing2LimitAngle = Swing2LimitAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
void SkeletalMeshComponent::SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params Parms{};
    Parms.bEnableSwingDrive = bEnableSwingDrive;
    Parms.bEnableTwistDrive = bEnableTwistDrive;
    Parms.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
void SkeletalMeshComponent::SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params Parms{};
    Parms.bEnableSwingDrive = bEnableSwingDrive;
    Parms.bEnableTwistDrive = bEnableTwistDrive;
    Parms.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
void SkeletalMeshComponent::SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params Parms{};
    Parms.InSpring = InSpring;
    Parms.InDamping = InDamping;
    Parms.InForceLimit = InForceLimit;
    Parms.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
void SkeletalMeshComponent::SetAllBodiesSimulatePhysics(bool bNewSimulate) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params Parms{};
    Parms.bNewSimulate = bNewSimulate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
void SkeletalMeshComponent::SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params Parms{};
    Parms.PhysicsBlendWeight = PhysicsBlendWeight;
    Parms.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
void SkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics(struct FName InBoneName, bool bNewSimulate) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params Parms{};
    Parms.InBoneName = InBoneName;
    Parms.bNewSimulate = bNewSimulate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
void SkeletalMeshComponent::SetAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params Parms{};
    Parms.InBoneName = InBoneName;
    Parms.PhysicsBlendWeight = PhysicsBlendWeight;
    Parms.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.ResetClothTeleportMode
void SkeletalMeshComponent::ResetClothTeleportMode() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
void SkeletalMeshComponent::ResetAllBodiesSimulatePhysics() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.ReleaseAnchoring
void SkeletalMeshComponent::ReleaseAnchoring() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.PlayAnimation
void SkeletalMeshComponent::PlayAnimation(class UObject* NewAnimToPlay, bool bLooping) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_PlayAnimation_Params Parms{};
    Parms.NewAnimToPlay = NewAnimToPlay;
    Parms.bLooping = bLooping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.Play
void SkeletalMeshComponent::Play(bool bLooping) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_Play_Params Parms{};
    Parms.bLooping = bLooping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.IsPlaying
bool SkeletalMeshComponent::IsPlaying() {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_IsPlaying_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.GetPosition
float SkeletalMeshComponent::GetPosition() {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.GetPlayRate
float SkeletalMeshComponent::GetPlayRate() {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetPlayRate_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.GetMorphTarget
float SkeletalMeshComponent::GetMorphTarget(struct FName MorphTargetName) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetMorphTarget_Params Parms{};
    Parms.MorphTargetName = MorphTargetName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.GetCurrentJointAngles
void SkeletalMeshComponent::GetCurrentJointAngles(struct FName InBoneName, float Swing1Angle, float TwistAngle, float Swing2Angle) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetCurrentJointAngles_Params Parms{};
    Parms.InBoneName = InBoneName;
    Parms.Swing1Angle = Swing1Angle;
    Parms.TwistAngle = TwistAngle;
    Parms.Swing2Angle = Swing2Angle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
float SkeletalMeshComponent::GetClothMaxDistanceScale() {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetClothMaxDistanceScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.GetAnimInstance
class UObject* SkeletalMeshComponent::GetAnimInstance() {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetAnimInstance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.GetAnimationMode
uint8_t SkeletalMeshComponent::GetAnimationMode() {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_GetAnimationMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
void SkeletalMeshComponent::ForceClothNextUpdateTeleportAndReset() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
void SkeletalMeshComponent::ForceClothNextUpdateTeleport() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.DisableMeshMaterialVariation
void SkeletalMeshComponent::DisableMeshMaterialVariation(bool bDisable) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_DisableMeshMaterialVariation_Params Parms{};
    Parms.bDisable = bDisable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.ClearMorphTargets
void SkeletalMeshComponent::ClearMorphTargets() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.BreakConstraint
void SkeletalMeshComponent::BreakConstraint(uint8_t Impulse, uint8_t HitLocation, struct FName InBoneName) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_BreakConstraint_Params Parms{};
    Parms.Impulse = Impulse;
    Parms.HitLocation = HitLocation;
    Parms.InBoneName = InBoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
void SkeletalMeshComponent::BindClothToMasterPoseComponent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
void SkeletalMeshComponent::AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    static class UFunction* Func = nullptr;
    SkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params Parms{};
    Parms.InBoneName = InBoneName;
    Parms.AddPhysicsBlendWeight = AddPhysicsBlendWeight;
    Parms.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameInstance.ReceiveShutdown
void GameInstance::ReceiveShutdown() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameInstance.ReceiveInit
void GameInstance::ReceiveInit() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameInstance.HandleTravelError
void GameInstance::HandleTravelError(uint8_t FailureType) {
    static class UFunction* Func = nullptr;
    GameInstance_HandleTravelError_Params Parms{};
    Parms.FailureType = FailureType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameInstance.HandleNetworkError
void GameInstance::HandleNetworkError(uint8_t FailureType, bool bIsServer) {
    static class UFunction* Func = nullptr;
    GameInstance_HandleNetworkError_Params Parms{};
    Parms.FailureType = FailureType;
    Parms.bIsServer = bIsServer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameInstance.DebugRemovePlayer
void GameInstance::DebugRemovePlayer(int32_t ControllerId) {
    static class UFunction* Func = nullptr;
    GameInstance_DebugRemovePlayer_Params Parms{};
    Parms.ControllerId = ControllerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameInstance.DebugCreatePlayer
void GameInstance::DebugCreatePlayer(int32_t ControllerId) {
    static class UFunction* Func = nullptr;
    GameInstance_DebugCreatePlayer_Params Parms{};
    Parms.ControllerId = ControllerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.StartPlay
void GameMode::StartPlay() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameMode.StartMatch
void GameMode::StartMatch() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameMode.SpawnDefaultPawnFor
class UObject* GameMode::SpawnDefaultPawnFor(class UObject* NewPlayer, class UObject* StartSpot) {
    static class UFunction* Func = nullptr;
    GameMode_SpawnDefaultPawnFor_Params Parms{};
    Parms.NewPlayer = NewPlayer;
    Parms.StartSpot = StartSpot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.ShouldReset
bool GameMode::ShouldReset(class UObject* ActorToReset) {
    static class UFunction* Func = nullptr;
    GameMode_ShouldReset_Params Parms{};
    Parms.ActorToReset = ActorToReset;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.SetBandwidthLimit
void GameMode::SetBandwidthLimit(float AsyncIOBandwidthLimit) {
    static class UFunction* Func = nullptr;
    GameMode_SetBandwidthLimit_Params Parms{};
    Parms.AsyncIOBandwidthLimit = AsyncIOBandwidthLimit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.ReturnToMainMenuHost
void GameMode::ReturnToMainMenuHost() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameMode.RestartGame
void GameMode::RestartGame() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameMode.ResetLevel
void GameMode::ResetLevel() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameMode.ReadyToStartMatch
bool GameMode::ReadyToStartMatch() {
    static class UFunction* Func = nullptr;
    GameMode_ReadyToStartMatch_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.ReadyToEndMatch
bool GameMode::ReadyToEndMatch() {
    static class UFunction* Func = nullptr;
    GameMode_ReadyToEndMatch_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.PlayerCanRestart
bool GameMode::PlayerCanRestart(class UObject* Player) {
    static class UFunction* Func = nullptr;
    GameMode_PlayerCanRestart_Params Parms{};
    Parms.Player = Player;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.MustSpectate
bool GameMode::MustSpectate(class UObject* NewPlayerController) {
    static class UFunction* Func = nullptr;
    GameMode_MustSpectate_Params Parms{};
    Parms.NewPlayerController = NewPlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.K2_PostLogin
void GameMode::K2_PostLogin(class UObject* NewPlayer) {
    static class UFunction* Func = nullptr;
    GameMode_K2_PostLogin_Params Parms{};
    Parms.NewPlayer = NewPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.K2_OnSwapPlayerControllers
void GameMode::K2_OnSwapPlayerControllers(class UObject* OldPC, class UObject* NewPC) {
    static class UFunction* Func = nullptr;
    GameMode_K2_OnSwapPlayerControllers_Params Parms{};
    Parms.OldPC = OldPC;
    Parms.NewPC = NewPC;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.K2_OnSetMatchState
void GameMode::K2_OnSetMatchState(struct FName NewState) {
    static class UFunction* Func = nullptr;
    GameMode_K2_OnSetMatchState_Params Parms{};
    Parms.NewState = NewState;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.K2_OnRestartPlayer
void GameMode::K2_OnRestartPlayer(class UObject* NewPlayer) {
    static class UFunction* Func = nullptr;
    GameMode_K2_OnRestartPlayer_Params Parms{};
    Parms.NewPlayer = NewPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.K2_OnLogout
void GameMode::K2_OnLogout(class UObject* ExitingController) {
    static class UFunction* Func = nullptr;
    GameMode_K2_OnLogout_Params Parms{};
    Parms.ExitingController = ExitingController;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.K2_OnChangeName
void GameMode::K2_OnChangeName(class UObject* Other, struct FString NewName, bool bNameChange) {
    static class UFunction* Func = nullptr;
    GameMode_K2_OnChangeName_Params Parms{};
    Parms.Other = Other;
    Parms.NewName = NewName;
    Parms.bNameChange = bNameChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.K2_FindPlayerStart
class UObject* GameMode::K2_FindPlayerStart(class UObject* Player) {
    static class UFunction* Func = nullptr;
    GameMode_K2_FindPlayerStart_Params Parms{};
    Parms.Player = Player;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.IsMatchInProgress
bool GameMode::IsMatchInProgress() {
    static class UFunction* Func = nullptr;
    GameMode_IsMatchInProgress_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.InitStartSpot
void GameMode::InitStartSpot(class UObject* StartSpot, class UObject* NewPlayer) {
    static class UFunction* Func = nullptr;
    GameMode_InitStartSpot_Params Parms{};
    Parms.StartSpot = StartSpot;
    Parms.NewPlayer = NewPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.HasMatchStarted
bool GameMode::HasMatchStarted() {
    static class UFunction* Func = nullptr;
    GameMode_HasMatchStarted_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.HasMatchEnded
bool GameMode::HasMatchEnded() {
    static class UFunction* Func = nullptr;
    GameMode_HasMatchEnded_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.GetNumPlayers
int32_t GameMode::GetNumPlayers() {
    static class UFunction* Func = nullptr;
    GameMode_GetNumPlayers_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.GetMatchState
struct FName GameMode::GetMatchState() {
    static class UFunction* Func = nullptr;
    GameMode_GetMatchState_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.GetDefaultPawnClassForController
class UClass* GameMode::GetDefaultPawnClassForController(class UObject* InController) {
    static class UFunction* Func = nullptr;
    GameMode_GetDefaultPawnClassForController_Params Parms{};
    Parms.InController = InController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.FindPlayerStart
class UObject* GameMode::FindPlayerStart(class UObject* Player, struct FString IncomingName) {
    static class UFunction* Func = nullptr;
    GameMode_FindPlayerStart_Params Parms{};
    Parms.Player = Player;
    Parms.IncomingName = IncomingName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.EndMatch
void GameMode::EndMatch() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameMode.ChoosePlayerStart
class UObject* GameMode::ChoosePlayerStart(class UObject* Player) {
    static class UFunction* Func = nullptr;
    GameMode_ChoosePlayerStart_Params Parms{};
    Parms.Player = Player;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.ChangeName
void GameMode::ChangeName(class UObject* Controller, struct FString NewName, bool bNameChange) {
    static class UFunction* Func = nullptr;
    GameMode_ChangeName_Params Parms{};
    Parms.Controller = Controller;
    Parms.NewName = NewName;
    Parms.bNameChange = bNameChange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameMode.CanSpectate
bool GameMode::CanSpectate(class UObject* Viewer, class UObject* ViewTarget) {
    static class UFunction* Func = nullptr;
    GameMode_CanSpectate_Params Parms{};
    Parms.Viewer = Viewer;
    Parms.ViewTarget = ViewTarget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameMode.AbortMatch
void GameMode::AbortMatch() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.LightComponentBase.SetCastShadows
void LightComponentBase::SetCastShadows(bool bNewValue) {
    static class UFunction* Func = nullptr;
    LightComponentBase_SetCastShadows_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponentBase.GetLightColor
uint8_t LightComponentBase::GetLightColor() {
    static class UFunction* Func = nullptr;
    LightComponentBase_GetLightColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LightComponent.SetUseTemperature
void LightComponent::SetUseTemperature(bool bNewUseTemperature) {
    static class UFunction* Func = nullptr;
    LightComponent_SetUseTemperature_Params Parms{};
    Parms.bNewUseTemperature = bNewUseTemperature;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetTemperature
void LightComponent::SetTemperature(float NewTemperature) {
    static class UFunction* Func = nullptr;
    LightComponent_SetTemperature_Params Parms{};
    Parms.NewTemperature = NewTemperature;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetScaleToDirectionalLighting
void LightComponent::SetScaleToDirectionalLighting(bool InValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetScaleToDirectionalLighting_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetScaleToAmbientLighting
void LightComponent::SetScaleToAmbientLighting(bool InValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetScaleToAmbientLighting_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetProjectionTexture
void LightComponent::SetProjectionTexture(class UObject* NewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetProjectionTexture_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetLightFunctionScale
void LightComponent::SetLightFunctionScale(uint8_t NewLightFunctionScale) {
    static class UFunction* Func = nullptr;
    LightComponent_SetLightFunctionScale_Params Parms{};
    Parms.NewLightFunctionScale = NewLightFunctionScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetLightFunctionMaterial
void LightComponent::SetLightFunctionMaterial(class UObject* NewLightFunctionMaterial) {
    static class UFunction* Func = nullptr;
    LightComponent_SetLightFunctionMaterial_Params Parms{};
    Parms.NewLightFunctionMaterial = NewLightFunctionMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetLightFunctionFadeDistance
void LightComponent::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
    static class UFunction* Func = nullptr;
    LightComponent_SetLightFunctionFadeDistance_Params Parms{};
    Parms.NewLightFunctionFadeDistance = NewLightFunctionFadeDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetLightFunctionDisabledBrightness
void LightComponent::SetLightFunctionDisabledBrightness(float NewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetLightFunctionDisabledBrightness_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetLightColor
void LightComponent::SetLightColor(uint8_t NewLightColor, bool bSRGB) {
    static class UFunction* Func = nullptr;
    LightComponent_SetLightColor_Params Parms{};
    Parms.NewLightColor = NewLightColor;
    Parms.bSRGB = bSRGB;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetIntensity
void LightComponent::SetIntensity(float NewIntensity) {
    static class UFunction* Func = nullptr;
    LightComponent_SetIntensity_Params Parms{};
    Parms.NewIntensity = NewIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetIndirectLightingIntensity
void LightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    static class UFunction* Func = nullptr;
    LightComponent_SetIndirectLightingIntensity_Params Parms{};
    Parms.NewIntensity = NewIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetIESTexture
void LightComponent::SetIESTexture(class UObject* NewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetIESTexture_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetEnableLightShaftBloom
void LightComponent::SetEnableLightShaftBloom(bool bNewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetEnableLightShaftBloom_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetCinematicLightInfulence
void LightComponent::SetCinematicLightInfulence(bool InValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetCinematicLightInfulence_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetBloomTint
void LightComponent::SetBloomTint(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetBloomTint_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetBloomThreshold
void LightComponent::SetBloomThreshold(float NewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetBloomThreshold_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetBloomScale
void LightComponent::SetBloomScale(float NewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetBloomScale_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetBendShadowFilterCategory
void LightComponent::SetBendShadowFilterCategory(uint8_t NewCategory, bool FilteringEnabled) {
    static class UFunction* Func = nullptr;
    LightComponent_SetBendShadowFilterCategory_Params Parms{};
    Parms.NewCategory = NewCategory;
    Parms.FilteringEnabled = FilteringEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetAffectTranslucentLighting
void LightComponent::SetAffectTranslucentLighting(bool bNewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetAffectTranslucentLighting_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.SetAffectDynamicIndirectLighting
void LightComponent::SetAffectDynamicIndirectLighting(bool bNewValue) {
    static class UFunction* Func = nullptr;
    LightComponent_SetAffectDynamicIndirectLighting_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.RemoveCinematicLightInfulence
void LightComponent::RemoveCinematicLightInfulence(class UObject* InActor) {
    static class UFunction* Func = nullptr;
    LightComponent_RemoveCinematicLightInfulence_Params Parms{};
    Parms.InActor = InActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.ClearBendShadowFilterCategories
void LightComponent::ClearBendShadowFilterCategories() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.LightComponent.AddCinematicLightInfulence
void LightComponent::AddCinematicLightInfulence(class UObject* InActor) {
    static class UFunction* Func = nullptr;
    LightComponent_AddCinematicLightInfulence_Params Parms{};
    Parms.InActor = InActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.LightComponent.AddBendShadowFilterCategory
void LightComponent::AddBendShadowFilterCategory(uint8_t NewCategory) {
    static class UFunction* Func = nullptr;
    LightComponent_AddBendShadowFilterCategory_Params Parms{};
    Parms.NewCategory = NewCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PointLightComponent.SetSourceRadius
void PointLightComponent::SetSourceRadius(float bNewValue) {
    static class UFunction* Func = nullptr;
    PointLightComponent_SetSourceRadius_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PointLightComponent.SetSourceLength
void PointLightComponent::SetSourceLength(float NewValue) {
    static class UFunction* Func = nullptr;
    PointLightComponent_SetSourceLength_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PointLightComponent.SetLightFalloffExponent
void PointLightComponent::SetLightFalloffExponent(float NewLightFalloffExponent) {
    static class UFunction* Func = nullptr;
    PointLightComponent_SetLightFalloffExponent_Params Parms{};
    Parms.NewLightFalloffExponent = NewLightFalloffExponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PointLightComponent.SetAttenuationRadius
void PointLightComponent::SetAttenuationRadius(float NewRadius) {
    static class UFunction* Func = nullptr;
    PointLightComponent_SetAttenuationRadius_Params Parms{};
    Parms.NewRadius = NewRadius;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLightComponent.SetTranslucentInjectionTransisionDistance
void SpotLightComponent::SetTranslucentInjectionTransisionDistance(float NewTranslucentInjectionTransisionDistance) {
    static class UFunction* Func = nullptr;
    SpotLightComponent_SetTranslucentInjectionTransisionDistance_Params Parms{};
    Parms.NewTranslucentInjectionTransisionDistance = NewTranslucentInjectionTransisionDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLightComponent.SetTranslucentInjectionMaxIntensity
void SpotLightComponent::SetTranslucentInjectionMaxIntensity(float NewTranslucentInjectionMaxIntensity) {
    static class UFunction* Func = nullptr;
    SpotLightComponent_SetTranslucentInjectionMaxIntensity_Params Parms{};
    Parms.NewTranslucentInjectionMaxIntensity = NewTranslucentInjectionMaxIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLightComponent.SetOuterConeAngle
void SpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
    static class UFunction* Func = nullptr;
    SpotLightComponent_SetOuterConeAngle_Params Parms{};
    Parms.NewOuterConeAngle = NewOuterConeAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLightComponent.SetNearClipRatio
void SpotLightComponent::SetNearClipRatio(float NewNearClipRatio) {
    static class UFunction* Func = nullptr;
    SpotLightComponent_SetNearClipRatio_Params Parms{};
    Parms.NewNearClipRatio = NewNearClipRatio;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLightComponent.SetInnerConeAngle
void SpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
    static class UFunction* Func = nullptr;
    SpotLightComponent_SetInnerConeAngle_Params Parms{};
    Parms.NewInnerConeAngle = NewInnerConeAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameState.OnRep_SpectatorClass
void GameState::OnRep_SpectatorClass() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameState.OnRep_ReplicatedWorldTimeSeconds
void GameState::OnRep_ReplicatedWorldTimeSeconds() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameState.OnRep_MatchState
void GameState::OnRep_MatchState() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameState.OnRep_GameModeClass
void GameState::OnRep_GameModeClass() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameState.OnRep_ElapsedTime
void GameState::OnRep_ElapsedTime() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameState.GetServerWorldTimeSeconds
float GameState::GetServerWorldTimeSeconds() {
    static class UFunction* Func = nullptr;
    GameState_GetServerWorldTimeSeconds_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.UnregisterNavigationInvoker
void NavigationSystem::UnregisterNavigationInvoker(class UObject* Invoker) {
    static class UFunction* Func = nullptr;
    NavigationSystem_UnregisterNavigationInvoker_Params Parms{};
    Parms.Invoker = Invoker;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.SimpleMoveToLocation
void NavigationSystem::SimpleMoveToLocation(class UObject* Controller, uint8_t Goal) {
    static class UFunction* Func = nullptr;
    NavigationSystem_SimpleMoveToLocation_Params Parms{};
    Parms.Controller = Controller;
    Parms.Goal = Goal;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.SimpleMoveToActor
void NavigationSystem::SimpleMoveToActor(class UObject* Controller, class UObject* Goal) {
    static class UFunction* Func = nullptr;
    NavigationSystem_SimpleMoveToActor_Params Parms{};
    Parms.Controller = Controller;
    Parms.Goal = Goal;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.SetMaxSimultaneousTileGenerationJobsCount
void NavigationSystem::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs) {
    static class UFunction* Func = nullptr;
    NavigationSystem_SetMaxSimultaneousTileGenerationJobsCount_Params Parms{};
    Parms.MaxNumberOfJobs = MaxNumberOfJobs;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.SetGeometryGatheringMode
void NavigationSystem::SetGeometryGatheringMode(uint8_t NewMode) {
    static class UFunction* Func = nullptr;
    NavigationSystem_SetGeometryGatheringMode_Params Parms{};
    Parms.NewMode = NewMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.ResetMaxSimultaneousTileGenerationJobsCount
void NavigationSystem::ResetMaxSimultaneousTileGenerationJobsCount() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.NavigationSystem.RegisterNavigationInvoker
void NavigationSystem::RegisterNavigationInvoker(class UObject* Invoker, float TileGenerationRadius, float TileRemovalRadius) {
    static class UFunction* Func = nullptr;
    NavigationSystem_RegisterNavigationInvoker_Params Parms{};
    Parms.Invoker = Invoker;
    Parms.TileGenerationRadius = TileGenerationRadius;
    Parms.TileRemovalRadius = TileRemovalRadius;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.ProjectPointToNavigation
uint8_t NavigationSystem::ProjectPointToNavigation(class UObject* WorldContext, uint8_t Point, class UObject* NavData, class UClass* FilterClass, uint8_t QueryExtent) {
    static class UFunction* Func = nullptr;
    NavigationSystem_ProjectPointToNavigation_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.Point = Point;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    Parms.QueryExtent = QueryExtent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.OnNavigationBoundsUpdated
void NavigationSystem::OnNavigationBoundsUpdated(class UObject* NavVolume) {
    static class UFunction* Func = nullptr;
    NavigationSystem_OnNavigationBoundsUpdated_Params Parms{};
    Parms.NavVolume = NavVolume;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationSystem.NavigationRaycast
bool NavigationSystem::NavigationRaycast(class UObject* WorldContext, uint8_t RayStart, uint8_t RayEnd, uint8_t HitLocation, class UClass* FilterClass, class UObject* Querier) {
    static class UFunction* Func = nullptr;
    NavigationSystem_NavigationRaycast_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.RayStart = RayStart;
    Parms.RayEnd = RayEnd;
    Parms.HitLocation = HitLocation;
    Parms.FilterClass = FilterClass;
    Parms.Querier = Querier;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.IsNavigationBeingBuilt
bool NavigationSystem::IsNavigationBeingBuilt(class UObject* WorldContext) {
    static class UFunction* Func = nullptr;
    NavigationSystem_IsNavigationBeingBuilt_Params Parms{};
    Parms.WorldContext = WorldContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetRandomReachablePointInRadius
uint8_t NavigationSystem::GetRandomReachablePointInRadius(class UObject* WorldContext, uint8_t Origin, float Radius, class UObject* NavData, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetRandomReachablePointInRadius_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.Origin = Origin;
    Parms.Radius = Radius;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetRandomPointInRadius
uint8_t NavigationSystem::GetRandomPointInRadius(class UObject* WorldContext, uint8_t Origin, float Radius, class UObject* NavData, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetRandomPointInRadius_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.Origin = Origin;
    Parms.Radius = Radius;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetRandomPointInNavigableRadius
uint8_t NavigationSystem::GetRandomPointInNavigableRadius(class UObject* WorldContext, uint8_t Origin, float Radius, class UObject* NavData, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetRandomPointInNavigableRadius_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.Origin = Origin;
    Parms.Radius = Radius;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetRandomPoint
uint8_t NavigationSystem::GetRandomPoint(class UObject* WorldContext, class UObject* NavData, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetRandomPoint_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetPathLength
uint8_t NavigationSystem::GetPathLength(class UObject* WorldContext, uint8_t PathStart, uint8_t PathEnd, float PathLength, class UObject* NavData, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetPathLength_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.PathStart = PathStart;
    Parms.PathEnd = PathEnd;
    Parms.PathLength = PathLength;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetPathCost
uint8_t NavigationSystem::GetPathCost(class UObject* WorldContext, uint8_t PathStart, uint8_t PathEnd, float PathCost, class UObject* NavData, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetPathCost_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.PathStart = PathStart;
    Parms.PathEnd = PathEnd;
    Parms.PathCost = PathCost;
    Parms.NavData = NavData;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.GetNavigationSystem
class UObject* NavigationSystem::GetNavigationSystem(class UObject* WorldContext) {
    static class UFunction* Func = nullptr;
    NavigationSystem_GetNavigationSystem_Params Parms{};
    Parms.WorldContext = WorldContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.FindPathToLocationSynchronously
class UObject* NavigationSystem::FindPathToLocationSynchronously(class UObject* WorldContext, uint8_t PathStart, uint8_t PathEnd, class UObject* PathfindingContext, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_FindPathToLocationSynchronously_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.PathStart = PathStart;
    Parms.PathEnd = PathEnd;
    Parms.PathfindingContext = PathfindingContext;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationSystem.FindPathToActorSynchronously
class UObject* NavigationSystem::FindPathToActorSynchronously(class UObject* WorldContext, uint8_t PathStart, class UObject* GoalActor, float TetherDistance, class UObject* PathfindingContext, class UClass* FilterClass) {
    static class UFunction* Func = nullptr;
    NavigationSystem_FindPathToActorSynchronously_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.PathStart = PathStart;
    Parms.GoalActor = GoalActor;
    Parms.TetherDistance = TetherDistance;
    Parms.PathfindingContext = PathfindingContext;
    Parms.FilterClass = FilterClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavRelevantComponent.SetNavigationRelevancy
void NavRelevantComponent::SetNavigationRelevancy(bool bRelevant) {
    static class UFunction* Func = nullptr;
    NavRelevantComponent_SetNavigationRelevancy_Params Parms{};
    Parms.bRelevant = bRelevant;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerState.OnRep_UniqueId
void PlayerState::OnRep_UniqueId() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerState.OnRep_Score
void PlayerState::OnRep_Score() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerState.OnRep_PlayerName
void PlayerState::OnRep_PlayerName() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlayerState.OnRep_bIsInactive
void PlayerState::OnRep_bIsInactive() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ProjectileMovementComponent.StopSimulating
void ProjectileMovementComponent::StopSimulating(uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    ProjectileMovementComponent_StopSimulating_Params Parms{};
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ProjectileMovementComponent.SetVelocityInLocalSpace
void ProjectileMovementComponent::SetVelocityInLocalSpace(uint8_t NewVelocity) {
    static class UFunction* Func = nullptr;
    ProjectileMovementComponent_SetVelocityInLocalSpace_Params Parms{};
    Parms.NewVelocity = NewVelocity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature
void ProjectileMovementComponent::OnProjectileStopDelegate__DelegateSignature(uint8_t ImpactResult) {
    static class UFunction* Func = nullptr;
    ProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature
void ProjectileMovementComponent::OnProjectileBounceDelegate__DelegateSignature(uint8_t ImpactResult, uint8_t ImpactVelocity) {
    static class UFunction* Func = nullptr;
    ProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    Parms.ImpactVelocity = ImpactVelocity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ProjectileMovementComponent.LimitVelocity
uint8_t ProjectileMovementComponent::LimitVelocity(uint8_t NewVelocity) {
    static class UFunction* Func = nullptr;
    ProjectileMovementComponent_LimitVelocity_Params Parms{};
    Parms.NewVelocity = NewVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.VehicleWheel.GetSuspensionOffset
float VehicleWheel::GetSuspensionOffset() {
    static class UFunction* Func = nullptr;
    VehicleWheel_GetSuspensionOffset_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.VehicleWheel.GetSteerAngle
float VehicleWheel::GetSteerAngle() {
    static class UFunction* Func = nullptr;
    VehicleWheel_GetSteerAngle_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.VehicleWheel.GetRotationAngle
float VehicleWheel::GetRotationAngle() {
    static class UFunction* Func = nullptr;
    VehicleWheel_GetRotationAngle_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.SetCapsuleSize
void CapsuleComponent::SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_SetCapsuleSize_Params Parms{};
    Parms.InRadius = InRadius;
    Parms.InHalfHeight = InHalfHeight;
    Parms.bUpdateOverlaps = bUpdateOverlaps;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.SetCapsuleRadius
void CapsuleComponent::SetCapsuleRadius(float Radius, bool bUpdateOverlaps) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_SetCapsuleRadius_Params Parms{};
    Parms.Radius = Radius;
    Parms.bUpdateOverlaps = bUpdateOverlaps;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.SetCapsuleHalfHeight
void CapsuleComponent::SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_SetCapsuleHalfHeight_Params Parms{};
    Parms.HalfHeight = HalfHeight;
    Parms.bUpdateOverlaps = bUpdateOverlaps;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere
void CapsuleComponent::GetUnscaledCapsuleSize_WithoutHemisphere(float OutRadius, float OutHalfHeightWithoutHemisphere) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Params Parms{};
    Parms.OutRadius = OutRadius;
    Parms.OutHalfHeightWithoutHemisphere = OutHalfHeightWithoutHemisphere;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleSize
void CapsuleComponent::GetUnscaledCapsuleSize(float OutRadius, float OutHalfHeight) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetUnscaledCapsuleSize_Params Parms{};
    Parms.OutRadius = OutRadius;
    Parms.OutHalfHeight = OutHalfHeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleRadius
float CapsuleComponent::GetUnscaledCapsuleRadius() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetUnscaledCapsuleRadius_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere
float CapsuleComponent::GetUnscaledCapsuleHalfHeight_WithoutHemisphere() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight
float CapsuleComponent::GetUnscaledCapsuleHalfHeight() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetUnscaledCapsuleHalfHeight_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.GetShapeScale
float CapsuleComponent::GetShapeScale() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetShapeScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere
void CapsuleComponent::GetScaledCapsuleSize_WithoutHemisphere(float OutRadius, float OutHalfHeightWithoutHemisphere) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Params Parms{};
    Parms.OutRadius = OutRadius;
    Parms.OutHalfHeightWithoutHemisphere = OutHalfHeightWithoutHemisphere;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.GetScaledCapsuleSize
void CapsuleComponent::GetScaledCapsuleSize(float OutRadius, float OutHalfHeight) {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetScaledCapsuleSize_Params Parms{};
    Parms.OutRadius = OutRadius;
    Parms.OutHalfHeight = OutHalfHeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CapsuleComponent.GetScaledCapsuleRadius
float CapsuleComponent::GetScaledCapsuleRadius() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetScaledCapsuleRadius_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere
float CapsuleComponent::GetScaledCapsuleHalfHeight_WithoutHemisphere() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CapsuleComponent.GetScaledCapsuleHalfHeight
float CapsuleComponent::GetScaledCapsuleHalfHeight() {
    static class UFunction* Func = nullptr;
    CapsuleComponent_GetScaledCapsuleHalfHeight_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.WorldSettings.OnRep_WorldGravityZ
void WorldSettings::OnRep_WorldGravityZ() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.BendMaterialBillboardComponent.SetYSize
void BendMaterialBillboardComponent::SetYSize(float Value) {
    static class UFunction* Func = nullptr;
    BendMaterialBillboardComponent_SetYSize_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendMaterialBillboardComponent.SetXSize
void BendMaterialBillboardComponent::SetXSize(float Value) {
    static class UFunction* Func = nullptr;
    BendMaterialBillboardComponent_SetXSize_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendMaterialBillboardComponent.SetScreenScale
void BendMaterialBillboardComponent::SetScreenScale(float InScale) {
    static class UFunction* Func = nullptr;
    BendMaterialBillboardComponent_SetScreenScale_Params Parms{};
    Parms.InScale = InScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendMaterialBillboardComponent.SetBillboardMaterial
void BendMaterialBillboardComponent::SetBillboardMaterial(class UObject* InMaterial) {
    static class UFunction* Func = nullptr;
    BendMaterialBillboardComponent_SetBillboardMaterial_Params Parms{};
    Parms.InMaterial = InMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendMaterialBillboardComponent.GetBillboardMaterial
class UObject* BendMaterialBillboardComponent::GetBillboardMaterial() {
    static class UFunction* Func = nullptr;
    BendMaterialBillboardComponent_GetBillboardMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.UpdateInstanceTransform
bool InstancedStaticMeshComponent::UpdateInstanceTransform(int32_t InstanceIndex, uint8_t NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_UpdateInstanceTransform_Params Parms{};
    Parms.InstanceIndex = InstanceIndex;
    Parms.NewInstanceTransform = NewInstanceTransform;
    Parms.bWorldSpace = bWorldSpace;
    Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.SetCullDistances
void InstancedStaticMeshComponent::SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_SetCullDistances_Params Parms{};
    Parms.StartCullDistance = StartCullDistance;
    Parms.EndCullDistance = EndCullDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InstancedStaticMeshComponent.RemoveInstance
bool InstancedStaticMeshComponent::RemoveInstance(int32_t InstanceIndex) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_RemoveInstance_Params Parms{};
    Parms.InstanceIndex = InstanceIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.GetInstanceTransform
bool InstancedStaticMeshComponent::GetInstanceTransform(int32_t InstanceIndex, uint8_t OutInstanceTransform, bool bWorldSpace) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_GetInstanceTransform_Params Parms{};
    Parms.InstanceIndex = InstanceIndex;
    Parms.OutInstanceTransform = OutInstanceTransform;
    Parms.bWorldSpace = bWorldSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere
struct TArray<uint8_t> InstancedStaticMeshComponent::GetInstancesOverlappingSphere(uint8_t Center, float Radius, bool bSphereInWorldSpace) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_GetInstancesOverlappingSphere_Params Parms{};
    Parms.Center = Center;
    Parms.Radius = Radius;
    Parms.bSphereInWorldSpace = bSphereInWorldSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.GetInstanceCount
int32_t InstancedStaticMeshComponent::GetInstanceCount() {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_GetInstanceCount_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.ClearInstances
void InstancedStaticMeshComponent::ClearInstances() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace
int32_t InstancedStaticMeshComponent::AddInstanceWorldSpace(uint8_t WorldTransform) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_AddInstanceWorldSpace_Params Parms{};
    Parms.WorldTransform = WorldTransform;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InstancedStaticMeshComponent.AddInstance
int32_t InstancedStaticMeshComponent::AddInstance(uint8_t InstanceTransform) {
    static class UFunction* Func = nullptr;
    InstancedStaticMeshComponent_AddInstance_Params Parms{};
    Parms.InstanceTransform = InstanceTransform;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances
bool HierarchicalInstancedStaticMeshComponent::RemoveInstances(struct TArray<uint8_t> InstancesToRemove) {
    static class UFunction* Func = nullptr;
    HierarchicalInstancedStaticMeshComponent_RemoveInstances_Params Parms{};
    Parms.InstancesToRemove = InstancesToRemove;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MaterialInterface.GetPhysicalMaterial
class UObject* MaterialInterface::GetPhysicalMaterial() {
    static class UFunction* Func = nullptr;
    MaterialInterface_GetPhysicalMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MaterialInterface.GetBaseMaterial
class UObject* MaterialInterface::GetBaseMaterial() {
    static class UFunction* Func = nullptr;
    MaterialInterface_GetBaseMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayDebuggerHelper.PrintDebugString
void GameplayDebuggerHelper::PrintDebugString(struct FString InString) {
    static class UFunction* Func = nullptr;
    GameplayDebuggerHelper_PrintDebugString_Params Parms{};
    Parms.InString = InString;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayDebuggerBaseObject.ServerRequestPacket
void GameplayDebuggerBaseObject::ServerRequestPacket(int32_t Offset) {
    static class UFunction* Func = nullptr;
    GameplayDebuggerBaseObject_ServerRequestPacket_Params Parms{};
    Parms.Offset = Offset;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayDebuggerBaseObject.OnRep_ReplicatedBlob
void GameplayDebuggerBaseObject::OnRep_ReplicatedBlob() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameplayDebuggerBaseObject.OnRep_GenericShapeElements
void GameplayDebuggerBaseObject::OnRep_GenericShapeElements() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameplayDebuggerBaseObject.CollectDataToReplicateOnServer
void GameplayDebuggerBaseObject::CollectDataToReplicateOnServer(class UObject* MyPC, class UObject* SelectedActor) {
    static class UFunction* Func = nullptr;
    GameplayDebuggerBaseObject_CollectDataToReplicateOnServer_Params Parms{};
    Parms.MyPC = MyPC;
    Parms.SelectedActor = SelectedActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AmbientSound.Stop
void AmbientSound::Stop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.AmbientSound.Play
void AmbientSound::Play(float StartTime) {
    static class UFunction* Func = nullptr;
    AmbientSound_Play_Params Parms{};
    Parms.StartTime = StartTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AmbientSound.FadeOut
void AmbientSound::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
    static class UFunction* Func = nullptr;
    AmbientSound_FadeOut_Params Parms{};
    Parms.FadeOutDuration = FadeOutDuration;
    Parms.FadeVolumeLevel = FadeVolumeLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AmbientSound.FadeIn
void AmbientSound::FadeIn(float FadeInDuration, float FadeVolumeLevel) {
    static class UFunction* Func = nullptr;
    AmbientSound_FadeIn_Params Parms{};
    Parms.FadeInDuration = FadeInDuration;
    Parms.FadeVolumeLevel = FadeVolumeLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AmbientSound.AdjustVolume
void AmbientSound::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
    static class UFunction* Func = nullptr;
    AmbientSound_AdjustVolume_Params Parms{};
    Parms.AdjustVolumeDuration = AdjustVolumeDuration;
    Parms.AdjustVolumeLevel = AdjustVolumeLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.UpdateMesh
void SplineMeshComponent::UpdateMesh() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SplineMeshComponent.SetStartTangent
void SplineMeshComponent::SetStartTangent(uint8_t StartTangent, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetStartTangent_Params Parms{};
    Parms.StartTangent = StartTangent;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetStartScale
void SplineMeshComponent::SetStartScale(uint8_t StartScale, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetStartScale_Params Parms{};
    Parms.StartScale = StartScale;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetStartRoll
void SplineMeshComponent::SetStartRoll(float StartRoll, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetStartRoll_Params Parms{};
    Parms.StartRoll = StartRoll;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetStartPosition
void SplineMeshComponent::SetStartPosition(uint8_t StartPos, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetStartPosition_Params Parms{};
    Parms.StartPos = StartPos;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetStartOffset
void SplineMeshComponent::SetStartOffset(uint8_t StartOffset, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetStartOffset_Params Parms{};
    Parms.StartOffset = StartOffset;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetStartAndEnd
void SplineMeshComponent::SetStartAndEnd(uint8_t StartPos, uint8_t StartTangent, uint8_t EndPos, uint8_t EndTangent, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetStartAndEnd_Params Parms{};
    Parms.StartPos = StartPos;
    Parms.StartTangent = StartTangent;
    Parms.EndPos = EndPos;
    Parms.EndTangent = EndTangent;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetSplineUpDir
void SplineMeshComponent::SetSplineUpDir(uint8_t InSplineUpDir, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetSplineUpDir_Params Parms{};
    Parms.InSplineUpDir = InSplineUpDir;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetForwardAxis
void SplineMeshComponent::SetForwardAxis(uint8_t InForwardAxis, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetForwardAxis_Params Parms{};
    Parms.InForwardAxis = InForwardAxis;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetEndTangent
void SplineMeshComponent::SetEndTangent(uint8_t EndTangent, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetEndTangent_Params Parms{};
    Parms.EndTangent = EndTangent;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetEndScale
void SplineMeshComponent::SetEndScale(uint8_t EndScale, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetEndScale_Params Parms{};
    Parms.EndScale = EndScale;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetEndRoll
void SplineMeshComponent::SetEndRoll(float EndRoll, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetEndRoll_Params Parms{};
    Parms.EndRoll = EndRoll;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetEndPosition
void SplineMeshComponent::SetEndPosition(uint8_t EndPos, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetEndPosition_Params Parms{};
    Parms.EndPos = EndPos;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetEndOffset
void SplineMeshComponent::SetEndOffset(uint8_t EndOffset, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetEndOffset_Params Parms{};
    Parms.EndOffset = EndOffset;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetBoundaryMin
void SplineMeshComponent::SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetBoundaryMin_Params Parms{};
    Parms.InBoundaryMin = InBoundaryMin;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.SetBoundaryMax
void SplineMeshComponent::SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh) {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_SetBoundaryMax_Params Parms{};
    Parms.InBoundaryMax = InBoundaryMax;
    Parms.bUpdateMesh = bUpdateMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineMeshComponent.GetStartTangent
uint8_t SplineMeshComponent::GetStartTangent() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetStartTangent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetStartScale
uint8_t SplineMeshComponent::GetStartScale() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetStartScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetStartRoll
float SplineMeshComponent::GetStartRoll() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetStartRoll_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetStartPosition
uint8_t SplineMeshComponent::GetStartPosition() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetStartPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetStartOffset
uint8_t SplineMeshComponent::GetStartOffset() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetStartOffset_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetSplineUpDir
uint8_t SplineMeshComponent::GetSplineUpDir() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetSplineUpDir_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetForwardAxis
uint8_t SplineMeshComponent::GetForwardAxis() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetForwardAxis_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetEndTangent
uint8_t SplineMeshComponent::GetEndTangent() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetEndTangent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetEndScale
uint8_t SplineMeshComponent::GetEndScale() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetEndScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetEndRoll
float SplineMeshComponent::GetEndRoll() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetEndRoll_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetEndPosition
uint8_t SplineMeshComponent::GetEndPosition() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetEndPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetEndOffset
uint8_t SplineMeshComponent::GetEndOffset() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetEndOffset_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetBoundaryMin
float SplineMeshComponent::GetBoundaryMin() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetBoundaryMin_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineMeshComponent.GetBoundaryMax
float SplineMeshComponent::GetBoundaryMax() {
    static class UFunction* Func = nullptr;
    SplineMeshComponent_GetBoundaryMax_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendAnimAnchorActor.GetAnimAnchorComponent
class UObject* BendAnimAnchorActor::GetAnimAnchorComponent() {
    static class UFunction* Func = nullptr;
    BendAnimAnchorActor_GetAnimAnchorComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendEyeReflectionLight.SetActorHiddenInGame
void BendEyeReflectionLight::SetActorHiddenInGame(bool bNewHidden) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLight_SetActorHiddenInGame_Params Parms{};
    Parms.bNewHidden = bNewHidden;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendFogVolumeComponent.SetThickness
void BendFogVolumeComponent::SetThickness(float Value) {
    static class UFunction* Func = nullptr;
    BendFogVolumeComponent_SetThickness_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendFogVolumeComponent.SetShape
void BendFogVolumeComponent::SetShape(uint8_t Value) {
    static class UFunction* Func = nullptr;
    BendFogVolumeComponent_SetShape_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendFogVolumeComponent.SetEnabled
void BendFogVolumeComponent::SetEnabled(bool Value) {
    static class UFunction* Func = nullptr;
    BendFogVolumeComponent_SetEnabled_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearZLimit
void PhysicsConstraintComponent::SetLinearZLimit(uint8_t ConstraintType, float LimitSize) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearZLimit_Params Parms{};
    Parms.ConstraintType = ConstraintType;
    Parms.LimitSize = LimitSize;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearYLimit
void PhysicsConstraintComponent::SetLinearYLimit(uint8_t ConstraintType, float LimitSize) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearYLimit_Params Parms{};
    Parms.ConstraintType = ConstraintType;
    Parms.LimitSize = LimitSize;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearXLimit
void PhysicsConstraintComponent::SetLinearXLimit(uint8_t ConstraintType, float LimitSize) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearXLimit_Params Parms{};
    Parms.ConstraintType = ConstraintType;
    Parms.LimitSize = LimitSize;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearVelocityTarget
void PhysicsConstraintComponent::SetLinearVelocityTarget(uint8_t InVelTarget) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearVelocityTarget_Params Parms{};
    Parms.InVelTarget = InVelTarget;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearVelocityDrive
void PhysicsConstraintComponent::SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearVelocityDrive_Params Parms{};
    Parms.bEnableDriveX = bEnableDriveX;
    Parms.bEnableDriveY = bEnableDriveY;
    Parms.bEnableDriveZ = bEnableDriveZ;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearPositionTarget
void PhysicsConstraintComponent::SetLinearPositionTarget(uint8_t InPosTarget) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearPositionTarget_Params Parms{};
    Parms.InPosTarget = InPosTarget;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearPositionDrive
void PhysicsConstraintComponent::SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearPositionDrive_Params Parms{};
    Parms.bEnableDriveX = bEnableDriveX;
    Parms.bEnableDriveY = bEnableDriveY;
    Parms.bEnableDriveZ = bEnableDriveZ;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetLinearDriveParams
void PhysicsConstraintComponent::SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetLinearDriveParams_Params Parms{};
    Parms.InSpring = InSpring;
    Parms.InDamping = InDamping;
    Parms.InForceLimit = InForceLimit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetDisableCollision
void PhysicsConstraintComponent::SetDisableCollision(bool bDisableCollision) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetDisableCollision_Params Parms{};
    Parms.bDisableCollision = bDisableCollision;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetConstraintReferencePosition
void PhysicsConstraintComponent::SetConstraintReferencePosition(uint8_t Frame, uint8_t RefPosition) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetConstraintReferencePosition_Params Parms{};
    Parms.Frame = Frame;
    Parms.RefPosition = RefPosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation
void PhysicsConstraintComponent::SetConstraintReferenceOrientation(uint8_t Frame, uint8_t PriAxis, uint8_t SecAxis) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetConstraintReferenceOrientation_Params Parms{};
    Parms.Frame = Frame;
    Parms.PriAxis = PriAxis;
    Parms.SecAxis = SecAxis;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame
void PhysicsConstraintComponent::SetConstraintReferenceFrame(uint8_t Frame, uint8_t RefFrame) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetConstraintReferenceFrame_Params Parms{};
    Parms.Frame = Frame;
    Parms.RefFrame = RefFrame;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetConstrainedComponents
void PhysicsConstraintComponent::SetConstrainedComponents(class UObject* Component1, struct FName BoneName1, class UObject* Component2, struct FName BoneName2) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetConstrainedComponents_Params Parms{};
    Parms.Component1 = Component1;
    Parms.BoneName1 = BoneName1;
    Parms.Component2 = Component2;
    Parms.BoneName2 = BoneName2;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularVelocityTarget
void PhysicsConstraintComponent::SetAngularVelocityTarget(uint8_t InVelTarget) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularVelocityTarget_Params Parms{};
    Parms.InVelTarget = InVelTarget;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularVelocityDrive
void PhysicsConstraintComponent::SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularVelocityDrive_Params Parms{};
    Parms.bEnableSwingDrive = bEnableSwingDrive;
    Parms.bEnableTwistDrive = bEnableTwistDrive;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularTwistLimit
void PhysicsConstraintComponent::SetAngularTwistLimit(uint8_t ConstraintType, float TwistLimitAngle) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularTwistLimit_Params Parms{};
    Parms.ConstraintType = ConstraintType;
    Parms.TwistLimitAngle = TwistLimitAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularSwing2Limit
void PhysicsConstraintComponent::SetAngularSwing2Limit(uint8_t MotionType, float Swing2LimitAngle) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularSwing2Limit_Params Parms{};
    Parms.MotionType = MotionType;
    Parms.Swing2LimitAngle = Swing2LimitAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularSwing1Limit
void PhysicsConstraintComponent::SetAngularSwing1Limit(uint8_t MotionType, float Swing1LimitAngle) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularSwing1Limit_Params Parms{};
    Parms.MotionType = MotionType;
    Parms.Swing1LimitAngle = Swing1LimitAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularOrientationTarget
void PhysicsConstraintComponent::SetAngularOrientationTarget(uint8_t InPosTarget) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularOrientationTarget_Params Parms{};
    Parms.InPosTarget = InPosTarget;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularOrientationDrive
void PhysicsConstraintComponent::SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularOrientationDrive_Params Parms{};
    Parms.bEnableSwingDrive = bEnableSwingDrive;
    Parms.bEnableTwistDrive = bEnableTwistDrive;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.SetAngularDriveParams
void PhysicsConstraintComponent::SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_SetAngularDriveParams_Params Parms{};
    Parms.InSpring = InSpring;
    Parms.InDamping = InDamping;
    Parms.InForceLimit = InForceLimit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.GetCurrentTwist
float PhysicsConstraintComponent::GetCurrentTwist() {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_GetCurrentTwist_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PhysicsConstraintComponent.GetCurrentSwing2
float PhysicsConstraintComponent::GetCurrentSwing2() {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_GetCurrentSwing2_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PhysicsConstraintComponent.GetCurrentSwing1
float PhysicsConstraintComponent::GetCurrentSwing1() {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_GetCurrentSwing1_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PhysicsConstraintComponent.GetConstraintForce
void PhysicsConstraintComponent::GetConstraintForce(uint8_t OutLinearForce, uint8_t OutAngularForce) {
    static class UFunction* Func = nullptr;
    PhysicsConstraintComponent_GetConstraintForce_Params Parms{};
    Parms.OutLinearForce = OutLinearForce;
    Parms.OutAngularForce = OutAngularForce;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsConstraintComponent.BreakConstraint
void PhysicsConstraintComponent::BreakConstraint() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CurveBase.GetValueRange
void CurveBase::GetValueRange(float MinValue, float MaxValue) {
    static class UFunction* Func = nullptr;
    CurveBase_GetValueRange_Params Parms{};
    Parms.MinValue = MinValue;
    Parms.MaxValue = MaxValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CurveBase.GetTimeRange
void CurveBase::GetTimeRange(float MinTime, float MaxTime) {
    static class UFunction* Func = nullptr;
    CurveBase_GetTimeRange_Params Parms{};
    Parms.MinTime = MinTime;
    Parms.MaxTime = MaxTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CurveFloat.GetFloatValue
float CurveFloat::GetFloatValue(float InTime) {
    static class UFunction* Func = nullptr;
    CurveFloat_GetFloatValue_Params Parms{};
    Parms.InTime = InTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMesh.IsSectionUsingCloth
bool SkeletalMesh::IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections) {
    static class UFunction* Func = nullptr;
    SkeletalMesh_IsSectionUsingCloth_Params Parms{};
    Parms.InSectionIndex = InSectionIndex;
    Parms.bCheckCorrespondingSections = bCheckCorrespondingSections;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkeletalMesh.FindSocket
class UObject* SkeletalMesh::FindSocket(struct FName InSocketName) {
    static class UFunction* Func = nullptr;
    SkeletalMesh_FindSocket_Params Parms{};
    Parms.InSocketName = InSocketName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendOcclusionVolumeComponent.SetEnabled
void BendOcclusionVolumeComponent::SetEnabled(bool InValue) {
    static class UFunction* Func = nullptr;
    BendOcclusionVolumeComponent_SetEnabled_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendOcclusionVolume.ActorLeavingVolume
void BendOcclusionVolume::ActorLeavingVolume(class UObject* Other) {
    static class UFunction* Func = nullptr;
    BendOcclusionVolume_ActorLeavingVolume_Params Parms{};
    Parms.Other = Other;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendOcclusionVolume.ActorEnteredVolume
void BendOcclusionVolume::ActorEnteredVolume(class UObject* Other) {
    static class UFunction* Func = nullptr;
    BendOcclusionVolume_ActorEnteredVolume_Params Parms{};
    Parms.Other = Other;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendWetnessVolumeComponent.SetWetnessAccumulation
void BendWetnessVolumeComponent::SetWetnessAccumulation(float Value) {
    static class UFunction* Func = nullptr;
    BendWetnessVolumeComponent_SetWetnessAccumulation_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendWetnessVolumeComponent.SetSnowAccumulation
void BendWetnessVolumeComponent::SetSnowAccumulation(float Value) {
    static class UFunction* Func = nullptr;
    BendWetnessVolumeComponent_SetSnowAccumulation_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendWetnessVolumeComponent.SetRemoveWetness
void BendWetnessVolumeComponent::SetRemoveWetness(bool Value) {
    static class UFunction* Func = nullptr;
    BendWetnessVolumeComponent_SetRemoveWetness_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendWetnessVolumeComponent.SetPuddleAccumulation
void BendWetnessVolumeComponent::SetPuddleAccumulation(float Value) {
    static class UFunction* Func = nullptr;
    BendWetnessVolumeComponent_SetPuddleAccumulation_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendWetnessVolumeComponent.SetEnabled
void BendWetnessVolumeComponent::SetEnabled(bool Value) {
    static class UFunction* Func = nullptr;
    BendWetnessVolumeComponent_SetEnabled_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavModifierVolume.SetAreaClass
void NavModifierVolume::SetAreaClass(class UClass* NewAreaClass) {
    static class UFunction* Func = nullptr;
    NavModifierVolume_SetAreaClass_Params Parms{};
    Parms.NewAreaClass = NewAreaClass;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PostProcessVolume.AddOrUpdateBlendable
void PostProcessVolume::AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight) {
    static class UFunction* Func = nullptr;
    PostProcessVolume_AddOrUpdateBlendable_Params Parms{};
    Parms.InBlendableObject = InBlendableObject;
    Parms.InWeight = InWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraActor.GetAutoActivatePlayerIndex
int32_t CameraActor::GetAutoActivatePlayerIndex() {
    static class UFunction* Func = nullptr;
    CameraActor_GetAutoActivatePlayerIndex_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CameraShake.ReceiveStopShake
void CameraShake::ReceiveStopShake() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CameraShake.ReceivePlayShake
void CameraShake::ReceivePlayShake(float Scale) {
    static class UFunction* Func = nullptr;
    CameraShake_ReceivePlayShake_Params Parms{};
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraShake.ReceiveIsFinished
bool CameraShake::ReceiveIsFinished() {
    static class UFunction* Func = nullptr;
    CameraShake_ReceiveIsFinished_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CameraShake.BlueprintUpdateCameraShake
void CameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, uint8_t POV, uint8_t ModifiedPOV) {
    static class UFunction* Func = nullptr;
    CameraShake_BlueprintUpdateCameraShake_Params Parms{};
    Parms.DeltaTime = DeltaTime;
    Parms.Alpha = Alpha;
    Parms.POV = POV;
    Parms.ModifiedPOV = ModifiedPOV;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InputComponent.WasControllerKeyJustReleased
bool InputComponent::WasControllerKeyJustReleased(uint8_t Key) {
    static class UFunction* Func = nullptr;
    InputComponent_WasControllerKeyJustReleased_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InputComponent.WasControllerKeyJustPressed
bool InputComponent::WasControllerKeyJustPressed(uint8_t Key) {
    static class UFunction* Func = nullptr;
    InputComponent_WasControllerKeyJustPressed_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InputComponent.IsControllerKeyDown
bool InputComponent::IsControllerKeyDown(uint8_t Key) {
    static class UFunction* Func = nullptr;
    InputComponent_IsControllerKeyDown_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InputComponent.GetTouchState
void InputComponent::GetTouchState(int32_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed) {
    static class UFunction* Func = nullptr;
    InputComponent_GetTouchState_Params Parms{};
    Parms.FingerIndex = FingerIndex;
    Parms.LocationX = LocationX;
    Parms.LocationY = LocationY;
    Parms.bIsCurrentlyPressed = bIsCurrentlyPressed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InputComponent.GetControllerVectorKeyState
uint8_t InputComponent::GetControllerVectorKeyState(uint8_t Key) {
    static class UFunction* Func = nullptr;
    InputComponent_GetControllerVectorKeyState_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InputComponent.GetControllerMouseDelta
void InputComponent::GetControllerMouseDelta(float DeltaX, float DeltaY) {
    static class UFunction* Func = nullptr;
    InputComponent_GetControllerMouseDelta_Params Parms{};
    Parms.DeltaX = DeltaX;
    Parms.DeltaY = DeltaY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InputComponent.GetControllerKeyTimeDown
float InputComponent::GetControllerKeyTimeDown(uint8_t Key) {
    static class UFunction* Func = nullptr;
    InputComponent_GetControllerKeyTimeDown_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.InputComponent.GetControllerAnalogStickState
void InputComponent::GetControllerAnalogStickState(uint8_t WhichStick, float StickX, float StickY) {
    static class UFunction* Func = nullptr;
    InputComponent_GetControllerAnalogStickState_Params Parms{};
    Parms.WhichStick = WhichStick;
    Parms.StickX = StickX;
    Parms.StickY = StickY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InputComponent.GetControllerAnalogKeyState
float InputComponent::GetControllerAnalogKeyState(uint8_t Key) {
    static class UFunction* Func = nullptr;
    InputComponent_GetControllerAnalogKeyState_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.DebugCameraController.ShowDebugSelectedInfo
void DebugCameraController::ShowDebugSelectedInfo() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.DecalActor.SetDecalMaterial
void DecalActor::SetDecalMaterial(class UObject* NewDecalMaterial) {
    static class UFunction* Func = nullptr;
    DecalActor_SetDecalMaterial_Params Parms{};
    Parms.NewDecalMaterial = NewDecalMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DecalActor.GetDecalMaterial
class UObject* DecalActor::GetDecalMaterial() {
    static class UFunction* Func = nullptr;
    DecalActor_GetDecalMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.DecalActor.CreateDynamicMaterialInstance
class UObject* DecalActor::CreateDynamicMaterialInstance() {
    static class UFunction* Func = nullptr;
    DecalActor_CreateDynamicMaterialInstance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Emitter.ToggleActive
void Emitter::ToggleActive() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Emitter.SetVectorParameter
void Emitter::SetVectorParameter(struct FName ParameterName, uint8_t Param) {
    static class UFunction* Func = nullptr;
    Emitter_SetVectorParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.SetTemplate
void Emitter::SetTemplate(class UObject* NewTemplate) {
    static class UFunction* Func = nullptr;
    Emitter_SetTemplate_Params Parms{};
    Parms.NewTemplate = NewTemplate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.SetMaterialParameter
void Emitter::SetMaterialParameter(struct FName ParameterName, class UObject* Param) {
    static class UFunction* Func = nullptr;
    Emitter_SetMaterialParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.SetFloatParameter
void Emitter::SetFloatParameter(struct FName ParameterName, float Param) {
    static class UFunction* Func = nullptr;
    Emitter_SetFloatParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.SetColorParameter
void Emitter::SetColorParameter(struct FName ParameterName, uint8_t Param) {
    static class UFunction* Func = nullptr;
    Emitter_SetColorParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.SetActorParameter
void Emitter::SetActorParameter(struct FName ParameterName, class UObject* Param) {
    static class UFunction* Func = nullptr;
    Emitter_SetActorParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.OnRep_bCurrentlyActive
void Emitter::OnRep_bCurrentlyActive() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Emitter.OnParticleSystemFinished
void Emitter::OnParticleSystemFinished(class UObject* FinishedComponent) {
    static class UFunction* Func = nullptr;
    Emitter_OnParticleSystemFinished_Params Parms{};
    Parms.FinishedComponent = FinishedComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Emitter.IsActive
bool Emitter::IsActive() {
    static class UFunction* Func = nullptr;
    Emitter_IsActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Emitter.Deactivate
void Emitter::Deactivate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Emitter.Activate
void Emitter::Activate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ExponentialHeightFog.OnRep_bEnabled
void ExponentialHeightFog::OnRep_bEnabled() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SkyLight.OnRep_bEnabled
void SkyLight::OnRep_bEnabled() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.LevelBounds.GetAutoUpdateBounds
bool LevelBounds::GetAutoUpdateBounds() {
    static class UFunction* Func = nullptr;
    LevelBounds_GetAutoUpdateBounds_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Light.ToggleEnabled
void Light::ToggleEnabled() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Light.SetLightFunctionScale
void Light::SetLightFunctionScale(uint8_t NewLightFunctionScale) {
    static class UFunction* Func = nullptr;
    Light_SetLightFunctionScale_Params Parms{};
    Parms.NewLightFunctionScale = NewLightFunctionScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetLightFunctionMaterial
void Light::SetLightFunctionMaterial(class UObject* NewLightFunctionMaterial) {
    static class UFunction* Func = nullptr;
    Light_SetLightFunctionMaterial_Params Parms{};
    Parms.NewLightFunctionMaterial = NewLightFunctionMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetLightFunctionFadeDistance
void Light::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
    static class UFunction* Func = nullptr;
    Light_SetLightFunctionFadeDistance_Params Parms{};
    Parms.NewLightFunctionFadeDistance = NewLightFunctionFadeDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetLightColor
void Light::SetLightColor(uint8_t NewLightColor) {
    static class UFunction* Func = nullptr;
    Light_SetLightColor_Params Parms{};
    Parms.NewLightColor = NewLightColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetEnabled
void Light::SetEnabled(bool bSetEnabled) {
    static class UFunction* Func = nullptr;
    Light_SetEnabled_Params Parms{};
    Parms.bSetEnabled = bSetEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetCastShadows
void Light::SetCastShadows(bool bNewValue) {
    static class UFunction* Func = nullptr;
    Light_SetCastShadows_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetBrightness
void Light::SetBrightness(float NewBrightness) {
    static class UFunction* Func = nullptr;
    Light_SetBrightness_Params Parms{};
    Parms.NewBrightness = NewBrightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.SetAffectTranslucentLighting
void Light::SetAffectTranslucentLighting(bool bNewValue) {
    static class UFunction* Func = nullptr;
    Light_SetAffectTranslucentLighting_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Light.OnRep_bEnabled
void Light::OnRep_bEnabled() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.Light.IsEnabled
bool Light::IsEnabled() {
    static class UFunction* Func = nullptr;
    Light_IsEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Light.GetLightColor
uint8_t Light::GetLightColor() {
    static class UFunction* Func = nullptr;
    Light_GetLightColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Light.GetBrightness
float Light::GetBrightness() {
    static class UFunction* Func = nullptr;
    Light_GetBrightness_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PointLight.SetRadius
void PointLight::SetRadius(float NewRadius) {
    static class UFunction* Func = nullptr;
    PointLight_SetRadius_Params Parms{};
    Parms.NewRadius = NewRadius;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PointLight.SetLightFalloffExponent
void PointLight::SetLightFalloffExponent(float NewLightFalloffExponent) {
    static class UFunction* Func = nullptr;
    PointLight_SetLightFalloffExponent_Params Parms{};
    Parms.NewLightFalloffExponent = NewLightFalloffExponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLight.SetOuterConeAngle
void SpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
    static class UFunction* Func = nullptr;
    SpotLight_SetOuterConeAngle_Params Parms{};
    Parms.NewOuterConeAngle = NewOuterConeAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SpotLight.SetInnerConeAngle
void SpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
    static class UFunction* Func = nullptr;
    SpotLight_SetInnerConeAngle_Params Parms{};
    Parms.NewInnerConeAngle = NewInnerConeAngle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MatineeActor.Stop
void MatineeActor::Stop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MatineeActor.Skip
void MatineeActor::Skip() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MatineeActor.SetPosition
void MatineeActor::SetPosition(float NewPosition, bool bJump) {
    static class UFunction* Func = nullptr;
    MatineeActor_SetPosition_Params Parms{};
    Parms.NewPosition = NewPosition;
    Parms.bJump = bJump;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MatineeActor.SetMatineeChaining
void MatineeActor::SetMatineeChaining(class UObject* NextMatinee) {
    static class UFunction* Func = nullptr;
    MatineeActor_SetMatineeChaining_Params Parms{};
    Parms.NextMatinee = NextMatinee;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MatineeActor.SetLoopingState
void MatineeActor::SetLoopingState(bool bNewLooping) {
    static class UFunction* Func = nullptr;
    MatineeActor_SetLoopingState_Params Parms{};
    Parms.bNewLooping = bNewLooping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MatineeActor.Reverse
void MatineeActor::Reverse() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MatineeActor.PreLoad
void MatineeActor::PreLoad(bool bShouldBlockOnLoad, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    MatineeActor_PreLoad_Params Parms{};
    Parms.bShouldBlockOnLoad = bShouldBlockOnLoad;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MatineeActor.Play
void MatineeActor::Play() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MatineeActor.Pause
void MatineeActor::Pause() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.MatineeActor.ForceStreamInResources
int32_t MatineeActor::ForceStreamInResources(float TimeAllowed) {
    static class UFunction* Func = nullptr;
    MatineeActor_ForceStreamInResources_Params Parms{};
    Parms.TimeAllowed = TimeAllowed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MatineeActor.ChangePlaybackDirection
void MatineeActor::ChangePlaybackDirection() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.DefaultPawn.TurnAtRate
void DefaultPawn::TurnAtRate(float Rate) {
    static class UFunction* Func = nullptr;
    DefaultPawn_TurnAtRate_Params Parms{};
    Parms.Rate = Rate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DefaultPawn.Turn
void DefaultPawn::Turn(float Val) {
    static class UFunction* Func = nullptr;
    DefaultPawn_Turn_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DefaultPawn.MoveUp_World
void DefaultPawn::MoveUp_World(float Val) {
    static class UFunction* Func = nullptr;
    DefaultPawn_MoveUp_World_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DefaultPawn.MoveRight
void DefaultPawn::MoveRight(float Val) {
    static class UFunction* Func = nullptr;
    DefaultPawn_MoveRight_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DefaultPawn.MoveForward
void DefaultPawn::MoveForward(float Val) {
    static class UFunction* Func = nullptr;
    DefaultPawn_MoveForward_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DefaultPawn.LookUpAtRate
void DefaultPawn::LookUpAtRate(float Rate) {
    static class UFunction* Func = nullptr;
    DefaultPawn_LookUpAtRate_Params Parms{};
    Parms.Rate = Rate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DefaultPawn.LookUp
void DefaultPawn::LookUp(float Val) {
    static class UFunction* Func = nullptr;
    DefaultPawn_LookUp_Params Parms{};
    Parms.Val = Val;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.RadialForceActor.ToggleForce
void RadialForceActor::ToggleForce() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.RadialForceActor.FireImpulse
void RadialForceActor::FireImpulse() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.RadialForceActor.EnableForce
void RadialForceActor::EnableForce() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.RadialForceActor.DisableForce
void RadialForceActor::DisableForce() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SceneCapture2D.OnInterpToggle
void SceneCapture2D::OnInterpToggle(bool bEnable) {
    static class UFunction* Func = nullptr;
    SceneCapture2D_OnInterpToggle_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneCaptureCube.OnInterpToggle
void SceneCaptureCube::OnInterpToggle(bool bEnable) {
    static class UFunction* Func = nullptr;
    SceneCaptureCube_OnInterpToggle_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature
void ApplicationLifecycleComponent::ApplicationLifetimeDelegate__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SplineComponent.UpdateSpline
void SplineComponent::UpdateSpline() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SplineComponent.SetWorldLocationAtSplinePoint
void SplineComponent::SetWorldLocationAtSplinePoint(int32_t PointIndex, uint8_t InLocation) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetWorldLocationAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.InLocation = InLocation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetUnselectedSplineSegmentColor
void SplineComponent::SetUnselectedSplineSegmentColor(uint8_t SegmentColor) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetUnselectedSplineSegmentColor_Params Parms{};
    Parms.SegmentColor = SegmentColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetTangentAtSplinePoint
void SplineComponent::SetTangentAtSplinePoint(int32_t PointIndex, uint8_t InTangent, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetTangentAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.InTangent = InTangent;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetSplineWorldPoints
void SplineComponent::SetSplineWorldPoints(struct TArray<uint8_t> Points) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetSplineWorldPoints_Params Parms{};
    Parms.Points = Points;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetSplinePointType
void SplineComponent::SetSplinePointType(int32_t PointIndex, uint8_t Type) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetSplinePointType_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.Type = Type;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetSplinePoints
void SplineComponent::SetSplinePoints(struct TArray<uint8_t> Points, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetSplinePoints_Params Parms{};
    Parms.Points = Points;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetSplineLocalPoints
void SplineComponent::SetSplineLocalPoints(struct TArray<uint8_t> Points) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetSplineLocalPoints_Params Parms{};
    Parms.Points = Points;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetSelectedSplineSegmentColor
void SplineComponent::SetSelectedSplineSegmentColor(uint8_t SegmentColor) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetSelectedSplineSegmentColor_Params Parms{};
    Parms.SegmentColor = SegmentColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetLocationAtSplinePoint
void SplineComponent::SetLocationAtSplinePoint(int32_t PointIndex, uint8_t InLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetLocationAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.InLocation = InLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetDefaultUpVector
void SplineComponent::SetDefaultUpVector(uint8_t UpVector, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetDefaultUpVector_Params Parms{};
    Parms.UpVector = UpVector;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.SetClosedLoop
void SplineComponent::SetClosedLoop(bool bInClosedLoop) {
    static class UFunction* Func = nullptr;
    SplineComponent_SetClosedLoop_Params Parms{};
    Parms.bInClosedLoop = bInClosedLoop;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.RemoveSplinePoint
void SplineComponent::RemoveSplinePoint(int32_t Index) {
    static class UFunction* Func = nullptr;
    SplineComponent_RemoveSplinePoint_Params Parms{};
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.IsClosedLoop
bool SplineComponent::IsClosedLoop() {
    static class UFunction* Func = nullptr;
    SplineComponent_IsClosedLoop_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
uint8_t SplineComponent::GetWorldTangentAtDistanceAlongSpline(float Distance) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldTangentAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldRotationAtTime
uint8_t SplineComponent::GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldRotationAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
uint8_t SplineComponent::GetWorldRotationAtDistanceAlongSpline(float Distance) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldRotationAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldLocationAtTime
uint8_t SplineComponent::GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldLocationAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldLocationAtSplinePoint
uint8_t SplineComponent::GetWorldLocationAtSplinePoint(int32_t PointIndex) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldLocationAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
uint8_t SplineComponent::GetWorldLocationAtDistanceAlongSpline(float Distance) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldLocationAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldDirectionAtTime
uint8_t SplineComponent::GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldDirectionAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
uint8_t SplineComponent::GetWorldDirectionAtDistanceAlongSpline(float Distance) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetUpVectorAtTime
uint8_t SplineComponent::GetUpVectorAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetUpVectorAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetUpVectorAtSplinePoint
uint8_t SplineComponent::GetUpVectorAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetUpVectorAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
uint8_t SplineComponent::GetUpVectorAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetUpVectorAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetTransformAtTime
uint8_t SplineComponent::GetTransformAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetTransformAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    Parms.bUseScale = bUseScale;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetTransformAtSplinePoint
uint8_t SplineComponent::GetTransformAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace, bool bUseScale) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetTransformAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseScale = bUseScale;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetTransformAtDistanceAlongSpline
uint8_t SplineComponent::GetTransformAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace, bool bUseScale) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetTransformAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseScale = bUseScale;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetTangentAtTime
uint8_t SplineComponent::GetTangentAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetTangentAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetTangentAtSplinePoint
uint8_t SplineComponent::GetTangentAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetTangentAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetTangentAtDistanceAlongSpline
uint8_t SplineComponent::GetTangentAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetTangentAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetSplinePointType
uint8_t SplineComponent::GetSplinePointType(int32_t PointIndex) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetSplinePointType_Params Parms{};
    Parms.PointIndex = PointIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetSplineLength
float SplineComponent::GetSplineLength() {
    static class UFunction* Func = nullptr;
    SplineComponent_GetSplineLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetScaleAtTime
uint8_t SplineComponent::GetScaleAtTime(float Time, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetScaleAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetScaleAtSplinePoint
uint8_t SplineComponent::GetScaleAtSplinePoint(int32_t PointIndex) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetScaleAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetScaleAtDistanceAlongSpline
uint8_t SplineComponent::GetScaleAtDistanceAlongSpline(float Distance) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetScaleAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRotationAtTime
uint8_t SplineComponent::GetRotationAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRotationAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRotationAtSplinePoint
uint8_t SplineComponent::GetRotationAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRotationAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRotationAtDistanceAlongSpline
uint8_t SplineComponent::GetRotationAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRotationAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRollAtTime
float SplineComponent::GetRollAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRollAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRollAtSplinePoint
float SplineComponent::GetRollAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRollAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRollAtDistanceAlongSpline
float SplineComponent::GetRollAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRollAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRightVectorAtTime
uint8_t SplineComponent::GetRightVectorAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRightVectorAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRightVectorAtSplinePoint
uint8_t SplineComponent::GetRightVectorAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRightVectorAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
uint8_t SplineComponent::GetRightVectorAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetRightVectorAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetQuaternionAtTime
uint8_t SplineComponent::GetQuaternionAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetQuaternionAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetQuaternionAtSplinePoint
uint8_t SplineComponent::GetQuaternionAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetQuaternionAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetQuaternionAtDistanceAlongSpline
uint8_t SplineComponent::GetQuaternionAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetQuaternionAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetNumberOfSplinePoints
int32_t SplineComponent::GetNumberOfSplinePoints() {
    static class UFunction* Func = nullptr;
    SplineComponent_GetNumberOfSplinePoints_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetLocationAtTime
uint8_t SplineComponent::GetLocationAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetLocationAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetLocationAtSplinePoint
uint8_t SplineComponent::GetLocationAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetLocationAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetLocationAtDistanceAlongSpline
uint8_t SplineComponent::GetLocationAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetLocationAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
void SplineComponent::GetLocationAndTangentAtSplinePoint(int32_t PointIndex, uint8_t Location, uint8_t Tangent, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetLocationAndTangentAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.Location = Location;
    Parms.Tangent = Tangent;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
void SplineComponent::GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, uint8_t LocalLocation, uint8_t LocalTangent) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.LocalLocation = LocalLocation;
    Parms.LocalTangent = LocalTangent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
float SplineComponent::GetInputKeyAtDistanceAlongSpline(float Distance) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetInputKeyAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
float SplineComponent::GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetDistanceAlongSplineAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetDirectionAtTime
uint8_t SplineComponent::GetDirectionAtTime(float Time, uint8_t CoordinateSpace, bool bUseConstantVelocity) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetDirectionAtTime_Params Parms{};
    Parms.Time = Time;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseConstantVelocity = bUseConstantVelocity;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetDirectionAtSplinePoint
uint8_t SplineComponent::GetDirectionAtSplinePoint(int32_t PointIndex, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetDirectionAtSplinePoint_Params Parms{};
    Parms.PointIndex = PointIndex;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
uint8_t SplineComponent::GetDirectionAtDistanceAlongSpline(float Distance, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetDirectionAtDistanceAlongSpline_Params Parms{};
    Parms.Distance = Distance;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.GetDefaultUpVector
uint8_t SplineComponent::GetDefaultUpVector(uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_GetDefaultUpVector_Params Parms{};
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindUpVectorClosestToWorldLocation
uint8_t SplineComponent::FindUpVectorClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindUpVectorClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindTransformClosestToWorldLocation
uint8_t SplineComponent::FindTransformClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace, bool bUseScale) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindTransformClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    Parms.bUseScale = bUseScale;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindTangentClosestToWorldLocation
uint8_t SplineComponent::FindTangentClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindTangentClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindScaleClosestToWorldLocation
uint8_t SplineComponent::FindScaleClosestToWorldLocation(uint8_t WorldLocation) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindScaleClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindRotationClosestToWorldLocation
uint8_t SplineComponent::FindRotationClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindRotationClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindRollClosestToWorldLocation
float SplineComponent::FindRollClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindRollClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindRightVectorClosestToWorldLocation
uint8_t SplineComponent::FindRightVectorClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindRightVectorClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindQuaternionClosestToWorldLocation
uint8_t SplineComponent::FindQuaternionClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindQuaternionClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindLocationClosestToWorldLocation
uint8_t SplineComponent::FindLocationClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindLocationClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindInputKeyClosestToWorldLocation
float SplineComponent::FindInputKeyClosestToWorldLocation(uint8_t WorldLocation) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindInputKeyClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.FindDirectionClosestToWorldLocation
uint8_t SplineComponent::FindDirectionClosestToWorldLocation(uint8_t WorldLocation, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_FindDirectionClosestToWorldLocation_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SplineComponent.ClearSplinePoints
void SplineComponent::ClearSplinePoints() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SplineComponent.AddSplineWorldPoint
void SplineComponent::AddSplineWorldPoint(uint8_t Position) {
    static class UFunction* Func = nullptr;
    SplineComponent_AddSplineWorldPoint_Params Parms{};
    Parms.Position = Position;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.AddSplinePointAtIndex
void SplineComponent::AddSplinePointAtIndex(uint8_t Position, int32_t Index, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_AddSplinePointAtIndex_Params Parms{};
    Parms.Position = Position;
    Parms.Index = Index;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.AddSplinePoint
void SplineComponent::AddSplinePoint(uint8_t Position, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    SplineComponent_AddSplinePoint_Params Parms{};
    Parms.Position = Position;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SplineComponent.AddSplineLocalPoint
void SplineComponent::AddSplineLocalPoint(uint8_t Position) {
    static class UFunction* Func = nullptr;
    SplineComponent_AddSplineLocalPoint_Params Parms{};
    Parms.Position = Position;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.StopSimulating
void InterpToMovementComponent::StopSimulating(uint8_t HitResult) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_StopSimulating_Params Parms{};
    Parms.HitResult = HitResult;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.RestartMovement
void InterpToMovementComponent::RestartMovement(float InitialDirection) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_RestartMovement_Params Parms{};
    Parms.InitialDirection = InitialDirection;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature
void InterpToMovementComponent::OnInterpToWaitEndDelegate__DelegateSignature(uint8_t ImpactResult, float Time) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature
void InterpToMovementComponent::OnInterpToWaitBeginDelegate__DelegateSignature(uint8_t ImpactResult, float Time) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature
void InterpToMovementComponent::OnInterpToStopDelegate__DelegateSignature(uint8_t ImpactResult, float Time) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature
void InterpToMovementComponent::OnInterpToReverseDelegate__DelegateSignature(uint8_t ImpactResult, float Time) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature
void InterpToMovementComponent::OnInterpToResetDelegate__DelegateSignature(uint8_t ImpactResult, float Time) {
    static class UFunction* Func = nullptr;
    InterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Params Parms{};
    Parms.ImpactResult = ImpactResult;
    Parms.Time = Time;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.InterpToMovementComponent.FinaliseControlPoints
void InterpToMovementComponent::FinaliseControlPoints() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PawnNoiseEmitterComponent.MakeNoise
void PawnNoiseEmitterComponent::MakeNoise(class UObject* NoiseMaker, float Loudness, uint8_t NoiseLocation) {
    static class UFunction* Func = nullptr;
    PawnNoiseEmitterComponent_MakeNoise_Params Parms{};
    Parms.NoiseMaker = NoiseMaker;
    Parms.Loudness = Loudness;
    Parms.NoiseLocation = NoiseLocation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetTargetRotation
void PhysicsHandleComponent::SetTargetRotation(uint8_t NewRotation) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetTargetRotation_Params Parms{};
    Parms.NewRotation = NewRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetTargetLocationAndRotation
void PhysicsHandleComponent::SetTargetLocationAndRotation(uint8_t NewLocation, uint8_t NewRotation) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetTargetLocationAndRotation_Params Parms{};
    Parms.NewLocation = NewLocation;
    Parms.NewRotation = NewRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetTargetLocation
void PhysicsHandleComponent::SetTargetLocation(uint8_t NewLocation) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetTargetLocation_Params Parms{};
    Parms.NewLocation = NewLocation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetLinearStiffness
void PhysicsHandleComponent::SetLinearStiffness(float NewLinearStiffness) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetLinearStiffness_Params Parms{};
    Parms.NewLinearStiffness = NewLinearStiffness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetLinearDamping
void PhysicsHandleComponent::SetLinearDamping(float NewLinearDamping) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetLinearDamping_Params Parms{};
    Parms.NewLinearDamping = NewLinearDamping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetInterpolationSpeed
void PhysicsHandleComponent::SetInterpolationSpeed(float NewInterpolationSpeed) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetInterpolationSpeed_Params Parms{};
    Parms.NewInterpolationSpeed = NewInterpolationSpeed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetAngularStiffness
void PhysicsHandleComponent::SetAngularStiffness(float NewAngularStiffness) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetAngularStiffness_Params Parms{};
    Parms.NewAngularStiffness = NewAngularStiffness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.SetAngularDamping
void PhysicsHandleComponent::SetAngularDamping(float NewAngularDamping) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_SetAngularDamping_Params Parms{};
    Parms.NewAngularDamping = NewAngularDamping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.ReleaseComponent
void PhysicsHandleComponent::ReleaseComponent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PhysicsHandleComponent.GrabComponent
void PhysicsHandleComponent::GrabComponent(class UObject* Component, struct FName InBoneName, uint8_t GrabLocation, bool bConstrainRotation) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_GrabComponent_Params Parms{};
    Parms.Component = Component;
    Parms.InBoneName = InBoneName;
    Parms.GrabLocation = GrabLocation;
    Parms.bConstrainRotation = bConstrainRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PhysicsHandleComponent.GetTargetLocationAndRotation
void PhysicsHandleComponent::GetTargetLocationAndRotation(uint8_t TargetLocation, uint8_t TargetRotation) {
    static class UFunction* Func = nullptr;
    PhysicsHandleComponent_GetTargetLocationAndRotation_Params Parms{};
    Parms.TargetLocation = TargetLocation;
    Parms.TargetRotation = TargetRotation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlatformEventsComponent.SupportsConvertibleLaptops
bool PlatformEventsComponent::SupportsConvertibleLaptops() {
    static class UFunction* Func = nullptr;
    PlatformEventsComponent_SupportsConvertibleLaptops_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature
void PlatformEventsComponent::PlatformEventDelegate__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PlatformEventsComponent.IsInTabletMode
bool PlatformEventsComponent::IsInTabletMode() {
    static class UFunction* Func = nullptr;
    PlatformEventsComponent_IsInTabletMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlatformEventsComponent.IsInLaptopMode
bool PlatformEventsComponent::IsInLaptopMode() {
    static class UFunction* Func = nullptr;
    PlatformEventsComponent_IsInLaptopMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AtmosphericFogComponent.StartPrecompute
void AtmosphericFogComponent::StartPrecompute() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.AtmosphericFogComponent.SetSunMultiplier
void AtmosphericFogComponent::SetSunMultiplier(float NewSunMultiplier) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetSunMultiplier_Params Parms{};
    Parms.NewSunMultiplier = NewSunMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetStartDistance
void AtmosphericFogComponent::SetStartDistance(float NewStartDistance) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetStartDistance_Params Parms{};
    Parms.NewStartDistance = NewStartDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetPrecomputeParams
void AtmosphericFogComponent::SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetPrecomputeParams_Params Parms{};
    Parms.DensityHeight = DensityHeight;
    Parms.MaxScatteringOrder = MaxScatteringOrder;
    Parms.InscatterAltitudeSampleNum = InscatterAltitudeSampleNum;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetMipFogTransitionDistance
void AtmosphericFogComponent::SetMipFogTransitionDistance(float NewMipFogTransitionDistance) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetMipFogTransitionDistance_Params Parms{};
    Parms.NewMipFogTransitionDistance = NewMipFogTransitionDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetMipFogMipLevels
void AtmosphericFogComponent::SetMipFogMipLevels(float NewMipFogBackgroundMipLevel, float NewMipFogForegroundMipLevel) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetMipFogMipLevels_Params Parms{};
    Parms.NewMipFogBackgroundMipLevel = NewMipFogBackgroundMipLevel;
    Parms.NewMipFogForegroundMipLevel = NewMipFogForegroundMipLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetFogMultiplier
void AtmosphericFogComponent::SetFogMultiplier(float NewFogMultiplier) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetFogMultiplier_Params Parms{};
    Parms.NewFogMultiplier = NewFogMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetFogDistanceLinearity
void AtmosphericFogComponent::SetFogDistanceLinearity(float NewFogDistanceLinearity) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetFogDistanceLinearity_Params Parms{};
    Parms.NewFogDistanceLinearity = NewFogDistanceLinearity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetFogDensityColor
void AtmosphericFogComponent::SetFogDensityColor(uint8_t NewFogDensityColor) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetFogDensityColor_Params Parms{};
    Parms.NewFogDensityColor = NewFogDensityColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetDistanceScale
void AtmosphericFogComponent::SetDistanceScale(float NewDistanceScale) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetDistanceScale_Params Parms{};
    Parms.NewDistanceScale = NewDistanceScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetDistanceOffset
void AtmosphericFogComponent::SetDistanceOffset(float NewDistanceOffset) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetDistanceOffset_Params Parms{};
    Parms.NewDistanceOffset = NewDistanceOffset;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetDensityOffset
void AtmosphericFogComponent::SetDensityOffset(float NewDensityOffset) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetDensityOffset_Params Parms{};
    Parms.NewDensityOffset = NewDensityOffset;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetDensityMultiplier
void AtmosphericFogComponent::SetDensityMultiplier(float NewDensityMultiplier) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetDensityMultiplier_Params Parms{};
    Parms.NewDensityMultiplier = NewDensityMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetDefaultLightColor
void AtmosphericFogComponent::SetDefaultLightColor(uint8_t NewLightColor) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetDefaultLightColor_Params Parms{};
    Parms.NewLightColor = NewLightColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetDefaultBrightness
void AtmosphericFogComponent::SetDefaultBrightness(float NewBrightness) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetDefaultBrightness_Params Parms{};
    Parms.NewBrightness = NewBrightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBlendWithUnlitGeometry
void AtmosphericFogComponent::SetBlendWithUnlitGeometry(bool NewBlendWithUnlitGeometry) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBlendWithUnlitGeometry_Params Parms{};
    Parms.NewBlendWithUnlitGeometry = NewBlendWithUnlitGeometry;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendTerrainCloudTint
void AtmosphericFogComponent::SetBendTerrainCloudTint(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendTerrainCloudTint_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendTerrainAtmosphereTint
void AtmosphericFogComponent::SetBendTerrainAtmosphereTint(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendTerrainAtmosphereTint_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendReferenceAltitudeMeters
void AtmosphericFogComponent::SetBendReferenceAltitudeMeters(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendReferenceAltitudeMeters_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScatterTerm_Terrain
void AtmosphericFogComponent::SetBendRayleighScatterTerm_Terrain(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendRayleighScatterTerm_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScatterTerm
void AtmosphericFogComponent::SetBendRayleighScatterTerm(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendRayleighScatterTerm_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScaleTerm_Terrain
void AtmosphericFogComponent::SetBendRayleighScaleTerm_Terrain(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendRayleighScaleTerm_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendRayleighScaleTerm
void AtmosphericFogComponent::SetBendRayleighScaleTerm(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendRayleighScaleTerm_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendRayleighDirectionalScale_Terrain
void AtmosphericFogComponent::SetBendRayleighDirectionalScale_Terrain(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendRayleighDirectionalScale_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieScatterTerm_Terrain
void AtmosphericFogComponent::SetBendMieScatterTerm_Terrain(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieScatterTerm_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieScatterTerm
void AtmosphericFogComponent::SetBendMieScatterTerm(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieScatterTerm_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieScaleTerm_Terrain
void AtmosphericFogComponent::SetBendMieScaleTerm_Terrain(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieScaleTerm_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieScaleTerm
void AtmosphericFogComponent::SetBendMieScaleTerm(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieScaleTerm_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieDirectionTerm_Terrain
void AtmosphericFogComponent::SetBendMieDirectionTerm_Terrain(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieDirectionTerm_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieDirectionTerm
void AtmosphericFogComponent::SetBendMieDirectionTerm(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieDirectionTerm_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendMieDirectionalScale_Terrain
void AtmosphericFogComponent::SetBendMieDirectionalScale_Terrain(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendMieDirectionalScale_Terrain_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendExtendedHorizon
void AtmosphericFogComponent::SetBendExtendedHorizon(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendExtendedHorizon_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetBendCloudsLightingHeightMeters
void AtmosphericFogComponent::SetBendCloudsLightingHeightMeters(float NewValue) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetBendCloudsLightingHeightMeters_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.SetAltitudeScale
void AtmosphericFogComponent::SetAltitudeScale(float NewAltitudeScale) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_SetAltitudeScale_Params Parms{};
    Parms.NewAltitudeScale = NewAltitudeScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.DisableSunDisk
void AtmosphericFogComponent::DisableSunDisk(bool NewSunDisk) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_DisableSunDisk_Params Parms{};
    Parms.NewSunDisk = NewSunDisk;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AtmosphericFogComponent.DisableGroundScattering
void AtmosphericFogComponent::DisableGroundScattering(bool NewGroundScattering) {
    static class UFunction* Func = nullptr;
    AtmosphericFogComponent_DisableGroundScattering_Params Parms{};
    Parms.NewGroundScattering = NewGroundScattering;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.Unpause
bool AudioComponent::Unpause() {
    static class UFunction* Func = nullptr;
    AudioComponent_Unpause_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AudioComponent.Stop
void AudioComponent::Stop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.AudioComponent.SetWaveParameter
void AudioComponent::SetWaveParameter(struct FName InName, class UObject* InWave) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetWaveParameter_Params Parms{};
    Parms.InName = InName;
    Parms.InWave = InWave;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetVolumeMultiplier
void AudioComponent::SetVolumeMultiplier(float NewVolumeMultiplier) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetVolumeMultiplier_Params Parms{};
    Parms.NewVolumeMultiplier = NewVolumeMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetUISound
void AudioComponent::SetUISound(bool bInUISound) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetUISound_Params Parms{};
    Parms.bInUISound = bInUISound;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetSound
void AudioComponent::SetSound(class UObject* NewSound) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetSound_Params Parms{};
    Parms.NewSound = NewSound;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetPitchMultiplier
void AudioComponent::SetPitchMultiplier(float NewPitchMultiplier) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetPitchMultiplier_Params Parms{};
    Parms.NewPitchMultiplier = NewPitchMultiplier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetIntParameter
void AudioComponent::SetIntParameter(struct FName InName, int32_t InInt) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetIntParameter_Params Parms{};
    Parms.InName = InName;
    Parms.InInt = InInt;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetFloatParameter
void AudioComponent::SetFloatParameter(struct FName InName, float InFloat) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetFloatParameter_Params Parms{};
    Parms.InName = InName;
    Parms.InFloat = InFloat;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.SetBoolParameter
void AudioComponent::SetBoolParameter(struct FName InName, bool InBool) {
    static class UFunction* Func = nullptr;
    AudioComponent_SetBoolParameter_Params Parms{};
    Parms.InName = InName;
    Parms.InBool = InBool;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.Play
void AudioComponent::Play(float StartTime) {
    static class UFunction* Func = nullptr;
    AudioComponent_Play_Params Parms{};
    Parms.StartTime = StartTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.Pause
bool AudioComponent::Pause() {
    static class UFunction* Func = nullptr;
    AudioComponent_Pause_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AudioComponent.IsPlaying
bool AudioComponent::IsPlaying() {
    static class UFunction* Func = nullptr;
    AudioComponent_IsPlaying_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AudioComponent.IsPaused
bool AudioComponent::IsPaused() {
    static class UFunction* Func = nullptr;
    AudioComponent_IsPaused_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AudioComponent.FadeOut
void AudioComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
    static class UFunction* Func = nullptr;
    AudioComponent_FadeOut_Params Parms{};
    Parms.FadeOutDuration = FadeOutDuration;
    Parms.FadeVolumeLevel = FadeVolumeLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.FadeIn
void AudioComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime) {
    static class UFunction* Func = nullptr;
    AudioComponent_FadeIn_Params Parms{};
    Parms.FadeInDuration = FadeInDuration;
    Parms.FadeVolumeLevel = FadeVolumeLevel;
    Parms.StartTime = StartTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.BP_GetAttenuationSettingsToApply
bool AudioComponent::BP_GetAttenuationSettingsToApply(uint8_t OutAttenuationSettings) {
    static class UFunction* Func = nullptr;
    AudioComponent_BP_GetAttenuationSettingsToApply_Params Parms{};
    Parms.OutAttenuationSettings = OutAttenuationSettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AudioComponent.AdjustVolume
void AudioComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
    static class UFunction* Func = nullptr;
    AudioComponent_AdjustVolume_Params Parms{};
    Parms.AdjustVolumeDuration = AdjustVolumeDuration;
    Parms.AdjustVolumeLevel = AdjustVolumeLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AudioComponent.AdjustAttenuation
void AudioComponent::AdjustAttenuation(uint8_t InAttenuationSettings) {
    static class UFunction* Func = nullptr;
    AudioComponent_AdjustAttenuation_Params Parms{};
    Parms.InAttenuationSettings = InAttenuationSettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAmbientLightComponent.SetIntensity
void BendAmbientLightComponent::SetIntensity(float inIntensity) {
    static class UFunction* Func = nullptr;
    BendAmbientLightComponent_SetIntensity_Params Parms{};
    Parms.inIntensity = inIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAmbientLightComponent.SetDirection
void BendAmbientLightComponent::SetDirection(uint8_t inDirection) {
    static class UFunction* Func = nullptr;
    BendAmbientLightComponent_SetDirection_Params Parms{};
    Parms.inDirection = inDirection;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAmbientLightComponent.SetColor
void BendAmbientLightComponent::SetColor(uint8_t InColor) {
    static class UFunction* Func = nullptr;
    BendAmbientLightComponent_SetColor_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.AnimSequenceBase.GetPlayLength
float AnimSequenceBase::GetPlayLength() {
    static class UFunction* Func = nullptr;
    AnimSequenceBase_GetPlayLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendAnimAnchorComponent.SetIsEnabled
void BendAnimAnchorComponent::SetIsEnabled(bool IsEnabled) {
    static class UFunction* Func = nullptr;
    BendAnimAnchorComponent_SetIsEnabled_Params Parms{};
    Parms.IsEnabled = IsEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAnimAnchorComponent.SetAnimInstance
void BendAnimAnchorComponent::SetAnimInstance(class UObject* InAnimInstance) {
    static class UFunction* Func = nullptr;
    BendAnimAnchorComponent_SetAnimInstance_Params Parms{};
    Parms.InAnimInstance = InAnimInstance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAnimAnchorComponent.SetAnchorName
void BendAnimAnchorComponent::SetAnchorName(struct FName InAnchorName) {
    static class UFunction* Func = nullptr;
    BendAnimAnchorComponent_SetAnchorName_Params Parms{};
    Parms.InAnchorName = InAnchorName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAnimAnchorComponent.GetIsEnabled
bool BendAnimAnchorComponent::GetIsEnabled() {
    static class UFunction* Func = nullptr;
    BendAnimAnchorComponent_GetIsEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendAnimAnchorComponentWithOffset.SetOffsetTransform
void BendAnimAnchorComponentWithOffset::SetOffsetTransform(uint8_t InOffsetTransform) {
    static class UFunction* Func = nullptr;
    BendAnimAnchorComponentWithOffset_SetOffsetTransform_Params Parms{};
    Parms.InOffsetTransform = InOffsetTransform;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendAnimAnchorComponentWithOffset.GetOffsetTransform
uint8_t BendAnimAnchorComponentWithOffset::GetOffsetTransform() {
    static class UFunction* Func = nullptr;
    BendAnimAnchorComponentWithOffset_GetOffsetTransform_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendEyeReflectionLightComponent.ToggleVisibility
void BendEyeReflectionLightComponent::ToggleVisibility(bool bPropagateToChildren) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_ToggleVisibility_Params Parms{};
    Parms.bPropagateToChildren = bPropagateToChildren;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetVisibility
void BendEyeReflectionLightComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetVisibility_Params Parms{};
    Parms.bNewVisibility = bNewVisibility;
    Parms.bPropagateToChildren = bPropagateToChildren;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetTextureIndex
void BendEyeReflectionLightComponent::SetTextureIndex(int32_t InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetTextureIndex_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetScaleToAmbientLighting
void BendEyeReflectionLightComponent::SetScaleToAmbientLighting(bool InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetScaleToAmbientLighting_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetReflectionSize
void BendEyeReflectionLightComponent::SetReflectionSize(float InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetReflectionSize_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetIntensity
void BendEyeReflectionLightComponent::SetIntensity(float inIntensity) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetIntensity_Params Parms{};
    Parms.inIntensity = inIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerSmoothing
void BendEyeReflectionLightComponent::SetFlickerSmoothing(float InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetFlickerSmoothing_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerScale
void BendEyeReflectionLightComponent::SetFlickerScale(float InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetFlickerScale_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerSaturation
void BendEyeReflectionLightComponent::SetFlickerSaturation(float InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetFlickerSaturation_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetFlickerPositionOffset
void BendEyeReflectionLightComponent::SetFlickerPositionOffset(uint8_t InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetFlickerPositionOffset_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetEnabled
void BendEyeReflectionLightComponent::SetEnabled(bool InValue) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetEnabled_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.SetColor
void BendEyeReflectionLightComponent::SetColor(uint8_t InColor) {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_SetColor_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendEyeReflectionLightComponent.IsVisible
bool BendEyeReflectionLightComponent::IsVisible() {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_IsVisible_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendEyeReflectionLightComponent.GetEnabled
bool BendEyeReflectionLightComponent::GetEnabled() {
    static class UFunction* Func = nullptr;
    BendEyeReflectionLightComponent_GetEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendVoxelLightComponent.SetScaleToAmbientLighting
void BendVoxelLightComponent::SetScaleToAmbientLighting(bool InValue) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetScaleToAmbientLighting_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetIntensity
void BendVoxelLightComponent::SetIntensity(float inIntensity) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetIntensity_Params Parms{};
    Parms.inIntensity = inIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetFlickerSmoothing
void BendVoxelLightComponent::SetFlickerSmoothing(float InValue) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetFlickerSmoothing_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetFlickerScale
void BendVoxelLightComponent::SetFlickerScale(float InValue) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetFlickerScale_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetFlickerSaturation
void BendVoxelLightComponent::SetFlickerSaturation(float InValue) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetFlickerSaturation_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetFlickerPositionOffset
void BendVoxelLightComponent::SetFlickerPositionOffset(uint8_t InValue) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetFlickerPositionOffset_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetEnabled
void BendVoxelLightComponent::SetEnabled(bool InValue) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetEnabled_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendVoxelLightComponent.SetColor
void BendVoxelLightComponent::SetColor(uint8_t InColor) {
    static class UFunction* Func = nullptr;
    BendVoxelLightComponent_SetColor_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetUseFieldOfViewForLOD
void CameraComponent::SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetUseFieldOfViewForLOD_Params Parms{};
    Parms.bInUseFieldOfViewForLOD = bInUseFieldOfViewForLOD;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetProjectionMode
void CameraComponent::SetProjectionMode(uint8_t InProjectionMode) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetProjectionMode_Params Parms{};
    Parms.InProjectionMode = InProjectionMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetPostProcessBlendWeight
void CameraComponent::SetPostProcessBlendWeight(float InPostProcessBlendWeight) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetPostProcessBlendWeight_Params Parms{};
    Parms.InPostProcessBlendWeight = InPostProcessBlendWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetOrthoWidth
void CameraComponent::SetOrthoWidth(float InOrthoWidth) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetOrthoWidth_Params Parms{};
    Parms.InOrthoWidth = InOrthoWidth;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetOrthoNearClipPlane
void CameraComponent::SetOrthoNearClipPlane(float InOrthoNearClipPlane) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetOrthoNearClipPlane_Params Parms{};
    Parms.InOrthoNearClipPlane = InOrthoNearClipPlane;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetOrthoFarClipPlane
void CameraComponent::SetOrthoFarClipPlane(float InOrthoFarClipPlane) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetOrthoFarClipPlane_Params Parms{};
    Parms.InOrthoFarClipPlane = InOrthoFarClipPlane;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetFieldOfView
void CameraComponent::SetFieldOfView(float InFieldOfView) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetFieldOfView_Params Parms{};
    Parms.InFieldOfView = InFieldOfView;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetConstraintAspectRatio
void CameraComponent::SetConstraintAspectRatio(bool bInConstrainAspectRatio) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetConstraintAspectRatio_Params Parms{};
    Parms.bInConstrainAspectRatio = bInConstrainAspectRatio;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.SetAspectRatio
void CameraComponent::SetAspectRatio(float InAspectRatio) {
    static class UFunction* Func = nullptr;
    CameraComponent_SetAspectRatio_Params Parms{};
    Parms.InAspectRatio = InAspectRatio;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.GetCameraView
void CameraComponent::GetCameraView(float DeltaTime, uint8_t DesiredView) {
    static class UFunction* Func = nullptr;
    CameraComponent_GetCameraView_Params Parms{};
    Parms.DeltaTime = DeltaTime;
    Parms.DesiredView = DesiredView;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.ClearFocusActors
void CameraComponent::ClearFocusActors() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CameraComponent.AddOrUpdateBlendable
void CameraComponent::AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight) {
    static class UFunction* Func = nullptr;
    CameraComponent_AddOrUpdateBlendable_Params Parms{};
    Parms.InBlendableObject = InBlendableObject;
    Parms.InWeight = InWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraComponent.AddFocusActor
void CameraComponent::AddFocusActor(class UObject* SkelMesh, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    CameraComponent_AddFocusActor_Params Parms{};
    Parms.SkelMesh = SkelMesh;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DecalComponent.SetSortOrder
void DecalComponent::SetSortOrder(int32_t Value) {
    static class UFunction* Func = nullptr;
    DecalComponent_SetSortOrder_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DecalComponent.SetDecalMaterial
void DecalComponent::SetDecalMaterial(class UObject* NewDecalMaterial) {
    static class UFunction* Func = nullptr;
    DecalComponent_SetDecalMaterial_Params Parms{};
    Parms.NewDecalMaterial = NewDecalMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DecalComponent.SetDecalFadeSize
void DecalComponent::SetDecalFadeSize(float inFadeSizeStart, float inFadeSizeEnd) {
    static class UFunction* Func = nullptr;
    DecalComponent_SetDecalFadeSize_Params Parms{};
    Parms.inFadeSizeStart = inFadeSizeStart;
    Parms.inFadeSizeEnd = inFadeSizeEnd;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DecalComponent.ScaleDecalFadeSize
void DecalComponent::ScaleDecalFadeSize(float inFadeRangeScale) {
    static class UFunction* Func = nullptr;
    DecalComponent_ScaleDecalFadeSize_Params Parms{};
    Parms.inFadeRangeScale = inFadeRangeScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DecalComponent.GetDecalMaterial
class UObject* DecalComponent::GetDecalMaterial() {
    static class UFunction* Func = nullptr;
    DecalComponent_GetDecalMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.DecalComponent.CreateDynamicMaterialInstance
class UObject* DecalComponent::CreateDynamicMaterialInstance() {
    static class UFunction* Func = nullptr;
    DecalComponent_CreateDynamicMaterialInstance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ExponentialHeightFogComponent.SetStartDistance
void ExponentialHeightFogComponent::SetStartDistance(float Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetStartDistance_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetFogMaxOpacity
void ExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetFogMaxOpacity_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetFogInscatteringColor
void ExponentialHeightFogComponent::SetFogInscatteringColor(uint8_t Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetFogInscatteringColor_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetFogHeightFalloff
void ExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetFogHeightFalloff_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetFogDensity
void ExponentialHeightFogComponent::SetFogDensity(float Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetFogDensity_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance
void ExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent
void ExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor
void ExponentialHeightFogComponent::SetDirectionalInscatteringColor(uint8_t Value) {
    static class UFunction* Func = nullptr;
    ExponentialHeightFogComponent_SetDirectionalInscatteringColor_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction
void DirectionalLightComponent::SetShadowDistanceFadeoutFraction(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetShadowDistanceFadeoutFraction_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetOcclusionMaskDarkness
void DirectionalLightComponent::SetOcclusionMaskDarkness(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetOcclusionMaskDarkness_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetLightShaftOverrideDirection
void DirectionalLightComponent::SetLightShaftOverrideDirection(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetLightShaftOverrideDirection_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion
void DirectionalLightComponent::SetEnableLightShaftOcclusion(bool bNewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetEnableLightShaftOcclusion_Params Parms{};
    Parms.bNewValue = bNewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight
void DirectionalLightComponent::SetDynamicShadowDistanceStationaryLight(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight
void DirectionalLightComponent::SetDynamicShadowDistanceMovableLight(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetDynamicShadowCascades
void DirectionalLightComponent::SetDynamicShadowCascades(int32_t NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetDynamicShadowCascades_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetCascadeTransitionFraction
void DirectionalLightComponent::SetCascadeTransitionFraction(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetCascadeTransitionFraction_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetCascadeDistributionExponent
void DirectionalLightComponent::SetCascadeDistributionExponent(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetCascadeDistributionExponent_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetBendSunLightingTintTemperature
void DirectionalLightComponent::SetBendSunLightingTintTemperature(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetBendSunLightingTintTemperature_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetBendSunLightingTint
void DirectionalLightComponent::SetBendSunLightingTint(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetBendSunLightingTint_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetBendCloudLightingTintTemperature
void DirectionalLightComponent::SetBendCloudLightingTintTemperature(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetBendCloudLightingTintTemperature_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetBendCloudLightingTint
void DirectionalLightComponent::SetBendCloudLightingTint(uint8_t NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetBendCloudLightingTint_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.SetBendAtmosphereCaptureSaturation
void DirectionalLightComponent::SetBendAtmosphereCaptureSaturation(float NewValue) {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_SetBendAtmosphereCaptureSaturation_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DirectionalLightComponent.GetBendAtmosphereAffectedColor
uint8_t DirectionalLightComponent::GetBendAtmosphereAffectedColor() {
    static class UFunction* Func = nullptr;
    DirectionalLightComponent_GetBendAtmosphereAffectedColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.SkyLightComponent.SetOcclusionTint
void SkyLightComponent::SetOcclusionTint(uint8_t InTint) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetOcclusionTint_Params Parms{};
    Parms.InTint = InTint;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.SetMinOcclusion
void SkyLightComponent::SetMinOcclusion(float InMinOcclusion) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetMinOcclusion_Params Parms{};
    Parms.InMinOcclusion = InMinOcclusion;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.SetLightColor
void SkyLightComponent::SetLightColor(uint8_t NewLightColor) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetLightColor_Params Parms{};
    Parms.NewLightColor = NewLightColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.SetIntensity
void SkyLightComponent::SetIntensity(float NewIntensity) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetIntensity_Params Parms{};
    Parms.NewIntensity = NewIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.SetIndirectLightingIntensity
void SkyLightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetIndirectLightingIntensity_Params Parms{};
    Parms.NewIntensity = NewIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.SetCubemapBlend
void SkyLightComponent::SetCubemapBlend(class UObject* SourceCubemap, class UObject* DestinationCubemap, float InBlendFraction) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetCubemapBlend_Params Parms{};
    Parms.SourceCubemap = SourceCubemap;
    Parms.DestinationCubemap = DestinationCubemap;
    Parms.InBlendFraction = InBlendFraction;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.SetCubemap
void SkyLightComponent::SetCubemap(class UObject* NewCubemap) {
    static class UFunction* Func = nullptr;
    SkyLightComponent_SetCubemap_Params Parms{};
    Parms.NewCubemap = NewCubemap;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkyLightComponent.RecaptureSky
void SkyLightComponent::RecaptureSky() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.PhysicsSpringComponent.GetSpringRestingPoint
uint8_t PhysicsSpringComponent::GetSpringRestingPoint() {
    static class UFunction* Func = nullptr;
    PhysicsSpringComponent_GetSpringRestingPoint_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PhysicsSpringComponent.GetSpringDirection
uint8_t PhysicsSpringComponent::GetSpringDirection() {
    static class UFunction* Func = nullptr;
    PhysicsSpringComponent_GetSpringDirection_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint
uint8_t PhysicsSpringComponent::GetSpringCurrentEndPoint() {
    static class UFunction* Func = nullptr;
    PhysicsSpringComponent_GetSpringCurrentEndPoint_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar
float PhysicsSpringComponent::GetNormalizedCompressionScalar() {
    static class UFunction* Func = nullptr;
    PhysicsSpringComponent_GetNormalizedCompressionScalar_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PostProcessComponent.AddOrUpdateBlendable
void PostProcessComponent::AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight) {
    static class UFunction* Func = nullptr;
    PostProcessComponent_AddOrUpdateBlendable_Params Parms{};
    Parms.InBlendableObject = InBlendableObject;
    Parms.InWeight = InWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ArrowComponent.SetArrowColor_New
void ArrowComponent::SetArrowColor_New(uint8_t NewColor) {
    static class UFunction* Func = nullptr;
    ArrowComponent_SetArrowColor_New_Params Parms{};
    Parms.NewColor = NewColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ArrowComponent.SetArrowColor_DEPRECATED
void ArrowComponent::SetArrowColor_DEPRECATED(uint8_t NewColor) {
    static class UFunction* Func = nullptr;
    ArrowComponent_SetArrowColor_DEPRECATED_Params Parms{};
    Parms.NewColor = NewColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BillboardComponent.SetUV
void BillboardComponent::SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL) {
    static class UFunction* Func = nullptr;
    BillboardComponent_SetUV_Params Parms{};
    Parms.NewU = NewU;
    Parms.NewUL = NewUL;
    Parms.NewV = NewV;
    Parms.NewVL = NewVL;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BillboardComponent.SetSpriteAndUV
void BillboardComponent::SetSpriteAndUV(class UObject* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL) {
    static class UFunction* Func = nullptr;
    BillboardComponent_SetSpriteAndUV_Params Parms{};
    Parms.NewSprite = NewSprite;
    Parms.NewU = NewU;
    Parms.NewUL = NewUL;
    Parms.NewV = NewV;
    Parms.NewVL = NewVL;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BillboardComponent.SetSprite
void BillboardComponent::SetSprite(class UObject* NewSprite) {
    static class UFunction* Func = nullptr;
    BillboardComponent_SetSprite_Params Parms{};
    Parms.NewSprite = NewSprite;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialBillboardComponent.AddElement
void MaterialBillboardComponent::AddElement(class UObject* Material, class UObject* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UObject* DistanceToSizeCurve) {
    static class UFunction* Func = nullptr;
    MaterialBillboardComponent_AddElement_Params Parms{};
    Parms.Material = Material;
    Parms.DistanceToOpacityCurve = DistanceToOpacityCurve;
    Parms.bSizeIsInScreenSpace = bSizeIsInScreenSpace;
    Parms.BaseSizeX = BaseSizeX;
    Parms.BaseSizeY = BaseSizeY;
    Parms.DistanceToSizeCurve = DistanceToSizeCurve;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DestructibleComponent.SetDestructibleMesh
void DestructibleComponent::SetDestructibleMesh(class UObject* NewMesh) {
    static class UFunction* Func = nullptr;
    DestructibleComponent_SetDestructibleMesh_Params Parms{};
    Parms.NewMesh = NewMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DestructibleComponent.GetDestructibleMesh
class UObject* DestructibleComponent::GetDestructibleMesh() {
    static class UFunction* Func = nullptr;
    DestructibleComponent_GetDestructibleMesh_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.DestructibleComponent.ApplyRadiusDamage
void DestructibleComponent::ApplyRadiusDamage(float BaseDamage, uint8_t HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
    static class UFunction* Func = nullptr;
    DestructibleComponent_ApplyRadiusDamage_Params Parms{};
    Parms.BaseDamage = BaseDamage;
    Parms.HurtOrigin = HurtOrigin;
    Parms.DamageRadius = DamageRadius;
    Parms.ImpulseStrength = ImpulseStrength;
    Parms.bFullDamage = bFullDamage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DestructibleComponent.ApplyDamage
void DestructibleComponent::ApplyDamage(float DamageAmount, uint8_t HitLocation, uint8_t ImpulseDir, float ImpulseStrength) {
    static class UFunction* Func = nullptr;
    DestructibleComponent_ApplyDamage_Params Parms{};
    Parms.DamageAmount = DamageAmount;
    Parms.HitLocation = HitLocation;
    Parms.ImpulseDir = ImpulseDir;
    Parms.ImpulseStrength = ImpulseStrength;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PoseableMeshComponent.SetBoneTransformByName
void PoseableMeshComponent::SetBoneTransformByName(struct FName BoneName, uint8_t InTransform, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_SetBoneTransformByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InTransform = InTransform;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PoseableMeshComponent.SetBoneScaleByName
void PoseableMeshComponent::SetBoneScaleByName(struct FName BoneName, uint8_t InScale3D, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_SetBoneScaleByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InScale3D = InScale3D;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PoseableMeshComponent.SetBoneRotationByName
void PoseableMeshComponent::SetBoneRotationByName(struct FName BoneName, uint8_t InRotation, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_SetBoneRotationByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InRotation = InRotation;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PoseableMeshComponent.SetBoneLocationByName
void PoseableMeshComponent::SetBoneLocationByName(struct FName BoneName, uint8_t InLocation, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_SetBoneLocationByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.InLocation = InLocation;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PoseableMeshComponent.ResetBoneTransformByName
void PoseableMeshComponent::ResetBoneTransformByName(struct FName BoneName) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_ResetBoneTransformByName_Params Parms{};
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PoseableMeshComponent.GetBoneTransformByName
uint8_t PoseableMeshComponent::GetBoneTransformByName(struct FName BoneName, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_GetBoneTransformByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PoseableMeshComponent.GetBoneScaleByName
uint8_t PoseableMeshComponent::GetBoneScaleByName(struct FName BoneName, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_GetBoneScaleByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PoseableMeshComponent.GetBoneRotationByName
uint8_t PoseableMeshComponent::GetBoneRotationByName(struct FName BoneName, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_GetBoneRotationByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PoseableMeshComponent.GetBoneLocationByName
uint8_t PoseableMeshComponent::GetBoneLocationByName(struct FName BoneName, uint8_t BoneSpace) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_GetBoneLocationByName_Params Parms{};
    Parms.BoneName = BoneName;
    Parms.BoneSpace = BoneSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PoseableMeshComponent.CopyPoseFromSkeletalComponent
void PoseableMeshComponent::CopyPoseFromSkeletalComponent(class UObject* InComponentToCopy) {
    static class UFunction* Func = nullptr;
    PoseableMeshComponent_CopyPoseFromSkeletalComponent_Params Parms{};
    Parms.InComponentToCopy = InComponentToCopy;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystem.ContainsEmitterType
bool ParticleSystem::ContainsEmitterType(class UClass* TypeData) {
    static class UFunction* Func = nullptr;
    ParticleSystem_ContainsEmitterType_Params Parms{};
    Parms.TypeData = TypeData;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ParticleSystemComponent.SetVectorParameter
void ParticleSystemComponent::SetVectorParameter(struct FName ParameterName, uint8_t Param) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetVectorParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetTrailSourceData
void ParticleSystemComponent::SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, uint8_t InWidthMode, float InWidth) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetTrailSourceData_Params Parms{};
    Parms.InFirstSocketName = InFirstSocketName;
    Parms.InSecondSocketName = InSecondSocketName;
    Parms.InWidthMode = InWidthMode;
    Parms.InWidth = InWidth;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetTemplate
void ParticleSystemComponent::SetTemplate(class UObject* NewTemplate) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetTemplate_Params Parms{};
    Parms.NewTemplate = NewTemplate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetMaterialParameter
void ParticleSystemComponent::SetMaterialParameter(struct FName ParameterName, class UObject* Param) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetMaterialParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetFloatParameter
void ParticleSystemComponent::SetFloatParameter(struct FName ParameterName, float Param) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetFloatParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetEmitterEnable
void ParticleSystemComponent::SetEmitterEnable(struct FName EmitterName, bool bNewEnableState) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetEmitterEnable_Params Parms{};
    Parms.EmitterName = EmitterName;
    Parms.bNewEnableState = bNewEnableState;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetColorParameter
void ParticleSystemComponent::SetColorParameter(struct FName ParameterName, uint8_t Param) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetColorParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamTargetTangent
void ParticleSystemComponent::SetBeamTargetTangent(int32_t EmitterIndex, uint8_t NewTangentPoint, int32_t TargetIndex) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamTargetTangent_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewTangentPoint = NewTangentPoint;
    Parms.TargetIndex = TargetIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamTargetStrength
void ParticleSystemComponent::SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamTargetStrength_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewTargetStrength = NewTargetStrength;
    Parms.TargetIndex = TargetIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamTargetPoint
void ParticleSystemComponent::SetBeamTargetPoint(int32_t EmitterIndex, uint8_t NewTargetPoint, int32_t TargetIndex) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamTargetPoint_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewTargetPoint = NewTargetPoint;
    Parms.TargetIndex = TargetIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamSourceTangent
void ParticleSystemComponent::SetBeamSourceTangent(int32_t EmitterIndex, uint8_t NewTangentPoint, int32_t SourceIndex) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamSourceTangent_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewTangentPoint = NewTangentPoint;
    Parms.SourceIndex = SourceIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamSourceStrength
void ParticleSystemComponent::SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamSourceStrength_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewSourceStrength = NewSourceStrength;
    Parms.SourceIndex = SourceIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamSourcePoint
void ParticleSystemComponent::SetBeamSourcePoint(int32_t EmitterIndex, uint8_t NewSourcePoint, int32_t SourceIndex) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamSourcePoint_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewSourcePoint = NewSourcePoint;
    Parms.SourceIndex = SourceIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetBeamEndPoint
void ParticleSystemComponent::SetBeamEndPoint(int32_t EmitterIndex, uint8_t NewEndPoint) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetBeamEndPoint_Params Parms{};
    Parms.EmitterIndex = EmitterIndex;
    Parms.NewEndPoint = NewEndPoint;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetAutoAttachParams
void ParticleSystemComponent::SetAutoAttachParams(class UObject* Parent, struct FName SocketName, uint8_t LocationType) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetAutoAttachParams_Params Parms{};
    Parms.Parent = Parent;
    Parms.SocketName = SocketName;
    Parms.LocationType = LocationType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.SetActorParameter
void ParticleSystemComponent::SetActorParameter(struct FName ParameterName, class UObject* Param) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_SetActorParameter_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Param = Param;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.GetNumActiveParticles
int32_t ParticleSystemComponent::GetNumActiveParticles() {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_GetNumActiveParticles_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ParticleSystemComponent.GetNamedMaterial
class UObject* ParticleSystemComponent::GetNamedMaterial(struct FName InName) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_GetNamedMaterial_Params Parms{};
    Parms.InName = InName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ParticleSystemComponent.GetCollisionHitData
uint8_t ParticleSystemComponent::GetCollisionHitData() {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_GetCollisionHitData_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ParticleSystemComponent.GenerateParticleEvent
void ParticleSystemComponent::GenerateParticleEvent(struct FName InEventName, float InEmitterTime, uint8_t InLocation, uint8_t inDirection, uint8_t InVelocity) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_GenerateParticleEvent_Params Parms{};
    Parms.InEventName = InEventName;
    Parms.InEmitterTime = InEmitterTime;
    Parms.InLocation = InLocation;
    Parms.inDirection = inDirection;
    Parms.InVelocity = InVelocity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ParticleSystemComponent.EndTrails
void ParticleSystemComponent::EndTrails() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance
class UObject* ParticleSystemComponent::CreateNamedDynamicMaterialInstance(struct FName InName, class UObject* SourceMaterial) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_CreateNamedDynamicMaterialInstance_Params Parms{};
    Parms.InName = InName;
    Parms.SourceMaterial = SourceMaterial;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.ParticleSystemComponent.BeginTrails
void ParticleSystemComponent::BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, uint8_t InWidthMode, float InWidth) {
    static class UFunction* Func = nullptr;
    ParticleSystemComponent_BeginTrails_Params Parms{};
    Parms.InFirstSocketName = InFirstSocketName;
    Parms.InSecondSocketName = InSecondSocketName;
    Parms.InWidthMode = InWidthMode;
    Parms.InWidth = InWidth;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendNavModifierComponent.SetNavigationRelevancy
void BendNavModifierComponent::SetNavigationRelevancy(bool bRelevant) {
    static class UFunction* Func = nullptr;
    BendNavModifierComponent_SetNavigationRelevancy_Params Parms{};
    Parms.bRelevant = bRelevant;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.BendSplineComponent.GetLocationAlongSplineFromWorldLocation
uint8_t BendSplineComponent::GetLocationAlongSplineFromWorldLocation(uint8_t StartWorldLocation, float distFrom, uint8_t CoordinateSpace) {
    static class UFunction* Func = nullptr;
    BendSplineComponent_GetLocationAlongSplineFromWorldLocation_Params Parms{};
    Parms.StartWorldLocation = StartWorldLocation;
    Parms.distFrom = distFrom;
    Parms.CoordinateSpace = CoordinateSpace;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendSplineComponent.GetDistanceAlongSpline
float BendSplineComponent::GetDistanceAlongSpline(uint8_t StartWorldLocation) {
    static class UFunction* Func = nullptr;
    BendSplineComponent_GetDistanceAlongSpline_Params Parms{};
    Parms.StartWorldLocation = StartWorldLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.BendSplineComponent.GetClosestSegmentIndex
int32_t BendSplineComponent::GetClosestSegmentIndex(uint8_t WorldLocation) {
    static class UFunction* Func = nullptr;
    BendSplineComponent_GetClosestSegmentIndex_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TextRenderComponent.SetYScale
void TextRenderComponent::SetYScale(float Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetYScale_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetXScale
void TextRenderComponent::SetXScale(float Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetXScale_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetWorldSize
void TextRenderComponent::SetWorldSize(float Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetWorldSize_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetTextRenderColor
void TextRenderComponent::SetTextRenderColor(uint8_t Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetTextRenderColor_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetTextMaterial
void TextRenderComponent::SetTextMaterial(class UObject* Material) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetTextMaterial_Params Parms{};
    Parms.Material = Material;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetText
void TextRenderComponent::SetText(struct FString Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetText_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetHorizSpacingAdjust
void TextRenderComponent::SetHorizSpacingAdjust(float Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetHorizSpacingAdjust_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetHorizontalAlignment
void TextRenderComponent::SetHorizontalAlignment(uint8_t Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetHorizontalAlignment_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.SetFont
void TextRenderComponent::SetFont(class UObject* Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_SetFont_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.K2_SetText
void TextRenderComponent::K2_SetText(struct FText Value) {
    static class UFunction* Func = nullptr;
    TextRenderComponent_K2_SetText_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TextRenderComponent.GetTextWorldSize
uint8_t TextRenderComponent::GetTextWorldSize() {
    static class UFunction* Func = nullptr;
    TextRenderComponent_GetTextWorldSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TextRenderComponent.GetTextLocalSize
uint8_t TextRenderComponent::GetTextLocalSize() {
    static class UFunction* Func = nullptr;
    TextRenderComponent_GetTextLocalSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.VectorFieldComponent.SetIntensity
void VectorFieldComponent::SetIntensity(float NewIntensity) {
    static class UFunction* Func = nullptr;
    VectorFieldComponent_SetIntensity_Params Parms{};
    Parms.NewIntensity = NewIntensity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.RadialForceComponent.RemoveObjectTypeToAffect
void RadialForceComponent::RemoveObjectTypeToAffect(uint8_t ObjectType) {
    static class UFunction* Func = nullptr;
    RadialForceComponent_RemoveObjectTypeToAffect_Params Parms{};
    Parms.ObjectType = ObjectType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.RadialForceComponent.FireImpulse
void RadialForceComponent::FireImpulse() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.RadialForceComponent.AddObjectTypeToAffect
void RadialForceComponent::AddObjectTypeToAffect(uint8_t ObjectType) {
    static class UFunction* Func = nullptr;
    RadialForceComponent_AddObjectTypeToAffect_Params Parms{};
    Parms.ObjectType = ObjectType;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneCaptureComponent.HideComponent
void SceneCaptureComponent::HideComponent(class UObject* InComponent) {
    static class UFunction* Func = nullptr;
    SceneCaptureComponent_HideComponent_Params Parms{};
    Parms.InComponent = InComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneCaptureComponent.HideActorComponents
void SceneCaptureComponent::HideActorComponents(class UObject* InActor) {
    static class UFunction* Func = nullptr;
    SceneCaptureComponent_HideActorComponents_Params Parms{};
    Parms.InActor = InActor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneCaptureComponent2D.UpdateContent
void SceneCaptureComponent2D::UpdateContent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SceneCaptureComponent2D.AddOrUpdateBlendable
void SceneCaptureComponent2D::AddOrUpdateBlendable(uint8_t InBlendableObject, float InWeight) {
    static class UFunction* Func = nullptr;
    SceneCaptureComponent2D_AddOrUpdateBlendable_Params Parms{};
    Parms.InBlendableObject = InBlendableObject;
    Parms.InWeight = InWeight;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SceneCaptureComponentCube.UpdateContent
void SceneCaptureComponentCube::UpdateContent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.SpringArmComponent.UpdateDesiredArmLocation_BP
void SpringArmComponent::UpdateDesiredArmLocation_BP() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.Stop
void TimelineComponent::Stop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.SetTimelineLengthMode
void TimelineComponent::SetTimelineLengthMode(uint8_t NewLengthMode) {
    static class UFunction* Func = nullptr;
    TimelineComponent_SetTimelineLengthMode_Params Parms{};
    Parms.NewLengthMode = NewLengthMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TimelineComponent.SetTimelineLength
void TimelineComponent::SetTimelineLength(float NewLength) {
    static class UFunction* Func = nullptr;
    TimelineComponent_SetTimelineLength_Params Parms{};
    Parms.NewLength = NewLength;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TimelineComponent.SetPlayRate
void TimelineComponent::SetPlayRate(float NewRate) {
    static class UFunction* Func = nullptr;
    TimelineComponent_SetPlayRate_Params Parms{};
    Parms.NewRate = NewRate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TimelineComponent.SetPlaybackPosition
void TimelineComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate) {
    static class UFunction* Func = nullptr;
    TimelineComponent_SetPlaybackPosition_Params Parms{};
    Parms.NewPosition = NewPosition;
    Parms.bFireEvents = bFireEvents;
    Parms.bFireUpdate = bFireUpdate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TimelineComponent.SetNewTime
void TimelineComponent::SetNewTime(float NewTime) {
    static class UFunction* Func = nullptr;
    TimelineComponent_SetNewTime_Params Parms{};
    Parms.NewTime = NewTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TimelineComponent.SetLooping
void TimelineComponent::SetLooping(bool bNewLooping) {
    static class UFunction* Func = nullptr;
    TimelineComponent_SetLooping_Params Parms{};
    Parms.bNewLooping = bNewLooping;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.TimelineComponent.ReverseFromEnd
void TimelineComponent::ReverseFromEnd() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.Reverse
void TimelineComponent::Reverse() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.PlayFromStart
void TimelineComponent::PlayFromStart() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.Play
void TimelineComponent::Play() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.OnRep_Timeline
void TimelineComponent::OnRep_Timeline() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TimelineComponent.IsReversing
bool TimelineComponent::IsReversing() {
    static class UFunction* Func = nullptr;
    TimelineComponent_IsReversing_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TimelineComponent.IsPlaying
bool TimelineComponent::IsPlaying() {
    static class UFunction* Func = nullptr;
    TimelineComponent_IsPlaying_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TimelineComponent.IsLooping
bool TimelineComponent::IsLooping() {
    static class UFunction* Func = nullptr;
    TimelineComponent_IsLooping_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TimelineComponent.GetTimelineLength
float TimelineComponent::GetTimelineLength() {
    static class UFunction* Func = nullptr;
    TimelineComponent_GetTimelineLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TimelineComponent.GetPlayRate
float TimelineComponent::GetPlayRate() {
    static class UFunction* Func = nullptr;
    TimelineComponent_GetPlayRate_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TimelineComponent.GetPlaybackPosition
float TimelineComponent::GetPlaybackPosition() {
    static class UFunction* Func = nullptr;
    TimelineComponent_GetPlaybackPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.VehicleAnimInstance.GetVehicle
class UObject* VehicleAnimInstance::GetVehicle() {
    static class UFunction* Func = nullptr;
    VehicleAnimInstance_GetVehicle_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AnimNotifyState_Trail.OverridePSTemplate
class UObject* AnimNotifyState_Trail::OverridePSTemplate(class UObject* MeshComp, class UObject* Animation) {
    static class UFunction* Func = nullptr;
    AnimNotifyState_Trail_OverridePSTemplate_Params Parms{};
    Parms.MeshComp = MeshComp;
    Parms.Animation = Animation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AvoidanceManager.RegisterMovementComponent
bool AvoidanceManager::RegisterMovementComponent(class UObject* MovementComp, float AvoidanceWeight) {
    static class UFunction* Func = nullptr;
    AvoidanceManager_RegisterMovementComponent_Params Parms{};
    Parms.MovementComp = MovementComp;
    Parms.AvoidanceWeight = AvoidanceWeight;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AvoidanceManager.GetObjectCount
int32_t AvoidanceManager::GetObjectCount() {
    static class UFunction* Func = nullptr;
    AvoidanceManager_GetObjectCount_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AvoidanceManager.GetNewAvoidanceUID
int32_t AvoidanceManager::GetNewAvoidanceUID() {
    static class UFunction* Func = nullptr;
    AvoidanceManager_GetNewAvoidanceUID_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AvoidanceManager.GetAvoidanceVelocityIgnoringUID
uint8_t AvoidanceManager::GetAvoidanceVelocityIgnoringUID(uint8_t AvoidanceData, float DeltaTime, int32_t IgnoreThisUID) {
    static class UFunction* Func = nullptr;
    AvoidanceManager_GetAvoidanceVelocityIgnoringUID_Params Parms{};
    Parms.AvoidanceData = AvoidanceData;
    Parms.DeltaTime = DeltaTime;
    Parms.IgnoreThisUID = IgnoreThisUID;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AvoidanceManager.GetAvoidanceVelocityForComponent
uint8_t AvoidanceManager::GetAvoidanceVelocityForComponent(class UObject* MovementComp) {
    static class UFunction* Func = nullptr;
    AvoidanceManager_GetAvoidanceVelocityForComponent_Params Parms{};
    Parms.MovementComp = MovementComp;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.AvoidanceManager.GetAvoidanceVelocity
uint8_t AvoidanceManager::GetAvoidanceVelocity(uint8_t AvoidanceData, float DeltaTime) {
    static class UFunction* Func = nullptr;
    AvoidanceManager_GetAvoidanceVelocity_Params Parms{};
    Parms.AvoidanceData = AvoidanceData;
    Parms.DeltaTime = DeltaTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Xor_IntInt
int32_t KismetMathLibrary::Xor_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Xor_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VSizeSquared
float KismetMathLibrary::VSizeSquared(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VSizeSquared_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VSize2DSquared
float KismetMathLibrary::VSize2DSquared(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VSize2DSquared_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VSize2D
float KismetMathLibrary::VSize2D(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VSize2D_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VSize
float KismetMathLibrary::VSize(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VSize_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VLerp
uint8_t KismetMathLibrary::VLerp(uint8_t A, uint8_t B, float Alpha) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VLerp_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VInterpTo_Constant
uint8_t KismetMathLibrary::VInterpTo_Constant(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VInterpTo_Constant_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VInterpTo
uint8_t KismetMathLibrary::VInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VInterpTo_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Vector2DInterpTo_Constant
uint8_t KismetMathLibrary::Vector2DInterpTo_Constant(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Vector2DInterpTo_Constant_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Vector2DInterpTo
uint8_t KismetMathLibrary::Vector2DInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Vector2DInterpTo_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.VEase
uint8_t KismetMathLibrary::VEase(uint8_t A, uint8_t B, float Alpha, uint8_t EasingFunc, float BlendExp, int32_t Steps) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_VEase_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    Parms.EasingFunc = EasingFunc;
    Parms.BlendExp = BlendExp;
    Parms.Steps = Steps;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.UtcNow
uint8_t KismetMathLibrary::UtcNow() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_UtcNow_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TransformLocation
uint8_t KismetMathLibrary::TransformLocation(uint8_t T, uint8_t Location) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TransformLocation_Params Parms{};
    Parms.T = T;
    Parms.Location = Location;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TransformDirection
uint8_t KismetMathLibrary::TransformDirection(uint8_t T, uint8_t Direction) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TransformDirection_Params Parms{};
    Parms.T = T;
    Parms.Direction = Direction;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Today
uint8_t KismetMathLibrary::Today() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Today_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TLerp
uint8_t KismetMathLibrary::TLerp(uint8_t A, uint8_t B, float Alpha) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TLerp_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TInterpTo
uint8_t KismetMathLibrary::TInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TInterpTo_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TimespanZeroValue
uint8_t KismetMathLibrary::TimespanZeroValue() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TimespanZeroValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TimespanRatio
float KismetMathLibrary::TimespanRatio(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TimespanRatio_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TimespanMinValue
uint8_t KismetMathLibrary::TimespanMinValue() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TimespanMinValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TimespanMaxValue
uint8_t KismetMathLibrary::TimespanMaxValue() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TimespanMaxValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TimespanFromString
bool KismetMathLibrary::TimespanFromString(struct FString TimespanString, uint8_t Result) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TimespanFromString_Params Parms{};
    Parms.TimespanString = TimespanString;
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.TEase
uint8_t KismetMathLibrary::TEase(uint8_t A, uint8_t B, float Alpha, uint8_t EasingFunc, float BlendExp, int32_t Steps) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_TEase_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    Parms.EasingFunc = EasingFunc;
    Parms.BlendExp = BlendExp;
    Parms.Steps = Steps;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Tan
float KismetMathLibrary::Tan(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Tan_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_VectorVector
uint8_t KismetMathLibrary::Subtract_VectorVector(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_VectorInt
uint8_t KismetMathLibrary::Subtract_VectorInt(uint8_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_VectorInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_VectorFloat
uint8_t KismetMathLibrary::Subtract_VectorFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_VectorFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_Vector2DVector2D
uint8_t KismetMathLibrary::Subtract_Vector2DVector2D(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_Vector2DVector2D_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_Vector2DFloat
uint8_t KismetMathLibrary::Subtract_Vector2DFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_Vector2DFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_TimespanTimespan
uint8_t KismetMathLibrary::Subtract_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_IntInt
int32_t KismetMathLibrary::Subtract_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_FloatFloat
float KismetMathLibrary::Subtract_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_DateTimeTimespan
uint8_t KismetMathLibrary::Subtract_DateTimeTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_DateTimeTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_DateTimeDateTime
uint8_t KismetMathLibrary::Subtract_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Subtract_ByteByte
uint8_t KismetMathLibrary::Subtract_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Subtract_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Square
float KismetMathLibrary::Square(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Square_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Sqrt
float KismetMathLibrary::Sqrt(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Sqrt_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Sin
float KismetMathLibrary::Sin(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Sin_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SignOfInteger
int32_t KismetMathLibrary::SignOfInteger(int32_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SignOfInteger_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SignOfFloat
float KismetMathLibrary::SignOfFloat(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SignOfFloat_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SetRandomStreamSeed
void KismetMathLibrary::SetRandomStreamSeed(uint8_t Stream, int32_t NewSeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SetRandomStreamSeed_Params Parms{};
    Parms.Stream = Stream;
    Parms.NewSeed = NewSeed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.SelectVector
uint8_t KismetMathLibrary::SelectVector(uint8_t A, uint8_t B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectTransform
uint8_t KismetMathLibrary::SelectTransform(uint8_t A, uint8_t B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectTransform_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectString
struct FString KismetMathLibrary::SelectString(struct FString A, struct FString B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectString_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectRotator
uint8_t KismetMathLibrary::SelectRotator(uint8_t A, uint8_t B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectRotator_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectObject
class UObject* KismetMathLibrary::SelectObject(class UObject* A, class UObject* B, bool bSelectA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectObject_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bSelectA = bSelectA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectInt
int32_t KismetMathLibrary::SelectInt(int32_t A, int32_t B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectFloat
float KismetMathLibrary::SelectFloat(float A, float B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectColor
uint8_t KismetMathLibrary::SelectColor(uint8_t A, uint8_t B, bool bPickA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectColor_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bPickA = bPickA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SelectClass
class UClass* KismetMathLibrary::SelectClass(class UClass* A, class UClass* B, bool bSelectA) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SelectClass_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.bSelectA = bSelectA;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.SeedRandomStream
void KismetMathLibrary::SeedRandomStream(uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_SeedRandomStream_Params Parms{};
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.Round
int32_t KismetMathLibrary::Round(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Round_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RotatorFromAxisAndAngle
uint8_t KismetMathLibrary::RotatorFromAxisAndAngle(uint8_t Axis, float angle) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RotatorFromAxisAndAngle_Params Parms{};
    Parms.Axis = Axis;
    Parms.angle = angle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RotateAngleAxis
uint8_t KismetMathLibrary::RotateAngleAxis(uint8_t InVect, float AngleDeg, uint8_t Axis) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RotateAngleAxis_Params Parms{};
    Parms.InVect = InVect;
    Parms.AngleDeg = AngleDeg;
    Parms.Axis = Axis;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RLerp
uint8_t KismetMathLibrary::RLerp(uint8_t A, uint8_t B, float Alpha, bool bShortestPath) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RLerp_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    Parms.bShortestPath = bShortestPath;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RInterpTo_Constant
uint8_t KismetMathLibrary::RInterpTo_Constant(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RInterpTo_Constant_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RInterpTo
uint8_t KismetMathLibrary::RInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RInterpTo_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RGBToHSV_Vector
void KismetMathLibrary::RGBToHSV_Vector(uint8_t RGB, uint8_t HSV) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RGBToHSV_Vector_Params Parms{};
    Parms.RGB = RGB;
    Parms.HSV = HSV;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.RGBToHSV
void KismetMathLibrary::RGBToHSV(uint8_t InColor, float H, float S, float V, float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RGBToHSV_Params Parms{};
    Parms.InColor = InColor;
    Parms.H = H;
    Parms.S = S;
    Parms.V = V;
    Parms.A = A;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.ResetRandomStream
void KismetMathLibrary::ResetRandomStream(uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ResetRandomStream_Params Parms{};
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.REase
uint8_t KismetMathLibrary::REase(uint8_t A, uint8_t B, float Alpha, bool bShortestPath, uint8_t EasingFunc, float BlendExp, int32_t Steps) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_REase_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    Parms.bShortestPath = bShortestPath;
    Parms.EasingFunc = EasingFunc;
    Parms.BlendExp = BlendExp;
    Parms.Steps = Steps;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomUnitVectorInConeWithYawAndPitch
uint8_t KismetMathLibrary::RandomUnitVectorInConeWithYawAndPitch(uint8_t ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomUnitVectorInConeWithYawAndPitch_Params Parms{};
    Parms.ConeDir = ConeDir;
    Parms.MaxYawInDegrees = MaxYawInDegrees;
    Parms.MaxPitchInDegrees = MaxPitchInDegrees;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomUnitVectorInCone
uint8_t KismetMathLibrary::RandomUnitVectorInCone(uint8_t ConeDir, float ConeHalfAngle) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomUnitVectorInCone_Params Parms{};
    Parms.ConeDir = ConeDir;
    Parms.ConeHalfAngle = ConeHalfAngle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomUnitVectorFromStream
uint8_t KismetMathLibrary::RandomUnitVectorFromStream(uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomUnitVectorFromStream_Params Parms{};
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomUnitVector
uint8_t KismetMathLibrary::RandomUnitVector() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomUnitVector_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomRotatorFromStream
uint8_t KismetMathLibrary::RandomRotatorFromStream(bool bRoll, uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomRotatorFromStream_Params Parms{};
    Parms.bRoll = bRoll;
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomRotator
uint8_t KismetMathLibrary::RandomRotator(bool bRoll) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomRotator_Params Parms{};
    Parms.bRoll = bRoll;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomPointInBoundingBox
uint8_t KismetMathLibrary::RandomPointInBoundingBox(uint8_t Origin, uint8_t BoxExtent) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomPointInBoundingBox_Params Parms{};
    Parms.Origin = Origin;
    Parms.BoxExtent = BoxExtent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomIntegerInRangeFromStream
int32_t KismetMathLibrary::RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomIntegerInRangeFromStream_Params Parms{};
    Parms.Min = Min;
    Parms.Max = Max;
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomIntegerInRange
int32_t KismetMathLibrary::RandomIntegerInRange(int32_t Min, int32_t Max) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomIntegerInRange_Params Parms{};
    Parms.Min = Min;
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomIntegerFromStream
int32_t KismetMathLibrary::RandomIntegerFromStream(int32_t Max, uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomIntegerFromStream_Params Parms{};
    Parms.Max = Max;
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomInteger
int32_t KismetMathLibrary::RandomInteger(int32_t Max) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomInteger_Params Parms{};
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomFloatInRangeFromStream
float KismetMathLibrary::RandomFloatInRangeFromStream(float Min, float Max, uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomFloatInRangeFromStream_Params Parms{};
    Parms.Min = Min;
    Parms.Max = Max;
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomFloatInRange
float KismetMathLibrary::RandomFloatInRange(float Min, float Max) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomFloatInRange_Params Parms{};
    Parms.Min = Min;
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomFloatFromStream
float KismetMathLibrary::RandomFloatFromStream(uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomFloatFromStream_Params Parms{};
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomFloat
float KismetMathLibrary::RandomFloat() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomFloat_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomBoolFromStream
bool KismetMathLibrary::RandomBoolFromStream(uint8_t Stream) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomBoolFromStream_Params Parms{};
    Parms.Stream = Stream;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RandomBool
bool KismetMathLibrary::RandomBool() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RandomBool_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.RadiansToDegrees
float KismetMathLibrary::RadiansToDegrees(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_RadiansToDegrees_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ProjectVectorOnToVector
uint8_t KismetMathLibrary::ProjectVectorOnToVector(uint8_t V, uint8_t Target) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ProjectVectorOnToVector_Params Parms{};
    Parms.V = V;
    Parms.Target = Target;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ProjectVectorOnToPlane
uint8_t KismetMathLibrary::ProjectVectorOnToPlane(uint8_t V, uint8_t PlaneNormal) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ProjectVectorOnToPlane_Params Parms{};
    Parms.V = V;
    Parms.PlaneNormal = PlaneNormal;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ProjectPointOnToPlane
uint8_t KismetMathLibrary::ProjectPointOnToPlane(uint8_t Point, uint8_t PlaneBase, uint8_t PlaneNormal) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ProjectPointOnToPlane_Params Parms{};
    Parms.Point = Point;
    Parms.PlaneBase = PlaneBase;
    Parms.PlaneNormal = PlaneNormal;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.PointsAreCoplanar
bool KismetMathLibrary::PointsAreCoplanar(struct TArray<uint8_t> Points, float Tolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_PointsAreCoplanar_Params Parms{};
    Parms.Points = Points;
    Parms.Tolerance = Tolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Percent_IntInt
int32_t KismetMathLibrary::Percent_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Percent_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Percent_FloatFloat
float KismetMathLibrary::Percent_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Percent_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Percent_ByteByte
uint8_t KismetMathLibrary::Percent_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Percent_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Or_IntInt
int32_t KismetMathLibrary::Or_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Or_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Now
uint8_t KismetMathLibrary::Now() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Now_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_VectorVector
bool KismetMathLibrary::NotEqual_VectorVector(uint8_t A, uint8_t B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_Vector2DVector2D
bool KismetMathLibrary::NotEqual_Vector2DVector2D(uint8_t A, uint8_t B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_Vector2DVector2D_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_TimespanTimespan
bool KismetMathLibrary::NotEqual_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_RotatorRotator
bool KismetMathLibrary::NotEqual_RotatorRotator(uint8_t A, uint8_t B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_RotatorRotator_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_ObjectObject
bool KismetMathLibrary::NotEqual_ObjectObject(class UObject* A, class UObject* B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_ObjectObject_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_NameName
bool KismetMathLibrary::NotEqual_NameName(struct FName A, struct FName B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_NameName_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_IntInt
bool KismetMathLibrary::NotEqual_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_FloatFloat
bool KismetMathLibrary::NotEqual_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_DateTimeDateTime
bool KismetMathLibrary::NotEqual_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_ClassClass
bool KismetMathLibrary::NotEqual_ClassClass(class UClass* A, class UClass* B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_ClassClass_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_ByteByte
bool KismetMathLibrary::NotEqual_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NotEqual_BoolBool
bool KismetMathLibrary::NotEqual_BoolBool(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NotEqual_BoolBool_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Not_PreBool
bool KismetMathLibrary::Not_PreBool(bool A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Not_PreBool_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NormalizeToRange
float KismetMathLibrary::NormalizeToRange(float Value, float RangeMin, float RangeMax) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NormalizeToRange_Params Parms{};
    Parms.Value = Value;
    Parms.RangeMin = RangeMin;
    Parms.RangeMax = RangeMax;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NormalizedDeltaRotator
uint8_t KismetMathLibrary::NormalizedDeltaRotator(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NormalizedDeltaRotator_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NormalizeAxis
float KismetMathLibrary::NormalizeAxis(float angle) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NormalizeAxis_Params Parms{};
    Parms.angle = angle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Normal2D
uint8_t KismetMathLibrary::Normal2D(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Normal2D_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Normal
uint8_t KismetMathLibrary::Normal(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Normal_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NegateVector
uint8_t KismetMathLibrary::NegateVector(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NegateVector_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NegateRotator
uint8_t KismetMathLibrary::NegateRotator(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NegateRotator_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NearlyEqual_TransformTransform
bool KismetMathLibrary::NearlyEqual_TransformTransform(uint8_t A, uint8_t B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NearlyEqual_TransformTransform_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.LocationTolerance = LocationTolerance;
    Parms.RotationTolerance = RotationTolerance;
    Parms.Scale3DTolerance = Scale3DTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.NearlyEqual_FloatFloat
bool KismetMathLibrary::NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_NearlyEqual_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat
float KismetMathLibrary::MultiplyMultiply_FloatFloat(float Base, float Exp) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MultiplyMultiply_FloatFloat_Params Parms{};
    Parms.Base = Base;
    Parms.Exp = Exp;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MultiplyByPi
float KismetMathLibrary::MultiplyByPi(float Value) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MultiplyByPi_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_VectorVector
uint8_t KismetMathLibrary::Multiply_VectorVector(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_VectorInt
uint8_t KismetMathLibrary::Multiply_VectorInt(uint8_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_VectorInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_VectorFloat
uint8_t KismetMathLibrary::Multiply_VectorFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_VectorFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_Vector2DFloat
uint8_t KismetMathLibrary::Multiply_Vector2DFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_Vector2DFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_TimespanFloat
uint8_t KismetMathLibrary::Multiply_TimespanFloat(uint8_t A, float Scalar) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_TimespanFloat_Params Parms{};
    Parms.A = A;
    Parms.Scalar = Scalar;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_RotatorInt
uint8_t KismetMathLibrary::Multiply_RotatorInt(uint8_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_RotatorInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_RotatorFloat
uint8_t KismetMathLibrary::Multiply_RotatorFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_RotatorFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_LinearColorLinearColor
uint8_t KismetMathLibrary::Multiply_LinearColorLinearColor(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_LinearColorLinearColor_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_LinearColorFloat
uint8_t KismetMathLibrary::Multiply_LinearColorFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_LinearColorFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_IntInt
int32_t KismetMathLibrary::Multiply_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_IntFloat
float KismetMathLibrary::Multiply_IntFloat(int32_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_IntFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_FloatFloat
float KismetMathLibrary::Multiply_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Multiply_ByteByte
uint8_t KismetMathLibrary::Multiply_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Multiply_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MirrorVectorByNormal
uint8_t KismetMathLibrary::MirrorVectorByNormal(uint8_t InVect, uint8_t InNormal) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MirrorVectorByNormal_Params Parms{};
    Parms.InVect = InVect;
    Parms.InNormal = InNormal;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MinOfIntArray
void KismetMathLibrary::MinOfIntArray(struct TArray<uint8_t> IntArray, int32_t IndexOfMinValue, int32_t MinValue) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MinOfIntArray_Params Parms{};
    Parms.IntArray = IntArray;
    Parms.IndexOfMinValue = IndexOfMinValue;
    Parms.MinValue = MinValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.MinOfFloatArray
void KismetMathLibrary::MinOfFloatArray(struct TArray<uint8_t> FloatArray, int32_t IndexOfMinValue, float MinValue) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MinOfFloatArray_Params Parms{};
    Parms.FloatArray = FloatArray;
    Parms.IndexOfMinValue = IndexOfMinValue;
    Parms.MinValue = MinValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.MinOfByteArray
void KismetMathLibrary::MinOfByteArray(struct TArray<uint8_t> ByteArray, int32_t IndexOfMinValue, uint8_t MinValue) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MinOfByteArray_Params Parms{};
    Parms.ByteArray = ByteArray;
    Parms.IndexOfMinValue = IndexOfMinValue;
    Parms.MinValue = MinValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.MinimumAreaRectangle
void KismetMathLibrary::MinimumAreaRectangle(class UObject* WorldContextObject, struct TArray<uint8_t> InVerts, uint8_t SampleSurfaceNormal, uint8_t OutRectCenter, uint8_t OutRectRotation, float OutSideLengthX, float OutSideLengthY, bool bDebugDraw) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MinimumAreaRectangle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InVerts = InVerts;
    Parms.SampleSurfaceNormal = SampleSurfaceNormal;
    Parms.OutRectCenter = OutRectCenter;
    Parms.OutRectRotation = OutRectRotation;
    Parms.OutSideLengthX = OutSideLengthX;
    Parms.OutSideLengthY = OutSideLengthY;
    Parms.bDebugDraw = bDebugDraw;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.Min
int32_t KismetMathLibrary::Min(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Min_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MaxOfIntArray
void KismetMathLibrary::MaxOfIntArray(struct TArray<uint8_t> IntArray, int32_t IndexOfMaxValue, int32_t MaxValue) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MaxOfIntArray_Params Parms{};
    Parms.IntArray = IntArray;
    Parms.IndexOfMaxValue = IndexOfMaxValue;
    Parms.MaxValue = MaxValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.MaxOfFloatArray
void KismetMathLibrary::MaxOfFloatArray(struct TArray<uint8_t> FloatArray, int32_t IndexOfMaxValue, float MaxValue) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MaxOfFloatArray_Params Parms{};
    Parms.FloatArray = FloatArray;
    Parms.IndexOfMaxValue = IndexOfMaxValue;
    Parms.MaxValue = MaxValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.MaxOfByteArray
void KismetMathLibrary::MaxOfByteArray(struct TArray<uint8_t> ByteArray, int32_t IndexOfMaxValue, uint8_t MaxValue) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MaxOfByteArray_Params Parms{};
    Parms.ByteArray = ByteArray;
    Parms.IndexOfMaxValue = IndexOfMaxValue;
    Parms.MaxValue = MaxValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.Max
int32_t KismetMathLibrary::Max(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Max_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MapRangeUnclamped
float KismetMathLibrary::MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MapRangeUnclamped_Params Parms{};
    Parms.Value = Value;
    Parms.InRangeA = InRangeA;
    Parms.InRangeB = InRangeB;
    Parms.OutRangeA = OutRangeA;
    Parms.OutRangeB = OutRangeB;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MapRangeClamped
float KismetMathLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MapRangeClamped_Params Parms{};
    Parms.Value = Value;
    Parms.InRangeA = InRangeA;
    Parms.InRangeB = InRangeB;
    Parms.OutRangeA = OutRangeA;
    Parms.OutRangeB = OutRangeB;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeVector2D
uint8_t KismetMathLibrary::MakeVector2D(float X, float Y) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeVector2D_Params Parms{};
    Parms.X = X;
    Parms.Y = Y;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeVector
uint8_t KismetMathLibrary::MakeVector(float X, float Y, float Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeVector_Params Parms{};
    Parms.X = X;
    Parms.Y = Y;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeTransform
uint8_t KismetMathLibrary::MakeTransform(uint8_t Location, uint8_t Rotation, uint8_t Scale) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeTransform_Params Parms{};
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeTimespan
uint8_t KismetMathLibrary::MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeTimespan_Params Parms{};
    Parms.Days = Days;
    Parms.Hours = Hours;
    Parms.Minutes = Minutes;
    Parms.Seconds = Seconds;
    Parms.Milliseconds = Milliseconds;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromZY
uint8_t KismetMathLibrary::MakeRotFromZY(uint8_t Z, uint8_t Y) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromZY_Params Parms{};
    Parms.Z = Z;
    Parms.Y = Y;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromZX
uint8_t KismetMathLibrary::MakeRotFromZX(uint8_t Z, uint8_t X) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromZX_Params Parms{};
    Parms.Z = Z;
    Parms.X = X;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromZ
uint8_t KismetMathLibrary::MakeRotFromZ(uint8_t Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromZ_Params Parms{};
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromYZ
uint8_t KismetMathLibrary::MakeRotFromYZ(uint8_t Y, uint8_t Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromYZ_Params Parms{};
    Parms.Y = Y;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromYX
uint8_t KismetMathLibrary::MakeRotFromYX(uint8_t Y, uint8_t X) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromYX_Params Parms{};
    Parms.Y = Y;
    Parms.X = X;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromY
uint8_t KismetMathLibrary::MakeRotFromY(uint8_t Y) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromY_Params Parms{};
    Parms.Y = Y;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromXZ
uint8_t KismetMathLibrary::MakeRotFromXZ(uint8_t X, uint8_t Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromXZ_Params Parms{};
    Parms.X = X;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromXY
uint8_t KismetMathLibrary::MakeRotFromXY(uint8_t X, uint8_t Y) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromXY_Params Parms{};
    Parms.X = X;
    Parms.Y = Y;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotFromX
uint8_t KismetMathLibrary::MakeRotFromX(uint8_t X) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotFromX_Params Parms{};
    Parms.X = X;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotator
uint8_t KismetMathLibrary::MakeRotator(float Roll, float Pitch, float Yaw) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotator_Params Parms{};
    Parms.Roll = Roll;
    Parms.Pitch = Pitch;
    Parms.Yaw = Yaw;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRotationFromAxes
uint8_t KismetMathLibrary::MakeRotationFromAxes(uint8_t Forward, uint8_t Right, uint8_t Up) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRotationFromAxes_Params Parms{};
    Parms.Forward = Forward;
    Parms.Right = Right;
    Parms.Up = Up;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeRandomStream
uint8_t KismetMathLibrary::MakeRandomStream(int32_t InitialSeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeRandomStream_Params Parms{};
    Parms.InitialSeed = InitialSeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakePulsatingValue
float KismetMathLibrary::MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakePulsatingValue_Params Parms{};
    Parms.InCurrentTime = InCurrentTime;
    Parms.InPulsesPerSecond = InPulsesPerSecond;
    Parms.InPhase = InPhase;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeDateTime
uint8_t KismetMathLibrary::MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t second, int32_t Millisecond) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeDateTime_Params Parms{};
    Parms.Year = Year;
    Parms.Month = Month;
    Parms.Day = Day;
    Parms.Hour = Hour;
    Parms.Minute = Minute;
    Parms.second = second;
    Parms.Millisecond = Millisecond;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.MakeColor
uint8_t KismetMathLibrary::MakeColor(float R, float G, float B, float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_MakeColor_Params Parms{};
    Parms.R = R;
    Parms.G = G;
    Parms.B = B;
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Loge
float KismetMathLibrary::Loge(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Loge_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal
bool KismetMathLibrary::LinePlaneIntersection_OriginNormal(uint8_t LineStart, uint8_t LineEnd, uint8_t PlaneOrigin, uint8_t PlaneNormal, float T, uint8_t Intersection) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LinePlaneIntersection_OriginNormal_Params Parms{};
    Parms.LineStart = LineStart;
    Parms.LineEnd = LineEnd;
    Parms.PlaneOrigin = PlaneOrigin;
    Parms.PlaneNormal = PlaneNormal;
    Parms.T = T;
    Parms.Intersection = Intersection;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LinePlaneIntersection
bool KismetMathLibrary::LinePlaneIntersection(uint8_t LineStart, uint8_t LineEnd, uint8_t APlane, float T, uint8_t Intersection) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LinePlaneIntersection_Params Parms{};
    Parms.LineStart = LineStart;
    Parms.LineEnd = LineEnd;
    Parms.APlane = APlane;
    Parms.T = T;
    Parms.Intersection = Intersection;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LinearColorLerpUsingHSV
uint8_t KismetMathLibrary::LinearColorLerpUsingHSV(uint8_t A, uint8_t B, float Alpha) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LinearColorLerpUsingHSV_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LinearColorLerp
uint8_t KismetMathLibrary::LinearColorLerp(uint8_t A, uint8_t B, float Alpha) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LinearColorLerp_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LessLess_VectorRotator
uint8_t KismetMathLibrary::LessLess_VectorRotator(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LessLess_VectorRotator_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LessEqual_TimespanTimespan
bool KismetMathLibrary::LessEqual_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LessEqual_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LessEqual_IntInt
bool KismetMathLibrary::LessEqual_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LessEqual_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LessEqual_FloatFloat
bool KismetMathLibrary::LessEqual_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LessEqual_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LessEqual_DateTimeDateTime
bool KismetMathLibrary::LessEqual_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LessEqual_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.LessEqual_ByteByte
bool KismetMathLibrary::LessEqual_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_LessEqual_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Less_TimespanTimespan
bool KismetMathLibrary::Less_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Less_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Less_IntInt
bool KismetMathLibrary::Less_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Less_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Less_FloatFloat
bool KismetMathLibrary::Less_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Less_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Less_DateTimeDateTime
bool KismetMathLibrary::Less_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Less_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Less_ByteByte
bool KismetMathLibrary::Less_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Less_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Lerp
float KismetMathLibrary::Lerp(float A, float B, float Alpha) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Lerp_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.IsMorning
bool KismetMathLibrary::IsMorning(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_IsMorning_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.IsLeapYear
bool KismetMathLibrary::IsLeapYear(int32_t Year) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_IsLeapYear_Params Parms{};
    Parms.Year = Year;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.IsAfternoon
bool KismetMathLibrary::IsAfternoon(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_IsAfternoon_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.InvertTransform
uint8_t KismetMathLibrary::InvertTransform(uint8_t T) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_InvertTransform_Params Parms{};
    Parms.T = T;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.InverseTransformLocation
uint8_t KismetMathLibrary::InverseTransformLocation(uint8_t T, uint8_t Location) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_InverseTransformLocation_Params Parms{};
    Parms.T = T;
    Parms.Location = Location;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.InverseTransformDirection
uint8_t KismetMathLibrary::InverseTransformDirection(uint8_t T, uint8_t Direction) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_InverseTransformDirection_Params Parms{};
    Parms.T = T;
    Parms.Direction = Direction;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.InverseLerp
float KismetMathLibrary::InverseLerp(float A, float B, float Value) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_InverseLerp_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.InRange_FloatFloat
bool KismetMathLibrary::InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_InRange_FloatFloat_Params Parms{};
    Parms.Value = Value;
    Parms.Min = Min;
    Parms.Max = Max;
    Parms.InclusiveMin = InclusiveMin;
    Parms.InclusiveMax = InclusiveMax;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Hypotenuse
float KismetMathLibrary::Hypotenuse(float Width, float Height) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Hypotenuse_Params Parms{};
    Parms.Width = Width;
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.HSVToRGB_Vector
void KismetMathLibrary::HSVToRGB_Vector(uint8_t HSV, uint8_t RGB) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_HSVToRGB_Vector_Params Parms{};
    Parms.HSV = HSV;
    Parms.RGB = RGB;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.HSVToRGB
uint8_t KismetMathLibrary::HSVToRGB(float H, float S, float V, float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_HSVToRGB_Params Parms{};
    Parms.H = H;
    Parms.S = S;
    Parms.V = V;
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GridSnap_Float
float KismetMathLibrary::GridSnap_Float(float Location, float GridSize) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GridSnap_Float_Params Parms{};
    Parms.Location = Location;
    Parms.GridSize = GridSize;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GreaterGreater_VectorRotator
uint8_t KismetMathLibrary::GreaterGreater_VectorRotator(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GreaterGreater_VectorRotator_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan
bool KismetMathLibrary::GreaterEqual_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GreaterEqual_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GreaterEqual_IntInt
bool KismetMathLibrary::GreaterEqual_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GreaterEqual_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GreaterEqual_FloatFloat
bool KismetMathLibrary::GreaterEqual_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GreaterEqual_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime
bool KismetMathLibrary::GreaterEqual_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GreaterEqual_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GreaterEqual_ByteByte
bool KismetMathLibrary::GreaterEqual_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GreaterEqual_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Greater_TimespanTimespan
bool KismetMathLibrary::Greater_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Greater_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Greater_IntInt
bool KismetMathLibrary::Greater_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Greater_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Greater_FloatFloat
bool KismetMathLibrary::Greater_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Greater_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Greater_DateTimeDateTime
bool KismetMathLibrary::Greater_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Greater_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Greater_ByteByte
bool KismetMathLibrary::Greater_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Greater_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetYear
int32_t KismetMathLibrary::GetYear(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetYear_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetYawPitchFromVector
void KismetMathLibrary::GetYawPitchFromVector(uint8_t InVec, float Yaw, float Pitch) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetYawPitchFromVector_Params Parms{};
    Parms.InVec = InVec;
    Parms.Yaw = Yaw;
    Parms.Pitch = Pitch;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.GetVectorArrayAverage
uint8_t KismetMathLibrary::GetVectorArrayAverage(struct TArray<uint8_t> Vectors) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetVectorArrayAverage_Params Parms{};
    Parms.Vectors = Vectors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetUpVector
uint8_t KismetMathLibrary::GetUpVector(uint8_t InRot) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetUpVector_Params Parms{};
    Parms.InRot = InRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetTotalSeconds
float KismetMathLibrary::GetTotalSeconds(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetTotalSeconds_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetTotalMinutes
float KismetMathLibrary::GetTotalMinutes(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetTotalMinutes_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetTotalMilliseconds
float KismetMathLibrary::GetTotalMilliseconds(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetTotalMilliseconds_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetTotalHours
float KismetMathLibrary::GetTotalHours(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetTotalHours_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetTotalDays
float KismetMathLibrary::GetTotalDays(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetTotalDays_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetTimeOfDay
uint8_t KismetMathLibrary::GetTimeOfDay(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetTimeOfDay_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetSeconds
int32_t KismetMathLibrary::GetSeconds(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetSeconds_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetSecond
int32_t KismetMathLibrary::GetSecond(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetSecond_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetRightVector
uint8_t KismetMathLibrary::GetRightVector(uint8_t InRot) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetRightVector_Params Parms{};
    Parms.InRot = InRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetPI
float KismetMathLibrary::GetPI() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetPI_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMonth
int32_t KismetMathLibrary::GetMonth(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMonth_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMinutes
int32_t KismetMathLibrary::GetMinutes(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMinutes_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMinute
int32_t KismetMathLibrary::GetMinute(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMinute_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMinElement
float KismetMathLibrary::GetMinElement(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMinElement_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMilliseconds
int32_t KismetMathLibrary::GetMilliseconds(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMilliseconds_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMillisecond
int32_t KismetMathLibrary::GetMillisecond(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMillisecond_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetMaxElement
float KismetMathLibrary::GetMaxElement(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetMaxElement_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetHours
int32_t KismetMathLibrary::GetHours(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetHours_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetHour12
int32_t KismetMathLibrary::GetHour12(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetHour12_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetHour
int32_t KismetMathLibrary::GetHour(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetHour_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetForwardVector
uint8_t KismetMathLibrary::GetForwardVector(uint8_t InRot) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetForwardVector_Params Parms{};
    Parms.InRot = InRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetDuration
uint8_t KismetMathLibrary::GetDuration(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetDuration_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetDirectionVector
uint8_t KismetMathLibrary::GetDirectionVector(uint8_t From, uint8_t To) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetDirectionVector_Params Parms{};
    Parms.From = From;
    Parms.To = To;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetDays
int32_t KismetMathLibrary::GetDays(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetDays_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetDayOfYear
int32_t KismetMathLibrary::GetDayOfYear(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetDayOfYear_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetDay
int32_t KismetMathLibrary::GetDay(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetDay_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetDate
uint8_t KismetMathLibrary::GetDate(uint8_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetDate_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.GetAxes
void KismetMathLibrary::GetAxes(uint8_t A, uint8_t X, uint8_t Y, uint8_t Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_GetAxes_Params Parms{};
    Parms.A = A;
    Parms.X = X;
    Parms.Y = Y;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.FTrunc
int32_t KismetMathLibrary::FTrunc(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FTrunc_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FromSeconds
uint8_t KismetMathLibrary::FromSeconds(float Seconds) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FromSeconds_Params Parms{};
    Parms.Seconds = Seconds;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FromMinutes
uint8_t KismetMathLibrary::FromMinutes(float Minutes) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FromMinutes_Params Parms{};
    Parms.Minutes = Minutes;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FromMilliseconds
uint8_t KismetMathLibrary::FromMilliseconds(float Milliseconds) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FromMilliseconds_Params Parms{};
    Parms.Milliseconds = Milliseconds;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FromHours
uint8_t KismetMathLibrary::FromHours(float Hours) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FromHours_Params Parms{};
    Parms.Hours = Hours;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FromDays
uint8_t KismetMathLibrary::FromDays(float Days) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FromDays_Params Parms{};
    Parms.Days = Days;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Fraction
float KismetMathLibrary::Fraction(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Fraction_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FMod
int32_t KismetMathLibrary::FMod(float Dividend, float Divisor, float Remainder) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FMod_Params Parms{};
    Parms.Dividend = Dividend;
    Parms.Divisor = Divisor;
    Parms.Remainder = Remainder;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FMin
float KismetMathLibrary::FMin(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FMin_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FMax
float KismetMathLibrary::FMax(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FMax_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FixedTurn
float KismetMathLibrary::FixedTurn(float InCurrent, float InDesired, float InDeltaRate) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FixedTurn_Params Parms{};
    Parms.InCurrent = InCurrent;
    Parms.InDesired = InDesired;
    Parms.InDeltaRate = InDeltaRate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FInterpTo_Constant
float KismetMathLibrary::FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FInterpTo_Constant_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FInterpTo
float KismetMathLibrary::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FInterpTo_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FInterpEaseInOut
float KismetMathLibrary::FInterpEaseInOut(float A, float B, float Alpha, float Exponent) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FInterpEaseInOut_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    Parms.Exponent = Exponent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FindLookAtRotation
uint8_t KismetMathLibrary::FindLookAtRotation(uint8_t Start, uint8_t Target) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FindLookAtRotation_Params Parms{};
    Parms.Start = Start;
    Parms.Target = Target;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FFloor
int32_t KismetMathLibrary::FFloor(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FFloor_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FClamp
float KismetMathLibrary::FClamp(float Value, float Min, float Max) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FClamp_Params Parms{};
    Parms.Value = Value;
    Parms.Min = Min;
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.FCeil
int32_t KismetMathLibrary::FCeil(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_FCeil_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Exp
float KismetMathLibrary::Exp(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Exp_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_VectorVector
bool KismetMathLibrary::EqualEqual_VectorVector(uint8_t A, uint8_t B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_Vector2DVector2D
bool KismetMathLibrary::EqualEqual_Vector2DVector2D(uint8_t A, uint8_t B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_Vector2DVector2D_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_TransformTransform
bool KismetMathLibrary::EqualEqual_TransformTransform(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_TransformTransform_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_TimespanTimespan
bool KismetMathLibrary::EqualEqual_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_RotatorRotator
bool KismetMathLibrary::EqualEqual_RotatorRotator(uint8_t A, uint8_t B, float ErrorTolerance) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_RotatorRotator_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.ErrorTolerance = ErrorTolerance;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_ObjectObject
bool KismetMathLibrary::EqualEqual_ObjectObject(class UObject* A, class UObject* B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_ObjectObject_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_NameName
bool KismetMathLibrary::EqualEqual_NameName(struct FName A, struct FName B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_NameName_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_IntInt
bool KismetMathLibrary::EqualEqual_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_FloatFloat
bool KismetMathLibrary::EqualEqual_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime
bool KismetMathLibrary::EqualEqual_DateTimeDateTime(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_DateTimeDateTime_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_ClassClass
bool KismetMathLibrary::EqualEqual_ClassClass(class UClass* A, class UClass* B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_ClassClass_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_ByteByte
bool KismetMathLibrary::EqualEqual_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.EqualEqual_BoolBool
bool KismetMathLibrary::EqualEqual_BoolBool(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_EqualEqual_BoolBool_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Ease
float KismetMathLibrary::Ease(float A, float B, float Alpha, uint8_t EasingFunc, float BlendExp, int32_t Steps) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Ease_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    Parms.Alpha = Alpha;
    Parms.EasingFunc = EasingFunc;
    Parms.BlendExp = BlendExp;
    Parms.Steps = Steps;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DotProduct2D
float KismetMathLibrary::DotProduct2D(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DotProduct2D_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Dot_VectorVector
float KismetMathLibrary::Dot_VectorVector(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Dot_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_VectorVector
uint8_t KismetMathLibrary::Divide_VectorVector(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_VectorInt
uint8_t KismetMathLibrary::Divide_VectorInt(uint8_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_VectorInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_VectorFloat
uint8_t KismetMathLibrary::Divide_VectorFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_VectorFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_Vector2DFloat
uint8_t KismetMathLibrary::Divide_Vector2DFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_Vector2DFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_IntInt
int32_t KismetMathLibrary::Divide_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_FloatFloat
float KismetMathLibrary::Divide_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Divide_ByteByte
uint8_t KismetMathLibrary::Divide_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Divide_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegTan
float KismetMathLibrary::DegTan(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegTan_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegSin
float KismetMathLibrary::DegSin(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegSin_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegreesToRadians
float KismetMathLibrary::DegreesToRadians(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegreesToRadians_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegCos
float KismetMathLibrary::DegCos(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegCos_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegAtan2
float KismetMathLibrary::DegAtan2(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegAtan2_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegAtan
float KismetMathLibrary::DegAtan(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegAtan_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegAsin
float KismetMathLibrary::DegAsin(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegAsin_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DegAcos
float KismetMathLibrary::DegAcos(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DegAcos_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DaysInYear
int32_t KismetMathLibrary::DaysInYear(int32_t Year) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DaysInYear_Params Parms{};
    Parms.Year = Year;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DaysInMonth
int32_t KismetMathLibrary::DaysInMonth(int32_t Year, int32_t Month) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DaysInMonth_Params Parms{};
    Parms.Year = Year;
    Parms.Month = Month;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DateTimeMinValue
uint8_t KismetMathLibrary::DateTimeMinValue() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DateTimeMinValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DateTimeMaxValue
uint8_t KismetMathLibrary::DateTimeMaxValue() {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DateTimeMaxValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DateTimeFromString
bool KismetMathLibrary::DateTimeFromString(struct FString DateTimeString, uint8_t Result) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DateTimeFromString_Params Parms{};
    Parms.DateTimeString = DateTimeString;
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.DateTimeFromIsoString
bool KismetMathLibrary::DateTimeFromIsoString(struct FString IsoString, uint8_t Result) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_DateTimeFromIsoString_Params Parms{};
    Parms.IsoString = IsoString;
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.CrossProduct2D
float KismetMathLibrary::CrossProduct2D(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_CrossProduct2D_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Cross_VectorVector
uint8_t KismetMathLibrary::Cross_VectorVector(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Cross_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.CreateVectorFromYawPitch
uint8_t KismetMathLibrary::CreateVectorFromYawPitch(float Yaw, float Pitch, float Length) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_CreateVectorFromYawPitch_Params Parms{};
    Parms.Yaw = Yaw;
    Parms.Pitch = Pitch;
    Parms.Length = Length;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Cos
float KismetMathLibrary::Cos(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Cos_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ConvertTransformToRelative
uint8_t KismetMathLibrary::ConvertTransformToRelative(uint8_t Transform, uint8_t ParentTransform) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ConvertTransformToRelative_Params Parms{};
    Parms.Transform = Transform;
    Parms.ParentTransform = ParentTransform;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_VectorToVector2D
uint8_t KismetMathLibrary::Conv_VectorToVector2D(uint8_t InVector) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_VectorToVector2D_Params Parms{};
    Parms.InVector = InVector;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_VectorToTransform
uint8_t KismetMathLibrary::Conv_VectorToTransform(uint8_t InLocation) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_VectorToTransform_Params Parms{};
    Parms.InLocation = InLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_VectorToRotator
uint8_t KismetMathLibrary::Conv_VectorToRotator(uint8_t InVec) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_VectorToRotator_Params Parms{};
    Parms.InVec = InVec;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_VectorToLinearColor
uint8_t KismetMathLibrary::Conv_VectorToLinearColor(uint8_t InVec) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_VectorToLinearColor_Params Parms{};
    Parms.InVec = InVec;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_Vector2DToVector
uint8_t KismetMathLibrary::Conv_Vector2DToVector(uint8_t InVector2D, float Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_Vector2DToVector_Params Parms{};
    Parms.InVector2D = InVector2D;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_RotatorToVector
uint8_t KismetMathLibrary::Conv_RotatorToVector(uint8_t InRot) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_RotatorToVector_Params Parms{};
    Parms.InRot = InRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_LinearColorToVector
uint8_t KismetMathLibrary::Conv_LinearColorToVector(uint8_t InLinearColor) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_LinearColorToVector_Params Parms{};
    Parms.InLinearColor = InLinearColor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_LinearColorToColor
uint8_t KismetMathLibrary::Conv_LinearColorToColor(uint8_t InLinearColor) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_LinearColorToColor_Params Parms{};
    Parms.InLinearColor = InLinearColor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_IntToFloat
float KismetMathLibrary::Conv_IntToFloat(int32_t InInt) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_IntToFloat_Params Parms{};
    Parms.InInt = InInt;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_IntToByte
uint8_t KismetMathLibrary::Conv_IntToByte(int32_t InInt) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_IntToByte_Params Parms{};
    Parms.InInt = InInt;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_IntToBool
bool KismetMathLibrary::Conv_IntToBool(int32_t InInt) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_IntToBool_Params Parms{};
    Parms.InInt = InInt;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_FloatToVector
uint8_t KismetMathLibrary::Conv_FloatToVector(float InFloat) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_FloatToVector_Params Parms{};
    Parms.InFloat = InFloat;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_FloatToLinearColor
uint8_t KismetMathLibrary::Conv_FloatToLinearColor(float InFloat) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_FloatToLinearColor_Params Parms{};
    Parms.InFloat = InFloat;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_ColorToLinearColor
uint8_t KismetMathLibrary::Conv_ColorToLinearColor(uint8_t InColor) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_ColorToLinearColor_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_ByteToInt
int32_t KismetMathLibrary::Conv_ByteToInt(uint8_t InByte) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_ByteToInt_Params Parms{};
    Parms.InByte = InByte;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_ByteToFloat
float KismetMathLibrary::Conv_ByteToFloat(uint8_t InByte) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_ByteToFloat_Params Parms{};
    Parms.InByte = InByte;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_BoolToInt
int32_t KismetMathLibrary::Conv_BoolToInt(bool InBool) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_BoolToInt_Params Parms{};
    Parms.InBool = InBool;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_BoolToFloat
float KismetMathLibrary::Conv_BoolToFloat(bool InBool) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_BoolToFloat_Params Parms{};
    Parms.InBool = InBool;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Conv_BoolToByte
uint8_t KismetMathLibrary::Conv_BoolToByte(bool InBool) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Conv_BoolToByte_Params Parms{};
    Parms.InBool = InBool;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ComposeTransforms
uint8_t KismetMathLibrary::ComposeTransforms(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ComposeTransforms_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ComposeRotators
uint8_t KismetMathLibrary::ComposeRotators(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ComposeRotators_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ClassIsChildOf
bool KismetMathLibrary::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ClassIsChildOf_Params Parms{};
    Parms.TestClass = TestClass;
    Parms.ParentClass = ParentClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ClampVectorSize
uint8_t KismetMathLibrary::ClampVectorSize(uint8_t A, float Min, float Max) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ClampVectorSize_Params Parms{};
    Parms.A = A;
    Parms.Min = Min;
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ClampAxis
float KismetMathLibrary::ClampAxis(float angle) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ClampAxis_Params Parms{};
    Parms.angle = angle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.ClampAngle
float KismetMathLibrary::ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_ClampAngle_Params Parms{};
    Parms.AngleDegrees = AngleDegrees;
    Parms.MinAngleDegrees = MinAngleDegrees;
    Parms.MaxAngleDegrees = MaxAngleDegrees;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Clamp
int32_t KismetMathLibrary::Clamp(int32_t Value, int32_t Min, int32_t Max) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Clamp_Params Parms{};
    Parms.Value = Value;
    Parms.Min = Min;
    Parms.Max = Max;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.CInterpTo
uint8_t KismetMathLibrary::CInterpTo(uint8_t Current, uint8_t Target, float DeltaTime, float InterpSpeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_CInterpTo_Params Parms{};
    Parms.Current = Current;
    Parms.Target = Target;
    Parms.DeltaTime = DeltaTime;
    Parms.InterpSpeed = InterpSpeed;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BreakVector2D
void KismetMathLibrary::BreakVector2D(uint8_t InVec, float X, float Y) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakVector2D_Params Parms{};
    Parms.InVec = InVec;
    Parms.X = X;
    Parms.Y = Y;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakVector
void KismetMathLibrary::BreakVector(uint8_t InVec, float X, float Y, float Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakVector_Params Parms{};
    Parms.InVec = InVec;
    Parms.X = X;
    Parms.Y = Y;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakTransform
void KismetMathLibrary::BreakTransform(uint8_t InTransform, uint8_t Location, uint8_t Rotation, uint8_t Scale) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakTransform_Params Parms{};
    Parms.InTransform = InTransform;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakTimespan
void KismetMathLibrary::BreakTimespan(uint8_t InTimespan, int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakTimespan_Params Parms{};
    Parms.InTimespan = InTimespan;
    Parms.Days = Days;
    Parms.Hours = Hours;
    Parms.Minutes = Minutes;
    Parms.Seconds = Seconds;
    Parms.Milliseconds = Milliseconds;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakRotIntoAxes
void KismetMathLibrary::BreakRotIntoAxes(uint8_t InRot, uint8_t X, uint8_t Y, uint8_t Z) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakRotIntoAxes_Params Parms{};
    Parms.InRot = InRot;
    Parms.X = X;
    Parms.Y = Y;
    Parms.Z = Z;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakRotator
void KismetMathLibrary::BreakRotator(uint8_t InRot, float Roll, float Pitch, float Yaw) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakRotator_Params Parms{};
    Parms.InRot = InRot;
    Parms.Roll = Roll;
    Parms.Pitch = Pitch;
    Parms.Yaw = Yaw;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakRandomStream
void KismetMathLibrary::BreakRandomStream(uint8_t InRandomStream, int32_t InitialSeed) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakRandomStream_Params Parms{};
    Parms.InRandomStream = InRandomStream;
    Parms.InitialSeed = InitialSeed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakDateTime
void KismetMathLibrary::BreakDateTime(uint8_t InDateTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t second, int32_t Millisecond) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakDateTime_Params Parms{};
    Parms.InDateTime = InDateTime;
    Parms.Year = Year;
    Parms.Month = Month;
    Parms.Day = Day;
    Parms.Hour = Hour;
    Parms.Minute = Minute;
    Parms.second = second;
    Parms.Millisecond = Millisecond;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BreakColor
void KismetMathLibrary::BreakColor(uint8_t InColor, float R, float G, float B, float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BreakColor_Params Parms{};
    Parms.InColor = InColor;
    Parms.R = R;
    Parms.G = G;
    Parms.B = B;
    Parms.A = A;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMathLibrary.BooleanXOR
bool KismetMathLibrary::BooleanXOR(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BooleanXOR_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BooleanOR
bool KismetMathLibrary::BooleanOR(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BooleanOR_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BooleanNOR
bool KismetMathLibrary::BooleanNOR(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BooleanNOR_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BooleanNAND
bool KismetMathLibrary::BooleanNAND(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BooleanNAND_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BooleanAND
bool KismetMathLibrary::BooleanAND(bool A, bool B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BooleanAND_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BMin
uint8_t KismetMathLibrary::BMin(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BMin_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.BMax
uint8_t KismetMathLibrary::BMax(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_BMax_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Atan2
float KismetMathLibrary::Atan2(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Atan2_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Atan
float KismetMathLibrary::Atan(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Atan_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Asin
float KismetMathLibrary::Asin(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Asin_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.And_IntInt
int32_t KismetMathLibrary::And_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_And_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_VectorVector
uint8_t KismetMathLibrary::Add_VectorVector(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_VectorVector_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_VectorInt
uint8_t KismetMathLibrary::Add_VectorInt(uint8_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_VectorInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_VectorFloat
uint8_t KismetMathLibrary::Add_VectorFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_VectorFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_Vector2DVector2D
uint8_t KismetMathLibrary::Add_Vector2DVector2D(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_Vector2DVector2D_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_Vector2DFloat
uint8_t KismetMathLibrary::Add_Vector2DFloat(uint8_t A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_Vector2DFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_TimespanTimespan
uint8_t KismetMathLibrary::Add_TimespanTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_TimespanTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_IntInt
int32_t KismetMathLibrary::Add_IntInt(int32_t A, int32_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_IntInt_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_FloatFloat
float KismetMathLibrary::Add_FloatFloat(float A, float B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_FloatFloat_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_DateTimeTimespan
uint8_t KismetMathLibrary::Add_DateTimeTimespan(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_DateTimeTimespan_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Add_ByteByte
uint8_t KismetMathLibrary::Add_ByteByte(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Add_ByteByte_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Acos
float KismetMathLibrary::Acos(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Acos_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Abs_Int
int32_t KismetMathLibrary::Abs_Int(int32_t A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Abs_Int_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMathLibrary.Abs
float KismetMathLibrary::Abs(float A) {
    static class UFunction* Func = nullptr;
    KismetMathLibrary_Abs_Params Parms{};
    Parms.A = A;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.DataTableFunctionLibrary.GetDataTableRowNames
void DataTableFunctionLibrary::GetDataTableRowNames(class UObject* Table, struct TArray<uint8_t> OutRowNames) {
    static class UFunction* Func = nullptr;
    DataTableFunctionLibrary_GetDataTableRowNames_Params Parms{};
    Parms.Table = Table;
    Parms.OutRowNames = OutRowNames;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.DataTableFunctionLibrary.GetDataTableRowFromName
bool DataTableFunctionLibrary::GetDataTableRowFromName(class UObject* Table, struct FName RowName, uint8_t OutRow) {
    static class UFunction* Func = nullptr;
    DataTableFunctionLibrary_GetDataTableRowFromName_Params Parms{};
    Parms.Table = Table;
    Parms.RowName = RowName;
    Parms.OutRow = OutRow;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.DataTableFunctionLibrary.EvaluateCurveTableRow
void DataTableFunctionLibrary::EvaluateCurveTableRow(class UObject* CurveTable, struct FName RowName, float InXY, uint8_t outResult, float OutXY) {
    static class UFunction* Func = nullptr;
    DataTableFunctionLibrary_EvaluateCurveTableRow_Params Parms{};
    Parms.CurveTable = CurveTable;
    Parms.RowName = RowName;
    Parms.InXY = InXY;
    Parms.outResult = outResult;
    Parms.OutXY = OutXY;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.UnloadStreamLevelArray
void GameplayStatics::UnloadStreamLevelArray(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    GameplayStatics_UnloadStreamLevelArray_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelNames = LevelNames;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.UnloadStreamLevel
void GameplayStatics::UnloadStreamLevel(class UObject* WorldContextObject, struct FName levelName, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    GameplayStatics_UnloadStreamLevel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.levelName = levelName;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.TransitionRegion
void GameplayStatics::TransitionRegion(struct FName levelName, struct FName DependentUnloadLevelName) {
    static class UFunction* Func = nullptr;
    GameplayStatics_TransitionRegion_Params Parms{};
    Parms.levelName = levelName;
    Parms.DependentUnloadLevelName = DependentUnloadLevelName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ToggleStreamingLog
void GameplayStatics::ToggleStreamingLog(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ToggleStreamingLog_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.SpawnSoundAttached
class UObject* GameplayStatics::SpawnSoundAttached(class UObject* Sound, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings, class UObject* ConcurrencySettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnSoundAttached_Params Parms{};
    Parms.Sound = Sound;
    Parms.AttachToComponent = AttachToComponent;
    Parms.AttachPointName = AttachPointName;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.LocationType = LocationType;
    Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.AttenuationSettings = AttenuationSettings;
    Parms.ConcurrencySettings = ConcurrencySettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnSoundAtLocation
class UObject* GameplayStatics::SpawnSoundAtLocation(class UObject* WorldContextObject, class UObject* Sound, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings, class UObject* ConcurrencySettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnSoundAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Sound = Sound;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.AttenuationSettings = AttenuationSettings;
    Parms.ConcurrencySettings = ConcurrencySettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnSound2D
class UObject* GameplayStatics::SpawnSound2D(class UObject* WorldContextObject, class UObject* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* ConcurrencySettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnSound2D_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Sound = Sound;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.ConcurrencySettings = ConcurrencySettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnObject
class UObject* GameplayStatics::SpawnObject(class UClass* ObjectClass, class UObject* Outer) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnObject_Params Parms{};
    Parms.ObjectClass = ObjectClass;
    Parms.Outer = Outer;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnEmitterAttached
class UObject* GameplayStatics::SpawnEmitterAttached(class UObject* EmitterTemplate, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bAutoDestroy) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnEmitterAttached_Params Parms{};
    Parms.EmitterTemplate = EmitterTemplate;
    Parms.AttachToComponent = AttachToComponent;
    Parms.AttachPointName = AttachPointName;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.LocationType = LocationType;
    Parms.bAutoDestroy = bAutoDestroy;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnEmitterAtLocation
class UObject* GameplayStatics::SpawnEmitterAtLocation(class UObject* WorldContextObject, class UObject* EmitterTemplate, uint8_t Location, uint8_t Rotation, bool bAutoDestroy) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnEmitterAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.EmitterTemplate = EmitterTemplate;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.bAutoDestroy = bAutoDestroy;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnDialogueAttached
class UObject* GameplayStatics::SpawnDialogueAttached(class UObject* Dialogue, uint8_t Context, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnDialogueAttached_Params Parms{};
    Parms.Dialogue = Dialogue;
    Parms.Context = Context;
    Parms.AttachToComponent = AttachToComponent;
    Parms.AttachPointName = AttachPointName;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.LocationType = LocationType;
    Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.AttenuationSettings = AttenuationSettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnDialogueAtLocation
class UObject* GameplayStatics::SpawnDialogueAtLocation(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnDialogueAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Dialogue = Dialogue;
    Parms.Context = Context;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.AttenuationSettings = AttenuationSettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnDialogue2D
class UObject* GameplayStatics::SpawnDialogue2D(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnDialogue2D_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Dialogue = Dialogue;
    Parms.Context = Context;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnDecalAttached
class UObject* GameplayStatics::SpawnDecalAttached(class UObject* DecalMaterial, uint8_t DecalSize, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, float LifeSpan) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnDecalAttached_Params Parms{};
    Parms.DecalMaterial = DecalMaterial;
    Parms.DecalSize = DecalSize;
    Parms.AttachToComponent = AttachToComponent;
    Parms.AttachPointName = AttachPointName;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.LocationType = LocationType;
    Parms.LifeSpan = LifeSpan;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SpawnDecalAtLocation
class UObject* GameplayStatics::SpawnDecalAtLocation(class UObject* WorldContextObject, class UObject* DecalMaterial, uint8_t DecalSize, uint8_t Location, uint8_t Rotation, float LifeSpan) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SpawnDecalAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.DecalMaterial = DecalMaterial;
    Parms.DecalSize = DecalSize;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.LifeSpan = LifeSpan;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SetWorldOriginLocation
void GameplayStatics::SetWorldOriginLocation(class UObject* WorldContextObject, uint8_t NewLocation) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetWorldOriginLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.NewLocation = NewLocation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.SetWorldCurrentLevel
bool GameplayStatics::SetWorldCurrentLevel(class UObject* NewCurrentLevel) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetWorldCurrentLevel_Params Parms{};
    Parms.NewCurrentLevel = NewCurrentLevel;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SetIgnoreStreamingDistance
void GameplayStatics::SetIgnoreStreamingDistance(class UObject* WorldContextObject, bool bIgnoreStreamingDistance, struct TArray<uint8_t> PreserveLevels) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetIgnoreStreamingDistance_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.bIgnoreStreamingDistance = bIgnoreStreamingDistance;
    Parms.PreserveLevels = PreserveLevels;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.SetGlobalTimeDilation
void GameplayStatics::SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetGlobalTimeDilation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TimeDilation = TimeDilation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.SetGlobalPitchModulation
void GameplayStatics::SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetGlobalPitchModulation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PitchModulation = PitchModulation;
    Parms.TimeSec = TimeSec;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.SetGamePaused
bool GameplayStatics::SetGamePaused(class UObject* WorldContextObject, bool bPaused) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetGamePaused_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.bPaused = bPaused;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.SetBaseSoundMix
void GameplayStatics::SetBaseSoundMix(class UObject* WorldContextObject, class UObject* InSoundMix) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SetBaseSoundMix_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InSoundMix = InSoundMix;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.SaveGameToSlot
bool GameplayStatics::SaveGameToSlot(class UObject* SaveGameObject, struct FString SlotName, int32_t UserIndex, bool isSynchronous) {
    static class UFunction* Func = nullptr;
    GameplayStatics_SaveGameToSlot_Params Parms{};
    Parms.SaveGameObject = SaveGameObject;
    Parms.SlotName = SlotName;
    Parms.UserIndex = UserIndex;
    Parms.isSynchronous = isSynchronous;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ResetWeeklyChallengeTag
void GameplayStatics::ResetWeeklyChallengeTag() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameplayStatics.RemovePlayer
void GameplayStatics::RemovePlayer(class UObject* Player, bool bDestroyPawn) {
    static class UFunction* Func = nullptr;
    GameplayStatics_RemovePlayer_Params Parms{};
    Parms.Player = Player;
    Parms.bDestroyPawn = bDestroyPawn;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PushSoundMixModifier
void GameplayStatics::PushSoundMixModifier(class UObject* WorldContextObject, class UObject* InSoundMixModifier) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PushSoundMixModifier_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InSoundMixModifier = InSoundMixModifier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ProjectWorldToScreenWithDistance
bool GameplayStatics::ProjectWorldToScreenWithDistance(class UObject* Player, uint8_t WorldPosition, uint8_t ScreenPosition) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ProjectWorldToScreenWithDistance_Params Parms{};
    Parms.Player = Player;
    Parms.WorldPosition = WorldPosition;
    Parms.ScreenPosition = ScreenPosition;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ProjectWorldToScreen
bool GameplayStatics::ProjectWorldToScreen(class UObject* Player, uint8_t WorldPosition, uint8_t ScreenPosition) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ProjectWorldToScreen_Params Parms{};
    Parms.Player = Player;
    Parms.WorldPosition = WorldPosition;
    Parms.ScreenPosition = ScreenPosition;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.PrintMessage
void GameplayStatics::PrintMessage(struct FName aMessage) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PrintMessage_Params Parms{};
    Parms.aMessage = aMessage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PopSoundMixModifier
void GameplayStatics::PopSoundMixModifier(class UObject* WorldContextObject, class UObject* InSoundMixModifier) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PopSoundMixModifier_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InSoundMixModifier = InSoundMixModifier;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PlayWorldCameraShake
void GameplayStatics::PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, uint8_t Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PlayWorldCameraShake_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Shake = Shake;
    Parms.Epicenter = Epicenter;
    Parms.InnerRadius = InnerRadius;
    Parms.OuterRadius = OuterRadius;
    Parms.Falloff = Falloff;
    Parms.bOrientShakeTowardsEpicenter = bOrientShakeTowardsEpicenter;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PlaySoundAtLocation
void GameplayStatics::PlaySoundAtLocation(class UObject* WorldContextObject, class UObject* Sound, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings, class UObject* ConcurrencySettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PlaySoundAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Sound = Sound;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.AttenuationSettings = AttenuationSettings;
    Parms.ConcurrencySettings = ConcurrencySettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PlaySound2D
void GameplayStatics::PlaySound2D(class UObject* WorldContextObject, class UObject* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* ConcurrencySettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PlaySound2D_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Sound = Sound;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.ConcurrencySettings = ConcurrencySettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PlayDialogueAtLocation
void GameplayStatics::PlayDialogueAtLocation(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, uint8_t Location, uint8_t Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* AttenuationSettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PlayDialogueAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Dialogue = Dialogue;
    Parms.Context = Context;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.AttenuationSettings = AttenuationSettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PlayDialogue2D
void GameplayStatics::PlayDialogue2D(class UObject* WorldContextObject, class UObject* Dialogue, uint8_t Context, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PlayDialogue2D_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Dialogue = Dialogue;
    Parms.Context = Context;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PerformActionOnStreamingLevels
void GameplayStatics::PerformActionOnStreamingLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, bool bLoadAndSetInvisible, bool bBlockFromLoading) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PerformActionOnStreamingLevels_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelNames = LevelNames;
    Parms.bLoadAndSetInvisible = bLoadAndSetInvisible;
    Parms.bBlockFromLoading = bBlockFromLoading;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.PerformActionOnGlobalLevels
void GameplayStatics::PerformActionOnGlobalLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, bool bSetActorsInvisible) {
    static class UFunction* Func = nullptr;
    GameplayStatics_PerformActionOnGlobalLevels_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelNames = LevelNames;
    Parms.bSetActorsInvisible = bSetActorsInvisible;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ParseOption
struct FString GameplayStatics::ParseOption(struct FString Options, struct FString Key) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ParseOption_Params Parms{};
    Parms.Options = Options;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.OpenLevel
void GameplayStatics::OpenLevel(class UObject* WorldContextObject, struct FName levelName, bool bAbsolute, struct FString Options) {
    static class UFunction* Func = nullptr;
    GameplayStatics_OpenLevel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.levelName = levelName;
    Parms.bAbsolute = bAbsolute;
    Parms.Options = Options;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.LoadStreamLevelArray
void GameplayStatics::LoadStreamLevelArray(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool bWaitForAllBeforeMakingVisible, bool bNeverUnloadDuringCinematics, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    GameplayStatics_LoadStreamLevelArray_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelNames = LevelNames;
    Parms.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
    Parms.bShouldBlockOnLoad = bShouldBlockOnLoad;
    Parms.bWaitForAllBeforeMakingVisible = bWaitForAllBeforeMakingVisible;
    Parms.bNeverUnloadDuringCinematics = bNeverUnloadDuringCinematics;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.LoadStreamLevel
void GameplayStatics::LoadStreamLevel(class UObject* WorldContextObject, struct FName levelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    GameplayStatics_LoadStreamLevel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.levelName = levelName;
    Parms.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
    Parms.bShouldBlockOnLoad = bShouldBlockOnLoad;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.LoadGameFromSlot
class UObject* GameplayStatics::LoadGameFromSlot(struct FString SlotName, int32_t UserIndex, bool bUseUI) {
    static class UFunction* Func = nullptr;
    GameplayStatics_LoadGameFromSlot_Params Parms{};
    Parms.SlotName = SlotName;
    Parms.UserIndex = UserIndex;
    Parms.bUseUI = bUseUI;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.IsGamePaused
bool GameplayStatics::IsGamePaused(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_IsGamePaused_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.HasOption
bool GameplayStatics::HasOption(struct FString Options, struct FString InKey) {
    static class UFunction* Func = nullptr;
    GameplayStatics_HasOption_Params Parms{};
    Parms.Options = Options;
    Parms.InKey = InKey;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GrassOverlappingSphereCount
int32_t GameplayStatics::GrassOverlappingSphereCount(class UObject* WorldContextObject, class UObject* StaticMesh, uint8_t CenterPosition, float Radius) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GrassOverlappingSphereCount_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.StaticMesh = StaticMesh;
    Parms.CenterPosition = CenterPosition;
    Parms.Radius = Radius;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetWorldOriginLocation
uint8_t GameplayStatics::GetWorldOriginLocation(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetWorldOriginLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetWorldDeltaSeconds
float GameplayStatics::GetWorldDeltaSeconds(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetWorldDeltaSeconds_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetWorldCurrentLevel
class UObject* GameplayStatics::GetWorldCurrentLevel() {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetWorldCurrentLevel_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetWeeklyChallengeTag
struct FName GameplayStatics::GetWeeklyChallengeTag() {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetWeeklyChallengeTag_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetSurfaceType
uint8_t GameplayStatics::GetSurfaceType(uint8_t Hit) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetSurfaceType_Params Parms{};
    Parms.Hit = Hit;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetStreamingLevel
class UObject* GameplayStatics::GetStreamingLevel(class UObject* WorldContextObject, struct FName PackageName) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetStreamingLevel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PackageName = PackageName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetRealTimeSeconds
float GameplayStatics::GetRealTimeSeconds(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetRealTimeSeconds_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetPlayerPawn
class UObject* GameplayStatics::GetPlayerPawn(class UObject* WorldContextObject, int32_t PlayerIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetPlayerPawn_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerIndex = PlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetPlayerController
class UObject* GameplayStatics::GetPlayerController(class UObject* WorldContextObject, int32_t PlayerIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetPlayerController_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerIndex = PlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetPlayerCharacter
class UObject* GameplayStatics::GetPlayerCharacter(class UObject* WorldContextObject, int32_t PlayerIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetPlayerCharacter_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerIndex = PlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetPlayerCameraManager
class UObject* GameplayStatics::GetPlayerCameraManager(class UObject* WorldContextObject, int32_t PlayerIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetPlayerCameraManager_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerIndex = PlayerIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetPlatformName
struct FString GameplayStatics::GetPlatformName() {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetPlatformName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetObjectOutermost
class UObject* GameplayStatics::GetObjectOutermost(class UObject* InObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetObjectOutermost_Params Parms{};
    Parms.InObject = InObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetObjectOuter
class UObject* GameplayStatics::GetObjectOuter(class UObject* InObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetObjectOuter_Params Parms{};
    Parms.InObject = InObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetObjectClass
class UClass* GameplayStatics::GetObjectClass(class UObject* Object) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetObjectClass_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetKeyValue
void GameplayStatics::GetKeyValue(struct FString Pair, struct FString Key, struct FString Value) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetKeyValue_Params Parms{};
    Parms.Pair = Pair;
    Parms.Key = Key;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.GetIntOption
int32_t GameplayStatics::GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetIntOption_Params Parms{};
    Parms.Options = Options;
    Parms.Key = Key;
    Parms.DefaultValue = DefaultValue;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetGlobalTimeDilation
float GameplayStatics::GetGlobalTimeDilation(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetGlobalTimeDilation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetGameState
class UObject* GameplayStatics::GetGameState(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetGameState_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetGameMode
class UObject* GameplayStatics::GetGameMode(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetGameMode_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetGameInstance
class UObject* GameplayStatics::GetGameInstance(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetGameInstance_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetFileNameBySaveType
struct FString GameplayStatics::GetFileNameBySaveType(uint8_t SaveGameType) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetFileNameBySaveType_Params Parms{};
    Parms.SaveGameType = SaveGameType;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetCurrentLevelName
struct FString GameplayStatics::GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetCurrentLevelName_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.bRemovePrefixString = bRemovePrefixString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetBPStreamingLevel
class UObject* GameplayStatics::GetBPStreamingLevel(class UObject* WorldContextObject, struct FName PackageName) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetBPStreamingLevel_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PackageName = PackageName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetAudioTimeSeconds
float GameplayStatics::GetAudioTimeSeconds(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetAudioTimeSeconds_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetAllActorsWithInterface
void GameplayStatics::GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetAllActorsWithInterface_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Interface = Interface;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.GetAllActorsOfClass
void GameplayStatics::GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetAllActorsOfClass_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.ActorClass = ActorClass;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.GetActorArrayBounds
void GameplayStatics::GetActorArrayBounds(struct TArray<uint8_t> Actors, bool bOnlyCollidingComponents, uint8_t Center, uint8_t BoxExtent) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetActorArrayBounds_Params Parms{};
    Parms.Actors = Actors;
    Parms.bOnlyCollidingComponents = bOnlyCollidingComponents;
    Parms.Center = Center;
    Parms.BoxExtent = BoxExtent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.GetActorArrayAverageLocation
uint8_t GameplayStatics::GetActorArrayAverageLocation(struct TArray<uint8_t> Actors) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetActorArrayAverageLocation_Params Parms{};
    Parms.Actors = Actors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.GetAccurateRealTime
void GameplayStatics::GetAccurateRealTime(class UObject* WorldContextObject, int32_t Seconds, float PartialSeconds) {
    static class UFunction* Func = nullptr;
    GameplayStatics_GetAccurateRealTime_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Seconds = Seconds;
    Parms.PartialSeconds = PartialSeconds;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.FlushLevelStreaming
void GameplayStatics::FlushLevelStreaming(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_FlushLevelStreaming_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.FinishSpawningActor
class UObject* GameplayStatics::FinishSpawningActor(class UObject* Actor, uint8_t SpawnTransform) {
    static class UFunction* Func = nullptr;
    GameplayStatics_FinishSpawningActor_Params Parms{};
    Parms.Actor = Actor;
    Parms.SpawnTransform = SpawnTransform;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.EnableLiveStreaming
void GameplayStatics::EnableLiveStreaming(bool enable) {
    static class UFunction* Func = nullptr;
    GameplayStatics_EnableLiveStreaming_Params Parms{};
    Parms.enable = enable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.DeprojectScreenToWorld
bool GameplayStatics::DeprojectScreenToWorld(class UObject* Player, uint8_t ScreenPosition, uint8_t WorldPosition, uint8_t WorldDirection) {
    static class UFunction* Func = nullptr;
    GameplayStatics_DeprojectScreenToWorld_Params Parms{};
    Parms.Player = Player;
    Parms.ScreenPosition = ScreenPosition;
    Parms.WorldPosition = WorldPosition;
    Parms.WorldDirection = WorldDirection;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.DeleteGameInSlot
bool GameplayStatics::DeleteGameInSlot(struct FString SlotName, int32_t UserIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_DeleteGameInSlot_Params Parms{};
    Parms.SlotName = SlotName;
    Parms.UserIndex = UserIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.DeactivateReverbEffect
void GameplayStatics::DeactivateReverbEffect(class UObject* WorldContextObject, struct FName TagName) {
    static class UFunction* Func = nullptr;
    GameplayStatics_DeactivateReverbEffect_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TagName = TagName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.CreateSound2D
class UObject* GameplayStatics::CreateSound2D(class UObject* WorldContextObject, class UObject* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* ConcurrencySettings) {
    static class UFunction* Func = nullptr;
    GameplayStatics_CreateSound2D_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Sound = Sound;
    Parms.VolumeMultiplier = VolumeMultiplier;
    Parms.PitchMultiplier = PitchMultiplier;
    Parms.StartTime = StartTime;
    Parms.ConcurrencySettings = ConcurrencySettings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint
class UObject* GameplayStatics::CreateSaveGameObjectFromBlueprint(class UObject* SaveGameBlueprint) {
    static class UFunction* Func = nullptr;
    GameplayStatics_CreateSaveGameObjectFromBlueprint_Params Parms{};
    Parms.SaveGameBlueprint = SaveGameBlueprint;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.CreateSaveGameObject
class UObject* GameplayStatics::CreateSaveGameObject(class UClass* SaveGameClass) {
    static class UFunction* Func = nullptr;
    GameplayStatics_CreateSaveGameObject_Params Parms{};
    Parms.SaveGameClass = SaveGameClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.CreatePlayer
class UObject* GameplayStatics::CreatePlayer(class UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPawn) {
    static class UFunction* Func = nullptr;
    GameplayStatics_CreatePlayer_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.ControllerId = ControllerId;
    Parms.bSpawnPawn = bSpawnPawn;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ClearSoundMixModifiers
void GameplayStatics::ClearSoundMixModifiers(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ClearSoundMixModifiers_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ClearActionOnStreamingLevels
void GameplayStatics::ClearActionOnStreamingLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ClearActionOnStreamingLevels_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelNames = LevelNames;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ClearActionOnGlobalLevels
void GameplayStatics::ClearActionOnGlobalLevels(class UObject* WorldContextObject, struct TArray<uint8_t> LevelNames) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ClearActionOnGlobalLevels_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelNames = LevelNames;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ClearActionOnAllStreamingLevels
void GameplayStatics::ClearActionOnAllStreamingLevels(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ClearActionOnAllStreamingLevels_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.CancelAsyncLoading
void GameplayStatics::CancelAsyncLoading() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameplayStatics.BreakHitResult
void GameplayStatics::BreakHitResult(uint8_t Hit, bool bBlockingHit, bool bInitialOverlap, float Time, uint8_t Location, uint8_t ImpactPoint, uint8_t Normal, uint8_t ImpactNormal, class UObject* PhysMat, class UObject* HitActor, class UObject* HitComponent, struct FName HitBoneName, int32_t HitItem, uint8_t TraceStart, uint8_t TraceEnd) {
    static class UFunction* Func = nullptr;
    GameplayStatics_BreakHitResult_Params Parms{};
    Parms.Hit = Hit;
    Parms.bBlockingHit = bBlockingHit;
    Parms.bInitialOverlap = bInitialOverlap;
    Parms.Time = Time;
    Parms.Location = Location;
    Parms.ImpactPoint = ImpactPoint;
    Parms.Normal = Normal;
    Parms.ImpactNormal = ImpactNormal;
    Parms.PhysMat = PhysMat;
    Parms.HitActor = HitActor;
    Parms.HitComponent = HitComponent;
    Parms.HitBoneName = HitBoneName;
    Parms.HitItem = HitItem;
    Parms.TraceStart = TraceStart;
    Parms.TraceEnd = TraceEnd;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.BLUTILITY_SelectNone
void GameplayStatics::BLUTILITY_SelectNone() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameplayStatics.BlueprintSuggestProjectileVelocity
bool GameplayStatics::BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, uint8_t TossVelocity, uint8_t StartLocation, uint8_t EndLocation, float LaunchSpeed, float OverrideGravityZ, uint8_t TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug) {
    static class UFunction* Func = nullptr;
    GameplayStatics_BlueprintSuggestProjectileVelocity_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TossVelocity = TossVelocity;
    Parms.StartLocation = StartLocation;
    Parms.EndLocation = EndLocation;
    Parms.LaunchSpeed = LaunchSpeed;
    Parms.OverrideGravityZ = OverrideGravityZ;
    Parms.TraceOption = TraceOption;
    Parms.CollisionRadius = CollisionRadius;
    Parms.bFavorHighArc = bFavorHighArc;
    Parms.bDrawDebug = bDrawDebug;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.BeginSpawningActorFromClass
class UObject* GameplayStatics::BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, uint8_t SpawnTransform, bool bNoCollisionFail, class UObject* Owner) {
    static class UFunction* Func = nullptr;
    GameplayStatics_BeginSpawningActorFromClass_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.ActorClass = ActorClass;
    Parms.SpawnTransform = SpawnTransform;
    Parms.bNoCollisionFail = bNoCollisionFail;
    Parms.Owner = Owner;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.BeginSpawningActorFromBlueprint
class UObject* GameplayStatics::BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UObject* Blueprint, uint8_t SpawnTransform, bool bNoCollisionFail) {
    static class UFunction* Func = nullptr;
    GameplayStatics_BeginSpawningActorFromBlueprint_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Blueprint = Blueprint;
    Parms.SpawnTransform = SpawnTransform;
    Parms.bNoCollisionFail = bNoCollisionFail;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.BeginDeferredActorSpawnFromClass
class UObject* GameplayStatics::BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, uint8_t SpawnTransform, uint8_t CollisionHandlingOverride, class UObject* Owner) {
    static class UFunction* Func = nullptr;
    GameplayStatics_BeginDeferredActorSpawnFromClass_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.ActorClass = ActorClass;
    Parms.SpawnTransform = SpawnTransform;
    Parms.CollisionHandlingOverride = CollisionHandlingOverride;
    Parms.Owner = Owner;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.AreAnyListenersWithinRange
bool GameplayStatics::AreAnyListenersWithinRange(class UObject* WorldContextObject, uint8_t Location, float MaximumRange) {
    static class UFunction* Func = nullptr;
    GameplayStatics_AreAnyListenersWithinRange_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Location = Location;
    Parms.MaximumRange = MaximumRange;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ApplyRadialDamageWithFalloff
bool GameplayStatics::ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, uint8_t Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, struct TArray<uint8_t> IgnoreActors, class UObject* DamageCauser, class UObject* InstigatedByController, uint8_t DamagePreventionChannel) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ApplyRadialDamageWithFalloff_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BaseDamage = BaseDamage;
    Parms.MinimumDamage = MinimumDamage;
    Parms.Origin = Origin;
    Parms.DamageInnerRadius = DamageInnerRadius;
    Parms.DamageOuterRadius = DamageOuterRadius;
    Parms.DamageFalloff = DamageFalloff;
    Parms.DamageTypeClass = DamageTypeClass;
    Parms.IgnoreActors = IgnoreActors;
    Parms.DamageCauser = DamageCauser;
    Parms.InstigatedByController = InstigatedByController;
    Parms.DamagePreventionChannel = DamagePreventionChannel;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ApplyRadialDamage
bool GameplayStatics::ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, uint8_t Origin, float DamageRadius, class UClass* DamageTypeClass, struct TArray<uint8_t> IgnoreActors, class UObject* DamageCauser, class UObject* InstigatedByController, bool bDoFullDamage, uint8_t DamagePreventionChannel) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ApplyRadialDamage_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BaseDamage = BaseDamage;
    Parms.Origin = Origin;
    Parms.DamageRadius = DamageRadius;
    Parms.DamageTypeClass = DamageTypeClass;
    Parms.IgnoreActors = IgnoreActors;
    Parms.DamageCauser = DamageCauser;
    Parms.InstigatedByController = InstigatedByController;
    Parms.bDoFullDamage = bDoFullDamage;
    Parms.DamagePreventionChannel = DamagePreventionChannel;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ApplyPointDamageWithFalloff
bool GameplayStatics::ApplyPointDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, uint8_t Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, struct TArray<uint8_t> IgnoreActors, struct TArray<uint8_t> AffectedActors, class UObject* DamageCauser, class UObject* InstigatedByController, uint8_t DamagePreventionChannel) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ApplyPointDamageWithFalloff_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BaseDamage = BaseDamage;
    Parms.MinimumDamage = MinimumDamage;
    Parms.Origin = Origin;
    Parms.DamageInnerRadius = DamageInnerRadius;
    Parms.DamageOuterRadius = DamageOuterRadius;
    Parms.DamageFalloff = DamageFalloff;
    Parms.DamageTypeClass = DamageTypeClass;
    Parms.IgnoreActors = IgnoreActors;
    Parms.AffectedActors = AffectedActors;
    Parms.DamageCauser = DamageCauser;
    Parms.InstigatedByController = InstigatedByController;
    Parms.DamagePreventionChannel = DamagePreventionChannel;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameplayStatics.ApplyPointDamage
void GameplayStatics::ApplyPointDamage(class UObject* DamagedActor, float BaseDamage, uint8_t HitFromDirection, uint8_t HitInfo, class UObject* EventInstigator, class UObject* DamageCauser, class UClass* DamageTypeClass, int32_t DamagedBodyIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ApplyPointDamage_Params Parms{};
    Parms.DamagedActor = DamagedActor;
    Parms.BaseDamage = BaseDamage;
    Parms.HitFromDirection = HitFromDirection;
    Parms.HitInfo = HitInfo;
    Parms.EventInstigator = EventInstigator;
    Parms.DamageCauser = DamageCauser;
    Parms.DamageTypeClass = DamageTypeClass;
    Parms.DamagedBodyIndex = DamagedBodyIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ApplyDamage
void GameplayStatics::ApplyDamage(class UObject* DamagedActor, float BaseDamage, class UObject* EventInstigator, class UObject* DamageCauser, class UClass* DamageTypeClass, int32_t DamagedBodyIndex) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ApplyDamage_Params Parms{};
    Parms.DamagedActor = DamagedActor;
    Parms.BaseDamage = BaseDamage;
    Parms.EventInstigator = EventInstigator;
    Parms.DamageCauser = DamageCauser;
    Parms.DamageTypeClass = DamageTypeClass;
    Parms.DamagedBodyIndex = DamagedBodyIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameplayStatics.ActivateReverbEffect
void GameplayStatics::ActivateReverbEffect(class UObject* WorldContextObject, class UObject* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime) {
    static class UFunction* Func = nullptr;
    GameplayStatics_ActivateReverbEffect_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.ReverbEffect = ReverbEffect;
    Parms.TagName = TagName;
    Parms.Priority = Priority;
    Parms.Volume = Volume;
    Parms.FadeTime = FadeTime;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
void HeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params Parms{};
    Parms.WorldContext = WorldContext;
    Parms.NewScale = NewScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
void HeadMountedDisplayFunctionLibrary::SetTrackingOrigin(uint8_t Origin) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params Parms{};
    Parms.Origin = Origin;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
void HeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params Parms{};
    Parms.Near = Near;
    Parms.Far = Far;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
void HeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, uint8_t Options) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params Parms{};
    Parms.Yaw = Yaw;
    Parms.Options = Options;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
bool HeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode() {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
bool HeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled() {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
bool HeadMountedDisplayFunctionLibrary::HasValidTrackingPosition() {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
float HeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params Parms{};
    Parms.WorldContext = WorldContext;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetVRFocusState
void HeadMountedDisplayFunctionLibrary::GetVRFocusState(bool bUseFocus, bool bHasFocus) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_GetVRFocusState_Params Parms{};
    Parms.bUseFocus = bUseFocus;
    Parms.bHasFocus = bHasFocus;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
uint8_t HeadMountedDisplayFunctionLibrary::GetTrackingOrigin() {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
float HeadMountedDisplayFunctionLibrary::GetScreenPercentage() {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
void HeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(uint8_t CameraOrigin, uint8_t CameraRotation, float HFOV, float VFOV, float CameraDistance, float NearPlane, float FarPlane) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params Parms{};
    Parms.CameraOrigin = CameraOrigin;
    Parms.CameraRotation = CameraRotation;
    Parms.HFOV = HFOV;
    Parms.VFOV = VFOV;
    Parms.CameraDistance = CameraDistance;
    Parms.NearPlane = NearPlane;
    Parms.FarPlane = FarPlane;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
void HeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(uint8_t DeviceRotation, uint8_t DevicePosition) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params Parms{};
    Parms.DeviceRotation = DeviceRotation;
    Parms.DevicePosition = DevicePosition;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
void HeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.HeadMountedDisplayFunctionLibrary.EnableHMD
bool HeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable) {
    static class UFunction* Func = nullptr;
    HeadMountedDisplayFunctionLibrary_EnableHMD_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.SetArrayPropertyByName
void KismetArrayLibrary::SetArrayPropertyByName(class UObject* Object, struct FName PropertyName, struct TArray<uint8_t> Value) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_SetArrayPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.FilterArray
void KismetArrayLibrary::FilterArray(struct TArray<uint8_t> TargetArray, class UClass* FilterClass, struct TArray<uint8_t> FilteredArray) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_FilterArray_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.FilterClass = FilterClass;
    Parms.FilteredArray = FilteredArray;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Shuffle
void KismetArrayLibrary::Array_Shuffle(struct TArray<uint8_t> TargetArray) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Shuffle_Params Parms{};
    Parms.TargetArray = TargetArray;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Set
void KismetArrayLibrary::Array_Set(struct TArray<uint8_t> TargetArray, int32_t Index, int32_t Item, bool bSizeToFit) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Set_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.Index = Index;
    Parms.Item = Item;
    Parms.bSizeToFit = bSizeToFit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Resize
void KismetArrayLibrary::Array_Resize(struct TArray<uint8_t> TargetArray, int32_t Size) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Resize_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.Size = Size;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_RemoveItem
bool KismetArrayLibrary::Array_RemoveItem(struct TArray<uint8_t> TargetArray, int32_t Item) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_RemoveItem_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.Item = Item;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.Array_Remove
void KismetArrayLibrary::Array_Remove(struct TArray<uint8_t> TargetArray, int32_t IndexToRemove) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Remove_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.IndexToRemove = IndexToRemove;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Length
int32_t KismetArrayLibrary::Array_Length(struct TArray<uint8_t> TargetArray) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Length_Params Parms{};
    Parms.TargetArray = TargetArray;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.Array_LastIndex
int32_t KismetArrayLibrary::Array_LastIndex(struct TArray<uint8_t> TargetArray) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_LastIndex_Params Parms{};
    Parms.TargetArray = TargetArray;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.Array_Insert
void KismetArrayLibrary::Array_Insert(struct TArray<uint8_t> TargetArray, int32_t newItem, int32_t Index) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Insert_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.newItem = newItem;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Get
void KismetArrayLibrary::Array_Get(struct TArray<uint8_t> TargetArray, int32_t Index, int32_t Item) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Get_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.Index = Index;
    Parms.Item = Item;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Find
int32_t KismetArrayLibrary::Array_Find(struct TArray<uint8_t> TargetArray, int32_t ItemToFind) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Find_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.ItemToFind = ItemToFind;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.Array_Contains
bool KismetArrayLibrary::Array_Contains(struct TArray<uint8_t> TargetArray, int32_t ItemToFind) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Contains_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.ItemToFind = ItemToFind;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.Array_Clear
void KismetArrayLibrary::Array_Clear(struct TArray<uint8_t> TargetArray) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Clear_Params Parms{};
    Parms.TargetArray = TargetArray;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_Append
void KismetArrayLibrary::Array_Append(struct TArray<uint8_t> TargetArray, struct TArray<uint8_t> SourceArray) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Append_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.SourceArray = SourceArray;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetArrayLibrary.Array_AddUnique
int32_t KismetArrayLibrary::Array_AddUnique(struct TArray<uint8_t> TargetArray, int32_t newItem) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_AddUnique_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.newItem = newItem;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetArrayLibrary.Array_Add
int32_t KismetArrayLibrary::Array_Add(struct TArray<uint8_t> TargetArray, int32_t newItem) {
    static class UFunction* Func = nullptr;
    KismetArrayLibrary_Array_Add_Params Parms{};
    Parms.TargetArray = TargetArray;
    Parms.newItem = newItem;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetGuidLibrary.Parse_StringToGuid
void KismetGuidLibrary::Parse_StringToGuid(struct FString GuidString, uint8_t OutGuid, bool Success) {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_Parse_StringToGuid_Params Parms{};
    Parms.GuidString = GuidString;
    Parms.OutGuid = OutGuid;
    Parms.Success = Success;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetGuidLibrary.NotEqual_GuidGuid
bool KismetGuidLibrary::NotEqual_GuidGuid(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_NotEqual_GuidGuid_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetGuidLibrary.NewGuid
uint8_t KismetGuidLibrary::NewGuid() {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_NewGuid_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetGuidLibrary.IsValid_Guid
bool KismetGuidLibrary::IsValid_Guid(uint8_t InGuid) {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_IsValid_Guid_Params Parms{};
    Parms.InGuid = InGuid;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetGuidLibrary.Invalidate_Guid
void KismetGuidLibrary::Invalidate_Guid(uint8_t InGuid) {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_Invalidate_Guid_Params Parms{};
    Parms.InGuid = InGuid;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetGuidLibrary.EqualEqual_GuidGuid
bool KismetGuidLibrary::EqualEqual_GuidGuid(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_EqualEqual_GuidGuid_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetGuidLibrary.Conv_GuidToString
struct FString KismetGuidLibrary::Conv_GuidToString(uint8_t InGuid) {
    static class UFunction* Func = nullptr;
    KismetGuidLibrary_Conv_GuidToString_Params Parms{};
    Parms.InGuid = InGuid;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_IsTouchEvent
bool KismetInputLibrary::PointerEvent_IsTouchEvent(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_IsTouchEvent_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown
bool KismetInputLibrary::PointerEvent_IsMouseButtonDown(uint8_t Input, uint8_t MouseButton) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_IsMouseButtonDown_Params Parms{};
    Parms.Input = Input;
    Parms.MouseButton = MouseButton;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetWheelDelta
float KismetInputLibrary::PointerEvent_GetWheelDelta(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetWheelDelta_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetUserIndex
int32_t KismetInputLibrary::PointerEvent_GetUserIndex(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetUserIndex_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex
int32_t KismetInputLibrary::PointerEvent_GetTouchpadIndex(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetTouchpadIndex_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition
uint8_t KismetInputLibrary::PointerEvent_GetScreenSpacePosition(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetScreenSpacePosition_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetPointerIndex
int32_t KismetInputLibrary::PointerEvent_GetPointerIndex(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetPointerIndex_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition
uint8_t KismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetGestureDelta
uint8_t KismetInputLibrary::PointerEvent_GetGestureDelta(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetGestureDelta_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetEffectingButton
uint8_t KismetInputLibrary::PointerEvent_GetEffectingButton(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetEffectingButton_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.PointerEvent_GetCursorDelta
uint8_t KismetInputLibrary::PointerEvent_GetCursorDelta(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_PointerEvent_GetCursorDelta_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_IsVectorAxis
bool KismetInputLibrary::Key_IsVectorAxis(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_IsVectorAxis_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_IsMouseButton
bool KismetInputLibrary::Key_IsMouseButton(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_IsMouseButton_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_IsModifierKey
bool KismetInputLibrary::Key_IsModifierKey(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_IsModifierKey_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_IsKeyboardKey
bool KismetInputLibrary::Key_IsKeyboardKey(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_IsKeyboardKey_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_IsGamepadKey
bool KismetInputLibrary::Key_IsGamepadKey(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_IsGamepadKey_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_IsFloatAxis
bool KismetInputLibrary::Key_IsFloatAxis(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_IsFloatAxis_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.Key_GetDisplayName
struct FText KismetInputLibrary::Key_GetDisplayName(uint8_t Key) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_Key_GetDisplayName_Params Parms{};
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsShiftDown
bool KismetInputLibrary::InputEvent_IsShiftDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsShiftDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsRightShiftDown
bool KismetInputLibrary::InputEvent_IsRightShiftDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsRightShiftDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsRightControlDown
bool KismetInputLibrary::InputEvent_IsRightControlDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsRightControlDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsRightCommandDown
bool KismetInputLibrary::InputEvent_IsRightCommandDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsRightCommandDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsRightAltDown
bool KismetInputLibrary::InputEvent_IsRightAltDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsRightAltDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsRepeat
bool KismetInputLibrary::InputEvent_IsRepeat(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsRepeat_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown
bool KismetInputLibrary::InputEvent_IsLeftShiftDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsLeftShiftDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftControlDown
bool KismetInputLibrary::InputEvent_IsLeftControlDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsLeftControlDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown
bool KismetInputLibrary::InputEvent_IsLeftCommandDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsLeftCommandDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsLeftAltDown
bool KismetInputLibrary::InputEvent_IsLeftAltDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsLeftAltDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsControlDown
bool KismetInputLibrary::InputEvent_IsControlDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsControlDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsCommandDown
bool KismetInputLibrary::InputEvent_IsCommandDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsCommandDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.InputEvent_IsAltDown
bool KismetInputLibrary::InputEvent_IsAltDown(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_InputEvent_IsAltDown_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.GetUserIndex
int32_t KismetInputLibrary::GetUserIndex(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_GetUserIndex_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.GetKey
uint8_t KismetInputLibrary::GetKey(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_GetKey_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.GetAnalogValue
float KismetInputLibrary::GetAnalogValue(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_GetAnalogValue_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.EqualEqual_KeyKey
bool KismetInputLibrary::EqualEqual_KeyKey(uint8_t A, uint8_t B) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_EqualEqual_KeyKey_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.ControllerEvent_GetUserIndex
int32_t KismetInputLibrary::ControllerEvent_GetUserIndex(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_ControllerEvent_GetUserIndex_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.ControllerEvent_GetEffectingButton
uint8_t KismetInputLibrary::ControllerEvent_GetEffectingButton(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_ControllerEvent_GetEffectingButton_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.ControllerEvent_GetAnalogValue
float KismetInputLibrary::ControllerEvent_GetAnalogValue(uint8_t Input) {
    static class UFunction* Func = nullptr;
    KismetInputLibrary_ControllerEvent_GetAnalogValue_Params Parms{};
    Parms.Input = Input;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetInputLibrary.CalibrateTilt
void KismetInputLibrary::CalibrateTilt() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetInternationalizationLibrary.GetCurrentCulture
struct FString KismetInternationalizationLibrary::GetCurrentCulture() {
    static class UFunction* Func = nullptr;
    KismetInternationalizationLibrary_GetCurrentCulture_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMaterialLibrary.SetVectorParameterValue
void KismetMaterialLibrary::SetVectorParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName, uint8_t ParameterValue) {
    static class UFunction* Func = nullptr;
    KismetMaterialLibrary_SetVectorParameterValue_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Collection = Collection;
    Parms.ParameterName = ParameterName;
    Parms.ParameterValue = ParameterValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMaterialLibrary.SetScalarParameterValue
void KismetMaterialLibrary::SetScalarParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName, float ParameterValue) {
    static class UFunction* Func = nullptr;
    KismetMaterialLibrary_SetScalarParameterValue_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Collection = Collection;
    Parms.ParameterName = ParameterName;
    Parms.ParameterValue = ParameterValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetMaterialLibrary.GetVectorParameterValue
uint8_t KismetMaterialLibrary::GetVectorParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName) {
    static class UFunction* Func = nullptr;
    KismetMaterialLibrary_GetVectorParameterValue_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Collection = Collection;
    Parms.ParameterName = ParameterName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMaterialLibrary.GetScalarParameterValue
float KismetMaterialLibrary::GetScalarParameterValue(class UObject* WorldContextObject, class UObject* Collection, struct FName ParameterName) {
    static class UFunction* Func = nullptr;
    KismetMaterialLibrary_GetScalarParameterValue_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Collection = Collection;
    Parms.ParameterName = ParameterName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance
class UObject* KismetMaterialLibrary::CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UObject* Parent) {
    static class UFunction* Func = nullptr;
    KismetMaterialLibrary_CreateDynamicMaterialInstance_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Parent = Parent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.MarkBit
void KismetNodeHelperLibrary::MarkBit(int32_t Data, int32_t Index) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_MarkBit_Params Parms{};
    Parms.Data = Data;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetNodeHelperLibrary.HasUnmarkedBit
bool KismetNodeHelperLibrary::HasUnmarkedBit(int32_t Data, int32_t NumBits) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_HasUnmarkedBit_Params Parms{};
    Parms.Data = Data;
    Parms.NumBits = NumBits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.HasMarkedBit
bool KismetNodeHelperLibrary::HasMarkedBit(int32_t Data, int32_t NumBits) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_HasMarkedBit_Params Parms{};
    Parms.Data = Data;
    Parms.NumBits = NumBits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetValidValue
uint8_t KismetNodeHelperLibrary::GetValidValue(class UObject* Enum, uint8_t EnumeratorValue) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetValidValue_Params Parms{};
    Parms.Enum = Enum;
    Parms.EnumeratorValue = EnumeratorValue;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetUnmarkedBit
int32_t KismetNodeHelperLibrary::GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetUnmarkedBit_Params Parms{};
    Parms.Data = Data;
    Parms.StartIdx = StartIdx;
    Parms.NumBits = NumBits;
    Parms.bRandom = bRandom;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit
int32_t KismetNodeHelperLibrary::GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetRandomUnmarkedBit_Params Parms{};
    Parms.Data = Data;
    Parms.StartIdx = StartIdx;
    Parms.NumBits = NumBits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit
int32_t KismetNodeHelperLibrary::GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetFirstUnmarkedBit_Params Parms{};
    Parms.Data = Data;
    Parms.StartIdx = StartIdx;
    Parms.NumBits = NumBits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetEnumeratorValueFromIndex
uint8_t KismetNodeHelperLibrary::GetEnumeratorValueFromIndex(class UObject* Enum, uint8_t EnumeratorIndex) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Params Parms{};
    Parms.Enum = Enum;
    Parms.EnumeratorIndex = EnumeratorIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName
struct FString KismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(class UObject* Enum, uint8_t EnumeratorValue) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Params Parms{};
    Parms.Enum = Enum;
    Parms.EnumeratorValue = EnumeratorValue;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.GetEnumeratorName
struct FName KismetNodeHelperLibrary::GetEnumeratorName(class UObject* Enum, uint8_t EnumeratorValue) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_GetEnumeratorName_Params Parms{};
    Parms.Enum = Enum;
    Parms.EnumeratorValue = EnumeratorValue;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetNodeHelperLibrary.ClearBit
void KismetNodeHelperLibrary::ClearBit(int32_t Data, int32_t Index) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_ClearBit_Params Parms{};
    Parms.Data = Data;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetNodeHelperLibrary.ClearAllBits
void KismetNodeHelperLibrary::ClearAllBits(int32_t Data) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_ClearAllBits_Params Parms{};
    Parms.Data = Data;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetNodeHelperLibrary.BitIsMarked
bool KismetNodeHelperLibrary::BitIsMarked(int32_t Data, int32_t Index) {
    static class UFunction* Func = nullptr;
    KismetNodeHelperLibrary_BitIsMarked_Params Parms{};
    Parms.Data = Data;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.TrimTrailing
struct FString KismetStringLibrary::TrimTrailing(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_TrimTrailing_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Trim
struct FString KismetStringLibrary::Trim(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Trim_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.ToUpper
struct FString KismetStringLibrary::ToUpper(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_ToUpper_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.ToLower
struct FString KismetStringLibrary::ToLower(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_ToLower_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.TimeSecondsToString
struct FString KismetStringLibrary::TimeSecondsToString(float InSeconds) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_TimeSecondsToString_Params Parms{};
    Parms.InSeconds = InSeconds;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.StartsWith
bool KismetStringLibrary::StartsWith(struct FString SourceString, struct FString InPrefix, uint8_t SearchCase) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_StartsWith_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.InPrefix = InPrefix;
    Parms.SearchCase = SearchCase;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Split
bool KismetStringLibrary::Split(struct FString SourceString, struct FString InStr, struct FString LeftS, struct FString RightS, uint8_t SearchCase, uint8_t SearchDir) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Split_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.InStr = InStr;
    Parms.LeftS = LeftS;
    Parms.RightS = RightS;
    Parms.SearchCase = SearchCase;
    Parms.SearchDir = SearchDir;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.RightPad
struct FString KismetStringLibrary::RightPad(struct FString SourceString, int32_t ChCount) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_RightPad_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.ChCount = ChCount;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.RightChop
struct FString KismetStringLibrary::RightChop(struct FString SourceString, int32_t Count) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_RightChop_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Count = Count;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Right
struct FString KismetStringLibrary::Right(struct FString SourceString, int32_t Count) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Right_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Count = Count;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Reverse
struct FString KismetStringLibrary::Reverse(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Reverse_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.ReplaceInline
int32_t KismetStringLibrary::ReplaceInline(struct FString SourceString, struct FString SearchText, struct FString ReplacementText, uint8_t SearchCase) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_ReplaceInline_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.SearchText = SearchText;
    Parms.ReplacementText = ReplacementText;
    Parms.SearchCase = SearchCase;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Replace
struct FString KismetStringLibrary::Replace(struct FString SourceString, struct FString From, struct FString To, uint8_t SearchCase) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Replace_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.From = From;
    Parms.To = To;
    Parms.SearchCase = SearchCase;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.ParseIntoArray
struct TArray<uint8_t> KismetStringLibrary::ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_ParseIntoArray_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Delimiter = Delimiter;
    Parms.CullEmptyStrings = CullEmptyStrings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.NotEqual_StrStr
bool KismetStringLibrary::NotEqual_StrStr(struct FString A, struct FString B) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_NotEqual_StrStr_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.NotEqual_StriStri
bool KismetStringLibrary::NotEqual_StriStri(struct FString A, struct FString B) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_NotEqual_StriStri_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Mid
struct FString KismetStringLibrary::Mid(struct FString SourceString, int32_t Start, int32_t Count) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Mid_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Start = Start;
    Parms.Count = Count;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.MatchesWildcard
bool KismetStringLibrary::MatchesWildcard(struct FString SourceString, struct FString Wildcard, uint8_t SearchCase) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_MatchesWildcard_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Wildcard = Wildcard;
    Parms.SearchCase = SearchCase;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Len
int32_t KismetStringLibrary::Len(struct FString S) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Len_Params Parms{};
    Parms.S = S;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.LeftPad
struct FString KismetStringLibrary::LeftPad(struct FString SourceString, int32_t ChCount) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_LeftPad_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.ChCount = ChCount;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.LeftChop
struct FString KismetStringLibrary::LeftChop(struct FString SourceString, int32_t Count) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_LeftChop_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Count = Count;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Left
struct FString KismetStringLibrary::Left(struct FString SourceString, int32_t Count) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Left_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Count = Count;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.JoinStringArray
struct FString KismetStringLibrary::JoinStringArray(struct TArray<uint8_t> SourceArray, struct FString Separator) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_JoinStringArray_Params Parms{};
    Parms.SourceArray = SourceArray;
    Parms.Separator = Separator;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.IsNumeric
bool KismetStringLibrary::IsNumeric(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_IsNumeric_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.GetSubstring
struct FString KismetStringLibrary::GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_GetSubstring_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.StartIndex = StartIndex;
    Parms.Length = Length;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.GetCharacterAsNumber
int32_t KismetStringLibrary::GetCharacterAsNumber(struct FString SourceString, int32_t Index) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_GetCharacterAsNumber_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.GetCharacterArrayFromString
struct TArray<uint8_t> KismetStringLibrary::GetCharacterArrayFromString(struct FString SourceString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_GetCharacterArrayFromString_Params Parms{};
    Parms.SourceString = SourceString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.FindSubstring
int32_t KismetStringLibrary::FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_FindSubstring_Params Parms{};
    Parms.SearchIn = SearchIn;
    Parms.Substring = Substring;
    Parms.bUseCase = bUseCase;
    Parms.bSearchFromEnd = bSearchFromEnd;
    Parms.StartPosition = StartPosition;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.EqualEqual_StrStr
bool KismetStringLibrary::EqualEqual_StrStr(struct FString A, struct FString B) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_EqualEqual_StrStr_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.EqualEqual_StriStri
bool KismetStringLibrary::EqualEqual_StriStri(struct FString A, struct FString B) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_EqualEqual_StriStri_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.EndsWith
bool KismetStringLibrary::EndsWith(struct FString SourceString, struct FString InSuffix, uint8_t SearchCase) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_EndsWith_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.InSuffix = InSuffix;
    Parms.SearchCase = SearchCase;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.CullArray
int32_t KismetStringLibrary::CullArray(struct FString SourceString, struct TArray<uint8_t> InArray) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_CullArray_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.InArray = InArray;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_VectorToString
struct FString KismetStringLibrary::Conv_VectorToString(uint8_t InVec) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_VectorToString_Params Parms{};
    Parms.InVec = InVec;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_Vector2dToString
struct FString KismetStringLibrary::Conv_Vector2dToString(uint8_t InVec) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_Vector2dToString_Params Parms{};
    Parms.InVec = InVec;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_TransformToString
struct FString KismetStringLibrary::Conv_TransformToString(uint8_t InTrans) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_TransformToString_Params Parms{};
    Parms.InTrans = InTrans;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_StringToName
struct FName KismetStringLibrary::Conv_StringToName(struct FString InString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_StringToName_Params Parms{};
    Parms.InString = InString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_StringToInt
int32_t KismetStringLibrary::Conv_StringToInt(struct FString InString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_StringToInt_Params Parms{};
    Parms.InString = InString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_StringToFloat
float KismetStringLibrary::Conv_StringToFloat(struct FString InString) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_StringToFloat_Params Parms{};
    Parms.InString = InString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_RotatorToString
struct FString KismetStringLibrary::Conv_RotatorToString(uint8_t InRot) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_RotatorToString_Params Parms{};
    Parms.InRot = InRot;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_ObjectToString
struct FString KismetStringLibrary::Conv_ObjectToString(class UObject* InObj) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_ObjectToString_Params Parms{};
    Parms.InObj = InObj;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_NameToString
struct FString KismetStringLibrary::Conv_NameToString(struct FName InName) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_NameToString_Params Parms{};
    Parms.InName = InName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_IntToString
struct FString KismetStringLibrary::Conv_IntToString(int32_t InInt) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_IntToString_Params Parms{};
    Parms.InInt = InInt;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_FloatToString
struct FString KismetStringLibrary::Conv_FloatToString(float InFloat) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_FloatToString_Params Parms{};
    Parms.InFloat = InFloat;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_ColorToString
struct FString KismetStringLibrary::Conv_ColorToString(uint8_t InColor) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_ColorToString_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_ByteToString
struct FString KismetStringLibrary::Conv_ByteToString(uint8_t InByte) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_ByteToString_Params Parms{};
    Parms.InByte = InByte;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_BoolToString
struct FString KismetStringLibrary::Conv_BoolToString(bool InBool) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_BoolToString_Params Parms{};
    Parms.InBool = InBool;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Conv_AssetPtrToString
struct FString KismetStringLibrary::Conv_AssetPtrToString(uint8_t InObj) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Conv_AssetPtrToString_Params Parms{};
    Parms.InObj = InObj;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.Concat_StrStr
struct FString KismetStringLibrary::Concat_StrStr(struct FString A, struct FString B) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_Concat_StrStr_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Vector2d
struct FString KismetStringLibrary::BuildString_Vector2d(struct FString AppendTo, struct FString Prefix, uint8_t InVector2D, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Vector2d_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InVector2D = InVector2D;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Vector
struct FString KismetStringLibrary::BuildString_Vector(struct FString AppendTo, struct FString Prefix, uint8_t InVector, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Vector_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InVector = InVector;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Rotator
struct FString KismetStringLibrary::BuildString_Rotator(struct FString AppendTo, struct FString Prefix, uint8_t InRot, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Rotator_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InRot = InRot;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Object
struct FString KismetStringLibrary::BuildString_Object(struct FString AppendTo, struct FString Prefix, class UObject* InObj, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Object_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InObj = InObj;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Name
struct FString KismetStringLibrary::BuildString_Name(struct FString AppendTo, struct FString Prefix, struct FName InName, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Name_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InName = InName;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Int
struct FString KismetStringLibrary::BuildString_Int(struct FString AppendTo, struct FString Prefix, int32_t InInt, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Int_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InInt = InInt;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Float
struct FString KismetStringLibrary::BuildString_Float(struct FString AppendTo, struct FString Prefix, float InFloat, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Float_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InFloat = InFloat;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Color
struct FString KismetStringLibrary::BuildString_Color(struct FString AppendTo, struct FString Prefix, uint8_t InColor, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Color_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InColor = InColor;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetStringLibrary.BuildString_Bool
struct FString KismetStringLibrary::BuildString_Bool(struct FString AppendTo, struct FString Prefix, bool InBool, struct FString Suffix) {
    static class UFunction* Func = nullptr;
    KismetStringLibrary_BuildString_Bool_Params Parms{};
    Parms.AppendTo = AppendTo;
    Parms.Prefix = Prefix;
    Parms.InBool = InBool;
    Parms.Suffix = Suffix;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.StackTrace
void KismetSystemLibrary::StackTrace() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetSystemLibrary.SphereTraceSingleForObjects
bool KismetSystemLibrary::SphereTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceSingleForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceSingleByObject_DEPRECATED
bool KismetSystemLibrary::SphereTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceSingleByObject_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.ObjectsToTrace = ObjectsToTrace;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceSingle_NEW
bool KismetSystemLibrary::SphereTraceSingle_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceSingle_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceSingle_DEPRECATED
bool KismetSystemLibrary::SphereTraceSingle_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceSingle_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceMultiForObjects
bool KismetSystemLibrary::SphereTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceMultiForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceMultiByObject_DEPRECATED
bool KismetSystemLibrary::SphereTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceMultiByObject_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.ObjectsToTrace = ObjectsToTrace;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceMulti_PROFILE
bool KismetSystemLibrary::SphereTraceMulti_PROFILE(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, struct FName ProfileName, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceMulti_PROFILE_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.ProfileName = ProfileName;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceMulti_NEW
bool KismetSystemLibrary::SphereTraceMulti_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceMulti_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereTraceMulti_DEPRECATED
bool KismetSystemLibrary::SphereTraceMulti_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereTraceMulti_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereOverlapComponents_NEW
bool KismetSystemLibrary::SphereOverlapComponents_NEW(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereOverlapComponents_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpherePos = SpherePos;
    Parms.SphereRadius = SphereRadius;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereOverlapComponents_DEPRECATED
bool KismetSystemLibrary::SphereOverlapComponents_DEPRECATED(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereOverlapComponents_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpherePos = SpherePos;
    Parms.SphereRadius = SphereRadius;
    Parms.Filter = Filter;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereOverlapActors_NEW
bool KismetSystemLibrary::SphereOverlapActors_NEW(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereOverlapActors_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpherePos = SpherePos;
    Parms.SphereRadius = SphereRadius;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.SphereOverlapActors_DEPRECATED
bool KismetSystemLibrary::SphereOverlapActors_DEPRECATED(class UObject* WorldContextObject, uint8_t SpherePos, float SphereRadius, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SphereOverlapActors_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpherePos = SpherePos;
    Parms.SphereRadius = SphereRadius;
    Parms.Filter = Filter;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen
void KismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Params Parms{};
    Parms.CategoryName = CategoryName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen
void KismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(class UObject* SpecificPlayer) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Params Parms{};
    Parms.SpecificPlayer = SpecificPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ShowAdBanner
void KismetSystemLibrary::ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ShowAdBanner_Params Parms{};
    Parms.AdIdIndex = AdIdIndex;
    Parms.bShowOnBottomOfScreen = bShowOnBottomOfScreen;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetWindowTitle
void KismetSystemLibrary::SetWindowTitle(struct FText Title) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetWindowTitle_Params Parms{};
    Parms.Title = Title;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem
void KismetSystemLibrary::SetVolumeButtonsHandledBySystem(bool bEnabled) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetVolumeButtonsHandledBySystem_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetVectorPropertyByName
void KismetSystemLibrary::SetVectorPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetVectorPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetTransformPropertyByName
void KismetSystemLibrary::SetTransformPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetTransformPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetTextPropertyByName
void KismetSystemLibrary::SetTextPropertyByName(class UObject* Object, struct FName PropertyName, struct FText Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetTextPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetSupressViewportTransitionMessage
void KismetSystemLibrary::SetSupressViewportTransitionMessage(class UObject* WorldContextObject, bool bState) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetSupressViewportTransitionMessage_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.bState = bState;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetStructurePropertyByName
void KismetSystemLibrary::SetStructurePropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetStructurePropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetStringPropertyByName
void KismetSystemLibrary::SetStringPropertyByName(class UObject* Object, struct FName PropertyName, struct FString Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetStringPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetRotatorPropertyByName
void KismetSystemLibrary::SetRotatorPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetRotatorPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetObjectPropertyByName
void KismetSystemLibrary::SetObjectPropertyByName(class UObject* Object, struct FName PropertyName, class UObject* Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetObjectPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetNamePropertyByName
void KismetSystemLibrary::SetNamePropertyByName(class UObject* Object, struct FName PropertyName, struct FName Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetNamePropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetLinearColorPropertyByName
void KismetSystemLibrary::SetLinearColorPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetLinearColorPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetIntPropertyByName
void KismetSystemLibrary::SetIntPropertyByName(class UObject* Object, struct FName PropertyName, int32_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetIntPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetInterfacePropertyByName
void KismetSystemLibrary::SetInterfacePropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetInterfacePropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetFloatPropertyByName
void KismetSystemLibrary::SetFloatPropertyByName(class UObject* Object, struct FName PropertyName, float Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetFloatPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetCollisionProfileNameProperty
void KismetSystemLibrary::SetCollisionProfileNameProperty(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetCollisionProfileNameProperty_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetClassPropertyByName
void KismetSystemLibrary::SetClassPropertyByName(class UObject* Object, struct FName PropertyName, class UClass* Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetClassPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetBytePropertyByName
void KismetSystemLibrary::SetBytePropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetBytePropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetBoolPropertyByName
void KismetSystemLibrary::SetBoolPropertyByName(class UObject* Object, struct FName PropertyName, bool Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetBoolPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetAssetPropertyByName
void KismetSystemLibrary::SetAssetPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetAssetPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.SetAssetClassPropertyByName
void KismetSystemLibrary::SetAssetClassPropertyByName(class UObject* Object, struct FName PropertyName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_SetAssetClassPropertyByName_Params Parms{};
    Parms.Object = Object;
    Parms.PropertyName = PropertyName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.RetriggerableDelay
void KismetSystemLibrary::RetriggerableDelay(class UObject* WorldContextObject, float Duration, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_RetriggerableDelay_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Duration = Duration;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ResetGamepadAssignmentToController
void KismetSystemLibrary::ResetGamepadAssignmentToController(int32_t ControllerId) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ResetGamepadAssignmentToController_Params Parms{};
    Parms.ControllerId = ControllerId;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ResetGamepadAssignments
void KismetSystemLibrary::ResetGamepadAssignments() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetSystemLibrary.RegisterForRemoteNotifications
void KismetSystemLibrary::RegisterForRemoteNotifications() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetSystemLibrary.QuitGame
void KismetSystemLibrary::QuitGame(class UObject* WorldContextObject, class UObject* SpecificPlayer, uint8_t QuitPreference) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_QuitGame_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.SpecificPlayer = SpecificPlayer;
    Parms.QuitPreference = QuitPreference;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.PrintWarning
void KismetSystemLibrary::PrintWarning(struct FString InString) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_PrintWarning_Params Parms{};
    Parms.InString = InString;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.PrintText
void KismetSystemLibrary::PrintText(class UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, uint8_t TextColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_PrintText_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InText = InText;
    Parms.bPrintToScreen = bPrintToScreen;
    Parms.bPrintToLog = bPrintToLog;
    Parms.TextColor = TextColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.PrintString
void KismetSystemLibrary::PrintString(class UObject* WorldContextObject, struct FString InString, bool bPrintToScreen, bool bPrintToLog, uint8_t TextColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_PrintString_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InString = InString;
    Parms.bPrintToScreen = bPrintToScreen;
    Parms.bPrintToLog = bPrintToLog;
    Parms.TextColor = TextColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature
void KismetSystemLibrary::OnAssetLoaded__DelegateSignature(class UObject* Loaded) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_OnAssetLoaded__DelegateSignature_Params Parms{};
    Parms.Loaded = Loaded;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature
void KismetSystemLibrary::OnAssetClassLoaded__DelegateSignature(class UClass* Loaded) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_OnAssetClassLoaded__DelegateSignature_Params Parms{};
    Parms.Loaded = Loaded;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.MoveComponentTo
void KismetSystemLibrary::MoveComponentTo(class UObject* Component, uint8_t TargetRelativeLocation, uint8_t TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, uint8_t MoveAction, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MoveComponentTo_Params Parms{};
    Parms.Component = Component;
    Parms.TargetRelativeLocation = TargetRelativeLocation;
    Parms.TargetRelativeRotation = TargetRelativeRotation;
    Parms.bEaseOut = bEaseOut;
    Parms.bEaseIn = bEaseIn;
    Parms.OverTime = OverTime;
    Parms.MoveAction = MoveAction;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.MakeLiteralText
struct FText KismetSystemLibrary::MakeLiteralText(struct FText Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralText_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.MakeLiteralString
struct FString KismetSystemLibrary::MakeLiteralString(struct FString Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralString_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.MakeLiteralName
struct FName KismetSystemLibrary::MakeLiteralName(struct FName Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralName_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.MakeLiteralInt
int32_t KismetSystemLibrary::MakeLiteralInt(int32_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralInt_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.MakeLiteralFloat
float KismetSystemLibrary::MakeLiteralFloat(float Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralFloat_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.MakeLiteralByte
uint8_t KismetSystemLibrary::MakeLiteralByte(uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralByte_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.MakeLiteralBool
bool KismetSystemLibrary::MakeLiteralBool(bool Value) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_MakeLiteralBool_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LoadAssetClass
void KismetSystemLibrary::LoadAssetClass(class UObject* WorldContextObject, uint8_t AssetClass, uint8_t OnLoaded, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LoadAssetClass_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.AssetClass = AssetClass;
    Parms.OnLoaded = OnLoaded;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.LoadAsset
void KismetSystemLibrary::LoadAsset(class UObject* WorldContextObject, uint8_t Asset, uint8_t OnLoaded, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LoadAsset_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Asset = Asset;
    Parms.OnLoaded = OnLoaded;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.LineTraceSingleForObjects
bool KismetSystemLibrary::LineTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceSingleForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceSingleByObject_DEPRECATED
bool KismetSystemLibrary::LineTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceSingleByObject_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.ObjectsToTrace = ObjectsToTrace;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceSingle_PROFILE
bool KismetSystemLibrary::LineTraceSingle_PROFILE(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct FName ProfileName, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceSingle_PROFILE_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.ProfileName = ProfileName;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceSingle_NEW
bool KismetSystemLibrary::LineTraceSingle_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceSingle_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceSingle_DEPRECATED
bool KismetSystemLibrary::LineTraceSingle_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceSingle_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceMultiForObjects
bool KismetSystemLibrary::LineTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceMultiForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceMultiByObject_DEPRECATED
bool KismetSystemLibrary::LineTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceMultiByObject_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.ObjectsToTrace = ObjectsToTrace;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceMulti_NEW
bool KismetSystemLibrary::LineTraceMulti_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceMulti_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LineTraceMulti_DEPRECATED
bool KismetSystemLibrary::LineTraceMulti_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LineTraceMulti_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.LaunchURL
void KismetSystemLibrary::LaunchURL(struct FString URL) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_LaunchURL_Params Parms{};
    Parms.URL = URL;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_UnPauseTimerHandle
void KismetSystemLibrary::K2_UnPauseTimerHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_UnPauseTimerHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate
void KismetSystemLibrary::K2_UnPauseTimerDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_UnPauseTimerDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_UnPauseTimer
void KismetSystemLibrary::K2_UnPauseTimer(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_UnPauseTimer_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_TimerExistsHandle
bool KismetSystemLibrary::K2_TimerExistsHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_TimerExistsHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_TimerExistsDelegate
bool KismetSystemLibrary::K2_TimerExistsDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_TimerExistsDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_TimerExists
bool KismetSystemLibrary::K2_TimerExists(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_TimerExists_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_SetTimerDelegate
uint8_t KismetSystemLibrary::K2_SetTimerDelegate(uint8_t Delegate, float Time, bool bLooping) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_SetTimerDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    Parms.Time = Time;
    Parms.bLooping = bLooping;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_SetTimer
uint8_t KismetSystemLibrary::K2_SetTimer(class UObject* Object, struct FString FunctionName, float Time, bool bLooping) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_SetTimer_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    Parms.Time = Time;
    Parms.bLooping = bLooping;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_PauseTimerHandle
void KismetSystemLibrary::K2_PauseTimerHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_PauseTimerHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_PauseTimerDelegate
void KismetSystemLibrary::K2_PauseTimerDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_PauseTimerDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_PauseTimer
void KismetSystemLibrary::K2_PauseTimer(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_PauseTimer_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_IsValidTimerHandle
bool KismetSystemLibrary::K2_IsValidTimerHandle(uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsValidTimerHandle_Params Parms{};
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_IsTimerPausedHandle
bool KismetSystemLibrary::K2_IsTimerPausedHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsTimerPausedHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate
bool KismetSystemLibrary::K2_IsTimerPausedDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsTimerPausedDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_IsTimerPaused
bool KismetSystemLibrary::K2_IsTimerPaused(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsTimerPaused_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_IsTimerActiveHandle
bool KismetSystemLibrary::K2_IsTimerActiveHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsTimerActiveHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate
bool KismetSystemLibrary::K2_IsTimerActiveDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsTimerActiveDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_IsTimerActive
bool KismetSystemLibrary::K2_IsTimerActive(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_IsTimerActive_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_InvalidateTimerHandle
uint8_t KismetSystemLibrary::K2_InvalidateTimerHandle(uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_InvalidateTimerHandle_Params Parms{};
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle
float KismetSystemLibrary::K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_GetTimerRemainingTimeHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate
float KismetSystemLibrary::K2_GetTimerRemainingTimeDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_GetTimerRemainingTimeDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_GetTimerRemainingTime
float KismetSystemLibrary::K2_GetTimerRemainingTime(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_GetTimerRemainingTime_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle
float KismetSystemLibrary::K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_GetTimerElapsedTimeHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate
float KismetSystemLibrary::K2_GetTimerElapsedTimeDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_GetTimerElapsedTimeDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_GetTimerElapsedTime
float KismetSystemLibrary::K2_GetTimerElapsedTime(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_GetTimerElapsedTime_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.K2_ClearTimerHandle
void KismetSystemLibrary::K2_ClearTimerHandle(class UObject* WorldContextObject, uint8_t Handle) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_ClearTimerHandle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Handle = Handle;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_ClearTimerDelegate
void KismetSystemLibrary::K2_ClearTimerDelegate(uint8_t Delegate) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_ClearTimerDelegate_Params Parms{};
    Parms.Delegate = Delegate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.K2_ClearTimer
void KismetSystemLibrary::K2_ClearTimer(class UObject* Object, struct FString FunctionName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_K2_ClearTimer_Params Parms{};
    Parms.Object = Object;
    Parms.FunctionName = FunctionName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.IsValidReferencedLocation
bool KismetSystemLibrary::IsValidReferencedLocation(uint8_t LocationReference) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsValidReferencedLocation_Params Parms{};
    Parms.LocationReference = LocationReference;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsValidClass
bool KismetSystemLibrary::IsValidClass(class UClass* Class) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsValidClass_Params Parms{};
    Parms.Class = Class;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsValid
bool KismetSystemLibrary::IsValid(class UObject* Object) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsValid_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsServer
bool KismetSystemLibrary::IsServer(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsServer_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsPackagedForDistribution
bool KismetSystemLibrary::IsPackagedForDistribution() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsPackagedForDistribution_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsLoggedIn
bool KismetSystemLibrary::IsLoggedIn(class UObject* SpecificPlayer) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsLoggedIn_Params Parms{};
    Parms.SpecificPlayer = SpecificPlayer;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsDedicatedServer
bool KismetSystemLibrary::IsDedicatedServer(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsDedicatedServer_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.IsControllerAssignedToGamepad
bool KismetSystemLibrary::IsControllerAssignedToGamepad(int32_t ControllerId) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_IsControllerAssignedToGamepad_Params Parms{};
    Parms.ControllerId = ControllerId;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.HideAdBanner
void KismetSystemLibrary::HideAdBanner() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem
bool KismetSystemLibrary::GetVolumeButtonsHandledBySystem() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetVolumeButtonsHandledBySystem_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetUniqueDeviceId
struct FString KismetSystemLibrary::GetUniqueDeviceId() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetUniqueDeviceId_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions
bool KismetSystemLibrary::GetSupportedFullscreenResolutions(struct TArray<uint8_t> Resolutions) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetSupportedFullscreenResolutions_Params Parms{};
    Parms.Resolutions = Resolutions;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel
int32_t KismetSystemLibrary::GetRenderingMaterialQualityLevel() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetRenderingMaterialQualityLevel_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetRenderingDetailMode
int32_t KismetSystemLibrary::GetRenderingDetailMode() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetRenderingDetailMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetReferencedTransform
uint8_t KismetSystemLibrary::GetReferencedTransform(uint8_t LocationReference) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetReferencedTransform_Params Parms{};
    Parms.LocationReference = LocationReference;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetReferencedRotation
uint8_t KismetSystemLibrary::GetReferencedRotation(uint8_t LocationReference) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetReferencedRotation_Params Parms{};
    Parms.LocationReference = LocationReference;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetReferencedLocation
uint8_t KismetSystemLibrary::GetReferencedLocation(uint8_t LocationReference) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetReferencedLocation_Params Parms{};
    Parms.LocationReference = LocationReference;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetPreferredLanguages
struct TArray<uint8_t> KismetSystemLibrary::GetPreferredLanguages() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetPreferredLanguages_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetPlatformUserName
struct FString KismetSystemLibrary::GetPlatformUserName() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetPlatformUserName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetPathName
struct FString KismetSystemLibrary::GetPathName(class UObject* Object) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetPathName_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetObjectName
struct FString KismetSystemLibrary::GetObjectName(class UObject* Object) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetObjectName_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetLocalCurrencySymbol
struct FString KismetSystemLibrary::GetLocalCurrencySymbol() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetLocalCurrencySymbol_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetLocalCurrencyCode
struct FString KismetSystemLibrary::GetLocalCurrencyCode() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetLocalCurrencyCode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetGameTimeInSeconds
float KismetSystemLibrary::GetGameTimeInSeconds(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetGameTimeInSeconds_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetGameName
struct FString KismetSystemLibrary::GetGameName() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetGameName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetEngineVersion
struct FString KismetSystemLibrary::GetEngineVersion() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetEngineVersion_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetDisplayName
struct FString KismetSystemLibrary::GetDisplayName(class UObject* Object) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetDisplayName_Params Parms{};
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetComponentBounds
void KismetSystemLibrary::GetComponentBounds(class UObject* Component, uint8_t Origin, uint8_t BoxExtent, float SphereRadius) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetComponentBounds_Params Parms{};
    Parms.Component = Component;
    Parms.Origin = Origin;
    Parms.BoxExtent = BoxExtent;
    Parms.SphereRadius = SphereRadius;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.GetClassDisplayName
struct FString KismetSystemLibrary::GetClassDisplayName(class UClass* Class) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetClassDisplayName_Params Parms{};
    Parms.Class = Class;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetAdIDCount
int32_t KismetSystemLibrary::GetAdIDCount() {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetAdIDCount_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.GetActorListFromComponentList
void KismetSystemLibrary::GetActorListFromComponentList(struct TArray<uint8_t> ComponentList, class UClass* ActorClassFilter, struct TArray<uint8_t> OutActorList) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetActorListFromComponentList_Params Parms{};
    Parms.ComponentList = ComponentList;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.OutActorList = OutActorList;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.GetActorBounds
void KismetSystemLibrary::GetActorBounds(class UObject* Actor, uint8_t Origin, uint8_t BoxExtent) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_GetActorBounds_Params Parms{};
    Parms.Actor = Actor;
    Parms.Origin = Origin;
    Parms.BoxExtent = BoxExtent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ForceCloseAdBanner
void KismetSystemLibrary::ForceCloseAdBanner() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetSystemLibrary.FlushPersistentDebugLines
void KismetSystemLibrary::FlushPersistentDebugLines(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_FlushPersistentDebugLines_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.FlushDebugStrings
void KismetSystemLibrary::FlushDebugStrings(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_FlushDebugStrings_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ExecuteEditorConsoleCommand
void KismetSystemLibrary::ExecuteEditorConsoleCommand(class UObject* WorldContextObject, struct FString Command) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ExecuteEditorConsoleCommand_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Command = Command;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ExecuteConsoleCommand
void KismetSystemLibrary::ExecuteConsoleCommand(class UObject* WorldContextObject, struct FString Command, class UObject* SpecificPlayer) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ExecuteConsoleCommand_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Command = Command;
    Parms.SpecificPlayer = SpecificPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugString
void KismetSystemLibrary::DrawDebugString(class UObject* WorldContextObject, uint8_t TextLocation, struct FString Text, class UObject* TestBaseActor, uint8_t TextColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugString_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.TextLocation = TextLocation;
    Parms.Text = Text;
    Parms.TestBaseActor = TestBaseActor;
    Parms.TextColor = TextColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugSphere
void KismetSystemLibrary::DrawDebugSphere(class UObject* WorldContextObject, uint8_t Center, float Radius, int32_t Segments, uint8_t LineColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugSphere_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Center = Center;
    Parms.Radius = Radius;
    Parms.Segments = Segments;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugPoint
void KismetSystemLibrary::DrawDebugPoint(class UObject* WorldContextObject, uint8_t Position, float Size, uint8_t PointColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugPoint_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Position = Position;
    Parms.Size = Size;
    Parms.PointColor = PointColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugPlane
void KismetSystemLibrary::DrawDebugPlane(class UObject* WorldContextObject, uint8_t PlaneCoordinates, uint8_t Location, float Size, uint8_t PlaneColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugPlane_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlaneCoordinates = PlaneCoordinates;
    Parms.Location = Location;
    Parms.Size = Size;
    Parms.PlaneColor = PlaneColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugLine
void KismetSystemLibrary::DrawDebugLine(class UObject* WorldContextObject, uint8_t LineStart, uint8_t LineEnd, uint8_t LineColor, float Duration, float Thickness) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugLine_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LineStart = LineStart;
    Parms.LineEnd = LineEnd;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    Parms.Thickness = Thickness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugFrustum
void KismetSystemLibrary::DrawDebugFrustum(class UObject* WorldContextObject, uint8_t FrustumTransform, uint8_t FrustumColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugFrustum_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.FrustumTransform = FrustumTransform;
    Parms.FrustumColor = FrustumColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform
void KismetSystemLibrary::DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, uint8_t FloatHistory, uint8_t DrawTransform, uint8_t DrawSize, uint8_t DrawColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugFloatHistoryTransform_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.FloatHistory = FloatHistory;
    Parms.DrawTransform = DrawTransform;
    Parms.DrawSize = DrawSize;
    Parms.DrawColor = DrawColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation
void KismetSystemLibrary::DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, uint8_t FloatHistory, uint8_t DrawLocation, uint8_t DrawSize, uint8_t DrawColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugFloatHistoryLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.FloatHistory = FloatHistory;
    Parms.DrawLocation = DrawLocation;
    Parms.DrawSize = DrawSize;
    Parms.DrawColor = DrawColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugCylinder
void KismetSystemLibrary::DrawDebugCylinder(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, int32_t Segments, uint8_t LineColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugCylinder_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.Segments = Segments;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugCoordinateSystem
void KismetSystemLibrary::DrawDebugCoordinateSystem(class UObject* WorldContextObject, uint8_t AxisLoc, uint8_t AxisRot, float Scale, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugCoordinateSystem_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.AxisLoc = AxisLoc;
    Parms.AxisRot = AxisRot;
    Parms.Scale = Scale;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugConeInDegrees
void KismetSystemLibrary::DrawDebugConeInDegrees(class UObject* WorldContextObject, uint8_t Origin, uint8_t Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, uint8_t LineColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugConeInDegrees_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Origin = Origin;
    Parms.Direction = Direction;
    Parms.Length = Length;
    Parms.AngleWidth = AngleWidth;
    Parms.AngleHeight = AngleHeight;
    Parms.NumSides = NumSides;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugCone
void KismetSystemLibrary::DrawDebugCone(class UObject* WorldContextObject, uint8_t Origin, uint8_t Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, uint8_t LineColor) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugCone_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Origin = Origin;
    Parms.Direction = Direction;
    Parms.Length = Length;
    Parms.AngleWidth = AngleWidth;
    Parms.AngleHeight = AngleHeight;
    Parms.NumSides = NumSides;
    Parms.LineColor = LineColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugCircle
void KismetSystemLibrary::DrawDebugCircle(class UObject* WorldContextObject, uint8_t Center, float Radius, int32_t NumSegments, uint8_t LineColor, float Duration, float Thickness, uint8_t YAxis, uint8_t ZAxis, bool bDrawAxis) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugCircle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Center = Center;
    Parms.Radius = Radius;
    Parms.NumSegments = NumSegments;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    Parms.Thickness = Thickness;
    Parms.YAxis = YAxis;
    Parms.ZAxis = ZAxis;
    Parms.bDrawAxis = bDrawAxis;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugCapsule
void KismetSystemLibrary::DrawDebugCapsule(class UObject* WorldContextObject, uint8_t Center, float HalfHeight, float Radius, uint8_t Rotation, uint8_t LineColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugCapsule_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Center = Center;
    Parms.HalfHeight = HalfHeight;
    Parms.Radius = Radius;
    Parms.Rotation = Rotation;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugCamera
void KismetSystemLibrary::DrawDebugCamera(class UObject* CameraActor, uint8_t CameraColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugCamera_Params Parms{};
    Parms.CameraActor = CameraActor;
    Parms.CameraColor = CameraColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugBox
void KismetSystemLibrary::DrawDebugBox(class UObject* WorldContextObject, uint8_t Center, uint8_t Extent, uint8_t LineColor, uint8_t Rotation, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugBox_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Center = Center;
    Parms.Extent = Extent;
    Parms.LineColor = LineColor;
    Parms.Rotation = Rotation;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DrawDebugArrow
void KismetSystemLibrary::DrawDebugArrow(class UObject* WorldContextObject, uint8_t LineStart, uint8_t LineEnd, float ArrowSize, uint8_t LineColor, float Duration) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DrawDebugArrow_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LineStart = LineStart;
    Parms.LineEnd = LineEnd;
    Parms.ArrowSize = ArrowSize;
    Parms.LineColor = LineColor;
    Parms.Duration = Duration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.DoesImplementInterface
bool KismetSystemLibrary::DoesImplementInterface(class UObject* TestObject, class UClass* Interface) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_DoesImplementInterface_Params Parms{};
    Parms.TestObject = TestObject;
    Parms.Interface = Interface;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.Delay
void KismetSystemLibrary::Delay(class UObject* WorldContextObject, float Duration, uint8_t LatentInfo) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_Delay_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Duration = Duration;
    Parms.LatentInfo = LatentInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.CreateCopyForUndoBuffer
void KismetSystemLibrary::CreateCopyForUndoBuffer(class UObject* ObjectToModify) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CreateCopyForUndoBuffer_Params Parms{};
    Parms.ObjectToModify = ObjectToModify;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.Conv_InterfaceToObject
class UObject* KismetSystemLibrary::Conv_InterfaceToObject(uint8_t Interface) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_Conv_InterfaceToObject_Params Parms{};
    Parms.Interface = Interface;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.Conv_AssetToObject
class UObject* KismetSystemLibrary::Conv_AssetToObject(uint8_t Asset) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_Conv_AssetToObject_Params Parms{};
    Parms.Asset = Asset;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.Conv_AssetClassToClass
class UClass* KismetSystemLibrary::Conv_AssetClassToClass(uint8_t AssetClass) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_Conv_AssetClassToClass_Params Parms{};
    Parms.AssetClass = AssetClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.ControlScreensaver
void KismetSystemLibrary::ControlScreensaver(bool bAllowScreenSaver) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ControlScreensaver_Params Parms{};
    Parms.bAllowScreenSaver = bAllowScreenSaver;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.ComponentOverlapComponents_NEW
bool KismetSystemLibrary::ComponentOverlapComponents_NEW(class UObject* Component, uint8_t ComponentTransform, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ComponentOverlapComponents_NEW_Params Parms{};
    Parms.Component = Component;
    Parms.ComponentTransform = ComponentTransform;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.ComponentOverlapComponents_DEPRECATED
bool KismetSystemLibrary::ComponentOverlapComponents_DEPRECATED(class UObject* Component, uint8_t ComponentTransform, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ComponentOverlapComponents_DEPRECATED_Params Parms{};
    Parms.Component = Component;
    Parms.ComponentTransform = ComponentTransform;
    Parms.Filter = Filter;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.ComponentOverlapActors_NEW
bool KismetSystemLibrary::ComponentOverlapActors_NEW(class UObject* Component, uint8_t ComponentTransform, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ComponentOverlapActors_NEW_Params Parms{};
    Parms.Component = Component;
    Parms.ComponentTransform = ComponentTransform;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.ComponentOverlapActors_DEPRECATED
bool KismetSystemLibrary::ComponentOverlapActors_DEPRECATED(class UObject* Component, uint8_t ComponentTransform, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_ComponentOverlapActors_DEPRECATED_Params Parms{};
    Parms.Component = Component;
    Parms.ComponentTransform = ComponentTransform;
    Parms.Filter = Filter;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CollectGarbage
void KismetSystemLibrary::CollectGarbage() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects
bool KismetSystemLibrary::CapsuleTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceSingleForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingleByObject_DEPRECATED
bool KismetSystemLibrary::CapsuleTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceSingleByObject_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.ObjectsToTrace = ObjectsToTrace;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingle_NEW
bool KismetSystemLibrary::CapsuleTraceSingle_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceSingle_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceSingle_DEPRECATED
bool KismetSystemLibrary::CapsuleTraceSingle_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceSingle_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects
bool KismetSystemLibrary::CapsuleTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceMultiForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceMultiByObject_DEPRECATED
bool KismetSystemLibrary::CapsuleTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectsToTrace, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceMultiByObject_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.ObjectsToTrace = ObjectsToTrace;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceMulti_NEW
bool KismetSystemLibrary::CapsuleTraceMulti_NEW(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceMulti_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleTraceMulti_DEPRECATED
bool KismetSystemLibrary::CapsuleTraceMulti_DEPRECATED(class UObject* WorldContextObject, uint8_t Start, uint8_t End, float Radius, float HalfHeight, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleTraceMulti_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleOverlapComponents_NEW
bool KismetSystemLibrary::CapsuleOverlapComponents_NEW(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleOverlapComponents_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.CapsulePos = CapsulePos;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleOverlapComponents_DEPRECATED
bool KismetSystemLibrary::CapsuleOverlapComponents_DEPRECATED(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleOverlapComponents_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.CapsulePos = CapsulePos;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.Filter = Filter;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleOverlapActors_NEW
bool KismetSystemLibrary::CapsuleOverlapActors_NEW(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleOverlapActors_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.CapsulePos = CapsulePos;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CapsuleOverlapActors_DEPRECATED
bool KismetSystemLibrary::CapsuleOverlapActors_DEPRECATED(class UObject* WorldContextObject, uint8_t CapsulePos, float Radius, float HalfHeight, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CapsuleOverlapActors_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.CapsulePos = CapsulePos;
    Parms.Radius = Radius;
    Parms.HalfHeight = HalfHeight;
    Parms.Filter = Filter;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.CanLaunchURL
bool KismetSystemLibrary::CanLaunchURL(struct FString URL) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_CanLaunchURL_Params Parms{};
    Parms.URL = URL;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxTraceSingleForObjects
bool KismetSystemLibrary::BoxTraceSingleForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxTraceSingleForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.HalfSize = HalfSize;
    Parms.Orientation = Orientation;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxTraceSingle
bool KismetSystemLibrary::BoxTraceSingle(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, uint8_t OutHit, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxTraceSingle_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.HalfSize = HalfSize;
    Parms.Orientation = Orientation;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHit = OutHit;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxTraceMultiForObjects
bool KismetSystemLibrary::BoxTraceMultiForObjects(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, struct TArray<uint8_t> ObjectTypes, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxTraceMultiForObjects_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.HalfSize = HalfSize;
    Parms.Orientation = Orientation;
    Parms.ObjectTypes = ObjectTypes;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxTraceMulti
bool KismetSystemLibrary::BoxTraceMulti(class UObject* WorldContextObject, uint8_t Start, uint8_t End, uint8_t HalfSize, uint8_t Orientation, uint8_t TraceChannel, bool bTraceComplex, struct TArray<uint8_t> ActorsToIgnore, uint8_t DrawDebugType, struct TArray<uint8_t> OutHits, bool bIgnoreSelf) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxTraceMulti_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Start = Start;
    Parms.End = End;
    Parms.HalfSize = HalfSize;
    Parms.Orientation = Orientation;
    Parms.TraceChannel = TraceChannel;
    Parms.bTraceComplex = bTraceComplex;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.DrawDebugType = DrawDebugType;
    Parms.OutHits = OutHits;
    Parms.bIgnoreSelf = bIgnoreSelf;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxOverlapComponents_NEW
bool KismetSystemLibrary::BoxOverlapComponents_NEW(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t Extent, struct TArray<uint8_t> ObjectTypes, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxOverlapComponents_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BoxPos = BoxPos;
    Parms.Extent = Extent;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxOverlapComponents_DEPRECATED
bool KismetSystemLibrary::BoxOverlapComponents_DEPRECATED(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t Extent, uint8_t Filter, class UClass* ComponentClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutComponents) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxOverlapComponents_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BoxPos = BoxPos;
    Parms.Extent = Extent;
    Parms.Filter = Filter;
    Parms.ComponentClassFilter = ComponentClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutComponents = OutComponents;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxOverlapActors_NEW
bool KismetSystemLibrary::BoxOverlapActors_NEW(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t BoxExtent, struct TArray<uint8_t> ObjectTypes, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxOverlapActors_NEW_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BoxPos = BoxPos;
    Parms.BoxExtent = BoxExtent;
    Parms.ObjectTypes = ObjectTypes;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BoxOverlapActors_DEPRECATED
bool KismetSystemLibrary::BoxOverlapActors_DEPRECATED(class UObject* WorldContextObject, uint8_t BoxPos, uint8_t BoxExtent, uint8_t Filter, class UClass* ActorClassFilter, struct TArray<uint8_t> ActorsToIgnore, struct TArray<uint8_t> OutActors) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BoxOverlapActors_DEPRECATED_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BoxPos = BoxPos;
    Parms.BoxExtent = BoxExtent;
    Parms.Filter = Filter;
    Parms.ActorClassFilter = ActorClassFilter;
    Parms.ActorsToIgnore = ActorsToIgnore;
    Parms.OutActors = OutActors;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.BendSaveStringToFile
void KismetSystemLibrary::BendSaveStringToFile(struct FString FilePath, struct FString FileName, struct FString InString, bool Append) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BendSaveStringToFile_Params Parms{};
    Parms.FilePath = FilePath;
    Parms.FileName = FileName;
    Parms.InString = InString;
    Parms.Append = Append;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.KismetSystemLibrary.BendLoadFileToString
struct FString KismetSystemLibrary::BendLoadFileToString(struct FString FilePath, struct FString FileName) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_BendLoadFileToString_Params Parms{};
    Parms.FilePath = FilePath;
    Parms.FileName = FileName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetSystemLibrary.AddFloatHistorySample
uint8_t KismetSystemLibrary::AddFloatHistorySample(float Value, uint8_t FloatHistory) {
    static class UFunction* Func = nullptr;
    KismetSystemLibrary_AddFloatHistorySample_Params Parms{};
    Parms.Value = Value;
    Parms.FloatHistory = FloatHistory;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextTrimTrailing
struct FText KismetTextLibrary::TextTrimTrailing(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextTrimTrailing_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing
struct FText KismetTextLibrary::TextTrimPrecedingAndTrailing(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextTrimPrecedingAndTrailing_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextTrimPreceding
struct FText KismetTextLibrary::TextTrimPreceding(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextTrimPreceding_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextToUpper
struct FText KismetTextLibrary::TextToUpper(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextToUpper_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextToLower
struct FText KismetTextLibrary::TextToLower(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextToLower_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextIsTransient
bool KismetTextLibrary::TextIsTransient(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextIsTransient_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextIsEmpty
bool KismetTextLibrary::TextIsEmpty(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextIsEmpty_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextIsCultureInvariant
bool KismetTextLibrary::TextIsCultureInvariant(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextIsCultureInvariant_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.TextGetSourceString
struct FString KismetTextLibrary::TextGetSourceString(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_TextGetSourceString_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.NotEqual_TextText
bool KismetTextLibrary::NotEqual_TextText(struct FText A, struct FText B) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_NotEqual_TextText_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText
bool KismetTextLibrary::NotEqual_IgnoreCase_TextText(struct FText A, struct FText B) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_NotEqual_IgnoreCase_TextText_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.GetEmptyText
struct FText KismetTextLibrary::GetEmptyText() {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_GetEmptyText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Format
struct FText KismetTextLibrary::Format(struct FText InPattern, struct TArray<uint8_t> InArgs) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Format_Params Parms{};
    Parms.InPattern = InPattern;
    Parms.InArgs = InArgs;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.FindTextInLocalizationTable
bool KismetTextLibrary::FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText OutText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_FindTextInLocalizationTable_Params Parms{};
    Parms.Namespace = Namespace;
    Parms.Key = Key;
    Parms.OutText = OutText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.EqualEqual_TextText
bool KismetTextLibrary::EqualEqual_TextText(struct FText A, struct FText B) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_EqualEqual_TextText_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText
bool KismetTextLibrary::EqualEqual_IgnoreCase_TextText(struct FText A, struct FText B) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_EqualEqual_IgnoreCase_TextText_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.CreateTextInLocalizationTable
struct FText KismetTextLibrary::CreateTextInLocalizationTable(struct FString SourceString, struct FString Namespace, struct FString Key) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_CreateTextInLocalizationTable_Params Parms{};
    Parms.SourceString = SourceString;
    Parms.Namespace = Namespace;
    Parms.Key = Key;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_TextToString
struct FString KismetTextLibrary::Conv_TextToString(struct FText InText) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_TextToString_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_StringToText
struct FText KismetTextLibrary::Conv_StringToText(struct FString InString) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_StringToText_Params Parms{};
    Parms.InString = InString;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_NameToText
struct FText KismetTextLibrary::Conv_NameToText(struct FName InName) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_NameToText_Params Parms{};
    Parms.InName = InName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_IntToText
struct FText KismetTextLibrary::Conv_IntToText(int32_t Value, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_IntToText_Params Parms{};
    Parms.Value = Value;
    Parms.bUseGrouping = bUseGrouping;
    Parms.MinimumIntegralDigits = MinimumIntegralDigits;
    Parms.MaximumIntegralDigits = MaximumIntegralDigits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_FloatToText
struct FText KismetTextLibrary::Conv_FloatToText(float Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_FloatToText_Params Parms{};
    Parms.Value = Value;
    Parms.RoundingMode = RoundingMode;
    Parms.bUseGrouping = bUseGrouping;
    Parms.MinimumIntegralDigits = MinimumIntegralDigits;
    Parms.MaximumIntegralDigits = MaximumIntegralDigits;
    Parms.MinimumFractionalDigits = MinimumFractionalDigits;
    Parms.MaximumFractionalDigits = MaximumFractionalDigits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_ByteToText
struct FText KismetTextLibrary::Conv_ByteToText(uint8_t Value) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_ByteToText_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.Conv_BoolToText
struct FText KismetTextLibrary::Conv_BoolToText(bool InBool) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_Conv_BoolToText_Params Parms{};
    Parms.InBool = InBool;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsTimespan_Timespan
struct FText KismetTextLibrary::AsTimespan_Timespan(uint8_t InTimespan) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsTimespan_Timespan_Params Parms{};
    Parms.InTimespan = InTimespan;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsTime_DateTime
struct FText KismetTextLibrary::AsTime_DateTime(uint8_t In) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsTime_DateTime_Params Parms{};
    Parms.In = In;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsPercent_Float
struct FText KismetTextLibrary::AsPercent_Float(float Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsPercent_Float_Params Parms{};
    Parms.Value = Value;
    Parms.RoundingMode = RoundingMode;
    Parms.bUseGrouping = bUseGrouping;
    Parms.MinimumIntegralDigits = MinimumIntegralDigits;
    Parms.MaximumIntegralDigits = MaximumIntegralDigits;
    Parms.MinimumFractionalDigits = MinimumFractionalDigits;
    Parms.MaximumFractionalDigits = MaximumFractionalDigits;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsDateTime_DateTime
struct FText KismetTextLibrary::AsDateTime_DateTime(uint8_t In) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsDateTime_DateTime_Params Parms{};
    Parms.In = In;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsDate_DateTime
struct FText KismetTextLibrary::AsDate_DateTime(uint8_t InDateTime) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsDate_DateTime_Params Parms{};
    Parms.InDateTime = InDateTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsCurrency_Integer
struct FText KismetTextLibrary::AsCurrency_Integer(int32_t Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsCurrency_Integer_Params Parms{};
    Parms.Value = Value;
    Parms.RoundingMode = RoundingMode;
    Parms.bUseGrouping = bUseGrouping;
    Parms.MinimumIntegralDigits = MinimumIntegralDigits;
    Parms.MaximumIntegralDigits = MaximumIntegralDigits;
    Parms.MinimumFractionalDigits = MinimumFractionalDigits;
    Parms.MaximumFractionalDigits = MaximumFractionalDigits;
    Parms.CurrencyCode = CurrencyCode;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.KismetTextLibrary.AsCurrency_Float
struct FText KismetTextLibrary::AsCurrency_Float(float Value, uint8_t RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode) {
    static class UFunction* Func = nullptr;
    KismetTextLibrary_AsCurrency_Float_Params Parms{};
    Parms.Value = Value;
    Parms.RoundingMode = RoundingMode;
    Parms.bUseGrouping = bUseGrouping;
    Parms.MinimumIntegralDigits = MinimumIntegralDigits;
    Parms.MaximumIntegralDigits = MaximumIntegralDigits;
    Parms.MinimumFractionalDigits = MinimumFractionalDigits;
    Parms.MaximumFractionalDigits = MaximumFractionalDigits;
    Parms.CurrencyCode = CurrencyCode;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices
void MeshVertexPainterKismetLibrary::RemovePaintedVertices(class UObject* StaticMeshComponent) {
    static class UFunction* Func = nullptr;
    MeshVertexPainterKismetLibrary_RemovePaintedVertices_Params Parms{};
    Parms.StaticMeshComponent = StaticMeshComponent;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor
void MeshVertexPainterKismetLibrary::PaintVerticesSingleColor(class UObject* StaticMeshComponent, uint8_t FillColor, bool bConvertToSRGB) {
    static class UFunction* Func = nullptr;
    MeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Params Parms{};
    Parms.StaticMeshComponent = StaticMeshComponent;
    Parms.FillColor = FillColor;
    Parms.bConvertToSRGB = bConvertToSRGB;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis
void MeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(class UObject* StaticMeshComponent, uint8_t StartColor, uint8_t EndColor, uint8_t Axis, bool bConvertToSRGB) {
    static class UFunction* Func = nullptr;
    MeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Params Parms{};
    Parms.StaticMeshComponent = StaticMeshComponent;
    Parms.StartColor = StartColor;
    Parms.EndColor = EndColor;
    Parms.Axis = Axis;
    Parms.bConvertToSRGB = bConvertToSRGB;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.VisualLoggerKismetLibrary.LogTextBend
void VisualLoggerKismetLibrary::LogTextBend(class UObject* WorldContextObject, struct FString Text, struct FName LogCategory) {
    static class UFunction* Func = nullptr;
    VisualLoggerKismetLibrary_LogTextBend_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Text = Text;
    Parms.LogCategory = LogCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.VisualLoggerKismetLibrary.LogText
void VisualLoggerKismetLibrary::LogText(class UObject* WorldContextObject, struct FString Text, struct FName LogCategory) {
    static class UFunction* Func = nullptr;
    VisualLoggerKismetLibrary_LogText_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Text = Text;
    Parms.LogCategory = LogCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.VisualLoggerKismetLibrary.LogLocation
void VisualLoggerKismetLibrary::LogLocation(class UObject* WorldContextObject, uint8_t Location, struct FString Text, uint8_t ObjectColor, float Radius, struct FName LogCategory) {
    static class UFunction* Func = nullptr;
    VisualLoggerKismetLibrary_LogLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Location = Location;
    Parms.Text = Text;
    Parms.ObjectColor = ObjectColor;
    Parms.Radius = Radius;
    Parms.LogCategory = LogCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.VisualLoggerKismetLibrary.LogBox
void VisualLoggerKismetLibrary::LogBox(class UObject* WorldContextObject, uint8_t BoxShape, struct FString Text, uint8_t ObjectColor, struct FName LogCategory) {
    static class UFunction* Func = nullptr;
    VisualLoggerKismetLibrary_LogBox_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.BoxShape = BoxShape;
    Parms.Text = Text;
    Parms.ObjectColor = ObjectColor;
    Parms.LogCategory = LogCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraAnimInst.Stop
void CameraAnimInst::Stop(bool bImmediate) {
    static class UFunction* Func = nullptr;
    CameraAnimInst_Stop_Params Parms{};
    Parms.bImmediate = bImmediate;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraAnimInst.SetScale
void CameraAnimInst::SetScale(float newDuration) {
    static class UFunction* Func = nullptr;
    CameraAnimInst_SetScale_Params Parms{};
    Parms.newDuration = newDuration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraAnimInst.SetDuration
void CameraAnimInst::SetDuration(float newDuration) {
    static class UFunction* Func = nullptr;
    CameraAnimInst_SetDuration_Params Parms{};
    Parms.newDuration = newDuration;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier_CameraFocusActor.SetPostProcessSettingsDefault
void CameraModifier_CameraFocusActor::SetPostProcessSettingsDefault(uint8_t PostProcessSettings) {
    static class UFunction* Func = nullptr;
    CameraModifier_CameraFocusActor_SetPostProcessSettingsDefault_Params Parms{};
    Parms.PostProcessSettings = PostProcessSettings;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier_CameraFocusActor.SetFStop
void CameraModifier_CameraFocusActor::SetFStop(float FStopIn) {
    static class UFunction* Func = nullptr;
    CameraModifier_CameraFocusActor_SetFStop_Params Parms{};
    Parms.FStopIn = FStopIn;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier_CameraFocusActor.SetFOV
void CameraModifier_CameraFocusActor::SetFOV(float FOVIn) {
    static class UFunction* Func = nullptr;
    CameraModifier_CameraFocusActor_SetFOV_Params Parms{};
    Parms.FOVIn = FOVIn;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier_CameraFocusActor.RemoveFocusActor
void CameraModifier_CameraFocusActor::RemoveFocusActor(class UObject* SkelMesh) {
    static class UFunction* Func = nullptr;
    CameraModifier_CameraFocusActor_RemoveFocusActor_Params Parms{};
    Parms.SkelMesh = SkelMesh;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CameraModifier_CameraFocusActor.ClearFocusActors
void CameraModifier_CameraFocusActor::ClearFocusActors() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CameraModifier_CameraFocusActor.AddFocusActor
void CameraModifier_CameraFocusActor::AddFocusActor(class UObject* SkelMesh, struct FName BoneName) {
    static class UFunction* Func = nullptr;
    CameraModifier_CameraFocusActor_AddFocusActor_Params Parms{};
    Parms.SkelMesh = SkelMesh;
    Parms.BoneName = BoneName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_TextSize
uint8_t Canvas::K2_TextSize(class UObject* RenderFont, struct FString RenderText, uint8_t Scale) {
    static class UFunction* Func = nullptr;
    Canvas_K2_TextSize_Params Parms{};
    Parms.RenderFont = RenderFont;
    Parms.RenderText = RenderText;
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Canvas.K2_StrLen
uint8_t Canvas::K2_StrLen(class UObject* RenderFont, struct FString RenderText) {
    static class UFunction* Func = nullptr;
    Canvas_K2_StrLen_Params Parms{};
    Parms.RenderFont = RenderFont;
    Parms.RenderText = RenderText;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Canvas.K2_Project
uint8_t Canvas::K2_Project(uint8_t WorldLocation) {
    static class UFunction* Func = nullptr;
    Canvas_K2_Project_Params Parms{};
    Parms.WorldLocation = WorldLocation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Canvas.K2_DrawTriangle
void Canvas::K2_DrawTriangle(class UObject* RenderTexture, struct TArray<uint8_t> Triangles) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawTriangle_Params Parms{};
    Parms.RenderTexture = RenderTexture;
    Parms.Triangles = Triangles;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawTexture
void Canvas::K2_DrawTexture(class UObject* RenderTexture, uint8_t ScreenPosition, uint8_t ScreenSize, uint8_t CoordinatePosition, uint8_t CoordinateSize, uint8_t RenderColor, uint8_t BlendMode, float Rotation, uint8_t PivotPoint) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawTexture_Params Parms{};
    Parms.RenderTexture = RenderTexture;
    Parms.ScreenPosition = ScreenPosition;
    Parms.ScreenSize = ScreenSize;
    Parms.CoordinatePosition = CoordinatePosition;
    Parms.CoordinateSize = CoordinateSize;
    Parms.RenderColor = RenderColor;
    Parms.BlendMode = BlendMode;
    Parms.Rotation = Rotation;
    Parms.PivotPoint = PivotPoint;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawText
void Canvas::K2_DrawText(class UObject* RenderFont, struct FString RenderText, uint8_t ScreenPosition, uint8_t RenderColor, float Kerning, uint8_t ShadowColor, uint8_t ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, uint8_t OutlineColor) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawText_Params Parms{};
    Parms.RenderFont = RenderFont;
    Parms.RenderText = RenderText;
    Parms.ScreenPosition = ScreenPosition;
    Parms.RenderColor = RenderColor;
    Parms.Kerning = Kerning;
    Parms.ShadowColor = ShadowColor;
    Parms.ShadowOffset = ShadowOffset;
    Parms.bCentreX = bCentreX;
    Parms.bCentreY = bCentreY;
    Parms.bOutlined = bOutlined;
    Parms.OutlineColor = OutlineColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawPolygon
void Canvas::K2_DrawPolygon(class UObject* RenderTexture, uint8_t ScreenPosition, uint8_t Radius, int32_t NumberOfSides, uint8_t RenderColor) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawPolygon_Params Parms{};
    Parms.RenderTexture = RenderTexture;
    Parms.ScreenPosition = ScreenPosition;
    Parms.Radius = Radius;
    Parms.NumberOfSides = NumberOfSides;
    Parms.RenderColor = RenderColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawMaterialTriangle
void Canvas::K2_DrawMaterialTriangle(class UObject* RenderMaterial, struct TArray<uint8_t> Triangles) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawMaterialTriangle_Params Parms{};
    Parms.RenderMaterial = RenderMaterial;
    Parms.Triangles = Triangles;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawMaterial
void Canvas::K2_DrawMaterial(class UObject* RenderMaterial, uint8_t ScreenPosition, uint8_t ScreenSize, uint8_t CoordinatePosition, uint8_t CoordinateSize, float Rotation, uint8_t PivotPoint) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawMaterial_Params Parms{};
    Parms.RenderMaterial = RenderMaterial;
    Parms.ScreenPosition = ScreenPosition;
    Parms.ScreenSize = ScreenSize;
    Parms.CoordinatePosition = CoordinatePosition;
    Parms.CoordinateSize = CoordinateSize;
    Parms.Rotation = Rotation;
    Parms.PivotPoint = PivotPoint;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawLine
void Canvas::K2_DrawLine(uint8_t ScreenPositionA, uint8_t ScreenPositionB, float Thickness, uint8_t RenderColor) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawLine_Params Parms{};
    Parms.ScreenPositionA = ScreenPositionA;
    Parms.ScreenPositionB = ScreenPositionB;
    Parms.Thickness = Thickness;
    Parms.RenderColor = RenderColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawBox
void Canvas::K2_DrawBox(uint8_t ScreenPosition, uint8_t ScreenSize, float Thickness) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawBox_Params Parms{};
    Parms.ScreenPosition = ScreenPosition;
    Parms.ScreenSize = ScreenSize;
    Parms.Thickness = Thickness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_DrawBorder
void Canvas::K2_DrawBorder(class UObject* BorderTexture, class UObject* BackgroundTexture, class UObject* LeftBorderTexture, class UObject* RightBorderTexture, class UObject* TopBorderTexture, class UObject* BottomBorderTexture, uint8_t ScreenPosition, uint8_t ScreenSize, uint8_t CoordinatePosition, uint8_t CoordinateSize, uint8_t RenderColor, uint8_t BorderScale, uint8_t BackgroundScale, float Rotation, uint8_t PivotPoint, uint8_t CornerSize) {
    static class UFunction* Func = nullptr;
    Canvas_K2_DrawBorder_Params Parms{};
    Parms.BorderTexture = BorderTexture;
    Parms.BackgroundTexture = BackgroundTexture;
    Parms.LeftBorderTexture = LeftBorderTexture;
    Parms.RightBorderTexture = RightBorderTexture;
    Parms.TopBorderTexture = TopBorderTexture;
    Parms.BottomBorderTexture = BottomBorderTexture;
    Parms.ScreenPosition = ScreenPosition;
    Parms.ScreenSize = ScreenSize;
    Parms.CoordinatePosition = CoordinatePosition;
    Parms.CoordinateSize = CoordinateSize;
    Parms.RenderColor = RenderColor;
    Parms.BorderScale = BorderScale;
    Parms.BackgroundScale = BackgroundScale;
    Parms.Rotation = Rotation;
    Parms.PivotPoint = PivotPoint;
    Parms.CornerSize = CornerSize;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.Canvas.K2_Deproject
void Canvas::K2_Deproject(uint8_t ScreenPosition, uint8_t WorldOrigin, uint8_t WorldDirection) {
    static class UFunction* Func = nullptr;
    Canvas_K2_Deproject_Params Parms{};
    Parms.ScreenPosition = ScreenPosition;
    Parms.WorldOrigin = WorldOrigin;
    Parms.WorldDirection = WorldDirection;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameViewportClient.SSSwapControllers
void GameViewportClient::SSSwapControllers() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameViewportClient.ShowTitleSafeArea
void GameViewportClient::ShowTitleSafeArea() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameViewportClient.SetConsoleTarget
void GameViewportClient::SetConsoleTarget(int32_t PlayerIndex) {
    static class UFunction* Func = nullptr;
    GameViewportClient_SetConsoleTarget_Params Parms{};
    Parms.PlayerIndex = PlayerIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CurveLinearColor.GetLinearColorValue
uint8_t CurveLinearColor::GetLinearColorValue(float InTime) {
    static class UFunction* Func = nullptr;
    CurveLinearColor_GetLinearColorValue_Params Parms{};
    Parms.InTime = InTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CurveVector.GetVectorValue
uint8_t CurveVector::GetVectorValue(float InTime) {
    static class UFunction* Func = nullptr;
    CurveVector_GetVectorValue_Params Parms{};
    Parms.InTime = InTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TireType.GetTopSpeed
float TireType::GetTopSpeed() {
    static class UFunction* Func = nullptr;
    TireType_GetTopSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TireType.GetFrictionScale
float TireType::GetFrictionScale() {
    static class UFunction* Func = nullptr;
    TireType_GetFrictionScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlayerInput.SetMouseSensitivity
void PlayerInput::SetMouseSensitivity(float Sensitivity) {
    static class UFunction* Func = nullptr;
    PlayerInput_SetMouseSensitivity_Params Parms{};
    Parms.Sensitivity = Sensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerInput.SetBind
void PlayerInput::SetBind(struct FName BindName, struct FString Command) {
    static class UFunction* Func = nullptr;
    PlayerInput_SetBind_Params Parms{};
    Parms.BindName = BindName;
    Parms.Command = Command;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerInput.InvertAxisKey
void PlayerInput::InvertAxisKey(uint8_t AxisKey) {
    static class UFunction* Func = nullptr;
    PlayerInput_InvertAxisKey_Params Parms{};
    Parms.AxisKey = AxisKey;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerInput.InvertAxis
void PlayerInput::InvertAxis(struct FName AxisName) {
    static class UFunction* Func = nullptr;
    PlayerInput_InvertAxis_Params Parms{};
    Parms.AxisName = AxisName;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.PlayerInput.ClearSmoothing
void PlayerInput::ClearSmoothing() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ValidateSettings
void GameUserSettings::ValidateSettings() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.UpdateHCMMaterialParameters
void GameUserSettings::UpdateHCMMaterialParameters() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.SetXPIndicatorsEnabled
void GameUserSettings::SetXPIndicatorsEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetXPIndicatorsEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetWeaponSelectionPreviewMode
void GameUserSettings::SetWeaponSelectionPreviewMode(int32_t InPreviewMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetWeaponSelectionPreviewMode_Params Parms{};
    Parms.InPreviewMode = InPreviewMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetVSyncEnabled
void GameUserSettings::SetVSyncEnabled(bool bEnable) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetVSyncEnabled_Params Parms{};
    Parms.bEnable = bEnable;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetVisualPreset
void GameUserSettings::SetVisualPreset(int32_t InVisualPreset) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetVisualPreset_Params Parms{};
    Parms.InVisualPreset = InVisualPreset;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetVisualEffectQuality
void GameUserSettings::SetVisualEffectQuality(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetVisualEffectQuality_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetViewDistanceQuality
void GameUserSettings::SetViewDistanceQuality(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetViewDistanceQuality_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetVibrationEnabled
void GameUserSettings::SetVibrationEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetVibrationEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetVehicleCameraTrackingEnabled
void GameUserSettings::SetVehicleCameraTrackingEnabled(bool bEnableCameraTracking) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetVehicleCameraTrackingEnabled_Params Parms{};
    Parms.bEnableCameraTracking = bEnableCameraTracking;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetUINarrationOn
void GameUserSettings::SetUINarrationOn(bool InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetUINarrationOn_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetTrackAssistEnabled
void GameUserSettings::SetTrackAssistEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetTrackAssistEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetToDefaults
void GameUserSettings::SetToDefaults() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.SetTextureStreamingQuality
void GameUserSettings::SetTextureStreamingQuality(int32_t InTextureStreamingQuality) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetTextureStreamingQuality_Params Parms{};
    Parms.InTextureStreamingQuality = InTextureStreamingQuality;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetTextureQuality
void GameUserSettings::SetTextureQuality(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetTextureQuality_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetTextureFilterQuality
void GameUserSettings::SetTextureFilterQuality(int32_t InTextureFilterQuality) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetTextureFilterQuality_Params Parms{};
    Parms.InTextureFilterQuality = InTextureFilterQuality;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetTelemetryEnabled
void GameUserSettings::SetTelemetryEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetTelemetryEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSyncInterval
void GameUserSettings::SetSyncInterval(int32_t InSyncInterval) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSyncInterval_Params Parms{};
    Parms.InSyncInterval = InSyncInterval;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSwipeVerticalDeadzoneBuffer
void GameUserSettings::SetSwipeVerticalDeadzoneBuffer(float InDeadzoneBuffer) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSwipeVerticalDeadzoneBuffer_Params Parms{};
    Parms.InDeadzoneBuffer = InDeadzoneBuffer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSwipeVerticalDeadzone
void GameUserSettings::SetSwipeVerticalDeadzone(float InDeadzone) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSwipeVerticalDeadzone_Params Parms{};
    Parms.InDeadzone = InDeadzone;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSwipeLength
void GameUserSettings::SetSwipeLength(int32_t InSwipeLength) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSwipeLength_Params Parms{};
    Parms.InSwipeLength = InSwipeLength;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSwipeHorizontalDeadzoneBuffer
void GameUserSettings::SetSwipeHorizontalDeadzoneBuffer(float InDeadzoneBuffer) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSwipeHorizontalDeadzoneBuffer_Params Parms{};
    Parms.InDeadzoneBuffer = InDeadzoneBuffer;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSwipeHorizontalDeadzone
void GameUserSettings::SetSwipeHorizontalDeadzone(float InDeadzone) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSwipeHorizontalDeadzone_Params Parms{};
    Parms.InDeadzone = InDeadzone;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSwipeControlsEnabled
void GameUserSettings::SetSwipeControlsEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSwipeControlsEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSurvivalWheelSmartScrollDelay
void GameUserSettings::SetSurvivalWheelSmartScrollDelay(float InSmartScrollDelay) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSurvivalWheelSmartScrollDelay_Params Parms{};
    Parms.InSmartScrollDelay = InSmartScrollDelay;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSurvivalWheelMouseMode
void GameUserSettings::SetSurvivalWheelMouseMode(int32_t InMouseMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSurvivalWheelMouseMode_Params Parms{};
    Parms.InMouseMode = InMouseMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSurvivalWheelMinimumItemWidth
void GameUserSettings::SetSurvivalWheelMinimumItemWidth(float InMinimumItemWidth) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSurvivalWheelMinimumItemWidth_Params Parms{};
    Parms.InMinimumItemWidth = InMinimumItemWidth;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSurvivalWheelMinimumExpansionWidth
void GameUserSettings::SetSurvivalWheelMinimumExpansionWidth(float InMinimumExpansionWidth) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSurvivalWheelMinimumExpansionWidth_Params Parms{};
    Parms.InMinimumExpansionWidth = InMinimumExpansionWidth;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSurvivalWheelDebugRenderingEnabled
void GameUserSettings::SetSurvivalWheelDebugRenderingEnabled(bool InToggleEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSurvivalWheelDebugRenderingEnabled_Params Parms{};
    Parms.InToggleEnabled = InToggleEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitleSize
void GameUserSettings::SetSubtitleSize(int32_t InSize) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitleSize_Params Parms{};
    Parms.InSize = InSize;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitlesEnabled
void GameUserSettings::SetSubtitlesEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitlesEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitleNamesEnabled
void GameUserSettings::SetSubtitleNamesEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitleNamesEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitleNameColor
void GameUserSettings::SetSubtitleNameColor(int32_t InColor) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitleNameColor_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitleLanguage
void GameUserSettings::SetSubtitleLanguage(int32_t InLanguage) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitleLanguage_Params Parms{};
    Parms.InLanguage = InLanguage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitleColor
void GameUserSettings::SetSubtitleColor(int32_t InColor) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitleColor_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSubtitleBackgroundOpacity
void GameUserSettings::SetSubtitleBackgroundOpacity(int32_t InOpacity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSubtitleBackgroundOpacity_Params Parms{};
    Parms.InOpacity = InOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSpeechVolume
void GameUserSettings::SetSpeechVolume(float InVolume) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSpeechVolume_Params Parms{};
    Parms.InVolume = InVolume;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetShadowQuality
void GameUserSettings::SetShadowQuality(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetShadowQuality_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetSfxVolume
void GameUserSettings::SetSfxVolume(float InVolume) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetSfxVolume_Params Parms{};
    Parms.InVolume = InVolume;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetScreenResolution
void GameUserSettings::SetScreenResolution(uint8_t Resolution) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetScreenResolution_Params Parms{};
    Parms.Resolution = Resolution;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetScalabilityProfile
void GameUserSettings::SetScalabilityProfile(float InRenderScale, int32_t InQualityLevel) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetScalabilityProfile_Params Parms{};
    Parms.InRenderScale = InRenderScale;
    Parms.InQualityLevel = InQualityLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetResolutionScaleValue
void GameUserSettings::SetResolutionScaleValue(int32_t NewScaleValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetResolutionScaleValue_Params Parms{};
    Parms.NewScaleValue = NewScaleValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetResolutionScaleNormalized
void GameUserSettings::SetResolutionScaleNormalized(float NewScaleNormalized) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetResolutionScaleNormalized_Params Parms{};
    Parms.NewScaleNormalized = NewScaleNormalized;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRepeatedButtonSize
void GameUserSettings::SetRepeatedButtonSize(int32_t InSize) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRepeatedButtonSize_Params Parms{};
    Parms.InSize = InSize;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRepeatedButtonHoldEnabled
void GameUserSettings::SetRepeatedButtonHoldEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRepeatedButtonHoldEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRenderScale
void GameUserSettings::SetRenderScale(float InRenderScale) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRenderScale_Params Parms{};
    Parms.InRenderScale = InRenderScale;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRememberScopeZoomEnabled
void GameUserSettings::SetRememberScopeZoomEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRememberScopeZoomEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRememberAimSideEnabled
void GameUserSettings::SetRememberAimSideEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRememberAimSideEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRefreshRate
void GameUserSettings::SetRefreshRate(int32_t InNumerator, int32_t InDenominator) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRefreshRate_Params Parms{};
    Parms.InNumerator = InNumerator;
    Parms.InDenominator = InDenominator;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetRecenterCameraOnAttack
void GameUserSettings::SetRecenterCameraOnAttack(bool InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetRecenterCameraOnAttack_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPSSREnabled
void GameUserSettings::SetPSSREnabled(bool InPSSREnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPSSREnabled_Params Parms{};
    Parms.InPSSREnabled = InPSSREnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPS5RenderMode
void GameUserSettings::SetPS5RenderMode(int32_t InPS5RenderMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPS5RenderMode_Params Parms{};
    Parms.InPS5RenderMode = InPS5RenderMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPostProcessingQuality
void GameUserSettings::SetPostProcessingQuality(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPostProcessingQuality_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPlayerCameraVerticalInverted
void GameUserSettings::SetPlayerCameraVerticalInverted(bool bInverted) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPlayerCameraVerticalInverted_Params Parms{};
    Parms.bInverted = bInverted;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPlayerCameraSensitivity
void GameUserSettings::SetPlayerCameraSensitivity(float InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPlayerCameraSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPlayerCameraHorizontalInverted
void GameUserSettings::SetPlayerCameraHorizontalInverted(bool bInverted) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPlayerCameraHorizontalInverted_Params Parms{};
    Parms.bInverted = bInverted;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetPersistentCenterDotEnabled
void GameUserSettings::SetPersistentCenterDotEnabled(bool InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetPersistentCenterDotEnabled_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetOverallScalabilityLevel
void GameUserSettings::SetOverallScalabilityLevel(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetOverallScalabilityLevel_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetMusicVolume
void GameUserSettings::SetMusicVolume(float InVolume) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetMusicVolume_Params Parms{};
    Parms.InVolume = InVolume;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetMotionControlAimSensitivity
void GameUserSettings::SetMotionControlAimSensitivity(float InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetMotionControlAimSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetMotionBlurEnabled
void GameUserSettings::SetMotionBlurEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetMotionBlurEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetLockMouseInput
void GameUserSettings::SetLockMouseInput(bool bLockMouseInput) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetLockMouseInput_Params Parms{};
    Parms.bLockMouseInput = bLockMouseInput;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetLightingQuality
void GameUserSettings::SetLightingQuality(int32_t InLightingQuality) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetLightingQuality_Params Parms{};
    Parms.InLightingQuality = InLightingQuality;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetInterfaceLanguage
void GameUserSettings::SetInterfaceLanguage(int32_t InLanguage) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetInterfaceLanguage_Params Parms{};
    Parms.InLanguage = InLanguage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetInterfaceColorMode
void GameUserSettings::SetInterfaceColorMode(int32_t InColorMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetInterfaceColorMode_Params Parms{};
    Parms.InColorMode = InColorMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetInputDeviceMode
void GameUserSettings::SetInputDeviceMode(int32_t InDeviceMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetInputDeviceMode_Params Parms{};
    Parms.InDeviceMode = InDeviceMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetIgnoreGamepad
void GameUserSettings::SetIgnoreGamepad(bool bIgnore) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetIgnoreGamepad_Params Parms{};
    Parms.bIgnore = bIgnore;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHordeAssaultFirstPlaySeen
void GameUserSettings::SetHordeAssaultFirstPlaySeen(bool bPlayed) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHordeAssaultFirstPlaySeen_Params Parms{};
    Parms.bPlayed = bPlayed;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHordeAssaultFirstBootSeen
void GameUserSettings::SetHordeAssaultFirstBootSeen(bool bSeen) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHordeAssaultFirstBootSeen_Params Parms{};
    Parms.bSeen = bSeen;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighFramerate
void GameUserSettings::SetHighFramerate(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighFramerate_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastPreset
void GameUserSettings::SetHighContrastPreset(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastPreset_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastModeOn
void GameUserSettings::SetHighContrastModeOn(bool InEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastModeOn_Params Parms{};
    Parms.InEnabled = InEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastInteractibleColor
void GameUserSettings::SetHighContrastInteractibleColor(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastInteractibleColor_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastHUDEnabled
void GameUserSettings::SetHighContrastHUDEnabled(bool InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastHUDEnabled_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastHeroColor
void GameUserSettings::SetHighContrastHeroColor(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastHeroColor_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastFriendlyNPCColor
void GameUserSettings::SetHighContrastFriendlyNPCColor(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastFriendlyNPCColor_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHighContrastEnemyColor
void GameUserSettings::SetHighContrastEnemyColor(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHighContrastEnemyColor_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHDRUIBrightness
void GameUserSettings::SetHDRUIBrightness(int32_t InHDRUIBrightness) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHDRUIBrightness_Params Parms{};
    Parms.InHDRUIBrightness = InHDRUIBrightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHDRGamePeakBrightness
void GameUserSettings::SetHDRGamePeakBrightness(int32_t InHDRGamePeakBrightness) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHDRGamePeakBrightness_Params Parms{};
    Parms.InHDRGamePeakBrightness = InHDRGamePeakBrightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHDRGameBrightness
void GameUserSettings::SetHDRGameBrightness(int32_t InHDRGameBrightness) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHDRGameBrightness_Params Parms{};
    Parms.InHDRGameBrightness = InHDRGameBrightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHDREnabled
void GameUserSettings::SetHDREnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHDREnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticVibrationIntensity
void GameUserSettings::SetHapticVibrationIntensity(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticVibrationIntensity_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticsWeapon
void GameUserSettings::SetHapticsWeapon(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticsWeapon_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticsMaster
void GameUserSettings::SetHapticsMaster(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticsMaster_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticsEngine
void GameUserSettings::SetHapticsEngine(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticsEngine_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticsEnabled
void GameUserSettings::SetHapticsEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticsEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticsBike
void GameUserSettings::SetHapticsBike(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticsBike_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticPlayerDamage
void GameUserSettings::SetHapticPlayerDamage(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticPlayerDamage_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticMelee
void GameUserSettings::SetHapticMelee(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticMelee_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticIntensity
void GameUserSettings::SetHapticIntensity(uint8_t HapticCategory, float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticIntensity_Params Parms{};
    Parms.HapticCategory = HapticCategory;
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticHorde
void GameUserSettings::SetHapticHorde(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticHorde_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticExplosion
void GameUserSettings::SetHapticExplosion(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticExplosion_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticEnvironmental
void GameUserSettings::SetHapticEnvironmental(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticEnvironmental_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetHapticCollectible
void GameUserSettings::SetHapticCollectible(float InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetHapticCollectible_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetGeometryQuality
void GameUserSettings::SetGeometryQuality(int32_t InGeometryQuality) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetGeometryQuality_Params Parms{};
    Parms.InGeometryQuality = InGeometryQuality;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetGameSpeedTimeDilationID
void GameUserSettings::SetGameSpeedTimeDilationID(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetGameSpeedTimeDilationID_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetGameSpeed
void GameUserSettings::SetGameSpeed(int32_t InValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetGameSpeed_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetGamepadDisplayMode
void GameUserSettings::SetGamepadDisplayMode(int32_t InDisplayMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetGamepadDisplayMode_Params Parms{};
    Parms.InDisplayMode = InDisplayMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetFullscreenMode
void GameUserSettings::SetFullscreenMode(uint8_t InFullscreenMode) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetFullscreenMode_Params Parms{};
    Parms.InFullscreenMode = InFullscreenMode;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetFullDataEnabled
void GameUserSettings::SetFullDataEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetFullDataEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetFrameRateLimit
void GameUserSettings::SetFrameRateLimit(float newLimit) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetFrameRateLimit_Params Parms{};
    Parms.newLimit = newLimit;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetFOV
void GameUserSettings::SetFOV(float InFOV) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetFOV_Params Parms{};
    Parms.InFOV = InFOV;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetFoliageDrawDistance
void GameUserSettings::SetFoliageDrawDistance(int32_t InFoliageDrawDistance) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetFoliageDrawDistance_Params Parms{};
    Parms.InFoliageDrawDistance = InFoliageDrawDistance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetFirstBootAccessibilitySeen
void GameUserSettings::SetFirstBootAccessibilitySeen(bool bSeen) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetFirstBootAccessibilitySeen_Params Parms{};
    Parms.bSeen = bSeen;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetDisplayIndex
void GameUserSettings::SetDisplayIndex(int32_t InIndex) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetDisplayIndex_Params Parms{};
    Parms.InIndex = InIndex;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetDialogLanguage
void GameUserSettings::SetDialogLanguage(int32_t InLanguage) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetDialogLanguage_Params Parms{};
    Parms.InLanguage = InLanguage;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetDepthOfFieldEnabled
void GameUserSettings::SetDepthOfFieldEnabled(bool InDepthOfFieldEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetDepthOfFieldEnabled_Params Parms{};
    Parms.InDepthOfFieldEnabled = InDepthOfFieldEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetDataPolicySeen
void GameUserSettings::SetDataPolicySeen(bool bSeen) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetDataPolicySeen_Params Parms{};
    Parms.bSeen = bSeen;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetControllerVolume
void GameUserSettings::SetControllerVolume(float InVolume) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetControllerVolume_Params Parms{};
    Parms.InVolume = InVolume;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetControllerDeadzoneSensitivity
void GameUserSettings::SetControllerDeadzoneSensitivity(int32_t InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetControllerDeadzoneSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetCollectibleAudioCues
void GameUserSettings::SetCollectibleAudioCues(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetCollectibleAudioCues_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetCloudAndFogQuality
void GameUserSettings::SetCloudAndFogQuality(int32_t InCloudAndFogQuality) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetCloudAndFogQuality_Params Parms{};
    Parms.InCloudAndFogQuality = InCloudAndFogQuality;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetCinematicActive
void GameUserSettings::SetCinematicActive(bool InEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetCinematicActive_Params Parms{};
    Parms.InEnabled = InEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetChromaticAberrationEnabled
void GameUserSettings::SetChromaticAberrationEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetChromaticAberrationEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetCameraFollowTrackingEnabled
void GameUserSettings::SetCameraFollowTrackingEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetCameraFollowTrackingEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBrightness
void GameUserSettings::SetBrightness(float InBrightness) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBrightness_Params Parms{};
    Parms.InBrightness = InBrightness;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBikeSteeringSensitivity
void GameUserSettings::SetBikeSteeringSensitivity(float InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBikeSteeringSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBikeCameraVerticalInverted
void GameUserSettings::SetBikeCameraVerticalInverted(bool bInverted) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBikeCameraVerticalInverted_Params Parms{};
    Parms.bInverted = bInverted;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBikeCameraSensitivity
void GameUserSettings::SetBikeCameraSensitivity(float InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBikeCameraSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBikeCameraHorizontalInverted
void GameUserSettings::SetBikeCameraHorizontalInverted(bool bInverted) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBikeCameraHorizontalInverted_Params Parms{};
    Parms.bInverted = bInverted;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBikeBackupCameraEnabled
void GameUserSettings::SetBikeBackupCameraEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBikeBackupCameraEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBendShadowQuality
void GameUserSettings::SetBendShadowQuality(int32_t InShadowQuality) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetBendShadowQuality_Params Parms{};
    Parms.InShadowQuality = InShadowQuality;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetBenchmarkFallbackValues
void GameUserSettings::SetBenchmarkFallbackValues() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.SetAutoCompleteReactionEventsEnabled
void GameUserSettings::SetAutoCompleteReactionEventsEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAutoCompleteReactionEventsEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAudioQualityLevel
void GameUserSettings::SetAudioQualityLevel(int32_t QualityLevel) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAudioQualityLevel_Params Parms{};
    Parms.QualityLevel = QualityLevel;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAudioFormat
void GameUserSettings::SetAudioFormat(int32_t InFormat) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAudioFormat_Params Parms{};
    Parms.InFormat = InFormat;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAudioDynamicRange
void GameUserSettings::SetAudioDynamicRange(int32_t InDynamicRange) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAudioDynamicRange_Params Parms{};
    Parms.InDynamicRange = InDynamicRange;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAntiAliasingQuality
void GameUserSettings::SetAntiAliasingQuality(int32_t Value) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAntiAliasingQuality_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAimStickinessSensitivity
void GameUserSettings::SetAimStickinessSensitivity(int32_t InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAimStickinessSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAimSnapEnabled
void GameUserSettings::SetAimSnapEnabled(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAimSnapEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAimFrictionSensitivity
void GameUserSettings::SetAimFrictionSensitivity(int32_t InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAimFrictionSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAimCameraSensitivity
void GameUserSettings::SetAimCameraSensitivity(float InSensitivity) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAimCameraSensitivity_Params Parms{};
    Parms.InSensitivity = InSensitivity;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAdaptiveTriggerStrength
void GameUserSettings::SetAdaptiveTriggerStrength(float Strength, uint8_t AdaptiveTriggerCategory) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAdaptiveTriggerStrength_Params Parms{};
    Parms.Strength = Strength;
    Parms.AdaptiveTriggerCategory = AdaptiveTriggerCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SetAdaptiveTriggersEnabled
void GameUserSettings::SetAdaptiveTriggersEnabled(bool bEnabled, uint8_t AdaptiveTriggerCategory) {
    static class UFunction* Func = nullptr;
    GameUserSettings_SetAdaptiveTriggersEnabled_Params Parms{};
    Parms.bEnabled = bEnabled;
    Parms.AdaptiveTriggerCategory = AdaptiveTriggerCategory;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.Set30HzFramerate
void GameUserSettings::Set30HzFramerate(bool bEnabled) {
    static class UFunction* Func = nullptr;
    GameUserSettings_Set30HzFramerate_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.SaveSettings
void GameUserSettings::SaveSettings() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.RevertVideoMode
void GameUserSettings::RevertVideoMode() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.RevertScalabilityOptions
void GameUserSettings::RevertScalabilityOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetToCurrentSettings
void GameUserSettings::ResetToCurrentSettings() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetTelemetryOptions
void GameUserSettings::ResetTelemetryOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetSurvivalWheelOptions
void GameUserSettings::ResetSurvivalWheelOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetScalabilityOptions
void GameUserSettings::ResetScalabilityOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetLanguageOptions
void GameUserSettings::ResetLanguageOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetHapticOptions
void GameUserSettings::ResetHapticOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetGameplayOptions
void GameUserSettings::ResetGameplayOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetGamepadOptions
void GameUserSettings::ResetGamepadOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetAudioOptions
void GameUserSettings::ResetAudioOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetAllOptions
void GameUserSettings::ResetAllOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetAdaptiveTriggerOptions
void GameUserSettings::ResetAdaptiveTriggerOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ResetAccessibilityOptions
void GameUserSettings::ResetAccessibilityOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.RequestAutodetect
void GameUserSettings::RequestAutodetect() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.OnPhotoModeOpened
void GameUserSettings::OnPhotoModeOpened(bool bIsOpened) {
    static class UFunction* Func = nullptr;
    GameUserSettings_OnPhotoModeOpened_Params Parms{};
    Parms.bIsOpened = bIsOpened;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.MatchCurrentVideoSettings
void GameUserSettings::MatchCurrentVideoSettings() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.MatchCurrentScalabilityOptions
void GameUserSettings::MatchCurrentScalabilityOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.LoadSettings
void GameUserSettings::LoadSettings(bool bForceReload) {
    static class UFunction* Func = nullptr;
    GameUserSettings_LoadSettings_Params Parms{};
    Parms.bForceReload = bForceReload;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.IsVSyncEnabled
bool GameUserSettings::IsVSyncEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsVSyncEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsVSyncDirty
bool GameUserSettings::IsVSyncDirty() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsVSyncDirty_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsVibrationEnabled
bool GameUserSettings::IsVibrationEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsVibrationEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsVehicleCameraTrackingEnabled
bool GameUserSettings::IsVehicleCameraTrackingEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsVehicleCameraTrackingEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsTrackAssistEnabled
bool GameUserSettings::IsTrackAssistEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsTrackAssistEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsTelemetryEnabled
bool GameUserSettings::IsTelemetryEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsTelemetryEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsSurvivalWheelSmartScrollEnabled
bool GameUserSettings::IsSurvivalWheelSmartScrollEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsSurvivalWheelSmartScrollEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsSurvivalWheelDebugRenderingEnabled
bool GameUserSettings::IsSurvivalWheelDebugRenderingEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsSurvivalWheelDebugRenderingEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsScreenResolutionDirty
bool GameUserSettings::IsScreenResolutionDirty() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsScreenResolutionDirty_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsRepeatedButtonHoldEnabled
bool GameUserSettings::IsRepeatedButtonHoldEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsRepeatedButtonHoldEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsRememberScopeZoomEnabled
bool GameUserSettings::IsRememberScopeZoomEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsRememberScopeZoomEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsRememberAimSideEnabled
bool GameUserSettings::IsRememberAimSideEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsRememberAimSideEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsPSSRInhibited
bool GameUserSettings::IsPSSRInhibited() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsPSSRInhibited_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsPS5Trinity
bool GameUserSettings::IsPS5Trinity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsPS5Trinity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsPlayerCameraVerticalInverted
bool GameUserSettings::IsPlayerCameraVerticalInverted() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsPlayerCameraVerticalInverted_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsPlayerCameraHorizontalInverted
bool GameUserSettings::IsPlayerCameraHorizontalInverted() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsPlayerCameraHorizontalInverted_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsMotionControlAimEnabled
bool GameUserSettings::IsMotionControlAimEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsMotionControlAimEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsMotionBlurEnabled
bool GameUserSettings::IsMotionBlurEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsMotionBlurEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsLanguageSupportedByTTS
bool GameUserSettings::IsLanguageSupportedByTTS() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsLanguageSupportedByTTS_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsHordeAssaultFirstPlaySeen
bool GameUserSettings::IsHordeAssaultFirstPlaySeen() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsHordeAssaultFirstPlaySeen_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsHordeAssaultFirstBootSeen
bool GameUserSettings::IsHordeAssaultFirstBootSeen() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsHordeAssaultFirstBootSeen_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsHighFramerateSupported
bool GameUserSettings::IsHighFramerateSupported() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsHighFramerateSupported_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsHDRSupported
bool GameUserSettings::IsHDRSupported() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsHDRSupported_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsHDREnabled
bool GameUserSettings::IsHDREnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsHDREnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsFullscreenModeDirty
bool GameUserSettings::IsFullscreenModeDirty() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsFullscreenModeDirty_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsFullDataEnabled
bool GameUserSettings::IsFullDataEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsFullDataEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsFirstBootAccessibilitySeen
bool GameUserSettings::IsFirstBootAccessibilitySeen() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsFirstBootAccessibilitySeen_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsDirty
bool GameUserSettings::IsDirty() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsDirty_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsDataPolicySeen
bool GameUserSettings::IsDataPolicySeen() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsDataPolicySeen_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsControllerAudioEnabled
bool GameUserSettings::IsControllerAudioEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsControllerAudioEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsCollectibleAudioCuesEnabled
bool GameUserSettings::IsCollectibleAudioCuesEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsCollectibleAudioCuesEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsChromaticAberrationEnabled
bool GameUserSettings::IsChromaticAberrationEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsChromaticAberrationEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsCameraFollowTrackingEnabled
bool GameUserSettings::IsCameraFollowTrackingEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsCameraFollowTrackingEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsBikeCameraVerticalInverted
bool GameUserSettings::IsBikeCameraVerticalInverted() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsBikeCameraVerticalInverted_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsBikeCameraHorizontalInverted
bool GameUserSettings::IsBikeCameraHorizontalInverted() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsBikeCameraHorizontalInverted_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsBikeBackupCameraEnabled
bool GameUserSettings::IsBikeBackupCameraEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsBikeBackupCameraEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsAutoCompleteReactionEventsEnabled
bool GameUserSettings::IsAutoCompleteReactionEventsEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsAutoCompleteReactionEventsEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.IsAimSnapEnabled
bool GameUserSettings::IsAimSnapEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_IsAimSnapEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetWeaponSelectionPreviewMode
int32_t GameUserSettings::GetWeaponSelectionPreviewMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetWeaponSelectionPreviewMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetVisualPreset
int32_t GameUserSettings::GetVisualPreset() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetVisualPreset_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetVisualEffectQuality
int32_t GameUserSettings::GetVisualEffectQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetVisualEffectQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetViewDistanceQuality
int32_t GameUserSettings::GetViewDistanceQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetViewDistanceQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetUINarrationOn
bool GameUserSettings::GetUINarrationOn() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetUINarrationOn_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetTextureStreamingQuality
int32_t GameUserSettings::GetTextureStreamingQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetTextureStreamingQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetTextureQuality
int32_t GameUserSettings::GetTextureQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetTextureQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetTextureFilterQuality
int32_t GameUserSettings::GetTextureFilterQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetTextureFilterQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSyncInterval
int32_t GameUserSettings::GetSyncInterval() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSyncInterval_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSwipeVerticalDeadzoneBuffer
float GameUserSettings::GetSwipeVerticalDeadzoneBuffer() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSwipeVerticalDeadzoneBuffer_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSwipeVerticalDeadzone
float GameUserSettings::GetSwipeVerticalDeadzone() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSwipeVerticalDeadzone_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSwipeLength
int32_t GameUserSettings::GetSwipeLength() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSwipeLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSwipeHorizontalDeadzoneBuffer
float GameUserSettings::GetSwipeHorizontalDeadzoneBuffer() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSwipeHorizontalDeadzoneBuffer_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSwipeHorizontalDeadzone
float GameUserSettings::GetSwipeHorizontalDeadzone() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSwipeHorizontalDeadzone_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSurvivalWheelSmartScrollDelay
float GameUserSettings::GetSurvivalWheelSmartScrollDelay() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSurvivalWheelSmartScrollDelay_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSurvivalWheelMouseMode
int32_t GameUserSettings::GetSurvivalWheelMouseMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSurvivalWheelMouseMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSurvivalWheelMinimumItemWidth
float GameUserSettings::GetSurvivalWheelMinimumItemWidth() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSurvivalWheelMinimumItemWidth_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSurvivalWheelMinimumExpansionWidth
float GameUserSettings::GetSurvivalWheelMinimumExpansionWidth() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSurvivalWheelMinimumExpansionWidth_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSupportedSyncIntervals
void GameUserSettings::GetSupportedSyncIntervals(struct TArray<uint8_t> SyncIntervals, struct TArray<uint8_t> FrameRates) {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSupportedSyncIntervals_Params Parms{};
    Parms.SyncIntervals = SyncIntervals;
    Parms.FrameRates = FrameRates;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.GetSupportedResolutions
struct TArray<uint8_t> GameUserSettings::GetSupportedResolutions() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSupportedResolutions_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSupportedRefreshRates
struct TArray<uint8_t> GameUserSettings::GetSupportedRefreshRates() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSupportedRefreshRates_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitlesShouldBeShown
bool GameUserSettings::GetSubtitlesShouldBeShown() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitlesShouldBeShown_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitleSize
int32_t GameUserSettings::GetSubtitleSize() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitleSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitleNameColor
int32_t GameUserSettings::GetSubtitleNameColor() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitleNameColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitleLanguage
int32_t GameUserSettings::GetSubtitleLanguage() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitleLanguage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitleCultureName
struct FString GameUserSettings::GetSubtitleCultureName() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitleCultureName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitleColor
int32_t GameUserSettings::GetSubtitleColor() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitleColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSubtitleBackgroundOpacity
int32_t GameUserSettings::GetSubtitleBackgroundOpacity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSubtitleBackgroundOpacity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSpeechVolume
float GameUserSettings::GetSpeechVolume() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSpeechVolume_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetShadowQuality
int32_t GameUserSettings::GetShadowQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetShadowQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetSfxVolume
float GameUserSettings::GetSfxVolume() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetSfxVolume_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetScreenResolution
uint8_t GameUserSettings::GetScreenResolution() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetScreenResolution_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetResolutionScaleInformation
void GameUserSettings::GetResolutionScaleInformation(float CurrentScaleNormalized, int32_t CurrentScaleValue, int32_t MinScaleValue, int32_t MaxScaleValue) {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetResolutionScaleInformation_Params Parms{};
    Parms.CurrentScaleNormalized = CurrentScaleNormalized;
    Parms.CurrentScaleValue = CurrentScaleValue;
    Parms.MinScaleValue = MinScaleValue;
    Parms.MaxScaleValue = MaxScaleValue;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.GetRepeatedButtonSize
int32_t GameUserSettings::GetRepeatedButtonSize() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetRepeatedButtonSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetRenderScale
float GameUserSettings::GetRenderScale() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetRenderScale_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetRefreshRate
void GameUserSettings::GetRefreshRate(float RefreshRate, int32_t Numerator, int32_t Denominator) {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetRefreshRate_Params Parms{};
    Parms.RefreshRate = RefreshRate;
    Parms.Numerator = Numerator;
    Parms.Denominator = Denominator;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.GetRecenterCameraOnAttack
bool GameUserSettings::GetRecenterCameraOnAttack() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetRecenterCameraOnAttack_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPSSRSupported
bool GameUserSettings::GetPSSRSupported() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPSSRSupported_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPSSRIsRunning
bool GameUserSettings::GetPSSRIsRunning() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPSSRIsRunning_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPSSRInhibitedReason
struct FString GameUserSettings::GetPSSRInhibitedReason() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPSSRInhibitedReason_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPSSREnabled
bool GameUserSettings::GetPSSREnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPSSREnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPS5RenderMode
int32_t GameUserSettings::GetPS5RenderMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPS5RenderMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPostProcessingQuality
int32_t GameUserSettings::GetPostProcessingQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPostProcessingQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPlayerCameraSensitivity
float GameUserSettings::GetPlayerCameraSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPlayerCameraSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetPersistentCenterDotEnabled
bool GameUserSettings::GetPersistentCenterDotEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetPersistentCenterDotEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetOverallScalabilityLevel
int32_t GameUserSettings::GetOverallScalabilityLevel() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetOverallScalabilityLevel_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetMusicVolume
float GameUserSettings::GetMusicVolume() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetMusicVolume_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetMotionControlAimSensitivity
float GameUserSettings::GetMotionControlAimSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetMotionControlAimSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetLockMouseInput
bool GameUserSettings::GetLockMouseInput() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetLockMouseInput_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetLightingQuality
int32_t GameUserSettings::GetLightingQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetLightingQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetLastConfirmedScreenResolution
uint8_t GameUserSettings::GetLastConfirmedScreenResolution() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetLastConfirmedScreenResolution_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetLastConfirmedFullscreenMode
uint8_t GameUserSettings::GetLastConfirmedFullscreenMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetLastConfirmedFullscreenMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetInterfaceLanguage
int32_t GameUserSettings::GetInterfaceLanguage() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetInterfaceLanguage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetInterfaceCultureName
struct FString GameUserSettings::GetInterfaceCultureName() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetInterfaceCultureName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetInterfaceColorMode
int32_t GameUserSettings::GetInterfaceColorMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetInterfaceColorMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetInputDeviceMode
int32_t GameUserSettings::GetInputDeviceMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetInputDeviceMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetIgnoreGamepad
bool GameUserSettings::GetIgnoreGamepad() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetIgnoreGamepad_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighFramerateEnabled
bool GameUserSettings::GetHighFramerateEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighFramerateEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastPreset
int32_t GameUserSettings::GetHighContrastPreset() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastPreset_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastModeOn
bool GameUserSettings::GetHighContrastModeOn() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastModeOn_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastInteractibleColor
int32_t GameUserSettings::GetHighContrastInteractibleColor() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastInteractibleColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastHUDEnabled
bool GameUserSettings::GetHighContrastHUDEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastHUDEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastHeroColor
int32_t GameUserSettings::GetHighContrastHeroColor() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastHeroColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastFriendlyNPCColor
int32_t GameUserSettings::GetHighContrastFriendlyNPCColor() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastFriendlyNPCColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHighContrastEnemyColor
int32_t GameUserSettings::GetHighContrastEnemyColor() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHighContrastEnemyColor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHDRUIBrightness
int32_t GameUserSettings::GetHDRUIBrightness() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHDRUIBrightness_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHDRGamePeakBrightness
int32_t GameUserSettings::GetHDRGamePeakBrightness() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHDRGamePeakBrightness_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHDRGameBrightness
int32_t GameUserSettings::GetHDRGameBrightness() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHDRGameBrightness_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticVibrationIntensity
float GameUserSettings::GetHapticVibrationIntensity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticVibrationIntensity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsWeapon
float GameUserSettings::GetHapticsWeapon() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsWeapon_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsPlayerDamage
float GameUserSettings::GetHapticsPlayerDamage() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsPlayerDamage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsMelee
float GameUserSettings::GetHapticsMelee() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsMelee_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsMaster
float GameUserSettings::GetHapticsMaster() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsMaster_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsHorde
float GameUserSettings::GetHapticsHorde() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsHorde_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsExplosion
float GameUserSettings::GetHapticsExplosion() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsExplosion_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticSettings
uint8_t GameUserSettings::GetHapticSettings() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticSettings_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsEnvironmental
float GameUserSettings::GetHapticsEnvironmental() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsEnvironmental_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsEngine
float GameUserSettings::GetHapticsEngine() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsEngine_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsCollectible
float GameUserSettings::GetHapticsCollectible() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsCollectible_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetHapticsBike
float GameUserSettings::GetHapticsBike() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetHapticsBike_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetGeometryQuality
int32_t GameUserSettings::GetGeometryQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetGeometryQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetGameUserSettings
class UObject* GameUserSettings::GetGameUserSettings() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetGameUserSettings_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetGameSpeedTimeDilationID
int32_t GameUserSettings::GetGameSpeedTimeDilationID() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetGameSpeedTimeDilationID_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetGameSpeedFloat
float GameUserSettings::GetGameSpeedFloat() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetGameSpeedFloat_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetGameSpeed
int32_t GameUserSettings::GetGameSpeed() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetGameSpeed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetGamepadDisplayMode
int32_t GameUserSettings::GetGamepadDisplayMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetGamepadDisplayMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetFullscreenMode
uint8_t GameUserSettings::GetFullscreenMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetFullscreenMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetFrameRateLimit
float GameUserSettings::GetFrameRateLimit() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetFrameRateLimit_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetFOV
float GameUserSettings::GetFOV() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetFOV_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetFoliageDrawDistance
int32_t GameUserSettings::GetFoliageDrawDistance() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetFoliageDrawDistance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDisplayIndex
int32_t GameUserSettings::GetDisplayIndex() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDisplayIndex_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDialogLanguage
int32_t GameUserSettings::GetDialogLanguage() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDialogLanguage_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDialogCultureName
struct FString GameUserSettings::GetDialogCultureName() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDialogCultureName_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDepthOfFieldEnabled
bool GameUserSettings::GetDepthOfFieldEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDepthOfFieldEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDefaultWindowPosition
uint8_t GameUserSettings::GetDefaultWindowPosition() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDefaultWindowPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDefaultWindowMode
uint8_t GameUserSettings::GetDefaultWindowMode() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDefaultWindowMode_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetDefaultResolution
uint8_t GameUserSettings::GetDefaultResolution() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetDefaultResolution_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetControllerVolume
float GameUserSettings::GetControllerVolume() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetControllerVolume_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetControllerDeadzoneSensitivity
int32_t GameUserSettings::GetControllerDeadzoneSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetControllerDeadzoneSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetCloudAndFogQuality
int32_t GameUserSettings::GetCloudAndFogQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetCloudAndFogQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetCinematicActive
bool GameUserSettings::GetCinematicActive() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetCinematicActive_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetBrightness
float GameUserSettings::GetBrightness() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetBrightness_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetBikeSteeringSensitivity
float GameUserSettings::GetBikeSteeringSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetBikeSteeringSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetBikeCameraSensitivity
float GameUserSettings::GetBikeCameraSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetBikeCameraSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetBendShadowQuality
int32_t GameUserSettings::GetBendShadowQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetBendShadowQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAvailableSubtitleCultures
struct TArray<uint8_t> GameUserSettings::GetAvailableSubtitleCultures() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAvailableSubtitleCultures_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAvailableInterfaceCultures
struct TArray<uint8_t> GameUserSettings::GetAvailableInterfaceCultures() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAvailableInterfaceCultures_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAvailableDialogCultures
struct TArray<uint8_t> GameUserSettings::GetAvailableDialogCultures() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAvailableDialogCultures_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAvailableDeviceCount
int32_t GameUserSettings::GetAvailableDeviceCount() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAvailableDeviceCount_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAudioQualityLevel
int32_t GameUserSettings::GetAudioQualityLevel() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAudioQualityLevel_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAudioFormat
int32_t GameUserSettings::GetAudioFormat() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAudioFormat_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAudioDynamicRange
int32_t GameUserSettings::GetAudioDynamicRange() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAudioDynamicRange_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAntiAliasingQuality
int32_t GameUserSettings::GetAntiAliasingQuality() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAntiAliasingQuality_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAimStickinessSensitivity
int32_t GameUserSettings::GetAimStickinessSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAimStickinessSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAimFrictionSensitivity
int32_t GameUserSettings::GetAimFrictionSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAimFrictionSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAimCameraSensitivity
float GameUserSettings::GetAimCameraSensitivity() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAimCameraSensitivity_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAdaptiveTriggerStrengthModifier
float GameUserSettings::GetAdaptiveTriggerStrengthModifier(uint8_t AdaptiveTriggerCategory) {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAdaptiveTriggerStrengthModifier_Params Parms{};
    Parms.AdaptiveTriggerCategory = AdaptiveTriggerCategory;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAdaptiveTriggerStrength
float GameUserSettings::GetAdaptiveTriggerStrength(uint8_t AdaptiveTriggerCategory) {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAdaptiveTriggerStrength_Params Parms{};
    Parms.AdaptiveTriggerCategory = AdaptiveTriggerCategory;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAdaptiveTriggerSettings
uint8_t GameUserSettings::GetAdaptiveTriggerSettings() {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAdaptiveTriggerSettings_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.GetAdaptiveTriggersEnabled
bool GameUserSettings::GetAdaptiveTriggersEnabled(uint8_t AdaptiveTriggerCategory) {
    static class UFunction* Func = nullptr;
    GameUserSettings_GetAdaptiveTriggersEnabled_Params Parms{};
    Parms.AdaptiveTriggerCategory = AdaptiveTriggerCategory;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.Get30HzFramerateEnabled
bool GameUserSettings::Get30HzFramerateEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_Get30HzFramerateEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.ConfirmVideoMode
void GameUserSettings::ConfirmVideoMode() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.CompleteAutodetect
void GameUserSettings::CompleteAutodetect() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.CacheScalabilityOptions
void GameUserSettings::CacheScalabilityOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.CacheDeviceCapabilities
void GameUserSettings::CacheDeviceCapabilities() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.BroadcastOnOptionsClosed
void GameUserSettings::BroadcastOnOptionsClosed() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.BroadcastHCMSettingsChanged
void GameUserSettings::BroadcastHCMSettingsChanged() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.AreXPIndicatorsEnabled
bool GameUserSettings::AreXPIndicatorsEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_AreXPIndicatorsEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.AreVideoSettingsDirty
bool GameUserSettings::AreVideoSettingsDirty() {
    static class UFunction* Func = nullptr;
    GameUserSettings_AreVideoSettingsDirty_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.AreSwipeControlsEnabled
bool GameUserSettings::AreSwipeControlsEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_AreSwipeControlsEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.AreSubtitlesEnabled
bool GameUserSettings::AreSubtitlesEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_AreSubtitlesEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.AreSubtitleNamesEnabled
bool GameUserSettings::AreSubtitleNamesEnabled() {
    static class UFunction* Func = nullptr;
    GameUserSettings_AreSubtitleNamesEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.GameUserSettings.ApplySettings
void GameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides) {
    static class UFunction* Func = nullptr;
    GameUserSettings_ApplySettings_Params Parms{};
    Parms.bCheckForCommandLineOverrides = bCheckForCommandLineOverrides;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.ApplyScalabilityOptions
void GameUserSettings::ApplyScalabilityOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.ApplyResolutionSettings
void GameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides) {
    static class UFunction* Func = nullptr;
    GameUserSettings_ApplyResolutionSettings_Params Parms{};
    Parms.bCheckForCommandLineOverrides = bCheckForCommandLineOverrides;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.GameUserSettings.ApplyNonResolutionSettings
void GameUserSettings::ApplyNonResolutionSettings() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.GameUserSettings.AccessibilitySettingsChanged
void GameUserSettings::AccessibilitySettingsChanged() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.LevelStreaming.IsStreamingStatePending
bool LevelStreaming::IsStreamingStatePending() {
    static class UFunction* Func = nullptr;
    LevelStreaming_IsStreamingStatePending_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelStreaming.IsLevelVisible
bool LevelStreaming::IsLevelVisible() {
    static class UFunction* Func = nullptr;
    LevelStreaming_IsLevelVisible_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelStreaming.IsLevelLoaded
bool LevelStreaming::IsLevelLoaded() {
    static class UFunction* Func = nullptr;
    LevelStreaming_IsLevelLoaded_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelStreaming.GetLevelScriptActor
class UObject* LevelStreaming::GetLevelScriptActor() {
    static class UFunction* Func = nullptr;
    LevelStreaming_GetLevelScriptActor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelStreaming.GetLevelCenter
uint8_t LevelStreaming::GetLevelCenter() {
    static class UFunction* Func = nullptr;
    LevelStreaming_GetLevelCenter_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.LevelStreaming.CreateInstance
class UObject* LevelStreaming::CreateInstance(struct FString UniqueInstanceName) {
    static class UFunction* Func = nullptr;
    LevelStreaming_CreateInstance_Params Parms{};
    Parms.UniqueInstanceName = UniqueInstanceName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MaterialInstanceDynamic.SetVectorParameterValue
void MaterialInstanceDynamic::SetVectorParameterValue(struct FName ParameterName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_SetVectorParameterValue_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.SetTextureParameterValue
void MaterialInstanceDynamic::SetTextureParameterValue(struct FName ParameterName, class UObject* Value) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_SetTextureParameterValue_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.SetScalarParameterValue
void MaterialInstanceDynamic::SetScalarParameterValue(struct FName ParameterName, float Value) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_SetScalarParameterValue_Params Parms{};
    Parms.ParameterName = ParameterName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.ResetParent
void MaterialInstanceDynamic::ResetParent(class UObject* ParentMaterial) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_ResetParent_Params Parms{};
    Parms.ParentMaterial = ParentMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams
void MaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams(class UObject* SourceA, class UObject* SourceB, float Alpha) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Params Parms{};
    Parms.SourceA = SourceA;
    Parms.SourceB = SourceB;
    Parms.Alpha = Alpha;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue
uint8_t MaterialInstanceDynamic::K2_GetVectorParameterValue(struct FName ParameterName) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_K2_GetVectorParameterValue_Params Parms{};
    Parms.ParameterName = ParameterName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue
class UObject* MaterialInstanceDynamic::K2_GetTextureParameterValue(struct FName ParameterName) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_K2_GetTextureParameterValue_Params Parms{};
    Parms.ParameterName = ParameterName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue
float MaterialInstanceDynamic::K2_GetScalarParameterValue(struct FName ParameterName) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_K2_GetScalarParameterValue_Params Parms{};
    Parms.ParameterName = ParameterName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters
void MaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(class UObject* Source) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Params Parms{};
    Parms.Source = Source;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.CopyParameterOverrides
void MaterialInstanceDynamic::CopyParameterOverrides(class UObject* MaterialInstance) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_CopyParameterOverrides_Params Parms{};
    Parms.MaterialInstance = MaterialInstance;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.MaterialInstanceDynamic.CopyInterpParameters
void MaterialInstanceDynamic::CopyInterpParameters(class UObject* Source) {
    static class UFunction* Func = nullptr;
    MaterialInstanceDynamic_CopyInterpParameters_Params Parms{};
    Parms.Source = Source;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationPath.IsValid
bool NavigationPath::IsValid() {
    static class UFunction* Func = nullptr;
    NavigationPath_IsValid_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationPath.IsStringPulled
bool NavigationPath::IsStringPulled() {
    static class UFunction* Func = nullptr;
    NavigationPath_IsStringPulled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationPath.IsPartial
bool NavigationPath::IsPartial() {
    static class UFunction* Func = nullptr;
    NavigationPath_IsPartial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationPath.GetPathLength
float NavigationPath::GetPathLength() {
    static class UFunction* Func = nullptr;
    NavigationPath_GetPathLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationPath.GetPathCost
float NavigationPath::GetPathCost() {
    static class UFunction* Func = nullptr;
    NavigationPath_GetPathCost_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationPath.GetDebugString
struct FString NavigationPath::GetDebugString() {
    static class UFunction* Func = nullptr;
    NavigationPath_GetDebugString_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.NavigationPath.EnableRecalculationOnInvalidation
void NavigationPath::EnableRecalculationOnInvalidation(uint8_t DoRecalculation) {
    static class UFunction* Func = nullptr;
    NavigationPath_EnableRecalculationOnInvalidation_Params Parms{};
    Parms.DoRecalculation = DoRecalculation;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.NavigationPath.EnableDebugDrawing
void NavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, uint8_t PathColor) {
    static class UFunction* Func = nullptr;
    NavigationPath_EnableDebugDrawing_Params Parms{};
    Parms.bShouldDrawDebugData = bShouldDrawDebugData;
    Parms.PathColor = PathColor;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ObjectFloat.SetValue
void ObjectFloat::SetValue(float In_Value) {
    static class UFunction* Func = nullptr;
    ObjectFloat_SetValue_Params Parms{};
    Parms.In_Value = In_Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.ObjectFloat.GetValue
float ObjectFloat::GetValue() {
    static class UFunction* Func = nullptr;
    ObjectFloat_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TwitterIntegrationBase.TwitterRequest
bool TwitterIntegrationBase::TwitterRequest(struct FString URL, struct TArray<uint8_t> ParamKeysAndValues, uint8_t RequestMethod, int32_t AccountIndex) {
    static class UFunction* Func = nullptr;
    TwitterIntegrationBase_TwitterRequest_Params Parms{};
    Parms.URL = URL;
    Parms.ParamKeysAndValues = ParamKeysAndValues;
    Parms.RequestMethod = RequestMethod;
    Parms.AccountIndex = AccountIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TwitterIntegrationBase.ShowTweetUI
bool TwitterIntegrationBase::ShowTweetUI(struct FString InitialMessage, struct FString URL, struct FString Picture) {
    static class UFunction* Func = nullptr;
    TwitterIntegrationBase_ShowTweetUI_Params Parms{};
    Parms.InitialMessage = InitialMessage;
    Parms.URL = URL;
    Parms.Picture = Picture;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TwitterIntegrationBase.Init
void TwitterIntegrationBase::Init() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.TwitterIntegrationBase.GetNumAccounts
int32_t TwitterIntegrationBase::GetNumAccounts() {
    static class UFunction* Func = nullptr;
    TwitterIntegrationBase_GetNumAccounts_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TwitterIntegrationBase.GetAccountName
struct FString TwitterIntegrationBase::GetAccountName(int32_t AccountIndex) {
    static class UFunction* Func = nullptr;
    TwitterIntegrationBase_GetAccountName_Params Parms{};
    Parms.AccountIndex = AccountIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TwitterIntegrationBase.CanShowTweetUI
bool TwitterIntegrationBase::CanShowTweetUI() {
    static class UFunction* Func = nullptr;
    TwitterIntegrationBase_CanShowTweetUI_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.TwitterIntegrationBase.AuthorizeAccounts
bool TwitterIntegrationBase::AuthorizeAccounts() {
    static class UFunction* Func = nullptr;
    TwitterIntegrationBase_AuthorizeAccounts_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlatformInterfaceWebResponse.GetNumHeaders
int32_t PlatformInterfaceWebResponse::GetNumHeaders() {
    static class UFunction* Func = nullptr;
    PlatformInterfaceWebResponse_GetNumHeaders_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlatformInterfaceWebResponse.GetHeaderValue
struct FString PlatformInterfaceWebResponse::GetHeaderValue(struct FString HeaderName) {
    static class UFunction* Func = nullptr;
    PlatformInterfaceWebResponse_GetHeaderValue_Params Parms{};
    Parms.HeaderName = HeaderName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.PlatformInterfaceWebResponse.GetHeader
void PlatformInterfaceWebResponse::GetHeader(int32_t HeaderIndex, struct FString Header, struct FString Value) {
    static class UFunction* Func = nullptr;
    PlatformInterfaceWebResponse_GetHeader_Params Parms{};
    Parms.HeaderIndex = HeaderIndex;
    Parms.Header = Header;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshSocket.InitializeSocketFromLocation
void SkeletalMeshSocket::InitializeSocketFromLocation(class UObject* SkelComp, uint8_t WorldLocation, uint8_t WorldNormal) {
    static class UFunction* Func = nullptr;
    SkeletalMeshSocket_InitializeSocketFromLocation_Params Parms{};
    Parms.SkelComp = SkelComp;
    Parms.WorldLocation = WorldLocation;
    Parms.WorldNormal = WorldNormal;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.SkeletalMeshSocket.GetSocketLocation
uint8_t SkeletalMeshSocket::GetSocketLocation(class UObject* SkelComp) {
    static class UFunction* Func = nullptr;
    SkeletalMeshSocket_GetSocketLocation_Params Parms{};
    Parms.SkelComp = SkelComp;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.StaticMesh.GetBoundingBox
uint8_t StaticMesh::GetBoundingBox() {
    static class UFunction* Func = nullptr;
    StaticMesh_GetBoundingBox_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Texture2D.Blueprint_GetSizeY
int32_t Texture2D::Blueprint_GetSizeY() {
    static class UFunction* Func = nullptr;
    Texture2D_Blueprint_GetSizeY_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.Texture2D.Blueprint_GetSizeX
int32_t Texture2D::Blueprint_GetSizeX() {
    static class UFunction* Func = nullptr;
    Texture2D_Blueprint_GetSizeX_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Engine.CanvasRenderTarget2D.UpdateResource
void CanvasRenderTarget2D::UpdateResource() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: Engine.CanvasRenderTarget2D.ReceiveUpdate
void CanvasRenderTarget2D::ReceiveUpdate(class UObject* Canvas, int32_t Width, int32_t Height) {
    static class UFunction* Func = nullptr;
    CanvasRenderTarget2D_ReceiveUpdate_Params Parms{};
    Parms.Canvas = Canvas;
    Parms.Width = Width;
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CanvasRenderTarget2D.GetSize
void CanvasRenderTarget2D::GetSize(int32_t Width, int32_t Height) {
    static class UFunction* Func = nullptr;
    CanvasRenderTarget2D_GetSize_Params Parms{};
    Parms.Width = Width;
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
}

// Function: Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D
class UObject* CanvasRenderTarget2D::CreateCanvasRenderTarget2D(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int32_t Width, int32_t Height) {
    static class UFunction* Func = nullptr;
    CanvasRenderTarget2D_CreateCanvasRenderTarget2D_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.CanvasRenderTarget2DClass = CanvasRenderTarget2DClass;
    Parms.Width = Width;
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK

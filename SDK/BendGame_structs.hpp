#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: BendGame.BookKeepingData
struct BookKeepingData {
    int32_t BookKeepingID; // 0x0000 (0x0004)
    int32_t NumberSpawned; // 0x0004 (0x0004)
    int32_t NumberKilled; // 0x0008 (0x0004)
    int32_t NumberDespawned; // 0x000C (0x0004)
    int32_t NumberSpawnsExpected; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct TArray<uint8_t> SpawnLocations; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.InventoryOperation
struct InventoryOperation {
    int32_t ItemKey; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* InventoryItem; // 0x0008 (0x0008)
    uint8_t OpType; // 0x0010 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0011 (0x0003)
    int32_t OpCount; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BendClimbContext
struct BendClimbContext {
    bool IsSequence; // 0x0000 (0x0001)
    bool Vaulting; // 0x0001 (0x0001)
    bool IsComingFromAir; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    float HorizontalDistanceToEdge; // 0x0004 (0x0004)
    float OtherSideHorizontalDistance; // 0x0008 (0x0004)
    float AngleToEdge; // 0x000C (0x0004)
    float OtherSideOffsetStartTime; // 0x0010 (0x0004)
    uint8_t OriginalEdgeNormal[0xC]; // 0x0014 (0x000C)
    uint8_t EdgeNormal[0xC]; // 0x0020 (0x000C)
    uint8_t Pad_1[0x4]; // 0x002C (0x0004)
    uint8_t AnimData[0x18]; // 0x0030 (0x0018)
    uint8_t OtherSideAnimData[0x18]; // 0x0048 (0x0018)
    uint8_t ExitAnimData[0x18]; // 0x0060 (0x0018)
};

// ScriptStruct: BendGame.BendGenericAnimData
struct BendGenericAnimData {
    class UObject* AnimAsset; // 0x0000 (0x0008)
    float BlendInTime; // 0x0008 (0x0004)
    float BlendOutTime; // 0x000C (0x0004)
    float PlayRate; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendActionData
struct BendActionData {
    bool bUseAnchor; // 0x0000 (0x0001)
    bool bAnchorAffectsTranslation; // 0x0000 (0x0001)
    bool bUseAnchorGroundFixup; // 0x0000 (0x0001)
    bool bUseGroundFixup; // 0x0000 (0x0001)
    bool bCanTurn; // 0x0000 (0x0001)
    bool bUseProp; // 0x0000 (0x0001)
    bool bForceHolster; // 0x0000 (0x0001)
    bool bLooping; // 0x0000 (0x0001)
    bool bCanBeMeleeAttacked; // 0x0001 (0x0001)
    bool bCanBeGrappled; // 0x0001 (0x0001)
    bool bCanGrapple; // 0x0001 (0x0001)
    bool bCanBeStealthKilled; // 0x0001 (0x0001)
    bool bCanBePairKilled; // 0x0001 (0x0001)
    bool bCanBePausedByMovementStopRequest; // 0x0001 (0x0001)
    bool bHoldLastFrame; // 0x0001 (0x0001)
    bool bBlockHitReactions; // 0x0001 (0x0001)
    bool bEnableHeadLook; // 0x0002 (0x0001)
    bool bPlayEvenIfDead; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    uint8_t ActionType; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    class UObject* AnimationSequence; // 0x0008 (0x0008)
    struct FName SlotName; // 0x0010 (0x0008)
    float BlendInTime; // 0x0018 (0x0004)
    float BlendOutTime; // 0x001C (0x0004)
    float BlendOutTriggerTime; // 0x0020 (0x0004)
    float PlayRate; // 0x0024 (0x0004)
    uint64_t PairedAnimParent; // 0x0028 (0x0008)
    class UClass* PropClass; // 0x0030 (0x0008)
    class UObject* PropAnimationSequence; // 0x0038 (0x0008)
    struct FName PropSocketAttachName; // 0x0040 (0x0008)
    uint8_t PropAttachLocationType; // 0x0048 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0049 (0x0007)
    struct FName AnchorName; // 0x0050 (0x0008)
    struct FName AnchorReferenceBoneName; // 0x0058 (0x0008)
    uint8_t Priority; // 0x0060 (0x0001)
    uint8_t CompleteTransitionBehavior; // 0x0061 (0x0001)
    uint8_t NextAnimCategory; // 0x0062 (0x0001)
    uint8_t Pad_3[0x5]; // 0x0063 (0x0005)
    class UObject* PrerequisiteAnimCategory; // 0x0068 (0x0008)
    uint8_t RotateToTargetLocation[0xC]; // 0x0070 (0x000C)
    float RotationBlendTime; // 0x007C (0x0004)
    float LoopingTime; // 0x0080 (0x0004)
    uint8_t CollisionMode; // 0x0084 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0085 (0x0003)
    bool bIgnoreCollision; // 0x0088 (0x0001)
};

// ScriptStruct: BendGame.BendArmorParts
struct BendArmorParts {
    bool PartOfMesh; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t SkeletalMesh[0x20]; // 0x0008 (0x0020)
    uint8_t StaticMesh[0x20]; // 0x0028 (0x0020)
    struct FName Socket; // 0x0048 (0x0008)
    bool AutoFallOff; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    struct TArray<uint8_t> ProtectedBodyParts; // 0x0058 (0x0010)
    float Health; // 0x0068 (0x0004)
};

// ScriptStruct: BendGame.BendCrowdMemberHandle
struct BendCrowdMemberHandle {
};

// ScriptStruct: BendGame.KillInfo
struct KillInfo {
    class UObject* KillerController; // 0x0000 (0x0008)
    class UObject* DamageCauser; // 0x0008 (0x0008)
    class UObject* KilledController; // 0x0010 (0x0008)
    class UObject* KilledPawn; // 0x0018 (0x0008)
    struct FName HitBoneName; // 0x0020 (0x0008)
    class UObject* DamageType; // 0x0028 (0x0008)
    int32_t XPValue; // 0x0030 (0x0004)
};

// ScriptStruct: BendGame.BendAttackData
struct BendAttackData {
    class UObject* AttackAnim; // 0x0000 (0x0008)
    class UObject* AttackFailedAnim; // 0x0008 (0x0008)
    class UObject* AttackSuccessAnim; // 0x0010 (0x0008)
    struct TArray<uint8_t> VictimsCounterAnimData; // 0x0018 (0x0010)
    bool Anchor; // 0x0028 (0x0001)
    uint8_t MovementMode; // 0x0029 (0x0001)
    uint8_t Pad_0[0x2]; // 0x002A (0x0002)
    bool RequiresLeftArm; // 0x002C (0x0001)
    bool RequiresRightArm; // 0x002C (0x0001)
    uint8_t Pad_1[0x3]; // 0x002D (0x0003)
    float VictimsMaxMoveDistance; // 0x0030 (0x0004)
    float MinCancelAngle; // 0x0034 (0x0004)
    float MaxCancelAngle; // 0x0038 (0x0004)
    float MinDistanceModifierOverride; // 0x003C (0x0004)
    float MaxDistanceModifierOverride; // 0x0040 (0x0004)
    float MinVerticalDistance; // 0x0044 (0x0004)
    float MaxVerticalDistance; // 0x0048 (0x0004)
    float MinHorizontalDistance; // 0x004C (0x0004)
    float MaxHorizontalDistance; // 0x0050 (0x0004)
    bool bAdjustAttackToTargetCapsuleSize; // 0x0054 (0x0001)
    bool bDisableCollisionAgainstTarget; // 0x0055 (0x0001)
    bool bMustBeFrustrated; // 0x0056 (0x0001)
    uint8_t Pad_2[0x1]; // 0x0057 (0x0001)
    float TargetToPawnAnchorOffset; // 0x0058 (0x0004)
    float AttackDistance; // 0x005C (0x0004)
};

// ScriptStruct: BendGame.BendCounterAnimData
struct BendCounterAnimData {
    uint8_t Faction; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> CounterAnims; // 0x0008 (0x0010)
    class UObject* PairedAnim; // 0x0018 (0x0008)
    float MaxCounterDistance; // 0x0020 (0x0004)
    float MaxCounterSpreadAngle; // 0x0024 (0x0004)
};

// ScriptStruct: BendGame.BendPairedAnimDodgeAttackData
struct BendPairedAnimDodgeAttackData {
    uint8_t DodgeAnim[0x18]; // 0x0000 (0x0018)
    uint8_t DirectionalDodgeAnim[0x18]; // 0x0018 (0x0018)
    uint8_t KillAnim[0x18]; // 0x0030 (0x0018)
    uint8_t CounterAttackAnim[0x18]; // 0x0048 (0x0018)
    class UObject* DefaultCounterAttackData; // 0x0060 (0x0008)
    bool UseMeleeWeapon; // 0x0068 (0x0001)
};

// ScriptStruct: BendGame.BendPairedAnimData
struct BendPairedAnimData {
    class UObject* AttackerAnim; // 0x0000 (0x0008)
    class UObject* VictimAnim; // 0x0008 (0x0008)
    bool UseFocusMode; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.InventoryIDDetails
struct InventoryIDDetails {
    uint8_t CraftComponent; // 0x0000 (0x0001)
    uint8_t Ammo; // 0x0001 (0x0001)
    uint8_t Weapon; // 0x0002 (0x0001)
    uint8_t Consumable; // 0x0003 (0x0001)
    uint8_t Utility; // 0x0004 (0x0001)
    uint8_t BikePart; // 0x0005 (0x0001)
    uint8_t Collectible; // 0x0006 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0007 (0x0001)
    int32_t Count; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendCrowdMemberDiedInfo
struct BendCrowdMemberDiedInfo {
    float ActualDamage; // 0x0000 (0x0004)
    uint64_t Killer; // 0x0004 (0x0008)
    uint8_t HitLocation[0xC]; // 0x000C (0x000C)
    uint8_t DiedLocation[0xC]; // 0x0018 (0x000C)
    uint64_t HitComponent; // 0x0024 (0x0008)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct FName BoneName; // 0x0030 (0x0008)
    uint8_t Momentum[0xC]; // 0x0038 (0x000C)
    uint64_t DamageType; // 0x0044 (0x0008)
    uint64_t DamageCauser; // 0x004C (0x0008)
    bool bWasDamageCriticalHit; // 0x0054 (0x0001)
    bool bIsCrowdMemberPromoted; // 0x0054 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0055 (0x0003)
    int32_t CrowdMemberId; // 0x0058 (0x0004)
};

// ScriptStruct: BendGame.BendGameEventBase
struct BendGameEventBase {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Action; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    class UObject* Item; // 0x0008 (0x0008)
    class UObject* Weapon; // 0x0010 (0x0008)
    class UObject* Part; // 0x0018 (0x0008)
    int32_t Cost; // 0x0020 (0x0004)
    float ActionValue; // 0x0024 (0x0004)
    uint8_t TrustRequired; // 0x0028 (0x0001)
};

// ScriptStruct: BendGame.DebugOptionChangeDetails
struct DebugOptionChangeDetails {
    struct FString Name; // 0x0000 (0x0010)
    int32_t IntValue; // 0x0010 (0x0004)
    float FloatValue; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.JournalEntryData
struct JournalEntryData {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Description; // 0x0018 (0x0018)
    struct FText Category; // 0x0030 (0x0018)
    uint8_t Image[0x20]; // 0x0048 (0x0020)
    bool bIsHeader; // 0x0068 (0x0001)
    bool bIsComplete; // 0x0069 (0x0001)
    uint8_t MissionState; // 0x006A (0x0001)
};

// ScriptStruct: BendGame.KeyTextureData
struct KeyTextureData : public TableRowBase {
    uint8_t DualShock[0x40]; // 0x0000 (0x0040)
    uint8_t DualSense[0x40]; // 0x0040 (0x0040)
    uint8_t XBoxOne[0x40]; // 0x0080 (0x0040)
    uint8_t SwitchPro[0x40]; // 0x00C0 (0x0040)
    uint8_t GenericGamepad[0x40]; // 0x0100 (0x0040)
    uint8_t Keyboard[0x40]; // 0x0140 (0x0040)
    struct FText DisplayName; // 0x0180 (0x0018)
};

// ScriptStruct: BendGame.KeyIcon
struct KeyIcon {
    class UObject* Icon; // 0x0000 (0x0008)
    uint8_t Color[0x10]; // 0x0008 (0x0010)
    struct FString Glyph; // 0x0018 (0x0010)
    struct FText DisplayName; // 0x0028 (0x0018)
};

// ScriptStruct: BendGame.ActivityCardData
struct ActivityCardData : public TableRowBase {
    class UClass* ActivityCardClass; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.GroupFormationSettings
struct GroupFormationSettings {
    uint8_t formationType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float seperation; // 0x0004 (0x0004)
    int32_t desiredLane; // 0x0008 (0x0004)
    float desiredSpeed; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.CornerInfo
struct CornerInfo {
    uint8_t Rank[0xC]; // 0x0000 (0x000C)
    float maxVelocity; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.CornerRank
struct CornerRank {
    float Min; // 0x0000 (0x0004)
    float Max; // 0x0004 (0x0004)
    int32_t Rank; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.InventoryStatsTableCSV
struct InventoryStatsTableCSV : public TableRowBase {
    struct FName StatName; // 0x0000 (0x0008)
    float MinValue; // 0x0008 (0x0004)
    float MaxValue; // 0x000C (0x0004)
    float StatMinValue; // 0x0010 (0x0004)
    float StatMaxValue; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.InventoryMaterial
struct InventoryMaterial : public TableRowBase {
    struct FText DisplayName; // 0x0000 (0x0018)
    struct FText DisplayDesc; // 0x0018 (0x0018)
    uint8_t MaterialAsset[0x20]; // 0x0030 (0x0020)
};

// ScriptStruct: BendGame.CollectibleIdCSV
struct CollectibleIdCSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    uint8_t CollectibleType; // 0x0160 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0161 (0x0007)
    struct FText ShortDescription; // 0x0168 (0x0018)
    struct FText TextKey; // 0x0180 (0x0018)
    struct FString DetailsTextureThumbnail; // 0x0198 (0x0010)
    struct FName AudioRecording; // 0x01A8 (0x0008)
    struct FString AudioBank; // 0x01B0 (0x0010)
    struct FString AudioCue; // 0x01C0 (0x0010)
};

// ScriptStruct: BendGame.BaseInventoryTableCSV
struct BaseInventoryTableCSV : public TableRowBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FString Name; // 0x0008 (0x0010)
    struct FString Desc; // 0x0018 (0x0010)
    struct FText NameKey; // 0x0028 (0x0018)
    struct FText DescKey; // 0x0040 (0x0018)
    struct FText TutorialText; // 0x0058 (0x0018)
    struct FText TutorialTextKey; // 0x0070 (0x0018)
    int32_t InventoryStackSize; // 0x0088 (0x0004)
    int32_t ItemValue; // 0x008C (0x0004)
    int32_t PickupMinCount; // 0x0090 (0x0004)
    int32_t PickupMaxCount; // 0x0094 (0x0004)
    float PickupRespawnTime; // 0x0098 (0x0004)
    uint8_t Pad_1[0x4]; // 0x009C (0x0004)
    struct FName ECraftComponentType; // 0x00A0 (0x0008)
    struct FName WeaponPartLink; // 0x00A8 (0x0008)
    struct FString StaticMeshPath; // 0x00B0 (0x0010)
    struct FString BlueprintPath; // 0x00C0 (0x0010)
    struct FName OnUseSound; // 0x00D0 (0x0008)
    struct FName OnEquipSound; // 0x00D8 (0x0008)
    struct FName OnPickupSound; // 0x00E0 (0x0008)
    struct FName OnDropSound; // 0x00E8 (0x0008)
    struct FName OnEnterBagSound; // 0x00F0 (0x0008)
    struct FName OnDeaconUse; // 0x00F8 (0x0008)
    struct FName OnDeaconPickup; // 0x0100 (0x0008)
    struct FName OnDeaconDrop; // 0x0108 (0x0008)
    struct FName Tag; // 0x0110 (0x0008)
    struct FName ComponentTypeTagA; // 0x0118 (0x0008)
    struct FName ComponentTypeTagB; // 0x0120 (0x0008)
    struct FName ComponentTypeTagC; // 0x0128 (0x0008)
    struct FName ComponentTypeTagD; // 0x0130 (0x0008)
    struct FName MerchantTag; // 0x0138 (0x0008)
    struct FName MenuTag; // 0x0140 (0x0008)
    uint8_t Rarity; // 0x0148 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0149 (0x0003)
    int32_t SortIndex; // 0x014C (0x0004)
    float UseTime; // 0x0150 (0x0004)
    float CraftTime; // 0x0154 (0x0004)
    bool bIsMissionItem; // 0x0158 (0x0001)
    bool bCannotBeSold; // 0x0158 (0x0001)
    bool bIsCarryOnly; // 0x0158 (0x0001)
};

// ScriptStruct: BendGame.CraftRecipeIdCSV
struct CraftRecipeIdCSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    uint8_t RecipeCategory; // 0x0160 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0161 (0x0007)
    struct FName EInventoryID; // 0x0168 (0x0008)
    int32_t CraftItemCount; // 0x0170 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0174 (0x0004)
    struct FName ComponentTag1A; // 0x0178 (0x0008)
    struct FName ComponentTag1B; // 0x0180 (0x0008)
    struct FName ComponentTag1C; // 0x0188 (0x0008)
    struct FName ComponentTag2A; // 0x0190 (0x0008)
    struct FName ComponentTag2B; // 0x0198 (0x0008)
    struct FName ComponentTag2C; // 0x01A0 (0x0008)
    struct FName ComponentTag3A; // 0x01A8 (0x0008)
    struct FName ComponentTag3B; // 0x01B0 (0x0008)
    struct FName ComponentTag3C; // 0x01B8 (0x0008)
    struct FName ComponentTag4A; // 0x01C0 (0x0008)
    struct FName ComponentTag4B; // 0x01C8 (0x0008)
    struct FName ComponentTag4C; // 0x01D0 (0x0008)
    struct FName ComponentTag5A; // 0x01D8 (0x0008)
    struct FName ComponentTag5B; // 0x01E0 (0x0008)
    struct FName ComponentTag5C; // 0x01E8 (0x0008)
    int32_t ComponentQty1; // 0x01F0 (0x0004)
    int32_t ComponentQty2; // 0x01F4 (0x0004)
    int32_t ComponentQty3; // 0x01F8 (0x0004)
    int32_t ComponentQty4; // 0x01FC (0x0004)
    int32_t ComponentQty5; // 0x0200 (0x0004)
    uint8_t Pad_3[0x4]; // 0x0204 (0x0004)
    struct FName OnCraftSound; // 0x0208 (0x0008)
    struct FString CraftAnimationPath; // 0x0210 (0x0010)
};

// ScriptStruct: BendGame.SkillInventoryCSV
struct SkillInventoryCSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    bool bRequiresBroadcastOnLoad; // 0x0160 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0161 (0x0003)
    uint8_t SkillClass; // 0x0164 (0x0001)
    uint8_t SkillType; // 0x0165 (0x0001)
    uint8_t SkillTier; // 0x0166 (0x0001)
    uint8_t Pad_2[0x1]; // 0x0167 (0x0001)
    struct FString UnlockRequirementDescription; // 0x0168 (0x0010)
    struct FName UnlockSkillIDWhenAcquired; // 0x0178 (0x0008)
};

// ScriptStruct: BendGame.WeaponPartTableCSV
struct WeaponPartTableCSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    struct FName WeaponTagSetKey; // 0x0160 (0x0008)
    uint8_t HardPoint; // 0x0168 (0x0001)
};

// ScriptStruct: BendGame.MotorcyclePartTableCSV
struct MotorcyclePartTableCSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    struct FName PartType; // 0x0160 (0x0008)
    struct FName FrameRequirement; // 0x0168 (0x0008)
    struct FName Stat0; // 0x0170 (0x0008)
    struct FName Stat1; // 0x0178 (0x0008)
    struct FName Stat2; // 0x0180 (0x0008)
    struct FName Stat3; // 0x0188 (0x0008)
};

// ScriptStruct: BendGame.ClothingIdCSV
struct ClothingIdCSV : public TableRowBase {
    struct FString EClothingType; // 0x0000 (0x0010)
    struct FString Name; // 0x0010 (0x0010)
    struct FString StaticMeshPath; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.UtilityIdCSV
struct UtilityIdCSV : public BaseInventoryTableCSV {
};

// ScriptStruct: BendGame.ConsumableId2CSV
struct ConsumableId2CSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    struct FName AttributeModified; // 0x0160 (0x0008)
    float EffectRank; // 0x0168 (0x0004)
    int32_t HealCount; // 0x016C (0x0004)
    struct FName CollectibleTag; // 0x0170 (0x0008)
};

// ScriptStruct: BendGame.WeaponId4CSV
struct WeaponId4CSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    uint8_t WeaponType; // 0x0160 (0x0001)
    uint8_t WeaponRarity; // 0x0161 (0x0001)
    uint8_t Pad_1[0x6]; // 0x0162 (0x0006)
    struct FName EInventoryAmmoID; // 0x0168 (0x0008)
    struct FName WeaponWheelTag; // 0x0170 (0x0008)
    int32_t ClipSize; // 0x0178 (0x0004)
};

// ScriptStruct: BendGame.AmmoID3CSV
struct AmmoID3CSV : public BaseInventoryTableCSV {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    uint8_t WeaponType; // 0x0160 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0161 (0x0007)
    struct FString NPCBlueprintPath; // 0x0168 (0x0010)
};

// ScriptStruct: BendGame.CraftComponentId3CSV
struct CraftComponentId3CSV : public BaseInventoryTableCSV {
};

// ScriptStruct: BendGame.CraftComponentTypeCSV
struct CraftComponentTypeCSV : public TableRowBase {
    struct FString Name; // 0x0000 (0x0010)
    struct FString Desc; // 0x0010 (0x0010)
    struct FText NameKey; // 0x0020 (0x0018)
    struct FText DescKey; // 0x0038 (0x0018)
    int32_t Value; // 0x0050 (0x0004)
    int32_t StackSize; // 0x0054 (0x0004)
    uint8_t Rarity; // 0x0058 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0059 (0x0007)
    struct FName Tag; // 0x0060 (0x0008)
    struct FName MerchantTag; // 0x0068 (0x0008)
    struct FName MenuTag; // 0x0070 (0x0008)
};

// ScriptStruct: BendGame.ActivityCardDataRow
struct ActivityCardDataRow : public TableRowBase {
    struct FName ActivityObjectID; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.BendPlayerLook
struct BendPlayerLook {
    class UObject* Mission; // 0x0000 (0x0008)
    uint8_t Look[0x20]; // 0x0008 (0x0020)
};

// ScriptStruct: BendGame.BendLocationHandleArray
struct BendLocationHandleArray {
    struct TArray<uint8_t> Handles; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.FactionAndInt
struct FactionAndInt {
    struct TArray<uint8_t> Factions; // 0x0000 (0x0010)
    int32_t Int; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendClassDCinPawnData
struct BendClassDCinPawnData {
    class UObject* BendPawn; // 0x0000 (0x0008)
    class UObject* AnimationSequence; // 0x0008 (0x0008)
    uint8_t PawnState; // 0x0010 (0x0001)
    uint8_t AnchorType; // 0x0011 (0x0001)
    uint8_t Pad_0[0xE]; // 0x0012 (0x000E)
    uint8_t PersonalAnchor[0x30]; // 0x0020 (0x0030)
    class UClass* PropClass; // 0x0050 (0x0008)
    struct FName PropSocketAttachName; // 0x0058 (0x0008)
};

// ScriptStruct: BendGame.BehaviorParams
struct BehaviorParams {
    bool ScreamOnAware; // 0x0000 (0x0001)
    bool CanGrapple; // 0x0001 (0x0001)
    bool DisableFlashlight; // 0x0002 (0x0001)
    bool DisableDrops; // 0x0003 (0x0001)
};

// ScriptStruct: BendGame.DefendZoneInfo
struct DefendZoneInfo {
    uint64_t Zone; // 0x0000 (0x0008)
    uint8_t secondaryZone[0x10]; // 0x0008 (0x0010)
    float radiusFromSpawn; // 0x0018 (0x0004)
    uint8_t spawnPos[0xC]; // 0x001C (0x000C)
    uint8_t BindingStrength; // 0x0028 (0x0001)
    bool ignoreZoneIfLos; // 0x0029 (0x0001)
    bool allowRetreatOutsideZone; // 0x002A (0x0001)
    bool ignoreSoundsOutsideZone; // 0x002B (0x0001)
    bool ignoreSightsOutsideZone; // 0x002C (0x0001)
    bool doNotSearchOutsideZone; // 0x002D (0x0001)
    bool UseTeamDefendZones; // 0x002E (0x0001)
};

// ScriptStruct: BendGame.SecondaryDefendZoneInfo
struct SecondaryDefendZoneInfo {
    uint64_t Zone; // 0x0000 (0x0008)
    uint8_t BindingStrength; // 0x0008 (0x0001)
    bool ignoreZoneIfLos; // 0x0009 (0x0001)
    bool allowRetreatOutsideZone; // 0x000A (0x0001)
    bool ignoreSoundsOutsideZone; // 0x000B (0x0001)
    bool ignoreSightsOutsideZone; // 0x000C (0x0001)
    bool UseTeamDefendZones; // 0x000D (0x0001)
};

// ScriptStruct: BendGame.BendNavRotationParams
struct BendNavRotationParams {
    uint8_t DesiredRotation[0xC]; // 0x0000 (0x000C)
    float RotationRadius; // 0x000C (0x0004)
    float AcceptableAngle; // 0x0010 (0x0004)
    bool AllowStrafe; // 0x0014 (0x0001)
};

// ScriptStruct: BendGame.TakeHitInfo
struct TakeHitInfo {
    float ActualDamage; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UClass* DamageTypeClass; // 0x0008 (0x0008)
    class UObject* PawnInstigator; // 0x0010 (0x0008)
    class UObject* DamageCauser; // 0x0018 (0x0008)
    bool bKilled; // 0x0020 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0021 (0x0003)
    int32_t DamageEventClassID; // 0x0024 (0x0004)
    uint8_t GeneralDamageEvent[0x18]; // 0x0028 (0x0018)
    uint8_t PointDamageEvent[0xB0]; // 0x0040 (0x00B0)
    uint8_t RadialDamageEvent[0x48]; // 0x00F0 (0x0048)
    uint8_t EnsureReplicationByte; // 0x0138 (0x0001)
};

// ScriptStruct: BendGame.DecalDataImpactAngle
struct DecalDataImpactAngle {
    float MinAngle; // 0x0000 (0x0004)
    float MaxAngle; // 0x0004 (0x0004)
    uint8_t DecalFXData[0x28]; // 0x0008 (0x0028)
};

// ScriptStruct: BendGame.DecalData
struct DecalData {
    class UObject* DecalMaterial; // 0x0000 (0x0008)
    float DecalSize; // 0x0008 (0x0004)
    float DecalMinSize; // 0x000C (0x0004)
    float DecalDepth; // 0x0010 (0x0004)
    float LifeSpan; // 0x0014 (0x0004)
    float FadeScreenSizeStart; // 0x0018 (0x0004)
    float FadeScreenSizeEnd; // 0x001C (0x0004)
    float SpawnDelay; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.BendExplosionParams
struct BendExplosionParams {
    class UClass* DamageType; // 0x0000 (0x0008)
    class UClass* InitialStatusEffect; // 0x0008 (0x0008)
    float Force; // 0x0010 (0x0004)
    float MinRadius; // 0x0014 (0x0004)
    float MaxRadius; // 0x0018 (0x0004)
    float MinDamage; // 0x001C (0x0004)
    float MaxDamage; // 0x0020 (0x0004)
    float FalloffRate; // 0x0024 (0x0004)
    int32_t MaxPawnsAffected; // 0x0028 (0x0004)
};

// ScriptStruct: BendGame.BendBlendspaceData
struct BendBlendspaceData {
    class UObject* BlendSpace; // 0x0000 (0x0008)
    float BlendInTime; // 0x0008 (0x0004)
    float BlendOutTime; // 0x000C (0x0004)
    float PlayRate; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.PairedAnimationData
struct PairedAnimationData {
    bool UseAnimTime; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float CurrentAnimTime; // 0x0004 (0x0004)
    uint8_t Pad_1[0x8]; // 0x0008 (0x0008)
    uint8_t Animation[0x18]; // 0x0010 (0x0018)
};

// ScriptStruct: BendGame.BendAnimSequenceData
struct BendAnimSequenceData {
    class UObject* AnimSequence; // 0x0000 (0x0008)
    float BlendInTime; // 0x0008 (0x0004)
    float BlendOutTime; // 0x000C (0x0004)
    float BlendOutTriggerTime; // 0x0010 (0x0004)
    float PlayRate; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.FreeDodgeData
struct FreeDodgeData {
    class UObject* BlendSpace; // 0x0000 (0x0008)
    float angle; // 0x0008 (0x0004)
    float Strength; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.DamageTypeModifier
struct DamageTypeModifier {
    uint8_t StatusEffectCondition; // 0x0000 (0x0001)
    uint8_t BaseDamageType; // 0x0001 (0x0001)
    uint8_t SubDamageType; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    float DamageMultiplier; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendAsyncObjectLoadList
struct BendAsyncObjectLoadList {
    struct TArray<uint8_t> ObjectsToLoad; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.ImpactFxData
struct ImpactFxData {
    uint8_t TypeOfSurface; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t PenetrationCost; // 0x0004 (0x0004)
    bool DontPlayDefaultSoundFX; // 0x0008 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0009 (0x0007)
    class UObject* PlayerSoundFX; // 0x0010 (0x0008)
    class UObject* PlayerSoundFXWetSurface; // 0x0018 (0x0008)
    class UObject* SoundFX; // 0x0020 (0x0008)
    class UObject* SoundFXWetSurface; // 0x0028 (0x0008)
    class UObject* SoundExitSurface; // 0x0030 (0x0008)
    float SoundOffsetPosition; // 0x0038 (0x0004)
    float ParticleOffsetPosition; // 0x003C (0x0004)
    bool UseMovementDirection; // 0x0040 (0x0001)
    bool UseSurfaceNormal; // 0x0041 (0x0001)
    bool UseCodeRotation; // 0x0042 (0x0001)
    bool DontPlayDefaultParticleFX; // 0x0043 (0x0001)
    uint8_t Pad_2[0x4]; // 0x0044 (0x0004)
    class UObject* ParticleFX; // 0x0048 (0x0008)
    uint8_t ParticleFX_BP[0x20]; // 0x0050 (0x0020)
    uint8_t ParticleFX_Enum; // 0x0070 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0071 (0x0007)
    class UObject* ParticleFXWet; // 0x0078 (0x0008)
    uint8_t ParticleFXWet_BP[0x20]; // 0x0080 (0x0020)
    class UObject* ParticleExitFX; // 0x00A0 (0x0008)
    uint8_t ParticleExitFX_BP[0x20]; // 0x00A8 (0x0020)
    float DecalOffsetPosition; // 0x00C8 (0x0004)
    bool DontRenderDefaultDecals; // 0x00CC (0x0001)
    uint8_t Pad_4[0x3]; // 0x00CD (0x0003)
    uint8_t DecalFX[0x28]; // 0x00D0 (0x0028)
    uint8_t DecalFXImpactAngle[0x30]; // 0x00F8 (0x0030)
    uint8_t DecalFXWet[0x28]; // 0x0128 (0x0028)
    uint8_t DecalFXWetImpactAngle[0x30]; // 0x0150 (0x0030)
    uint8_t DecalExitSpray[0x18]; // 0x0180 (0x0018)
};

// ScriptStruct: BendGame.DecalDataExitSpray
struct DecalDataExitSpray {
    struct TArray<uint8_t> DecalExitSprayList; // 0x0000 (0x0010)
    float FadeScreenSizeStart; // 0x0010 (0x0004)
    float FadeScreenSizeEnd; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.DecalDataExitSprayItem
struct DecalDataExitSprayItem {
    class UObject* DecalMaterial; // 0x0000 (0x0008)
    float OffsetHorizontal; // 0x0008 (0x0004)
    float OffsetVertical; // 0x000C (0x0004)
    float DecalSize; // 0x0010 (0x0004)
    float DecalDepth; // 0x0014 (0x0004)
    uint8_t SurfaceOrientation; // 0x0018 (0x0001)
    bool UseRandomRotation; // 0x0019 (0x0001)
    uint8_t Pad_0[0x2]; // 0x001A (0x0002)
    float LifeSpan; // 0x001C (0x0004)
};

// ScriptStruct: BendGame.WeaponComparisonData
struct WeaponComparisonData : public TableRowBase {
    float ProjectileDamage; // 0x0000 (0x0004)
    float ProjectilesPerShot; // 0x0004 (0x0004)
    float Damage; // 0x0008 (0x0004)
    float FireRate; // 0x000C (0x0004)
    float Range; // 0x0010 (0x0004)
    float Accuracy; // 0x0014 (0x0004)
    float AmmoCapacity; // 0x0018 (0x0004)
    float ProjectilePenetration; // 0x001C (0x0004)
    float MinSkillDamage; // 0x0020 (0x0004)
    float MaxSkillDamage; // 0x0024 (0x0004)
    int32_t MeleeHealth; // 0x0028 (0x0004)
    int32_t Rarity; // 0x002C (0x0004)
    struct FName Slot; // 0x0030 (0x0008)
    float BaseStoppingPower; // 0x0038 (0x0004)
    float IncStoppingPower; // 0x003C (0x0004)
    float AccumStoppingPower; // 0x0040 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0044 (0x0004)
    struct FName MagazineUpgradeTag; // 0x0048 (0x0008)
    int32_t MagazineUpgradeSize; // 0x0050 (0x0004)
};

// ScriptStruct: BendGame.BendFiringPatternData
struct BendFiringPatternData {
    int32_t MinShotsPerBurst; // 0x0000 (0x0004)
    int32_t MaxShotsPerBurst; // 0x0004 (0x0004)
    float MinTimeBetweenShots; // 0x0008 (0x0004)
    float MaxTimeBetweenShots; // 0x000C (0x0004)
    float MinTimeBetweenBursts; // 0x0010 (0x0004)
    float MaxTimeBetweenBursts; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.WeaponOrderList
struct WeaponOrderList {
};

// ScriptStruct: BendGame.WeaponInitializationList
struct WeaponInitializationList {
    uint8_t Data[0x3]; // 0x0000 (0x0003)
};

// ScriptStruct: BendGame.WeaponInitializationData
struct WeaponInitializationData {
    uint8_t WeaponID; // 0x0000 (0x0001)
    uint8_t AmmoID_Override; // 0x0001 (0x0001)
    bool EquipOnAdd; // 0x0002 (0x0001)
};

// ScriptStruct: BendGame.ProjectileData
struct ProjectileData {
    class UClass* ImpactTemplate; // 0x0000 (0x0008)
    class UClass* ExplosionImpactTemplate; // 0x0008 (0x0008)
    class UClass* InitialExplosionStatusEffect; // 0x0010 (0x0008)
    float InitialVelocity; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t BowVelocityCurve[0x80]; // 0x0020 (0x0080)
    uint8_t BowVelocityDamageModifier[0x80]; // 0x00A0 (0x0080)
    uint8_t Pad_1[0xC]; // 0x0120 (0x000C)
    float BloodOnWallMaxDistance; // 0x012C (0x0004)
    float MinDamageAnimBlendSpacePercentage; // 0x0130 (0x0004)
    float MaxDamageAnimBlendSpacePercentage; // 0x0134 (0x0004)
    float MinImpactForce; // 0x0138 (0x0004)
    float MaxImpactForce; // 0x013C (0x0004)
    float MinPawnImpactForce; // 0x0140 (0x0004)
    float MaxPawnImpactForce; // 0x0144 (0x0004)
    float MinDeadPawnImpactForce; // 0x0148 (0x0004)
    float MaxDeadPawnImpactForce; // 0x014C (0x0004)
    bool UseMinWeaponRange; // 0x0150 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0151 (0x0003)
    float MinWeaponRange; // 0x0154 (0x0004)
    float MaxWeaponRange; // 0x0158 (0x0004)
    float MaxDamageFalloffRange; // 0x015C (0x0004)
    float MaxWeaponBlindfireRange; // 0x0160 (0x0004)
    float IdealWeaponBlindfireRange; // 0x0164 (0x0004)
    bool OverrideWeaponsDamage; // 0x0168 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0169 (0x0003)
    int32_t MinHitDamage; // 0x016C (0x0004)
    int32_t MaxHitDamage; // 0x0170 (0x0004)
    uint8_t Pad_4[0x8]; // 0x0174 (0x0008)
    float MaxWeaponCritRange; // 0x017C (0x0004)
    uint8_t Pad_5[0x4]; // 0x0180 (0x0004)
    int32_t HitReactionsHardMaxDist; // 0x0184 (0x0004)
    int32_t HitReactionsMediumMaxDist; // 0x0188 (0x0004)
    bool NPCUseMinWeaponRange; // 0x018C (0x0001)
    uint8_t Pad_6[0x3]; // 0x018D (0x0003)
    float NPCMinWeaponRange; // 0x0190 (0x0004)
    float NPCMaxWeaponRange; // 0x0194 (0x0004)
    int32_t NPCMinHitDamage; // 0x0198 (0x0004)
    int32_t NPCMaxHitDamage; // 0x019C (0x0004)
    float NPCChanceOfHit; // 0x01A0 (0x0004)
    bool ShouldExplodeOnImpact; // 0x01A4 (0x0001)
    bool ShouldExplodeAtRest; // 0x01A5 (0x0001)
    bool CanExplodeExplosives; // 0x01A6 (0x0001)
    bool ShouldNPCsIgnore; // 0x01A7 (0x0001)
    bool CanIgniteNests; // 0x01A8 (0x0001)
    bool CanTriggerBearTraps; // 0x01A9 (0x0001)
    bool IsTrackedForTrophies; // 0x01AA (0x0001)
    uint8_t TrophyKillType; // 0x01AB (0x0001)
    uint8_t BND150TrophyKillType; // 0x01AC (0x0001)
    uint8_t Pad_7[0x3]; // 0x01AD (0x0003)
    float ExplodeAfterImpactTimer; // 0x01B0 (0x0004)
    float ExplodeAfterReleasedTimer; // 0x01B4 (0x0004)
    int32_t MinExplosionDamage; // 0x01B8 (0x0004)
    int32_t MaxExplosionDamage; // 0x01BC (0x0004)
    float MinExplosionRadius; // 0x01C0 (0x0004)
    float MaxExplosionRadius; // 0x01C4 (0x0004)
    int32_t MaxPawnsAffectedByExplosion; // 0x01C8 (0x0004)
    float ExplosionForce; // 0x01CC (0x0004)
    float ExplosionOffsetFromNormal; // 0x01D0 (0x0004)
    uint8_t Pad_8[0x4]; // 0x01D4 (0x0004)
    class UClass* DamageType; // 0x01D8 (0x0008)
    class UClass* ExplosionDamageType; // 0x01E0 (0x0008)
    uint8_t ExplosiveType; // 0x01E8 (0x0001)
    uint8_t Pad_9[0x7]; // 0x01E9 (0x0007)
    struct FName ProjectileFXAttachPoint; // 0x01F0 (0x0008)
    class UObject* ProjectileFX; // 0x01F8 (0x0008)
    class UObject* ProjectileSmokeFX; // 0x0200 (0x0008)
    class UObject* BoltEquipFX; // 0x0208 (0x0008)
    class UObject* NPCProjectileFX; // 0x0210 (0x0008)
    class UObject* NPCProjectileSmokeFX; // 0x0218 (0x0008)
    uint8_t ShellCasingFX[0x18]; // 0x0220 (0x0018)
    float MeshHitBloodRadiusInitial; // 0x0238 (0x0004)
    float MeshHitBloodRadiusFinal; // 0x023C (0x0004)
    float MeshHitBloodRadiusTransitionTime; // 0x0240 (0x0004)
    bool OverrideWeaponsBloodIntensity; // 0x0244 (0x0001)
    uint8_t Pad_10[0x3]; // 0x0245 (0x0003)
    float MeshHitBloodIntensity; // 0x0248 (0x0004)
    float MeshHitBloodRandomizationLevel; // 0x024C (0x0004)
};

// ScriptStruct: BendGame.ProjectileShellCasingData
struct ProjectileShellCasingData {
    struct FName ShellCasingEjectSocket; // 0x0000 (0x0008)
    class UObject* ShellCasingFX; // 0x0008 (0x0008)
    class UObject* NPCShellCasingFX; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.CreateProjectileData
struct CreateProjectileData {
};

// ScriptStruct: BendGame.WeaponDataOverride
struct WeaponDataOverride {
    bool OverrideCoreWeaponData; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t CoreData[0x180]; // 0x0008 (0x0180)
    bool OverrideAmmoWeaponData; // 0x0188 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0189 (0x0007)
    uint8_t AmmoData[0x30]; // 0x0190 (0x0030)
    bool OverrideAimedAccuracyWeaponData; // 0x01C0 (0x0001)
    uint8_t Pad_2[0x7]; // 0x01C1 (0x0007)
    uint8_t AimedAccuracy[0x240]; // 0x01C8 (0x0240)
    bool OverrideBlindFireAccuracyWeaponData; // 0x0408 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0409 (0x0007)
    uint8_t BlindFireAccuracy[0x188]; // 0x0410 (0x0188)
    bool OverrideRecoilWeaponData; // 0x0598 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0599 (0x0003)
    uint8_t RecoilData[0xC]; // 0x059C (0x000C)
    bool OverrideUpRecoilWeaponData; // 0x05A8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x05A9 (0x0003)
    uint8_t RecoilUpData[0x10]; // 0x05AC (0x0010)
    bool OverrideRightRecoilWeaponData; // 0x05BC (0x0001)
    uint8_t Pad_6[0x3]; // 0x05BD (0x0003)
    uint8_t RecoilRightData[0x10]; // 0x05C0 (0x0010)
    bool OverrideRecoilShakeWeaponData; // 0x05D0 (0x0001)
    uint8_t Pad_7[0x3]; // 0x05D1 (0x0003)
    uint8_t RecoilShakeData[0x10]; // 0x05D4 (0x0010)
    bool OverrideMeleeWeaponData; // 0x05E4 (0x0001)
    uint8_t Pad_8[0x3]; // 0x05E5 (0x0003)
    uint8_t MeleeData[0x148]; // 0x05E8 (0x0148)
    bool OverrideSoundWeaponData; // 0x0730 (0x0001)
    uint8_t Pad_9[0x7]; // 0x0731 (0x0007)
    uint8_t SoundData[0x58]; // 0x0738 (0x0058)
    bool OverrideMuzzleFlashWeaponData; // 0x0790 (0x0001)
    uint8_t Pad_10[0x7]; // 0x0791 (0x0007)
    uint8_t MuzzleFlashData[0x18]; // 0x0798 (0x0018)
    bool OverrideEquippedFXWeaponData; // 0x07B0 (0x0001)
    uint8_t Pad_11[0x7]; // 0x07B1 (0x0007)
    uint8_t EquippedFXData[0x38]; // 0x07B8 (0x0038)
    bool OverrideScopeZoomWeaponData; // 0x07F0 (0x0001)
    uint8_t Pad_12[0x7]; // 0x07F1 (0x0007)
    uint8_t ScopeZoomData[0x38]; // 0x07F8 (0x0038)
    uint8_t GlobalBonusData[0x9C]; // 0x0830 (0x009C)
    uint8_t Pad_13[0x4]; // 0x08CC (0x0004)
    struct TArray<uint8_t> StateBonusData; // 0x08D0 (0x0010)
};

// ScriptStruct: BendGame.WeaponBonusData
struct WeaponBonusData {
    uint8_t BonusType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float MinAccuracyRadius; // 0x0004 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0008 (0x0004)
    float MaxAccuracyRadius; // 0x000C (0x0004)
    uint8_t Pad_2[0x4]; // 0x0010 (0x0004)
    float NumDegreesIncRadiusPerShot; // 0x0014 (0x0004)
    float NumSecReturnMinAccuracy; // 0x0018 (0x0004)
    float MovingAccuracyPenaltyReductionPercent; // 0x001C (0x0004)
    float MinRecoilUpAngle; // 0x0020 (0x0004)
    float MaxRecoilUpAngle; // 0x0024 (0x0004)
    float NumSecReturnFromUpRecoil; // 0x0028 (0x0004)
    float MinRecoilRightAngle; // 0x002C (0x0004)
    float MaxRecoilRightAngle; // 0x0030 (0x0004)
    float NumSecReturnFromRightRecoil; // 0x0034 (0x0004)
    float NoiseReductionAmt; // 0x0038 (0x0004)
    uint8_t Pad_3[0x4]; // 0x003C (0x0004)
    float AmmoPerClipIncAmt; // 0x0040 (0x0004)
    int32_t AmmoPerClip; // 0x0044 (0x0004)
    float MinHitDamagePer; // 0x0048 (0x0004)
    uint8_t Pad_4[0x4]; // 0x004C (0x0004)
    float MaxHitDamagePer; // 0x0050 (0x0004)
    uint8_t Pad_5[0x4]; // 0x0054 (0x0004)
    float NPCMinHitDamagePer; // 0x0058 (0x0004)
    uint8_t Pad_6[0x4]; // 0x005C (0x0004)
    float NPCMaxHitDamagePer; // 0x0060 (0x0004)
    uint8_t Pad_7[0x4]; // 0x0064 (0x0004)
    float TimeBetweenShotsPer; // 0x0068 (0x0004)
    uint8_t Pad_8[0x4]; // 0x006C (0x0004)
    float NPCTimeBetweenShotsMinPer; // 0x0070 (0x0004)
    uint8_t Pad_9[0x4]; // 0x0074 (0x0004)
    float NPCTimeBetweenShotsMaxPer; // 0x0078 (0x0004)
    uint8_t Pad_10[0x4]; // 0x007C (0x0004)
    float fReloadTime; // 0x0080 (0x0004)
    float StoppingPowerIncrease; // 0x0084 (0x0004)
    uint8_t Pad_11[0x8]; // 0x0088 (0x0008)
    int32_t ProjectilePenetrationIncrease; // 0x0090 (0x0004)
};

// ScriptStruct: BendGame.WeaponScopeZoomData
struct WeaponScopeZoomData {
    float MinZoomPower; // 0x0000 (0x0004)
    float MaxZoomPower; // 0x0004 (0x0004)
    float SmoothZoomTime; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* SmoothZoomLoopingSound; // 0x0010 (0x0008)
    int32_t NumberOfSteps; // 0x0018 (0x0004)
    bool LoopBackToMinZoomPower; // 0x001C (0x0001)
    bool LoopBackToMaxZoomPower; // 0x001D (0x0001)
    uint8_t Pad_1[0x2]; // 0x001E (0x0002)
    class UObject* StepZoomSound; // 0x0020 (0x0008)
    float CameraSpeedAtMinZoom; // 0x0028 (0x0004)
    float CameraSpeedAtMaxZoom; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.WeaponEquippedFXData
struct WeaponEquippedFXData {
    struct FName WeaponFXAttachPoint; // 0x0000 (0x0008)
    class UObject* WeaponFX; // 0x0008 (0x0008)
    class UObject* WeaponAudioFX; // 0x0010 (0x0008)
    bool OverrideShellCasingFX; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    uint8_t ShellCasingFXOverride[0x18]; // 0x0020 (0x0018)
};

// ScriptStruct: BendGame.WeaponMuzzleFlashData
struct WeaponMuzzleFlashData {
    struct FName MuzzleAttachPoint; // 0x0000 (0x0008)
    class UObject* MuzzleFX; // 0x0008 (0x0008)
    class UObject* NPCMuzzleFX; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.WeaponSoundsData
struct WeaponSoundsData {
    class UObject* FireSound; // 0x0000 (0x0008)
    class UObject* DeadEyeFireSound; // 0x0008 (0x0008)
    class UObject* NPCFireSound; // 0x0010 (0x0008)
    class UObject* OutOfAmmoSound; // 0x0018 (0x0008)
    class UObject* ReloadSound; // 0x0020 (0x0008)
    class UObject* BreakSound; // 0x0028 (0x0008)
    class UObject* MeleeDeathBlowSound; // 0x0030 (0x0008)
    float FireSoundAIVolume; // 0x0038 (0x0004)
    uint8_t Pad_0[0x4]; // 0x003C (0x0004)
    class UObject* EquippedFoleySound; // 0x0040 (0x0008)
    class UObject* HolsteredFoleySound; // 0x0048 (0x0008)
    int32_t WeaponSoundsGlobalRegister; // 0x0050 (0x0004)
    int32_t WeaponSoundsID; // 0x0054 (0x0004)
};

// ScriptStruct: BendGame.WeaponMeleeData
struct WeaponMeleeData {
    bool CanMeleeComboWithoutSkill; // 0x0000 (0x0001)
    bool IsCraftedMeleeWeapon; // 0x0001 (0x0001)
    bool UseLargeMeleeWpnCapsules; // 0x0002 (0x0001)
    bool UsePlayRateCurve; // 0x0003 (0x0001)
    bool OnlyDamageMeleeTarget; // 0x0004 (0x0001)
    bool CanDamageMultiWithSkill; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    int32_t AmtOfHealthToTakeOffOfWpnPerHit; // 0x0008 (0x0004)
    int32_t AmtOfHealthToTakeOffOfWpnPerHit_Skill; // 0x000C (0x0004)
    int32_t AmtOfHealthToTakeOffOfWpnPerHit_SkillTwo; // 0x0010 (0x0004)
    int32_t MeleeHitDamage; // 0x0014 (0x0004)
    int32_t MeleeHitDamageMax; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    uint8_t MeleeTierDamageData[0x20]; // 0x0020 (0x0020)
    uint8_t DamageUpgradeSkill[0x8]; // 0x0040 (0x0008)
    int32_t SkilledMeleeHitDamage; // 0x0048 (0x0004)
    int32_t SkilledMeleeHitDamageMax; // 0x004C (0x0004)
    float CriticalHitChance; // 0x0050 (0x0004)
    int32_t NPCMeleeHitDamage; // 0x0054 (0x0004)
    int32_t NPCMeleeHitDamageMax; // 0x0058 (0x0004)
    int32_t MeleeHeavyHitDamage; // 0x005C (0x0004)
    int32_t NPCMeleeHeavyHitDamage; // 0x0060 (0x0004)
    float MeleeVeryLowStaminaValue; // 0x0064 (0x0004)
    float MeleeLowStaminaValue; // 0x0068 (0x0004)
    int32_t LowStaminaMeleeHitDamage; // 0x006C (0x0004)
    int32_t MaxHealth; // 0x0070 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0074 (0x0004)
    struct TArray<uint8_t> MeleeDamageModifiers; // 0x0078 (0x0010)
    float MeleeBrokenDamageModifier; // 0x0088 (0x0004)
    uint8_t Pad_3[0x4]; // 0x008C (0x0004)
    struct FName BloodParticleSocketName; // 0x0090 (0x0008)
    class UObject* BloodWeaponParticleFX; // 0x0098 (0x0008)
    class UObject* BrokenWeaponParticleFX; // 0x00A0 (0x0008)
    struct TArray<uint8_t> BrokenWeaponParticleFXList; // 0x00A8 (0x0010)
    class UClass* MeleeImpactTemplate; // 0x00B8 (0x0008)
    class UClass* MeleeDamageType; // 0x00C0 (0x0008)
    class UClass* OnBikeMeleeDamageType; // 0x00C8 (0x0008)
    float VelocityNeededToUseOnBikeWeapon; // 0x00D0 (0x0004)
    uint8_t Pad_4[0xC]; // 0x00D4 (0x000C)
    uint8_t MeshHitBloodData[0x14]; // 0x00E0 (0x0014)
    float MeleeStaminaCostPerHit; // 0x00F4 (0x0004)
    float MeleeStaminaCostPerHeavySwing; // 0x00F8 (0x0004)
    uint8_t Pad_5[0x4]; // 0x00FC (0x0004)
    class UObject* MeleeChargingAnimation; // 0x0100 (0x0008)
    class UObject* MeleeArmAndReadyAnimOnBike; // 0x0108 (0x0008)
    float MinNumSecToLeaveVictimInStunState; // 0x0110 (0x0004)
    float MaxNumSecToLeaveVictimInStunState; // 0x0114 (0x0004)
    float TimeDilationValueForCriticalHit; // 0x0118 (0x0004)
    float TimeDilationValueForHitOnBike; // 0x011C (0x0004)
    float MinVelocityHitTimeDilationOnBike; // 0x0120 (0x0004)
    float AmountToIncAdrenalineMeterPerHit; // 0x0124 (0x0004)
    float AutoTargetMaxAngle; // 0x0128 (0x0004)
    float AutoTargetMaxSecondaryAngle; // 0x012C (0x0004)
    float AutoTargetJoystickInputMaxAngle; // 0x0130 (0x0004)
    float AutoTargetJoystickInputMaxSecondaryAngle; // 0x0134 (0x0004)
    float AutoTargetMaxDistance; // 0x0138 (0x0004)
    float FindTargetMaxDistance; // 0x013C (0x0004)
    float TargetMaxDistBlockMissSwing; // 0x0140 (0x0004)
};

// ScriptStruct: BendGame.BendMeshHitBloodData
struct BendMeshHitBloodData {
    float MeshHitBloodRadiusInitial; // 0x0000 (0x0004)
    float MeshHitBloodRadiusFinal; // 0x0004 (0x0004)
    float MeshHitBloodRadiusTransitionTime; // 0x0008 (0x0004)
    float MeshHitBloodIntensity; // 0x000C (0x0004)
    float MeshHitBloodRandomizationLevel; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.MeleeDamageModifierData
struct MeleeDamageModifierData {
    float WeaponHealthPercentage; // 0x0000 (0x0004)
    float DamagePercentModifier; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.MeleeTierDamageData
struct MeleeTierDamageData {
    struct TArray<uint8_t> MeleeTiers; // 0x0000 (0x0010)
    bool UseMeleeDamageTierPercentIncrease; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float MeleeDamageTierPercentIncreaseT1; // 0x0014 (0x0004)
    float MeleeDamageTierPercentIncreaseT2; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.MeleeTierValues
struct MeleeTierValues {
    int32_t MeleeDamageByTier; // 0x0000 (0x0004)
    float MeleeDamageModifierPerExtraEnemyHit; // 0x0004 (0x0004)
    bool UseHitReactionMeleeTier; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.WeaponRecoilShakeData
struct WeaponRecoilShakeData {
    float CameraShakeRightLeftAngle; // 0x0000 (0x0004)
    float CameraShakeUpDownAngle; // 0x0004 (0x0004)
    int32_t NumTimesCameraShake; // 0x0008 (0x0004)
    float NumSecCameraShakeTakes; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.WeaponRecoilMovementData
struct WeaponRecoilMovementData {
    float MinRecoilAngle; // 0x0000 (0x0004)
    float MaxRecoilAngle; // 0x0004 (0x0004)
    float NumSecRecoil; // 0x0008 (0x0004)
    float NumSecReturnFromRecoil; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.WeaponRecoilData
struct WeaponRecoilData {
    int32_t NumShotsRecoilAngleLocked; // 0x0000 (0x0004)
    int32_t NumShotsApplyRecoilMultiplier; // 0x0004 (0x0004)
    float PerShotRecoilMultiplier; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.WeaponBlindfireAccuracyData
struct WeaponBlindfireAccuracyData {
    uint8_t AccuracyVsDistance[0x80]; // 0x0000 (0x0080)
    uint8_t AccuracyMaxVsDistance[0x80]; // 0x0080 (0x0080)
    uint8_t PercentagePerSecondVsDistance[0x80]; // 0x0100 (0x0080)
    float AccuracyLostPerShot; // 0x0180 (0x0004)
    float BoostAccuracyModifier; // 0x0184 (0x0004)
};

// ScriptStruct: BendGame.WeaponAccuracyData
struct WeaponAccuracyData {
    float MinAccuracyRadius; // 0x0000 (0x0004)
    float MaxAccuracyRadius; // 0x0004 (0x0004)
    float NumDegreesIncRadiusPerShot; // 0x0008 (0x0004)
    float NumSecReturnMinAccuracy; // 0x000C (0x0004)
    float NumSecReturnMinAccuracyAfterMoving; // 0x0010 (0x0004)
    float NumSecReturnMinAccuracyAfterRotating; // 0x0014 (0x0004)
    float NumSecReturnMinAccuracyAfterAiming; // 0x0018 (0x0004)
    float NumSecWaitAfterLastShot; // 0x001C (0x0004)
    float NumSecWaitAfterMoving; // 0x0020 (0x0004)
    float MinReticleSize; // 0x0024 (0x0004)
    float MaxReticleSize; // 0x0028 (0x0004)
    float AimAssistAngleWeight; // 0x002C (0x0004)
    float AimAssistDistanceWeight; // 0x0030 (0x0004)
    float AimAssistNearDistance; // 0x0034 (0x0004)
    float AimAssistFarDistance; // 0x0038 (0x0004)
    float MagnetismStrength; // 0x003C (0x0004)
    uint8_t DurabilityvsAccuracyCurve[0x80]; // 0x0040 (0x0080)
    uint8_t TurnSpeedvsAccuracyCurve[0x80]; // 0x00C0 (0x0080)
    uint8_t VelocityvsAccuracyCurve[0x80]; // 0x0140 (0x0080)
    uint8_t DiffAmountvsIncreaseAmount[0x80]; // 0x01C0 (0x0080)
};

// ScriptStruct: BendGame.WeaponAmmoData
struct WeaponAmmoData {
    bool bInfiniteAmmo; // 0x0000 (0x0001)
    bool bInfiniteClip; // 0x0001 (0x0001)
    bool bAffectedByInfiniteAmmoModifier; // 0x0002 (0x0001)
    bool bUsesShells; // 0x0003 (0x0001)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    int32_t MaxSpareAmmo; // 0x0008 (0x0004)
    int32_t AmmoPerClip; // 0x000C (0x0004)
    int32_t InitialClips; // 0x0010 (0x0004)
    float CheckOutOfAmmoTimer; // 0x0014 (0x0004)
    uint8_t NPCAmmoDropRange[0x8]; // 0x0018 (0x0008)
    struct TArray<uint8_t> ClipMeshes; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.WeaponCoreData
struct WeaponCoreData {
    int32_t WeaponLevel; // 0x0000 (0x0004)
    uint8_t FireMode; // 0x0004 (0x0001)
    uint8_t WeaponScariness; // 0x0005 (0x0001)
    uint8_t WeaponRarity; // 0x0006 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0007 (0x0001)
    int32_t MinHitDamage; // 0x0008 (0x0004)
    int32_t MaxHitDamage; // 0x000C (0x0004)
    bool UseStealthBonusDamage; // 0x0010 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0011 (0x0003)
    int32_t StealthBonusDamage; // 0x0014 (0x0004)
    int32_t NPCMinHitDamage; // 0x0018 (0x0004)
    int32_t NPCMaxHitDamage; // 0x001C (0x0004)
    int32_t EnemiesToTakeFullDamage; // 0x0020 (0x0004)
    int32_t ReducedDamageOverflow; // 0x0024 (0x0004)
    int32_t NPCReducedDamageOverflow; // 0x0028 (0x0004)
    bool UseWeaponRangeToCalcStoppingPower; // 0x002C (0x0001)
    uint8_t Pad_2[0x3]; // 0x002D (0x0003)
    float MinStoppingPower; // 0x0030 (0x0004)
    float MaxStoppingPower; // 0x0034 (0x0004)
    float MinStoppingPowerBase; // 0x0038 (0x0004)
    float MaxStoppingPowerBase; // 0x003C (0x0004)
    float MaxAccumulatedStoppingPower; // 0x0040 (0x0004)
    float NPCMinStoppingPower; // 0x0044 (0x0004)
    float NPCMaxStoppingPower; // 0x0048 (0x0004)
    float NPCMinStoppingPowerBase; // 0x004C (0x0004)
    float NPCMaxStoppingPowerBase; // 0x0050 (0x0004)
    float NPCMaxAccumulatedStoppingPower; // 0x0054 (0x0004)
    int32_t BarrelCount; // 0x0058 (0x0004)
    float TimeBetweenBarrelShots; // 0x005C (0x0004)
    uint8_t Pad_3[0x4]; // 0x0060 (0x0004)
    float TimeBetweenShots; // 0x0064 (0x0004)
    float VehicleTimeBetweenShots; // 0x0068 (0x0004)
    float FocusModeTimeBetweenShots; // 0x006C (0x0004)
    float VehicleFocusModeTimeBetweenShots; // 0x0070 (0x0004)
    float FocusModeAnimScalar; // 0x0074 (0x0004)
    float NPCTimeBetweenShotsMin; // 0x0078 (0x0004)
    float NPCTimeBetweenShotsMax; // 0x007C (0x0004)
    int32_t NPCBurstRangeMin; // 0x0080 (0x0004)
    int32_t NPCBurstRangeMax; // 0x0084 (0x0004)
    int32_t NumProjectilesToCreate; // 0x0088 (0x0004)
    bool bUseAnimCallbackToFire; // 0x008C (0x0001)
    uint8_t Pad_4[0x3]; // 0x008D (0x0003)
    float fReloadTime; // 0x0090 (0x0004)
    float fWeaponSway; // 0x0094 (0x0004)
    float fSwayCycleTime; // 0x0098 (0x0004)
    float fSwayPitchMagMult; // 0x009C (0x0004)
    float fWeaponSwayCrouching; // 0x00A0 (0x0004)
    float fSwayCycleTimeCrouching; // 0x00A4 (0x0004)
    float fSwayPitchMagMultCrouching; // 0x00A8 (0x0004)
    float fBowDrawTime; // 0x00AC (0x0004)
    float fBowOverdrawTime; // 0x00B0 (0x0004)
    float fMaxWeaponDurability; // 0x00B4 (0x0004)
    float fDurabilityLossPerShot; // 0x00B8 (0x0004)
    uint8_t Pad_5[0x4]; // 0x00BC (0x0004)
    float MaxHeat; // 0x00C0 (0x0004)
    float HeatIncreasePerShot; // 0x00C4 (0x0004)
    float HeatDecreaseRate; // 0x00C8 (0x0004)
    float HeatDecreaseCooldown; // 0x00CC (0x0004)
    uint8_t Pad_6[0x4]; // 0x00D0 (0x0004)
    float OverheatedCooldown; // 0x00D4 (0x0004)
    uint8_t Pad_7[0x4]; // 0x00D8 (0x0004)
    bool IsRocket; // 0x00DC (0x0001)
    uint8_t Pad_8[0xB]; // 0x00DD (0x000B)
    uint8_t DurabilityvsDamageCurve[0x80]; // 0x00E8 (0x0080)
    uint8_t Pad_9[0x4]; // 0x0168 (0x0004)
    float SpinUpTime; // 0x016C (0x0004)
    float SpinDownTime; // 0x0170 (0x0004)
    uint8_t Pad_10[0x4]; // 0x0174 (0x0004)
    struct FName BraggingVO; // 0x0178 (0x0008)
};

// ScriptStruct: BendGame.WeaponAnimPlaybackData
struct WeaponAnimPlaybackData {
    class UObject* WeaponBlendspace; // 0x0000 (0x0008)
    float AdditiveBlendWeight; // 0x0008 (0x0004)
    bool bPlayWeaponBlendspace; // 0x000C (0x0001)
    bool bIsWeaponBlendspaceAdditive; // 0x000C (0x0001)
};

// ScriptStruct: BendGame.WeaponAnim
struct WeaponAnim {
    class UObject* Pawn; // 0x0000 (0x0008)
    class UObject* PawnMirrored; // 0x0008 (0x0008)
    class UObject* PawnBlendspace; // 0x0010 (0x0008)
    class UObject* Weapon; // 0x0018 (0x0008)
    class UObject* WeaponMirrored; // 0x0020 (0x0008)
    float AdditiveBlendWeight; // 0x0028 (0x0004)
};

// ScriptStruct: BendGame.WeaponData
struct WeaponData {
    bool bDebugOn; // 0x0000 (0x0001)
    bool bAllowUseOnBike; // 0x0001 (0x0001)
    bool bReEquipOnThrow; // 0x0002 (0x0001)
    uint8_t Pad_0[0x5]; // 0x0003 (0x0005)
    struct FName HolsterAttachPoint; // 0x0008 (0x0008)
    struct FName EquippedAttachPoint; // 0x0010 (0x0008)
    bool bCanBeStoredInInventory; // 0x0018 (0x0001)
    bool bCanPlayerHolster; // 0x0019 (0x0001)
    bool bCanNPCHolster; // 0x001A (0x0001)
    bool bUseOverheatSystem; // 0x001B (0x0001)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* pPickupBlueprint; // 0x0020 (0x0008)
    class UObject* BeatupMaterial; // 0x0028 (0x0008)
    class UObject* OwnedMaterial; // 0x0030 (0x0008)
    int32_t MaterialIndexLimit; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    uint8_t CoreData[0x180]; // 0x0040 (0x0180)
    uint8_t AmmoData[0x30]; // 0x01C0 (0x0030)
    uint8_t AimedAccuracy[0x240]; // 0x01F0 (0x0240)
    uint8_t VehicleAimedAccuracy[0x240]; // 0x0430 (0x0240)
    uint8_t ThrowingData[0x20]; // 0x0670 (0x0020)
    uint8_t BlindfireAccuracySettings[0x188]; // 0x0690 (0x0188)
    uint8_t NPCAccuracyData[0x188]; // 0x0818 (0x0188)
    uint8_t NPCAccuracyData_Bike[0x188]; // 0x09A0 (0x0188)
    uint8_t RecoilData[0xC]; // 0x0B28 (0x000C)
    uint8_t RecoilUpData[0x10]; // 0x0B34 (0x0010)
    uint8_t RecoilRightData[0x10]; // 0x0B44 (0x0010)
    uint8_t RecoilShakeData[0x10]; // 0x0B54 (0x0010)
    uint8_t Pad_3[0x4]; // 0x0B64 (0x0004)
    uint8_t MeleeData[0x148]; // 0x0B68 (0x0148)
    uint8_t SoundData[0x58]; // 0x0CB0 (0x0058)
    uint8_t ProjectileData[0x1C]; // 0x0D08 (0x001C)
    uint8_t Pad_4[0x4]; // 0x0D24 (0x0004)
    uint8_t MuzzleFlashData[0x18]; // 0x0D28 (0x0018)
    uint8_t EquippedFXData[0x38]; // 0x0D40 (0x0038)
    uint8_t ScopeZoomData[0x38]; // 0x0D78 (0x0038)
    uint8_t WeaponNPCTierData[0x40]; // 0x0DB0 (0x0040)
    uint8_t UnlockableData[0xC]; // 0x0DF0 (0x000C)
    uint8_t MiscData[0x10]; // 0x0DFC (0x0010)
    uint8_t Pad_5[0x9C]; // 0x0E0C (0x009C)
    struct TArray<uint8_t> StateBonusData; // 0x0EA8 (0x0010)
};

// ScriptStruct: BendGame.WeaponMiscData
struct WeaponMiscData {
    int32_t RepairCost; // 0x0000 (0x0004)
    int32_t DestructionHitsModifier; // 0x0004 (0x0004)
    float ChainReactionDamageModifierPer; // 0x0008 (0x0004)
    bool CanBuyAmmoFromMerchants; // 0x000C (0x0001)
};

// ScriptStruct: BendGame.WeaponUnlockableData
struct WeaponUnlockableData {
    float MeleeDamageIncrease; // 0x0000 (0x0004)
    float MeleeHealthIncrease; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.WeaponNPCTierData
struct WeaponNPCTierData {
    struct TArray<uint8_t> NPCMinHitDamage; // 0x0000 (0x0010)
    struct TArray<uint8_t> NPCMaxHitDamage; // 0x0010 (0x0010)
    struct TArray<uint8_t> HitChanceByDistanceCurve; // 0x0020 (0x0010)
    struct TArray<uint8_t> VelocityDeltaVsAccuracyModifierCurve; // 0x0030 (0x0010)
};

// ScriptStruct: BendGame.WeaponProjectileData
struct WeaponProjectileData {
    int32_t MaxPenetrationAmount; // 0x0000 (0x0004)
    float PenetrationDamageDecrement; // 0x0004 (0x0004)
    float MaxDamageDecrement; // 0x0008 (0x0004)
    bool UseVelocityAndRangeOverride; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    float InitialVelocity; // 0x0010 (0x0004)
    float MinWeaponRange; // 0x0014 (0x0004)
    float MaxWeaponRange; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.WeaponNPCAccuracyData
struct WeaponNPCAccuracyData {
    uint8_t HitChanceByDistanceCurve[0x80]; // 0x0000 (0x0080)
    uint8_t Pad_0[0x88]; // 0x0080 (0x0088)
    uint8_t VelocityDeltaVsAccuracyModifierCurve[0x80]; // 0x0108 (0x0080)
};

// ScriptStruct: BendGame.WeaponThrowingData
struct WeaponThrowingData {
    float MinThrowingAngle; // 0x0000 (0x0004)
    float MaxThrowingAngle; // 0x0004 (0x0004)
    float InitialVelocityPlayer; // 0x0008 (0x0004)
    float MaxDistancePlayer; // 0x000C (0x0004)
    float InitialVelocityNPC; // 0x0010 (0x0004)
    float AngleScalingValue; // 0x0014 (0x0004)
    float InitialOffsetValue; // 0x0018 (0x0004)
    bool bLieFlatOnGround; // 0x001C (0x0001)
};

// ScriptStruct: BendGame.DamageBlendSpaceAngles
struct DamageBlendSpaceAngles {
    float FrontAngle; // 0x0000 (0x0004)
    float FrontSideAngle; // 0x0004 (0x0004)
    float SideAngle; // 0x0008 (0x0004)
    float BackSideAngle; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.LoadoutData
struct LoadoutData : public TableRowBase {
    struct TArray<uint8_t> Faction; // 0x0000 (0x0010)
    struct FName LoadoutName; // 0x0010 (0x0008)
    uint8_t Tier; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    uint8_t DefaultArchetype[0x20]; // 0x0020 (0x0020)
    struct TArray<uint8_t> PrimaryWeapon; // 0x0040 (0x0010)
    struct TArray<uint8_t> MeleeWeapon; // 0x0050 (0x0010)
    struct TArray<uint8_t> ThrowingWeapon; // 0x0060 (0x0010)
    struct TArray<uint8_t> RetreatThrowingWeapon; // 0x0070 (0x0010)
};

// ScriptStruct: BendGame.WeaponWeightData
struct WeaponWeightData {
    uint8_t Weapon; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Weight; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.FactionTierData
struct FactionTierData {
    struct TArray<uint8_t> Factions; // 0x0000 (0x0010)
    struct TArray<uint8_t> Loadouts; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.WeaponLoadoutData
struct WeaponLoadoutData {
    struct FName LoadoutName; // 0x0000 (0x0008)
    struct TArray<uint8_t> Tiers; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.WeaponLoadoutTierData
struct WeaponLoadoutTierData {
    struct FName Name; // 0x0000 (0x0008)
    struct TArray<uint8_t> PrimaryWeapon; // 0x0008 (0x0010)
    struct TArray<uint8_t> MeleeWeapon; // 0x0018 (0x0010)
    struct TArray<uint8_t> ThrowingWeapon; // 0x0028 (0x0010)
    struct TArray<uint8_t> RetreatThrowingWeapon; // 0x0038 (0x0010)
    class UObject* DefaultArchetype; // 0x0048 (0x0008)
};

// ScriptStruct: BendGame.BendFNameDropdown
struct BendFNameDropdown {
    struct FName SelectedFName; // 0x0000 (0x0008)
    struct FString FormattedFNamesAsString; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.RandomParts
struct RandomParts {
    struct TArray<uint8_t> RandomPartsList; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.BendSpawnRequestData
struct BendSpawnRequestData {
    uint8_t Type[0x420]; // 0x0000 (0x0420)
    class UObject* Location; // 0x0420 (0x0008)
    uint8_t Pad_0[0x10]; // 0x0428 (0x0010)
    struct FString POIType; // 0x0438 (0x0010)
    bool POITypeExclusive; // 0x0448 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0449 (0x0007)
    class UObject* ForceUsePOI; // 0x0450 (0x0008)
    uint8_t BehaviorParams[0x4]; // 0x0458 (0x0004)
    uint8_t defendZone[0x30]; // 0x045C (0x0030)
    uint8_t importance; // 0x048C (0x0001)
    uint8_t Pad_2[0x3]; // 0x048D (0x0003)
    uint8_t OnSpawnedDelegate[0x10]; // 0x0490 (0x0010)
};

// ScriptStruct: BendGame.BendAmbientSpawnType
struct BendAmbientSpawnType {
    uint8_t FactionToSpawn; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* RegionAndTierData; // 0x0008 (0x0008)
    uint8_t WorldTier; // 0x0010 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0011 (0x0007)
    uint8_t LoadoutOverride[0x18]; // 0x0018 (0x0018)
    class UObject* VehiclePartsDatabase; // 0x0030 (0x0008)
    class UObject* VehiclePartsDatabaseOverride; // 0x0038 (0x0008)
    uint8_t m_VehiclePawnClass[0x20]; // 0x0040 (0x0020)
    class UClass* m_LoadedVehiclePawn; // 0x0060 (0x0008)
    struct TArray<uint8_t> m_LoadedVehicleParts; // 0x0068 (0x0010)
    uint8_t Pad_2[0x10]; // 0x0078 (0x0010)
    uint8_t m_SoundClass[0x20]; // 0x0088 (0x0020)
    class UObject* m_LoadedSoundClass; // 0x00A8 (0x0008)
    uint8_t AutoEquipType; // 0x00B0 (0x0001)
    uint8_t Pad_3[0x7]; // 0x00B1 (0x0007)
    uint8_t Archetype[0x20]; // 0x00B8 (0x0020)
    class UObject* LoadedArchetype; // 0x00D8 (0x0008)
    uint8_t m_ControllerClass[0x20]; // 0x00E0 (0x0020)
    class UClass* m_LoadedController; // 0x0100 (0x0008)
    uint8_t FactionOfController; // 0x0108 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0109 (0x0007)
    uint8_t m_PawnClass[0x20]; // 0x0110 (0x0020)
    class UClass* m_LoadedPawn; // 0x0130 (0x0008)
    class UObject* m_PawnSkeletalMeshes; // 0x0138 (0x0008)
    class UObject* m_LoadedPawnSkeletalMeshes; // 0x0140 (0x0008)
    uint8_t m_BehaviorTree[0x20]; // 0x0148 (0x0020)
    class UObject* m_LoadedBehaviorTree; // 0x0168 (0x0008)
    uint8_t m_AnimInstance[0x20]; // 0x0170 (0x0020)
    class UClass* m_LoadedAnimInstance; // 0x0190 (0x0008)
    struct TArray<uint8_t> m_LoadedArmorPieces; // 0x0198 (0x0010)
    int32_t m_LevelDark; // 0x01A8 (0x0004)
    int32_t m_LevelBright; // 0x01AC (0x0004)
    int32_t m_LevelVariance; // 0x01B0 (0x0004)
    int32_t m_GoalSpawnsDark; // 0x01B4 (0x0004)
    int32_t m_GoalSpawnsBright; // 0x01B8 (0x0004)
    uint8_t Pad_5[0x4]; // 0x01BC (0x0004)
    struct FName LoadoutOverrideName; // 0x01C0 (0x0008)
    float m_fShootingAccuracyNPC; // 0x01C8 (0x0004)
    uint8_t NPCWeaponOverrideID; // 0x01CC (0x0001)
    uint8_t NPCMeleeWeaponOverrideID; // 0x01CD (0x0001)
    uint8_t NPCThrowableWeaponOverrideID; // 0x01CE (0x0001)
    uint8_t NPCRetreatThrowableWeaponOverrideID; // 0x01CF (0x0001)
    uint8_t NPCAccuracyOverrideData[0x108]; // 0x01D0 (0x0108)
    struct TArray<uint8_t> LoadedWeapons; // 0x02D8 (0x0010)
    struct TArray<uint8_t> LoadedAmmo; // 0x02E8 (0x0010)
    uint8_t NPCWeaponID; // 0x02F8 (0x0001)
    uint8_t Pad_6[0x7]; // 0x02F9 (0x0007)
    class UObject* LoadedNPCWeapon; // 0x0300 (0x0008)
    class UObject* LoadedNPCAmmo; // 0x0308 (0x0008)
    uint8_t NPCThrowableID; // 0x0310 (0x0001)
    uint8_t Pad_7[0x7]; // 0x0311 (0x0007)
    class UObject* LoadedNPCThrowable; // 0x0318 (0x0008)
    uint8_t NPCRetreatThrowableID; // 0x0320 (0x0001)
    uint8_t Pad_8[0x7]; // 0x0321 (0x0007)
    class UObject* LoadedNPCRetreatThrowable; // 0x0328 (0x0008)
    uint8_t NPCMeleeID; // 0x0330 (0x0001)
    uint8_t Pad_9[0x7]; // 0x0331 (0x0007)
    class UObject* LoadedNPCMelee; // 0x0338 (0x0008)
    uint8_t NPCDefaultWeapons[0x18]; // 0x0340 (0x0018)
    class UObject* LoadedDefaultWeapons; // 0x0358 (0x0008)
    uint8_t Pad_10[0x38]; // 0x0360 (0x0038)
    class UObject* LoadedDefaultAmmo; // 0x0398 (0x0008)
    uint8_t Pad_11[0x38]; // 0x03A0 (0x0038)
    int32_t MaxSpawnsOfType; // 0x03D8 (0x0004)
    int32_t TimeChallengeCap; // 0x03DC (0x0004)
    int32_t NumSpawnsOfType; // 0x03E0 (0x0004)
    int32_t Weight; // 0x03E4 (0x0004)
    class UClass* m_ConditionsObject; // 0x03E8 (0x0008)
    class UObject* m_ConditionsObjectInstance; // 0x03F0 (0x0008)
    bool CanJoinCrowd; // 0x03F8 (0x0001)
    bool m_bTierOverride; // 0x03F9 (0x0001)
    bool m_bControllerOverride; // 0x03FA (0x0001)
    bool m_bPawnOverride; // 0x03FB (0x0001)
    bool m_bBTOverridden; // 0x03FC (0x0001)
    bool m_bMeshOverridden; // 0x03FD (0x0001)
    bool m_bVIMOverridden; // 0x03FE (0x0001)
    bool m_bWeaponOverride; // 0x03FF (0x0001)
    bool m_bMeleeWeaponOverride; // 0x0400 (0x0001)
    bool m_bThrowableWeaponOverride; // 0x0401 (0x0001)
    bool m_bRetreatThrowableWeaponOverride; // 0x0402 (0x0001)
    bool m_bArchetypeOverride; // 0x0403 (0x0001)
    bool m_bAccuracyOverride; // 0x0404 (0x0001)
    bool m_bVehiclePartsDatabaseOverride; // 0x0405 (0x0001)
    uint8_t Pad_12[0x10]; // 0x0406 (0x0010)
    uint8_t ArcadeType; // 0x0416 (0x0001)
    uint8_t Toughness; // 0x0417 (0x0001)
    uint8_t CombatMode; // 0x0418 (0x0001)
    uint8_t DayNightMode; // 0x0419 (0x0001)
    bool CanSpawnAmbiently; // 0x041A (0x0001)
    uint8_t Pad_13[0x1]; // 0x041B (0x0001)
    int32_t FreakerEars; // 0x041C (0x0004)
};

// ScriptStruct: BendGame.NPCAccuracyOverrideData
struct NPCAccuracyOverrideData {
    bool m_bNPCGunAccuracyGraphOverride; // 0x0000 (0x0001)
    bool m_bNPCLoSAccuracyGraphOverride; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    uint8_t NPCGunAccuracyGraphOverride[0x80]; // 0x0008 (0x0080)
    uint8_t NPCLoSAccuracyGraphOverride[0x80]; // 0x0088 (0x0080)
};

// ScriptStruct: BendGame.SpawnPool
struct SpawnPool {
};

// ScriptStruct: BendGame.MeshListArray
struct MeshListArray {
    int32_t ListsToLoad; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> MeshListArray; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.AnimStateRotationParams
struct AnimStateRotationParams {
    bool bDisableRotation; // 0x0000 (0x0001)
    bool bOverrideRotationRate; // 0x0000 (0x0001)
    bool bScaleRotationRateBasedOnMoveSpeed; // 0x0000 (0x0001)
    uint8_t Pad_0[0xF]; // 0x0001 (0x000F)
    uint8_t RotationRateOverride[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> RotationScaleCurve; // 0x0020 (0x0010)
    float ZeroRotationMovementSpeed; // 0x0030 (0x0004)
    float FullRotationMovementSpeed; // 0x0034 (0x0004)
    bool bConvertedRotationParamsToUsingRotationScaleCurve; // 0x0038 (0x0001)
};

// ScriptStruct: BendGame.AnimStateRotationScaleCurvePoint
struct AnimStateRotationScaleCurvePoint {
    float Speed; // 0x0000 (0x0004)
    float RotationScale; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.PerformActionRequest
struct PerformActionRequest {
    uint8_t ActionData[0xA0]; // 0x0000 (0x00A0)
    uint8_t Pad_0[0x30]; // 0x00A0 (0x0030)
    class UObject* PropActor; // 0x00D0 (0x0008)
};

// ScriptStruct: BendGame.BaseConfidenceEntry
struct BaseConfidenceEntry {
    struct TArray<uint8_t> Values; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.FactionEntry
struct FactionEntry {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText DisplayName; // 0x0008 (0x0018)
    struct FText DisplayDescription; // 0x0020 (0x0018)
    uint8_t DefaultController[0x20]; // 0x0038 (0x0020)
    uint8_t DefaultPawn[0x20]; // 0x0058 (0x0020)
    uint8_t ClampMinMax[0x8]; // 0x0078 (0x0008)
    struct TArray<uint8_t> Values; // 0x0080 (0x0010)
};

// ScriptStruct: BendGame.TrustData
struct TrustData {
    uint8_t Tier; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t Trust; // 0x0004 (0x0004)
    int32_t TrustMaxForTier; // 0x0008 (0x0004)
    int32_t TotalTrust; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.BendAnimSetCompatibilityRating
struct BendAnimSetCompatibilityRating {
    uint64_t Skeleton; // 0x0000 (0x0008)
    float StrictCompatibility; // 0x0008 (0x0004)
    float LooseCompatibility; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.BendAnimBlendSpaceGroup
struct BendAnimBlendSpaceGroup {
    struct FName AnimBlendSpaceGroupName; // 0x0000 (0x0008)
    struct TArray<uint8_t> BlendSpaceEntries; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendAnimBlendSpaceEntry
struct BendAnimBlendSpaceEntry {
    class UObject* BlendSpace; // 0x0000 (0x0008)
    int32_t Weight; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendAnimSequenceGroup
struct BendAnimSequenceGroup {
    struct FName AnimSequenceGroupName; // 0x0000 (0x0008)
    struct TArray<uint8_t> AnimSequenceEntries; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendAnimSequenceEntry
struct BendAnimSequenceEntry {
    class UObject* AnimSequence; // 0x0000 (0x0008)
    int32_t Weight; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.StatusEffectResponseData
struct StatusEffectResponseData {
    bool ValidStatusEffect; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float DurationScalar; // 0x0004 (0x0004)
    bool Stackable; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.StatusEmitter
struct StatusEmitter {
    struct FName AttachPoint; // 0x0000 (0x0008)
    class UObject* PFX; // 0x0008 (0x0008)
    struct FName SoundName; // 0x0010 (0x0008)
    float startDelay; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.BendCounterAttackData
struct BendCounterAttackData {
    uint8_t Faction; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> PairedKills; // 0x0008 (0x0010)
    struct TArray<uint8_t> PairedAttacks; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.BendPairedAttackData
struct BendPairedAttackData {
    uint8_t AttackAnims[0x18]; // 0x0000 (0x0018)
    struct TArray<uint8_t> VictimsCounterAnimData; // 0x0018 (0x0010)
    bool Anchor; // 0x0028 (0x0001)
};

// ScriptStruct: BendGame.BendNamedAttackList
struct BendNamedAttackList {
    struct FName CategoryName; // 0x0000 (0x0008)
    struct TArray<uint8_t> Attacks; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendAttackAnim
struct BendAttackAnim {
    uint8_t AttackData[0x60]; // 0x0000 (0x0060)
    float MinAngle; // 0x0060 (0x0004)
    float MaxAngle; // 0x0064 (0x0004)
};

// ScriptStruct: BendGame.BendArmor
struct BendArmor {
};

// ScriptStruct: BendGame.BendPawnArmor
struct BendPawnArmor : public BendArmor {
};

// ScriptStruct: BendGame.BendPawnArmorParts
struct BendPawnArmorParts {
    struct TArray<uint8_t> ArmorParts; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.DamageAnimInfo
struct DamageAnimInfo {
    uint8_t Pad_0[0x14]; // 0x0000 (0x0014)
    float DamageAngle; // 0x0014 (0x0004)
    float DamagePercentage; // 0x0018 (0x0004)
    uint8_t ApplyRotation; // 0x001C (0x0001)
    bool HasBlendSpaceDamageAnim; // 0x001D (0x0001)
    uint8_t Pad_1[0x2]; // 0x001E (0x0002)
    class UObject* BlendSpace; // 0x0020 (0x0008)
    uint8_t BlendSpaceSlot; // 0x0028 (0x0001)
    bool HasSequenceDamageAnim; // 0x0029 (0x0001)
    uint8_t Pad_2[0x6]; // 0x002A (0x0006)
    class UObject* AnimSequence; // 0x0030 (0x0008)
    uint8_t AnimSequenceSlot; // 0x0038 (0x0001)
    bool HasRecoveryAnim; // 0x0039 (0x0001)
    uint8_t Pad_3[0x6]; // 0x003A (0x0006)
    class UObject* RecoveryAnimSequence; // 0x0040 (0x0008)
    uint8_t RecoveryAnimSlot; // 0x0048 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0049 (0x0007)
    uint8_t AnchorTransform[0x30]; // 0x0050 (0x0030)
    bool ForceExitVehicle; // 0x0080 (0x0001)
    bool ExitFromFalling; // 0x0081 (0x0001)
    bool ForceReaction; // 0x0082 (0x0001)
};

// ScriptStruct: BendGame.BendAnimDamageTopLayerData
struct BendAnimDamageTopLayerData {
    struct TArray<uint8_t> SpecificallyDamagedBy; // 0x0000 (0x0010)
    bool UseMeleeSystem; // 0x0010 (0x0001)
    bool UseDistanceSystem; // 0x0011 (0x0001)
    bool UseStaminaSystem; // 0x0012 (0x0001)
    bool UseStoppingPowerSystem; // 0x0013 (0x0001)
    bool UseVelocitySystem; // 0x0014 (0x0001)
    bool UseVictimsVelocitySystem; // 0x0015 (0x0001)
    bool UseRamSystem; // 0x0016 (0x0001)
    bool UseAttackersLocation; // 0x0017 (0x0001)
    float MinMovingVelocity; // 0x0018 (0x0004)
    float MaxMovingVelocity; // 0x001C (0x0004)
    uint8_t SmallAnimationData[0x10]; // 0x0020 (0x0010)
    uint8_t MediumAnimationData[0x10]; // 0x0030 (0x0010)
    uint8_t HardAnimationData[0x10]; // 0x0040 (0x0010)
    float MediumHitCoolDownTimerMin; // 0x0050 (0x0004)
    float MediumHitCoolDownTimerMax; // 0x0054 (0x0004)
    float MediumHitHealthPercentage; // 0x0058 (0x0004)
    float HardHitCoolDownTimerMin; // 0x005C (0x0004)
    float HardHitCoolDownTimerMax; // 0x0060 (0x0004)
    float HardHitHealthPercentage; // 0x0064 (0x0004)
    struct TArray<uint8_t> AnimationSet; // 0x0068 (0x0010)
};

// ScriptStruct: BendGame.BendDamageAnimationSetBasedOnState
struct BendDamageAnimationSetBasedOnState {
    struct TArray<uint8_t> CurrentState; // 0x0000 (0x0010)
    struct TArray<uint8_t> AnimDamageData; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendAnimDamageBaseData
struct BendAnimDamageBaseData {
    uint8_t DamageLocation; // 0x0000 (0x0001)
    uint8_t ApplyRotation; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    uint8_t AnimationsSmall[0x40]; // 0x0008 (0x0040)
    uint8_t AnimationsMedium[0x40]; // 0x0048 (0x0040)
    uint8_t AnimationsHard[0x40]; // 0x0088 (0x0040)
};

// ScriptStruct: BendGame.BendAnimDamageAnimationData
struct BendAnimDamageAnimationData {
    bool ForceExitVehicle; // 0x0000 (0x0001)
    bool ExitFromFalling; // 0x0001 (0x0001)
    bool ForceReaction; // 0x0002 (0x0001)
    uint8_t AnimSlot; // 0x0003 (0x0001)
    bool LockBlendSpaceToAxis; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    struct TArray<uint8_t> BlendSpaces; // 0x0008 (0x0010)
    struct TArray<uint8_t> AnimSequences; // 0x0018 (0x0010)
    uint8_t RecoveryAnimSlot; // 0x0028 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0029 (0x0007)
    struct TArray<uint8_t> RecoveryAnimSequences; // 0x0030 (0x0010)
};

// ScriptStruct: BendGame.BendDamageAnimationData
struct BendDamageAnimationData {
    float MinValidRange; // 0x0000 (0x0004)
    float MaxValidRange; // 0x0004 (0x0004)
    float HitReactionMinMoveDistance; // 0x0008 (0x0004)
    float HitReactionMaxMoveDistance; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.DyingAnimInfo
struct DyingAnimInfo {
    uint8_t Pad_0[0xC]; // 0x0000 (0x000C)
    float DamageAngle; // 0x000C (0x0004)
    float DamagePercentage; // 0x0010 (0x0004)
    float Distance; // 0x0014 (0x0004)
    uint8_t ApplyRotation; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    float OffsetRotation; // 0x001C (0x0004)
    uint8_t RotationTransform[0x30]; // 0x0020 (0x0030)
    bool CanPlayFromFullBody; // 0x0050 (0x0001)
    bool HasBlendSpaceDyingAnim; // 0x0051 (0x0001)
    uint8_t Pad_2[0x6]; // 0x0052 (0x0006)
    class UObject* BlendSpace; // 0x0058 (0x0008)
    class UObject* AttackerPairedAnim; // 0x0060 (0x0008)
    class UObject* VictimPairedAnim; // 0x0068 (0x0008)
};

// ScriptStruct: BendGame.BendAnimDyingTopLayerData
struct BendAnimDyingTopLayerData {
    struct TArray<uint8_t> SpecificallyDamagedBy; // 0x0000 (0x0010)
    struct TArray<uint8_t> AnimationSet; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendDyingAnimationSetBasedOnState
struct BendDyingAnimationSetBasedOnState {
    struct TArray<uint8_t> CurrentState; // 0x0000 (0x0010)
    struct TArray<uint8_t> AnimDyingData; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendAnimDyingBaseData
struct BendAnimDyingBaseData {
    uint8_t DamageLocation; // 0x0000 (0x0001)
    uint8_t ApplyRotation; // 0x0001 (0x0001)
    bool CanPlayFromFullBody; // 0x0002 (0x0001)
    uint8_t Pad_0[0x5]; // 0x0003 (0x0005)
    uint8_t Animations[0x28]; // 0x0008 (0x0028)
    uint8_t AltAnimationData[0x8]; // 0x0030 (0x0008)
    uint8_t AltAnimations[0x28]; // 0x0038 (0x0028)
};

// ScriptStruct: BendGame.BendAnimDyingAnimationData
struct BendAnimDyingAnimationData {
    bool LockBlendSpaceToAxis; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> BlendSpaces; // 0x0008 (0x0010)
    struct TArray<uint8_t> PairedAnimSeq; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.DyingPairedAnimSeqs
struct DyingPairedAnimSeqs {
    class UObject* AttackerAnimation; // 0x0000 (0x0008)
    class UObject* VictimAnimation; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendDyingAnimationSelectionData
struct BendDyingAnimationSelectionData {
    float MinValidRange; // 0x0000 (0x0004)
    float MaxValidRange; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.FlinchAnimInfo
struct FlinchAnimInfo {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    float angle; // 0x0008 (0x0004)
    bool HasBlendSpaceFlinchAnim; // 0x000C (0x0001)
    uint8_t Pad_1[0x3]; // 0x000D (0x0003)
    class UObject* AnimSequence; // 0x0010 (0x0008)
    class UObject* BlendSpace; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.BendAnimFlinchTopLayerData
struct BendAnimFlinchTopLayerData {
    struct TArray<uint8_t> DamageType; // 0x0000 (0x0010)
    struct TArray<uint8_t> AnimationSet; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendFlinchAnimationSetBasedOnState
struct BendFlinchAnimationSetBasedOnState {
    struct TArray<uint8_t> CurrentState; // 0x0000 (0x0010)
    uint8_t AnimFlinchData[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: BendGame.BendAnimFlinchAnimationData
struct BendAnimFlinchAnimationData {
    struct TArray<uint8_t> AnimSequences; // 0x0000 (0x0010)
    struct TArray<uint8_t> BlendSpaces; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.RegionBasedOpenWorldMusicData
struct RegionBasedOpenWorldMusicData {
    uint8_t Region; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t MusicManagerClass[0x20]; // 0x0008 (0x0020)
};

// ScriptStruct: BendGame.OpenWorldDynamicAudioListeners
struct OpenWorldDynamicAudioListeners {
    uint8_t NearDistanceValues[0xC]; // 0x0000 (0x000C)
    uint8_t FarDistanceValues[0xC]; // 0x000C (0x000C)
    uint8_t DistantNoisesValues[0xC]; // 0x0018 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> Listeners; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.DynamicAudioListeners
struct DynamicAudioListeners {
    uint8_t TypeOfListener; // 0x0000 (0x0001)
    uint8_t DistanceType; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct TArray<uint8_t> ObjectTypeAssociatedWith; // 0x0008 (0x0010)
    uint8_t BlueprintListener[0x20]; // 0x0018 (0x0020)
    uint8_t DistanceAboveObject[0x8]; // 0x0038 (0x0008)
    bool UseMinRadius; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    int32_t NumberOfListeners; // 0x0044 (0x0004)
};

// ScriptStruct: BendGame.DynamicAudioListenersMinMax
struct DynamicAudioListenersMinMax {
    float MinDistance; // 0x0000 (0x0004)
    float MaxDistance; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.DynamicAudioListenerDistance
struct DynamicAudioListenerDistance {
    float Radius; // 0x0000 (0x0004)
    float DistanceAway; // 0x0004 (0x0004)
    float MinRadius; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.RegionDynamicAudioListeners
struct RegionDynamicAudioListeners {
    struct TArray<uint8_t> Region; // 0x0000 (0x0010)
    uint8_t BlueprintListener[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: BendGame.DynamicAudioListenersTemp
struct DynamicAudioListenersTemp {
    uint8_t BlueprintListener[0x20]; // 0x0000 (0x0020)
    int32_t NumberOfListeners; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.DynamicAudioListenersMinMaxPer
struct DynamicAudioListenersMinMaxPer {
    float MinPercentage; // 0x0000 (0x0004)
    float MaxPercentage; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.DynamicAudioListenersList
struct DynamicAudioListenersList {
};

// ScriptStruct: BendGame.DynamicListenersZoneData
struct DynamicListenersZoneData {
};

// ScriptStruct: BendGame.BendAudioVolume
struct BendAudioVolume {
    float Volume; // 0x0000 (0x0004)
    float VolumeTarget; // 0x0004 (0x0004)
    float VolumeDelta; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.InteractiveMusicStateLayerVolume
struct InteractiveMusicStateLayerVolume {
    struct TArray<uint8_t> LayerVolume; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InteractiveMusicLayerVolume
struct InteractiveMusicLayerVolume {
    struct TArray<uint8_t> LayerVolume; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InteractiveMusicTransitionWaitValues
struct InteractiveMusicTransitionWaitValues {
    float Mood; // 0x0000 (0x0004)
    float Low; // 0x0004 (0x0004)
    float Med; // 0x0008 (0x0004)
    float High; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.InteractiveMusicTransitionValues
struct InteractiveMusicTransitionValues {
    float MoodToLow; // 0x0000 (0x0004)
    float LowToMed; // 0x0004 (0x0004)
    float MedToHigh; // 0x0008 (0x0004)
    float HighToMed; // 0x000C (0x0004)
    float MedToLow; // 0x0010 (0x0004)
    float LowToMood; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.MusicTrack
struct MusicTrack {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Priority; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    class UObject* Track; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendDoorAnimData
struct BendDoorAnimData {
    uint8_t PawnBodyType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> HandleAnimData; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendHandleAnimData
struct BendHandleAnimData {
    uint8_t DoorHandleType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* AnimationSequence; // 0x0008 (0x0008)
    class UObject* CrouchAnimationSequence; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.InventoryGuid
struct InventoryGuid {
    uint8_t InventoryGuid[0x10]; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InventoryTagContainer
struct InventoryTagContainer {
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    uint8_t MatchType; // 0x0020 (0x0001)
    uint8_t TagToCheckMatchType; // 0x0021 (0x0001)
};

// ScriptStruct: BendGame.BendInventoryItemCount
struct BendInventoryItemCount : public BendInventoryItem {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendInventoryItem
struct BendInventoryItem {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    int32_t InventoryItem; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.InventoryItemLink
struct InventoryItemLink : public InventoryItemHashKey {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* ItemLink; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.InventoryItemHashKey
struct InventoryItemHashKey {
    int32_t HashKey; // 0x0000 (0x0004)
};

// ScriptStruct: BendGame.InventoryItemTagSlot
struct InventoryItemTagSlot : public InventoryItemTagCount {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    int32_t MaxCount; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.InventoryItemTagCount
struct InventoryItemTagCount : public InventoryItemTag {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.InventoryItemTag
struct InventoryItemTag {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t ItemTag[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.InventoryItemStatProperty
struct InventoryItemStatProperty {
    uint8_t StatType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName PropertyName; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.InventoryItemStats
struct InventoryItemStats {
    struct TArray<uint8_t> Stats; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InventoryItemStat
struct InventoryItemStat {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Value; // 0x0004 (0x0004)
    float ValuePercent; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.InventoryItemStatDef
struct InventoryItemStatDef {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t MinMaxValue[0x8]; // 0x0004 (0x0008)
    uint8_t StatMinMaxValue[0x8]; // 0x000C (0x0008)
};

// ScriptStruct: BendGame.InventoryItemTagContainer
struct InventoryItemTagContainer {
    struct FName TagKey; // 0x0000 (0x0008)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
    uint8_t TagContainer[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: BendGame.InventoryItemFlagSet
struct InventoryItemFlagSet {
    bool bNoSell; // 0x0000 (0x0001)
    bool bNoDrop; // 0x0000 (0x0001)
    bool bCarryOnly; // 0x0000 (0x0001)
    bool bMissionItem; // 0x0000 (0x0001)
    bool bUsedInRecipe; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.BendEdgeSector
struct BendEdgeSector {
    struct TArray<uint8_t> Entries; // 0x0000 (0x0010)
    struct TArray<uint8_t> Edges; // 0x0010 (0x0010)
    uint8_t Sector[0x8]; // 0x0020 (0x0008)
};

// ScriptStruct: BendGame.EdgeEntry
struct EdgeEntry {
    uint64_t pMesh; // 0x0000 (0x0008)
    struct TArray<uint8_t> transformedEdges; // 0x0008 (0x0010)
    struct TArray<uint8_t> Edges; // 0x0018 (0x0010)
    struct FName EntryName; // 0x0028 (0x0008)
    bool bWorldEdge; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t internalID[0x8]; // 0x0038 (0x0008)
};

// ScriptStruct: BendGame.ReservedPerchLocation
struct ReservedPerchLocation {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* Pawn; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.SavedEdgeEntry
struct SavedEdgeEntry {
    uint64_t pMesh; // 0x0000 (0x0008)
    struct TArray<uint8_t> transformedEdges; // 0x0008 (0x0010)
    struct TArray<uint8_t> Edges; // 0x0018 (0x0010)
    struct FName EntryName; // 0x0028 (0x0008)
    bool bWorldEdge; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t internalID[0x8]; // 0x0038 (0x0008)
};

// ScriptStruct: BendGame.BendTraversalSettings
struct BendTraversalSettings {
    struct TArray<uint8_t> FactionType; // 0x0000 (0x0010)
    struct TArray<uint8_t> BodyType; // 0x0010 (0x0010)
    bool OnlyUseWhenFrustrated; // 0x0020 (0x0001)
    bool CanUseWhenAware; // 0x0021 (0x0001)
    bool CanUseWhenSemiaware; // 0x0022 (0x0001)
    bool CanUseWhenUnaware; // 0x0023 (0x0001)
};

// ScriptStruct: BendGame.DaVocalConversationsData
struct DaVocalConversationsData {
};

// ScriptStruct: BendGame.PlayerDebugVOData
struct PlayerDebugVOData {
    class UObject* SoundClass; // 0x0000 (0x0008)
    struct FName SoundName; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.ConversationInterruptData
struct ConversationInterruptData {
    struct FName m_nPainSndName; // 0x0000 (0x0008)
    struct FName m_nHoldOnSndName; // 0x0008 (0x0008)
    struct FName m_nIWasSayingSndName; // 0x0010 (0x0008)
    struct FName m_nIWasSayingOnBikeSndName; // 0x0018 (0x0008)
    struct FName m_nYouWereSayingSndName; // 0x0020 (0x0008)
    struct FName m_nYouWereSayingOnBikeSndName; // 0x0028 (0x0008)
    float fWaitTimeAfterSafe; // 0x0030 (0x0004)
    float MinNearDistForConversationToResume; // 0x0034 (0x0004)
    float MinAwareDistForConversationToResume; // 0x0038 (0x0004)
    float MinTargetingDistForConversationToResume; // 0x003C (0x0004)
};

// ScriptStruct: BendGame.RecoveryConversationData
struct RecoveryConversationData {
};

// ScriptStruct: BendGame.VocalConversationData
struct VocalConversationData {
    class UObject* WhoIsSpeaking; // 0x0000 (0x0008)
    struct FName SoundFXName; // 0x0008 (0x0008)
    class UObject* SoundClass; // 0x0010 (0x0008)
    class UObject* ObjectSpeaking; // 0x0018 (0x0008)
    bool AutoSetObjectSpeaking; // 0x0020 (0x0001)
    bool PlayThroughSpeakerController; // 0x0021 (0x0001)
    bool PlayOverRadio; // 0x0022 (0x0001)
    uint8_t RadioType; // 0x0023 (0x0001)
    bool DisableLipSync; // 0x0024 (0x0001)
    bool PlayWhenDead; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    float MinConPauseBetweenLines; // 0x0028 (0x0004)
    float MaxConPauseBetweenLines; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.SavePlayVO_Data
struct SavePlayVO_Data {
};

// ScriptStruct: BendGame.VOSoundOnPawn
struct VOSoundOnPawn {
};

// ScriptStruct: BendGame.VOSoundData
struct VOSoundData {
};

// ScriptStruct: BendGame.PlayedConversation
struct PlayedConversation {
};

// ScriptStruct: BendGame.ActorTimelineSetupData
struct ActorTimelineSetupData {
    class UObject* pPairedObject; // 0x0000 (0x0008)
    float fTimeOffset; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* pAudioComponentSyncToAudio; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.DelayImpulseAtPoint
struct DelayImpulseAtPoint {
};

// ScriptStruct: BendGame.FoliageMovementData
struct FoliageMovementData {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* MovementSound; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.DelayRadialForce
struct DelayRadialForce {
};

// ScriptStruct: BendGame.RadioPreSendFilterData
struct RadioPreSendFilterData {
    uint8_t RadioType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* SquelchOnSound; // 0x0008 (0x0008)
    class UObject* SquelchOffSound; // 0x0010 (0x0008)
    class UObject* LoopingStaticSound; // 0x0018 (0x0008)
    bool DistortionEnable; // 0x0020 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0021 (0x0003)
    float DistortionDrive; // 0x0024 (0x0004)
    float DistortionOutputGain; // 0x0028 (0x0004)
    float DistortionPassThruGain; // 0x002C (0x0004)
    uint8_t FilterType; // 0x0030 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0031 (0x0003)
    float FilterGain; // 0x0034 (0x0004)
    float FilterCutOff; // 0x0038 (0x0004)
    float FilterCenter; // 0x003C (0x0004)
    float FilterResonance; // 0x0040 (0x0004)
    float FilterSlope; // 0x0044 (0x0004)
    float FilterBandwidth; // 0x0048 (0x0004)
};

// ScriptStruct: BendGame.LipSyncVisemeData
struct LipSyncVisemeData {
    class UObject* AnimSequence; // 0x0000 (0x0008)
    float Weight; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendRVOAvoidanceGroups
struct BendRVOAvoidanceGroups {
    struct TArray<uint8_t> Group; // 0x0000 (0x0010)
    struct TArray<uint8_t> GroupsToAvoid; // 0x0010 (0x0010)
    struct TArray<uint8_t> GroupsToIgnore; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.BendSpringInterp_WithAngleHysteresis
struct BendSpringInterp_WithAngleHysteresis : public BendSpringInterpolatedFloat {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    float HysteresisThresholdAngle; // 0x0028 (0x0004)
};

// ScriptStruct: BendGame.BendSpringInterpolatedFloat
struct BendSpringInterpolatedFloat {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    float Current; // 0x0008 (0x0004)
    float Target; // 0x000C (0x0004)
    float Velocity; // 0x0010 (0x0004)
    float NaturalFrequency; // 0x0014 (0x0004)
    float DampingRatio; // 0x0018 (0x0004)
    float NumIterations; // 0x001C (0x0004)
    uint8_t Pad_1[0x4]; // 0x0020 (0x0004)
    bool bIsUnwindAngleEnabled; // 0x0024 (0x0001)
    bool bUseRadians; // 0x0024 (0x0001)
};

// ScriptStruct: BendGame.BendValueReconsilerDummyStruct
struct BendValueReconsilerDummyStruct {
};

// ScriptStruct: BendGame.BendReconcilerToken
struct BendReconcilerToken {
};

// ScriptStruct: BendGame.RecipeComponent
struct RecipeComponent {
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    int32_t ComponentCount; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.InventoryItemCache
struct InventoryItemCache {
    struct TArray<uint8_t> Items; // 0x0000 (0x0010)
    struct TArray<uint8_t> Weapons; // 0x0010 (0x0010)
    bool bItemsCached; // 0x0020 (0x0001)
    bool bRockRemoved; // 0x0020 (0x0001)
    bool bKnifeRemoved; // 0x0020 (0x0001)
    bool bTaserRemoved; // 0x0020 (0x0001)
};

// ScriptStruct: BendGame.InventoryStorageWeapon
struct InventoryStorageWeapon : public InventoryStorageGuidItem {
    uint8_t Pad_0[0x40]; // 0x0000 (0x0040)
    struct TArray<uint8_t> Parts; // 0x0040 (0x0010)
};

// ScriptStruct: BendGame.InventoryStorageGuidItem
struct InventoryStorageGuidItem : public InventoryStorageStatItem {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    uint8_t Guid[0x10]; // 0x0028 (0x0010)
    bool bNewBadgeVisible; // 0x0038 (0x0001)
};

// ScriptStruct: BendGame.InventoryStorageStatItem
struct InventoryStorageStatItem : public InventoryStorageItem {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t Stats[0x10]; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.InventoryStorageItem
struct InventoryStorageItem : public InventoryStorageItemBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    int32_t Count; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.InventoryStorageItemBase
struct InventoryStorageItemBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* Item; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.InventoryStorageWeaponPart
struct InventoryStorageWeaponPart : public InventoryPart {
};

// ScriptStruct: BendGame.InventoryPart
struct InventoryPart : public InventoryStorageGuidItem {
};

// ScriptStruct: BendGame.InventoryWeaponPartSpec
struct InventoryWeaponPartSpec {
    uint8_t Weapon[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> Parts; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryGuidSlot
struct InventoryGuidSlot : public InventoryStorageItemBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t Guid[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.InventoryDropTagItem
struct InventoryDropTagItem {
    uint8_t ItemTag[0x10]; // 0x0000 (0x0010)
    float Percentage; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.InventoryDropTableEntry
struct InventoryDropTableEntry {
    float Percentage; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> Items; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryDropItem
struct InventoryDropItem {
    uint8_t Item[0x10]; // 0x0000 (0x0010)
    uint8_t DropCount[0x8]; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.CharacterClassDropTable
struct CharacterClassDropTable {
    uint8_t CharacterClass; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    bool bDropsItems; // 0x0004 (0x0001)
    bool bIsSearchable; // 0x0004 (0x0001)
    bool bDropsEquippedItem; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    struct TArray<uint8_t> SearchAnimations; // 0x0008 (0x0010)
    struct TArray<uint8_t> CrouchedSearchAnimations; // 0x0018 (0x0010)
    struct TArray<uint8_t> SubClassTables; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.CharacterSubClassDropTable
struct CharacterSubClassDropTable {
    struct FName CharacterSubClass; // 0x0000 (0x0008)
    class UClass* DropTable; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.MapObjectiveRegionDetails
struct MapObjectiveRegionDetails {
    class UObject* RegionTexture; // 0x0000 (0x0008)
    class UObject* RegionMaterial; // 0x0008 (0x0008)
    class UObject* RegionMID; // 0x0010 (0x0008)
    uint8_t RegionTextureColor[0x10]; // 0x0018 (0x0010)
    float RegionMaxTextureSize; // 0x0028 (0x0004)
    float RegionTextureScale; // 0x002C (0x0004)
    uint8_t Pad_0[0x14]; // 0x0030 (0x0014)
    bool bDiscovered; // 0x0044 (0x0001)
};

// ScriptStruct: BendGame.MapLocationDetails
struct MapLocationDetails {
    uint8_t IconSize[0x8]; // 0x0000 (0x0008)
    float IconScale; // 0x0008 (0x0004)
    uint8_t DisplayZoomLevelMin; // 0x000C (0x0001)
    uint8_t DisplayZoomLevelMax; // 0x000D (0x0001)
    uint8_t Pad_0[0x2]; // 0x000E (0x0002)
    bool bHidden; // 0x0010 (0x0001)
    bool bIsSelectableOnMap; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.BendTrophy
struct BendTrophy {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
    struct FText TranslatedName; // 0x0010 (0x0018)
    struct FText Description; // 0x0028 (0x0018)
    int32_t TrophyID; // 0x0040 (0x0004)
    uint8_t MinMaxCounter[0x8]; // 0x0044 (0x0008)
    bool bHidden; // 0x004C (0x0001)
    bool bUnlocked; // 0x004C (0x0001)
};

// ScriptStruct: BendGame.BendTrophyTable
struct BendTrophyTable : public TableRowBase {
    struct FName Name; // 0x0000 (0x0008)
    struct FName Tag; // 0x0008 (0x0008)
    struct FText TranslatedName; // 0x0010 (0x0018)
    struct FText Description; // 0x0028 (0x0018)
    int32_t TrophyID; // 0x0040 (0x0004)
    int32_t RequiredCount; // 0x0044 (0x0004)
    bool bHidden; // 0x0048 (0x0001)
};

// ScriptStruct: BendGame.NewGamePlusCarryOverData
struct NewGamePlusCarryOverData {
    struct TArray<uint8_t> SkillTagNames; // 0x0000 (0x0010)
    struct TArray<uint8_t> SkillTags; // 0x0010 (0x0010)
    struct TArray<uint8_t> WeaponTagNames; // 0x0020 (0x0010)
    struct TArray<uint8_t> WeaponPartTagNames; // 0x0030 (0x0010)
    struct TArray<uint8_t> WeaponTags; // 0x0040 (0x0010)
    struct TArray<uint8_t> WeaponPartTags; // 0x0050 (0x0010)
    struct TArray<uint8_t> UnlockedBikePartTagNames; // 0x0060 (0x0010)
    struct TArray<uint8_t> UnlockedBikePartTags; // 0x0070 (0x0010)
    struct TArray<uint8_t> PlayerBikePartTagNames; // 0x0080 (0x0010)
    struct TArray<uint8_t> PlayerBikePartTags; // 0x0090 (0x0010)
    struct TArray<uint8_t> UnlockedBikeSkinTagNames; // 0x00A0 (0x0010)
    struct TArray<uint8_t> UnlockedBikeSkinTags; // 0x00B0 (0x0010)
    struct TArray<uint8_t> PlayerBikeSkinTagNamesInOrder; // 0x00C0 (0x0010)
    struct TArray<uint8_t> PlayerBikeSkinTagsInOrder; // 0x00D0 (0x0010)
    struct TArray<uint8_t> PlayerRecipesNames; // 0x00E0 (0x0010)
    struct TArray<uint8_t> PlayerRecipesTags; // 0x00F0 (0x0010)
    struct TArray<uint8_t> EncampmentStats; // 0x0100 (0x0010)
    struct TArray<uint8_t> DiscoveredCollectibles; // 0x0110 (0x0010)
    struct TArray<uint8_t> TrophyCounts; // 0x0120 (0x0010)
    int32_t PlayerHealth; // 0x0130 (0x0004)
    int32_t PlayerFocus; // 0x0134 (0x0004)
    int32_t PlayerStamina; // 0x0138 (0x0004)
    bool HasTaserBeenCrafted; // 0x013C (0x0001)
    uint8_t Pad_0[0x3]; // 0x013D (0x0003)
    int32_t UnspentSkillPoints; // 0x0140 (0x0004)
    int32_t PlayerXP; // 0x0144 (0x0004)
    uint8_t NGPDataVersion; // 0x0148 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0149 (0x0003)
    int32_t NGPCompletionCount; // 0x014C (0x0004)
    bool CanStartNewGamePlus; // 0x0150 (0x0001)
    bool InitalizedTags; // 0x0151 (0x0001)
};

// ScriptStruct: BendGame.TrophyCarryOverData
struct TrophyCarryOverData {
    struct FName Trophy; // 0x0000 (0x0008)
    struct FName GameplayDatabaseKey; // 0x0008 (0x0008)
    int32_t Value; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.EncampmentCarryOverData
struct EncampmentCarryOverData {
    struct FString CampName; // 0x0000 (0x0010)
    float Credits; // 0x0010 (0x0004)
    float Trust; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BendSaveGameImageData
struct BendSaveGameImageData {
    int32_t SizeX; // 0x0000 (0x0004)
    int32_t SizeY; // 0x0004 (0x0004)
    uint8_t PixelFormat; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct TArray<uint8_t> PixelData; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.PermFlashbackLevelSaveRecord
struct PermFlashbackLevelSaveRecord {
    int32_t LevelHashKey; // 0x0000 (0x0004)
    int32_t LevelIndex; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.GameDatabaseSaveRecord
struct GameDatabaseSaveRecord {
    uint8_t Category; // 0x0000 (0x0001)
    uint8_t Type; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct FName Key; // 0x0008 (0x0008)
    bool BoolValue; // 0x0010 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0011 (0x0003)
    int32_t IntValue; // 0x0014 (0x0004)
    float FloatValue; // 0x0018 (0x0004)
    uint8_t FVectorValue[0xC]; // 0x001C (0x000C)
    struct FString StringValue; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.BendVehicleMeshAttachmentSpecs_Struct
struct BendVehicleMeshAttachmentSpecs_Struct {
    class UObject* StaticMesh; // 0x0000 (0x0008)
    class UObject* SkeletalMesh; // 0x0008 (0x0008)
    bool bSkeletalMeshFollowsParentAnimation; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    struct FName SocketName; // 0x0018 (0x0008)
    uint8_t ParentPart; // 0x0020 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0021 (0x0007)
    struct TArray<uint8_t> MaterialOverrides; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.VehiclePartStats
struct VehiclePartStats {
    float EngineNoiseReductionPercent; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> AmmoStorageQuantities; // 0x0008 (0x0010)
    struct TArray<uint8_t> AmmoStorageTags; // 0x0018 (0x0010)
    float DamageReductionPercent; // 0x0028 (0x0004)
    uint8_t Pad_1[0x4]; // 0x002C (0x0004)
    class UObject* TireType; // 0x0030 (0x0008)
};

// ScriptStruct: BendGame.VehiclePartsSpecs
struct VehiclePartsSpecs {
    class UClass* Specs; // 0x0000 (0x0008)
    uint8_t PartType; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.LevelWaitActionEntry
struct LevelWaitActionEntry {
    int32_t UUID; // 0x0000 (0x0004)
    int32_t Linkage; // 0x0004 (0x0004)
    float TimeRemaining; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName ExecutionFunction; // 0x0010 (0x0008)
    uint64_t OwningLevelScript; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.VehicleMissionBookKeepingEntry
struct VehicleMissionBookKeepingEntry : public MissionBookKeepingEntry {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    uint8_t OnSpawnedWithVehicleDelegate[0x10]; // 0x0058 (0x0010)
};

// ScriptStruct: BendGame.MissionBookKeepingEntry
struct MissionBookKeepingEntry {
    uint8_t BookKeepingData[0x28]; // 0x0000 (0x0028)
    uint8_t OnSpawnedDelegate[0x10]; // 0x0028 (0x0010)
    uint8_t OnKilledDelegate[0x10]; // 0x0038 (0x0010)
    uint8_t OnDespawnedDelegate[0x10]; // 0x0048 (0x0010)
};

// ScriptStruct: BendGame.BendMissionRewardsTable
struct BendMissionRewardsTable : public TableRowBase {
    class UObject* MissionData; // 0x0000 (0x0008)
    class UObject* JobData; // 0x0008 (0x0008)
    int32_t XPReward; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct TArray<uint8_t> FactionRewards; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.BendRewardData
struct BendRewardData {
    uint8_t Faction; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t Trust; // 0x0004 (0x0004)
    int32_t Credits; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendMissionDataTable
struct BendMissionDataTable : public TableRowBase {
    struct TArray<uint8_t> MissionDatas; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.BendMissionObjectiveData
struct BendMissionObjectiveData {
    struct FName ObjectiveIdentifierID; // 0x0000 (0x0008)
    struct FText ObjectiveNameText; // 0x0008 (0x0018)
    struct FText ObjectiveNameTextRuntimeModified; // 0x0020 (0x0018)
    uint8_t ObjectiveStage[0x8]; // 0x0038 (0x0008)
    bool IsMainObjective; // 0x0040 (0x0001)
    bool ShouldDisplayToMenu; // 0x0041 (0x0001)
    bool DontDisplayIfCompleted; // 0x0042 (0x0001)
    uint8_t CurrentObjState; // 0x0043 (0x0001)
};

// ScriptStruct: BendGame.TimeAndWeatherSettings
struct TimeAndWeatherSettings {
    struct FName TimeAndWeatherID; // 0x0000 (0x0008)
    bool OverrideWorldTime; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float StartTime; // 0x000C (0x0004)
    float EndTime; // 0x0010 (0x0004)
    float EndYawOffset; // 0x0014 (0x0004)
    float EndPitchOffset; // 0x0018 (0x0004)
    float EndRollOffset; // 0x001C (0x0004)
    float CinematicOffsetMultiplier; // 0x0020 (0x0004)
    bool OverrideDefaultMissionWallClockDurationInMinutes; // 0x0024 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0025 (0x0003)
    float MissionWallClockDurationInMinutes; // 0x0028 (0x0004)
};

// ScriptStruct: BendGame.BendDLCInventory
struct BendDLCInventory : public TableRowBase {
    struct TArray<uint8_t> Weapons; // 0x0000 (0x0010)
    struct TArray<uint8_t> Ammo; // 0x0010 (0x0010)
    struct TArray<uint8_t> CraftComponent; // 0x0020 (0x0010)
    struct TArray<uint8_t> Consumable; // 0x0030 (0x0010)
    struct TArray<uint8_t> Utility; // 0x0040 (0x0010)
    struct TArray<uint8_t> Recipe; // 0x0050 (0x0010)
    struct TArray<uint8_t> VehicleParts; // 0x0060 (0x0010)
    struct TArray<uint8_t> SkillsByTag; // 0x0070 (0x0010)
    int32_t Stamina; // 0x0080 (0x0004)
    int32_t Focus; // 0x0084 (0x0004)
    int32_t Health; // 0x0088 (0x0004)
    int32_t PlayerLevel; // 0x008C (0x0004)
};

// ScriptStruct: BendGame.BendDemoJumpPointInventory
struct BendDemoJumpPointInventory {
    uint8_t InventoryByTag[0x8]; // 0x0000 (0x0008)
    int32_t Count; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendDemoJumpPoints
struct BendDemoJumpPoints : public TableRowBase {
    struct FString DemoDescription; // 0x0000 (0x0010)
    bool IsCompleteMissionOrJobSpecificRow; // 0x0010 (0x0001)
    uint8_t CurrentAct; // 0x0011 (0x0001)
    uint8_t Pad_0[0xE]; // 0x0012 (0x000E)
    uint8_t PlayerStartPosition[0x30]; // 0x0020 (0x0030)
    uint8_t BikeStartPosition[0x30]; // 0x0050 (0x0030)
    uint8_t CameraStartLookAtPosition[0xC]; // 0x0080 (0x000C)
    bool SpawnWithBike; // 0x008C (0x0001)
    bool BlockGeneralMissionAndJobProgression; // 0x008D (0x0001)
    uint8_t Pad_1[0x2]; // 0x008E (0x0002)
    struct TArray<uint8_t> CategoryContent; // 0x0090 (0x0010)
    struct TArray<uint8_t> JobsUnlocked; // 0x00A0 (0x0010)
    uint8_t ActiveMission; // 0x00B0 (0x0001)
    uint8_t CompleteMissionJobsFromActAndBefore; // 0x00B1 (0x0001)
    uint8_t Pad_2[0x6]; // 0x00B2 (0x0006)
    struct TArray<uint8_t> CompleteSpecificJobs; // 0x00B8 (0x0010)
    struct TArray<uint8_t> CompleteSpecificMissions; // 0x00C8 (0x0010)
    struct TArray<uint8_t> Items; // 0x00D8 (0x0010)
    struct TArray<uint8_t> InventoryByTag; // 0x00E8 (0x0010)
    struct TArray<uint8_t> Weapons; // 0x00F8 (0x0010)
    struct TArray<uint8_t> Ammo; // 0x0108 (0x0010)
    struct TArray<uint8_t> CraftComponent; // 0x0118 (0x0010)
    struct TArray<uint8_t> Consumable; // 0x0128 (0x0010)
    struct TArray<uint8_t> Utility; // 0x0138 (0x0010)
    struct TArray<uint8_t> Recipe; // 0x0148 (0x0010)
    struct TArray<uint8_t> VehicleParts; // 0x0158 (0x0010)
    struct TArray<uint8_t> Skills; // 0x0168 (0x0010)
    int32_t Stamina; // 0x0178 (0x0004)
    int32_t Focus; // 0x017C (0x0004)
    int32_t Health; // 0x0180 (0x0004)
    int32_t PlayerLevel; // 0x0184 (0x0004)
    struct TArray<uint8_t> FactionRewards; // 0x0188 (0x0010)
    float TimeOfDay; // 0x0198 (0x0004)
    uint8_t CurrentWeather; // 0x019C (0x0001)
};

// ScriptStruct: BendGame.BendFlashBackData
struct BendFlashBackData {
    struct FName FlashbackKey; // 0x0000 (0x0008)
    int32_t FlashbackIndex; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendMissionStartConditions
struct BendMissionStartConditions {
    struct TArray<uint8_t> ConditionsForAllowing; // 0x0000 (0x0010)
    struct FText ReasonForNotStarting; // 0x0010 (0x0018)
    struct FText RequirementText; // 0x0028 (0x0018)
};

// ScriptStruct: BendGame.BendRewardsScreenData
struct BendRewardsScreenData {
    uint8_t Category; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText TitleText; // 0x0008 (0x0018)
    struct FText SubtitleText; // 0x0020 (0x0018)
    struct TArray<uint8_t> FactionRewards; // 0x0038 (0x0010)
    class UObject* NestingZoneDataAsset; // 0x0048 (0x0008)
    int32_t XPGained; // 0x0050 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0054 (0x0004)
    struct FText DescriptionText; // 0x0058 (0x0018)
    uint8_t PromptType; // 0x0070 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0071 (0x0007)
    struct TArray<uint8_t> PrimaryStoryLineData; // 0x0078 (0x0010)
    struct TArray<uint8_t> StoryLineDataRewards; // 0x0088 (0x0010)
    class UObject* AssociatedMissionData; // 0x0098 (0x0008)
    class UObject* AssociatedJobData; // 0x00A0 (0x0008)
};

// ScriptStruct: BendGame.BendStoryLinesBasicDataForUI
struct BendStoryLinesBasicDataForUI {
    uint8_t StoryLineID; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t CompletedCount; // 0x0004 (0x0004)
    int32_t TotalCount; // 0x0008 (0x0004)
    uint8_t Pad_1[0x4]; // 0x000C (0x0004)
    struct FText StoryLineTitle; // 0x0010 (0x0018)
    struct FText CurrentDescription; // 0x0028 (0x0018)
    uint8_t NextRewardThatUnlocks[0x78]; // 0x0040 (0x0078)
    class UObject* StoryLineIcon; // 0x00B8 (0x0008)
    uint8_t StoryLineCoverImage[0x20]; // 0x00C0 (0x0020)
    struct FText StoryLineIconGlyph; // 0x00E0 (0x0018)
    uint8_t StoryLineColor[0x10]; // 0x00F8 (0x0010)
};

// ScriptStruct: BendGame.BendStoryLineRewards
struct BendStoryLineRewards {
    struct FText RewardTitle; // 0x0000 (0x0018)
    struct FText RewardDescription; // 0x0018 (0x0018)
    uint8_t RewardType; // 0x0030 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0031 (0x0003)
    int32_t NumberOfThingsToCompleteToUnlock; // 0x0034 (0x0004)
    uint8_t UnlockedGamePlayAsset[0x8]; // 0x0038 (0x0008)
    uint8_t AssociatedImage[0x20]; // 0x0040 (0x0020)
    uint8_t TrophyToUnlock[0x8]; // 0x0060 (0x0008)
    bool SuppressReward; // 0x0068 (0x0001)
    bool HardModeOnlyReward; // 0x0069 (0x0001)
    uint8_t Pad_1[0x6]; // 0x006A (0x0006)
    struct FName OtherSpecificMiscIdentifiers; // 0x0070 (0x0008)
};

// ScriptStruct: BendGame.BendStoryLinesForScripting
struct BendStoryLinesForScripting {
    uint8_t StoryLineID; // 0x0000 (0x0001)
    uint8_t StateOfStoryLine; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    int32_t CompletedCount; // 0x0004 (0x0004)
    int32_t TotalCount; // 0x0008 (0x0004)
    float CompletionPercentage; // 0x000C (0x0004)
    struct FText StoryLineTitle; // 0x0010 (0x0018)
    struct FText CurrentDescription; // 0x0028 (0x0018)
    struct TArray<uint8_t> StoryLineAssets; // 0x0040 (0x0010)
    struct TArray<uint8_t> StoryLineRewards; // 0x0050 (0x0010)
    uint8_t NextRewardThatUnlocks[0x78]; // 0x0060 (0x0078)
    class UObject* StoryLineIcon; // 0x00D8 (0x0008)
    struct FText StoryLineIconGlyph; // 0x00E0 (0x0018)
    uint8_t StoryLineCoverImage[0x20]; // 0x00F8 (0x0020)
    uint8_t StoryLineBackgroundImage[0x20]; // 0x0118 (0x0020)
    uint8_t StoryLineCollectible[0x8]; // 0x0138 (0x0008)
    uint8_t StoryLineColor[0x10]; // 0x0140 (0x0010)
};

// ScriptStruct: BendGame.BendStoryLineAssetsForScripting
struct BendStoryLineAssetsForScripting {
    class UObject* MissionData; // 0x0000 (0x0008)
    class UObject* JobData; // 0x0008 (0x0008)
    uint8_t StateOfAsset; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    struct FText CurrentDescription; // 0x0018 (0x0018)
    uint8_t AssociatedCollectible[0x8]; // 0x0030 (0x0008)
};

// ScriptStruct: BendGame.BendStoryLinesData
struct BendStoryLinesData {
    struct FText StoryLineTitle; // 0x0000 (0x0018)
    struct TArray<uint8_t> StoryLineDynamicDescriptions; // 0x0018 (0x0010)
    struct TArray<uint8_t> StoryLineAssets; // 0x0028 (0x0010)
    struct TArray<uint8_t> StoryLineRewards; // 0x0038 (0x0010)
    class UObject* StoryLineIcon; // 0x0048 (0x0008)
    struct FText StoryLineIconGlyph; // 0x0050 (0x0018)
    uint8_t StoryLineCoverImage[0x20]; // 0x0068 (0x0020)
    uint8_t StoryLineBackgroundImage[0x20]; // 0x0088 (0x0020)
    uint8_t StoryLineColor[0x10]; // 0x00A8 (0x0010)
    uint8_t StoryLineCollectible[0x8]; // 0x00B8 (0x0008)
    struct FString LocalizationStorylineIdentifier; // 0x00C0 (0x0010)
};

// ScriptStruct: BendGame.BendStoryLineAssets
struct BendStoryLineAssets {
    class UObject* MissionData; // 0x0000 (0x0008)
    class UObject* JobData; // 0x0008 (0x0008)
    struct FText PostCompleteDescription; // 0x0010 (0x0018)
    uint8_t AssociatedCollectible[0x8]; // 0x0028 (0x0008)
    int32_t ForceToIndexInArray; // 0x0030 (0x0004)
};

// ScriptStruct: BendGame.BendStoryLineDynamicDescriptions
struct BendStoryLineDynamicDescriptions {
    struct FText StoryLineText; // 0x0000 (0x0018)
    struct TArray<uint8_t> ConditionForUnlocking; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.BendObjectiveAttachData
struct BendObjectiveAttachData {
    uint8_t AttachType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t AttachOffset[0xC]; // 0x0004 (0x000C)
};

// ScriptStruct: BendGame.BendObjectiveBreadcrumbsData
struct BendObjectiveBreadcrumbsData {
    class UObject* BendTriggerBoxObject; // 0x0000 (0x0008)
    uint8_t LocationProxyForWidget[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendCinematicLevelData
struct BendCinematicLevelData {
    struct FName CinematicID; // 0x0000 (0x0008)
    struct FName CinematicLevel; // 0x0008 (0x0008)
    bool PreLoadsAlongWithIntroCin; // 0x0010 (0x0001)
    uint8_t CinematicType; // 0x0011 (0x0001)
    bool FadeIntoCin; // 0x0012 (0x0001)
    uint8_t FadeInColorType; // 0x0013 (0x0001)
    bool FadeOutAtEndOfCin; // 0x0014 (0x0001)
    bool Skippable; // 0x0015 (0x0001)
    uint8_t CinematicForceStreamingType; // 0x0016 (0x0001)
    uint8_t FadeOutColorType; // 0x0017 (0x0001)
    struct FString SoundSnapshot; // 0x0018 (0x0010)
    struct FName TimeAndWeatherIDOverride; // 0x0028 (0x0008)
    uint8_t MusicManager[0x20]; // 0x0030 (0x0020)
    struct FName MusicEventUpdate; // 0x0050 (0x0008)
    bool PlayDynamicWildlifeSounds; // 0x0058 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0059 (0x0007)
    struct TArray<uint8_t> LevelsToLoadList; // 0x0060 (0x0010)
    struct TArray<uint8_t> CinematicVehicleMatchingInfos; // 0x0070 (0x0010)
    struct TArray<uint8_t> CinematicWeaponMatchingInfos; // 0x0080 (0x0010)
    struct TArray<uint8_t> RemoteEventsToCallAfterSyncStream; // 0x0090 (0x0010)
    uint8_t Pad_1[0x4]; // 0x00A0 (0x0004)
    float LightFadeInTime; // 0x00A4 (0x0004)
    float TargetFadeInIntensity; // 0x00A8 (0x0004)
    uint8_t FadeInEasingFunc; // 0x00AC (0x0001)
    uint8_t Pad_2[0x3]; // 0x00AD (0x0003)
    float FadeInBlendExp; // 0x00B0 (0x0004)
    int32_t FadeInSteps; // 0x00B4 (0x0004)
    uint8_t Pad_3[0x4]; // 0x00B8 (0x0004)
    float LightFadeOutTime; // 0x00BC (0x0004)
    float TargetFadeOutIntensity; // 0x00C0 (0x0004)
    uint8_t FadeOutEasingFunc; // 0x00C4 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00C5 (0x0003)
    float FadeOutBlendExp; // 0x00C8 (0x0004)
    int32_t FadeOutSteps; // 0x00CC (0x0004)
    bool AutoPreLoadMatineeActors; // 0x00D0 (0x0001)
    bool AutoPreLoadUsePlayerDistanceTrigger; // 0x00D1 (0x0001)
    uint8_t Pad_5[0x2]; // 0x00D2 (0x0002)
    float AutoPreLoadPlayerTriggerDistance; // 0x00D4 (0x0004)
};

// ScriptStruct: BendGame.MatineeWeaponSwapInfo
struct MatineeWeaponSwapInfo {
    struct FName CinematicMeshSwapTag; // 0x0000 (0x0008)
    struct FName OwnerActorSwapTag; // 0x0008 (0x0008)
    uint8_t FromOwnerSocket; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.MatineeVehicleInfo
struct MatineeVehicleInfo {
    bool EndCinematicOnVehicle; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName CharacterSwapTag; // 0x0008 (0x0008)
    struct FName VehicleSwapTag; // 0x0010 (0x0008)
    struct FName VehicleSeatName; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.MissionStatisticsData
struct MissionStatisticsData {
    struct FName DisplayText; // 0x0000 (0x0008)
    struct FName MapKey; // 0x0008 (0x0008)
    uint8_t StatisticType; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.BendBoozerRewardData
struct BendBoozerRewardData {
    int32_t MoraleForCompletion; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName GameplayDatabaseString; // 0x0008 (0x0008)
    int32_t MoraleForTrue; // 0x0010 (0x0004)
    int32_t MoraleForFalse; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.PairedKill
struct PairedKill {
    struct TArray<uint8_t> FactionTypes; // 0x0000 (0x0010)
    uint8_t PairedKillTypesNew[0x10]; // 0x0010 (0x0010)
    uint8_t Pad_0[0x1C0]; // 0x0020 (0x01C0)
    class UClass* AttackerProp; // 0x01E0 (0x0008)
};

// ScriptStruct: BendGame.PairedKillType
struct PairedKillType {
    struct TArray<uint8_t> PairedAnims; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.PairedKillAnims
struct PairedKillAnims {
    class UObject* AttackerAnimation; // 0x0000 (0x0008)
    class UObject* DefenderAnimation; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.ProvokedWithWeaponData
struct ProvokedWithWeaponData {
    struct TArray<uint8_t> WeaponTypes; // 0x0000 (0x0010)
    float ReduceMeleeHitVictimCountPerSecond; // 0x0010 (0x0004)
    int32_t MinNumMeleeHitVictimDoProvoke; // 0x0014 (0x0004)
    int32_t MaxNumMeleeHitVictimDoProvoke; // 0x0018 (0x0004)
    int32_t MinNumProvokesBeforeProvokeAttack; // 0x001C (0x0004)
    int32_t MaxNumProvokesBeforeProvokeAttack; // 0x0020 (0x0004)
    bool AllowProvokeDodge; // 0x0024 (0x0001)
    bool AllowProvokeGrapple; // 0x0025 (0x0001)
    bool AllowProvokeBigAttack; // 0x0026 (0x0001)
    bool AllowBlockedBigAttack; // 0x0027 (0x0001)
    bool ClearAllProvokeFlags; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    float CooldownTimeAfterProvoke; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.FactionCombatData
struct FactionCombatData {
    struct TArray<uint8_t> Factions; // 0x0000 (0x0010)
    float TimeBetweenMeleeAttacks; // 0x0010 (0x0004)
    float MinTimeBetweenMeleeAttacks; // 0x0014 (0x0004)
    float TimeBetweenGrappleAttacks; // 0x0018 (0x0004)
    float ForceGrappleDistance; // 0x001C (0x0004)
    float GrappleChance; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.BlockAttackInfoData
struct BlockAttackInfoData {
    struct TArray<uint8_t> BlockAttackFromRightAnimations; // 0x0000 (0x0010)
    struct TArray<uint8_t> BlockAttackFromLeftAnimations; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.DodgeInfoData
struct DodgeInfoData {
    uint8_t AttackerType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ForwardFacingAngle; // 0x0004 (0x0004)
    float Spread; // 0x0008 (0x0004)
    float MaxDistanceAwayFromAttacker; // 0x000C (0x0004)
    float MinWaitTimeAfterDodge; // 0x0010 (0x0004)
    float MaxWaitTimeAfterDodge; // 0x0014 (0x0004)
    float ChanceDodgeDuringMelee; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.GrappleInfoData
struct GrappleInfoData {
    uint8_t AttackerType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float TimeBetweenGrappleAttacks; // 0x0004 (0x0004)
    float TimeBetweenMeleeAttacks; // 0x0008 (0x0004)
    float MinTimeBetweenMeleeAttacks; // 0x000C (0x0004)
    float ForceGrappleDistance; // 0x0010 (0x0004)
    float GrappleSuccessDistance; // 0x0014 (0x0004)
    float DirectGrappleLockoutTime; // 0x0018 (0x0004)
    int32_t MaxNumberOfGrapplesAllowed; // 0x001C (0x0004)
    uint8_t FrontGrappleLocation[0x30]; // 0x0020 (0x0030)
    uint8_t BackGrappleLocation[0x30]; // 0x0050 (0x0030)
    uint8_t RightGrappleLocation[0x30]; // 0x0080 (0x0030)
    uint8_t LeftGrappleLocation[0x30]; // 0x00B0 (0x0030)
};

// ScriptStruct: BendGame.GrappleLocationData_2
struct GrappleLocationData_2 {
    uint8_t ValidAttackAngle[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct TArray<uint8_t> GrappleAnimations; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.GrappleAnimationData_2
struct GrappleAnimationData_2 {
    float GrapplePriority; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> GrappleEnterAnimations; // 0x0008 (0x0010)
    struct TArray<uint8_t> GrapplingAnimations; // 0x0018 (0x0010)
    struct TArray<uint8_t> GrappleExitAnimations; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.GrappleExitAnimsData
struct GrappleExitAnimsData {
    class UObject* GrappledBreakingOutAnimSeq; // 0x0000 (0x0008)
    class UObject* GrapplerBreakingOutAnimSeq; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.GrapplingAnimsData
struct GrapplingAnimsData {
    class UObject* GrappledAnimSeq; // 0x0000 (0x0008)
    class UObject* GrapplerAnimSeq; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.GrappleEnterAnimsData
struct GrappleEnterAnimsData {
    class UObject* GrappledEnterAnimSeq; // 0x0000 (0x0008)
    class UObject* GrapplerEnterAnimSeq; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.ValidAttackAngleData
struct ValidAttackAngleData {
    float Rotation; // 0x0000 (0x0004)
    float Spread; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.GrappleOverrideData
struct GrappleOverrideData {
    struct FName GrappleSocketName; // 0x0000 (0x0008)
    struct TArray<uint8_t> TargetTypeData; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.GrappleOverrideTypeData
struct GrappleOverrideTypeData {
    uint8_t TargetType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> TargetTypeArray; // 0x0008 (0x0010)
    struct TArray<uint8_t> TieredGrappleAnims; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.TieredGrappleData
struct TieredGrappleData {
    int32_t NumGrapplersRequired; // 0x0000 (0x0004)
    bool SimultaneousStart; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t TargetHealthRange[0x8]; // 0x0008 (0x0008)
    struct FName GrappleName; // 0x0010 (0x0008)
    struct TArray<uint8_t> GrappleTiers; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.GrappleAnimationData
struct GrappleAnimationData {
    struct TArray<uint8_t> EnterAnims; // 0x0000 (0x0010)
    struct TArray<uint8_t> LoopAnims; // 0x0010 (0x0010)
    struct TArray<uint8_t> ExitAnims; // 0x0020 (0x0010)
    bool SkipButtonEvent; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.GrappleExitPairAnimData
struct GrappleExitPairAnimData {
    struct TArray<uint8_t> Anims; // 0x0000 (0x0010)
    uint8_t CompletionRangeForExit[0x8]; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.GrapplePairAnimData
struct GrapplePairAnimData {
    class UObject* VictimAnim; // 0x0000 (0x0008)
    class UObject* GrapplerAnim; // 0x0008 (0x0008)
    class UObject* SecondaryGrapplerAnim; // 0x0010 (0x0008)
    uint8_t Weight[0x4]; // 0x0018 (0x0004)
    bool NearCollision; // 0x001C (0x0001)
};

// ScriptStruct: BendGame.GrappleLocationData
struct GrappleLocationData {
    struct FName GrappleSocketName; // 0x0000 (0x0008)
    uint8_t ValidAttackAngle[0xC]; // 0x0008 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct TArray<uint8_t> AttackerTypeData; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.GrappleAttackerTypeData
struct GrappleAttackerTypeData {
    uint8_t AttackerType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> AttackerTypeArray; // 0x0008 (0x0010)
    float Priority; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> TieredGrappleAnims; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.CoolMeleeData
struct CoolMeleeData {
};

// ScriptStruct: BendGame.BendMeleeAttackData
struct BendMeleeAttackData {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t WeaponType; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> WeaponTypes; // 0x0020 (0x0010)
    uint8_t Pad_2[0xC]; // 0x0030 (0x000C)
    float ChanceToDoKillOnFirstAttack; // 0x003C (0x0004)
    struct TArray<uint8_t> MeleeComboPlayRateCurve; // 0x0040 (0x0010)
    struct TArray<uint8_t> MeleeAnimations; // 0x0050 (0x0010)
    uint8_t WeaponBreakingReaction[0x50]; // 0x0060 (0x0050)
    uint8_t MissSwingNoMovement[0x18]; // 0x00B0 (0x0018)
    uint8_t MissSwingDefault[0x18]; // 0x00C8 (0x0018)
    uint8_t MissSwingRunning[0x18]; // 0x00E0 (0x0018)
    uint8_t MissSwingOnBike[0x18]; // 0x00F8 (0x0018)
    uint8_t MissCounterAttack[0x18]; // 0x0110 (0x0018)
    uint8_t CounterAttackReady[0x18]; // 0x0128 (0x0018)
};

// ScriptStruct: BendGame.MeleeMissSwingAnims
struct MeleeMissSwingAnims {
    class UObject* Right; // 0x0000 (0x0008)
    class UObject* Left; // 0x0008 (0x0008)
    class UObject* OverHead; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.MeleePairedAnimSeqRLGroupData
struct MeleePairedAnimSeqRLGroupData {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    struct TArray<uint8_t> Right; // 0x0030 (0x0010)
    struct TArray<uint8_t> Left; // 0x0040 (0x0010)
};

// ScriptStruct: BendGame.MeleePairedAnimData
struct MeleePairedAnimData {
    class UObject* AttackerAnim; // 0x0000 (0x0008)
    class UObject* VictimAnim; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.MeleePairedAnimBasedOnFactionTypeData
struct MeleePairedAnimBasedOnFactionTypeData {
    struct TArray<uint8_t> FactionType; // 0x0000 (0x0010)
    uint8_t EnterIntoMeleeAttack[0x190]; // 0x0010 (0x0190)
    uint8_t EnterIntoMeleeAttack180[0x190]; // 0x01A0 (0x0190)
    uint8_t EnterIntoMeleeAttackSprinting[0x190]; // 0x0330 (0x0190)
    uint8_t HeavyMeleeAttack[0x190]; // 0x04C0 (0x0190)
    uint8_t HeavyMeleeAttackSprinting[0x190]; // 0x0650 (0x0190)
    uint8_t HighAttack[0x50]; // 0x07E0 (0x0050)
    uint8_t MiddleAttack[0x50]; // 0x0830 (0x0050)
    uint8_t LowAttack[0x50]; // 0x0880 (0x0050)
    uint8_t OverheadAttack[0x50]; // 0x08D0 (0x0050)
    uint8_t GroundAttack[0x50]; // 0x0920 (0x0050)
    uint8_t ComboEnderAttack[0x50]; // 0x0970 (0x0050)
    uint8_t ComboEnderAttackSprinting[0x50]; // 0x09C0 (0x0050)
    uint8_t LowStaminaAttack[0x50]; // 0x0A10 (0x0050)
    uint8_t OutOfStaminaAttack[0x50]; // 0x0A60 (0x0050)
    uint8_t VictimDodgeAttack[0x50]; // 0x0AB0 (0x0050)
    struct TArray<uint8_t> VictimBlockAttack; // 0x0B00 (0x0010)
    uint8_t CounterAttack[0x50]; // 0x0B10 (0x0050)
    uint8_t Kill[0x50]; // 0x0B60 (0x0050)
    struct TArray<uint8_t> OverheadKill; // 0x0BB0 (0x0010)
    uint8_t Pad_0[0x18]; // 0x0BC0 (0x0018)
    uint8_t LastAttackerKill[0x50]; // 0x0BD8 (0x0050)
    struct TArray<uint8_t> LastAttackerOverheadKill; // 0x0C28 (0x0010)
    uint8_t Pad_1[0x18]; // 0x0C38 (0x0018)
    struct TArray<uint8_t> StunAndBrutalKill; // 0x0C50 (0x0010)
    struct TArray<uint8_t> StunAndBrutalKillFromBehind; // 0x0C60 (0x0010)
    struct TArray<uint8_t> MeleeKillWithBrokenWeapon; // 0x0C70 (0x0010)
    uint8_t Pad_2[0x18]; // 0x0C80 (0x0018)
    uint8_t HeavyMeleeKill[0x50]; // 0x0C98 (0x0050)
    uint8_t LastAttackerHeavyMeleeKill[0x50]; // 0x0CE8 (0x0050)
    struct TArray<uint8_t> ContextualWallAttack; // 0x0D38 (0x0010)
    uint8_t Pad_3[0x18]; // 0x0D48 (0x0018)
    struct TArray<uint8_t> ContextualTableAttack; // 0x0D60 (0x0010)
    uint8_t Pad_4[0x18]; // 0x0D70 (0x0018)
    struct TArray<uint8_t> ContextualCliffAttack; // 0x0D88 (0x0010)
    uint8_t Pad_5[0x18]; // 0x0D98 (0x0018)
    struct TArray<uint8_t> ContextualWallKill; // 0x0DB0 (0x0010)
    uint8_t Pad_6[0x18]; // 0x0DC0 (0x0018)
    struct TArray<uint8_t> ContextualTableKill; // 0x0DD8 (0x0010)
    uint8_t Pad_7[0x18]; // 0x0DE8 (0x0018)
    struct TArray<uint8_t> ContextualCliffKill; // 0x0E00 (0x0010)
    uint8_t Pad_8[0x18]; // 0x0E10 (0x0018)
    uint8_t OnBikeAttack[0x50]; // 0x0E28 (0x0050)
    uint8_t OnBikeBehindAttack[0x50]; // 0x0E78 (0x0050)
    float StaminaPercentageOutOfStaminaAttack; // 0x0EC8 (0x0004)
    int32_t RefOffsetAmount; // 0x0ECC (0x0004)
    uint8_t Pad_9[0x8]; // 0x0ED0 (0x0008)
    float HighAttackHeight; // 0x0ED8 (0x0004)
    float MiddleAttackHeight; // 0x0EDC (0x0004)
    float LowAttackHeight; // 0x0EE0 (0x0004)
    float OverheadAttackHeight; // 0x0EE4 (0x0004)
    float GroundAttackHeight; // 0x0EE8 (0x0004)
    bool UseHeadVelocityToCalcAttackHeight; // 0x0EEC (0x0001)
};

// ScriptStruct: BendGame.MeleeBrokenWeaponPairedAnimSeqData
struct MeleeBrokenWeaponPairedAnimSeqData {
    struct FName LeaveWeaponSocket; // 0x0000 (0x0008)
    uint8_t PairedAnimSeq[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.MeleePairedAnimSeqData
struct MeleePairedAnimSeqData {
    class UObject* AttackerAnimation; // 0x0000 (0x0008)
    class UObject* AttackedAnimation; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.MeleeStunAndBrutalKillData
struct MeleeStunAndBrutalKillData {
    float NumSecWaitExitLoopingAnim; // 0x0000 (0x0004)
    float MinDistAwayToExitLoopingAnim; // 0x0004 (0x0004)
    uint8_t StunAttack[0x50]; // 0x0008 (0x0050)
    uint8_t StunAttackSprinting[0x50]; // 0x0058 (0x0050)
    class UObject* VictimStunLoopingAnim; // 0x00A8 (0x0008)
    class UObject* VictimExitStunAnim_Normal; // 0x00B0 (0x0008)
    struct TArray<uint8_t> MeleeKillAnims; // 0x00B8 (0x0010)
    struct TArray<uint8_t> BrutalKillAnims; // 0x00C8 (0x0010)
};

// ScriptStruct: BendGame.BlockVictimFactionGroupData
struct BlockVictimFactionGroupData {
    struct TArray<uint8_t> VictimWeaponTypes; // 0x0000 (0x0010)
    struct TArray<uint8_t> BlockAnimsBasedOnFaction; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BlockPairedAnimSeqRLGroupData
struct BlockPairedAnimSeqRLGroupData {
    struct TArray<uint8_t> VictimsFaction; // 0x0000 (0x0010)
    bool RandomlyUseVictimDodgeAnims; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float PercentChanceToPlayDodgeAnim; // 0x0014 (0x0004)
    uint8_t BlockAnims[0x50]; // 0x0018 (0x0050)
};

// ScriptStruct: BendGame.EnterIntoMeleeAttackData
struct EnterIntoMeleeAttackData {
    uint8_t HighAttack[0x50]; // 0x0000 (0x0050)
    uint8_t MiddleAttack[0x50]; // 0x0050 (0x0050)
    uint8_t LowAttack[0x50]; // 0x00A0 (0x0050)
    uint8_t OverheadAttack[0x50]; // 0x00F0 (0x0050)
    uint8_t GroundAttack[0x50]; // 0x0140 (0x0050)
};

// ScriptStruct: BendGame.BendMeleeAttackGroupData
struct BendMeleeAttackGroupData {
    struct TArray<uint8_t> Right; // 0x0000 (0x0010)
    struct TArray<uint8_t> Left; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.MeleeRandomAnimData
struct MeleeRandomAnimData {
};

// ScriptStruct: BendGame.MeleePairedBlendSpaceAnimData
struct MeleePairedBlendSpaceAnimData {
    class UObject* AttackerBlendSpace; // 0x0000 (0x0008)
    class UObject* VictimBlendSpace; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.MeleeHitThrowPairedAnimBasedOnFactionTypeData
struct MeleeHitThrowPairedAnimBasedOnFactionTypeData {
    struct TArray<uint8_t> FactionType; // 0x0000 (0x0010)
    uint8_t MeleeHitThrowDirectionalAnim[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.MeleeHitThrowPairedAnimData
struct MeleeHitThrowPairedAnimData {
    class UObject* AttackerAnim; // 0x0000 (0x0008)
    class UObject* VictimAnim; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.MeleeRingData
struct MeleeRingData {
    struct TArray<uint8_t> ValidNPCs; // 0x0000 (0x0010)
    float RingRadius; // 0x0010 (0x0004)
    uint8_t Type; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    int32_t RingSlots; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> OverrideRingSlotsByFaction; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.MeleeLocationData
struct MeleeLocationData {
    float OffsetDistance; // 0x0000 (0x0004)
    float RotationAngle; // 0x0004 (0x0004)
    float ZoneRadius; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct TArray<uint8_t> ValidNPCs; // 0x0010 (0x0010)
    uint8_t Pad_1[0xC]; // 0x0020 (0x000C)
    uint8_t SlotNavPos[0xC]; // 0x002C (0x000C)
    uint8_t Pad_2[0xC]; // 0x0038 (0x000C)
    uint64_t pOwner; // 0x0044 (0x0008)
};

// ScriptStruct: BendGame.AimAssistTargetingInfo
struct AimAssistTargetingInfo {
    float AssistMinAwareness; // 0x0000 (0x0004)
    float AssistDistNear; // 0x0004 (0x0004)
    float AssistDistFar; // 0x0008 (0x0004)
    float AssistAngleNear; // 0x000C (0x0004)
    float AssistAngleFar; // 0x0010 (0x0004)
    float AssistAngleSnapNear; // 0x0014 (0x0004)
    float AssistAngleSnapFar; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.AimTargetPoint
struct AimTargetPoint {
    struct FName BoneName; // 0x0000 (0x0008)
    float Radius; // 0x0008 (0x0004)
    float Strength; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.LimbTrackingInfo
struct LimbTrackingInfo {
    struct FName LimbSocketName; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.AvoidanceModifiers
struct AvoidanceModifiers {
    float HeavyHitModifier; // 0x0000 (0x0004)
    float StealthModifier; // 0x0004 (0x0004)
    float FreeDodgeModifier; // 0x0008 (0x0004)
    float CrouchedModifier; // 0x000C (0x0004)
    float CoverModifier; // 0x0010 (0x0004)
    float InMeleeModifier; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.MeleeAttackData
struct MeleeAttackData {
    uint8_t Pad_0[0x19]; // 0x0000 (0x0019)
    bool bUpdateMeleeAnchor; // 0x0019 (0x0001)
    bool bCanAnchorToTargetAtStartOfAttack; // 0x001A (0x0001)
    bool bCanAnchorToTarget; // 0x001B (0x0001)
    bool bCanPlayPairedAnim; // 0x001C (0x0001)
    bool bAttackFromRightSide; // 0x001D (0x0001)
    uint8_t Pad_1[0x2]; // 0x001E (0x0002)
    int32_t iAnimRefOffset; // 0x0020 (0x0004)
    float fAnimPlayRate; // 0x0024 (0x0004)
    float fMeleeAttackDist; // 0x0028 (0x0004)
    float fRunningExtendTravelDistanceBreakAnchor; // 0x002C (0x0004)
    uint8_t eAttackType; // 0x0030 (0x0001)
    uint8_t eAttackBaseType; // 0x0031 (0x0001)
    uint8_t Pad_2[0x6]; // 0x0032 (0x0006)
    class UObject* pAttackerAnim; // 0x0038 (0x0008)
    uint8_t AttackerAnim[0x28]; // 0x0040 (0x0028)
    class UObject* pVictimsAnim; // 0x0068 (0x0008)
    uint8_t VictimsAnim[0x28]; // 0x0070 (0x0028)
    class UObject* pBrokenWpnReactionAnim; // 0x0098 (0x0008)
    struct FName nPlayRateCurveName; // 0x00A0 (0x0008)
};

// ScriptStruct: BendGame.DetectedHorde
struct DetectedHorde {
    uint8_t m_HordeMemberHandle[0x2]; // 0x0000 (0x0002)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    uint8_t m_Location[0xC]; // 0x0004 (0x000C)
    float m_fDistance; // 0x0010 (0x0004)
    int32_t m_NumNearbyHorde; // 0x0014 (0x0004)
    bool m_bHaveLOS; // 0x0018 (0x0001)
    bool m_bFrenzied; // 0x0018 (0x0001)
    bool m_bIsEnemy; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.DetectedBody
struct DetectedBody {
    uint8_t Pad_0[0x24]; // 0x0000 (0x0024)
    float m_fTimeSinceFirstSeen; // 0x0024 (0x0004)
    float m_fFaction; // 0x0028 (0x0004)
    float m_fDistance; // 0x002C (0x0004)
    bool m_bHaveLOS; // 0x0030 (0x0001)
    bool m_bInvestigated; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.DetectedPawn
struct DetectedPawn {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint64_t m_pDetector; // 0x0008 (0x0008)
    float m_fAwarenessLevel; // 0x0010 (0x0004)
    uint8_t m_LastKnownLocation[0xC]; // 0x0014 (0x000C)
    float m_fDistance; // 0x0020 (0x0004)
    float m_fTimeWhenSeen; // 0x0024 (0x0004)
    float m_fTimeWhenHeard; // 0x0028 (0x0004)
    float m_fTimeWhenHeardLastRock; // 0x002C (0x0004)
    float m_fTimeWhenAttacked; // 0x0030 (0x0004)
    float m_fFaction; // 0x0034 (0x0004)
    float m_fLastHeardVolume; // 0x0038 (0x0004)
    float m_fMaxAwareness; // 0x003C (0x0004)
    float m_fCosFromCenter; // 0x0040 (0x0004)
    float m_fAngleToClosestFriend; // 0x0044 (0x0004)
    float m_fDamageReceived; // 0x0048 (0x0004)
    uint8_t m_soundEvent; // 0x004C (0x0001)
    uint8_t Pad_1[0x3]; // 0x004D (0x0003)
    int32_t m_iNumTimesAttackedMe; // 0x0050 (0x0004)
    int32_t m_iHeardTooManyRocks; // 0x0054 (0x0004)
    bool m_bSoundWasRemote; // 0x0058 (0x0001)
    bool m_bPreviouslyAware; // 0x0058 (0x0001)
    bool m_bAttackedMe; // 0x0058 (0x0001)
    bool m_bHaveLOS; // 0x0058 (0x0001)
    bool m_bEverHadLOS; // 0x0058 (0x0001)
    bool m_bPawnDetectedPlayerHandled; // 0x0058 (0x0001)
    bool m_bHidden; // 0x0058 (0x0001)
    bool m_bSawHide; // 0x0058 (0x0001)
    bool m_bSawBody; // 0x0059 (0x0001)
    bool m_bSawVehicle; // 0x0059 (0x0001)
    bool m_bLastAttackWasMelee; // 0x0059 (0x0001)
    bool m_bHasFirstHandAwareness; // 0x0059 (0x0001)
};

// ScriptStruct: BendGame.BendSensingData
struct BendSensingData {
    float SightRadiusFar; // 0x0000 (0x0004)
    float SightRadiusMid; // 0x0004 (0x0004)
    float SightRadiusNear; // 0x0008 (0x0004)
    float SightRadiusESP; // 0x000C (0x0004)
    float SightRadiusVehicle; // 0x0010 (0x0004)
    float SightRadiusBodies; // 0x0014 (0x0004)
    float SightRadiusHorde; // 0x0018 (0x0004)
    float SightAngleFar; // 0x001C (0x0004)
    float SightAngleMid; // 0x0020 (0x0004)
    float SightAngleNear; // 0x0024 (0x0004)
    float SightAngleESP; // 0x0028 (0x0004)
    float SightAngleVehicle; // 0x002C (0x0004)
    float SightAngleBodies; // 0x0030 (0x0004)
    float SightAngleHorde; // 0x0034 (0x0004)
    float SightRainMult; // 0x0038 (0x0004)
    float SightHeavyRainMult; // 0x003C (0x0004)
    float SightFogMult; // 0x0040 (0x0004)
    float SightCloudyMult; // 0x0044 (0x0004)
    float SightSnowMult; // 0x0048 (0x0004)
    float SightHeavySnowMult; // 0x004C (0x0004)
    float SightFlashlightMult; // 0x0050 (0x0004)
    float SightCrouchMult; // 0x0054 (0x0004)
    float SightRidingMult; // 0x0058 (0x0004)
    float SightHiddenMult; // 0x005C (0x0004)
    float SightSawHideMult; // 0x0060 (0x0004)
    float SightMovingMult; // 0x0064 (0x0004)
    float SightInsideMult; // 0x0068 (0x0004)
    float TimeToAwareFar; // 0x006C (0x0004)
    float TimeToAwareMid; // 0x0070 (0x0004)
    float TimeToAwareNear; // 0x0074 (0x0004)
    float TimeToAwareESP; // 0x0078 (0x0004)
    float TimeToAwareCrouchMult; // 0x007C (0x0004)
    float TimeToAwarePlayerSkillMult; // 0x0080 (0x0004)
    float TimeToCoolDown; // 0x0084 (0x0004)
    float TimeToUnaware; // 0x0088 (0x0004)
    float CoolDownMoveDist; // 0x008C (0x0004)
    float CoolDownMoveMult; // 0x0090 (0x0004)
    float SmallCoverMaximumWidth; // 0x0094 (0x0004)
    float SmallCoverMinimumWidth; // 0x0098 (0x0004)
    float SmallCoverMaxTimeAwarenessMultiplier; // 0x009C (0x0004)
    float MaxAwarenessFar; // 0x00A0 (0x0004)
    float MaxAwarenessESP; // 0x00A4 (0x0004)
    float HearingThreshold; // 0x00A8 (0x0004)
    float HearingThresholdHorde; // 0x00AC (0x0004)
    float HearingFrenziedMult; // 0x00B0 (0x0004)
    float HearingRainMult; // 0x00B4 (0x0004)
    float HearingHeavyRainMult; // 0x00B8 (0x0004)
    float HearingFogMult; // 0x00BC (0x0004)
    float HearingSnowMult; // 0x00C0 (0x0004)
    float HearingHeavySnowMult; // 0x00C4 (0x0004)
    float HearingWindMult; // 0x00C8 (0x0004)
    float SensingIntervalFar; // 0x00CC (0x0004)
    float SensingIntervalMid; // 0x00D0 (0x0004)
    float SensingIntervalNear; // 0x00D4 (0x0004)
};

// ScriptStruct: BendGame.FactionTableCSV
struct FactionTableCSV : public TableRowBase {
    float Player; // 0x0000 (0x0004)
    float Boozer; // 0x0004 (0x0004)
    float Lisa; // 0x0008 (0x0004)
    float Buddy; // 0x000C (0x0004)
    float Swarmer; // 0x0010 (0x0004)
    float Newt; // 0x0014 (0x0004)
    float LootNewt; // 0x0018 (0x0004)
    float RagerBear; // 0x001C (0x0004)
    float FreakCougar; // 0x0020 (0x0004)
    float FreakWolf; // 0x0024 (0x0004)
    float FreakCrow; // 0x0028 (0x0004)
    float Horde; // 0x002C (0x0004)
    float Survivor; // 0x0030 (0x0004)
    float Cannibal; // 0x0034 (0x0004)
    float Marauder; // 0x0038 (0x0004)
    float Militia; // 0x003C (0x0004)
    float Hostage; // 0x0040 (0x0004)
    float Loner; // 0x0044 (0x0004)
    float Nero; // 0x0048 (0x0004)
    float Pinnacles; // 0x004C (0x0004)
    float Hotsprings; // 0x0050 (0x0004)
    float Copeland; // 0x0054 (0x0004)
    float IronMikes; // 0x0058 (0x0004)
    float RIP; // 0x005C (0x0004)
    float Wolf; // 0x0060 (0x0004)
    float Bear; // 0x0064 (0x0004)
    float Crow; // 0x0068 (0x0004)
    float Cougar; // 0x006C (0x0004)
    float Deer; // 0x0070 (0x0004)
    float Bait; // 0x0074 (0x0004)
    float FreakBait; // 0x0078 (0x0004)
    float Distractor; // 0x007C (0x0004)
    float FreakDeer; // 0x0080 (0x0004)
    float Screamer; // 0x0084 (0x0004)
    float Breaker; // 0x0088 (0x0004)
    float Reacher; // 0x008C (0x0004)
    float Bleacher; // 0x0090 (0x0004)
    float Burster; // 0x0094 (0x0004)
    float Spitter; // 0x0098 (0x0004)
    float PreBerserk; // 0x009C (0x0004)
    float Berserk; // 0x00A0 (0x0004)
    float DiamondLake; // 0x00A4 (0x0004)
    float WizardIsland; // 0x00A8 (0x0004)
    float OBrian; // 0x00AC (0x0004)
};

// ScriptStruct: BendGame.CombatSlotData
struct CombatSlotData {
};

// ScriptStruct: BendGame.BendCoverExitAnims
struct BendCoverExitAnims {
    uint8_t CoverExitType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> CoverTypes; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendCoverGroupType
struct BendCoverGroupType {
    uint8_t CoverGroupType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> WeaponTypes; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendCoverWeaponGroupType
struct BendCoverWeaponGroupType {
    struct TArray<uint8_t> WeaponGroupTypes; // 0x0000 (0x0010)
    struct TArray<uint8_t> CoverDirectionTypes; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendCoverDirectionGroupType
struct BendCoverDirectionGroupType {
    uint8_t DirectionGroupType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> AnimSequences; // 0x0008 (0x0010)
    bool bAllowBlendSpaces; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> BlendSpaces; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.BendCoverAnimGroup
struct BendCoverAnimGroup {
    uint8_t CoverAnimGroup; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> CoverTypes; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendCoverTypeAnimGroup
struct BendCoverTypeAnimGroup {
    uint8_t CoverAnimGroupType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> Animations; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendCoverAnimParameters
struct BendCoverAnimParameters {
    uint8_t LeanDirection; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> WeaponTypes; // 0x0008 (0x0010)
    float MinApproachAngle; // 0x0018 (0x0004)
    float MaxApproachAngle; // 0x001C (0x0004)
    float SmallestDistance; // 0x0020 (0x0004)
    float MaxDistance; // 0x0024 (0x0004)
    struct TArray<uint8_t> ValidSequences; // 0x0028 (0x0010)
    struct TArray<uint8_t> BlendSpaces; // 0x0038 (0x0010)
};

// ScriptStruct: BendGame.BendCoverBlendSpace
struct BendCoverBlendSpace {
    class UObject* EnterBlendspace; // 0x0000 (0x0008)
    class UObject* ForwardEnter; // 0x0008 (0x0008)
    float EnterDistance; // 0x0010 (0x0004)
    float EntrySpeed; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BendCoverSequence
struct BendCoverSequence {
    class UObject* EnterSequence; // 0x0000 (0x0008)
    float EnterDistance; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendCoverAimSweepGroup
struct BendCoverAimSweepGroup {
    struct TArray<uint8_t> WeaponGroupTypes; // 0x0000 (0x0010)
    bool IsCrouched; // 0x0010 (0x0001)
    uint8_t CoverSide; // 0x0011 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0012 (0x0006)
    struct TArray<uint8_t> AimOffsets; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.BendAITeamRole
struct BendAITeamRole {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FName Role; // 0x0008 (0x0008)
    uint8_t BehaviorTreeAsset[0x20]; // 0x0010 (0x0020)
    class UObject* BehaviorTree; // 0x0030 (0x0008)
};

// ScriptStruct: BendGame.BendInfluenceCondition
struct BendInfluenceCondition {
    uint8_t Condition[0x20]; // 0x0000 (0x0020)
    int32_t Weight; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.UserInputAction
struct UserInputAction {
    uint8_t ActionType; // 0x0000 (0x0001)
    bool bConsumeInput; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct FName ActionName; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.SlatePopupDetails
struct SlatePopupDetails {
    uint8_t PopupStyle; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText TitleText; // 0x0008 (0x0018)
    struct FText BodyText; // 0x0020 (0x0018)
    bool bPauseGame; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    int32_t PopupUserData; // 0x003C (0x0004)
};

// ScriptStruct: BendGame.ArcadeSaveData
struct ArcadeSaveData {
    struct TArray<uint8_t> EquippedModifiers; // 0x0000 (0x0010)
    uint8_t OwnedItems[0x50]; // 0x0010 (0x0050)
    struct FName EquippedCharacter; // 0x0060 (0x0008)
    int32_t XP; // 0x0068 (0x0004)
};

// ScriptStruct: BendGame.DLCSaveData
struct DLCSaveData {
    struct FName EquippedCharacter; // 0x0000 (0x0008)
    struct FName EquippedBikeSkin; // 0x0008 (0x0008)
    struct FName EquippedRingA; // 0x0010 (0x0008)
    struct FName EquippedRingB; // 0x0018 (0x0008)
    uint8_t Scores[0x50]; // 0x0020 (0x0050)
    uint8_t OwnedItems[0x50]; // 0x0070 (0x0050)
    struct TArray<uint8_t> UnlockedChallenges; // 0x00C0 (0x0010)
};

// ScriptStruct: BendGame.ScoreModifierData
struct ScoreModifierData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    uint8_t Color[0x10]; // 0x0018 (0x0010)
    float ScoreMultiplier; // 0x0028 (0x0004)
    float ComboLifespanMultiplier; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.ScoreEventData
struct ScoreEventData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    int32_t Value; // 0x0018 (0x0004)
    float ComboLifespan; // 0x001C (0x0004)
};

// ScriptStruct: BendGame.DisplayData
struct DisplayData : public TableRowBase {
    struct TArray<uint8_t> Icon; // 0x0000 (0x0010)
    struct TArray<uint8_t> Image; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.RankData
struct RankData : public TableRowBase {
    int32_t ReputationMinimum; // 0x0000 (0x0004)
    int32_t ReputationMaximum; // 0x0004 (0x0004)
    struct FText Title; // 0x0008 (0x0018)
    struct TArray<uint8_t> AvailableItems; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.DLCUnlock
struct DLCUnlock {
    uint8_t Key[0x8]; // 0x0000 (0x0008)
    int32_t Level; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.PatchData
struct PatchData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Overview; // 0x0018 (0x0018)
    struct TArray<uint8_t> Description; // 0x0030 (0x0010)
    uint8_t ValueType; // 0x0040 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0041 (0x0007)
    struct TArray<uint8_t> Value; // 0x0048 (0x0010)
    float DefaultValue; // 0x0058 (0x0004)
    uint8_t Pad_1[0x4]; // 0x005C (0x0004)
    struct TArray<uint8_t> SecondaryValue; // 0x0060 (0x0010)
    float SecondaryDefaultValue; // 0x0070 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0074 (0x0004)
    uint8_t AssociatedChallenge[0x8]; // 0x0078 (0x0008)
    int32_t PatchAtlasID; // 0x0080 (0x0004)
};

// ScriptStruct: BendGame.PhaseRewardData
struct PhaseRewardData : public TableRowBase {
    bool IsEnabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText Title; // 0x0008 (0x0018)
    struct FText Overview; // 0x0020 (0x0018)
    int32_t PhaseRewardUnlock; // 0x0038 (0x0004)
};

// ScriptStruct: BendGame.ModifierData
struct ModifierData : public TableRowBase {
    bool IsEnabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText Title; // 0x0008 (0x0018)
    struct FText Overview; // 0x0020 (0x0018)
    struct TArray<uint8_t> Description; // 0x0038 (0x0010)
    bool IsNegative; // 0x0048 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0049 (0x0003)
    float ScoreMultiplier; // 0x004C (0x0004)
    class UClass* ModifierToApply; // 0x0050 (0x0008)
    uint8_t LocksModifier[0x8]; // 0x0058 (0x0008)
};

// ScriptStruct: BendGame.RingData
struct RingData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Overview; // 0x0018 (0x0018)
    struct TArray<uint8_t> Description; // 0x0030 (0x0010)
    uint8_t ValueType; // 0x0040 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0041 (0x0007)
    struct TArray<uint8_t> Mesh; // 0x0048 (0x0010)
    struct TArray<uint8_t> Value; // 0x0058 (0x0010)
    float DefaultValue; // 0x0068 (0x0004)
    uint8_t Pad_1[0x4]; // 0x006C (0x0004)
    struct TArray<uint8_t> SecondaryValue; // 0x0070 (0x0010)
    float SecondaryDefaultValue; // 0x0080 (0x0004)
};

// ScriptStruct: BendGame.BikeSkinData
struct BikeSkinData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Description; // 0x0018 (0x0018)
    uint8_t ValueType; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t PaintTag[0x8]; // 0x0038 (0x0008)
    uint8_t BodyTag[0x8]; // 0x0040 (0x0008)
    uint8_t TankTag[0x8]; // 0x0048 (0x0008)
    float Value; // 0x0050 (0x0004)
    float DefaultValue; // 0x0054 (0x0004)
};

// ScriptStruct: BendGame.CharacterData
struct CharacterData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Description; // 0x0018 (0x0018)
    uint8_t ValueType; // 0x0030 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0031 (0x0007)
    uint8_t Look[0x20]; // 0x0038 (0x0020)
    uint8_t LowChanceLook[0x20]; // 0x0058 (0x0020)
    float PercentChanceForLowChanceLook; // 0x0078 (0x0004)
    float LookScale; // 0x007C (0x0004)
    class UObject* CharSoundClass; // 0x0080 (0x0008)
    float Value; // 0x0088 (0x0004)
    float DefaultValue; // 0x008C (0x0004)
};

// ScriptStruct: BendGame.SubChallengeData
struct SubChallengeData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    struct TArray<uint8_t> Description; // 0x0018 (0x0010)
    struct FText Goal; // 0x0028 (0x0018)
    struct TArray<uint8_t> TargetScore; // 0x0040 (0x0010)
    struct TArray<uint8_t> PointBonus; // 0x0050 (0x0010)
    uint8_t ValueType; // 0x0060 (0x0001)
};

// ScriptStruct: BendGame.ChallengeData
struct ChallengeData : public TableRowBase {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Description; // 0x0018 (0x0018)
    struct FText DescriptionShort; // 0x0030 (0x0018)
    struct FText Objective; // 0x0048 (0x0018)
    struct FText ChallengeWeek; // 0x0060 (0x0018)
    struct FText LockedTitle; // 0x0078 (0x0018)
    struct FText LockedDescription; // 0x0090 (0x0018)
    uint8_t Type; // 0x00A8 (0x0001)
    uint8_t Pad_0[0x7]; // 0x00A9 (0x0007)
    struct TArray<uint8_t> TargetScore; // 0x00B0 (0x0010)
    class UObject* ComboMultiplierCurve; // 0x00C0 (0x0008)
    class UObject* ComboDecayCurve; // 0x00C8 (0x0008)
    uint8_t MissionID; // 0x00D0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00D1 (0x0007)
    struct TArray<uint8_t> SubChallengeKeys; // 0x00D8 (0x0010)
    uint8_t LeaderboardId; // 0x00E8 (0x0001)
};

// ScriptStruct: BendGame.ArcadeTimeTracker
struct ArcadeTimeTracker {
};

// ScriptStruct: BendGame.ArcadeKillsTracker
struct ArcadeKillsTracker {
};

// ScriptStruct: BendGame.ArcadeBadgeTimeRequirements
struct ArcadeBadgeTimeRequirements {
    struct TArray<uint8_t> TimePerRankInMinuites; // 0x0000 (0x0010)
    uint8_t ChallengeUnlockType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    struct FText Title; // 0x0018 (0x0018)
    struct FText SubTitle; // 0x0030 (0x0018)
    struct FString FormatName; // 0x0048 (0x0010)
};

// ScriptStruct: BendGame.ArcadeBadgeKillRequirements
struct ArcadeBadgeKillRequirements {
    struct TArray<uint8_t> KillRequirementPerRank; // 0x0000 (0x0010)
    struct TArray<uint8_t> EnemyTypesToKill; // 0x0010 (0x0010)
    uint8_t ChallengeUnlockType; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    struct FText Title; // 0x0028 (0x0018)
    struct FText SubTitle; // 0x0040 (0x0018)
    struct FString FormatName; // 0x0058 (0x0010)
};

// ScriptStruct: BendGame.BendCrowdLocationDistribution
struct BendCrowdLocationDistribution {
    uint8_t OccupiableAreaMap[0x80]; // 0x0000 (0x0080)
    uint8_t Pad_0[0x20]; // 0x0080 (0x0020)
    uint8_t Version; // 0x00A0 (0x0001)
};

// ScriptStruct: BendGame.BendCrowdOccupiableAreaMap
struct BendCrowdOccupiableAreaMap {
    uint8_t OwnerTransform_DuringGeneration[0x30]; // 0x0000 (0x0030)
    uint8_t Bounds[0x1C]; // 0x0030 (0x001C)
    uint8_t Pad_0[0x4]; // 0x004C (0x0004)
    struct TArray<uint8_t> OccupiableCells; // 0x0050 (0x0010)
    struct TArray<uint8_t> YawList; // 0x0060 (0x0010)
    float GridCellWidth; // 0x0070 (0x0004)
    int32_t NumLocationsPerDimensionPerCell; // 0x0074 (0x0004)
    bool bIsValid; // 0x0078 (0x0001)
};

// ScriptStruct: BendGame.BendCrowdOccupiableAreaMap_CompressedRotationDegrees
struct BendCrowdOccupiableAreaMap_CompressedRotationDegrees {
    uint8_t Val; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.BendCrowdOccupiableAreaMap_Coord
struct BendCrowdOccupiableAreaMap_Coord {
    uint8_t X[0x2]; // 0x0000 (0x0002)
    uint8_t Y[0x2]; // 0x0002 (0x0002)
};

// ScriptStruct: BendGame.BendCrowdDistribution
struct BendCrowdDistribution {
    uint8_t Locations[0xB0]; // 0x0000 (0x00B0)
};

// ScriptStruct: BendGame.BendWindParameters
struct BendWindParameters {
    float StrengthToIntensityScale; // 0x0000 (0x0004)
    float StrengthToIntensityOffset; // 0x0004 (0x0004)
    int32_t SizeXLog2; // 0x0008 (0x0004)
    int32_t SizeYLog2; // 0x000C (0x0004)
    int32_t SizeZLog2; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendRuntimeFloatCurve
struct BendRuntimeFloatCurve : public RuntimeFloatCurve {
};

// ScriptStruct: BendGame.BendRuntimeColorCurve
struct BendRuntimeColorCurve : public RuntimeCurveLinearColor {
};

// ScriptStruct: BendGame.WorldWeatherTransition
struct WorldWeatherTransition {
    uint8_t WeatherNext; // 0x0000 (0x0001)
    uint8_t TransitionRate; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    float TransitionTime; // 0x0004 (0x0004)
    float RelativeTime; // 0x0008 (0x0004)
    bool Pending; // 0x000C (0x0001)
};

// ScriptStruct: BendGame.UtilitiesWeight
struct UtilitiesWeight {
    float HealthWeight; // 0x0000 (0x0004)
    float AmmoWeight; // 0x0004 (0x0004)
    float TimeSinceLastEncounterWeight; // 0x0008 (0x0004)
    float ProximityToHordeWeight; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.CXArcadeSubobjectiveConfig
struct CXArcadeSubobjectiveConfig {
    uint8_t KillType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText ProgressionText; // 0x0008 (0x0018)
    struct FString SubobjectiveName; // 0x0020 (0x0010)
    class UClass* Subobjective; // 0x0030 (0x0008)
    float Weight; // 0x0038 (0x0004)
    bool bIsLocationless; // 0x003C (0x0001)
    bool bRequiresRandomisedObjective; // 0x003D (0x0001)
    bool bIsProgressive; // 0x003E (0x0001)
    bool bRequiresHorde; // 0x003F (0x0001)
    bool bRequiresSupplyBox; // 0x0040 (0x0001)
    bool bDisableEnemySpawnsWhenInObjectiveRange; // 0x0041 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0042 (0x0002)
    int32_t RequiredProgression; // 0x0044 (0x0004)
    float ObjectiveRadius; // 0x0048 (0x0004)
    bool bIgnoreObjectiveDistanceChecks; // 0x004C (0x0001)
    bool bFirstTimeArcadeModeOnly; // 0x004D (0x0001)
    bool bOverrideObjectiveCooldown; // 0x004E (0x0001)
    uint8_t Pad_2[0x1]; // 0x004F (0x0001)
    float OveriddenObjectiveCooldown; // 0x0050 (0x0004)
    bool bCanSpawnDuringBossWave; // 0x0054 (0x0001)
};

// ScriptStruct: BendGame.CXArcadeSubobjectiveReward
struct CXArcadeSubobjectiveReward {
    float AmmoPercentage; // 0x0000 (0x0004)
    float HealthPercentage; // 0x0004 (0x0004)
    int32_t FreakerEars; // 0x0008 (0x0004)
    int32_t ArcadeXP; // 0x000C (0x0004)
    struct TArray<uint8_t> InventoryItems; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.CXArcadeSubobjectiveRewardInventoryItem
struct CXArcadeSubobjectiveRewardInventoryItem {
    uint8_t ItemTag[0x8]; // 0x0000 (0x0008)
    int32_t Count; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.CXArcadeLocationlessSubobjKillEnemy
struct CXArcadeLocationlessSubobjKillEnemy {
    uint8_t EnemyType; // 0x0000 (0x0001)
    uint8_t KillType; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    int32_t RequiredKills; // 0x0004 (0x0004)
    bool bQueryEnemiesPresent; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    int32_t QueryEnemiesPresentLeeway; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.ArcadeScoreData
struct ArcadeScoreData : public TableRowBase {
    uint8_t EnemyType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t PointsValue; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.ActorInteractDetails
struct ActorInteractDetails {
    uint8_t ButtonType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString PreButtonText; // 0x0008 (0x0010)
    struct FString Text; // 0x0018 (0x0010)
    float HoldTime; // 0x0028 (0x0004)
    bool bSinglePressInput; // 0x002C (0x0001)
    bool bResetProgressOnAbort; // 0x002C (0x0001)
    bool bRequiresInputKeyReleased; // 0x002C (0x0001)
    uint8_t Pad_1[0x3]; // 0x002D (0x0003)
    uint8_t TransformToFollow[0x30]; // 0x0030 (0x0030)
    class UObject* InventoryPickup; // 0x0060 (0x0008)
    uint8_t AdvertiseIconType; // 0x0068 (0x0001)
};

// ScriptStruct: BendGame.TutorialTextImage
struct TutorialTextImage {
    struct FText Text; // 0x0000 (0x0018)
    uint8_t Image[0x20]; // 0x0018 (0x0020)
};

// ScriptStruct: BendGame.NotificationDetails
struct NotificationDetails {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString Title; // 0x0008 (0x0010)
    struct FString Body; // 0x0018 (0x0010)
    struct FString Body2; // 0x0028 (0x0010)
    struct FString Body3; // 0x0038 (0x0010)
    class UObject* Texture; // 0x0048 (0x0008)
    int32_t Level; // 0x0050 (0x0004)
    float DisplayTime; // 0x0054 (0x0004)
    bool bPauseGame; // 0x0058 (0x0001)
    bool bCanBeInterrupted; // 0x0058 (0x0001)
    bool bMarkCompleted; // 0x0058 (0x0001)
};

// ScriptStruct: BendGame.DisplayMetricsCapabilility
struct DisplayMetricsCapabilility {
    struct TArray<uint8_t> Resolutions; // 0x0000 (0x0010)
    uint8_t WindowModeRefreshRate[0x8]; // 0x0010 (0x0008)
    bool WindowModeRefreshRateIsApproximate; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.DisplayMetricsRefreshRate
struct DisplayMetricsRefreshRate {
    int32_t Fraction1; // 0x0000 (0x0004)
    int32_t Fraction2; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.DisplayMetricsResolution
struct DisplayMetricsResolution {
    uint8_t Resolution[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> RefreshRates; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.DisplayMetricsInfo
struct DisplayMetricsInfo {
    uint8_t Resolution[0x8]; // 0x0000 (0x0008)
    uint8_t RectMin[0x8]; // 0x0008 (0x0008)
    uint8_t RectMax[0x8]; // 0x0010 (0x0008)
    int32_t DeviceIndex; // 0x0018 (0x0004)
    bool SupportsHDR; // 0x001C (0x0001)
};

// ScriptStruct: BendGame.HudMissionTimerDetails
struct HudMissionTimerDetails {
    class UObject* Icon; // 0x0000 (0x0008)
    float Time; // 0x0008 (0x0004)
    uint8_t BarFillType; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    bool bInvertFillPercent; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.HudMiniMapStyle
struct HudMiniMapStyle {
    uint8_t MinimapIconSize[0x8]; // 0x0000 (0x0008)
    class UObject* MinimapWidget; // 0x0008 (0x0008)
    class UObject* MinimapCompass; // 0x0010 (0x0008)
    class UObject* MinimapRenderTarget2D; // 0x0018 (0x0008)
    class UObject* MinimapIconsRenderTarget2D; // 0x0020 (0x0008)
    class UObject* MinimapRegionsRenderTarget2D; // 0x0028 (0x0008)
};

// ScriptStruct: BendGame.HudWidgetBikeState
struct HudWidgetBikeState {
    float FuelPercent; // 0x0000 (0x0004)
    float BoostPercent; // 0x0004 (0x0004)
    float SkillPercent; // 0x0008 (0x0004)
    float DamagePercent; // 0x000C (0x0004)
    int32_t SkillLevel; // 0x0010 (0x0004)
    float Debug_FuelPercent; // 0x0014 (0x0004)
    bool Visible; // 0x0018 (0x0001)
    bool InteractVisible; // 0x0018 (0x0001)
    bool OnBike; // 0x0018 (0x0001)
    bool HighBeamsOn; // 0x0018 (0x0001)
    bool FuelLowSFXPlayed; // 0x0018 (0x0001)
    bool FuelZeroSFXPlayed; // 0x0018 (0x0001)
    bool FuelLightOn; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.HudWidgetPlayerState
struct HudWidgetPlayerState {
    int32_t AmmoCountClip; // 0x0000 (0x0004)
    int32_t AmmoCountSpare; // 0x0004 (0x0004)
    bool IsAiming; // 0x0008 (0x0001)
    bool IsScoping; // 0x0008 (0x0001)
    bool IsStealth; // 0x0008 (0x0001)
    bool IsNewStealth; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float PlayerVisibility; // 0x000C (0x0004)
    float PlayerAudibility; // 0x0010 (0x0004)
    float ExperiencePercent; // 0x0014 (0x0004)
    int32_t ExperienceLevel; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* EquippedWeapon; // 0x0020 (0x0008)
    struct TArray<uint8_t> WeaponStates; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.HudWeaponState
struct HudWeaponState {
    uint8_t SlotType; // 0x0000 (0x0001)
    uint8_t EquipState; // 0x0001 (0x0001)
};

// ScriptStruct: BendGame.WorldMapSectorTextureSetManager
struct WorldMapSectorTextureSetManager {
};

// ScriptStruct: BendGame.WorldMapSector
struct WorldMapSector {
    uint8_t Index[0x8]; // 0x0000 (0x0008)
    uint8_t Bounds[0x1C]; // 0x0008 (0x001C)
    uint8_t BoundsSize[0xC]; // 0x0024 (0x000C)
    uint8_t TextureAsset[0x20]; // 0x0030 (0x0020)
    class UObject* Texture; // 0x0050 (0x0008)
};

// ScriptStruct: BendGame.BendRegionType
struct BendRegionType {
    uint8_t SpawnType[0x420]; // 0x0000 (0x0420)
    struct TArray<uint8_t> VariationLists; // 0x0420 (0x0010)
};

// ScriptStruct: BendGame.BendPlayerAttribute
struct BendPlayerAttribute {
    struct FName Name; // 0x0000 (0x0008)
    struct FText DisplayName; // 0x0008 (0x0018)
    bool CanActivateWhileInRecover; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    uint8_t Attribute[0x8]; // 0x0028 (0x0008)
    uint8_t AttributeMax[0x8]; // 0x0030 (0x0008)
    struct TArray<uint8_t> UseEffects; // 0x0038 (0x0010)
    struct TArray<uint8_t> UseEffectLevels; // 0x0048 (0x0010)
    uint8_t ActivateRechargeOnTagRemoved[0x20]; // 0x0058 (0x0020)
};

// ScriptStruct: BendGame.AttributeUseEffect
struct AttributeUseEffect {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UClass* EffectClass; // 0x0008 (0x0008)
    uint8_t EffectTag[0x8]; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.ConfidenceSettingsData
struct ConfidenceSettingsData {
};

// ScriptStruct: BendGame.BendTrackingDataInfo
struct BendTrackingDataInfo {
    struct FName SectionID; // 0x0000 (0x0008)
    struct TArray<uint8_t> ClueItems; // 0x0008 (0x0010)
    struct TArray<uint8_t> PathUnlockedWhenCorrectlyExamined; // 0x0018 (0x0010)
    struct TArray<uint8_t> AfterImagesWhenCorrectlyExamined; // 0x0028 (0x0010)
    bool DoLookAtWhenSectionComplete; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    uint8_t OverrideLookAt_LocationProxy[0x10]; // 0x0040 (0x0010)
    struct TArray<uint8_t> GeneratedLocations; // 0x0050 (0x0010)
    class UObject* ControllingVolume; // 0x0060 (0x0008)
    class UObject* TrackingLocation; // 0x0068 (0x0008)
    float TrackingRegionRadius; // 0x0070 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0074 (0x0004)
    struct FName NextSectionID; // 0x0078 (0x0008)
};

// ScriptStruct: BendGame.BendAfterImageTrackingData
struct BendAfterImageTrackingData {
    class UObject* SkeletalMeshRef; // 0x0000 (0x0008)
    class UObject* AnimationToPlay; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendTrackingDataClue
struct BendTrackingDataClue {
    class UObject* ClueItem; // 0x0000 (0x0008)
    struct TArray<uint8_t> ClueActors; // 0x0008 (0x0010)
    struct FName OverrideVO; // 0x0018 (0x0008)
    class UObject* VOSoundClass; // 0x0020 (0x0008)
    uint8_t AnimationType; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    class UObject* AnimToPlay; // 0x0030 (0x0008)
    class UObject* OverrideAnimation; // 0x0038 (0x0008)
    bool IsCorrectItem; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    int32_t StoredIndex; // 0x0044 (0x0004)
};

// ScriptStruct: BendGame.AudioStateData
struct AudioStateData {
    uint8_t AudioStateType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t StatePriority; // 0x0004 (0x0004)
    bool bSkipPlayingAudioInThisState; // 0x0008 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0009 (0x0007)
    struct TArray<uint8_t> StateNames; // 0x0010 (0x0010)
    struct TArray<uint8_t> TransitionStateNames; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.TransitionalAudioStateNameData
struct TransitionalAudioStateNameData : public AudioStateNameData {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    bool bCanReplayTransition; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float TransitionReplayMinDelay; // 0x0034 (0x0004)
    float TransitionReplayMaxDelay; // 0x0038 (0x0004)
};

// ScriptStruct: BendGame.AudioStateNameData
struct AudioStateNameData {
    struct FName AudioName; // 0x0000 (0x0008)
    struct TArray<uint8_t> Conditions; // 0x0008 (0x0010)
    float SoundPriority; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> GlobalRegisterChanges; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.AudioStateGlobalRegisterChange
struct AudioStateGlobalRegisterChange {
    int32_t RegisterIndex; // 0x0000 (0x0004)
    uint8_t RegisterValue; // 0x0004 (0x0001)
};

// ScriptStruct: BendGame.ThreateningPawnData
struct ThreateningPawnData {
    uint64_t Pawn; // 0x0000 (0x0008)
    float Duration; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendCharacterLookAngleLimits
struct BendCharacterLookAngleLimits {
    uint8_t PartialSet; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t Limits[0xC]; // 0x0004 (0x000C)
    float YawSwitchSidesThresholdAngle; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendCharacterLookRequestId
struct BendCharacterLookRequestId {
};

// ScriptStruct: BendGame.BendHapticsSpawnConfiguration
struct BendHapticsSpawnConfiguration {
    class UObject* FeedbackSound; // 0x0000 (0x0008)
    bool bEnableForceFeedbackFallback; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    class UObject* ForceFeedbackEffect; // 0x0010 (0x0008)
    class UObject* AttachToComponent; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.BendInputFilter
struct BendInputFilter {
    float PowerExponent; // 0x0000 (0x0004)
    float CurveDeadZone; // 0x0004 (0x0004)
    float CurveMaxZone; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.sCamTransitionData
struct sCamTransitionData {
    float m_fTime; // 0x0000 (0x0004)
    float m_fTimeOut; // 0x0004 (0x0004)
    uint8_t m_eType; // 0x0008 (0x0001)
    bool m_bCollision; // 0x0009 (0x0001)
    bool m_bSetupNewCamWithOldCamView; // 0x000A (0x0001)
    bool m_bSetupNewCamWithOldCamPitch; // 0x000B (0x0001)
};

// ScriptStruct: BendGame.BendCharacterBreathingSoundHandler
struct BendCharacterBreathingSoundHandler {
    struct TArray<uint8_t> AudioComponents; // 0x0000 (0x0010)
    class UObject* StealthBreathingSound; // 0x0010 (0x0008)
    class UObject* RunBreathingSound; // 0x0018 (0x0008)
    class UObject* CombatBreathingSound; // 0x0020 (0x0008)
    class UObject* SprintBreathingSound; // 0x0028 (0x0008)
    class UObject* SprintRecoveryBreathingSound; // 0x0030 (0x0008)
    class UObject* HeartbeatSound; // 0x0038 (0x0008)
    float TimeInSprintRequiringRecoveryWhenStill; // 0x0040 (0x0004)
    float TimeInSprintRequiringRecoveryWhenMoving; // 0x0044 (0x0004)
    float EnemyNearDistForHeartbeat; // 0x0048 (0x0004)
    float EnemyFarDistForHeartbeat; // 0x004C (0x0004)
};

// ScriptStruct: BendGame.BendSkillTierData
struct BendSkillTierData {
    uint8_t SkillClass; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t SpentPointsToUnlockSecondTier; // 0x0004 (0x0004)
    int32_t SpentPointsToUnlockThirdTier; // 0x0008 (0x0004)
    int32_t SpentPointsToUnlockFourthTier; // 0x000C (0x0004)
    int32_t SpentPointsToUnlockFifthTier; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendSkill
struct BendSkill {
    uint8_t Status; // 0x0000 (0x0001)
    bool bUnlockedSkillBadgeDisplayed; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    class UObject* SkillItem; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendCrumbPathData
struct BendCrumbPathData {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Rotation[0xC]; // 0x000C (0x000C)
};

// ScriptStruct: BendGame.BoneOverlapData
struct BoneOverlapData {
    struct FName BoneName; // 0x0000 (0x0008)
    float Radius; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.InputCurveData
struct InputCurveData {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    bool bUseCurve; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    uint8_t InputMappingCurve[0x80]; // 0x0020 (0x0080)
    uint8_t InputMappingCurveLessDZ[0x80]; // 0x00A0 (0x0080)
    uint8_t InputMappingCurveMedDZ[0x80]; // 0x0120 (0x0080)
    uint8_t InputMappingCurveMoreDZ[0x80]; // 0x01A0 (0x0080)
    uint8_t InputMappingCurveLinear[0x80]; // 0x0220 (0x0080)
    uint8_t InputMappingCurveIndex; // 0x02A0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x02A1 (0x0003)
    float PowerExponent; // 0x02A4 (0x0004)
    float CurveDeadZone; // 0x02A8 (0x0004)
    float CurveMaxZone; // 0x02AC (0x0004)
    float Acceleration; // 0x02B0 (0x0004)
    float InitialVelPct; // 0x02B4 (0x0004)
    float maxVelocity; // 0x02B8 (0x0004)
    float YawDeadZone; // 0x02BC (0x0004)
    float YawScale; // 0x02C0 (0x0004)
    float PitchDeadZone; // 0x02C4 (0x0004)
    float PitchScale; // 0x02C8 (0x0004)
};

// ScriptStruct: BendGame.QueuedDeactivate
struct QueuedDeactivate {
    class UObject* m_pCam; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.CamInstanceEntry
struct CamInstanceEntry {
    class UClass* CameraClass; // 0x0000 (0x0008)
    class UObject* Camera; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.PlayerAINavRequestInfo
struct PlayerAINavRequestInfo {
    uint8_t TargetType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t TargetLocation[0xC]; // 0x0004 (0x000C)
    uint8_t TargetRotation[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* TargetActor; // 0x0020 (0x0008)
    float AcceptanceRadius; // 0x0028 (0x0004)
    float AcceptanceAngle; // 0x002C (0x0004)
    float StrafeRadius; // 0x0030 (0x0004)
    float SlowWalkRadius; // 0x0034 (0x0004)
    float FastWalkRadius; // 0x0038 (0x0004)
    float RadiusAtWhichWeStartRotatingTowardTargetRotation; // 0x003C (0x0004)
    uint8_t AllowInterrupt; // 0x0040 (0x0001)
    uint8_t StrafingType; // 0x0041 (0x0001)
    bool bUseNewNavToPoint; // 0x0042 (0x0001)
    uint8_t Pad_2[0xD]; // 0x0043 (0x000D)
    uint8_t UpdateNavPoint[0x30]; // 0x0050 (0x0030)
    bool bStopOnOverlap; // 0x0080 (0x0001)
    bool bUsePathfinding; // 0x0081 (0x0001)
    bool bAllowPartialPath; // 0x0082 (0x0001)
    bool bSuspendCrowdSteering; // 0x0083 (0x0001)
    bool WasNavSuccessful; // 0x0084 (0x0001)
};

// ScriptStruct: BendGame.InventoryStorageConsumableItemDetails
struct InventoryStorageConsumableItemDetails {
    class UObject* Consumable; // 0x0000 (0x0008)
    float Duration; // 0x0008 (0x0004)
    int32_t Count; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.BendWeaponAimBlockedCheck
struct BendWeaponAimBlockedCheck {
    uint8_t Pad_0[0x3E0]; // 0x0000 (0x03E0)
    float TempPistolTraceDistAdjustment; // 0x03E0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x03E4 (0x0004)
    struct FName AimFromBoneName; // 0x03E8 (0x0008)
    struct FName AimFromBoneName_Mirrored; // 0x03F0 (0x0008)
    uint8_t TraceRotationOffset[0xC]; // 0x03F8 (0x000C)
    uint8_t Pad_2[0x2C]; // 0x0404 (0x002C)
    uint8_t WeaponAimBlockedDefaultData[0x2C]; // 0x0430 (0x002C)
};

// ScriptStruct: BendGame.WeaponAimBlockedCheckData
struct WeaponAimBlockedCheckData {
    uint8_t TraceLocationOffset[0xC]; // 0x0000 (0x000C)
    uint8_t TraceLocationOffset_Mirrored[0xC]; // 0x000C (0x000C)
    float TraceOuterDist; // 0x0018 (0x0004)
    float TraceInnerDist; // 0x001C (0x0004)
    float TraceOuterRadius; // 0x0020 (0x0004)
    float TraceInnerRadius; // 0x0024 (0x0004)
    bool WeaponDataSet; // 0x0028 (0x0001)
};

// ScriptStruct: BendGame.CLMXAdaptiveTriggerWeaponData
struct CLMXAdaptiveTriggerWeaponData {
    bool bEnabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t StartPosition; // 0x0004 (0x0004)
    int32_t EndPosition; // 0x0008 (0x0004)
    int32_t Strength; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.CLMXAdaptiveTriggerFeedbackData
struct CLMXAdaptiveTriggerFeedbackData {
    bool bEnabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t StartPosition; // 0x0004 (0x0004)
    int32_t StartStrength; // 0x0008 (0x0004)
    bool bRampingResistance; // 0x000C (0x0001)
    uint8_t Pad_1[0x3]; // 0x000D (0x0003)
    int32_t EndPosition; // 0x0010 (0x0004)
    int32_t EndStrength; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.HolsterLocationFlag
struct HolsterLocationFlag {
    bool bCanHolsterInLocation; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.MeleeDamagedData
struct MeleeDamagedData {
};

// ScriptStruct: BendGame.MeleeStatusEffectApplication
struct MeleeStatusEffectApplication {
    float ChanceToApply; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> ChanceModifiers; // 0x0008 (0x0010)
    bool OnlyApplyToPlayer; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    class UClass* StatusEffect; // 0x0020 (0x0008)
};

// ScriptStruct: BendGame.MeleeStatusEffectChanceModifier
struct MeleeStatusEffectChanceModifier {
    uint8_t SkillTag[0x8]; // 0x0000 (0x0008)
    float Modifier; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.MotoCombatInfo
struct MotoCombatInfo {
    float AttackRadiusInner; // 0x0000 (0x0004)
    float AttackRadiusOuter; // 0x0004 (0x0004)
    float MinAimTime; // 0x0008 (0x0004)
    float MaxAimTime; // 0x000C (0x0004)
    float AimTimeLockout; // 0x0010 (0x0004)
    float MinShootTimer; // 0x0014 (0x0004)
    float MaxShootTimer; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.VehicleRamInfo
struct VehicleRamInfo {
    float TimeToApplyRamModifications; // 0x0000 (0x0004)
    float TimeToApplyRamAutoBalanceMods; // 0x0004 (0x0004)
    float TimeToApplySteeringJuke; // 0x0008 (0x0004)
    float AuotoBalanceLowModifier; // 0x000C (0x0004)
    float AutoBalanceHighModifier; // 0x0010 (0x0004)
    float MinSteeringJukeValue; // 0x0014 (0x0004)
    float MaxSteeringJukeValue; // 0x0018 (0x0004)
    float MinHitVelocityAtLocationThreshold; // 0x001C (0x0004)
    float MaxHitVelocityAtLocationThreshold; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.MotoRamFalloffInfo
struct MotoRamFalloffInfo {
    bool bCanBeRammed; // 0x0000 (0x0001)
    bool bCanFallFromBike; // 0x0001 (0x0001)
    bool bCanFallFromBikeAsPassenger; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    float FallOffImpulseThreshold; // 0x0004 (0x0004)
    float FallOffAngleThreshold; // 0x0008 (0x0004)
    bool bKillRiderAtZeroVehicleHealth; // 0x000C (0x0001)
    bool bFallOffAtZeroVehicleHealth; // 0x000D (0x0001)
    bool bFallOffAtZeroVehicleHealthDontGetUp; // 0x000E (0x0001)
    bool bAutoKillWhenFallsOff; // 0x000F (0x0001)
};

// ScriptStruct: BendGame.ArchetypeFiringOverrides
struct ArchetypeFiringOverrides {
    class UObject* GroundFiringSettings; // 0x0000 (0x0008)
    class UObject* LastKnownPositionFiringSettings; // 0x0008 (0x0008)
    class UObject* ChargedFiringSettings; // 0x0010 (0x0008)
    class UObject* BikeFiringSettings; // 0x0018 (0x0008)
    class UObject* OpenCombatSettings; // 0x0020 (0x0008)
    uint8_t FiringModifiers[0x10]; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.ArchetypeFiringModifierSettings
struct ArchetypeFiringModifierSettings {
    float LastKnownLocationTimer; // 0x0000 (0x0004)
    float CloseCombatModifer; // 0x0004 (0x0004)
    float CloseCombatDistance; // 0x0008 (0x0004)
    float BerzerkModifier; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.ArchetypeAimingOverrides
struct ArchetypeAimingOverrides {
    uint8_t HitChanceByLosTime[0x80]; // 0x0000 (0x0080)
    float HitChanceCooldownTime; // 0x0080 (0x0004)
    float HitChanceLossTime; // 0x0084 (0x0004)
};

// ScriptStruct: BendGame.BendHumanMeleeSettings
struct BendHumanMeleeSettings {
    float RangeToEngageInMelee; // 0x0000 (0x0004)
    float CoverSearchRadius; // 0x0004 (0x0004)
    float CoverSearchHalfHeight; // 0x0008 (0x0004)
    uint8_t MeleeCoverMoveSpeed; // 0x000C (0x0001)
    uint8_t MeleeRushMoveSpeed; // 0x000D (0x0001)
    bool ShouldAdvanceInMelee; // 0x000E (0x0001)
    uint8_t Pad_0[0x1]; // 0x000F (0x0001)
    float MinTimeInCover; // 0x0010 (0x0004)
    float MaxTimeInCover; // 0x0014 (0x0004)
    float MinAdvanceDistance; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.BendAnimSequenceDistanceGroup
struct BendAnimSequenceDistanceGroup {
    struct FName AnimSequenceGroupName; // 0x0000 (0x0008)
    struct TArray<uint8_t> DistanceEntries; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendAnimSequenceDistanceEntry
struct BendAnimSequenceDistanceEntry {
    uint8_t Entry[0x10]; // 0x0000 (0x0010)
    float Distance; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendSemiAwareTuningValues
struct BendSemiAwareTuningValues {
    float SearchRadius; // 0x0000 (0x0004)
    float SearchMoveSpeed; // 0x0004 (0x0004)
    float SearchMinTime; // 0x0008 (0x0004)
    float SearchMaxTime; // 0x000C (0x0004)
    float SearchNearDist; // 0x0010 (0x0004)
    float SearchFarDist; // 0x0014 (0x0004)
    uint8_t SearchNearSpeed; // 0x0018 (0x0001)
    uint8_t SearchMidSpeed; // 0x0019 (0x0001)
    uint8_t SearchFarSpeed; // 0x001A (0x0001)
};

// ScriptStruct: BendGame.RubberbandParams
struct RubberbandParams {
    float DistanceThreshold; // 0x0000 (0x0004)
    float SpeedMultiplier; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.PaceParams
struct PaceParams {
    uint8_t paceTargetOffset[0x8]; // 0x0000 (0x0008)
    float paceDistanceInner; // 0x0008 (0x0004)
    float minAllowedSpeed; // 0x000C (0x0004)
    float maxAllowedSpeed; // 0x0010 (0x0004)
    float paceStrengthTweak; // 0x0014 (0x0004)
    float SecondaryPaceDistance; // 0x0018 (0x0004)
    float SecondaryMinAllowedSpeed; // 0x001C (0x0004)
};

// ScriptStruct: BendGame.MotoCombatVOInfo
struct MotoCombatVOInfo {
    struct TArray<uint8_t> MotoCombatVOEventNames; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.MotoCombatVOEvent
struct MotoCombatVOEvent {
    uint8_t eventType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName EventName; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BuddyVOEvent
struct BuddyVOEvent {
    uint8_t eventType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName EventName; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendVehicleAutoShifter
struct BendVehicleAutoShifter {
    bool bEnabled; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.BendFloatCurve
struct BendFloatCurve {
    struct TArray<uint8_t> CurvePoints; // 0x0000 (0x0010)
    uint8_t Curve[0x78]; // 0x0010 (0x0078)
};

// ScriptStruct: BendGame.FloatPair
struct FloatPair {
    float InVal; // 0x0000 (0x0004)
    float OutVal; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleSoundRpmEvaluator
struct BendVehicleSoundRpmEvaluator {
    float SlopeAngleInfluenceScale; // 0x0000 (0x0004)
    float SlopeAngleInfluenceCurvePower; // 0x0004 (0x0004)
    float TireLoadInfluenceScale; // 0x0008 (0x0004)
    float TireLoadInfluenceCurvePower; // 0x000C (0x0004)
    float TireSlipInfluenceScale; // 0x0010 (0x0004)
    float TireSlipInfluenceCurvePower; // 0x0014 (0x0004)
    float TireSlipNormalizingScale; // 0x0018 (0x0004)
    float BoostInfluenceScale; // 0x001C (0x0004)
    float MinimumRpmWhenThrottling; // 0x0020 (0x0004)
    float InterpRateWheelSlip; // 0x0024 (0x0004)
    float InterpRateInAir; // 0x0028 (0x0004)
    float MaxPossibleRpms; // 0x002C (0x0004)
    float MinDecelRpm0To1; // 0x0030 (0x0004)
    float MaxDecelRpm0To1; // 0x0034 (0x0004)
    struct TArray<uint8_t> Modulations; // 0x0038 (0x0010)
    struct TArray<uint8_t> MinAccelRpm0To1PerTargetSpeed; // 0x0048 (0x0010)
    struct TArray<uint8_t> MaxAccelRpm0To1PerTargetSpeed; // 0x0058 (0x0010)
    uint8_t ThrottleCurveLowEnd[0x88]; // 0x0068 (0x0088)
    uint8_t ThrottleCurveHighEnd[0x88]; // 0x00F0 (0x0088)
    uint8_t NoThrottleCurveLowEnd[0x88]; // 0x0178 (0x0088)
    uint8_t NoThrottleCurveHighEnd[0x88]; // 0x0200 (0x0088)
    uint8_t RevLimiter[0x34]; // 0x0288 (0x0034)
    uint8_t Pad_0[0x14]; // 0x02BC (0x0014)
    bool bConvertedToNewCurveVersion; // 0x02D0 (0x0001)
};

// ScriptStruct: BendGame.BendVehicleSoundRpmEvaluator_RevLimiter
struct BendVehicleSoundRpmEvaluator_RevLimiter {
    uint8_t Ceiling0To1[0x8]; // 0x0000 (0x0008)
    uint8_t Floor0To1[0x8]; // 0x0008 (0x0008)
    uint8_t FallRate[0x8]; // 0x0010 (0x0008)
    uint8_t RiseRate[0x8]; // 0x0018 (0x0008)
    float CeilingLingerTime; // 0x0020 (0x0004)
    float FloorLingerTime; // 0x0024 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleSoundRpmEvaluator_Modulation
struct BendVehicleSoundRpmEvaluator_Modulation {
    float PeakToPeakAmplitude0To1; // 0x0000 (0x0004)
    float Frequency; // 0x0004 (0x0004)
    float TimeOffset; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleDriftInfo
struct BendVehicleDriftInfo {
    uint8_t DriftOversteerControlCurve[0x8]; // 0x0000 (0x0008)
    float DriftBrakeTimeOutTime; // 0x0008 (0x0004)
    float DriftBrakeCoolDownTime; // 0x000C (0x0004)
    float ManualDriftThrottleEffectFadeInTime; // 0x0010 (0x0004)
    float ManaulDriftThrottleEffectFadeOutTime; // 0x0014 (0x0004)
    float ReferenceDriftFrictionScale; // 0x0018 (0x0004)
    float DriftApproxAngularDrag_AtReferenceDriftFrictionScale; // 0x001C (0x0004)
    float DriftSteerApproxInducedAngularAccel_AtFullSteering_AtReferenceDriftFrictionScale; // 0x0020 (0x0004)
    float DriftSteerDeltaAngularVelocityInterpTime; // 0x0024 (0x0004)
    float ManualDriftYawVelocityLimitDrag; // 0x0028 (0x0004)
    float ManualDriftRearWheelLongitudinalGripAlpha0To1; // 0x002C (0x0004)
    float DonutSpeedEnterThreshold; // 0x0030 (0x0004)
    float DonutSpeedExitThreshold; // 0x0034 (0x0004)
    float DonutFrictionScale; // 0x0038 (0x0004)
    bool bSwitchingSidesCancelsDrift; // 0x003C (0x0001)
    bool bBackwardVelocityCancelsDrift; // 0x003C (0x0001)
    bool bBackwardVelocityRegainsGrip; // 0x003C (0x0001)
    bool bManualDriftLosesGripOnlyOnRearWheel; // 0x003C (0x0001)
    bool bManualDriftLosesGripOnlyOnRearWheelInLateralDirection; // 0x003C (0x0001)
    bool bApplyAngVelLimiterTorque_DuringRegularDriving; // 0x003C (0x0001)
};

// ScriptStruct: BendGame.BendVehicleDriftOversteerControlCurve
struct BendVehicleDriftOversteerControlCurve {
    float Start; // 0x0000 (0x0004)
    float End; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleMovementComponent_PostPhysicsTickFunction
struct BendVehicleMovementComponent_PostPhysicsTickFunction : public TickFunction {
};

// ScriptStruct: BendGame.BendVehicleMovementComponentSkillInfo
struct BendVehicleMovementComponentSkillInfo {
    uint8_t RoadSurfaceType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* SkillInfo; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendReplicatedVehicleState
struct BendReplicatedVehicleState {
    bool bIsTryingToSlipRearWheels; // 0x0000 (0x0001)
    bool bIsBoostEngaged; // 0x0001 (0x0001)
};

// ScriptStruct: BendGame.BendVehicleWheelIndex
struct BendVehicleWheelIndex {
};

// ScriptStruct: BendGame.GearSetup
struct GearSetup {
    int32_t Gear; // 0x0000 (0x0004)
    float UpShiftRpm; // 0x0004 (0x0004)
    float DownShiftRpm; // 0x0008 (0x0004)
    float UpShiftRpmBoosted; // 0x000C (0x0004)
    float DownShiftRpmBoosted; // 0x0010 (0x0004)
    float MinAbsSpeed; // 0x0014 (0x0004)
    float MaxAbsSpeed; // 0x0018 (0x0004)
    float MinAbsSpeed0To1; // 0x001C (0x0004)
    float MaxAbsSpeed0To1; // 0x0020 (0x0004)
    float TimeBeforeUpShift; // 0x0024 (0x0004)
    float SoundRpmLowEnd0to1; // 0x0028 (0x0004)
    float SoundRpmHighEnd0to1; // 0x002C (0x0004)
    float CurvePower; // 0x0030 (0x0004)
    float TimeBeforeDownShift; // 0x0034 (0x0004)
    float SoundRpmLowEnd0to1_NoThrottle; // 0x0038 (0x0004)
    float SoundRpmHighEnd0to1_NoThrottle; // 0x003C (0x0004)
    float CurvePower_NoThrottle; // 0x0040 (0x0004)
    bool bConvertedToVersion2; // 0x0044 (0x0001)
};

// ScriptStruct: BendGame.ThrottleCurve
struct ThrottleCurve {
    int32_t Gear; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t Curve[0x78]; // 0x0008 (0x0078)
};

// ScriptStruct: BendGame.ThrottleCurvePairs
struct ThrottleCurvePairs {
    int32_t Gear; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> CurvePairs; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.AIPhysicsTestResult
struct AIPhysicsTestResult {
    float timeItTook; // 0x0000 (0x0004)
    float distanceItTook; // 0x0004 (0x0004)
    float accel_decelValue; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.AIPhysicsTest
struct AIPhysicsTest {
    float InitialSpeed; // 0x0000 (0x0004)
    float desiredSpeed; // 0x0004 (0x0004)
    float brakeAmount; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendAITargetEvaluatorDefaultWeights
struct BendAITargetEvaluatorDefaultWeights {
    float IsCurrentTarget; // 0x0000 (0x0004)
    float HasLOS; // 0x0004 (0x0004)
    float HasEverHadLOS; // 0x0008 (0x0004)
    float AttackedBy; // 0x000C (0x0004)
    float TargetedBy; // 0x0010 (0x0004)
    float LastDamager; // 0x0014 (0x0004)
    float BeingAttacked; // 0x0018 (0x0004)
    float Proximity; // 0x001C (0x0004)
    float ImmediateProximity; // 0x0020 (0x0004)
    float ProximityToBuddy; // 0x0024 (0x0004)
    float WasPreviouslyAware; // 0x0028 (0x0004)
    float AwarenessLevel; // 0x002C (0x0004)
    float IsPlayer; // 0x0030 (0x0004)
    float PreferPlayer; // 0x0034 (0x0004)
    float PreferBuddy; // 0x0038 (0x0004)
    float Dogpile; // 0x003C (0x0004)
    float MaxDogpile; // 0x0040 (0x0004)
    float NotEngaged; // 0x0044 (0x0004)
    float FactionValue; // 0x0048 (0x0004)
    float MissingHealth; // 0x004C (0x0004)
    float FriendlyFireMultiplier; // 0x0050 (0x0004)
    float SumOfAllWeights; // 0x0054 (0x0004)
    bool HeedFriendlyFire; // 0x0058 (0x0001)
};

// ScriptStruct: BendGame.AimAssistDifficultySettings
struct AimAssistDifficultySettings {
    class UObject* AimAssistData_Easy; // 0x0000 (0x0008)
    class UObject* AimAssistData_Normal; // 0x0008 (0x0008)
    class UObject* AimAssistData_Hard; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.AimAssistManualAimSettings
struct AimAssistManualAimSettings {
    bool m_bAimAssist; // 0x0000 (0x0001)
    bool m_bAimSnapTo; // 0x0000 (0x0001)
    bool m_bAimLockOn; // 0x0000 (0x0001)
    bool m_bAimFrictionOn; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float m_fAimSnapDurationScalar; // 0x0004 (0x0004)
    float m_fSlowYawLerp; // 0x0008 (0x0004)
    float m_fFastYawLerp; // 0x000C (0x0004)
    float m_fSlowYawInputSpeed; // 0x0010 (0x0004)
    float m_fFastYawInputSpeed; // 0x0014 (0x0004)
    float m_fSlowPitchLerp; // 0x0018 (0x0004)
    float m_fFastPitchLerp; // 0x001C (0x0004)
    float m_fSlowPitchInputSpeed; // 0x0020 (0x0004)
    float m_fFastPitchInputSpeed; // 0x0024 (0x0004)
    float m_fClosestDistForSlowInput; // 0x0028 (0x0004)
    uint8_t Pad_1[0x4]; // 0x002C (0x0004)
    uint8_t m_AimLockYawCurve[0x80]; // 0x0030 (0x0080)
    uint8_t m_AimLockPitchCurve[0x80]; // 0x00B0 (0x0080)
    struct TArray<uint8_t> m_AimLockCurves; // 0x0130 (0x0010)
    struct TArray<uint8_t> m_AimFrictionSettings; // 0x0140 (0x0010)
};

// ScriptStruct: BendGame.AimFrictionSettings
struct AimFrictionSettings {
    float m_SlowYawInputSpeed; // 0x0000 (0x0004)
    float m_FastYawInputSpeed; // 0x0004 (0x0004)
    float m_SlowPitchInputSpeed; // 0x0008 (0x0004)
    float m_FastPitchInputSpeed; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.AimLockSettings
struct AimLockSettings {
    uint8_t m_AimLockYawCurve[0x80]; // 0x0000 (0x0080)
    uint8_t m_AimLockPitchCurve[0x80]; // 0x0080 (0x0080)
};

// ScriptStruct: BendGame.BendAITeamResourceDescriptor
struct BendAITeamResourceDescriptor {
    struct FName Name; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.BendAITeamConditionDescriptor
struct BendAITeamConditionDescriptor {
};

// ScriptStruct: BendGame.BendAITeamNewtDistractionSettings
struct BendAITeamNewtDistractionSettings {
    uint8_t DistractRole[0x38]; // 0x0000 (0x0038)
    float DistractionTimeOutTime; // 0x0038 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanTargetCloseToMember
struct BendAITeamHumanTargetCloseToMember {
};

// ScriptStruct: BendGame.BendAITeamHumanSquadSettings
struct BendAITeamHumanSquadSettings {
    float MaxAttachHorizontalDistance; // 0x0000 (0x0004)
    float MaxAttachVerticalDistance; // 0x0004 (0x0004)
    float MinSepparationRange; // 0x0008 (0x0004)
    float PlayerIncreasingMovementSlidingWindowSize; // 0x000C (0x0004)
    float PlayerDecreasingMovementSlidingWindowSize; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanGrenadeSettings
struct BendAITeamHumanGrenadeSettings {
    float MinTimeBetweenGrenadesSquad; // 0x0000 (0x0004)
    float MinTimeBetweenGrenadesTeam; // 0x0004 (0x0004)
    float MinRange; // 0x0008 (0x0004)
    float MinRangeThroughPortal; // 0x000C (0x0004)
    float MaxRange; // 0x0010 (0x0004)
    float MinRangeRetreat; // 0x0014 (0x0004)
    float MinRangeRetreatThroughPortal; // 0x0018 (0x0004)
    float MaxRangeRetreat; // 0x001C (0x0004)
    uint8_t GrenadeBehaviorTreeAsset[0x20]; // 0x0020 (0x0020)
    class UObject* GrenadeBehaviorTree; // 0x0040 (0x0008)
};

// ScriptStruct: BendGame.BendAITeamHumanSearchSettings
struct BendAITeamHumanSearchSettings {
    float AlreadyBeingSearchedRadius; // 0x0000 (0x0004)
    float AlreadyBeingSearchedHalfHeight; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanShootFromCoverSettings
struct BendAITeamHumanShootFromCoverSettings {
    int32_t MaxSimultaneous; // 0x0000 (0x0004)
    float MinLockoutTime; // 0x0004 (0x0004)
    float MaxLockoutTime; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanNoMansLandSettings
struct BendAITeamHumanNoMansLandSettings {
    float Depth; // 0x0000 (0x0004)
    float DepthDeadZone; // 0x0004 (0x0004)
    float WidthDeadZone; // 0x0008 (0x0004)
    float MinEnemyTeamDepth; // 0x000C (0x0004)
    float EnemyPositionFullRelevanceTime; // 0x0010 (0x0004)
    float EnemyPositionRelevanceExpirationTime; // 0x0014 (0x0004)
    float MinUnitSeparationDistance; // 0x0018 (0x0004)
    float TimeUntilRespondToFlanker; // 0x001C (0x0004)
    float NoFlankingTime; // 0x0020 (0x0004)
    float MinFlankingMoveDistance; // 0x0024 (0x0004)
    float MinGroupSeparationDistance; // 0x0028 (0x0004)
    float BaseMergeTime; // 0x002C (0x0004)
    float MinMergeTime; // 0x0030 (0x0004)
    float MergeDistanceMin; // 0x0034 (0x0004)
    float MergeDistanceLarge; // 0x0038 (0x0004)
    float MergeDistanceLargeMax; // 0x003C (0x0004)
    float MergeCosAngleMin; // 0x0040 (0x0004)
    float MergeCosAngleLarge; // 0x0044 (0x0004)
    float MergeCosAngleLargeMax; // 0x0048 (0x0004)
    float HomePointFullMergeDistance; // 0x004C (0x0004)
    float HomePointMinimumMergeDistance; // 0x0050 (0x0004)
    float HomePointMinimumMergeFactor; // 0x0054 (0x0004)
    float HomePointDZFullMergeDistance; // 0x0058 (0x0004)
    float HomePointDZMinimumMergeDistance; // 0x005C (0x0004)
    float HomePointDZMinimumMergeFactor; // 0x0060 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanDisentangleFrontLineSettings
struct BendAITeamHumanDisentangleFrontLineSettings {
    uint8_t ExtractToCoverRole[0x38]; // 0x0000 (0x0038)
    uint8_t ExtractToOpenRole[0x38]; // 0x0038 (0x0038)
    uint8_t HoldCoverPositionRole[0x38]; // 0x0070 (0x0038)
    uint8_t HoldOpenPositionRole[0x38]; // 0x00A8 (0x0038)
    float DisentanglePointSearchRadius; // 0x00E0 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanRole
struct BendAITeamHumanRole : public BendAITeamRole {
};

// ScriptStruct: BendGame.BendAITeamHumanAreaSearchSettings
struct BendAITeamHumanAreaSearchSettings {
    bool IsAllowedToSearch; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t PrepareSearchRole[0x38]; // 0x0008 (0x0038)
    uint8_t SearchCoverRole[0x38]; // 0x0040 (0x0038)
    uint8_t SearchTreeRole[0x38]; // 0x0078 (0x0038)
    uint8_t SearchPortalCoverInsideOutRole[0x38]; // 0x00B0 (0x0038)
    uint8_t SearchPortalCoverOutsideInRole[0x38]; // 0x00E8 (0x0038)
    uint8_t SearchPortalCoverRoomToRoomRole[0x38]; // 0x0120 (0x0038)
    uint8_t SearchVegitationRole[0x38]; // 0x0158 (0x0038)
    uint8_t SearchPOIRole[0x38]; // 0x0190 (0x0038)
    uint8_t SearchPerimeterPointRole[0x38]; // 0x01C8 (0x0038)
    uint8_t WaitingRole[0x38]; // 0x0200 (0x0038)
    uint8_t SearchWrappUpRole[0x38]; // 0x0238 (0x0038)
    float MinSearchRangeRadius; // 0x0270 (0x0004)
    float MaxSearchRangeRadius; // 0x0274 (0x0004)
    float SearchRangeHalfHeight; // 0x0278 (0x0004)
    float MinDistanceBetweenSearchPoints; // 0x027C (0x0004)
    int32_t MinimumSearchPoints; // 0x0280 (0x0004)
    int32_t MaximumSearchPoints; // 0x0284 (0x0004)
    float SearchTime; // 0x0288 (0x0004)
    float ExtendedSearchTime; // 0x028C (0x0004)
    float MaxFinishDistance; // 0x0290 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanHoldSettings
struct BendAITeamHumanHoldSettings {
    float MinHoldingTime; // 0x0000 (0x0004)
    float MaxHoldingTime; // 0x0004 (0x0004)
    float MaxHoldingOpenPositionTime; // 0x0008 (0x0004)
    float RepositioningRadius; // 0x000C (0x0004)
    float RepositioningEmergencyRadius; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanCoveringSettings
struct BendAITeamHumanCoveringSettings {
    bool IsAllowedToTakeCoverWhileCovering; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float CoverRadius; // 0x0004 (0x0004)
    float CoverForCoveringRadius; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanGrenadeAttackSettings
struct BendAITeamHumanGrenadeAttackSettings {
    bool IsAllowedToGrenadeAttack; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t HoldCoverPositionRole[0x38]; // 0x0008 (0x0038)
    uint8_t HoldOpenPositionRole[0x38]; // 0x0040 (0x0038)
    uint8_t GrenadierRole[0x38]; // 0x0078 (0x0038)
};

// ScriptStruct: BendGame.BendAITeamHumanPressAttackSettings
struct BendAITeamHumanPressAttackSettings {
    bool IsAllowedToPressAttack; // 0x0000 (0x0001)
    bool IsAllowedToUseGrenades; // 0x0000 (0x0001)
    bool IsAllowedToFlank; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float MinAdvanceDistance; // 0x0004 (0x0004)
    float MaxAdvanceDistance; // 0x0008 (0x0004)
    float MinAdvanceDistanceHardDZ; // 0x000C (0x0004)
    float MinDistanceToAdvance; // 0x0010 (0x0004)
    float MinDistanceToAdvanceOpen; // 0x0014 (0x0004)
    float MaxCoveringTime; // 0x0018 (0x0004)
    float MaxFlankingTime; // 0x001C (0x0004)
    float MinHoldingTime; // 0x0020 (0x0004)
    float MaxHoldingTime; // 0x0024 (0x0004)
    float MaxHoldingOpenPositionTime; // 0x0028 (0x0004)
    float MaxFlankDistance; // 0x002C (0x0004)
    float MinTimeAfterFlankUntilAbort; // 0x0030 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0034 (0x0004)
    uint8_t AdvanceCoverRole[0x38]; // 0x0038 (0x0038)
    uint8_t AdvanceOpenPositionRole[0x38]; // 0x0070 (0x0038)
    uint8_t CoveringRole[0x38]; // 0x00A8 (0x0038)
    uint8_t SeekCoverForCoveringRole[0x38]; // 0x00E0 (0x0038)
    uint8_t HoldCoverPositionRole[0x38]; // 0x0118 (0x0038)
    uint8_t HoldOpenPositionRole[0x38]; // 0x0150 (0x0038)
    uint8_t RepositionRole[0x38]; // 0x0188 (0x0038)
    uint8_t FlankingCoverRole[0x38]; // 0x01C0 (0x0038)
    uint8_t FlankingOpenPositionRole[0x38]; // 0x01F8 (0x0038)
    uint8_t GrenadierRole[0x38]; // 0x0230 (0x0038)
};

// ScriptStruct: BendGame.BendAITeamHumanGetBackToFrontLineSettings
struct BendAITeamHumanGetBackToFrontLineSettings {
    float MinMoveDistance; // 0x0000 (0x0004)
    float MaxMoveDistance; // 0x0004 (0x0004)
    float MaxTimeAsPendingWhenMoving; // 0x0008 (0x0004)
    float MaxTimeAsMoving; // 0x000C (0x0004)
    uint8_t MoveCoverRole[0x38]; // 0x0010 (0x0038)
    uint8_t MoveOpenPositionRole[0x38]; // 0x0048 (0x0038)
    uint8_t CoveringRole[0x38]; // 0x0080 (0x0038)
};

// ScriptStruct: BendGame.BendAITeamHumanMoveToDZSettings
struct BendAITeamHumanMoveToDZSettings {
    float MinMoveDistance; // 0x0000 (0x0004)
    float MaxMoveDistance; // 0x0004 (0x0004)
    float MaxTimeAsPendingWhenMoving; // 0x0008 (0x0004)
    float MaxTimeAsMoving; // 0x000C (0x0004)
    uint8_t MoveCoverRole[0x38]; // 0x0010 (0x0038)
    uint8_t MoveOpenPositionRole[0x38]; // 0x0048 (0x0038)
    uint8_t CoveringRole[0x38]; // 0x0080 (0x0038)
};

// ScriptStruct: BendGame.BendAITeamHumanRetreatSettings
struct BendAITeamHumanRetreatSettings {
    bool IsAllowedToRetreat; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float GrenadeProbability; // 0x0004 (0x0004)
    float MinRetreatDistance; // 0x0008 (0x0004)
    float MaxRetreatDistance; // 0x000C (0x0004)
    float MaxTimeAsPendingWhenMoving; // 0x0010 (0x0004)
    float MaxEnemyDistance; // 0x0014 (0x0004)
    float MinEnemyDistanceToStopRetreating; // 0x0018 (0x0004)
    float MinDistanceToDZEdgeForOpenPosition; // 0x001C (0x0004)
    float MinHoldingInOpenTime; // 0x0020 (0x0004)
    float MaxHoldingInOpenTime; // 0x0024 (0x0004)
    float MinTimeToWaitAfterFailedRetreat; // 0x0028 (0x0004)
    float MinDistanceToHomePoint; // 0x002C (0x0004)
    float IdealGrenadeDistance; // 0x0030 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0034 (0x0004)
    uint8_t RetreatCoverRole[0x38]; // 0x0038 (0x0038)
    uint8_t RetreatOpenPositionRole[0x38]; // 0x0070 (0x0038)
    uint8_t CoveringRole[0x38]; // 0x00A8 (0x0038)
    uint8_t HoldCoverPositionRole[0x38]; // 0x00E0 (0x0038)
    uint8_t HoldOpenPositionRole[0x38]; // 0x0118 (0x0038)
    uint8_t RepositionRole[0x38]; // 0x0150 (0x0038)
};

// ScriptStruct: BendGame.BendAITeamHumanHideFromSniperSettings
struct BendAITeamHumanHideFromSniperSettings {
    uint8_t HidingRole[0x38]; // 0x0000 (0x0038)
    float MinHidingTime; // 0x0038 (0x0004)
    float MaxHidingTime; // 0x003C (0x0004)
    float MinStartPeekOutTime; // 0x0040 (0x0004)
    float MaxStartPeekOutTime; // 0x0044 (0x0004)
    float MinPeekOutInterval; // 0x0048 (0x0004)
    float MaxPeekOutInterval; // 0x004C (0x0004)
    float PeekOutIntervalReductionFactor; // 0x0050 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanCombatHuntSettings
struct BendAITeamHumanCombatHuntSettings {
    bool bCanCombatHunt; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t ClosestCoverRole[0x38]; // 0x0008 (0x0038)
    uint8_t AdvanceRole[0x38]; // 0x0040 (0x0038)
    uint8_t WaitRole[0x38]; // 0x0078 (0x0038)
    uint8_t RushRole[0x38]; // 0x00B0 (0x0038)
    uint8_t FlankRole[0x38]; // 0x00E8 (0x0038)
    float InnerCombatHuntRange; // 0x0120 (0x0004)
    float OuterCombatHuntRange; // 0x0124 (0x0004)
    float MaxTimeAllWaiting; // 0x0128 (0x0004)
    float FlankingMinDistanceToTarget; // 0x012C (0x0004)
    float FlankingRadius; // 0x0130 (0x0004)
    float MaxTimeBeforeAcknowledgeHunterKilled; // 0x0134 (0x0004)
    float MinTimeBeforeAcknowledgeHunterKilled; // 0x0138 (0x0004)
    float MinSperationDistanceBetweenHunts; // 0x013C (0x0004)
    int32_t MinHunters; // 0x0140 (0x0004)
    int32_t MaxHunters; // 0x0144 (0x0004)
    float PercentHunters; // 0x0148 (0x0004)
    float TimeUntilFortificationZoneAIsAreRecruited; // 0x014C (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanCombatSettings
struct BendAITeamHumanCombatSettings {
    bool UseTeamCombat; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t CombatRole[0x38]; // 0x0008 (0x0038)
    uint8_t InHomeEntityCombatRole[0x38]; // 0x0040 (0x0038)
    uint8_t CoveringRole[0x38]; // 0x0078 (0x0038)
    uint8_t MoveToLaneRole[0x38]; // 0x00B0 (0x0038)
    uint8_t HoldingRole[0x38]; // 0x00E8 (0x0038)
    float MinLaneDepth; // 0x0120 (0x0004)
};

// ScriptStruct: BendGame.BendAITeamHumanAdvanceSettings
struct BendAITeamHumanAdvanceSettings {
    uint8_t AdvanceBehaviorTreeAsset[0x20]; // 0x0000 (0x0020)
    float InnerAdvanceRange; // 0x0020 (0x0004)
    float OuterAdvanceRange; // 0x0024 (0x0004)
    float MinAdvanceDistance; // 0x0028 (0x0004)
    float MinTimeInCoverToAdvance; // 0x002C (0x0004)
    float CoverSearchRadius; // 0x0030 (0x0004)
    float CoverSearchHalfHeight; // 0x0034 (0x0004)
    class UObject* AdvanceBehaviorTree; // 0x0038 (0x0008)
};

// ScriptStruct: BendGame.BendAIAttractorInfo
struct BendAIAttractorInfo {
};

// ScriptStruct: BendGame.BendAIThrowableReactingNPC
struct BendAIThrowableReactingNPC {
};

// ScriptStruct: BendGame.BendAITeamPawnObserver
struct BendAITeamPawnObserver {
    uint8_t MovementSettings[0x10]; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.BendAITeamPawnMovementObserverSettings
struct BendAITeamPawnMovementObserverSettings {
    float MinSamplePeriod; // 0x0000 (0x0004)
    float MaxSamplePeriod; // 0x0004 (0x0004)
    float SampleFrequency; // 0x0008 (0x0004)
    float MinDeltaDistance; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.BendAIThreatEvaluatorDefaultWeights
struct BendAIThreatEvaluatorDefaultWeights {
    float HasLOS; // 0x0000 (0x0004)
    float Proximity; // 0x0004 (0x0004)
    float TargetedBy; // 0x0008 (0x0004)
    float AttackedBy; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.DebugInfoPointToEvent
struct DebugInfoPointToEvent {
    uint64_t AmbientEventMarker; // 0x0000 (0x0008)
    uint8_t AmbientEventLocation[0xC]; // 0x0008 (0x000C)
    uint8_t LineColor[0x4]; // 0x0014 (0x0004)
    bool ReadyToRemove; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.AmbientEventCategoryTimings
struct AmbientEventCategoryTimings {
    uint8_t AmbientEventClass; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t TimeBetweenEvents[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.AmbientEventInfo
struct AmbientEventInfo {
    uint64_t AmbientEvent; // 0x0000 (0x0008)
    uint64_t BlueprintInstanceOfEvent; // 0x0008 (0x0008)
    uint64_t LevelInstanceOfEvent; // 0x0010 (0x0008)
    uint64_t ULevel; // 0x0018 (0x0008)
    bool MarkedForUnload; // 0x0020 (0x0001)
    bool MarkedForReload; // 0x0021 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0022 (0x0006)
    struct FName UMapForAmbientEvent; // 0x0028 (0x0008)
    bool EventMarkedAsEngaged; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.SpawnLocationData
struct SpawnLocationData {
    uint8_t Transform[0x30]; // 0x0000 (0x0030)
    uint8_t BoxExtent[0xC]; // 0x0030 (0x000C)
    uint64_t SpawnBox; // 0x003C (0x0008)
    uint64_t SpawnArea; // 0x0044 (0x0008)
    uint8_t m_defendZoneInfo[0x30]; // 0x004C (0x0030)
    uint8_t MaxSpawns; // 0x007C (0x0001)
    uint8_t SpawnedCount; // 0x007D (0x0001)
    uint8_t KilledCount; // 0x007E (0x0001)
    uint8_t ActiveCount; // 0x007F (0x0001)
    bool IsInBuilding; // 0x0080 (0x0001)
    uint8_t FailedLoSChecks; // 0x0081 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0082 (0x0006)
    struct TArray<uint8_t> InvalidTypes; // 0x0088 (0x0010)
};

// ScriptStruct: BendGame.SpecificWaveLocations
struct SpecificWaveLocations {
    class UObject* WaveToUse; // 0x0000 (0x0008)
    struct TArray<uint8_t> SpawnLocationsToUse; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendAnimalPreyPreference
struct BendAnimalPreyPreference {
    uint8_t Prey[0x20]; // 0x0000 (0x0020)
    float Interest; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.BendAnimHelperRigMultiplyDivideData
struct BendAnimHelperRigMultiplyDivideData : public BendAnimHelperRigOperationBaseData {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    struct FName LeaderBone; // 0x0010 (0x0008)
    uint8_t Operation; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    uint8_t ModifierValues[0xC]; // 0x001C (0x000C)
};

// ScriptStruct: BendGame.BendAnimHelperRigOperationBaseData
struct BendAnimHelperRigOperationBaseData {
    struct FName AffectedBone; // 0x0000 (0x0008)
    bool bDrawDebug; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.BendAnimHelperRigAimConstraintData
struct BendAnimHelperRigAimConstraintData : public BendAnimHelperRigOperationBaseData {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    struct FName TargetBone; // 0x0010 (0x0008)
    struct FName UpPointParentBoneOverride; // 0x0018 (0x0008)
    uint8_t UpPointInAffectedBoneSpaceInRefPose[0xC]; // 0x0020 (0x000C)
    uint8_t Axes; // 0x002C (0x0001)
};

// ScriptStruct: BendGame.BendAnimIKEntry
struct BendAnimIKEntry {
};

// ScriptStruct: BendGame.BendAnimIKSettings
struct BendAnimIKSettings {
    uint8_t IKPriority; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.BendAnimInstanceProxy
struct BendAnimInstanceProxy : public AnimInstanceProxy {
};

// ScriptStruct: BendGame.BendRandomSequenceData
struct BendRandomSequenceData {
    float CurrentTime; // 0x0000 (0x0004)
    float CurrentTimeRatio; // 0x0004 (0x0004)
    float Length; // 0x0008 (0x0004)
    float TimeRemaining; // 0x000C (0x0004)
    float TimeRemainingRatio; // 0x0010 (0x0004)
    bool IsCompleted; // 0x0014 (0x0001)
};

// ScriptStruct: BendGame.BendAnimGraphBlendspaceSlotData
struct BendAnimGraphBlendspaceSlotData {
    bool Active; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName SlotName; // 0x0008 (0x0008)
    float X; // 0x0010 (0x0004)
    float Y; // 0x0014 (0x0004)
    float Z; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* BlendSpace; // 0x0020 (0x0008)
};

// ScriptStruct: BendGame.BendVehiclePairedAnimData
struct BendVehiclePairedAnimData {
    class UObject* Anim_Driver; // 0x0000 (0x0008)
    class UObject* Anim_Vehicle; // 0x0008 (0x0008)
    uint8_t WhichSide; // 0x0010 (0x0001)
    uint8_t SideVehicleLayingOn; // 0x0011 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0012 (0x0002)
    float StartTime; // 0x0014 (0x0004)
    float BlendInTime_Driver; // 0x0018 (0x0004)
    float BlendInTime_Vehicle; // 0x001C (0x0004)
    bool bFastVersion; // 0x0020 (0x0001)
    bool bVehicleHasFallenOver; // 0x0020 (0x0001)
    uint8_t Pad_1[0xF]; // 0x0021 (0x000F)
    uint8_t VehicleAnchorTransform[0x30]; // 0x0030 (0x0030)
    bool bUseFallingAnimation; // 0x0060 (0x0001)
    bool bUseForcedOnBikeAnimation; // 0x0060 (0x0001)
    bool bEarlyExitPickupAnim; // 0x0060 (0x0001)
};

// ScriptStruct: BendGame.BendPlayerAnimCoverSearch
struct BendPlayerAnimCoverSearch {
    float MinCoverSearchDistance; // 0x0000 (0x0004)
    float MaxCoverSearchDistance; // 0x0004 (0x0004)
    float LowCoverSearchHeight; // 0x0008 (0x0004)
    float HighCoverSearchHeight; // 0x000C (0x0004)
    float BlindFireCoverSearchHeight; // 0x0010 (0x0004)
    float MaxCoverSearchHeight; // 0x0014 (0x0004)
    float CoverSearchRadius; // 0x0018 (0x0004)
    float CoverSearchOffset; // 0x001C (0x0004)
    float OptimalWeaponBlockImmunity; // 0x0020 (0x0004)
    float WeaponBlockImmunityDeadzone; // 0x0024 (0x0004)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_Pose
struct BendAnimMotionMatching_Pose {
    struct TArray<uint8_t> BoneStates; // 0x0000 (0x0010)
    struct TArray<uint8_t> BoneFutureStates; // 0x0010 (0x0010)
    struct TArray<uint8_t> RootFutureStates; // 0x0020 (0x0010)
    uint8_t RootVelocity[0xC]; // 0x0030 (0x000C)
    uint8_t Pad_0[0x4]; // 0x003C (0x0004)
    class UObject* Animation; // 0x0040 (0x0008)
    float RootAngularVelocityYaw; // 0x0048 (0x0004)
    float ExtractionTime; // 0x004C (0x0004)
    int32_t NextContiguousPoseIndex; // 0x0050 (0x0004)
    bool bCanLoop; // 0x0054 (0x0001)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_RootBoneState
struct BendAnimMotionMatching_RootBoneState : public BendAnimMotionMatching_BoneState {
};

// ScriptStruct: BendGame.BendAnimMotionMatching_BoneState
struct BendAnimMotionMatching_BoneState {
    uint8_t Translation[0xC]; // 0x0000 (0x000C)
    uint8_t Velocity[0xC]; // 0x000C (0x000C)
    uint8_t Pad_0[0x8]; // 0x0018 (0x0008)
    uint8_t Rotation[0x10]; // 0x0020 (0x0010)
    bool bMatchVelocity; // 0x0030 (0x0001)
    bool bMatchRotation; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_BoneState_List
struct BendAnimMotionMatching_BoneState_List {
    struct TArray<uint8_t> List; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_ErrorWeights
struct BendAnimMotionMatching_ErrorWeights {
    struct TArray<uint8_t> BoneStates; // 0x0000 (0x0010)
    struct TArray<uint8_t> BoneFutureStates; // 0x0010 (0x0010)
    uint8_t RootVelocity[0x8]; // 0x0020 (0x0008)
    uint8_t RootFutureState[0xC]; // 0x0028 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    struct TArray<uint8_t> FutureTimes; // 0x0038 (0x0010)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_BoneState_ErrorWeights
struct BendAnimMotionMatching_BoneState_ErrorWeights {
    float Translation; // 0x0000 (0x0004)
    float Velocity; // 0x0004 (0x0004)
    float Rotation; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_RootVelocity_ErrorWeights
struct BendAnimMotionMatching_RootVelocity_ErrorWeights {
    float LinearVelocity; // 0x0000 (0x0004)
    float AngularVelocity; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_ExtractionParams
struct BendAnimMotionMatching_ExtractionParams {
    class UObject* SkeletalMesh; // 0x0000 (0x0008)
    class UClass* PrototypicalCharacter_ForComponentToActorRelationship; // 0x0008 (0x0008)
    int32_t SkeletalMeshLodForExtraction; // 0x0010 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0014 (0x000C)
    uint8_t ComponentSpaceToActorSpaceTransform[0x30]; // 0x0020 (0x0030)
    struct TArray<uint8_t> AnimationAssetDirectories; // 0x0050 (0x0010)
    struct TArray<uint8_t> BoneParamsList; // 0x0060 (0x0010)
    struct TArray<uint8_t> BoneFutureParamsList; // 0x0070 (0x0010)
    uint8_t RootVelocity_ErrorWeights[0x8]; // 0x0080 (0x0008)
    uint8_t RootFutureParams_ErrorWeights[0xC]; // 0x0088 (0x000C)
    uint8_t Pad_1[0x4]; // 0x0094 (0x0004)
    struct TArray<uint8_t> FutureTimes; // 0x0098 (0x0010)
    struct TArray<uint8_t> LoopDetectionBoneMatchList; // 0x00A8 (0x0010)
    float ExtractionInterval; // 0x00B8 (0x0004)
    float PoseToPoseBlendTime; // 0x00BC (0x0004)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_BoneParams
struct BendAnimMotionMatching_BoneParams {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    struct FName BoneName; // 0x0010 (0x0008)
    bool bMatchVelocity; // 0x0018 (0x0001)
    bool bMatchRotation; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    uint8_t ErrorWeights[0xC]; // 0x001C (0x000C)
};

// ScriptStruct: BendGame.BendAnimMotionMatching_FutureTimeParams
struct BendAnimMotionMatching_FutureTimeParams {
    float Time; // 0x0000 (0x0004)
    float ErrorWeight; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendAnimMoveSetEntry
struct BendAnimMoveSetEntry {
    struct FName SetGroupType; // 0x0000 (0x0008)
    class UObject* MoveSet; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendVehicleArmor
struct BendVehicleArmor : public BendArmor {
};

// ScriptStruct: BendGame.BendEventVOData
struct BendEventVOData {
    struct FName EventName; // 0x0000 (0x0008)
    float WaitTime; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendRenderingSubmixData
struct BendRenderingSubmixData {
    uint8_t ConvolverParams[0x38]; // 0x0000 (0x0038)
    uint8_t DistortionParams[0x10]; // 0x0038 (0x0010)
    uint8_t PreRenderFilter0[0x18]; // 0x0048 (0x0018)
    uint8_t PreRenderFilter1[0x18]; // 0x0060 (0x0018)
    uint8_t ReflectionsConvolverParams[0x38]; // 0x0078 (0x0038)
    struct TArray<uint8_t> AuxSendGain; // 0x00B0 (0x0010)
    struct TArray<uint8_t> AuxSendDests; // 0x00C0 (0x0010)
    uint8_t DirectPathFilter0[0x8]; // 0x00D0 (0x0008)
    uint8_t DirectPathFilter1[0x8]; // 0x00D8 (0x0008)
    float Reflection0DelayTime; // 0x00E0 (0x0004)
    float Reflection1DelayTime; // 0x00E4 (0x0004)
    uint8_t Reflection0Filter0[0x8]; // 0x00E8 (0x0008)
    uint8_t Reflection0Filter1[0x8]; // 0x00F0 (0x0008)
    uint8_t Reflection1Filter0[0x8]; // 0x00F8 (0x0008)
    uint8_t Reflection1Filter1[0x8]; // 0x0100 (0x0008)
    uint8_t DirectPathPan[0x10]; // 0x0108 (0x0010)
    float DirectPathGain; // 0x0118 (0x0004)
    float DirectPathLfeGain; // 0x011C (0x0004)
    uint8_t Reflection0Pan[0x10]; // 0x0120 (0x0010)
    float Reflection0Gain; // 0x0130 (0x0004)
    float Reflection0LfeGain; // 0x0134 (0x0004)
    uint8_t Reflection1Pan[0x10]; // 0x0138 (0x0010)
    float Reflection1Gain; // 0x0148 (0x0004)
    float Reflection1LfeGain; // 0x014C (0x0004)
};

// ScriptStruct: BendGame.BendSndSphericalPanParams
struct BendSndSphericalPanParams {
    uint8_t Azimuth[0x4]; // 0x0000 (0x0004)
    uint8_t Focus[0x4]; // 0x0004 (0x0004)
    int32_t Elevation; // 0x0008 (0x0004)
    float Distance; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.BendSndModalFilterParams
struct BendSndModalFilterParams {
    uint8_t Mode[0x4]; // 0x0000 (0x0004)
    float intensity; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendSndConvolverParams
struct BendSndConvolverParams {
    struct FString IR_Name; // 0x0000 (0x0010)
    uint8_t Direction[0x4]; // 0x0010 (0x0004)
    float StartOffset; // 0x0014 (0x0004)
    float StopOffset; // 0x0018 (0x0004)
    float Gain; // 0x001C (0x0004)
    float AttackTime; // 0x0020 (0x0004)
    float AttackAlpha; // 0x0024 (0x0004)
    float SustainTime; // 0x0028 (0x0004)
    float ReleaseTime; // 0x002C (0x0004)
    float ReleaseAlpha; // 0x0030 (0x0004)
};

// ScriptStruct: BendGame.BendSndIIRFilterParams
struct BendSndIIRFilterParams {
    uint8_t FilterType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Gain; // 0x0004 (0x0004)
    float LRRatio; // 0x0008 (0x0004)
    float Cutoff; // 0x000C (0x0004)
    float HFRatio; // 0x0010 (0x0004)
    float Resonance; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BendSndDistortionParams
struct BendSndDistortionParams {
    float Drive; // 0x0000 (0x0004)
    float OutputGain; // 0x0004 (0x0004)
    float PassThruGain; // 0x0008 (0x0004)
    uint8_t Flags[0x4]; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.InvestigatorSlot
struct InvestigatorSlot {
};

// ScriptStruct: BendGame.BendCommunicationParameters
struct BendCommunicationParameters {
    uint64_t DetectedPawn; // 0x0000 (0x0008)
    uint8_t LastKnownPosition[0xC]; // 0x0008 (0x000C)
    float AwarenessLevel; // 0x0014 (0x0004)
    uint8_t AwareState; // 0x0018 (0x0001)
    uint8_t SemiAwareState; // 0x0019 (0x0001)
    uint8_t SemiAwareActionType; // 0x001A (0x0001)
};

// ScriptStruct: BendGame.BendBikeRepairInteractDetails
struct BendBikeRepairInteractDetails {
    float RepairTime; // 0x0000 (0x0004)
    float CurrentRepairTime; // 0x0004 (0x0004)
    float TimeCountToNextRepair; // 0x0008 (0x0004)
    float RepairRatePerScrap; // 0x000C (0x0004)
    float HealthRepairedPerScrap; // 0x0010 (0x0004)
    int32_t RepairScrapCount; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BlendableVector
struct BlendableVector : public BlendableBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t Value[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BlendableBase
struct BlendableBase {
    struct FName Key; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.BlendableScalar
struct BlendableScalar : public BlendableBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BTWeightedMoveSpeedType
struct BTWeightedMoveSpeedType {
    uint8_t MoveSpeedType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t Weight; // 0x0004 (0x0004)
    bool ZeroWeightWhenInjured; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.ZoomCamData
struct ZoomCamData {
    float MinZoomPower; // 0x0000 (0x0004)
    float MaxZoomPower; // 0x0004 (0x0004)
    float SmoothZoomTime; // 0x0008 (0x0004)
    int32_t NumberOfSteps; // 0x000C (0x0004)
    bool LoopBackToMinZoomPower; // 0x0010 (0x0001)
    bool LoopBackToMaxZoomPower; // 0x0011 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0012 (0x0002)
    float CameraSpeedAtMinZoom; // 0x0014 (0x0004)
    float CameraSpeedAtMaxZoom; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.BendPhotoModePostPreset
struct BendPhotoModePostPreset {
    bool bOverride_DepthOfFieldFstop; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float DepthOfFieldFstop; // 0x0004 (0x0004)
    bool bOverride_DepthOfFieldMethod; // 0x0008 (0x0001)
    uint8_t DepthOfFieldMethod; // 0x0009 (0x0001)
    bool bOverride_CCBrightness; // 0x000A (0x0001)
    uint8_t Pad_1[0x1]; // 0x000B (0x0001)
    float CCBrightness; // 0x000C (0x0004)
    bool bOverride_WhiteTemp; // 0x0010 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0011 (0x0003)
    float WhiteTemp; // 0x0014 (0x0004)
    bool bOverride_GrainIntensity; // 0x0018 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0019 (0x0003)
    float GrainIntensity; // 0x001C (0x0004)
    bool bOverride_BendDepthGrade_NearTint; // 0x0020 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0021 (0x0003)
    uint8_t BendDepthGrade_NearTint[0x10]; // 0x0024 (0x0010)
    bool bOverride_BendDepthGrade_NearSaturation; // 0x0034 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0035 (0x0003)
    uint8_t BendDepthGrade_NearSaturation[0x10]; // 0x0038 (0x0010)
    bool bOverride_BendDepthGrade_NearGamma; // 0x0048 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0049 (0x0003)
    uint8_t BendDepthGrade_NearGamma[0x10]; // 0x004C (0x0010)
    bool bOverride_BendDepthGrade_FarTint; // 0x005C (0x0001)
    uint8_t Pad_7[0x3]; // 0x005D (0x0003)
    uint8_t BendDepthGrade_FarTint[0x10]; // 0x0060 (0x0010)
    bool bOverride_BendDepthGrade_FarSaturation; // 0x0070 (0x0001)
    uint8_t Pad_8[0x3]; // 0x0071 (0x0003)
    uint8_t BendDepthGrade_FarSaturation[0x10]; // 0x0074 (0x0010)
    bool bOverride_BendDepthGrade_FarGamma; // 0x0084 (0x0001)
    uint8_t Pad_9[0x3]; // 0x0085 (0x0003)
    uint8_t BendDepthGrade_FarGamma[0x10]; // 0x0088 (0x0010)
    bool bOverride_BendDepthGrade_TransitionPoint; // 0x0098 (0x0001)
    uint8_t Pad_10[0x3]; // 0x0099 (0x0003)
    float BendDepthGrade_TransitionPoint; // 0x009C (0x0004)
    bool bOverride_BendDepthGrade_TransitionSpread; // 0x00A0 (0x0001)
    uint8_t Pad_11[0x3]; // 0x00A1 (0x0003)
    float BendDepthGrade_TransitionSpread; // 0x00A4 (0x0004)
    bool bOverride_WhiteTint; // 0x00A8 (0x0001)
    uint8_t Pad_12[0x3]; // 0x00A9 (0x0003)
    float WhiteTint; // 0x00AC (0x0004)
    bool bOverride_CCSaturation; // 0x00B0 (0x0001)
    uint8_t Pad_13[0x3]; // 0x00B1 (0x0003)
    float CCSaturation; // 0x00B4 (0x0004)
    bool bOverride_CCContrast; // 0x00B8 (0x0001)
    uint8_t Pad_14[0x3]; // 0x00B9 (0x0003)
    float CCContrast; // 0x00BC (0x0004)
    bool bOverride_ColorContrast; // 0x00C0 (0x0001)
    uint8_t Pad_15[0x3]; // 0x00C1 (0x0003)
    uint8_t ColorContrast[0xC]; // 0x00C4 (0x000C)
    bool bOverride_CVibrance; // 0x00D0 (0x0001)
    uint8_t Pad_16[0x3]; // 0x00D1 (0x0003)
    float CVibrance; // 0x00D4 (0x0004)
    bool bOverride_ColorGain; // 0x00D8 (0x0001)
    uint8_t Pad_17[0x3]; // 0x00D9 (0x0003)
    uint8_t ColorGain[0xC]; // 0x00DC (0x000C)
    bool bOverride_ColorOffset; // 0x00E8 (0x0001)
    uint8_t Pad_18[0x3]; // 0x00E9 (0x0003)
    uint8_t ColorOffset[0xC]; // 0x00EC (0x000C)
    bool bOverride_ColorGamma; // 0x00F8 (0x0001)
    uint8_t Pad_19[0x3]; // 0x00F9 (0x0003)
    uint8_t ColorGamma[0xC]; // 0x00FC (0x000C)
    bool bOverride_ScreenOverlay_VignetteStrength; // 0x0108 (0x0001)
    uint8_t Pad_20[0x3]; // 0x0109 (0x0003)
    float ScreenOverlay_VignetteStrength; // 0x010C (0x0004)
    bool bOverride_ScreenOverlay_VignetteFalloff; // 0x0110 (0x0001)
    uint8_t Pad_21[0x3]; // 0x0111 (0x0003)
    float ScreenOverlay_VignetteFalloff; // 0x0114 (0x0004)
    bool bOverride_BendBloomScale; // 0x0118 (0x0001)
    uint8_t Pad_22[0x3]; // 0x0119 (0x0003)
    float BendBloomScale; // 0x011C (0x0004)
    bool bOverride_BendBloomScale2; // 0x0120 (0x0001)
    uint8_t Pad_23[0x3]; // 0x0121 (0x0003)
    float BendBloomScale2; // 0x0124 (0x0004)
    bool bOverride_BendBloomInputMinimum; // 0x0128 (0x0001)
    uint8_t Pad_24[0x3]; // 0x0129 (0x0003)
    float BendBloomInputMinimum; // 0x012C (0x0004)
    bool bOverride_BendBloomInputMaximum; // 0x0130 (0x0001)
    uint8_t Pad_25[0x3]; // 0x0131 (0x0003)
    float BendBloomInputMaximum; // 0x0134 (0x0004)
    bool bOverride_BendBloomInput2Minimum; // 0x0138 (0x0001)
    uint8_t Pad_26[0x3]; // 0x0139 (0x0003)
    float BendBloomInput2Minimum; // 0x013C (0x0004)
    bool bOverride_BendBloomInput2Maximum; // 0x0140 (0x0001)
    uint8_t Pad_27[0x3]; // 0x0141 (0x0003)
    float BendBloomInput2Maximum; // 0x0144 (0x0004)
    bool bOverride_BendBloom1Size; // 0x0148 (0x0001)
    uint8_t Pad_28[0x3]; // 0x0149 (0x0003)
    uint8_t BendBloom1Size[0x8]; // 0x014C (0x0008)
    bool bOverride_BendBloom2Size; // 0x0154 (0x0001)
    uint8_t Pad_29[0x3]; // 0x0155 (0x0003)
    uint8_t BendBloom2Size[0x8]; // 0x0158 (0x0008)
    bool bOverride_BendBloomTonemapMaximum; // 0x0160 (0x0001)
    uint8_t Pad_30[0x3]; // 0x0161 (0x0003)
    float BendBloomTonemapMaximum; // 0x0164 (0x0004)
    bool bOverride_BendBloomTonemap2Maximum; // 0x0168 (0x0001)
    uint8_t Pad_31[0x3]; // 0x0169 (0x0003)
    float BendBloomTonemap2Maximum; // 0x016C (0x0004)
    bool bOverride_BendBloom1Color; // 0x0170 (0x0001)
    uint8_t Pad_32[0x3]; // 0x0171 (0x0003)
    uint8_t BendBloom1Color[0x10]; // 0x0174 (0x0010)
    bool bOverride_BendBloom2Color; // 0x0184 (0x0001)
    uint8_t Pad_33[0x3]; // 0x0185 (0x0003)
    uint8_t BendBloom2Color[0x10]; // 0x0188 (0x0010)
    struct FName PresetName; // 0x0198 (0x0008)
    float FocalDist; // 0x01A0 (0x0004)
    float Contrast; // 0x01A4 (0x0004)
    float Brightness; // 0x01A8 (0x0004)
    bool IsUserCreated; // 0x01AC (0x0001)
};

// ScriptStruct: BendGame.BendCharacterMovementTurnRateScaleVsStrafeAngleCurveList
struct BendCharacterMovementTurnRateScaleVsStrafeAngleCurveList {
    struct TArray<uint8_t> Upright; // 0x0000 (0x0010)
    struct TArray<uint8_t> Crouching; // 0x0010 (0x0010)
    struct TArray<uint8_t> Aiming; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.BendCharacterMovementTurnRateScaleVsStrafeAngleCurve
struct BendCharacterMovementTurnRateScaleVsStrafeAngleCurve {
    float TopSpeed; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t Curve[0x80]; // 0x0008 (0x0080)
};

// ScriptStruct: BendGame.BendTapRequestDetector
struct BendTapRequestDetector {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    float MaxHoldTimeForTap; // 0x0004 (0x0004)
    float MaxLingerTimeForDetectedTapSinceRequestFirstDetected; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendCharacterTurnAnimParams
struct BendCharacterTurnAnimParams {
    uint8_t TurnType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName TurnAnchor1; // 0x0008 (0x0008)
    struct FName TurnAnchor2; // 0x0010 (0x0008)
    struct FName TurnAnimationCurveName; // 0x0018 (0x0008)
    struct FName TurnEarlyOutAnimationCurveName; // 0x0020 (0x0008)
    uint8_t TurnAngleSnapType; // 0x0028 (0x0001)
};

// ScriptStruct: BendGame.BendCharacterLocomotionParams
struct BendCharacterLocomotionParams {
    float SmallTurnAngle; // 0x0000 (0x0004)
    float LargeTurnAngle; // 0x0004 (0x0004)
    float SpeedForLargeTurnAngle; // 0x0008 (0x0004)
    float TurnAngleForForceStop; // 0x000C (0x0004)
    float TurnAngleForForceStopMinusBuffer; // 0x0010 (0x0004)
    bool bSlowDownForLargeTurns; // 0x0014 (0x0001)
};

// ScriptStruct: BendGame.BendCharacterCollisionShapeData
struct BendCharacterCollisionShapeData {
    uint8_t Id; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float CapsuleRadius; // 0x0004 (0x0004)
    float CapsuleHalfHeight; // 0x0008 (0x0004)
    float SkeletalMeshComponentOffsetHeight; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.FindClimbingSurfaceResult
struct FindClimbingSurfaceResult {
    bool bBlockingHit; // 0x0000 (0x0001)
    bool bLineTrace; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ClimbingSurfaceDist; // 0x0004 (0x0004)
    float LineDist; // 0x0008 (0x0004)
    uint8_t Pad_1[0x4]; // 0x000C (0x0004)
    uint8_t HitResult[0x88]; // 0x0010 (0x0088)
};

// ScriptStruct: BendGame.CinFlickeringLightSettings
struct CinFlickeringLightSettings {
    uint8_t FlickerPreset; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* FlickerCurve; // 0x0008 (0x0008)
    uint8_t LightColor1[0x10]; // 0x0010 (0x0010)
    float LightTemperature1; // 0x0020 (0x0004)
    uint8_t LightColor2[0x10]; // 0x0024 (0x0010)
    float LightTemperature2; // 0x0034 (0x0004)
    uint8_t LightColor3[0x10]; // 0x0038 (0x0010)
    float LightTemperature3; // 0x0048 (0x0004)
    float BaseIntensity; // 0x004C (0x0004)
    float FlickerIntensity; // 0x0050 (0x0004)
    float RotationRate; // 0x0054 (0x0004)
    uint8_t RotationAxis[0xC]; // 0x0058 (0x000C)
};

// ScriptStruct: BendGame.BikeVolumetricSettings
struct BikeVolumetricSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    uint8_t VolumeColor[0x10]; // 0x0010 (0x0010)
    float VolumeIntensity; // 0x0020 (0x0004)
    uint8_t CenterVolumeColor[0x10]; // 0x0024 (0x0010)
    float CenterVolumeIntensity; // 0x0034 (0x0004)
};

// ScriptStruct: BendGame.BikeTaillightEmissiveSettings
struct BikeTaillightEmissiveSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    uint8_t EmissiveColor[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BikeEmissiveSettings
struct BikeEmissiveSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    float EmissiveIntensity; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BikeSpotSettings
struct BikeSpotSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    float intensity; // 0x0010 (0x0004)
    float attenuation; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BikeTaillightOffset
struct BikeTaillightOffset {
    struct TArray<uint8_t> MeshRefs; // 0x0000 (0x0010)
    int32_t MaterialID; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.BikeHeadlightOffset
struct BikeHeadlightOffset {
    struct TArray<uint8_t> MeshRefs; // 0x0000 (0x0010)
    uint8_t HeadlightOffset[0x30]; // 0x0010 (0x0030)
    uint8_t VolumeOffset[0x30]; // 0x0040 (0x0030)
    float VolumeNearStart; // 0x0070 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0074 (0x000C)
    uint8_t CenterVolumeOffset[0x30]; // 0x0080 (0x0030)
    float CenterVolumeNearStart; // 0x00B0 (0x0004)
    float ConeAngle; // 0x00B4 (0x0004)
    int32_t MaterialID; // 0x00B8 (0x0004)
};

// ScriptStruct: BendGame.EmergencyLightSettings
struct EmergencyLightSettings {
    uint8_t FlickerPreset; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* FlickerCurve; // 0x0008 (0x0008)
    uint8_t LightColor1[0x10]; // 0x0010 (0x0010)
    uint8_t LightColor2[0x10]; // 0x0020 (0x0010)
    float BaseIntensity; // 0x0030 (0x0004)
    float FlickerIntensity; // 0x0034 (0x0004)
    float RotationRate; // 0x0038 (0x0004)
    uint8_t RotationAxis[0xC]; // 0x003C (0x000C)
};

// ScriptStruct: BendGame.DumpTruckVolSettings
struct DumpTruckVolSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    float intensity; // 0x0010 (0x0004)
    uint8_t Color[0x10]; // 0x0014 (0x0010)
};

// ScriptStruct: BendGame.DumpTruckEmissiveSettings
struct DumpTruckEmissiveSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    uint8_t EmissiveColor[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.DumpTruckSpotSettings
struct DumpTruckSpotSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    float intensity; // 0x0010 (0x0004)
    float attenuation; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.DumpTruckSettings
struct DumpTruckSettings {
    struct TArray<uint8_t> MeshRefs; // 0x0000 (0x0010)
    uint8_t HeadlightLeftOffset[0x30]; // 0x0010 (0x0030)
    uint8_t HeadlightRightOffset[0x30]; // 0x0040 (0x0030)
    uint8_t HeadlightLeftVolOffset[0x30]; // 0x0070 (0x0030)
    uint8_t HeadlightRightVolOffset[0x30]; // 0x00A0 (0x0030)
    uint8_t HeadlightLeftPointOffset[0xC]; // 0x00D0 (0x000C)
    uint8_t HeadlightRightPointOffset[0xC]; // 0x00DC (0x000C)
    uint8_t TailLightLeftOuter[0xC]; // 0x00E8 (0x000C)
    uint8_t TailLightLeftInner[0xC]; // 0x00F4 (0x000C)
    uint8_t TailLightRightOuter[0xC]; // 0x0100 (0x000C)
    uint8_t TailLightRightInner[0xC]; // 0x010C (0x000C)
    float HeadLightConeAngle; // 0x0118 (0x0004)
    int32_t HeadLightMaterialID; // 0x011C (0x0004)
    int32_t TailLightMaterialID; // 0x0120 (0x0004)
    int32_t OverheadLightMaterialID; // 0x0124 (0x0004)
    int32_t DashboardMaterialID; // 0x0128 (0x0004)
};

// ScriptStruct: BendGame.HelicopterVolumetricSettings
struct HelicopterVolumetricSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    uint8_t VolumeColor[0x10]; // 0x0010 (0x0010)
    float VolumeIntensity; // 0x0020 (0x0004)
    float VolumeDensity; // 0x0024 (0x0004)
    uint8_t CenterVolumeColor[0x10]; // 0x0028 (0x0010)
    float CenterVolumeIntensity; // 0x0038 (0x0004)
    float CenterVolumeDensity; // 0x003C (0x0004)
};

// ScriptStruct: BendGame.HelicopterPointEmissiveSettings
struct HelicopterPointEmissiveSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    uint8_t PointLeftColor[0x10]; // 0x0010 (0x0010)
    uint8_t PointRightColor[0x10]; // 0x0020 (0x0010)
    float PointIntensity; // 0x0030 (0x0004)
    float PointAttenuation; // 0x0034 (0x0004)
    uint8_t EmissiveLeftColor[0x10]; // 0x0038 (0x0010)
    uint8_t EmissiveRightColor[0x10]; // 0x0048 (0x0010)
};

// ScriptStruct: BendGame.HelicopterOverheadSpotSettings
struct HelicopterOverheadSpotSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    float SpotIntensity; // 0x0010 (0x0004)
    float SpotAttenuation; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.HelicopterSpotSettings
struct HelicopterSpotSettings {
    struct TArray<uint8_t> LinkedCameras; // 0x0000 (0x0010)
    float SpotIntensity; // 0x0010 (0x0004)
    float SpotAttenuation; // 0x0014 (0x0004)
    float PointIntensity; // 0x0018 (0x0004)
    float PointAttenuation; // 0x001C (0x0004)
};

// ScriptStruct: BendGame.HelicopterSettings
struct HelicopterSettings {
    struct TArray<uint8_t> MeshRefs; // 0x0000 (0x0010)
    uint8_t HeadlightOffset[0x30]; // 0x0010 (0x0030)
    uint8_t HeadlightPointOffset[0xC]; // 0x0040 (0x000C)
    uint8_t Pad_0[0x4]; // 0x004C (0x0004)
    uint8_t VolumeOffset[0x30]; // 0x0050 (0x0030)
    float VolumeNearStart; // 0x0080 (0x0004)
    uint8_t Pad_1[0xC]; // 0x0084 (0x000C)
    uint8_t CenterVolumeOffset[0x30]; // 0x0090 (0x0030)
    float CenterVolumeNearStart; // 0x00C0 (0x0004)
    float ConeAngle; // 0x00C4 (0x0004)
    uint8_t Pad_2[0x8]; // 0x00C8 (0x0008)
    uint8_t SideLightGeoOffsetLeft[0x30]; // 0x00D0 (0x0030)
    uint8_t SideLightGeoOffsetRight[0x30]; // 0x0100 (0x0030)
    uint8_t SideLightOffset[0xC]; // 0x0130 (0x000C)
    uint8_t Pad_3[0x4]; // 0x013C (0x0004)
    uint8_t TailLightGeoOffsetLeft[0x30]; // 0x0140 (0x0030)
    uint8_t TailLightGeoOffsetRight[0x30]; // 0x0170 (0x0030)
    uint8_t TailLightOffset[0xC]; // 0x01A0 (0x000C)
    uint8_t Pad_4[0x4]; // 0x01AC (0x0004)
    uint8_t OverheadLightOffset[0x30]; // 0x01B0 (0x0030)
};

// ScriptStruct: BendGame.ClothFXTypeData
struct ClothFXTypeData {
    struct FName BlueprintFXName; // 0x0000 (0x0008)
    class UObject* SoundFX; // 0x0008 (0x0008)
    class UObject* ParticleFX; // 0x0010 (0x0008)
    uint8_t DecalFX[0x28]; // 0x0018 (0x0028)
};

// ScriptStruct: BendGame.ConflictArea
struct ConflictArea {
    float Radius; // 0x0000 (0x0004)
    float intensity; // 0x0004 (0x0004)
    uint8_t Center[0xC]; // 0x0008 (0x000C)
    float TimeOfLastAdd; // 0x0014 (0x0004)
    uint8_t MostRecentEvent; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.ConflictEvent
struct ConflictEvent {
    float intensity; // 0x0000 (0x0004)
    uint8_t Location[0xC]; // 0x0004 (0x000C)
    uint8_t TypeOfEvent; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.ConversationLineIDAndIndex
struct ConversationLineIDAndIndex {
    int32_t Id; // 0x0000 (0x0004)
    int32_t Index; // 0x0004 (0x0004)
    uint8_t Conversation[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.ConversationLineArray
struct ConversationLineArray {
    struct TArray<uint8_t> Conversations; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.ConversationLineDetails
struct ConversationLineDetails {
    struct FName VOlineString; // 0x0000 (0x0008)
    bool ManuallySpecifySpeakingPosition; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    int32_t SpeakingPosition; // 0x000C (0x0004)
    bool UseRadioFutz; // 0x0010 (0x0001)
    uint8_t RadioType; // 0x0011 (0x0001)
};

// ScriptStruct: BendGame.BendDynamicConversationParameters
struct BendDynamicConversationParameters {
    struct TArray<uint8_t> Dialogs; // 0x0000 (0x0010)
    float MaxPauseBetweenLines; // 0x0010 (0x0004)
    float MinPauseBetweenLines; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BendDynamicConversationDialog
struct BendDynamicConversationDialog {
    class UObject* Character; // 0x0000 (0x0008)
    struct FName SoundFXName; // 0x0008 (0x0008)
    class UObject* SoundClass; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.BendManuallyEditedCoverSlot
struct BendManuallyEditedCoverSlot {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Normal[0xC]; // 0x000C (0x000C)
    uint8_t Attributes[0x4]; // 0x0018 (0x0004)
};

// ScriptStruct: BendGame.BendCrowdAnimDisabledTransitionSetup
struct BendCrowdAnimDisabledTransitionSetup {
    uint8_t ControllerStateId; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.BendCrowdAnimTransitionSetup
struct BendCrowdAnimTransitionSetup {
    uint8_t ControllerStateId; // 0x0000 (0x0001)
    uint8_t TargetAnimStateId; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    float TransitionTriggerTime; // 0x0004 (0x0004)
    float TransitionTriggerTimeMaxRandomOffset; // 0x0008 (0x0004)
    uint8_t TransitionTriggerTimeType; // 0x000C (0x0001)
    uint8_t Pad_1[0x3]; // 0x000D (0x0003)
    float BlendTime; // 0x0010 (0x0004)
    bool bIsAutoTransition; // 0x0014 (0x0001)
};

// ScriptStruct: BendGame.BendCrowdAnimStateSetup
struct BendCrowdAnimStateSetup {
    uint8_t AnimStateId; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> AnimAssetList; // 0x0008 (0x0010)
    struct TArray<uint8_t> AnimAssetList_NEW; // 0x0018 (0x0010)
    bool bIsLooping; // 0x0028 (0x0001)
    bool bIsSingleFrame; // 0x0028 (0x0001)
    bool bIsAnchored; // 0x0028 (0x0001)
    bool bCanTurn; // 0x0028 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0029 (0x0003)
    float PlayRate; // 0x002C (0x0004)
    float PlayRateRandomVariationMin; // 0x0030 (0x0004)
    float PlayRateRandomVariationMax; // 0x0034 (0x0004)
    float PlayRateRandomVariationCurveBroadness; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    struct TArray<uint8_t> PhaseOffsetList; // 0x0040 (0x0010)
    class UObject* TransitionGroupSetup; // 0x0050 (0x0008)
    class UClass* CollisionShapeType; // 0x0058 (0x0008)
};

// ScriptStruct: BendGame.BendCrowdAnimStateSetup_AnimAssetEntry
struct BendCrowdAnimStateSetup_AnimAssetEntry {
    class UObject* AnimAsset; // 0x0000 (0x0008)
    int32_t Weight; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.MiniMapLocationComponentCache
struct MiniMapLocationComponentCache : public AudioActorComponentCache {
};

// ScriptStruct: BendGame.AudioActorComponentCache
struct AudioActorComponentCache {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> FreeList; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.AudioComponentRef
struct AudioComponentRef {
    class UObject* AudioComponent; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.BendCrowdControllerId
struct BendCrowdControllerId {
};

// ScriptStruct: BendGame.BendCrowdBehaviorProperties
struct BendCrowdBehaviorProperties {
    float StartHibernateTimeOfDay; // 0x0000 (0x0004)
    float StopHibernateTimeOfDay; // 0x0004 (0x0004)
    float TimeBetweenShiftPositionAtPOIForSingleGroupMember; // 0x0008 (0x0004)
    bool bIgnoreNavMesh; // 0x000C (0x0001)
    bool bEnableClimbing_Assisted; // 0x000C (0x0001)
    bool bEnableClimbing_Unassisted; // 0x000C (0x0001)
    bool bCanClimbOnlyAcrossNavLinks; // 0x000C (0x0001)
    bool bCanClimbWhenPursuingTargetWithoutPath_IfNotOtherwise; // 0x000C (0x0001)
    bool bCanClimbDynamicObjects_IfNotOtherwise; // 0x000C (0x0001)
    bool bCanVisualAwarenessPropagate; // 0x000C (0x0001)
    bool bForceAwareAndFrenzied; // 0x000C (0x0001)
    bool bDisableAmbientWanderBehavior; // 0x000D (0x0001)
    bool bDisableSpreadingOutWhenPursuingPrey; // 0x000D (0x0001)
};

// ScriptStruct: BendGame.BendNeedsData
struct BendNeedsData {
};

// ScriptStruct: BendGame.BendCrowdAwarenessZoneInstance
struct BendCrowdAwarenessZoneInstance {
    class UClass* AwarenessZoneData; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.BendCrowdAwarenessZoneId
struct BendCrowdAwarenessZoneId {
};

// ScriptStruct: BendGame.BendCrowdBehaviorEntry
struct BendCrowdBehaviorEntry {
    uint8_t behavior; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Chance; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.CrowdLodSetup
struct CrowdLodSetup {
    int32_t MaxCanAllocate; // 0x0000 (0x0004)
    int32_t MinMustAllocate; // 0x0004 (0x0004)
    float GpuFrameTimeForDropAllocations_RangeStart; // 0x0008 (0x0004)
    float GpuFrameTimeForDropAllocations_RangeEnd; // 0x000C (0x0004)
    bool bCastShadow; // 0x0010 (0x0001)
    bool bPerBoneMotionBlur; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.CrowdSharedParticle
struct CrowdSharedParticle {
    class UObject* Particle; // 0x0000 (0x0008)
    uint8_t Trigger; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.ExperienceMultiplier
struct ExperienceMultiplier {
    uint8_t Experience[0x18]; // 0x0000 (0x0018)
};

// ScriptStruct: BendGame.DifficultyFloatMultiplier
struct DifficultyFloatMultiplier {
    float Easy; // 0x0000 (0x0004)
    float Normal; // 0x0004 (0x0004)
    float Hard; // 0x0008 (0x0004)
    float Survival; // 0x000C (0x0004)
    float Hard2; // 0x0010 (0x0004)
    float Survival2; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.NeroInjectorMultiplier
struct NeroInjectorMultiplier {
    uint8_t Stamina[0x18]; // 0x0000 (0x0018)
    uint8_t Health[0x18]; // 0x0018 (0x0018)
    uint8_t Focus[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: BendGame.FuelConsumptionMultiplier
struct FuelConsumptionMultiplier {
    uint8_t FuelConsumption[0x18]; // 0x0000 (0x0018)
};

// ScriptStruct: BendGame.AimAssistGlobalSettings
struct AimAssistGlobalSettings {
    uint8_t Easy[0x18]; // 0x0000 (0x0018)
    uint8_t Normal[0x18]; // 0x0018 (0x0018)
    uint8_t Hard[0x18]; // 0x0030 (0x0018)
    uint8_t Survival[0x18]; // 0x0048 (0x0018)
};

// ScriptStruct: BendGame.AimAssistSettings
struct AimAssistSettings {
    bool AimSnap; // 0x0000 (0x0001)
    bool AimSnapProfileChangeAllowed; // 0x0001 (0x0001)
    bool AimLock; // 0x0002 (0x0001)
    bool AimLockProfileChangeAllowed; // 0x0003 (0x0001)
    bool AimFriction; // 0x0004 (0x0001)
    bool AimFrictionProfileChangeAllowed; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    float AimAssistMaxAngle; // 0x0008 (0x0004)
    float AimAssistMaxRange; // 0x000C (0x0004)
    float BulletMagnetismPullDist; // 0x0010 (0x0004)
    float BulletMagnetismDistLimit; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.PlayerAmmoPickupMultiplier
struct PlayerAmmoPickupMultiplier {
    uint8_t AmmoPickup[0x18]; // 0x0000 (0x0018)
};

// ScriptStruct: BendGame.PlayerDamageDealtMultiplier
struct PlayerDamageDealtMultiplier {
    uint8_t Damage[0x18]; // 0x0000 (0x0018)
};

// ScriptStruct: BendGame.PlayerDamageRecievedMultiplier
struct PlayerDamageRecievedMultiplier {
    uint8_t MeleeWeaponDamage[0x18]; // 0x0000 (0x0018)
    uint8_t AnimalDamage[0x18]; // 0x0018 (0x0018)
    uint8_t RangedWeaponDamage[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: BendGame.ClimbAnimSeparator
struct ClimbAnimSeparator {
    uint8_t Climb[0x110]; // 0x0000 (0x0110)
    uint8_t Vault[0x110]; // 0x0110 (0x0110)
};

// ScriptStruct: BendGame.ClimbAnimData
struct ClimbAnimData {
    bool UseDefaultClimbAnim; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t DefaultAnimSequence[0x18]; // 0x0008 (0x0018)
    uint8_t IdleAnimSequence[0x18]; // 0x0020 (0x0018)
    uint8_t RunAnimSequence[0x18]; // 0x0038 (0x0018)
    uint8_t SprintAnimSequence[0x18]; // 0x0050 (0x0018)
    uint8_t CrouchAnimSequence[0x18]; // 0x0068 (0x0018)
    uint8_t DefaultAnimData[0x18]; // 0x0080 (0x0018)
    uint8_t IdleAnimData[0x18]; // 0x0098 (0x0018)
    uint8_t RunAnimData[0x18]; // 0x00B0 (0x0018)
    uint8_t SprintAnimData[0x18]; // 0x00C8 (0x0018)
    uint8_t CrouchAnimData[0x18]; // 0x00E0 (0x0018)
    uint8_t ExitAnimData[0x18]; // 0x00F8 (0x0018)
};

// ScriptStruct: BendGame.InAirClimbAnimSeparator
struct InAirClimbAnimSeparator {
    uint8_t Climb[0x30]; // 0x0000 (0x0030)
    uint8_t Vault[0x30]; // 0x0030 (0x0030)
};

// ScriptStruct: BendGame.InAirClimbAnimData
struct InAirClimbAnimData {
    uint8_t AnimData[0x18]; // 0x0000 (0x0018)
    uint8_t ExitAnimData[0x18]; // 0x0018 (0x0018)
};

// ScriptStruct: BendGame.ClimbAnimSelectionData
struct ClimbAnimSelectionData {
};

// ScriptStruct: BendGame.JobGlobalObject
struct JobGlobalObject {
    class UObject* CurrentObject; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t OriginalTransform[0x30]; // 0x0010 (0x0030)
    bool CurrentlyActive; // 0x0040 (0x0001)
};

// ScriptStruct: BendGame.BendJobAttachecdMiniMapData
struct BendJobAttachecdMiniMapData {
    struct FName ObjIdentifier; // 0x0000 (0x0008)
    int32_t MapIconIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* PawnRef; // 0x0010 (0x0008)
    bool DetachOnDeath; // 0x0018 (0x0001)
    bool HidOnDeathOrRespawn; // 0x0019 (0x0001)
};

// ScriptStruct: BendGame.BendJobObjectives
struct BendJobObjectives {
    struct FName ObjectiveIdentifier; // 0x0000 (0x0008)
    struct FText JobObjectiveText; // 0x0008 (0x0018)
    uint8_t ObjectiveVisualType; // 0x0020 (0x0001)
    uint8_t ObjectiveState; // 0x0021 (0x0001)
    uint8_t ObjectiveType; // 0x0022 (0x0001)
    bool AutoActivateObjective; // 0x0023 (0x0001)
    bool AutoSaveWhenObjectiveUnlocks; // 0x0024 (0x0001)
    bool HideFromJournalWhenCompleted; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    uint8_t ObjectiveStageRange[0x8]; // 0x0028 (0x0008)
    struct TArray<uint8_t> MapMarkersControl; // 0x0030 (0x0010)
    struct TArray<uint8_t> ConditionsForSpecialObjective; // 0x0040 (0x0010)
    bool IsObjectiveCounter; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    int32_t ObjectiveCounterMaxCount; // 0x0054 (0x0004)
    int32_t CurrentCounterCount; // 0x0058 (0x0004)
    bool AutoCompleteObjOnCounterMax; // 0x005C (0x0001)
};

// ScriptStruct: BendGame.BendJobObjectiveMarkers
struct BendJobObjectiveMarkers {
    uint8_t MiniMapLocation[0xC]; // 0x0000 (0x000C)
    bool VisibleOnMiniMap; // 0x000C (0x0001)
    bool VisibleOnMap; // 0x000D (0x0001)
    bool IsObjectiveRegion; // 0x000E (0x0001)
    uint8_t Pad_0[0x1]; // 0x000F (0x0001)
    float ObjectionRegionSize; // 0x0010 (0x0004)
    bool HasInWorldSpaceMarker; // 0x0014 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0015 (0x0003)
    float MaxDistanceAwayToShowWorldMarker; // 0x0018 (0x0004)
    float MinDistanceAwayToShowWorldMarker; // 0x001C (0x0004)
    uint8_t ObjectiveMarkerDistanceType; // 0x0020 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0021 (0x0007)
    class UObject* StoredMapChildComponent; // 0x0028 (0x0008)
    class UObject* StoredMiniMapComponent; // 0x0030 (0x0008)
};

// ScriptStruct: BendGame.BendJobLevelRequest
struct BendJobLevelRequest {
    struct FName MapName; // 0x0000 (0x0008)
    uint8_t RequestType; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.BendJobData
struct BendJobData : public TableRowBase {
    uint8_t JobsAct; // 0x0000 (0x0001)
    uint8_t PrimaryStoryLine; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct TArray<uint8_t> StoryLines; // 0x0008 (0x0010)
    uint8_t JobsType; // 0x0018 (0x0001)
    uint8_t JobCategory; // 0x0019 (0x0001)
    uint8_t Pad_1[0x6]; // 0x001A (0x0006)
    struct TArray<uint8_t> PreRequisiteMissions; // 0x0020 (0x0010)
    struct TArray<uint8_t> PreRequisiteJobs; // 0x0030 (0x0010)
    float TimeToWaitBeforeUnlocking; // 0x0040 (0x0004)
    int32_t HourToUnlockJob; // 0x0044 (0x0004)
    uint8_t AutoFailIfMissionComplete; // 0x0048 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0049 (0x0007)
    class UObject* AutoFailIfJobComplete; // 0x0050 (0x0008)
    class UObject* ReLockIfCompleted_Mission; // 0x0058 (0x0008)
    class UObject* ReLockIfCompleted_Job; // 0x0060 (0x0008)
    class UObject* ReUnlockIfCompleted_Mission; // 0x0068 (0x0008)
    class UObject* ReUnlockIfCompleted_Job; // 0x0070 (0x0008)
    uint8_t MissionToChainTo; // 0x0078 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0079 (0x0007)
    struct TArray<uint8_t> Conditions; // 0x0080 (0x0010)
    bool AutoActivateWhenPreReqsMet; // 0x0090 (0x0001)
    uint8_t NextEpisodeUnlocked; // 0x0091 (0x0001)
    uint8_t Pad_4[0x6]; // 0x0092 (0x0006)
    class UObject* JobDataAssetRef; // 0x0098 (0x0008)
    struct FText JobNameText; // 0x00A0 (0x0018)
    struct FText JobDescriptionText; // 0x00B8 (0x0018)
    struct FText JobDescriptionPostText; // 0x00D0 (0x0018)
    struct FName JobActivityName; // 0x00E8 (0x0008)
    bool Repeatable; // 0x00F0 (0x0001)
    bool CanRestartAfterFailed; // 0x00F1 (0x0001)
    bool CanBeActiveDuringMissions; // 0x00F2 (0x0001)
    uint8_t Pad_5[0x5]; // 0x00F3 (0x0005)
    struct TArray<uint8_t> FactionRewards; // 0x00F8 (0x0010)
    struct TArray<uint8_t> BoozerRewards; // 0x0108 (0x0010)
    int32_t XPReward; // 0x0118 (0x0004)
    bool UseDistanceLimit; // 0x011C (0x0001)
    uint8_t Pad_6[0x3]; // 0x011D (0x0003)
    float MinDistanceLimit; // 0x0120 (0x0004)
    bool SelectionScreenAtEnd; // 0x0124 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0125 (0x0003)
    struct TArray<uint8_t> Debug_DatabaseVariablesSetInMission; // 0x0128 (0x0010)
    struct TArray<uint8_t> DebugRecipeAcquiredInMission; // 0x0138 (0x0010)
    struct FString DeveloperComments; // 0x0148 (0x0010)
    bool Deprecated; // 0x0158 (0x0001)
};

// ScriptStruct: BendGame.JobMapDetails
struct JobMapDetails {
    struct FName MapName; // 0x0000 (0x0008)
    uint8_t MapLocation[0xC]; // 0x0008 (0x000C)
    float DistanceToLoad; // 0x0014 (0x0004)
    uint8_t LoadRequest; // 0x0018 (0x0001)
    bool IsLoaded; // 0x0019 (0x0001)
    bool ShouldStayLoadedUntilLeftArea; // 0x001A (0x0001)
};

// ScriptStruct: BendGame.EncampmentGateState
struct EncampmentGateState {
    bool CurrentlyLocked; // 0x0000 (0x0001)
    bool LockToOpenState; // 0x0001 (0x0001)
    bool PlayTheAnimation; // 0x0002 (0x0001)
    bool DefaultStateIsOpen; // 0x0003 (0x0001)
};

// ScriptStruct: BendGame.JobGiverDetails
struct JobGiverDetails {
    struct FText CharacterNameText; // 0x0000 (0x0018)
    struct FText LocationDescriptionText; // 0x0018 (0x0018)
    uint8_t GiverLocation[0xC]; // 0x0030 (0x000C)
    uint8_t Pad_0[0x4]; // 0x003C (0x0004)
    class UObject* CurrentActiveJob; // 0x0040 (0x0008)
    struct TArray<uint8_t> JobList; // 0x0048 (0x0010)
    struct TArray<uint8_t> JobGiverVOContainer; // 0x0058 (0x0010)
    struct TArray<uint8_t> SurvivorStoriesInfo; // 0x0068 (0x0010)
    struct FString CharacterName; // 0x0078 (0x0010)
};

// ScriptStruct: BendGame.SurvivorStoriesDetails
struct SurvivorStoriesDetails {
    struct TArray<uint8_t> CharacterData; // 0x0000 (0x0010)
    struct TArray<uint8_t> VOForReceiving; // 0x0010 (0x0010)
    struct TArray<uint8_t> VOForReturn; // 0x0020 (0x0010)
    uint8_t VOSoundClass[0x20]; // 0x0030 (0x0020)
    uint8_t DeaconAnchorForGettingJob[0x30]; // 0x0050 (0x0030)
    uint8_t DeaconEnterAnim[0x20]; // 0x0080 (0x0020)
    uint8_t DeaconLoopAnim[0x20]; // 0x00A0 (0x0020)
    uint8_t DeaconExitAnim[0x20]; // 0x00C0 (0x0020)
};

// ScriptStruct: BendGame.SurvivorStoriesCharacters
struct SurvivorStoriesCharacters {
    uint8_t CharacterLook[0x20]; // 0x0000 (0x0020)
    uint8_t LoopAnimWhenRecievingJobs[0x20]; // 0x0020 (0x0020)
    uint8_t LoopAnimWhenReturning[0x20]; // 0x0040 (0x0020)
    uint8_t AnimWhenTurnedIn[0x20]; // 0x0060 (0x0020)
    uint8_t LoopAnimAfterTurnedIn[0x20]; // 0x0080 (0x0020)
    uint8_t AnchorAnim[0x30]; // 0x00A0 (0x0030)
};

// ScriptStruct: BendGame.JobGiverVOContainers
struct JobGiverVOContainers {
    struct TArray<uint8_t> ReceiveVO; // 0x0000 (0x0010)
    struct TArray<uint8_t> ReturnVO; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.SimpleJobGiverVO
struct SimpleJobGiverVO {
    struct FName SoundFXID; // 0x0000 (0x0008)
    bool IsPlayer; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.BendEquippableItemUserAnimBlendProfile_WithForcedLocalSpaceVersion
struct BendEquippableItemUserAnimBlendProfile_WithForcedLocalSpaceVersion {
    uint8_t Normal[0x10]; // 0x0000 (0x0010)
    uint8_t ForcedLocalSpace[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendEquippableItemUserAnimBlendProfile
struct BendEquippableItemUserAnimBlendProfile {
    float LeftArmWeight_Local; // 0x0000 (0x0004)
    float RightArmWeight_Local; // 0x0004 (0x0004)
    float LeftArmWeight_Mesh; // 0x0008 (0x0004)
    float RightArmWeight_Mesh; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.FactionConversationStruct
struct FactionConversationStruct {
    struct TArray<uint8_t> ConversationLines; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.FactionConversationLineStruct
struct FactionConversationLineStruct {
    struct TArray<uint8_t> VOStrings; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.AutoNavLinkTraversalEdge
struct AutoNavLinkTraversalEdge {
};

// ScriptStruct: BendGame.RespawnPoint
struct RespawnPoint {
    uint8_t RespawnLocation[0xC]; // 0x0000 (0x000C)
    uint8_t RespawnRotation[0xC]; // 0x000C (0x000C)
    uint8_t VehicleRespawnLocation[0xC]; // 0x0018 (0x000C)
    uint8_t VehicleRespawnRotation[0xC]; // 0x0024 (0x000C)
    float RespawnTriggerRadius; // 0x0030 (0x0004)
    float RespawnSafetyRadius; // 0x0034 (0x0004)
    int32_t RespawnID; // 0x0038 (0x0004)
    bool RespawnOnBike; // 0x003C (0x0001)
};

// ScriptStruct: BendGame.BendDefaultClimbDataLookup
struct BendDefaultClimbDataLookup {
    struct TArray<uint8_t> LookUp; // 0x0000 (0x0010)
    struct TArray<uint8_t> Data_StrongReferences; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.BendDefaultClimbDataEntry
struct BendDefaultClimbDataEntry {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Data[0x20]; // 0x0008 (0x0020)
};

// ScriptStruct: BendGame.RegionData
struct RegionData {
    struct FText RegionNameText; // 0x0000 (0x0018)
    struct TArray<uint8_t> Encampments; // 0x0018 (0x0010)
    struct TArray<uint8_t> Nests; // 0x0028 (0x0010)
    struct TArray<uint8_t> Bunkers; // 0x0038 (0x0010)
    struct TArray<uint8_t> NeroCheckpoints; // 0x0048 (0x0010)
    struct TArray<uint8_t> NeroSites; // 0x0058 (0x0010)
    struct TArray<uint8_t> HordeJobs; // 0x0068 (0x0010)
    struct TArray<uint8_t> NeroRecorderCollectibles; // 0x0078 (0x0010)
    struct TArray<uint8_t> HistoricalMarkerCollectibles; // 0x0088 (0x0010)
    struct TArray<uint8_t> CharacterCollectibles; // 0x0098 (0x0010)
    struct TArray<uint8_t> TourismCollectibles; // 0x00A8 (0x0010)
    struct TArray<uint8_t> RIPSermonCollectibles; // 0x00B8 (0x0010)
    struct TArray<uint8_t> HerbologyCollectibles; // 0x00C8 (0x0010)
};

// ScriptStruct: BendGame.VehicleDamageVsPawnInfo
struct VehicleDamageVsPawnInfo {
    float MinVelocityImpactThreshold; // 0x0000 (0x0004)
    float PlayerHitModifier; // 0x0004 (0x0004)
    uint8_t ImpactVelocityVsDamageGraph[0x80]; // 0x0008 (0x0080)
};

// ScriptStruct: BendGame.VehicleWaterDamageInfo
struct VehicleWaterDamageInfo {
    float MinSpeedBeforeDamage; // 0x0000 (0x0004)
    float MinDepthBeforeConstantWaterDamage; // 0x0004 (0x0004)
    float TimeBeforeDamageAndNotification; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t WaterDepthVsDamagePerSecond[0x80]; // 0x0010 (0x0080)
    float WaterDamageResistance; // 0x0090 (0x0004)
};

// ScriptStruct: BendGame.VehicleRamDamageInfo
struct VehicleRamDamageInfo {
    float MinDamageToInflictAsRammer; // 0x0000 (0x0004)
    float MaxDamageToInflictAsRammer; // 0x0004 (0x0004)
    float RammerDamageModifier; // 0x0008 (0x0004)
    float MinImpulseAtLocationRammie; // 0x000C (0x0004)
    float MaxImpuleAtLocationRammie; // 0x0010 (0x0004)
    float RamDamageLockoutTimer; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.VehicleJumpDamageInfo
struct VehicleJumpDamageInfo {
    float WheelProbeDownDist; // 0x0000 (0x0004)
    float SecondsBeforeNewJumpDamageAllowed; // 0x0004 (0x0004)
    float MinFallDistBeforeDMG; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t VelocityVsDamageGraph[0x80]; // 0x0010 (0x0080)
    uint8_t AngleVsDamageGraph[0x80]; // 0x0090 (0x0080)
    uint8_t HeightVsDamageGraph[0x80]; // 0x0110 (0x0080)
};

// ScriptStruct: BendGame.VehicleSurfaceDamaegInfo
struct VehicleSurfaceDamaegInfo {
    float minSpeedBeforeDamageCounts; // 0x0000 (0x0004)
    float timeBetweenDamageTicks; // 0x0004 (0x0004)
    float onRoadDamagePerSecond; // 0x0008 (0x0004)
    float trailsDamagePerSecond; // 0x000C (0x0004)
    float offRoadDamagePerSecond; // 0x0010 (0x0004)
    float extremeDamagePerSecond; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.VehicleHitDamageInfo
struct VehicleHitDamageInfo {
    bool bAllowHitDamage; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float SecondsBeforeNewDamageAllowed; // 0x0004 (0x0004)
    float MinSpeedDamageThreshold; // 0x0008 (0x0004)
    uint8_t Pad_1[0x4]; // 0x000C (0x0004)
    uint8_t VelocityVsDamageGraph[0x80]; // 0x0010 (0x0080)
};

// ScriptStruct: BendGame.BendVehicleImpactSoundInfo
struct BendVehicleImpactSoundInfo {
    class UObject* Sound; // 0x0000 (0x0008)
    float MinSpeed; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ForceToVolumeCurve[0x80]; // 0x0010 (0x0080)
    float VolumeMax; // 0x0090 (0x0004)
};

// ScriptStruct: BendGame.VehicleAttachedPart
struct VehicleAttachedPart {
    class UObject* Specs; // 0x0000 (0x0008)
    class UObject* Mesh; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendInputPriorityTable
struct BendInputPriorityTable : public TableRowBase {
    int32_t Priority; // 0x0000 (0x0004)
};

// ScriptStruct: BendGame.BendInputMappingGroupInfo
struct BendInputMappingGroupInfo {
    struct FText LamsName; // 0x0000 (0x0018)
    uint8_t Pad_0[0x8]; // 0x0018 (0x0008)
    struct TArray<uint8_t> PrimaryMappingInfo; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.BendInputMapInfo
struct BendInputMapInfo {
    struct FName ActionName; // 0x0000 (0x0008)
    struct TArray<uint8_t> LinkedTo; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.CoverMoveVerificationSettingsData
struct CoverMoveVerificationSettingsData : public BaseCoverSettingsData {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Type; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.BaseCoverSettingsData
struct BaseCoverSettingsData {
    struct TArray<uint8_t> Tests; // 0x0000 (0x0010)
    struct TArray<uint8_t> MinRanges; // 0x0010 (0x0010)
    struct TArray<uint8_t> MaxRanges; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.CoverQuerySettingsValue
struct CoverQuerySettingsValue {
    uint8_t Parameter; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Value; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.CoverVerificationSettingsData
struct CoverVerificationSettingsData : public BaseCoverSettingsData {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Type; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.CoverQuerySettingsData
struct CoverQuerySettingsData : public BaseCoverSettingsData {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Type; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> Scores; // 0x0038 (0x0010)
    struct TArray<uint8_t> Weights; // 0x0048 (0x0010)
};

// ScriptStruct: BendGame.BendInputMappingGroup
struct BendInputMappingGroup {
    struct FText GroupName; // 0x0000 (0x0018)
    struct TArray<uint8_t> InputMappings; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.BendInputMappingEntry
struct BendInputMappingEntry {
    struct FName ActionName; // 0x0000 (0x0008)
    class UObject* PrimaryMapping; // 0x0008 (0x0008)
    class UObject* AlternateMapping; // 0x0010 (0x0008)
    class UObject* ControllerMapping; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.BendLightFlicker
struct BendLightFlicker {
    bool LightFlicker; // 0x0000 (0x0001)
    bool CopyFlicker; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    float TimeSinceLastFlicker; // 0x0004 (0x0004)
    float FlickerIntMinPercent; // 0x0008 (0x0004)
    float FlickerIntMaxPercent; // 0x000C (0x0004)
    float FlickerFrequency; // 0x0010 (0x0004)
    float GoalFlickerIntensity; // 0x0014 (0x0004)
    float IntensityDeltaPerTick; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* FlickerLightRef; // 0x0020 (0x0008)
};

// ScriptStruct: BendGame.MovementFXTypeData
struct MovementFXTypeData {
    struct FName BlueprintFXName; // 0x0000 (0x0008)
    class UObject* SoundFX; // 0x0008 (0x0008)
    class UObject* ParticleFX; // 0x0010 (0x0008)
    uint8_t DecalFX[0x28]; // 0x0018 (0x0028)
};

// ScriptStruct: BendGame.BendPathAvoidanceAreaDescriptor
struct BendPathAvoidanceAreaDescriptor {
    float CostMultiplier; // 0x0000 (0x0004)
    float Radius; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendNavLinkCollectionEntry
struct BendNavLinkCollectionEntry : public NavLinkCollectionEntry {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    bool ForEdgeTraversal; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    uint8_t m_InverseClimbStateData[0x20]; // 0x0038 (0x0020)
    uint8_t m_ClimbStateData[0x20]; // 0x0058 (0x0020)
    struct TArray<uint8_t> TraversalSettings; // 0x0078 (0x0010)
    bool OnlyUseWhenFrustrated; // 0x0088 (0x0001)
    bool CanUseWhenAware; // 0x0089 (0x0001)
    bool CanUseWhenSemiaware; // 0x008A (0x0001)
    bool CanUseWhenUnaware; // 0x008B (0x0001)
    uint8_t Start[0xC]; // 0x008C (0x000C)
    uint8_t End[0xC]; // 0x0098 (0x000C)
    bool AdjustPointsToGeometry; // 0x00A4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00A5 (0x0003)
    class UObject* LoadedInverseClimbStateData; // 0x00A8 (0x0008)
    class UObject* LoadedClimbStateData; // 0x00B0 (0x0008)
};

// ScriptStruct: BendGame.NestData
struct NestData {
    uint64_t Location; // 0x0000 (0x0008)
    uint64_t Nest; // 0x0008 (0x0008)
    struct FString Id; // 0x0010 (0x0010)
    bool Destroyed; // 0x0020 (0x0001)
};

// ScriptStruct: BendGame.MapLocationFastTravel
struct MapLocationFastTravel {
    bool bFastTravelAvailable; // 0x0000 (0x0001)
    uint8_t Pad_0[0xF]; // 0x0001 (0x000F)
    uint8_t PlayerFastTravelTransform[0x30]; // 0x0010 (0x0030)
    uint8_t BikeFastTravelTransform[0x30]; // 0x0040 (0x0030)
};

// ScriptStruct: BendGame.BendOpenWorldCloudTypeState
struct BendOpenWorldCloudTypeState {
    float TickAccumulator; // 0x0000 (0x0004)
    float SpawnTimer; // 0x0004 (0x0004)
    int32_t CooldownCounter; // 0x0008 (0x0004)
    float Cooldown; // 0x000C (0x0004)
    int32_t DistributionCounter; // 0x0010 (0x0004)
    float DistributionBase; // 0x0014 (0x0004)
    int32_t Seed; // 0x0018 (0x0004)
    float CachedSpawnDistance; // 0x001C (0x0004)
    class UObject* CachedDensityTexture; // 0x0020 (0x0008)
    class UObject* CachedDensityMaterial; // 0x0028 (0x0008)
    uint8_t CachedTextureTilesX; // 0x0030 (0x0001)
    uint8_t CachedTextureTilesY; // 0x0031 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0032 (0x0006)
    class UObject* CachedRegionTexture; // 0x0038 (0x0008)
    uint8_t CachedRegion[0x10]; // 0x0040 (0x0010)
    bool CachedUseSubtractiveBlend; // 0x0050 (0x0001)
    bool CachedRegionTextureGreenChannelIsPrecipitationMask; // 0x0051 (0x0001)
    bool CachedRegionTextureBlueChannelIsPrecipitationToSnowBlendMask; // 0x0052 (0x0001)
    bool CachedRegionTextureSampledAtCameraPosition; // 0x0053 (0x0001)
    bool CachedScaleColumnFogToPercipitation; // 0x0054 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0055 (0x0003)
    float CachedMinDensityForWeather; // 0x0058 (0x0004)
};

// ScriptStruct: BendGame.BendOpenWorldVOData
struct BendOpenWorldVOData : public TableRowBase {
    struct FName RowNameIGNOREME; // 0x0000 (0x0008)
    uint8_t DemoFailEpisode; // 0x0008 (0x0001)
    bool ManuallyCalled; // 0x0009 (0x0001)
    uint8_t PlayOnMissionUnlock; // 0x000A (0x0001)
    uint8_t Pad_0[0x5]; // 0x000B (0x0005)
    struct TArray<uint8_t> PreRequisiteMissions; // 0x0010 (0x0010)
    struct TArray<uint8_t> PreRequisiteJobs; // 0x0020 (0x0010)
    bool UseJobPreReqs; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float TimeToWaitBeforeCalling; // 0x0034 (0x0004)
    int32_t HourToCallVO; // 0x0038 (0x0004)
    float TimeAllowedInQueue; // 0x003C (0x0004)
    int32_t NumTriesAllowed; // 0x0040 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0044 (0x0004)
    uint8_t AutoFailIfMissionComplete; // 0x0048 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0049 (0x0007)
    class UObject* AutoFailIfJobUnlocked; // 0x0050 (0x0008)
    class UObject* AutoFailIfJobComplete; // 0x0058 (0x0008)
    struct FName AutoFailIfVOPlayed; // 0x0060 (0x0008)
    struct TArray<uint8_t> Conditions; // 0x0068 (0x0010)
    bool CanPlayInEncampments; // 0x0078 (0x0001)
    bool Optional; // 0x0079 (0x0001)
    uint8_t Collectible; // 0x007A (0x0001)
    uint8_t Pad_4[0x5]; // 0x007B (0x0005)
    class UObject* JobToUnlockAtEnd; // 0x0080 (0x0008)
    class UObject* MissionToUnlockAtEnd; // 0x0088 (0x0008)
    bool ActivateInsteadOfUnlock; // 0x0090 (0x0001)
    uint8_t WhoIsDeaconTalkingTo; // 0x0091 (0x0001)
    uint8_t Pad_5[0x6]; // 0x0092 (0x0006)
    class UObject* ConversationSoundClass; // 0x0098 (0x0008)
    float ConversationPriority; // 0x00A0 (0x0004)
    uint8_t ConversationSettings[0x1C]; // 0x00A4 (0x001C)
    uint8_t ConversationFaction; // 0x00C0 (0x0001)
    uint8_t Pad_6[0x7]; // 0x00C1 (0x0007)
    struct TArray<uint8_t> Conversation; // 0x00C8 (0x0010)
    struct TArray<uint8_t> ConversationLow; // 0x00D8 (0x0010)
    struct TArray<uint8_t> ConversationMid; // 0x00E8 (0x0010)
    struct TArray<uint8_t> ConversationHigh; // 0x00F8 (0x0010)
};

// ScriptStruct: BendGame.VocalConversationDataArray
struct VocalConversationDataArray {
    struct TArray<uint8_t> ConversationData; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.BendConversationSettings
struct BendConversationSettings {
    float MaxPauseBetweenLines; // 0x0000 (0x0004)
    float MinPauseBetweenLines; // 0x0004 (0x0004)
    float MaxWaitTimeInQueue; // 0x0008 (0x0004)
    int32_t NumSecondsAllowRepeat; // 0x000C (0x0004)
    bool LoopConversation; // 0x0010 (0x0001)
    bool ShouldDuckSounds; // 0x0011 (0x0001)
    bool ShouldUnduckSounds; // 0x0012 (0x0001)
    bool UseInterruptSystem; // 0x0013 (0x0001)
    bool CheckThreatsBeforePlaying; // 0x0014 (0x0001)
    bool CheckThreatsBeforeResuming; // 0x0015 (0x0001)
    bool InterruptWhenShooting; // 0x0016 (0x0001)
    bool InterruptWhenMeleeing; // 0x0017 (0x0001)
    bool PlayResumeVO; // 0x0018 (0x0001)
    bool StopIfInterrupted; // 0x0019 (0x0001)
};

// ScriptStruct: BendGame.BendOpenWorldVOSpeakerDelay
struct BendOpenWorldVOSpeakerDelay {
    uint8_t PersonToTalkTo; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float MinimumTimeBetweenConvos; // 0x0004 (0x0004)
    uint8_t LastTimeSpokenTo[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendSkeletalMeshVariationExtraData
struct BendSkeletalMeshVariationExtraData {
    float ProbabilityWeight; // 0x0000 (0x0004)
    float ProbabilityRangeEnd0To1; // 0x0004 (0x0004)
    float ProbabilityRangeRandomEnd0To1; // 0x0008 (0x0004)
    float MaleProbabilityRangeRandomEnd0To1; // 0x000C (0x0004)
    float NonmaleProbabilityRangeRandomEnd0To1; // 0x0010 (0x0004)
    uint8_t Gender; // 0x0014 (0x0001)
};

// ScriptStruct: BendGame.BendSkeletalMeshLookEntry
struct BendSkeletalMeshLookEntry {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t LookAsset[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: BendGame.BendConditionalSkeletalMeshLook
struct BendConditionalSkeletalMeshLook {
    uint8_t Look[0x20]; // 0x0000 (0x0020)
    struct TArray<uint8_t> Conditions; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.BendActionSequence
struct BendActionSequence {
    uint8_t EnterAction[0xA0]; // 0x0000 (0x00A0)
    uint8_t MainAction[0xA0]; // 0x00A0 (0x00A0)
    uint8_t ExitAction[0xA0]; // 0x0140 (0x00A0)
};

// ScriptStruct: BendGame.PhotoModeLogoPositions
struct PhotoModeLogoPositions {
    uint8_t UpperLeft[0x20]; // 0x0000 (0x0020)
    uint8_t UpperCenter[0x20]; // 0x0020 (0x0020)
    uint8_t UpperRight[0x20]; // 0x0040 (0x0020)
    uint8_t Right[0x20]; // 0x0060 (0x0020)
    uint8_t BottomRight[0x20]; // 0x0080 (0x0020)
    uint8_t BottomCenter[0x20]; // 0x00A0 (0x0020)
    uint8_t BottomLeft[0x20]; // 0x00C0 (0x0020)
    uint8_t Left[0x20]; // 0x00E0 (0x0020)
};

// ScriptStruct: BendGame.PhotoModeLogoOffset
struct PhotoModeLogoOffset {
    uint8_t Achors[0x10]; // 0x0000 (0x0010)
    uint8_t Position[0x8]; // 0x0010 (0x0008)
    uint8_t Alignment[0x8]; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.BendPOIAnimSetTuning
struct BendPOIAnimSetTuning {
    float WeaponTestSuccess; // 0x0000 (0x0004)
    float WeaponTestFailed; // 0x0004 (0x0004)
    float WeaponTestIgnored; // 0x0008 (0x0004)
    float SkeletonTestSuccess; // 0x000C (0x0004)
    float SkeletonTestFailed; // 0x0010 (0x0004)
    float SkeletonTestIgnored; // 0x0014 (0x0004)
    float FactionTestSuccess; // 0x0018 (0x0004)
    float FactionTestFailed; // 0x001C (0x0004)
    float FactionTestIgnored; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.BendPOIAnimSet
struct BendPOIAnimSet {
    bool bUsePreferredFactions; // 0x0000 (0x0001)
    bool bUseWeapons; // 0x0001 (0x0001)
    uint8_t CanUseIfTense; // 0x0002 (0x0001)
    uint8_t Pad_0[0x5]; // 0x0003 (0x0005)
    struct TArray<uint8_t> PreferredFactions; // 0x0008 (0x0010)
    bool CheckSkeleton; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> PreferredAimedWeapons; // 0x0020 (0x0010)
    struct TArray<uint8_t> PreferredUnaimedWeapons; // 0x0030 (0x0010)
    class UObject* AnimVariations; // 0x0040 (0x0008)
};

// ScriptStruct: BendGame.XpecDLink
struct XpecDLink {
};

// ScriptStruct: BendGame.XpecAnimationData
struct XpecAnimationData {
    struct FName m_groupName; // 0x0000 (0x0008)
    class UObject* m_pSequence; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.XpecTrustVO
struct XpecTrustVO {
    uint8_t TrustTier; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> VOList; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.XpecVO
struct XpecVO {
    struct FName EventName; // 0x0000 (0x0008)
    class UObject* SoundClass; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.XpecEventPawnGroup
struct XpecEventPawnGroup {
    struct TArray<uint8_t> m_Spawners; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.XpecEventPawnInfoArray
struct XpecEventPawnInfoArray {
    struct TArray<uint8_t> m_Info; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.XpecEventPawnInfo
struct XpecEventPawnInfo {
    uint8_t m_SpawnPoint[0x10]; // 0x0000 (0x0010)
    uint8_t m_FleePoint[0x10]; // 0x0010 (0x0010)
    uint8_t m_Gender; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    class UObject* m_pBankSoundClass; // 0x0028 (0x0008)
    class UObject* m_pAnimSequence; // 0x0030 (0x0008)
    class UObject* m_pTrustAnim; // 0x0038 (0x0008)
    struct TArray<uint8_t> m_AvailableTimeZone; // 0x0040 (0x0010)
    bool m_bCanReplaceWithPOI; // 0x0050 (0x0001)
};

// ScriptStruct: BendGame.ContentionGroupInfo
struct ContentionGroupInfo {
    struct FName m_groupName; // 0x0000 (0x0008)
    struct TArray<uint8_t> m_GroupedPOIs; // 0x0008 (0x0010)
    bool m_bIsUsing; // 0x0018 (0x0001)
    bool m_bIsInCoolDown; // 0x0019 (0x0001)
    uint8_t Pad_0[0x2]; // 0x001A (0x0002)
    float m_fGroupCoolDownTime; // 0x001C (0x0004)
};

// ScriptStruct: BendGame.XpecTransitionInfo
struct XpecTransitionInfo {
    int32_t m_iSN; // 0x0000 (0x0004)
    int32_t m_iIndex; // 0x0004 (0x0004)
    bool m_bIsReachGoal; // 0x0008 (0x0001)
    bool m_bShouldReFindEntry; // 0x0009 (0x0001)
    uint8_t Pad_0[0x6]; // 0x000A (0x0006)
    struct FName m_ScenarioName; // 0x0010 (0x0008)
    uint8_t m_VOData[0x48]; // 0x0018 (0x0048)
    int32_t m_AnchorIndex; // 0x0060 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0064 (0x0004)
    struct FName m_PawnName; // 0x0068 (0x0008)
    uint8_t m_eMigrationAction; // 0x0070 (0x0001)
    bool m_bIsOrphan; // 0x0071 (0x0001)
    bool m_bEnableVOWhenTransition; // 0x0072 (0x0001)
    bool m_bUseStaticRoute; // 0x0073 (0x0001)
    uint8_t Pad_2[0x4]; // 0x0074 (0x0004)
    uint8_t m_SitLocationRef[0x10]; // 0x0078 (0x0010)
    bool m_bFrontPath; // 0x0088 (0x0001)
    bool m_bLeftPath; // 0x0089 (0x0001)
    bool m_bRightPath; // 0x008A (0x0001)
    bool m_bHideChairMesh; // 0x008B (0x0001)
    uint8_t Pad_3[0x4]; // 0x008C (0x0004)
    class UObject* m_ChairMesh; // 0x0090 (0x0008)
};

// ScriptStruct: BendGame.XpecVOData
struct XpecVOData : public TableRowBase {
    struct FName m_BehaviorTag; // 0x0000 (0x0008)
    struct FName m_POIName; // 0x0008 (0x0008)
    struct FName m_ZoneID; // 0x0010 (0x0008)
    uint8_t m_ePawnType; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    struct FName m_Actor0SndClass; // 0x0020 (0x0008)
    struct FName m_Actor1SndClass; // 0x0028 (0x0008)
    int32_t m_iNumVOName; // 0x0030 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0034 (0x0004)
    struct FName m_VOName0; // 0x0038 (0x0008)
    struct FName m_VOName1; // 0x0040 (0x0008)
};

// ScriptStruct: BendGame.XpecPOICountData
struct XpecPOICountData {
    uint8_t Pad_0[0xA0]; // 0x0000 (0x00A0)
    int32_t m_rawEntryCount; // 0x00A0 (0x0004)
    int32_t m_dummyCorrectCount; // 0x00A4 (0x0004)
    int32_t m_orderCompleteCount; // 0x00A8 (0x0004)
    uint8_t Pad_1[0x4]; // 0x00AC (0x0004)
    uint8_t m_POIUseTime[0x8]; // 0x00B0 (0x0008)
    uint8_t m_POIDummyTime[0x8]; // 0x00B8 (0x0008)
    uint8_t m_POIOccupiedTime[0x8]; // 0x00C0 (0x0008)
    uint8_t m_LastOccupied[0x8]; // 0x00C8 (0x0008)
    uint8_t m_LastEmptied[0x8]; // 0x00D0 (0x0008)
    uint8_t m_LastCount[0x8]; // 0x00D8 (0x0008)
    uint8_t m_AverageInterval[0x8]; // 0x00E0 (0x0008)
    bool m_bIsOccupied; // 0x00E8 (0x0001)
};

// ScriptStruct: BendGame.XpecOverrideLook
struct XpecOverrideLook {
};

// ScriptStruct: BendGame.XpecLODPawn
struct XpecLODPawn : public XpecDLink {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t m_Info[0x50]; // 0x0018 (0x0050)
    class UObject* m_pArchetypeData; // 0x0068 (0x0008)
    class UObject* m_pPawn; // 0x0070 (0x0008)
    class UObject* m_pDummy; // 0x0078 (0x0008)
    class UObject* m_EventPawn; // 0x0080 (0x0008)
    class UObject* m_pProps; // 0x0088 (0x0008)
    class UObject* m_pSpawner; // 0x0090 (0x0008)
    class UObject* m_pZoneManager; // 0x0098 (0x0008)
    float m_fDistance; // 0x00A0 (0x0004)
    uint8_t Pad_1[0xC]; // 0x00A4 (0x000C)
    uint8_t m_save[0x90]; // 0x00B0 (0x0090)
    float m_fCooldown; // 0x0140 (0x0004)
    float m_fDespawnTimer; // 0x0144 (0x0004)
    float m_fInterruptionTimer; // 0x0148 (0x0004)
    uint8_t m_eLODLevel; // 0x014C (0x0001)
    uint8_t m_eNextLODLevel; // 0x014D (0x0001)
    bool m_bGroundChecked; // 0x014E (0x0001)
    uint8_t Pad_2[0x1]; // 0x014F (0x0001)
    class UObject* m_pPreDummyToPawnPOI; // 0x0150 (0x0008)
    uint8_t m_MeshMaterialParamsSnapshot[0x10]; // 0x0158 (0x0010)
};

// ScriptStruct: BendGame.XpecScenarioSave
struct XpecScenarioSave {
    class UObject* m_pPOI; // 0x0000 (0x0008)
    class UObject* m_pPreviousPOI; // 0x0008 (0x0008)
    struct FName m_ScenarioName; // 0x0010 (0x0008)
    int32_t m_iCommandIndex; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct FName m_idleGroup; // 0x0020 (0x0008)
    bool m_bRandomInGroup; // 0x0028 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0029 (0x0007)
    uint8_t m_loopTransform[0x30]; // 0x0030 (0x0030)
    float m_fTransitionTime; // 0x0060 (0x0004)
    uint8_t m_eWeaponType; // 0x0064 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0065 (0x0003)
    struct TArray<uint8_t> m_events; // 0x0068 (0x0010)
    uint8_t m_previousWeather; // 0x0078 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0079 (0x0003)
    uint8_t m_DummySwitchOffset[0xC]; // 0x007C (0x000C)
};

// ScriptStruct: BendGame.XpecPawnInfo
struct XpecPawnInfo : public TableRowBase {
    struct FName m_name; // 0x0000 (0x0008)
    uint8_t m_PawnClass[0x20]; // 0x0008 (0x0020)
    class UObject* m_pLook; // 0x0028 (0x0008)
    class UObject* m_pPropsMesh; // 0x0030 (0x0008)
    uint8_t m_ePawnType; // 0x0038 (0x0001)
    uint8_t m_eFactionType; // 0x0039 (0x0001)
    uint8_t m_ePawnGender; // 0x003A (0x0001)
    uint8_t m_eVOClass; // 0x003B (0x0001)
    uint8_t m_eWeaponId; // 0x003C (0x0001)
    uint8_t m_eThrowableId; // 0x003D (0x0001)
    uint8_t m_eMeleeId; // 0x003E (0x0001)
    uint8_t Pad_0[0x1]; // 0x003F (0x0001)
    float m_fSppedMultiply; // 0x0040 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0044 (0x0004)
    struct FName m_loadoutName; // 0x0048 (0x0008)
};

// ScriptStruct: BendGame.XpecFinishActionData
struct XpecFinishActionData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* m_pNextPOI; // 0x0028 (0x0008)
    uint8_t m_eResult; // 0x0030 (0x0001)
    uint8_t m_eWeaponType; // 0x0031 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0032 (0x0002)
    float m_fChangeWeaponPlayRate; // 0x0034 (0x0004)
    bool m_bChangeWeaponWhenFinish; // 0x0038 (0x0001)
};

// ScriptStruct: BendGame.XpecScenarioData
struct XpecScenarioData {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* m_pScenario; // 0x0008 (0x0008)
    struct FName m_name; // 0x0010 (0x0008)
    uint8_t m_eState; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    int32_t m_iActorIndex; // 0x001C (0x0004)
    int32_t m_iCommandIndex; // 0x0020 (0x0004)
    float m_fTime; // 0x0024 (0x0004)
};

// ScriptStruct: BendGame.XpecRotateToActorData
struct XpecRotateToActorData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* m_pTarget; // 0x0028 (0x0008)
    uint8_t m_vTargetVector[0xC]; // 0x0030 (0x000C)
    float m_fTolerableAngle; // 0x003C (0x0004)
    float m_fMaxAngleToRotateHead; // 0x0040 (0x0004)
    float m_fAngle; // 0x0044 (0x0004)
    bool m_bAlignWith; // 0x0048 (0x0001)
};

// ScriptStruct: BendGame.XpecMoveToActorData
struct XpecMoveToActorData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    int32_t m_iRetry; // 0x0028 (0x0004)
    bool m_bDelayed; // 0x002C (0x0001)
    uint8_t Pad_1[0x3]; // 0x002D (0x0003)
    class UObject* m_pTarget; // 0x0030 (0x0008)
    uint8_t Pad_2[0x8]; // 0x0038 (0x0008)
    uint8_t m_TargetTransform[0x30]; // 0x0040 (0x0030)
    float m_fSpeed; // 0x0070 (0x0004)
    bool m_bApplySpeedMultiply; // 0x0074 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0075 (0x0003)
    float m_fRadius; // 0x0078 (0x0004)
    float m_fApproachOuterRadius; // 0x007C (0x0004)
    bool m_bSlowApproach; // 0x0080 (0x0001)
    bool m_bSkipDefendZoneCheck; // 0x0081 (0x0001)
    bool m_bEnableTurnToIdleInMovement; // 0x0082 (0x0001)
    bool m_bEnableMoveToIdleAnchor; // 0x0083 (0x0001)
    float m_fAvoidanceMaxWaitTime; // 0x0084 (0x0004)
    float m_fChangeWeaponDistance; // 0x0088 (0x0004)
    float m_fChangeWeaponPlayRate; // 0x008C (0x0004)
    uint8_t m_eWeaponType; // 0x0090 (0x0001)
};

// ScriptStruct: BendGame.XpecLookAtData
struct XpecLookAtData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* m_pTarget; // 0x0028 (0x0008)
    bool m_bOverrideAngleLimits; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    uint8_t m_rAngleLimitOverride[0xC]; // 0x0034 (0x000C)
    uint8_t m_eParitialSet; // 0x0040 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0041 (0x0003)
    float m_fInterpolationRate; // 0x0044 (0x0004)
    float m_fDuration; // 0x0048 (0x0004)
};

// ScriptStruct: BendGame.XpecPlayConversationData
struct XpecPlayConversationData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* m_SoundClass; // 0x0028 (0x0008)
    struct TArray<uint8_t> m_ConversationData; // 0x0030 (0x0010)
};

// ScriptStruct: BendGame.XpecPlayVOData
struct XpecPlayVOData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    struct FName m_VOName; // 0x0028 (0x0008)
    bool m_bResponse; // 0x0030 (0x0001)
};

// ScriptStruct: BendGame.XpecPerformActionData
struct XpecPerformActionData : public XpecScenarioData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    uint8_t m_eType; // 0x0028 (0x0001)
    uint8_t m_eWeaponType; // 0x0029 (0x0001)
    uint8_t Pad_1[0x6]; // 0x002A (0x0006)
    uint8_t m_action[0xA0]; // 0x0030 (0x00A0)
    uint8_t m_anchorTransform[0x30]; // 0x00D0 (0x0030)
    bool m_bEnableFootLocking; // 0x0100 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0101 (0x0007)
    struct FName m_groupName; // 0x0108 (0x0008)
    float m_animCancelTime; // 0x0110 (0x0004)
};

// ScriptStruct: BendGame.XpecEventDesc
struct XpecEventDesc : public XpecDLink {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    struct FName m_eventName; // 0x0018 (0x0008)
    struct FName m_ScenarioName; // 0x0020 (0x0008)
    float m_fDistance; // 0x0028 (0x0004)
    float m_fGroupCooldown; // 0x002C (0x0004)
    struct TArray<uint8_t> m_actors; // 0x0030 (0x0010)
    bool m_bDoRandomWaitTime; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    float m_fRandomWaitTimeMax; // 0x0044 (0x0004)
    float m_fRandomWaitTimeMin; // 0x0048 (0x0004)
};

// ScriptStruct: BendGame.XpecScenarioActorFilter
struct XpecScenarioActorFilter {
    struct TArray<uint8_t> m_candidates; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.XpecFavoredPOIForPawn
struct XpecFavoredPOIForPawn : public TableRowBase {
    struct FName m_PawnName; // 0x0000 (0x0008)
    struct FName m_ZoneID; // 0x0008 (0x0008)
    struct FName m_POIName; // 0x0010 (0x0008)
    bool m_bExcludeOthers; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.XpecAnimSequenceData
struct XpecAnimSequenceData : public TableRowBase {
    struct FName m_groupName; // 0x0000 (0x0008)
    uint8_t m_eActorType; // 0x0008 (0x0001)
    uint8_t m_eActorGender; // 0x0009 (0x0001)
    uint8_t m_eWeaponType; // 0x000A (0x0001)
    uint8_t Pad_0[0x5]; // 0x000B (0x0005)
    class UObject* m_pSequence; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.XpecSpawnerInfo
struct XpecSpawnerInfo : public TableRowBase {
    struct FName pawnName; // 0x0000 (0x0008)
    bool enableMorning; // 0x0008 (0x0001)
    bool enableAfternoon; // 0x0009 (0x0001)
    bool enableEvening; // 0x000A (0x0001)
    bool enableNight; // 0x000B (0x0001)
};

// ScriptStruct: BendGame.XpecDebugTextData
struct XpecDebugTextData {
    bool IsVisible; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName DisplayText; // 0x0008 (0x0008)
    uint8_t TextLocation[0xC]; // 0x0010 (0x000C)
    uint8_t TextColor[0x4]; // 0x001C (0x0004)
};

// ScriptStruct: BendGame.ExplosionVictimData
struct ExplosionVictimData {
};

// ScriptStruct: BendGame.NearTargetData
struct NearTargetData {
};

// ScriptStruct: BendGame.CinCinematicPropOverride
struct CinCinematicPropOverride : public CinCinematicOverride {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    bool TurnOffLights; // 0x0008 (0x0001)
    bool TurnOffEmissive; // 0x0009 (0x0001)
    bool TurnOffLightCards; // 0x000A (0x0001)
    bool TurnOffVolumeCones; // 0x000B (0x0001)
};

// ScriptStruct: BendGame.AudioFormatDynamicRangeDef
struct AudioFormatDynamicRangeDef {
    uint8_t Format; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> DynamicRanges; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.AudioDynamicRangeDef
struct AudioDynamicRangeDef {
    uint8_t Range; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText Text; // 0x0008 (0x0018)
    struct FString SubMixName; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.PlayerProfileTitleDescription
struct PlayerProfileTitleDescription {
    struct FText Title; // 0x0000 (0x0018)
    struct FText Description; // 0x0018 (0x0018)
};

// ScriptStruct: BendGame.PlayerNamedProfileMenuCategory
struct PlayerNamedProfileMenuCategory {
    struct FText Name; // 0x0000 (0x0018)
    uint8_t Type; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> ProfileEntris; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.PlayerNamedProfileMenuEntry
struct PlayerNamedProfileMenuEntry {
    struct FText ProfileOptionName; // 0x0000 (0x0018)
    uint8_t ProfileOption; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.PlayerProfileSubMenuClass
struct PlayerProfileSubMenuClass {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t ProfileOption; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct FText Name; // 0x0008 (0x0018)
    uint8_t SelectionDetails[0x20]; // 0x0020 (0x0020)
};

// ScriptStruct: BendGame.MenuElementSelectionDetails
struct MenuElementSelectionDetails {
    struct FText DisabledText; // 0x0000 (0x0018)
    bool bDisabled; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.PlayerSaveProfileMenuCategory
struct PlayerSaveProfileMenuCategory {
    struct FText Name; // 0x0000 (0x0018)
    uint8_t Type; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> ProfileOptions; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.PlayerSaveProfileMenuEntry
struct PlayerSaveProfileMenuEntry : public PlayerSaveProfileEntry {
    uint8_t Pad_0[0x50]; // 0x0000 (0x0050)
    float OriginalValue; // 0x0050 (0x0004)
    bool bIsMenuOnlyOption; // 0x0054 (0x0001)
    bool bUseProgressBar; // 0x0054 (0x0001)
};

// ScriptStruct: BendGame.PlayerSaveProfileEntry
struct PlayerSaveProfileEntry {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t Type; // 0x0008 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0009 (0x0007)
    struct FText Name; // 0x0010 (0x0018)
    float MinValue; // 0x0028 (0x0004)
    float MaxValue; // 0x002C (0x0004)
    float StepSize; // 0x0030 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0034 (0x0004)
    struct TArray<uint8_t> TextFields; // 0x0038 (0x0010)
    float DefaultValue; // 0x0048 (0x0004)
    float Value; // 0x004C (0x0004)
};

// ScriptStruct: BendGame.PlayerSaveProfileCategory
struct PlayerSaveProfileCategory {
    struct TArray<uint8_t> Entries; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.PlayerSerializeProfileEntry
struct PlayerSerializeProfileEntry {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Value; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.PlayerProfileDisabledEntry
struct PlayerProfileDisabledEntry {
    uint8_t ProfileOption; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText DisabledText; // 0x0008 (0x0018)
};

// ScriptStruct: BendGame.SavePlayerStatTracker
struct SavePlayerStatTracker {
    int32_t FreakerKills; // 0x0000 (0x0004)
    int32_t MeleeKills; // 0x0004 (0x0004)
    int32_t Headshots; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName HeadBoneName; // 0x0010 (0x0008)
    int32_t StealthTakedowns; // 0x0018 (0x0004)
    int32_t NearFatalEncounters; // 0x001C (0x0004)
    int32_t MedkitsUsed; // 0x0020 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0024 (0x0004)
    struct TArray<uint8_t> MedkitNameDefines; // 0x0028 (0x0010)
    int32_t BulletsFired; // 0x0038 (0x0004)
    int32_t BulletsPawnImpacted; // 0x003C (0x0004)
    float Accuracy; // 0x0040 (0x0004)
};

// ScriptStruct: BendGame.SavePlayerProfileLastBikeLoadout
struct SavePlayerProfileLastBikeLoadout {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    struct TArray<uint8_t> _bp; // 0x0028 (0x0010)
    struct FName _pt; // 0x0038 (0x0008)
    struct FName _bt; // 0x0040 (0x0008)
    struct FName _tt; // 0x0048 (0x0008)
};

// ScriptStruct: BendGame.SavePlayerProfileVehicleDetails
struct SavePlayerProfileVehicleDetails {
    struct TArray<uint8_t> BikePartVersion; // 0x0000 (0x0010)
    struct TArray<uint8_t> BikeSkins; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.CorpseTypeData
struct CorpseTypeData {
    uint8_t CorpseType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> CorpseStates; // 0x0008 (0x0010)
    bool bOverrideLifespan; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    uint8_t CorpseLifespan[0x8]; // 0x0020 (0x0008)
};

// ScriptStruct: BendGame.CorpseDecayStageData
struct CorpseDecayStageData {
    uint8_t StageTriggerTime[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> StageLooks; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendSplashEffectInstance
struct BendSplashEffectInstance {
    struct FName BoneName; // 0x0000 (0x0008)
    class UObject* SplashingParticleComponent; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendSplashEffect
struct BendSplashEffect : public BendWaterEffect {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    float SpeedNormalizer; // 0x0028 (0x0004)
    float SpeedThreshold0To1; // 0x002C (0x0004)
    uint8_t LocalRotation[0xC]; // 0x0030 (0x000C)
};

// ScriptStruct: BendGame.BendWaterEffect
struct BendWaterEffect {
    float IntensityThreshold; // 0x0000 (0x0004)
    uint8_t WaterDepthInputRange[0x8]; // 0x0004 (0x0008)
    uint8_t WaterDepthIntensityMultiplier[0x8]; // 0x000C (0x0008)
    float WaterDepthMax; // 0x0014 (0x0004)
    float WaterDepthAdjustedDistanceMax; // 0x0018 (0x0004)
    uint8_t Offset[0xC]; // 0x001C (0x000C)
};

// ScriptStruct: BendGame.BendIKEffectSettings
struct BendIKEffectSettings {
    bool bActive; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float TouchThresholdSlow; // 0x0004 (0x0004)
    float TouchThresholdFast; // 0x0008 (0x0004)
    float SpeedThreshold; // 0x000C (0x0004)
    bool bCueAsPlayer; // 0x0010 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0011 (0x0007)
    uint8_t TouchCue[0x48]; // 0x0018 (0x0048)
    uint8_t DragCue[0x48]; // 0x0060 (0x0048)
    uint8_t LiftCue[0x48]; // 0x00A8 (0x0048)
    float CoolDownDuration; // 0x00F0 (0x0004)
    float DragCoolDownDuration; // 0x00F4 (0x0004)
    uint8_t RotationSpaceAnimNotify; // 0x00F8 (0x0001)
    bool bDropAnimNotify; // 0x00F9 (0x0001)
    uint8_t Pad_2[0x2]; // 0x00FA (0x0002)
    uint8_t AnimNotifyWaterEffect[0x28]; // 0x00FC (0x0028)
    uint8_t BodySplashEffect[0x3C]; // 0x0124 (0x003C)
    uint8_t FootSplashEffect[0x3C]; // 0x0160 (0x003C)
};

// ScriptStruct: BendGame.BendIKEffectCue
struct BendIKEffectCue {
    struct FName FXName; // 0x0000 (0x0008)
    uint8_t SpeedToIntensity[0x8]; // 0x0008 (0x0008)
    uint8_t IntensityRange[0x8]; // 0x0010 (0x0008)
    uint8_t WaterEffect[0x28]; // 0x0018 (0x0028)
    bool bAttach; // 0x0040 (0x0001)
    bool bFilterAnimNotify; // 0x0040 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0041 (0x0003)
    uint8_t RotationSpace; // 0x0044 (0x0001)
};

// ScriptStruct: BendGame.SplineBlockerSegmentInfo
struct SplineBlockerSegmentInfo {
    struct FName mLevelOutermostName; // 0x0000 (0x0008)
    int32_t mBendSegmentID; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.BendMeleeAttacks
struct BendMeleeAttacks {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    uint8_t WeaponType; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    uint8_t HighAttack[0x30]; // 0x0008 (0x0030)
    uint8_t MiddleAttack[0x30]; // 0x0038 (0x0030)
    uint8_t LowAttack[0x30]; // 0x0068 (0x0030)
    uint8_t GroundAttack[0x30]; // 0x0098 (0x0030)
    uint8_t OverheadAttack[0x30]; // 0x00C8 (0x0030)
    struct TArray<uint8_t> MeleePairedAnimations; // 0x00F8 (0x0010)
    class UObject* MissSwingRight; // 0x0108 (0x0008)
    class UObject* MissSwingLeft; // 0x0110 (0x0008)
    class UObject* MissSwingOverhead; // 0x0118 (0x0008)
};

// ScriptStruct: BendGame.MeleePairedAnimBasedOnFactionType
struct MeleePairedAnimBasedOnFactionType {
    struct TArray<uint8_t> FactionType; // 0x0000 (0x0010)
    struct TArray<uint8_t> RightKill; // 0x0010 (0x0010)
    struct TArray<uint8_t> LeftKill; // 0x0020 (0x0010)
    struct TArray<uint8_t> OverheadKill; // 0x0030 (0x0010)
    struct TArray<uint8_t> MeleeKillWithBrokenWeapon; // 0x0040 (0x0010)
};

// ScriptStruct: BendGame.MeleeBrokenWeaponPairedAnimSeqs
struct MeleeBrokenWeaponPairedAnimSeqs {
    struct FName LeaveWeaponSocket; // 0x0000 (0x0008)
    uint8_t PairedAnimSeq[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.MeleePairedAnimSeqs
struct MeleePairedAnimSeqs {
    class UObject* AttackerAnimation; // 0x0000 (0x0008)
    class UObject* AttackedAnimation; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendMeleeAttackGroup
struct BendMeleeAttackGroup {
    struct TArray<uint8_t> Right; // 0x0000 (0x0010)
    struct TArray<uint8_t> Left; // 0x0010 (0x0010)
    struct TArray<uint8_t> CrossOver; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.MeleeMove
struct MeleeMove {
    struct FName MoveName; // 0x0000 (0x0008)
    class UObject* AttackAnimation; // 0x0008 (0x0008)
    float QuickReleaseTime; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FName QuickReleaseMove; // 0x0018 (0x0008)
    struct FName NextMoveName; // 0x0020 (0x0008)
    float NextMoveBufferTime; // 0x0028 (0x0004)
    float NextMoveWindowTime; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.StreamingOverrideSettings
struct StreamingOverrideSettings {
    uint8_t OverrideType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint64_t TriggerVolume; // 0x0004 (0x0008)
    uint8_t Pad_1[0x4]; // 0x000C (0x0004)
    struct TArray<uint8_t> StreamingOverrideCommands; // 0x0010 (0x0010)
    uint8_t StreamingLevelActions[0x18]; // 0x0020 (0x0018)
    bool bUsingOverrideVolume; // 0x0038 (0x0001)
};

// ScriptStruct: BendGame.StreamingLevelsAction
struct StreamingLevelsAction {
    struct TArray<uint8_t> LevelNames; // 0x0000 (0x0010)
    bool LoadAndSetInvisible; // 0x0010 (0x0001)
    bool BlockFromLoading; // 0x0011 (0x0001)
};

// ScriptStruct: BendGame.StreamingOverrideCommand
struct StreamingOverrideCommand {
    uint8_t StreamingGroupID; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t LOD; // 0x0004 (0x0004)
    float LOD_Distance; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.StreamingOverrideAction
struct StreamingOverrideAction {
    uint64_t StreamOverrideOwner; // 0x0000 (0x0008)
    uint8_t StreamOverrideSettings[0x40]; // 0x0008 (0x0040)
};

// ScriptStruct: BendGame.SurfaceTypeTireMarkData
struct SurfaceTypeTireMarkData {
    class UObject* DecalMaterial; // 0x0000 (0x0008)
    bool PlaceOnlyWhenSkidding; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.SurfaceTypeFxData
struct SurfaceTypeFxData {
    struct FName BlueprintFXName; // 0x0000 (0x0008)
    class UObject* PlayerSoundFX; // 0x0008 (0x0008)
    class UObject* FriendSoundFX; // 0x0010 (0x0008)
    class UObject* SoundFX; // 0x0018 (0x0008)
    class UObject* ParticleFX; // 0x0020 (0x0008)
    uint8_t DecalFX[0x28]; // 0x0028 (0x0028)
    struct TArray<uint8_t> Decals; // 0x0050 (0x0010)
    uint8_t DebugColor[0x10]; // 0x0060 (0x0010)
    bool DoValidate; // 0x0070 (0x0001)
    bool IsValid; // 0x0070 (0x0001)
};

// ScriptStruct: BendGame.SurfaceTypeDecal
struct SurfaceTypeDecal : public DecalData {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    float DecalAspect; // 0x0028 (0x0004)
    float DecalMinAspect; // 0x002C (0x0004)
    uint8_t DecalRotation[0xC]; // 0x0030 (0x000C)
    uint8_t DecalOffset[0xC]; // 0x003C (0x000C)
    struct FName DecalKey; // 0x0048 (0x0008)
};

// ScriptStruct: BendGame.SurfaceTypeFxData_Simple
struct SurfaceTypeFxData_Simple {
    class UObject* ParticleFX; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.DebugSurfaceTypeData
struct DebugSurfaceTypeData {
};

// ScriptStruct: BendGame.WheelTireMarkData
struct WheelTireMarkData {
};

// ScriptStruct: BendGame.BendTutorialMultiLine
struct BendTutorialMultiLine {
    struct FName TutorialName; // 0x0000 (0x0008)
    struct FText Title; // 0x0008 (0x0018)
    struct FText Description; // 0x0020 (0x0018)
    uint8_t ImageAsset[0x20]; // 0x0038 (0x0020)
    class UObject* Image; // 0x0058 (0x0008)
};

// ScriptStruct: BendGame.BendTutorialSimple
struct BendTutorialSimple {
    struct FName TutorialName; // 0x0000 (0x0008)
    struct FText Title; // 0x0008 (0x0018)
    struct FText Description; // 0x0020 (0x0018)
};

// ScriptStruct: BendGame.Bend_UI_ButtonMarkup
struct Bend_UI_ButtonMarkup : public TableRowBase {
    class UObject* ButtonTexture; // 0x0000 (0x0008)
    uint8_t ButtonEnum; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FString ButtonString; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.InventoryMaterialGroup
struct InventoryMaterialGroup {
    struct FName Name; // 0x0000 (0x0008)
    struct TArray<uint8_t> Materials; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryBikePartMaterial
struct InventoryBikePartMaterial {
    uint8_t PartTag[0x8]; // 0x0000 (0x0008)
    int32_t MaterialIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t Material[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: BendGame.InventoryBikeSkinDef
struct InventoryBikeSkinDef {
    uint8_t ThemeTag[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> PartGroups; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryBikePartGroup
struct InventoryBikePartGroup {
    struct FName MaterialGroup; // 0x0000 (0x0008)
    uint8_t Tags[0x20]; // 0x0008 (0x0020)
    struct TArray<uint8_t> Params; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.InventoryMaterialParam
struct InventoryMaterialParam {
    struct FName Param; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.InventoryBikeSkin
struct InventoryBikeSkin {
    uint8_t SkinTag[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> Parts; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BikeSkin
struct BikeSkin {
    uint8_t SkinTag[0x8]; // 0x0000 (0x0008)
    struct FName SkinKey; // 0x0008 (0x0008)
    struct TArray<uint8_t> Materials; // 0x0010 (0x0010)
    struct TArray<uint8_t> PartParams; // 0x0020 (0x0010)
    uint8_t Decal[0x18]; // 0x0030 (0x0018)
    class UObject* DecalTexture; // 0x0048 (0x0008)
};

// ScriptStruct: BendGame.InventoryBikePartCustomDecal
struct InventoryBikePartCustomDecal {
    uint8_t DecalTag[0x8]; // 0x0000 (0x0008)
    uint8_t DecalTint[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryTagMaterialParam
struct InventoryTagMaterialParam : public InventoryMaterialParam {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t PartTags[0x20]; // 0x0010 (0x0020)
};

// ScriptStruct: BendGame.InventoryBikePartMaterialInstance
struct InventoryBikePartMaterialInstance {
    uint8_t PartMaterial[0x30]; // 0x0000 (0x0030)
    class UObject* MaterialInstance; // 0x0030 (0x0008)
};

// ScriptStruct: BendGame.InventoryBikePartDecal
struct InventoryBikePartDecal {
    uint8_t DecalTag[0x8]; // 0x0000 (0x0008)
    uint8_t Decal[0x20]; // 0x0008 (0x0020)
    struct TArray<uint8_t> DecalParams; // 0x0028 (0x0010)
};

// ScriptStruct: BendGame.InventoryBikePartStorageEquipSlot
struct InventoryBikePartStorageEquipSlot {
    uint8_t PartType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* AttachmentSpecs; // 0x0008 (0x0008)
    uint8_t Part[0x40]; // 0x0010 (0x0040)
};

// ScriptStruct: BendGame.UnlockablePatch
struct UnlockablePatch {
    uint8_t UnlockedFrom; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.UnlockableRing
struct UnlockableRing {
    uint8_t UnlockedFrom; // 0x0000 (0x0001)
};

// ScriptStruct: BendGame.UnlockableBikePart
struct UnlockableBikePart {
    uint8_t UnlockedFrom; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
    uint8_t FallbackBikePartTag[0x8]; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.UnlockableBikeSkin
struct UnlockableBikeSkin {
    uint8_t UnlockedFrom; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
    struct TArray<uint8_t> FallbackSkinTags; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.UnlockableWeapon
struct UnlockableWeapon {
    uint8_t UnlockedFrom; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Tag[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.UnlockableSkill
struct UnlockableSkill {
    uint8_t UnlockedFrom; // 0x0000 (0x0001)
    uint8_t SkillID; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct FName SkillName; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.MapMarkerWidgetDetails
struct MapMarkerWidgetDetails {
    class UObject* MapLocation; // 0x0000 (0x0008)
    class UObject* MapLocationOwner; // 0x0008 (0x0008)
    struct FString NestingZoneStatus; // 0x0010 (0x0010)
    int32_t NestingZoneStatusCurrent; // 0x0020 (0x0004)
    int32_t NestingZoneStatusTotal; // 0x0024 (0x0004)
    uint8_t LocationImageAssetPtr[0x20]; // 0x0028 (0x0020)
    bool bFastTravelBlocked; // 0x0048 (0x0001)
    bool bHasLocationImage; // 0x0048 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0049 (0x0007)
    uint8_t FastTravelLocation[0x70]; // 0x0050 (0x0070)
    uint8_t MapRolloverType; // 0x00C0 (0x0001)
    uint8_t ObjectiveVisualType; // 0x00C1 (0x0001)
    uint8_t ObjectiveCategories; // 0x00C2 (0x0001)
    uint8_t Pad_1[0x1]; // 0x00C3 (0x0001)
    float PathDistance; // 0x00C4 (0x0004)
};

// ScriptStruct: BendGame.MapMenuInputDetails
struct MapMenuInputDetails {
    uint8_t LocationSelection[0x18]; // 0x0000 (0x0018)
    uint8_t Zoom[0x18]; // 0x0018 (0x0018)
    uint8_t ScrollX[0x18]; // 0x0030 (0x0018)
    uint8_t ScrollY[0x18]; // 0x0048 (0x0018)
};

// ScriptStruct: BendGame.SaveGameMenuItemData
struct SaveGameMenuItemData {
    class UObject* Thumbnail; // 0x0000 (0x0008)
    struct FText SaveName; // 0x0008 (0x0018)
    struct FText SaveDate; // 0x0020 (0x0018)
    struct FText SaveTime; // 0x0038 (0x0018)
    struct FText SaveMission; // 0x0050 (0x0018)
    struct FString SaveSlot; // 0x0068 (0x0010)
};

// ScriptStruct: BendGame.PerfTest
struct PerfTest {
    float Scale; // 0x0000 (0x0004)
    int32_t Quality; // 0x0004 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0008 (0x000C)
    float FPS; // 0x0014 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleGroundSufaceBumpinessLayer
struct BendVehicleGroundSufaceBumpinessLayer {
    float BumpHeight; // 0x0000 (0x0004)
    float BumpSpacing; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleEngineSpecs_Struct
struct BendVehicleEngineSpecs_Struct : public BendVehicleMeshAttachmentSpecs_Struct {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    float MaxSpeed; // 0x0038 (0x0004)
    float FuelConsumption; // 0x003C (0x0004)
};

// ScriptStruct: BendGame.BendVehicleFuelTankSpecs_Struct
struct BendVehicleFuelTankSpecs_Struct : public BendVehicleMeshAttachmentSpecs_Struct {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    float FuelCapacity; // 0x0038 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleNitrousSpecs_Struct
struct BendVehicleNitrousSpecs_Struct : public BendVehicleMeshAttachmentSpecs_Struct {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    float MaxSpeed; // 0x0038 (0x0004)
    float MaxSpeedScale; // 0x003C (0x0004)
    float DepletionRate; // 0x0040 (0x0004)
    float RechargeRate; // 0x0044 (0x0004)
    float MinReserveRequiredForActivation0To1; // 0x0048 (0x0004)
    float MinTimeBetweenActivations; // 0x004C (0x0004)
    float FuelConsumptionMultiplier; // 0x0050 (0x0004)
};

// ScriptStruct: BendGame.BendVehicleStorageSpecs_Struct
struct BendVehicleStorageSpecs_Struct : public BendVehicleMeshAttachmentSpecs_Struct {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    int32_t StorageCapacity; // 0x0038 (0x0004)
};

// ScriptStruct: BendGame.BendVehiclePartLoadout_Range
struct BendVehiclePartLoadout_Range {
    float Min; // 0x0000 (0x0004)
    float Max; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.BendVehiclePartLoadout_Tier
struct BendVehiclePartLoadout_Tier {
    uint8_t Tier; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> Factions; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendVehiclePartLoadout_Faction
struct BendVehiclePartLoadout_Faction {
    uint8_t Faction; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> PartTypes; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendVehiclePartLoadout_PartType
struct BendVehiclePartLoadout_PartType {
    uint8_t PartType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> PartVariations; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendVehiclePartUpgradeVersions
struct BendVehiclePartUpgradeVersions {
    uint8_t PartType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> Versions_NEW; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.BendSeatSetup
struct BendSeatSetup {
    struct FName SeatName; // 0x0000 (0x0008)
    struct FName SeatSocketName; // 0x0008 (0x0008)
    class UObject* AnimationSet; // 0x0010 (0x0008)
    bool bIsDriverSeat; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.BendVehicleSkillInfoForSkillLevel
struct BendVehicleSkillInfoForSkillLevel {
    float MaxSpeedScale; // 0x0000 (0x0004)
    float FrontTireFrictionScale; // 0x0004 (0x0004)
    float RearTireFrictionScale; // 0x0008 (0x0004)
    float FrontTireDragScale; // 0x000C (0x0004)
    float RearTireDragScale; // 0x0010 (0x0004)
    float ThrottleScale_MiniDrift; // 0x0014 (0x0004)
    uint8_t SpeedLimiterMethod_MiniDrift; // 0x0018 (0x0001)
};

// ScriptStruct: BendGame.BendTireEffect
struct BendTireEffect : public BendSplashEffect {
};

// ScriptStruct: BendGame.VocalFXTypeData
struct VocalFXTypeData {
    struct FName BlueprintFXName; // 0x0000 (0x0008)
    struct FName SoundFXName; // 0x0008 (0x0008)
    class UObject* ParticleFX; // 0x0010 (0x0008)
    float Priority; // 0x0018 (0x0004)
    bool PlayWhenDead; // 0x001C (0x0001)
};

// ScriptStruct: BendGame.BendWarningMemberInfo
struct BendWarningMemberInfo {
    uint64_t Component; // 0x0000 (0x0008)
    float DistanceToTarget; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.WGParticleFxData
struct WGParticleFxData {
    uint8_t TypeOfSurface; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* ParticleFX; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.ActivityCardEvent
struct ActivityCardEvent {
};

// ScriptStruct: BendGame.InstantWeaponData
struct InstantWeaponData {
    class UClass* ImpactTemplate; // 0x0000 (0x0008)
    float WeaponSpread; // 0x0008 (0x0004)
    float TargetingSpreadMod; // 0x000C (0x0004)
    float FiringSpreadIncrement; // 0x0010 (0x0004)
    float FiringSpreadMax; // 0x0014 (0x0004)
    float WeaponRange; // 0x0018 (0x0004)
    int32_t HitDamage; // 0x001C (0x0004)
    class UClass* DamageType; // 0x0020 (0x0008)
    float ClientSideHitLeeway; // 0x0028 (0x0004)
    float AllowedViewDotHitDir; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.InstantHitInfo
struct InstantHitInfo {
    uint8_t Origin[0xC]; // 0x0000 (0x000C)
    float ReticleSpread; // 0x000C (0x0004)
    int32_t RandomSeed; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.PairedTrapAnimData
struct PairedTrapAnimData {
    class UObject* CharacterAnimation; // 0x0000 (0x0008)
    class UObject* TrapAnimation; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.TrapPlacementAnims
struct TrapPlacementAnims {
    class UObject* WallHighPlacementMontage; // 0x0000 (0x0008)
    class UObject* WallLowPlacementMontage; // 0x0008 (0x0008)
    class UObject* GroundPlacementMontage; // 0x0010 (0x0008)
    class UObject* TreePlacementMontage; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.XpecScenarioActorInfo
struct XpecScenarioActorInfo {
    class UObject* m_pPawn; // 0x0000 (0x0008)
    class UObject* m_pSlot; // 0x0008 (0x0008)
    int32_t m_iFirstCommandIndex; // 0x0010 (0x0004)
    int32_t m_iCurrentCommandIndex; // 0x0014 (0x0004)
    int32_t m_iGotoCommandIndex; // 0x0018 (0x0004)
    float m_fCurrentCommandTime; // 0x001C (0x0004)
    int32_t m_iActorIndex; // 0x0020 (0x0004)
    int32_t m_iHP; // 0x0024 (0x0004)
    uint8_t m_eState; // 0x0028 (0x0001)
    uint8_t m_eResult; // 0x0029 (0x0001)
    uint8_t m_eInterruptLevel; // 0x002A (0x0001)
    uint8_t Pad_0[0x1]; // 0x002B (0x0001)
    int32_t m_iLock; // 0x002C (0x0004)
    int32_t m_iCheckpoint; // 0x0030 (0x0004)
    bool m_bReleased; // 0x0034 (0x0001)
    bool m_bEnableLowLOD; // 0x0035 (0x0001)
    bool m_bEventScenarioFailed; // 0x0036 (0x0001)
    bool m_bIdle; // 0x0037 (0x0001)
    struct TArray<uint8_t> m_commandIndexStack; // 0x0038 (0x0010)
};

// ScriptStruct: BendGame.BendNestSpawnType
struct BendNestSpawnType {
    uint8_t SpawnType[0x420]; // 0x0000 (0x0420)
    uint8_t SpawnCountRange[0x8]; // 0x0420 (0x0008)
    uint8_t SwarmerCountRange[0x8]; // 0x0428 (0x0008)
};

// ScriptStruct: BendGame.BendCrowdFullFledgedPawnManager
struct BendCrowdFullFledgedPawnManager {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    struct TArray<uint8_t> FullFledgedPawns_StrongReferences; // 0x0010 (0x0010)
    uint8_t Pad_1[0xA0]; // 0x0020 (0x00A0)
    class UClass* Class; // 0x00C0 (0x0008)
    class UClass* ControllerClass; // 0x00C8 (0x0008)
};

// ScriptStruct: BendGame.BendCrowdFullFledgedPawn_StrongReferences
struct BendCrowdFullFledgedPawn_StrongReferences {
    class UObject* Pawn; // 0x0000 (0x0008)
    class UObject* Controller; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.BendCrowd_PostEndPhysics_PreStartPhysics_TickFunction
struct BendCrowd_PostEndPhysics_PreStartPhysics_TickFunction : public TickFunction {
};

// ScriptStruct: BendGame.XpecHourInterval
struct XpecHourInterval {
    int32_t startHour; // 0x0000 (0x0004)
    int32_t endHour; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.XpecPawnToZoneIDMappings
struct XpecPawnToZoneIDMappings {
    struct FName pawnName; // 0x0000 (0x0008)
    struct FName zoneIDByTimeZones; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.XpecZoneDismissLocation
struct XpecZoneDismissLocation {
    struct FName m_ZoneID; // 0x0000 (0x0008)
    uint8_t m_DismissLocationReference[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.XpecShiftData
struct XpecShiftData {
    int32_t startHour; // 0x0000 (0x0004)
    int32_t endHour; // 0x0004 (0x0004)
    struct TArray<uint8_t> upAreaPawnName; // 0x0008 (0x0010)
    struct TArray<uint8_t> downAreaPawnName; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.TalkingDummyCandidate
struct TalkingDummyCandidate {
    class UObject* talkingPawn; // 0x0000 (0x0008)
    struct FName voTag; // 0x0008 (0x0008)
    struct FName meatVOTag; // 0x0010 (0x0008)
    struct FName greetVOTag; // 0x0018 (0x0008)
    class UObject* SoundClass; // 0x0020 (0x0008)
};

// ScriptStruct: BendGame.TalkingDummySpawnerArray
struct TalkingDummySpawnerArray {
    class UObject* talkingPOI; // 0x0000 (0x0008)
    struct TArray<uint8_t> Spawners; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.CollectiblesMenuSoundBank
struct CollectiblesMenuSoundBank {
    class UObject* SoundClass; // 0x0000 (0x0008)
};

// ScriptStruct: BendGame.CXArcadeSubbobjectiveTargetEliminationConfig
struct CXArcadeSubbobjectiveTargetEliminationConfig {
    struct TArray<uint8_t> EnemiesToSpawn; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.CX_ModifierInfo
struct CX_ModifierInfo {
    float ScoreMultiplier; // 0x0000 (0x0004)
    int32_t UnlockAtLevel; // 0x0004 (0x0004)
};

// ScriptStruct: BendGame.CXExplodingInformation
struct CXExplodingInformation {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float MinExplosionRadius; // 0x0004 (0x0004)
    float MaxExplosionRadius; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.ViralEnemyInformation
struct ViralEnemyInformation {
    uint8_t OriginalType; // 0x0000 (0x0001)
    uint8_t NewType; // 0x0001 (0x0001)
};

// ScriptStruct: BendGame.BuildInfoItem
struct BuildInfoItem {
    struct FString Name; // 0x0000 (0x0010)
    struct FString Data; // 0x0010 (0x0010)
    uint8_t Color[0x4]; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.DLCCompleteChallengeData
struct DLCCompleteChallengeData {
    struct FText ChallengeName; // 0x0000 (0x0018)
    float GlobalRepAwarded; // 0x0018 (0x0004)
    float GlobalRepCurrent; // 0x001C (0x0004)
    float GlobalRepMax; // 0x0020 (0x0004)
    float RepAwarded; // 0x0024 (0x0004)
    float RepCurrent; // 0x0028 (0x0004)
    float RepMax; // 0x002C (0x0004)
    float CreditsAwarded; // 0x0030 (0x0004)
    float CreditsCurrent; // 0x0034 (0x0004)
    float CreditsMax; // 0x0038 (0x0004)
    int32_t TotalScore; // 0x003C (0x0004)
    struct TArray<uint8_t> SubobjectiveTitles; // 0x0040 (0x0010)
    struct TArray<uint8_t> SubobjectiveScores; // 0x0050 (0x0010)
    struct TArray<uint8_t> SubobjectiveAwards; // 0x0060 (0x0010)
    uint8_t TotalTime[0x8]; // 0x0070 (0x0008)
};

// ScriptStruct: BendGame.DLCGridWidgetData
struct DLCGridWidgetData {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    class UClass* ItemWidgetClass; // 0x0008 (0x0008)
    bool IsLocked; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.HungActorData
struct HungActorData {
    int32_t RotationSeed; // 0x0000 (0x0004)
    int32_t SocketAlongCable; // 0x0004 (0x0004)
    class UObject* HungActor; // 0x0008 (0x0008)
    int32_t HungActorStaticMeshComponentIndex; // 0x0010 (0x0004)
    int32_t HungActorStaticMeshComponentSocket; // 0x0014 (0x0004)
    uint8_t HungActorRotationOffset[0xC]; // 0x0018 (0x000C)
};

// ScriptStruct: BendGame.GameDebugMenuEntry
struct GameDebugMenuEntry {
    struct FString DebugMenuName; // 0x0000 (0x0010)
    uint8_t DebugMenuClass[0x20]; // 0x0010 (0x0020)
    class UObject* GameDebugMenu; // 0x0030 (0x0008)
};

// ScriptStruct: BendGame.DebugOptionDetails
struct DebugOptionDetails {
    struct FString Name; // 0x0000 (0x0010)
    struct FString EnumName; // 0x0010 (0x0010)
    float InitialValue; // 0x0020 (0x0004)
    float MinValue; // 0x0024 (0x0004)
    float MaxValue; // 0x0028 (0x0004)
    float StepValue; // 0x002C (0x0004)
};

// ScriptStruct: BendGame.InventoryManagerItems
struct InventoryManagerItems {
    struct TArray<uint8_t> ItemArray; // 0x0000 (0x0010)
    uint8_t ItemMap[0x50]; // 0x0010 (0x0050)
};

// ScriptStruct: BendGame.InventoryItemArray
struct InventoryItemArray {
    struct TArray<uint8_t> Items; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InventoryManagerItemTags
struct InventoryManagerItemTags {
};

// ScriptStruct: BendGame.InventoryBaseTypeData
struct InventoryBaseTypeData {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> DataTables; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryItemTagSet
struct InventoryItemTagSet {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t ItemTags[0x28]; // 0x0008 (0x0028)
};

// ScriptStruct: BendGame.InventoryMenuCraftRecipe
struct InventoryMenuCraftRecipe {
    class UObject* ItemRecipe; // 0x0000 (0x0008)
    uint8_t CraftState; // 0x0008 (0x0001)
    uint8_t CraftItemType; // 0x0009 (0x0001)
    uint8_t Pad_0[0x6]; // 0x000A (0x0006)
    struct TArray<uint8_t> RecipeComponents; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.RecipeMenuComponentCount
struct RecipeMenuComponentCount : public RecipeMenuComponent {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    int32_t CurrentCount; // 0x0030 (0x0004)
};

// ScriptStruct: BendGame.RecipeMenuComponent
struct RecipeMenuComponent : public RecipeComponent {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* ComponentItem; // 0x0028 (0x0008)
};

// ScriptStruct: BendGame.InventoryMenuPanelSlots
struct InventoryMenuPanelSlots {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> MenuSlots; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryMenuSlotBase
struct InventoryMenuSlotBase {
    class UObject* Widget; // 0x0000 (0x0008)
    uint8_t MenuItem[0x40]; // 0x0008 (0x0040)
    uint8_t CraftRecipe[0x20]; // 0x0048 (0x0020)
    struct FText ItemName; // 0x0068 (0x0018)
    struct FText ItemDescription; // 0x0080 (0x0018)
    int32_t ItemCount; // 0x0098 (0x0004)
    int32_t ItemValue; // 0x009C (0x0004)
    bool bIsFactionLocked; // 0x00A0 (0x0001)
    uint8_t Pad_0[0x7]; // 0x00A1 (0x0007)
    struct TArray<uint8_t> MenuActions; // 0x00A8 (0x0010)
};

// ScriptStruct: BendGame.InventoryEquipmentAmmoSlotEntry
struct InventoryEquipmentAmmoSlotEntry {
    uint8_t AmmoID; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t MaxCount; // 0x0004 (0x0004)
    struct FText SlotName; // 0x0008 (0x0018)
};

// ScriptStruct: BendGame.AmmoTagToAmmoID
struct AmmoTagToAmmoID {
    uint8_t OwningAmmoTag[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> MatchingAmmoIDs; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryBikeStorageAmmo
struct InventoryBikeStorageAmmo {
    struct TArray<uint8_t> AmmoSlots; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InventoryEquipmentLocker
struct InventoryEquipmentLocker {
    struct TArray<uint8_t> Weapons; // 0x0000 (0x0010)
    struct TArray<uint8_t> AmmoLockerCount; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.InventoryEquipmentSlotHelper
struct InventoryEquipmentSlotHelper {
    struct TArray<uint8_t> EquipmentSlots; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.InventoryStorageRecipeItem
struct InventoryStorageRecipeItem : public InventoryStorageGuidItem {
    uint8_t Pad_0[0x40]; // 0x0000 (0x0040)
    bool bDiscovered; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    float LastBroadcastTime; // 0x0044 (0x0004)
    int32_t NumCrafted; // 0x0048 (0x0004)
};

// ScriptStruct: BendGame.InventoryTextureTagPair
struct InventoryTextureTagPair {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    uint8_t Texture[0x20]; // 0x0008 (0x0020)
};

// ScriptStruct: BendGame.InventoryTextureTagLibrarySet
struct InventoryTextureTagLibrarySet {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> Textures; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.PathPoint
struct PathPoint {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    bool bBlocked; // 0x000C (0x0001)
    bool bVisible; // 0x000C (0x0001)
};

// ScriptStruct: BendGame.MapTile3D
struct MapTile3D {
    int32_t DepthIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t TextureAsset[0x20]; // 0x0008 (0x0020)
    struct TArray<uint8_t> AltTextureAssets; // 0x0028 (0x0010)
    class UObject* Texture; // 0x0038 (0x0008)
    bool bUseBlank; // 0x0040 (0x0001)
};

// ScriptStruct: BendGame.MapWaypointMarkerMgr
struct MapWaypointMarkerMgr {
    class UObject* MissionWaypointMarker; // 0x0000 (0x0008)
    class UObject* UserWaypointMarker; // 0x0008 (0x0008)
    class UClass* MapWaypointMarkerClass; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.MapLocationList
struct MapLocationList {
    struct TArray<uint8_t> Locations; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.MerchantItems
struct MerchantItems {
    struct FName MerchantName; // 0x0000 (0x0008)
    struct TArray<uint8_t> Items; // 0x0008 (0x0010)
    struct TArray<uint8_t> Weapons; // 0x0018 (0x0010)
    struct TArray<uint8_t> Ammo; // 0x0028 (0x0010)
    struct TArray<uint8_t> Parts; // 0x0038 (0x0010)
};

// ScriptStruct: BendGame.MerchantPart
struct MerchantPart : public MerchantItemBase {
    uint8_t Pad_0[0x40]; // 0x0000 (0x0040)
    uint8_t Item[0x40]; // 0x0040 (0x0040)
};

// ScriptStruct: BendGame.MerchantItemBase
struct MerchantItemBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t Details[0x38]; // 0x0008 (0x0038)
};

// ScriptStruct: BendGame.MerchantItemDetails
struct MerchantItemDetails {
    uint8_t TrustTier; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    bool bIsBikeAmmo; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    struct FText NameOverride; // 0x0008 (0x0018)
    struct FText DescriptionOverride; // 0x0020 (0x0018)
};

// ScriptStruct: BendGame.MerchantBasicItem
struct MerchantBasicItem : public MerchantItemBase {
    uint8_t Pad_0[0x40]; // 0x0000 (0x0040)
    uint8_t Item[0x40]; // 0x0040 (0x0040)
};

// ScriptStruct: BendGame.MerchantWeapon
struct MerchantWeapon : public MerchantItemBase {
    uint8_t Pad_0[0x40]; // 0x0000 (0x0040)
    uint8_t Item[0x50]; // 0x0040 (0x0050)
};

// ScriptStruct: BendGame.BendBikePartCategoryData
struct BendBikePartCategoryData : public TableRowBase {
    uint8_t PartType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t MenuTag[0x8]; // 0x0008 (0x0008)
    uint8_t MenuCategory; // 0x0010 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0011 (0x0007)
    struct FText CategoryName; // 0x0018 (0x0018)
    struct FText CategoryDescription; // 0x0030 (0x0018)
    class UObject* CategoryImage; // 0x0048 (0x0008)
    class UObject* CategoryImage_Alternate; // 0x0050 (0x0008)
};

// ScriptStruct: BendGame.MerchantStockAmmo
struct MerchantStockAmmo {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    int32_t Count; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t Details[0x38]; // 0x0010 (0x0038)
};

// ScriptStruct: BendGame.MerchantStockWeapon
struct MerchantStockWeapon {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> Parts; // 0x0008 (0x0010)
    uint8_t WeaponStats[0x10]; // 0x0018 (0x0010)
    uint8_t Details[0x38]; // 0x0028 (0x0038)
};

// ScriptStruct: BendGame.MerchantStockItem
struct MerchantStockItem {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    int32_t Count; // 0x0008 (0x0004)
    bool CanBeRestocked; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    int32_t ActiveCount; // 0x0010 (0x0004)
    bool HasSetCountOnce; // 0x0014 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0015 (0x0003)
    uint8_t Details[0x38]; // 0x0018 (0x0038)
};

// ScriptStruct: BendGame.MechanicMerchantParts
struct MechanicMerchantParts {
    struct TArray<uint8_t> Engine; // 0x0000 (0x0010)
    struct TArray<uint8_t> Frame; // 0x0010 (0x0010)
    struct TArray<uint8_t> Tank; // 0x0020 (0x0010)
    struct TArray<uint8_t> FrontForks; // 0x0030 (0x0010)
    struct TArray<uint8_t> Suspension; // 0x0040 (0x0010)
    struct TArray<uint8_t> Storage; // 0x0050 (0x0010)
    struct TArray<uint8_t> Nitrous; // 0x0060 (0x0010)
    struct TArray<uint8_t> AirIntake; // 0x0070 (0x0010)
    struct TArray<uint8_t> Exhaust; // 0x0080 (0x0010)
    struct TArray<uint8_t> ExhaustBaffle; // 0x0090 (0x0010)
    struct TArray<uint8_t> ExhaustTip; // 0x00A0 (0x0010)
    struct TArray<uint8_t> Faceguard; // 0x00B0 (0x0010)
    struct TArray<uint8_t> FrontBrakes; // 0x00C0 (0x0010)
    struct TArray<uint8_t> FrontBrakesCaliper; // 0x00D0 (0x0010)
    struct TArray<uint8_t> FrontFender; // 0x00E0 (0x0010)
    struct TArray<uint8_t> FrontTire; // 0x00F0 (0x0010)
    struct TArray<uint8_t> Handguard; // 0x0100 (0x0010)
    struct TArray<uint8_t> Handlebars; // 0x0110 (0x0010)
    struct TArray<uint8_t> Headlight; // 0x0120 (0x0010)
    struct TArray<uint8_t> Mirrors; // 0x0130 (0x0010)
    struct TArray<uint8_t> Radiator; // 0x0140 (0x0010)
    struct TArray<uint8_t> RearBrakes; // 0x0150 (0x0010)
    struct TArray<uint8_t> RearBrakesCaliper; // 0x0160 (0x0010)
    struct TArray<uint8_t> RearTire; // 0x0170 (0x0010)
    struct TArray<uint8_t> SeatFront; // 0x0180 (0x0010)
    struct TArray<uint8_t> SeatRear; // 0x0190 (0x0010)
    struct TArray<uint8_t> Shroud; // 0x01A0 (0x0010)
    struct TArray<uint8_t> Sidelight; // 0x01B0 (0x0010)
    struct TArray<uint8_t> SideLights; // 0x01C0 (0x0010)
    struct TArray<uint8_t> TailBag; // 0x01D0 (0x0010)
    struct TArray<uint8_t> TailLights; // 0x01E0 (0x0010)
    struct TArray<uint8_t> Theme; // 0x01F0 (0x0010)
    struct TArray<uint8_t> WheelFront; // 0x0200 (0x0010)
    struct TArray<uint8_t> WheelRear; // 0x0210 (0x0010)
    struct TArray<uint8_t> Wheels; // 0x0220 (0x0010)
};

// ScriptStruct: BendGame.CarverParameters
struct CarverParameters {
    float LocalCarverExpand; // 0x0000 (0x0004)
    float DecalExpand; // 0x0004 (0x0004)
    float ContactExpand; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.WaterParameters
struct WaterParameters {
    float WaterRiseRate; // 0x0000 (0x0004)
    float WaterMin; // 0x0004 (0x0004)
    float WaterMax; // 0x0008 (0x0004)
    float WaterRange; // 0x000C (0x0004)
};

// ScriptStruct: BendGame.MudParameters
struct MudParameters {
    float Threshold; // 0x0000 (0x0004)
    float Flow; // 0x0004 (0x0004)
    float Fill; // 0x0008 (0x0004)
    float FillFlow; // 0x000C (0x0004)
    uint8_t RingWidth[0x4]; // 0x0010 (0x0004)
};

// ScriptStruct: BendGame.InventoryTagStoragePair
struct InventoryTagStoragePair {
    uint8_t Tag[0x8]; // 0x0000 (0x0008)
    uint8_t StorageType; // 0x0008 (0x0001)
};

// ScriptStruct: BendGame.TelemetryEventAttr
struct TelemetryEventAttr {
    struct FString Name; // 0x0000 (0x0010)
    struct FString Value; // 0x0010 (0x0010)
};

// ScriptStruct: BendGame.TelemetryEventTypedAttr
struct TelemetryEventTypedAttr {
    struct FString Name; // 0x0000 (0x0010)
    uint8_t Type; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    int32_t IntValue; // 0x0014 (0x0004)
    float FloatValue; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    struct FString StringValue; // 0x0020 (0x0010)
    struct FText TextValue; // 0x0030 (0x0018)
    bool BoolValue; // 0x0048 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0049 (0x0007)
    struct TArray<uint8_t> IntValueArray; // 0x0050 (0x0010)
    struct TArray<uint8_t> FloatValueArray; // 0x0060 (0x0010)
    struct TArray<uint8_t> StringValueArray; // 0x0070 (0x0010)
    struct TArray<uint8_t> TextValueArray; // 0x0080 (0x0010)
    struct TArray<uint8_t> BoolValueArray; // 0x0090 (0x0010)
};

// ScriptStruct: BendGame.UIAssetCacheEntry
struct UIAssetCacheEntry {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* Asset; // 0x0008 (0x0008)
};

// ScriptStruct: BendGame.RegionLanguages
struct RegionLanguages {
    struct TArray<uint8_t> TextLanguages; // 0x0000 (0x0010)
    struct TArray<uint8_t> VOLanguages; // 0x0010 (0x0010)
    struct TArray<uint8_t> SubtitleLanguages; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.MapIconStateDetails
struct MapIconStateDetails {
    struct TArray<uint8_t> LocationIcons; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.MapIconStateInfo
struct MapIconStateInfo {
    class UObject* Source; // 0x0000 (0x0008)
    class UObject* MiniMap; // 0x0008 (0x0008)
    class UObject* Main; // 0x0010 (0x0008)
    class UObject* Focused; // 0x0018 (0x0008)
    class UObject* Notify; // 0x0020 (0x0008)
    class UObject* GoldenPath; // 0x0028 (0x0008)
};

// ScriptStruct: BendGame.LanguageDetails
struct LanguageDetails {
    struct FName Name; // 0x0000 (0x0008)
    struct FText DisplayName; // 0x0008 (0x0018)
    struct FString ISOCode; // 0x0020 (0x0010)
};

// ScriptStruct: BendGame.MapMenuVariableDetails
struct MapMenuVariableDetails {
    float MinZoom; // 0x0000 (0x0004)
    float MaxZoom; // 0x0004 (0x0004)
    int32_t PreviewModeZoomLevel; // 0x0008 (0x0004)
    float PanSpeed; // 0x000C (0x0004)
    float ZoomSpeed; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct TArray<uint8_t> LocationIcons; // 0x0018 (0x0010)
    class UClass* MapWaypointMarkerClass; // 0x0028 (0x0008)
};

// ScriptStruct: BendGame.MiniMapVariableDetails
struct MiniMapVariableDetails {
    struct TArray<uint8_t> DrawOrder; // 0x0000 (0x0010)
    class UObject* ObjectiveRegionMaterial; // 0x0010 (0x0008)
};

// ScriptStruct: BendGame.XpecPopulationDetailData
struct XpecPopulationDetailData : public TableRowBase {
    struct FName levelName; // 0x0000 (0x0008)
    struct FName zoneName; // 0x0008 (0x0008)
    struct FName spawnerID; // 0x0010 (0x0008)
    struct FName spawnerName; // 0x0018 (0x0008)
    struct FName pawnName; // 0x0020 (0x0008)
    struct FName populationID; // 0x0028 (0x0008)
    struct FName newSpawnerID; // 0x0030 (0x0008)
    struct FName newPawnName; // 0x0038 (0x0008)
    struct FName newSpawnerName; // 0x0040 (0x0008)
    struct FName newPopulationID; // 0x0048 (0x0008)
};

// ScriptStruct: BendGame.XpecNeedData
struct XpecNeedData {
    struct FName m_name; // 0x0000 (0x0008)
    float m_fMin; // 0x0008 (0x0004)
    float m_fMax; // 0x000C (0x0004)
    float m_fValue; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UObject* m_pWeightTbl; // 0x0018 (0x0008)
};

// ScriptStruct: BendGame.XpecRewardData
struct XpecRewardData {
    struct FName m_name; // 0x0000 (0x0008)
    float m_fValue; // 0x0008 (0x0004)
};

// ScriptStruct: BendGame.XpecVODebugData
struct XpecVODebugData {
    int32_t m_Count; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t m_VOData[0x48]; // 0x0008 (0x0048)
};

// ScriptStruct: BendGame.BendCharacterAnimInstanceProxy
struct BendCharacterAnimInstanceProxy : public BendAnimInstanceProxy {
};

// ScriptStruct: BendGame.AnimNode_Anchor
struct AnimNode_Anchor : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    int32_t AnchorIndex; // 0x0048 (0x0004)
    uint8_t Pad_1[0x4]; // 0x004C (0x0004)
    uint8_t ReferenceBone[0x10]; // 0x0050 (0x0010)
    bool bUseRootBone; // 0x0060 (0x0001)
    uint8_t RootBoneSampleTime; // 0x0061 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0062 (0x0002)
    float RootBoneSpecifiedTime; // 0x0064 (0x0004)
    bool bAffectsTranslation; // 0x0068 (0x0001)
    bool bAlwaysAbsoluteAnchor; // 0x0068 (0x0001)
    uint8_t AnchorTransformSource; // 0x0069 (0x0001)
    bool bRefreshAnchorTransformEveryTick; // 0x006A (0x0001)
    uint8_t Pad_3[0x5]; // 0x006B (0x0005)
    uint8_t PinInputAnchorTransform[0x30]; // 0x0070 (0x0030)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x00A0 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_AnimalMultiNodesBase
struct AnimNode_AnimalMultiNodesBase : public AnimNode_Base {
};

// ScriptStruct: BendGame.AnimNode_AnimalMultiNodesBasePreForwarder
struct AnimNode_AnimalMultiNodesBasePreForwarder : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Base[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: BendGame.AnimNode_AnimalMultiNodesAssetPlayerBase
struct AnimNode_AnimalMultiNodesAssetPlayerBase : public AnimNode_AssetPlayerBase {
};

// ScriptStruct: BendGame.AnimNode_MultiAnchorSequence
struct AnimNode_MultiAnchorSequence : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct FName BlendCurveName; // 0x0048 (0x0008)
    bool bReleaseAnchoringAtCurveThreshold; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    float ReleaseAnchoringCurveThreshold; // 0x0054 (0x0004)
    uint8_t Pad_2[0x20]; // 0x0058 (0x0020)
    struct TArray<uint8_t> AnchorBlendSequence; // 0x0078 (0x0010)
    struct TArray<uint8_t> RootBoneSpecifiedTimes; // 0x0088 (0x0010)
    struct TArray<uint8_t> PinInputAnchorTransforms; // 0x0098 (0x0010)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x00A8 (0x0001)
};

// ScriptStruct: BendGame.AnimAnchorData
struct AnimAnchorData {
    struct FName AnchorName; // 0x0000 (0x0008)
    int32_t AnchorIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ReferenceBone[0x10]; // 0x0010 (0x0010)
    bool bUseRootBone; // 0x0020 (0x0001)
    uint8_t RootBoneSampleTime; // 0x0021 (0x0001)
    bool bAffectsTranslation; // 0x0022 (0x0001)
    uint8_t AnchorTransformSource; // 0x0023 (0x0001)
    bool bRefreshAnchorTransformEveryTick; // 0x0024 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_CollectCurveValue
struct AnimNode_CollectCurveValue : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct FName CollectorName; // 0x0048 (0x0008)
    struct FName CurveName; // 0x0050 (0x0008)
};

// ScriptStruct: BendGame.AnimNode_AnimalAttackAssetPlayer
struct AnimNode_AnimalAttackAssetPlayer : public AnimNode_AnimalMultiNodesAssetPlayerBase {
    uint8_t Pad_0[0x78]; // 0x0000 (0x0078)
    bool bUseCurves; // 0x0078 (0x0001)
    bool bUseFailed; // 0x0079 (0x0001)
    uint8_t Pad_1[0x6]; // 0x007A (0x0006)
    struct FName CollectorName; // 0x0080 (0x0008)
    struct FName StartMeleeCurveName; // 0x0088 (0x0008)
    uint8_t ReferenceBone[0x10]; // 0x0090 (0x0010)
    int32_t AnchorMeleeStartRotateIndex; // 0x00A0 (0x0004)
    int32_t AnchorMeleeStartIndex; // 0x00A4 (0x0004)
    int32_t AnchorMeleeEndIndex; // 0x00A8 (0x0004)
    int32_t AnchorMeleeEndRotateIndex; // 0x00AC (0x0004)
    uint8_t PlayersGroupRole; // 0x00B0 (0x0001)
    uint8_t Pad_2[0x7]; // 0x00B1 (0x0007)
    class UObject* Sequence; // 0x00B8 (0x0008)
    uint8_t UseFailedBlend[0xF0]; // 0x00C0 (0x00F0)
    uint8_t FailedPlayer[0x88]; // 0x01B0 (0x0088)
    uint8_t UseDefaultBlend[0xF0]; // 0x0238 (0x00F0)
    uint8_t UseFinalBlend[0xF0]; // 0x0328 (0x00F0)
    uint8_t CollectCurveValue[0x60]; // 0x0418 (0x0060)
    uint8_t DefaultPlayer[0x88]; // 0x0478 (0x0088)
    uint8_t CurvePlayer[0x88]; // 0x0500 (0x0088)
    uint8_t CurveAnchor[0xC8]; // 0x0588 (0x00C8)
    uint8_t FinalPlayer[0x88]; // 0x0650 (0x0088)
    uint8_t Pad_3[0x8]; // 0x06D8 (0x0008)
    uint8_t FinalAnchor[0x1A0]; // 0x06E0 (0x01A0)
};

// ScriptStruct: BendGame.AnimNode_AnimalDamageAssetPlayer
struct AnimNode_AnimalDamageAssetPlayer : public AnimNode_AnimalMultiNodesAssetPlayerBase {
    uint8_t Pad_0[0x78]; // 0x0000 (0x0078)
    bool bAdditive; // 0x0078 (0x0001)
    uint8_t DamageAnimInfoNdx; // 0x0079 (0x0001)
    bool bProcessDamagePercent; // 0x007A (0x0001)
    uint8_t Pad_1[0x5]; // 0x007B (0x0005)
    class UObject* Sequence; // 0x0080 (0x0008)
    class UObject* BlendSpace; // 0x0088 (0x0008)
    class UObject* AnimationBase; // 0x0090 (0x0008)
    uint8_t BlendByDamagePercent[0x70]; // 0x0098 (0x0070)
    uint8_t BlendSequenceOrBlendspace[0xF0]; // 0x0108 (0x00F0)
    uint8_t RefPoseNode[0x38]; // 0x01F8 (0x0038)
    uint8_t SequencePlayer[0x88]; // 0x0230 (0x0088)
    uint8_t BlendspacePlayer[0x160]; // 0x02B8 (0x0160)
};

// ScriptStruct: BendGame.AnimNode_RandomBlendSpace
struct AnimNode_RandomBlendSpace : public AnimNode_BlendSpacePlayer {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    struct FName AnimBlendSpaceGroupName; // 0x0160 (0x0008)
    float BlendTime; // 0x0168 (0x0004)
    uint8_t BlendOption; // 0x016C (0x0001)
    uint8_t Pad_1[0x3]; // 0x016D (0x0003)
    class UObject* CustomBlendCurve; // 0x0170 (0x0008)
    uint8_t Pad_2[0x8]; // 0x0178 (0x0008)
    class UObject* BlendProfile; // 0x0180 (0x0008)
    struct TArray<uint8_t> BlendListReferencedObjects; // 0x0188 (0x0010)
};

// ScriptStruct: BendGame.AnimNode_RandomSequence
struct AnimNode_RandomSequence : public AnimNode_SequencePlayer {
    uint8_t Pad_0[0x88]; // 0x0000 (0x0088)
    struct FName AnimSequenceGroupName; // 0x0088 (0x0008)
    bool bContinueToNextSequence; // 0x0090 (0x0001)
    bool bRandomOnInitOnly; // 0x0091 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0092 (0x0002)
    float BlendTime; // 0x0094 (0x0004)
    uint8_t BlendOption; // 0x0098 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0099 (0x0007)
    class UObject* CustomBlendCurve; // 0x00A0 (0x0008)
    float desiredSpeed; // 0x00A8 (0x0004)
    float MinPlayRate; // 0x00AC (0x0004)
    float MaxPlayRate; // 0x00B0 (0x0004)
    uint8_t Pad_3[0x4]; // 0x00B4 (0x0004)
    class UObject* BlendProfile; // 0x00B8 (0x0008)
    struct TArray<uint8_t> BlendListReferencedObjects; // 0x00C0 (0x0010)
};

// ScriptStruct: BendGame.AnimNode_BendBonesIKBlendspace
struct AnimNode_BendBonesIKBlendspace : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t LocalPose[0x18]; // 0x0030 (0x0018)
    float Alpha; // 0x0048 (0x0004)
    uint8_t Pad_1[0x4]; // 0x004C (0x0004)
    struct FName DisableSaggingAndIKCurveName; // 0x0050 (0x0008)
    struct FName IKAlphaCurveName; // 0x0058 (0x0008)
    bool bInvertIKAlphaCurve; // 0x0060 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0061 (0x0003)
    float CalculatedAlpha; // 0x0064 (0x0004)
    float PawProcessingAlpha; // 0x0068 (0x0004)
    uint8_t Pad_3[0x4]; // 0x006C (0x0004)
    uint8_t IKBaseBoneFrontLeft[0x10]; // 0x0070 (0x0010)
    uint8_t IKBaseBoneFrontRight[0x10]; // 0x0080 (0x0010)
    uint8_t IKBaseBoneLeft[0x10]; // 0x0090 (0x0010)
    uint8_t IKBaseBoneRight[0x10]; // 0x00A0 (0x0010)
    float ForwardProbeStartOffset; // 0x00B0 (0x0004)
    float BackwardProbeStartOffset; // 0x00B4 (0x0004)
    float ForwardProbeZOffset; // 0x00B8 (0x0004)
    float GroundProbeAmount; // 0x00BC (0x0004)
    float MaxPawAdjustmentDownwards; // 0x00C0 (0x0004)
    float MaxPawAdjustmentUpwards; // 0x00C4 (0x0004)
    uint8_t EffectorBoneFrontLeft[0x10]; // 0x00C8 (0x0010)
    uint8_t EffectorBoneFrontRight[0x10]; // 0x00D8 (0x0010)
    uint8_t EffectorBoneLeft[0x10]; // 0x00E8 (0x0010)
    uint8_t EffectorBoneRight[0x10]; // 0x00F8 (0x0010)
    float EffectorToGroundDistance; // 0x0108 (0x0004)
    uint8_t RaycastStartOffset[0xC]; // 0x010C (0x000C)
    uint8_t RaycastEndOffset[0xC]; // 0x0118 (0x000C)
    bool TraceComplex; // 0x0124 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0125 (0x0003)
    float RaycastSphereRadius; // 0x0128 (0x0004)
    float SpineAdjustmentSpeed; // 0x012C (0x0004)
    float PawBlendTime; // 0x0130 (0x0004)
    uint8_t Pad_5[0x4]; // 0x0134 (0x0004)
    struct FName SpineBlendspaceName; // 0x0138 (0x0008)
    struct FName ReferencePoseAnimSeqName; // 0x0140 (0x0008)
    bool bTrackAnimationMovementByCurve; // 0x0148 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0149 (0x0003)
    float TrackAnimationMovement; // 0x014C (0x0004)
    struct FName DontTrackAnimationMovementCurve; // 0x0150 (0x0008)
    float HardCodedZFrontLeftPaw; // 0x0158 (0x0004)
    float HardCodedZFrontRightPaw; // 0x015C (0x0004)
    float HardCodedZLeftPaw; // 0x0160 (0x0004)
    float HardCodedZRightPaw; // 0x0164 (0x0004)
    float PrevTimeSeconds; // 0x0168 (0x0004)
    float DeltaTime; // 0x016C (0x0004)
    float PawLerpAmount; // 0x0170 (0x0004)
    uint8_t Pad_7[0xC]; // 0x0174 (0x000C)
    uint8_t Data[0x370]; // 0x0180 (0x0370)
    bool bPawProcessingInitFailure; // 0x04F0 (0x0001)
    uint8_t Pad_8[0x7]; // 0x04F1 (0x0007)
    uint8_t SpineBlendspacePlayer[0x238]; // 0x04F8 (0x0238)
    uint8_t ReferencePoseAnimSeqPlayer[0x170]; // 0x0730 (0x0170)
};

// ScriptStruct: BendGame.BendBonesBlendspaceData
struct BendBonesBlendspaceData {
    uint8_t FrontLeft[0xD0]; // 0x0000 (0x00D0)
    uint8_t FrontRight[0xD0]; // 0x00D0 (0x00D0)
    uint8_t Left[0xD0]; // 0x01A0 (0x00D0)
    uint8_t Right[0xD0]; // 0x0270 (0x00D0)
    uint8_t Spine[0x24]; // 0x0340 (0x0024)
};

// ScriptStruct: BendGame.BendBonesSpineData
struct BendBonesSpineData {
    float BlendspaceMinValue; // 0x0000 (0x0004)
    float BlendspaceMaxValue; // 0x0004 (0x0004)
    float Lowest; // 0x0008 (0x0004)
    float Highest; // 0x000C (0x0004)
    float CenterPoint; // 0x0010 (0x0004)
    float NormalHeight; // 0x0014 (0x0004)
    float FrontNormalHeight; // 0x0018 (0x0004)
    float FrontLowest; // 0x001C (0x0004)
    float FrontHighest; // 0x0020 (0x0004)
};

// ScriptStruct: BendGame.BendBonesPawData
struct BendBonesPawData {
    float GroundDistanceToBone; // 0x0000 (0x0004)
    uint8_t CachedGroundPos[0xC]; // 0x0004 (0x000C)
    float AnimationTrackingZ; // 0x0010 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0014 (0x000C)
    uint8_t LastFrameTransform[0x30]; // 0x0020 (0x0030)
};

// ScriptStruct: BendGame.AnimNode_BendTwoBoneIKBase
struct AnimNode_BendTwoBoneIKBase : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t IKBone[0x10]; // 0x0068 (0x0010)
    uint8_t EndEffectorBone[0x10]; // 0x0078 (0x0010)
    uint8_t JointTargetLocation[0xC]; // 0x0088 (0x000C)
    uint8_t StretchLimits[0x8]; // 0x0094 (0x0008)
    bool bTakeRotationFromEffectorTargetSpace; // 0x009C (0x0001)
    bool bMaintainEffectorTargetRelRot; // 0x009C (0x0001)
    bool bAllowStretching; // 0x009C (0x0001)
    uint8_t Pad_1[0x3]; // 0x009D (0x0003)
    uint8_t JointTargetLocationSpace; // 0x00A0 (0x0001)
    uint8_t Pad_2[0x7]; // 0x00A1 (0x0007)
    struct FName JointTargetSpaceBoneName; // 0x00A8 (0x0008)
};

// ScriptStruct: BendGame.AnimNode_BendTwoBoneIK
struct AnimNode_BendTwoBoneIK : public AnimNode_BendTwoBoneIKBase {
    uint8_t Pad_0[0xB0]; // 0x0000 (0x00B0)
    uint8_t EndEffectorTargetBone[0x10]; // 0x00B0 (0x0010)
};

// ScriptStruct: BendGame.AnimNode_BendTwoBoneIKCachedBones
struct AnimNode_BendTwoBoneIKCachedBones : public AnimNode_BendTwoBoneIKBase {
};

// ScriptStruct: BendGame.AnimNode_BendTwoBoneIKExternal
struct AnimNode_BendTwoBoneIKExternal : public AnimNode_BendTwoBoneIKBase {
    uint8_t Pad_0[0xB0]; // 0x0000 (0x00B0)
    uint8_t EndEffectorTargetWS[0x30]; // 0x00B0 (0x0030)
};

// ScriptStruct: BendGame.AnimNode_BendTwoBoneIKRaycast
struct AnimNode_BendTwoBoneIKRaycast : public AnimNode_BendTwoBoneIKBase {
    uint8_t Pad_0[0xB0]; // 0x0000 (0x00B0)
    uint8_t RaycastSourceBone[0x10]; // 0x00B0 (0x0010)
    bool WorldSpaceOffsets; // 0x00C0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00C1 (0x0003)
    uint8_t RaycastStartOffset[0xC]; // 0x00C4 (0x000C)
    uint8_t RaycastEndOffset[0xC]; // 0x00D0 (0x000C)
    bool IgnorePawns; // 0x00DC (0x0001)
    bool TraceComplex; // 0x00DD (0x0001)
    uint8_t Pad_2[0x2]; // 0x00DE (0x0002)
    float RaycastSphereRadius; // 0x00E0 (0x0004)
    bool RotateBoneToHitNormal; // 0x00E4 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00E5 (0x0003)
    struct FName RotationBoneOffsetSocket; // 0x00E8 (0x0008)
    float BlendInTime; // 0x00F0 (0x0004)
    float BlendOutTime; // 0x00F4 (0x0004)
    float PenetrationBlendTime; // 0x00F8 (0x0004)
    uint8_t Pad_4[0x4]; // 0x00FC (0x0004)
    uint8_t LastFrameTransform[0x30]; // 0x0100 (0x0030)
};

// ScriptStruct: BendGame.AnimNode_BlendspaceSlot
struct AnimNode_BlendspaceSlot : public AnimNode_BlendSpacePlayer {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    uint8_t Source[0x18]; // 0x0160 (0x0018)
    struct FName SlotName; // 0x0178 (0x0008)
    bool DEBUG_ACTIVATE; // 0x0180 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_ClearCurves
struct AnimNode_ClearCurves : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    bool ClearCurves; // 0x0048 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_EvaluateHelperRig
struct AnimNode_EvaluateHelperRig : public AnimNode_SkeletalControlBase {
};

// ScriptStruct: BendGame.AnimNode_OffsetStartBlendspace
struct AnimNode_OffsetStartBlendspace : public AnimNode_BlendSpacePlayer {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    float OffsetStartTime; // 0x0160 (0x0004)
};

// ScriptStruct: BendGame.AnimNode_RandomAimOffset
struct AnimNode_RandomAimOffset : public AnimNode_RandomBlendSpace {
    uint8_t Pad_0[0x238]; // 0x0000 (0x0238)
    uint8_t BasePose[0x18]; // 0x0238 (0x0018)
};

// ScriptStruct: BendGame.BendAnimNode_SkeletalControlBase_WithProxyRef
struct BendAnimNode_SkeletalControlBase_WithProxyRef : public AnimNode_SkeletalControlBase {
};

// ScriptStruct: BendGame.AnimNode_SaggyMesh
struct AnimNode_SaggyMesh : public BendAnimNode_SkeletalControlBase_WithProxyRef {
    uint8_t Pad_0[0x70]; // 0x0000 (0x0070)
    uint8_t SagBone[0x10]; // 0x0070 (0x0010)
    float SagLimit; // 0x0080 (0x0004)
    float SagSpeed; // 0x0084 (0x0004)
    int32_t MinIKHitsToStartSagging; // 0x0088 (0x0004)
    uint8_t Pad_1[0x4]; // 0x008C (0x0004)
    struct TArray<uint8_t> BonesUsedForIK; // 0x0090 (0x0010)
};

// ScriptStruct: BendGame.AnimNode_SaveCachedBones
struct AnimNode_SaveCachedBones : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    struct TArray<uint8_t> Bones; // 0x0068 (0x0010)
};

// ScriptStruct: BendGame.AnimNode_SetLocalAnimSequences
struct AnimNode_SetLocalAnimSequences : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> Names; // 0x0048 (0x0010)
    struct TArray<uint8_t> Values; // 0x0058 (0x0010)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x0068 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_SetLocalBlendSpaces
struct AnimNode_SetLocalBlendSpaces : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> Names; // 0x0048 (0x0010)
    struct TArray<uint8_t> Values; // 0x0058 (0x0010)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x0068 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_SetLocalFloats
struct AnimNode_SetLocalFloats : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> Names; // 0x0048 (0x0010)
    struct TArray<uint8_t> Values; // 0x0058 (0x0010)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x0068 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_SetLocalInts
struct AnimNode_SetLocalInts : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> Names; // 0x0048 (0x0010)
    struct TArray<uint8_t> Values; // 0x0058 (0x0010)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x0068 (0x0001)
};

// ScriptStruct: BendGame.AnimNode_StartSequence
struct AnimNode_StartSequence : public AnimNode_SequencePlayer {
    uint8_t Pad_0[0x88]; // 0x0000 (0x0088)
    float OffsetStartTime; // 0x0088 (0x0004)
};

// ScriptStruct: BendGame.AnimNode_XPECTwoBoneIKFootPlant
struct AnimNode_XPECTwoBoneIKFootPlant : public AnimNode_BendTwoBoneIKBase {
    uint8_t Pad_0[0xB0]; // 0x0000 (0x00B0)
    uint8_t RaycastFootStartOffset[0xC]; // 0x00B0 (0x000C)
    uint8_t RaycastFootEndOffset[0xC]; // 0x00BC (0x000C)
    bool WorldSpaceOffsets; // 0x00C8 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00C9 (0x0007)
    uint8_t RaycastToeBone[0x10]; // 0x00D0 (0x0010)
    uint8_t RaycastToeStartOffset[0xC]; // 0x00E0 (0x000C)
    uint8_t RaycastToeEndOffset[0xC]; // 0x00EC (0x000C)
    uint8_t RaycastHeelBone[0x10]; // 0x00F8 (0x0010)
    float RaycastHeelStartOffset; // 0x0108 (0x0004)
    float RaycastHeelEndOffset; // 0x010C (0x0004)
    float FootHalfWidth; // 0x0110 (0x0004)
    bool IsLeftFoot; // 0x0114 (0x0001)
    bool IgnorePawns; // 0x0115 (0x0001)
    bool TraceComplex; // 0x0116 (0x0001)
    bool ShouldFootStickToGround; // 0x0117 (0x0001)
    float RaycastSphereRadius; // 0x0118 (0x0004)
    bool DrawSphere; // 0x011C (0x0001)
    uint8_t Pad_2[0x3]; // 0x011D (0x0003)
    struct FName RotationBoneOffsetSocket; // 0x0120 (0x0008)
    float BlendInTime; // 0x0128 (0x0004)
    float BlendOutTime; // 0x012C (0x0004)
    float ToleranceAngle; // 0x0130 (0x0004)
    float FootPlantingThreshold; // 0x0134 (0x0004)
    float IKMeshSizeThreshold; // 0x0138 (0x0004)
    float MeshSizeBuffer; // 0x013C (0x0004)
    bool EnableFootLocking; // 0x0140 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0141 (0x0003)
    float FootLockBlendOutTime; // 0x0144 (0x0004)
    uint8_t Pad_4[0x8]; // 0x0148 (0x0008)
    uint8_t LastFrameTransform[0x30]; // 0x0150 (0x0030)
};

// ScriptStruct: BendGame.BendAnimNode_AddAnimGraphTags
struct BendAnimNode_AddAnimGraphTags : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> TagName; // 0x0048 (0x0010)
    struct TArray<uint8_t> Enabled; // 0x0058 (0x0010)
};

// ScriptStruct: BendGame.BendAnimNode_AddCurveValue
struct BendAnimNode_AddCurveValue : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct FName CurveName; // 0x0048 (0x0008)
    float CurveValue; // 0x0050 (0x0004)
    bool bOverrideCurveValueFromChildNodes; // 0x0054 (0x0001)
};

// ScriptStruct: BendGame.BendAnimNode_ApplyJointLimits
struct BendAnimNode_ApplyJointLimits : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    struct TArray<uint8_t> Limits; // 0x0068 (0x0010)
};

// ScriptStruct: BendGame.BendAnimJointLimit
struct BendAnimJointLimit {
    uint8_t Bone[0x10]; // 0x0000 (0x0010)
    uint8_t Min[0xC]; // 0x0010 (0x000C)
    uint8_t Max[0xC]; // 0x001C (0x000C)
    uint8_t ConstraintSpaceEuler[0xC]; // 0x0028 (0x000C)
    bool bUseRoundedLimits; // 0x0034 (0x0001)
};

// ScriptStruct: BendGame.BendAnimNode_BlockGraphTillSetupValid
struct BendAnimNode_BlockGraphTillSetupValid : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: BendGame.BendAnimNode_ExcludeJoints
struct BendAnimNode_ExcludeJoints : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> ExcludedBranches; // 0x0048 (0x0010)
    bool bExcludeRuntimeJoints; // 0x0058 (0x0001)
    bool bEnable; // 0x0058 (0x0001)
};

// ScriptStruct: BendGame.BendAnimGraphBranch
struct BendAnimGraphBranch {
    uint8_t StartBone[0x10]; // 0x0000 (0x0010)
    bool bInclusive; // 0x0010 (0x0001)
};

// ScriptStruct: BendGame.BendAnimNode_FixupAnchoredMeshPostCollision
struct BendAnimNode_FixupAnchoredMeshPostCollision : public BendAnimNode_SkeletalControlBase_WithProxyRef {
    uint8_t Pad_0[0x70]; // 0x0000 (0x0070)
    uint8_t FixupBone[0x10]; // 0x0070 (0x0010)
};

// ScriptStruct: BendGame.BendAnimNode_InterpolateLocalFloats
struct BendAnimNode_InterpolateLocalFloats : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> Names; // 0x0048 (0x0010)
    struct TArray<uint8_t> InterpolationRates; // 0x0058 (0x0010)
    struct TArray<uint8_t> InitialValues; // 0x0068 (0x0010)
    struct TArray<uint8_t> TargetValues; // 0x0078 (0x0010)
};

// ScriptStruct: BendGame.BendAnimNode_Mirror
struct BendAnimNode_Mirror : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    bool bEnable; // 0x0048 (0x0001)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x0048 (0x0001)
    bool bQueryableExternally; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    struct FName MirrorNodeEventName; // 0x0050 (0x0008)
};

// ScriptStruct: BendGame.BendAnimNode_MotionMatching
struct BendAnimNode_MotionMatching : public AnimNode_SequencePlayer {
    uint8_t Pad_0[0x88]; // 0x0000 (0x0088)
    class UObject* MotionMatchingData; // 0x0088 (0x0008)
};

// ScriptStruct: BendGame.AnimNode_MultiLimbSupportIk
struct AnimNode_MultiLimbSupportIk : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    struct TArray<uint8_t> LimbEndBones; // 0x0068 (0x0010)
    float LimbEndStationarySpeedThreshold_WhenPlanted; // 0x0078 (0x0004)
    float NumGsAccelAlongLimbSupportDirFullWeightThreshold_WhenPlanted; // 0x007C (0x0004)
    float LimbEndStationarySpeedThreshold_WhenUnplanted; // 0x0080 (0x0004)
    float NumGsAccelAlongLimbSupportDirFullWeightThreshold_WhenUnplanted; // 0x0084 (0x0004)
};

// ScriptStruct: BendGame.BendAnimNode_MultiplyCurveValue
struct BendAnimNode_MultiplyCurveValue : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct FName CurveName; // 0x0048 (0x0008)
    float Multiplier; // 0x0050 (0x0004)
};

// ScriptStruct: BendGame.BendAnimNode_PostPhysicsInitialPose
struct BendAnimNode_PostPhysicsInitialPose : public AnimNode_Base {
};

// ScriptStruct: BendGame.BendAnimNode_PostPhysicsSwitch
struct BendAnimNode_PostPhysicsSwitch : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t PrePhysics[0x18]; // 0x0030 (0x0018)
    uint8_t PostPhysics[0x18]; // 0x0048 (0x0018)
};

// ScriptStruct: BendGame.BendAnimNode_PseudoStateInstanceRingBuffer
struct BendAnimNode_PseudoStateInstanceRingBuffer : public AnimNode_BlendListBase {
    uint8_t Pad_0[0xE8]; // 0x0000 (0x00E8)
    class UObject* Handle; // 0x00E8 (0x0008)
    struct TArray<uint8_t> CollectedCurveNames; // 0x00F0 (0x0010)
};

// ScriptStruct: BendGame.BendAnimNode_RedirectRootMotion
struct BendAnimNode_RedirectRootMotion : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    float RootMotionYaw; // 0x0048 (0x0004)
    float Alpha; // 0x004C (0x0004)
};

// ScriptStruct: BendGame.BendAnimNode_ResetGraphBelow
struct BendAnimNode_ResetGraphBelow : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    bool bReset; // 0x0048 (0x0001)
};

// ScriptStruct: BendGame.BendAnimNode_ScalePlayRate
struct BendAnimNode_ScalePlayRate : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    float TimeScale; // 0x0048 (0x0004)
    bool bSnapshotPinInputsWhenNodeStartsBlendingIn; // 0x004C (0x0001)
};

// ScriptStruct: BendGame.BendAnimNode_SmoothStepUpStepDown
struct BendAnimNode_SmoothStepUpStepDown : public BendAnimNode_SkeletalControlBase_WithProxyRef {
    uint8_t Pad_0[0x70]; // 0x0000 (0x0070)
    uint8_t AffectedBone[0x10]; // 0x0070 (0x0010)
    float MinPositionLag; // 0x0080 (0x0004)
    float MaxPositionLag; // 0x0084 (0x0004)
    float SpeedDescent; // 0x0088 (0x0004)
    float SpeedAscent; // 0x008C (0x0004)
    float AccelDescent; // 0x0090 (0x0004)
    float AccelAscent; // 0x0094 (0x0004)
};

// ScriptStruct: BendGame.BendAnimNode_TransformBone
struct BendAnimNode_TransformBone : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t BoneToModify[0x10]; // 0x0068 (0x0010)
    uint8_t Pad_1[0x8]; // 0x0078 (0x0008)
    uint8_t Transform[0x30]; // 0x0080 (0x0030)
    uint8_t TransformMode; // 0x00B0 (0x0001)
    uint8_t TransformSpace; // 0x00B1 (0x0001)
};

// ScriptStruct: BendGame.BendCrowdAnimInstanceProxy
struct BendCrowdAnimInstanceProxy : public AnimSingleNodeInstanceProxy {
};

// ScriptStruct: BendGame.BendInputRemapTable
struct BendInputRemapTable : public TableRowBase {
    struct FText GroupDisplayName; // 0x0000 (0x0018)
    struct FText ActionDisplayName; // 0x0018 (0x0018)
    struct TArray<uint8_t> LinkedTo; // 0x0030 (0x0010)
    struct FName SubGroupName; // 0x0040 (0x0008)
    struct TArray<uint8_t> ConflictingSubGroups; // 0x0048 (0x0010)
    struct TArray<uint8_t> ConflictingActions; // 0x0058 (0x0010)
    struct TArray<uint8_t> ExceptionActions; // 0x0068 (0x0010)
    struct TArray<uint8_t> IllegalKeys; // 0x0078 (0x0010)
};

// ScriptStruct: BendGame.BendSteamInputTable
struct BendSteamInputTable : public TableRowBase {
    struct FName SteamSetName; // 0x0000 (0x0008)
    struct TArray<uint8_t> LinkedActions; // 0x0008 (0x0010)
};

// ScriptStruct: BendGame.InventoryStorageItemList
struct InventoryStorageItemList {
    struct TArray<uint8_t> Items; // 0x0000 (0x0010)
};

// ScriptStruct: BendGame.WeaponPartSelectCustomizeHelper
struct WeaponPartSelectCustomizeHelper {
    bool bIsPlayerEquippedWeapon; // 0x0000 (0x0001)
    bool bIsDiscoveryWeapon; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t StorageWeapon[0x50]; // 0x0008 (0x0050)
    struct TArray<uint8_t> Weapons; // 0x0058 (0x0010)
};

// ScriptStruct: BendGame.InventoryMenuWeaponMgr
struct InventoryMenuWeaponMgr {
    class UObject* Player; // 0x0000 (0x0008)
    struct TArray<uint8_t> InitialWeapons; // 0x0008 (0x0010)
    struct TArray<uint8_t> Weapons; // 0x0018 (0x0010)
};

// ScriptStruct: BendGame.InventoryMenuWeapon
struct InventoryMenuWeapon {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    uint8_t Location; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    uint8_t StorageWeapon[0x50]; // 0x0008 (0x0050)
    class UObject* WeaponAmmo; // 0x0058 (0x0008)
    class UObject* PawnWeapon; // 0x0060 (0x0008)
};

// ScriptStruct: BendGame.ExtractionPOIData
struct ExtractionPOIData {
    class UObject* ExtractionPOISlot; // 0x0000 (0x0008)
    class UObject* Spawn; // 0x0008 (0x0008)
    uint8_t ArriveAtExtractionPOISlotActionData[0xA0]; // 0x0010 (0x00A0)
    uint8_t ArriveAtEnterHeliSlotActionData[0xA0]; // 0x00B0 (0x00A0)
    uint8_t InsideHeliActionData[0xA0]; // 0x0150 (0x00A0)
};

} // namespace SDK

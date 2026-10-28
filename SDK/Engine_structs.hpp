#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Engine.DistributionLookupTable
struct DistributionLookupTable {
    uint8_t Op; // 0x0000 (0x0001)
    uint8_t EntryCount; // 0x0001 (0x0001)
    uint8_t EntryStride; // 0x0002 (0x0001)
    uint8_t SubEntryStride; // 0x0003 (0x0001)
    float TimeScale; // 0x0004 (0x0004)
    float TimeBias; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct TArray<uint8_t> Values; // 0x0010 (0x0010)
    uint8_t LockFlag; // 0x0020 (0x0001)
};

// ScriptStruct: Engine.RawDistribution
struct RawDistribution {
    uint8_t Table[0x28]; // 0x0000 (0x0028)
};

// ScriptStruct: Engine.FloatDistribution
struct FloatDistribution {
    uint8_t Table[0x28]; // 0x0000 (0x0028)
};

// ScriptStruct: Engine.VectorDistribution
struct VectorDistribution {
    uint8_t Table[0x28]; // 0x0000 (0x0028)
};

// ScriptStruct: Engine.Vector4Distribution
struct Vector4Distribution {
    uint8_t Table[0x28]; // 0x0000 (0x0028)
};

// ScriptStruct: Engine.FormatArgumentData
struct FormatArgumentData {
    struct FString ArgumentName; // 0x0000 (0x0010)
    struct FText ArgumentValue; // 0x0010 (0x0018)
};

// ScriptStruct: Engine.ExpressionInput
struct ExpressionInput {
    class UObject* Expression; // 0x0000 (0x0008)
    int32_t OutputIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FString InputName; // 0x0010 (0x0010)
    int32_t Mask; // 0x0020 (0x0004)
    int32_t MaskR; // 0x0024 (0x0004)
    int32_t MaskG; // 0x0028 (0x0004)
    int32_t MaskB; // 0x002C (0x0004)
    int32_t MaskA; // 0x0030 (0x0004)
    int32_t GCC64_Padding; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.MaterialAttributesInput
struct MaterialAttributesInput : public ExpressionInput {
};

// ScriptStruct: Engine.ExpressionOutput
struct ExpressionOutput {
    struct FString OutputName; // 0x0000 (0x0010)
    int32_t Mask; // 0x0010 (0x0004)
    int32_t MaskR; // 0x0014 (0x0004)
    int32_t MaskG; // 0x0018 (0x0004)
    int32_t MaskB; // 0x001C (0x0004)
    int32_t MaskA; // 0x0020 (0x0004)
};

// ScriptStruct: Engine.MaterialInput
struct MaterialInput {
    class UObject* Expression; // 0x0000 (0x0008)
    int32_t OutputIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FString InputName; // 0x0010 (0x0010)
    int32_t Mask; // 0x0020 (0x0004)
    int32_t MaskR; // 0x0024 (0x0004)
    int32_t MaskG; // 0x0028 (0x0004)
    int32_t MaskB; // 0x002C (0x0004)
    int32_t MaskA; // 0x0030 (0x0004)
    int32_t GCC64_Padding; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.ColorMaterialInput
struct ColorMaterialInput : public MaterialInput {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    bool UseConstant; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    uint8_t Constant[0x4]; // 0x003C (0x0004)
};

// ScriptStruct: Engine.ScalarMaterialInput
struct ScalarMaterialInput : public MaterialInput {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    bool UseConstant; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    float Constant; // 0x003C (0x0004)
};

// ScriptStruct: Engine.VectorMaterialInput
struct VectorMaterialInput : public MaterialInput {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    bool UseConstant; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    uint8_t Constant[0xC]; // 0x003C (0x000C)
};

// ScriptStruct: Engine.Vector2MaterialInput
struct Vector2MaterialInput : public MaterialInput {
    uint8_t Pad_0[0x38]; // 0x0000 (0x0038)
    bool UseConstant; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    float ConstantX; // 0x003C (0x0004)
    float ConstantY; // 0x0040 (0x0004)
};

// ScriptStruct: Engine.HitResult
struct HitResult {
    bool bBlockingHit; // 0x0000 (0x0001)
    bool bStartPenetrating; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Time; // 0x0004 (0x0004)
    float Distance; // 0x0008 (0x0004)
    uint8_t Location[0xC]; // 0x000C (0x000C)
    uint8_t ImpactPoint[0xC]; // 0x0018 (0x000C)
    uint8_t Normal[0xC]; // 0x0024 (0x000C)
    uint8_t ImpactNormal[0xC]; // 0x0030 (0x000C)
    uint8_t TraceStart[0xC]; // 0x003C (0x000C)
    uint8_t TraceEnd[0xC]; // 0x0048 (0x000C)
    float PenetrationDepth; // 0x0054 (0x0004)
    int32_t Item; // 0x0058 (0x0004)
    uint64_t PhysMaterial; // 0x005C (0x0008)
    uint64_t Actor; // 0x0064 (0x0008)
    uint64_t Component; // 0x006C (0x0008)
    uint8_t Pad_1[0x4]; // 0x0074 (0x0004)
    struct FName BoneName; // 0x0078 (0x0008)
    int32_t FaceIndex; // 0x0080 (0x0004)
};

// ScriptStruct: Engine.Vector_NetQuantize
struct Vector_NetQuantize : public Vector {
};

// ScriptStruct: Engine.Vector_NetQuantizeNormal
struct Vector_NetQuantizeNormal : public Vector {
};

// ScriptStruct: Engine.SimpleMemberReference
struct SimpleMemberReference {
    class UObject* MemberParent; // 0x0000 (0x0008)
    struct FName MemberName; // 0x0008 (0x0008)
    uint8_t MemberGuid[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.ActorComponentTickFunction
struct ActorComponentTickFunction : public TickFunction {
};

// ScriptStruct: Engine.TickFunction
struct TickFunction {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t TickGroup; // 0x0008 (0x0001)
    uint8_t EndTickGroup; // 0x0009 (0x0001)
    uint8_t Pad_1[0x2]; // 0x000A (0x0002)
    bool bTickEvenWhenPaused; // 0x000C (0x0001)
    bool bCanEverTick; // 0x000C (0x0001)
    bool bStartWithTickEnabled; // 0x000C (0x0001)
    bool bAllowTickOnDedicatedServer; // 0x000C (0x0001)
    uint8_t Pad_2[0x2F]; // 0x000D (0x002F)
    float TickInterval; // 0x003C (0x0004)
};

// ScriptStruct: Engine.SubtitleCue
struct SubtitleCue {
    struct FText Text; // 0x0000 (0x0018)
    float Time; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.InterpControlPoint
struct InterpControlPoint {
    uint8_t PositionControlPoint[0xC]; // 0x0000 (0x000C)
    bool bPositionIsRelative; // 0x000C (0x0001)
};

// ScriptStruct: Engine.PlatformInterfaceDelegateResult
struct PlatformInterfaceDelegateResult {
    bool bSuccessful; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Data[0x30]; // 0x0008 (0x0030)
};

// ScriptStruct: Engine.PlatformInterfaceData
struct PlatformInterfaceData {
    struct FName DataName; // 0x0000 (0x0008)
    uint8_t Type; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    int32_t IntValue; // 0x000C (0x0004)
    float FloatValue; // 0x0010 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0014 (0x0004)
    struct FString StringValue; // 0x0018 (0x0010)
    class UObject* ObjectValue; // 0x0028 (0x0008)
};

// ScriptStruct: Engine.DebugFloatHistory
struct DebugFloatHistory {
    struct TArray<uint8_t> Samples; // 0x0000 (0x0010)
    float MaxSamples; // 0x0010 (0x0004)
    float MinValue; // 0x0014 (0x0004)
    float MaxValue; // 0x0018 (0x0004)
    bool bAutoAdjustMinMax; // 0x001C (0x0001)
};

// ScriptStruct: Engine.LatentActionInfo
struct LatentActionInfo {
    int32_t Linkage; // 0x0000 (0x0004)
    int32_t UUID; // 0x0004 (0x0004)
    struct FName ExecutionFunction; // 0x0008 (0x0008)
    class UObject* CallbackTarget; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.BendLocationHandle
struct BendLocationHandle {
    class UObject* LocationData; // 0x0000 (0x0008)
    int32_t LocationUID; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.TimerHandle
struct TimerHandle {
};

// ScriptStruct: Engine.CollisionProfileName
struct CollisionProfileName {
    struct FName Name; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.GenericStruct
struct GenericStruct {
    int32_t Data; // 0x0000 (0x0004)
};

// ScriptStruct: Engine.BendRankInfo
struct BendRankInfo {
    struct FString DisplayName; // 0x0000 (0x0010)
    uint8_t Pad_0[0x4]; // 0x0010 (0x0004)
    int32_t Rank; // 0x0014 (0x0004)
    int32_t Score; // 0x0018 (0x0004)
    bool bIsMe; // 0x001C (0x0001)
    bool bIsTempRank; // 0x001D (0x0001)
};

// ScriptStruct: Engine.BendTusScore
struct BendTusScore {
    int32_t SlotID; // 0x0000 (0x0004)
    int32_t Value; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.FastArraySerializerItem
struct FastArraySerializerItem {
    int32_t ReplicationID; // 0x0000 (0x0004)
    int32_t ReplicationKey; // 0x0004 (0x0004)
    int32_t MostRecentArrayReplicationKey; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.CurveTableRowHandle
struct CurveTableRowHandle {
    class UObject* CurveTable; // 0x0000 (0x0008)
    struct FName RowName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.Vector_NetQuantize10
struct Vector_NetQuantize10 : public Vector {
};

// ScriptStruct: Engine.Vector_NetQuantize100
struct Vector_NetQuantize100 : public Vector {
};

// ScriptStruct: Engine.FastArraySerializer
struct FastArraySerializer {
};

// ScriptStruct: Engine.TableRowBase
struct TableRowBase {
};

// ScriptStruct: Engine.RadialDamageEvent
struct RadialDamageEvent : public DamageEvent {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t Params[0x14]; // 0x0018 (0x0014)
    uint8_t Origin[0xC]; // 0x002C (0x000C)
    struct TArray<uint8_t> ComponentHits; // 0x0038 (0x0010)
};

// ScriptStruct: Engine.DamageEvent
struct DamageEvent {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UClass* DamageTypeClass; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.RadialDamageParams
struct RadialDamageParams {
    float BaseDamage; // 0x0000 (0x0004)
    float MinimumDamage; // 0x0004 (0x0004)
    float InnerRadius; // 0x0008 (0x0004)
    float OuterRadius; // 0x000C (0x0004)
    float DamageFalloff; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.PointDamageEvent
struct PointDamageEvent : public DamageEvent {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    float Damage; // 0x0018 (0x0004)
    uint8_t ShotDirection[0xC]; // 0x001C (0x000C)
    uint8_t HitInfo[0x88]; // 0x0028 (0x0088)
};

// ScriptStruct: Engine.RuntimeFloatCurve
struct RuntimeFloatCurve {
    uint8_t EditorCurveData[0x78]; // 0x0000 (0x0078)
    class UObject* ExternalCurve; // 0x0078 (0x0008)
};

// ScriptStruct: Engine.RichCurve
struct RichCurve : public IndexedCurve {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    uint8_t PreInfinityExtrap; // 0x0058 (0x0001)
    uint8_t PostInfinityExtrap; // 0x0059 (0x0001)
    uint8_t Pad_1[0x6]; // 0x005A (0x0006)
    struct TArray<uint8_t> Keys; // 0x0060 (0x0010)
    float DefaultValue; // 0x0070 (0x0004)
};

// ScriptStruct: Engine.IndexedCurve
struct IndexedCurve {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t KeyHandlesToIndices[0x50]; // 0x0008 (0x0050)
};

// ScriptStruct: Engine.KeyHandleMap
struct KeyHandleMap {
};

// ScriptStruct: Engine.RichCurveKey
struct RichCurveKey {
    uint8_t InterpMode; // 0x0000 (0x0001)
    uint8_t TangentMode; // 0x0001 (0x0001)
    uint8_t TangentWeightMode; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    float Time; // 0x0004 (0x0004)
    float Value; // 0x0008 (0x0004)
    float ArriveTangent; // 0x000C (0x0004)
    float ArriveTangentWeight; // 0x0010 (0x0004)
    float LeaveTangent; // 0x0014 (0x0004)
    float LeaveTangentWeight; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.TraversalEdge
struct TraversalEdge {
    uint8_t LocalUpNormal[0xC]; // 0x0000 (0x000C)
    uint8_t LocalSideNormal[0xC]; // 0x000C (0x000C)
    uint8_t LocalPositionOne[0xC]; // 0x0018 (0x000C)
    uint8_t LocalPositionTwo[0xC]; // 0x0024 (0x000C)
    uint8_t TransformedUpNormal[0xC]; // 0x0030 (0x000C)
    uint8_t TransformedSideNormal[0xC]; // 0x003C (0x000C)
    uint8_t TransformedPositionOne[0xC]; // 0x0048 (0x000C)
    uint8_t TransformedPositionTwo[0xC]; // 0x0054 (0x000C)
    struct TArray<uint8_t> LocalNormals; // 0x0060 (0x0010)
    struct TArray<uint8_t> LocalPositions; // 0x0070 (0x0010)
    struct TArray<uint8_t> TransformedNormals; // 0x0080 (0x0010)
    struct TArray<uint8_t> TransformedPositions; // 0x0090 (0x0010)
    uint8_t ClimbStateData[0x20]; // 0x00A0 (0x0020)
    class UObject* LoadedClimbStateData; // 0x00C0 (0x0008)
    bool PlayerClimbable; // 0x00C8 (0x0001)
    bool climbable; // 0x00C8 (0x0001)
    bool guardRail; // 0x00C8 (0x0001)
    bool forceVault; // 0x00C8 (0x0001)
    bool ladderEdge; // 0x00C8 (0x0001)
    bool windowEdge; // 0x00C8 (0x0001)
    bool bRoofEdge; // 0x00C8 (0x0001)
    bool CrowsCanPerch; // 0x00C8 (0x0001)
    bool DestructibleEdge; // 0x00C9 (0x0001)
    bool bWorldEdge; // 0x00C9 (0x0001)
    uint8_t Pad_0[0x2]; // 0x00CA (0x0002)
    uint8_t LadderRungType; // 0x00CC (0x0001)
    uint8_t CookedSurfaceType; // 0x00CD (0x0001)
    uint8_t Pad_1[0x2]; // 0x00CE (0x0002)
    uint8_t internalID[0x8]; // 0x00D0 (0x0008)
    uint64_t pMesh; // 0x00D8 (0x0008)
    struct FName traversalEdgeName; // 0x00E0 (0x0008)
    float DistanceToNavLinkStart; // 0x00E8 (0x0004)
};

// ScriptStruct: Engine.TraversalEdgeData
struct TraversalEdgeData {
    struct TArray<uint8_t> Normals; // 0x0000 (0x0010)
    struct TArray<uint8_t> Positions; // 0x0010 (0x0010)
    uint8_t ClimbStateData[0x20]; // 0x0020 (0x0020)
    bool PlayerClimbable; // 0x0040 (0x0001)
    bool climbable; // 0x0041 (0x0001)
    bool guardRail; // 0x0042 (0x0001)
    bool ladderEdge; // 0x0043 (0x0001)
    uint8_t LadderRungType; // 0x0044 (0x0001)
    bool CrowsCanPerch; // 0x0045 (0x0001)
};

// ScriptStruct: Engine.BendLocationReference
struct BendLocationReference {
    uint8_t LocHandle[0x10]; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.RuntimeCurveLinearColor
struct RuntimeCurveLinearColor {
    uint8_t ColorCurves[0x78]; // 0x0000 (0x0078)
    uint8_t Pad_0[0x168]; // 0x0078 (0x0168)
    class UObject* ExternalCurve; // 0x01E0 (0x0008)
};

// ScriptStruct: Engine.AnimInstanceProxy
struct AnimInstanceProxy {
};

// ScriptStruct: Engine.NavLinkCollectionEntry
struct NavLinkCollectionEntry {
    struct TArray<uint8_t> PointLinks; // 0x0000 (0x0010)
    struct TArray<uint8_t> SegmentLinks; // 0x0010 (0x0010)
    class UObject* SmartLinkComp; // 0x0020 (0x0008)
    bool bSmartLinkIsRelevant; // 0x0028 (0x0001)
};

// ScriptStruct: Engine.NavigationSegmentLink
struct NavigationSegmentLink : public NavigationLinkBase {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t LeftStart[0xC]; // 0x0030 (0x000C)
    uint8_t LeftEnd[0xC]; // 0x003C (0x000C)
    uint8_t RightStart[0xC]; // 0x0048 (0x000C)
    uint8_t RightEnd[0xC]; // 0x0054 (0x000C)
};

// ScriptStruct: Engine.NavigationLinkBase
struct NavigationLinkBase {
    float LeftProjectHeight; // 0x0000 (0x0004)
    float MaxFallDownLength; // 0x0004 (0x0004)
    uint8_t Direction; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    float SnapRadius; // 0x0010 (0x0004)
    float SnapHeight; // 0x0014 (0x0004)
    bool bUseSnapHeight; // 0x0018 (0x0001)
    bool bSnapToCheapestArea; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    class UClass* AreaClass; // 0x0020 (0x0008)
    uint8_t SupportedAgents[0x4]; // 0x0028 (0x0004)
    bool bSupportsAgent0; // 0x002C (0x0001)
    bool bSupportsAgent1; // 0x002C (0x0001)
    bool bSupportsAgent2; // 0x002C (0x0001)
    bool bSupportsAgent3; // 0x002C (0x0001)
    bool bSupportsAgent4; // 0x002C (0x0001)
    bool bSupportsAgent5; // 0x002C (0x0001)
    bool bSupportsAgent6; // 0x002C (0x0001)
    bool bSupportsAgent7; // 0x002C (0x0001)
    bool bSupportsAgent8; // 0x002D (0x0001)
    bool bSupportsAgent9; // 0x002D (0x0001)
    bool bSupportsAgent10; // 0x002D (0x0001)
    bool bSupportsAgent11; // 0x002D (0x0001)
    bool bSupportsAgent12; // 0x002D (0x0001)
    bool bSupportsAgent13; // 0x002D (0x0001)
    bool bSupportsAgent14; // 0x002D (0x0001)
    bool bSupportsAgent15; // 0x002D (0x0001)
};

// ScriptStruct: Engine.NavAgentSelector
struct NavAgentSelector {
    bool bSupportsAgent0; // 0x0000 (0x0001)
    bool bSupportsAgent1; // 0x0000 (0x0001)
    bool bSupportsAgent2; // 0x0000 (0x0001)
    bool bSupportsAgent3; // 0x0000 (0x0001)
    bool bSupportsAgent4; // 0x0000 (0x0001)
    bool bSupportsAgent5; // 0x0000 (0x0001)
    bool bSupportsAgent6; // 0x0000 (0x0001)
    bool bSupportsAgent7; // 0x0000 (0x0001)
    bool bSupportsAgent8; // 0x0001 (0x0001)
    bool bSupportsAgent9; // 0x0001 (0x0001)
    bool bSupportsAgent10; // 0x0001 (0x0001)
    bool bSupportsAgent11; // 0x0001 (0x0001)
    bool bSupportsAgent12; // 0x0001 (0x0001)
    bool bSupportsAgent13; // 0x0001 (0x0001)
    bool bSupportsAgent14; // 0x0001 (0x0001)
    bool bSupportsAgent15; // 0x0001 (0x0001)
};

// ScriptStruct: Engine.NavigationLink
struct NavigationLink : public NavigationLinkBase {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Left[0xC]; // 0x0030 (0x000C)
    uint8_t Right[0xC]; // 0x003C (0x000C)
};

// ScriptStruct: Engine.BendMeshMaterialParamsSnapshot
struct BendMeshMaterialParamsSnapshot {
    struct TArray<uint8_t> Values; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.BendMeshMaterialParamsSnapshot_Entry
struct BendMeshMaterialParamsSnapshot_Entry {
    struct FName ScalarParameterName; // 0x0000 (0x0008)
    struct FName MaxNumberName; // 0x0008 (0x0008)
    float Value; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.CinCinematicOverride
struct CinCinematicOverride {
    struct FName CinematicName; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.AnimNode_Base
struct AnimNode_Base {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t EvaluateGraphExposedInputs[0x28]; // 0x0008 (0x0028)
};

// ScriptStruct: Engine.ExposedValueHandler
struct ExposedValueHandler {
    struct FName BoundFunction; // 0x0000 (0x0008)
    struct TArray<uint8_t> CopyRecords; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.ExposedValueCopyRecord
struct ExposedValueCopyRecord {
    class UObject* SourceProperty; // 0x0000 (0x0008)
    struct FName SourcePropertyName; // 0x0008 (0x0008)
    struct FName SourceSubPropertyName; // 0x0010 (0x0008)
    int32_t SourceArrayIndex; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* DestProperty; // 0x0020 (0x0008)
    int32_t DestArrayIndex; // 0x0028 (0x0004)
    int32_t Size; // 0x002C (0x0004)
    uint8_t SourceByteOffset; // 0x0030 (0x0001)
    uint8_t SourceFieldMask; // 0x0031 (0x0001)
    uint8_t DestByteOffset; // 0x0032 (0x0001)
    uint8_t DestByteMask; // 0x0033 (0x0001)
    uint8_t DestFieldMask; // 0x0034 (0x0001)
    uint8_t PostCopyOperation; // 0x0035 (0x0001)
};

// ScriptStruct: Engine.BoneReference
struct BoneReference {
    struct FName BoneName; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.PoseLink
struct PoseLink : public PoseLinkBase {
};

// ScriptStruct: Engine.PoseLinkBase
struct PoseLinkBase {
    int32_t LinkID; // 0x0000 (0x0004)
};

// ScriptStruct: Engine.AnimNode_AssetPlayerBase
struct AnimNode_AssetPlayerBase : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    bool bIgnoreForRelevancyTest; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    int32_t GroupIndex; // 0x0034 (0x0004)
    uint8_t GroupRole; // 0x0038 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0039 (0x0003)
    float BlendWeight; // 0x003C (0x0004)
    float InternalTimeAccumulator; // 0x0040 (0x0004)
};

// ScriptStruct: Engine.AnimNode_SequencePlayer
struct AnimNode_SequencePlayer : public AnimNode_AssetPlayerBase {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    class UObject* Sequence; // 0x0058 (0x0008)
    class UObject* OutputPlaybackTime; // 0x0060 (0x0008)
    bool bLoopAnimation; // 0x0068 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0069 (0x0003)
    float PlayRate; // 0x006C (0x0004)
    float StartPosition; // 0x0070 (0x0004)
    bool bSnapshotPinInputsWhenStateStartsBlendingIn; // 0x0074 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0075 (0x0003)
    struct FName MasterTimelineName; // 0x0078 (0x0008)
};

// ScriptStruct: Engine.BlendSampleData
struct BlendSampleData {
    int32_t SampleDataIndex; // 0x0000 (0x0004)
    float TotalWeight; // 0x0004 (0x0004)
    float Time; // 0x0008 (0x0004)
    float PreviousTime; // 0x000C (0x0004)
};

// ScriptStruct: Engine.BlendFilter
struct BlendFilter {
};

// ScriptStruct: Engine.InterpolationParameter
struct InterpolationParameter {
    float InterpolationTime; // 0x0000 (0x0004)
    uint8_t InterpolationType; // 0x0004 (0x0001)
};

// ScriptStruct: Engine.InputScaleBias
struct InputScaleBias {
    float Scale; // 0x0000 (0x0004)
    float Bias; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.ComponentSpacePoseLink
struct ComponentSpacePoseLink : public PoseLinkBase {
};

// ScriptStruct: Engine.AnimSingleNodeInstanceProxy
struct AnimSingleNodeInstanceProxy : public AnimInstanceProxy {
};

// ScriptStruct: Engine.InputBlendPose
struct InputBlendPose {
    struct TArray<uint8_t> BranchFilters; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.BranchFilter
struct BranchFilter {
    struct FName BoneName; // 0x0000 (0x0008)
    int32_t BlendDepth; // 0x0008 (0x0004)
    int32_t InfluenceDepth; // 0x000C (0x0004)
    bool bStartWeightAtZeroWhenBlendDepthGreaterThanZero; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.AlphaBlend
struct AlphaBlend {
    uint8_t BlendOption; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* CustomCurve; // 0x0008 (0x0008)
    float BlendTime; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.BendBoneReferenceWithTypeInOverride
struct BendBoneReferenceWithTypeInOverride {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t BoneReference[0x10]; // 0x0010 (0x0010)
    struct FName BoneTypeInOverride; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.DirectoryPath
struct DirectoryPath {
    struct FString Path; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.UniqueNetIdRepl
struct UniqueNetIdRepl {
};

// ScriptStruct: Engine.ExposureSettings
struct ExposureSettings {
    int32_t LogOffset; // 0x0000 (0x0004)
    bool bFixed; // 0x0004 (0x0001)
};

// ScriptStruct: Engine.URL
struct URL {
    struct FString Protocol; // 0x0000 (0x0010)
    struct FString Host; // 0x0010 (0x0010)
    int32_t Port; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FString Map; // 0x0028 (0x0010)
    struct FString RedirectURL; // 0x0038 (0x0010)
    struct TArray<uint8_t> Op; // 0x0048 (0x0010)
    struct FString Portal; // 0x0058 (0x0010)
    int32_t Valid; // 0x0068 (0x0004)
};

// ScriptStruct: Engine.PrimitiveComponentPostPhysicsTickFunction
struct PrimitiveComponentPostPhysicsTickFunction : public TickFunction {
};

// ScriptStruct: Engine.ActorTickFunction
struct ActorTickFunction : public TickFunction {
};

// ScriptStruct: Engine.TickPrerequisite
struct TickPrerequisite {
};

// ScriptStruct: Engine.SimplygonRemeshingSettings
struct SimplygonRemeshingSettings {
    bool bActive; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t ScreenSize; // 0x0004 (0x0004)
    bool bRecalculateNormals; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    float HardAngleThreshold; // 0x000C (0x0004)
    int32_t MergeDistance; // 0x0010 (0x0004)
    bool bUseClippingPlane; // 0x0014 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0015 (0x0003)
    float ClippingLevel; // 0x0018 (0x0004)
    int32_t AxisIndex; // 0x001C (0x0004)
    bool bPlaneNegativeHalfspace; // 0x0020 (0x0001)
    bool bUseMassiveLOD; // 0x0021 (0x0001)
    bool bUseAggregateLOD; // 0x0022 (0x0001)
    uint8_t Pad_3[0x5]; // 0x0023 (0x0005)
    uint8_t MaterialLODSettings[0x28]; // 0x0028 (0x0028)
};

// ScriptStruct: Engine.SimplygonMaterialLODSettings
struct SimplygonMaterialLODSettings {
    bool bActive; // 0x0000 (0x0001)
    uint8_t MaterialLODType; // 0x0001 (0x0001)
    bool bUseAutomaticSizes; // 0x0002 (0x0001)
    uint8_t TextureWidth; // 0x0003 (0x0001)
    uint8_t TextureHeight; // 0x0004 (0x0001)
    uint8_t SamplingQuality; // 0x0005 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0006 (0x0002)
    int32_t GutterSpace; // 0x0008 (0x0004)
    uint8_t TextureStretch; // 0x000C (0x0001)
    bool bReuseExistingCharts; // 0x000D (0x0001)
    uint8_t Pad_1[0x2]; // 0x000E (0x0002)
    struct TArray<uint8_t> ChannelsToCast; // 0x0010 (0x0010)
    bool bBakeVertexData; // 0x0020 (0x0001)
    bool bBakeActorData; // 0x0021 (0x0001)
    bool bAllowMultiMaterial; // 0x0022 (0x0001)
    bool bPreferTwoSideMaterials; // 0x0023 (0x0001)
};

// ScriptStruct: Engine.SimplygonChannelCastingSettings
struct SimplygonChannelCastingSettings {
    uint8_t MaterialChannel; // 0x0000 (0x0001)
    uint8_t Caster; // 0x0001 (0x0001)
    bool bActive; // 0x0002 (0x0001)
    uint8_t ColorChannels; // 0x0003 (0x0001)
    int32_t BitsPerChannel; // 0x0004 (0x0004)
    bool bUseSRGB; // 0x0008 (0x0001)
    bool bBakeVertexColors; // 0x0009 (0x0001)
    bool bFlipBackfacingNormals; // 0x000A (0x0001)
    bool bUseTangentSpaceNormals; // 0x000B (0x0001)
    bool bFlipGreenChannel; // 0x000C (0x0001)
};

// ScriptStruct: Engine.CanvasUVTri
struct CanvasUVTri {
    uint8_t V0_Pos[0x8]; // 0x0000 (0x0008)
    uint8_t V0_UV[0x8]; // 0x0008 (0x0008)
    uint8_t V0_Color[0x10]; // 0x0010 (0x0010)
    uint8_t V1_Pos[0x8]; // 0x0020 (0x0008)
    uint8_t V1_UV[0x8]; // 0x0028 (0x0008)
    uint8_t V1_Color[0x10]; // 0x0030 (0x0010)
    uint8_t V2_Pos[0x8]; // 0x0040 (0x0008)
    uint8_t V2_UV[0x8]; // 0x0048 (0x0008)
    uint8_t V2_Color[0x10]; // 0x0050 (0x0010)
};

// ScriptStruct: Engine.FontRenderInfo
struct FontRenderInfo {
    bool bClipText; // 0x0000 (0x0001)
    bool bEnableShadow; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t GlowInfo[0x24]; // 0x0004 (0x0024)
};

// ScriptStruct: Engine.DepthFieldGlowInfo
struct DepthFieldGlowInfo {
    bool bEnableGlow; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t GlowColor[0x10]; // 0x0004 (0x0010)
    uint8_t GlowOuterRadius[0x8]; // 0x0014 (0x0008)
    uint8_t GlowInnerRadius[0x8]; // 0x001C (0x0008)
};

// ScriptStruct: Engine.Redirector
struct Redirector {
    struct FName OldName; // 0x0000 (0x0008)
    struct FName NewName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.FilePath
struct FilePath {
    struct FString FilePath; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.ComponentReference
struct ComponentReference {
    class UObject* OtherActor; // 0x0000 (0x0008)
    struct FName ComponentProperty; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.ConstrainComponentPropName
struct ConstrainComponentPropName {
    struct FName ComponentName; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.WalkableSlopeOverride
struct WalkableSlopeOverride {
    uint8_t WalkableSlopeBehavior; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float WalkableSlopeAngle; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.RepAttachment
struct RepAttachment {
    class UObject* AttachParent; // 0x0000 (0x0008)
    uint8_t LocationOffset[0xC]; // 0x0008 (0x000C)
    uint8_t RelativeScale3D[0xC]; // 0x0014 (0x000C)
    uint8_t RotationOffset[0xC]; // 0x0020 (0x000C)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct FName AttachSocket; // 0x0030 (0x0008)
    class UObject* AttachComponent; // 0x0038 (0x0008)
};

// ScriptStruct: Engine.RepMovement
struct RepMovement {
    uint8_t LinearVelocity[0xC]; // 0x0000 (0x000C)
    uint8_t AngularVelocity[0xC]; // 0x000C (0x000C)
    uint8_t Location[0xC]; // 0x0018 (0x000C)
    uint8_t Rotation[0xC]; // 0x0024 (0x000C)
    bool bSimulatedPhysicSleep; // 0x0030 (0x0001)
    bool bRepPhysics; // 0x0030 (0x0001)
    uint8_t LocationQuantizationLevel; // 0x0031 (0x0001)
    uint8_t VelocityQuantizationLevel; // 0x0032 (0x0001)
    uint8_t RotationQuantizationLevel; // 0x0033 (0x0001)
};

// ScriptStruct: Engine.MeshMergingSettings
struct MeshMergingSettings {
    bool bGenerateLightMapUV; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t TargetLightMapUVChannel; // 0x0004 (0x0004)
    int32_t TargetLightMapResolution; // 0x0008 (0x0004)
    bool bImportVertexColors; // 0x000C (0x0001)
    bool bPivotPointAtZero; // 0x000D (0x0001)
    bool bMergePhysicsData; // 0x000E (0x0001)
    bool bMergeMaterials; // 0x000F (0x0001)
    uint8_t MaterialSettings[0x74]; // 0x0010 (0x0074)
    bool bBakeVertexData; // 0x0084 (0x0001)
    bool bExportNormalMap; // 0x0085 (0x0001)
    bool bExportMetallicMap; // 0x0086 (0x0001)
    bool bExportRoughnessMap; // 0x0087 (0x0001)
    bool bExportSpecularMap; // 0x0088 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0089 (0x0003)
    int32_t MergedMaterialAtlasResolution; // 0x008C (0x0004)
};

// ScriptStruct: Engine.MaterialProxySettings
struct MaterialProxySettings {
    uint8_t TextureSize[0x8]; // 0x0000 (0x0008)
    uint8_t TextureSizingType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float GutterSpace; // 0x000C (0x0004)
    bool bNormalMap; // 0x0010 (0x0001)
    bool bMetallicMap; // 0x0011 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0012 (0x0002)
    float MetallicConstant; // 0x0014 (0x0004)
    bool bRoughnessMap; // 0x0018 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0019 (0x0003)
    float RoughnessConstant; // 0x001C (0x0004)
    bool bSpecularMap; // 0x0020 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0021 (0x0003)
    float SpecularConstant; // 0x0024 (0x0004)
    bool bEmissiveMap; // 0x0028 (0x0001)
    bool bOpacityMap; // 0x0029 (0x0001)
    uint8_t Pad_4[0x2]; // 0x002A (0x0002)
    uint8_t DiffuseTextureSize[0x8]; // 0x002C (0x0008)
    uint8_t NormalTextureSize[0x8]; // 0x0034 (0x0008)
    uint8_t MetallicTextureSize[0x8]; // 0x003C (0x0008)
    uint8_t RoughnessTextureSize[0x8]; // 0x0044 (0x0008)
    uint8_t EmissiveTextureSize[0x8]; // 0x004C (0x0008)
    uint8_t OpacityTextureSize[0x8]; // 0x0054 (0x0008)
    uint8_t SpecularTextureSize[0x8]; // 0x005C (0x0008)
    bool bAmbientOcclusionMap; // 0x0064 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0065 (0x0003)
    uint8_t AmbientOcclusionTextureSize[0x8]; // 0x0068 (0x0008)
    uint8_t SamplingQuality; // 0x0070 (0x0001)
    uint8_t UVStrech; // 0x0071 (0x0001)
    bool bSplitProxyMaterialBasedOnType; // 0x0072 (0x0001)
};

// ScriptStruct: Engine.MeshBuildSettings
struct MeshBuildSettings {
    bool bUseMikkTSpace; // 0x0000 (0x0001)
    bool bRecomputeNormals; // 0x0001 (0x0001)
    bool bRecomputeTangents; // 0x0002 (0x0001)
    bool bRemoveDegenerates; // 0x0003 (0x0001)
    bool bBuildAdjacencyBuffer; // 0x0004 (0x0001)
    bool bBuildReversedIndexBuffer; // 0x0005 (0x0001)
    bool bUseFullPrecisionUVs; // 0x0006 (0x0001)
    bool bGenerateLightmapUVs; // 0x0007 (0x0001)
    int32_t MinLightmapResolution; // 0x0008 (0x0004)
    int32_t SrcLightmapIndex; // 0x000C (0x0004)
    int32_t DstLightmapIndex; // 0x0010 (0x0004)
    float BuildScale; // 0x0014 (0x0004)
    uint8_t BuildScale3D[0xC]; // 0x0018 (0x000C)
    float DistanceFieldResolutionScale; // 0x0024 (0x0004)
    bool bGenerateDistanceFieldAsIfTwoSided; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    class UObject* DistanceFieldReplacementMesh; // 0x0030 (0x0008)
    uint8_t VertexCompression; // 0x0038 (0x0001)
};

// ScriptStruct: Engine.MeshReductionSettings
struct MeshReductionSettings {
    float PercentTriangles; // 0x0000 (0x0004)
    float ScreenSize; // 0x0004 (0x0004)
    float MaxDeviation; // 0x0008 (0x0004)
    uint8_t MetricToUse; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    float WeldingThreshold; // 0x0010 (0x0004)
    float HardAngleThreshold; // 0x0014 (0x0004)
    uint8_t SilhouetteImportance; // 0x0018 (0x0001)
    uint8_t TextureImportance; // 0x0019 (0x0001)
    uint8_t ShadingImportance; // 0x001A (0x0001)
    bool bActive; // 0x001B (0x0001)
    bool bRecalculateNormals; // 0x001C (0x0001)
    uint8_t Pad_1[0x3]; // 0x001D (0x0003)
    int32_t BaseLODModel; // 0x0020 (0x0004)
    bool bGenerateUniqueLightmapUVs; // 0x0024 (0x0001)
    bool bKeepSymmetry; // 0x0025 (0x0001)
    bool bVisibilityAided; // 0x0026 (0x0001)
    bool bCullOccluded; // 0x0027 (0x0001)
    uint8_t VisibilityAggressiveness; // 0x0028 (0x0001)
    uint8_t VertexColorImportance; // 0x0029 (0x0001)
    uint8_t Pad_2[0x6]; // 0x002A (0x0006)
    uint8_t MaterialLODSettings[0x28]; // 0x0030 (0x0028)
    uint8_t MaterialProxySettings[0x74]; // 0x0058 (0x0074)
    bool bSimplifyMaterials; // 0x00CC (0x0001)
};

// ScriptStruct: Engine.MeshProxySettings
struct MeshProxySettings {
    int32_t ScreenSize; // 0x0000 (0x0004)
    uint8_t MaterialSettings[0x74]; // 0x0004 (0x0074)
    int32_t TextureWidth; // 0x0078 (0x0004)
    int32_t TextureHeight; // 0x007C (0x0004)
    bool bExportNormalMap; // 0x0080 (0x0001)
    bool bExportMetallicMap; // 0x0081 (0x0001)
    bool bExportRoughnessMap; // 0x0082 (0x0001)
    bool bExportSpecularMap; // 0x0083 (0x0001)
    uint8_t Material[0x44]; // 0x0084 (0x0044)
    float MergeDistance; // 0x00C8 (0x0004)
    float HardAngleThreshold; // 0x00CC (0x0004)
    int32_t LightMapResolution; // 0x00D0 (0x0004)
    bool bRecalculateNormals; // 0x00D4 (0x0001)
    bool bUseClippingPlane; // 0x00D5 (0x0001)
    uint8_t Pad_0[0x2]; // 0x00D6 (0x0002)
    float ClippingLevel; // 0x00D8 (0x0004)
    int32_t AxisIndex; // 0x00DC (0x0004)
    bool bPlaneNegativeHalfspace; // 0x00E0 (0x0001)
    bool bBakeVertexData; // 0x00E1 (0x0001)
    bool bAggregateMeshes; // 0x00E2 (0x0001)
    uint8_t AggregatorMode; // 0x00E3 (0x0001)
    bool bUseCustomHemisphere; // 0x00E4 (0x0001)
};

// ScriptStruct: Engine.MaterialSimplificationSettings
struct MaterialSimplificationSettings {
    uint8_t BaseColorMapSize[0x8]; // 0x0000 (0x0008)
    bool bNormalMap; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    uint8_t NormalMapSize[0x8]; // 0x000C (0x0008)
    float MetallicConstant; // 0x0014 (0x0004)
    bool bMetallicMap; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    uint8_t MetallicMapSize[0x8]; // 0x001C (0x0008)
    float RoughnessConstant; // 0x0024 (0x0004)
    bool bRoughnessMap; // 0x0028 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0029 (0x0003)
    uint8_t RoughnessMapSize[0x8]; // 0x002C (0x0008)
    float SpecularConstant; // 0x0034 (0x0004)
    bool bSpecularMap; // 0x0038 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0039 (0x0003)
    uint8_t SpecularMapSize[0x8]; // 0x003C (0x0008)
};

// ScriptStruct: Engine.POV
struct POV {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Rotation[0xC]; // 0x000C (0x000C)
    float FOV; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.AnimUpdateRateParameters
struct AnimUpdateRateParameters {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    int32_t UpdateRate; // 0x0004 (0x0004)
    int32_t EvaluationRate; // 0x0008 (0x0004)
    bool bInterpolateSkippedFrames; // 0x000C (0x0001)
    bool bShouldUseLodMap; // 0x000C (0x0001)
    bool bSkipUpdate; // 0x000C (0x0001)
    bool bSkipEvaluation; // 0x000C (0x0001)
    uint8_t Pad_1[0x13]; // 0x000D (0x0013)
    float TickedPoseOffestTime; // 0x0020 (0x0004)
    float AdditionalTime; // 0x0024 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0028 (0x0004)
    int32_t BaseNonRenderedUpdateRate; // 0x002C (0x0004)
    struct TArray<uint8_t> BaseVisibleDistanceFactorThesholds; // 0x0030 (0x0010)
    uint8_t LODToFrameSkipMap[0x50]; // 0x0040 (0x0050)
    int32_t MaxEvalRateForInterpolation; // 0x0090 (0x0004)
    uint8_t ShiftBucket; // 0x0094 (0x0001)
};

// ScriptStruct: Engine.AnimSlotDesc
struct AnimSlotDesc {
    struct FName SlotName; // 0x0000 (0x0008)
    int32_t NumChannels; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.AnimSlotInfo
struct AnimSlotInfo {
    struct FName SlotName; // 0x0000 (0x0008)
    struct TArray<uint8_t> ChannelWeights; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.MTDResult
struct MTDResult {
    uint8_t Direction[0xC]; // 0x0000 (0x000C)
    float Distance; // 0x000C (0x0004)
};

// ScriptStruct: Engine.OverlapResult
struct OverlapResult {
    uint64_t Actor; // 0x0000 (0x0008)
    uint64_t Component; // 0x0008 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0010 (0x0008)
    bool bBlockingHit; // 0x0018 (0x0001)
};

// ScriptStruct: Engine.PrimitiveMaterialRef
struct PrimitiveMaterialRef {
    class UObject* Primitive; // 0x0000 (0x0008)
    class UObject* Decal; // 0x0008 (0x0008)
    int32_t ElementIndex; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.SwarmDebugOptions
struct SwarmDebugOptions {
    bool bDistributionEnabled; // 0x0000 (0x0001)
    bool bForceContentExport; // 0x0000 (0x0001)
    bool bInitialized; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.LightmassDebugOptions
struct LightmassDebugOptions {
    bool bDebugMode; // 0x0000 (0x0001)
    bool bStatsEnabled; // 0x0000 (0x0001)
    bool bGatherBSPSurfacesAcrossComponents; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float CoplanarTolerance; // 0x0004 (0x0004)
    bool bUseImmediateImport; // 0x0008 (0x0001)
    bool bImmediateProcessMappings; // 0x0008 (0x0001)
    bool bSortMappings; // 0x0008 (0x0001)
    bool bDumpBinaryFiles; // 0x0008 (0x0001)
    bool bDebugMaterials; // 0x0008 (0x0001)
    bool bPadMappings; // 0x0008 (0x0001)
    bool bDebugPaddings; // 0x0008 (0x0001)
    bool bOnlyCalcDebugTexelMappings; // 0x0008 (0x0001)
    bool bUseRandomColors; // 0x0009 (0x0001)
    bool bColorBordersGreen; // 0x0009 (0x0001)
    bool bColorByExecutionTime; // 0x0009 (0x0001)
    uint8_t Pad_1[0x2]; // 0x000A (0x0002)
    float ExecutionTimeDivisor; // 0x000C (0x0004)
};

// ScriptStruct: Engine.LightmassPrimitiveSettings
struct LightmassPrimitiveSettings {
    bool bUseTwoSidedLighting; // 0x0000 (0x0001)
    bool bShadowIndirectOnly; // 0x0000 (0x0001)
    bool bUseEmissiveForStaticLighting; // 0x0000 (0x0001)
    bool bUseVertexNormalForHemisphereGather; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float EmissiveLightFalloffExponent; // 0x0004 (0x0004)
    float EmissiveLightExplicitInfluenceRadius; // 0x0008 (0x0004)
    float EmissiveBoost; // 0x000C (0x0004)
    float DiffuseBoost; // 0x0010 (0x0004)
    float FullyOccludedSamplesFraction; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.LightmassDirectionalLightSettings
struct LightmassDirectionalLightSettings : public LightmassLightSettings {
    uint8_t Pad_0[0xC]; // 0x0000 (0x000C)
    float LightSourceAngle; // 0x000C (0x0004)
};

// ScriptStruct: Engine.LightmassLightSettings
struct LightmassLightSettings {
    float IndirectLightingSaturation; // 0x0000 (0x0004)
    float ShadowExponent; // 0x0004 (0x0004)
    bool bUseAreaShadowsForStationaryLight; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.LightmassPointLightSettings
struct LightmassPointLightSettings : public LightmassLightSettings {
};

// ScriptStruct: Engine.LocalizedSubtitle
struct LocalizedSubtitle {
    struct FString LanguageExt; // 0x0000 (0x0010)
    struct TArray<uint8_t> Subtitles; // 0x0010 (0x0010)
    bool bMature; // 0x0020 (0x0001)
    bool bManualWordWrap; // 0x0020 (0x0001)
    bool bSingleLine; // 0x0020 (0x0001)
};

// ScriptStruct: Engine.BendSubtitleCue
struct BendSubtitleCue {
    struct FName SubtitleID; // 0x0000 (0x0008)
    struct FString String; // 0x0008 (0x0010)
    struct FString CharacterName; // 0x0018 (0x0010)
    int32_t CharacterID; // 0x0028 (0x0004)
    float StartTime; // 0x002C (0x0004)
    float StopTime; // 0x0030 (0x0004)
};

// ScriptStruct: Engine.BasedPosition
struct BasedPosition {
    class UObject* Base; // 0x0000 (0x0008)
    uint8_t Position[0xC]; // 0x0008 (0x000C)
    uint8_t CachedBaseLocation[0xC]; // 0x0014 (0x000C)
    uint8_t CachedBaseRotation[0xC]; // 0x0020 (0x000C)
    uint8_t CachedTransPosition[0xC]; // 0x002C (0x000C)
};

// ScriptStruct: Engine.FractureEffect
struct FractureEffect {
    class UObject* ParticleSystem; // 0x0000 (0x0008)
    class UObject* Sound; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.CollisionImpactData
struct CollisionImpactData {
    struct TArray<uint8_t> ContactInfos; // 0x0000 (0x0010)
    uint8_t TotalNormalImpulse[0xC]; // 0x0010 (0x000C)
    uint8_t TotalFrictionImpulse[0xC]; // 0x001C (0x000C)
};

// ScriptStruct: Engine.RigidBodyContactInfo
struct RigidBodyContactInfo {
    uint8_t ContactPosition[0xC]; // 0x0000 (0x000C)
    uint8_t ContactNormal[0xC]; // 0x000C (0x000C)
    float ContactPenetration; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* PhysMaterial; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.RigidBodyErrorCorrection
struct RigidBodyErrorCorrection {
    float LinearDeltaThresholdSq; // 0x0000 (0x0004)
    float LinearInterpAlpha; // 0x0004 (0x0004)
    float LinearRecipFixTime; // 0x0008 (0x0004)
    float AngularDeltaThreshold; // 0x000C (0x0004)
    float AngularInterpAlpha; // 0x0010 (0x0004)
    float AngularRecipFixTime; // 0x0014 (0x0004)
    float BodySpeedThresholdSq; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.RigidBodyState
struct RigidBodyState {
    uint8_t Position[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t Quaternion[0x10]; // 0x0010 (0x0010)
    uint8_t LinVel[0xC]; // 0x0020 (0x000C)
    uint8_t AngVel[0xC]; // 0x002C (0x000C)
    uint8_t Flags; // 0x0038 (0x0001)
};

// ScriptStruct: Engine.CollisionResponseContainer
struct CollisionResponseContainer {
    uint8_t WorldStatic; // 0x0000 (0x0001)
    uint8_t WorldDynamic; // 0x0001 (0x0001)
    uint8_t Pawn; // 0x0002 (0x0001)
    uint8_t Visibility; // 0x0003 (0x0001)
    uint8_t Camera; // 0x0004 (0x0001)
    uint8_t PhysicsBody; // 0x0005 (0x0001)
    uint8_t Vehicle; // 0x0006 (0x0001)
    uint8_t Destructible; // 0x0007 (0x0001)
    uint8_t EngineTraceChannel1; // 0x0008 (0x0001)
    uint8_t EngineTraceChannel2; // 0x0009 (0x0001)
    uint8_t EngineTraceChannel3; // 0x000A (0x0001)
    uint8_t EngineTraceChannel4; // 0x000B (0x0001)
    uint8_t EngineTraceChannel5; // 0x000C (0x0001)
    uint8_t EngineTraceChannel6; // 0x000D (0x0001)
    uint8_t GameTraceChannel1; // 0x000E (0x0001)
    uint8_t GameTraceChannel2; // 0x000F (0x0001)
    uint8_t GameTraceChannel3; // 0x0010 (0x0001)
    uint8_t GameTraceChannel4; // 0x0011 (0x0001)
    uint8_t GameTraceChannel5; // 0x0012 (0x0001)
    uint8_t GameTraceChannel6; // 0x0013 (0x0001)
    uint8_t GameTraceChannel7; // 0x0014 (0x0001)
    uint8_t GameTraceChannel8; // 0x0015 (0x0001)
    uint8_t GameTraceChannel9; // 0x0016 (0x0001)
    uint8_t GameTraceChannel10; // 0x0017 (0x0001)
    uint8_t GameTraceChannel11; // 0x0018 (0x0001)
    uint8_t GameTraceChannel12; // 0x0019 (0x0001)
    uint8_t GameTraceChannel13; // 0x001A (0x0001)
    uint8_t GameTraceChannel14; // 0x001B (0x0001)
    uint8_t GameTraceChannel15; // 0x001C (0x0001)
    uint8_t GameTraceChannel16; // 0x001D (0x0001)
    uint8_t GameTraceChannel17; // 0x001E (0x0001)
    uint8_t GameTraceChannel18; // 0x001F (0x0001)
};

// ScriptStruct: Engine.ResponseChannel
struct ResponseChannel {
    struct FName Channel; // 0x0000 (0x0008)
    uint8_t Response; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.LightingChannels
struct LightingChannels {
    bool bChannel0; // 0x0000 (0x0001)
    bool bChannel1; // 0x0001 (0x0001)
    bool bChannel2; // 0x0002 (0x0001)
};

// ScriptStruct: Engine.EdGraphPinType
struct EdGraphPinType {
    struct FString PinCategory; // 0x0000 (0x0010)
    struct FString PinSubCategory; // 0x0010 (0x0010)
    uint64_t PinSubCategoryObject; // 0x0020 (0x0008)
    uint8_t PinSubCategoryMemberReference[0x20]; // 0x0028 (0x0020)
    bool bIsArray; // 0x0048 (0x0001)
    bool bIsReference; // 0x0049 (0x0001)
    uint8_t Pad_0[0x1]; // 0x004A (0x0001)
    bool bIsConst; // 0x004B (0x0001)
    bool bIsWeakPointer; // 0x004C (0x0001)
};

// ScriptStruct: Engine.EditedDocumentInfo
struct EditedDocumentInfo {
    class UObject* EditedObject; // 0x0000 (0x0008)
    uint8_t SavedViewOffset[0x8]; // 0x0008 (0x0008)
    float SavedZoomAmount; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.BPInterfaceDescription
struct BPInterfaceDescription {
    class UClass* Interface; // 0x0000 (0x0008)
    struct TArray<uint8_t> Graphs; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.BPVariableDescription
struct BPVariableDescription {
    struct FName VarName; // 0x0000 (0x0008)
    uint8_t VarGuid[0x10]; // 0x0008 (0x0010)
    uint8_t VarType[0x50]; // 0x0018 (0x0050)
    struct FString FriendlyName; // 0x0068 (0x0010)
    struct FText Category; // 0x0078 (0x0018)
    uint8_t PropertyFlags[0x8]; // 0x0090 (0x0008)
    struct FName RepNotifyFunc; // 0x0098 (0x0008)
    struct TArray<uint8_t> MetaDataArray; // 0x00A0 (0x0010)
    struct FString DefaultValue; // 0x00B0 (0x0010)
};

// ScriptStruct: Engine.BPVariableMetaDataEntry
struct BPVariableMetaDataEntry {
    struct FName DataKey; // 0x0000 (0x0008)
    struct FString DataValue; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.MemberReference
struct MemberReference {
    class UObject* MemberParent; // 0x0000 (0x0008)
    struct FString MemberScope; // 0x0008 (0x0010)
    struct FName MemberName; // 0x0018 (0x0008)
    uint8_t MemberGuid[0x10]; // 0x0020 (0x0010)
    bool bSelfContext; // 0x0030 (0x0001)
    bool bWasDeprecated; // 0x0031 (0x0001)
};

// ScriptStruct: Engine.OverlapInfo
struct OverlapInfo {
};

// ScriptStruct: Engine.BendLandscapeProxySettings
struct BendLandscapeProxySettings {
    bool bOverrideMinimumFoliageSize; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float MinimumFoliageSize; // 0x0004 (0x0004)
    bool bOverrideFoliageOverlapLimit; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    float FoliageOverlapLimit; // 0x000C (0x0004)
    bool bOverrideFoliageWidthScale; // 0x0010 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0011 (0x0003)
    float FoliageWidthScale; // 0x0014 (0x0004)
    bool bOverrideMinimumMeshVolume; // 0x0018 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0019 (0x0003)
    float MinimumMeshVolume; // 0x001C (0x0004)
    bool bOverrideMeshPolyKeepPercent; // 0x0020 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0021 (0x0003)
    float MeshPolyKeepPercent; // 0x0024 (0x0004)
    bool bOverrideLandscapeInteriorKeepPercent; // 0x0028 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0029 (0x0003)
    float LandscapeInteriorKeepPercent; // 0x002C (0x0004)
    bool bOverrideLandscapeBoundaryKeepPercent; // 0x0030 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0031 (0x0003)
    float LandscapeBoundaryKeepPercent; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.BendNonLandscapeProxySettings
struct BendNonLandscapeProxySettings {
    bool bOverrideNeedsProxy; // 0x0000 (0x0001)
    bool bNeedsProxy; // 0x0000 (0x0001)
    bool bOverrideIsInterior; // 0x0000 (0x0001)
    bool bIsInterior; // 0x0000 (0x0001)
    bool bOverrideHasFloor; // 0x0000 (0x0001)
    bool bHasFloor; // 0x0000 (0x0001)
    bool bOverrideNeedsCollision; // 0x0000 (0x0001)
    bool bNeedsCollision; // 0x0000 (0x0001)
    bool bOverrideTwoSidedMasked; // 0x0001 (0x0001)
    bool bTwoSidedMasked; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    bool bOverrideMeshQuality; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    float MeshQuality; // 0x0008 (0x0004)
    bool bOverrideTextureQuality; // 0x000C (0x0001)
    uint8_t Pad_2[0x3]; // 0x000D (0x0003)
    int32_t TextureQuality; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.BodyInstance
struct BodyInstance {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    uint8_t Scale3D[0xC]; // 0x0004 (0x000C)
    uint8_t Pad_1[0x4]; // 0x0010 (0x0004)
    uint8_t ResponseToChannels[0x20]; // 0x0014 (0x0020)
    uint8_t Pad_2[0x4]; // 0x0034 (0x0004)
    struct FName CollisionProfileName; // 0x0038 (0x0008)
    uint8_t CollisionResponses[0x30]; // 0x0040 (0x0030)
    uint8_t Pad_3[0x4]; // 0x0070 (0x0004)
    bool bUseCCD; // 0x0074 (0x0001)
    bool bNotifyRigidBodyCollision; // 0x0074 (0x0001)
    bool bSimulatePhysics; // 0x0074 (0x0001)
    bool bOverrideMass; // 0x0074 (0x0001)
    bool bEnableGravity; // 0x0074 (0x0001)
    bool bAutoWeld; // 0x0074 (0x0001)
    bool bForceWeld; // 0x0074 (0x0001)
    bool bStartAwake; // 0x0075 (0x0001)
    bool bGenerateWakeEvents; // 0x0075 (0x0001)
    bool bUpdateMassWhenScaleChanges; // 0x0075 (0x0001)
    bool bLockTranslation; // 0x0075 (0x0001)
    bool bLockRotation; // 0x0075 (0x0001)
    bool bLockXTranslation; // 0x0075 (0x0001)
    bool bLockYTranslation; // 0x0075 (0x0001)
    bool bLockZTranslation; // 0x0075 (0x0001)
    bool bLockXRotation; // 0x0076 (0x0001)
    bool bLockYRotation; // 0x0076 (0x0001)
    bool bLockZRotation; // 0x0076 (0x0001)
    bool bOverrideMaxAngularVelocity; // 0x0076 (0x0001)
    bool bUseAsyncScene; // 0x0076 (0x0001)
    bool bOverrideMaxDepenetrationVelocity; // 0x0076 (0x0001)
    bool bOverrideWalkableSlopeOnInstance; // 0x0076 (0x0001)
    uint8_t Pad_4[0x1]; // 0x0077 (0x0001)
    float MaxDepenetrationVelocity; // 0x0078 (0x0004)
    float MassInKg; // 0x007C (0x0004)
    float LinearDamping; // 0x0080 (0x0004)
    float AngularDamping; // 0x0084 (0x0004)
    uint8_t CustomDOFPlaneNormal[0xC]; // 0x0088 (0x000C)
    uint8_t COMNudge[0xC]; // 0x0094 (0x000C)
    float MassScale; // 0x00A0 (0x0004)
    uint8_t Pad_5[0x14]; // 0x00A4 (0x0014)
    uint8_t WalkableSlopeOverride[0x8]; // 0x00B8 (0x0008)
    class UObject* PhysMaterialOverride; // 0x00C0 (0x0008)
    float MaxAngularVelocity; // 0x00C8 (0x0004)
    float CustomSleepThresholdMultiplier; // 0x00CC (0x0004)
    float PhysicsBlendWeight; // 0x00D0 (0x0004)
    int32_t PositionSolverIterationCount; // 0x00D4 (0x0004)
    uint8_t Pad_6[0x38]; // 0x00D8 (0x0038)
    uint8_t RigidActorSyncId[0x8]; // 0x0110 (0x0008)
    uint8_t RigidActorAsyncId[0x8]; // 0x0118 (0x0008)
    int32_t VelocitySolverIterationCount; // 0x0120 (0x0004)
    uint8_t Pad_7[0x88]; // 0x0124 (0x0088)
    uint8_t SleepFamily; // 0x01AC (0x0001)
    uint8_t DOFMode; // 0x01AD (0x0001)
    uint8_t CollisionEnabled; // 0x01AE (0x0001)
    uint8_t ObjectType; // 0x01AF (0x0001)
};

// ScriptStruct: Engine.CollisionResponse
struct CollisionResponse {
    uint8_t ResponseToChannels[0x20]; // 0x0000 (0x0020)
    struct TArray<uint8_t> ResponseArray; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.NavigationFilterFlags
struct NavigationFilterFlags {
    bool bNavFlag0; // 0x0000 (0x0001)
    bool bNavFlag1; // 0x0000 (0x0001)
    bool bNavFlag2; // 0x0000 (0x0001)
    bool bNavFlag3; // 0x0000 (0x0001)
    bool bNavFlag4; // 0x0000 (0x0001)
    bool bNavFlag5; // 0x0000 (0x0001)
    bool bNavFlag6; // 0x0000 (0x0001)
    bool bNavFlag7; // 0x0000 (0x0001)
    bool bNavFlag8; // 0x0001 (0x0001)
    bool bNavFlag9; // 0x0001 (0x0001)
    bool bNavFlag10; // 0x0001 (0x0001)
    bool bNavFlag11; // 0x0001 (0x0001)
    bool bNavFlag12; // 0x0001 (0x0001)
    bool bNavFlag13; // 0x0001 (0x0001)
    bool bNavFlag14; // 0x0001 (0x0001)
    bool bNavFlag15; // 0x0001 (0x0001)
};

// ScriptStruct: Engine.NavigationFilterArea
struct NavigationFilterArea {
    class UClass* AreaClass; // 0x0000 (0x0008)
    float TravelCostOverride; // 0x0008 (0x0004)
    float EnteringCostOverride; // 0x000C (0x0004)
    bool bIsExcluded; // 0x0010 (0x0001)
    bool bOverrideTravelCost; // 0x0010 (0x0001)
    bool bOverrideEnteringCost; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.NavDataConfig
struct NavDataConfig : public NavAgentProperties {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    uint8_t Color[0x4]; // 0x0028 (0x0004)
    uint8_t DefaultQueryExtent[0xC]; // 0x002C (0x000C)
    class UClass* NavigationDataClass; // 0x0038 (0x0008)
    uint8_t NavigationDataClassName[0x10]; // 0x0040 (0x0010)
};

// ScriptStruct: Engine.NavAgentProperties
struct NavAgentProperties : public MovementProperties {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FName Name; // 0x0008 (0x0008)
    float AgentRadius; // 0x0010 (0x0004)
    float AgentHeight; // 0x0014 (0x0004)
    float AgentStepHeight; // 0x0018 (0x0004)
    float NavWalkingSearchHeightScale; // 0x001C (0x0004)
    class UClass* PreferredNavData; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.MovementProperties
struct MovementProperties {
    bool bCanCrouch; // 0x0000 (0x0001)
    bool bCanJump; // 0x0000 (0x0001)
    bool bCanWalk; // 0x0000 (0x0001)
    bool bCanSwim; // 0x0000 (0x0001)
    bool bCanFly; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.LatentActionManager
struct LatentActionManager {
};

// ScriptStruct: Engine.ActorRecord
struct ActorRecord {
    int32_t SaveVersion; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName ActorKey; // 0x0008 (0x0008)
    struct FString ActorName; // 0x0010 (0x0010)
    bool IsActorHiddenInGame; // 0x0020 (0x0001)
    bool IsActorEnableCollision; // 0x0021 (0x0001)
    uint8_t Pad_1[0x6]; // 0x0022 (0x0006)
    struct TArray<uint8_t> ActorData; // 0x0028 (0x0010)
};

// ScriptStruct: Engine.SaveGameMetadata
struct SaveGameMetadata {
    struct FString Title; // 0x0000 (0x0010)
    struct FString SubTitle; // 0x0010 (0x0010)
    struct FString Detail; // 0x0020 (0x0010)
    int32_t SaveGameSize; // 0x0030 (0x0004)
    uint8_t SaveGameType; // 0x0034 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0035 (0x0003)
    uint8_t SaveDateTime[0x8]; // 0x0038 (0x0008)
    bool PlayGoFullInstallRequired; // 0x0040 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0041 (0x0007)
    struct TArray<uint8_t> PNGData; // 0x0048 (0x0010)
};

// ScriptStruct: Engine.ActorPayload
struct ActorPayload {
    class UObject* Actor; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.StartAsyncSimulationFunction
struct StartAsyncSimulationFunction : public TickFunction {
};

// ScriptStruct: Engine.EndPhysicsTickFunction
struct EndPhysicsTickFunction : public TickFunction {
};

// ScriptStruct: Engine.StartPhysicsTickFunction
struct StartPhysicsTickFunction : public TickFunction {
};

// ScriptStruct: Engine.LevelViewportInfo
struct LevelViewportInfo {
    uint8_t CamPosition[0xC]; // 0x0000 (0x000C)
    uint8_t CamRotation[0xC]; // 0x000C (0x000C)
    float CamOrthoZoom; // 0x0018 (0x0004)
    bool CamUpdated; // 0x001C (0x0001)
};

// ScriptStruct: Engine.BendPhysActivationBounds_ObjectState
struct BendPhysActivationBounds_ObjectState {
    bool bCanEverSuspendPhysicsWhenOutOfBounds; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.SpriteCategoryInfo
struct SpriteCategoryInfo {
    struct FName Category; // 0x0000 (0x0008)
    struct FText DisplayName; // 0x0008 (0x0018)
    struct FText Description; // 0x0020 (0x0018)
};

// ScriptStruct: Engine.StaticMeshComponentLODInfo
struct StaticMeshComponentLODInfo {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    struct TArray<uint8_t> PaintedVertices; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.PaintedVertex
struct PaintedVertex {
    uint8_t Position[0xC]; // 0x0000 (0x000C)
    uint8_t Normal[0x4]; // 0x000C (0x0004)
    uint8_t Color[0x4]; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.TriMeshCollisionData
struct TriMeshCollisionData {
    struct TArray<uint8_t> Vertices; // 0x0000 (0x0010)
    struct TArray<uint8_t> Indices; // 0x0010 (0x0010)
    bool bFlipNormals; // 0x0020 (0x0001)
};

// ScriptStruct: Engine.TriIndices
struct TriIndices {
    int32_t v0; // 0x0000 (0x0004)
    int32_t v1; // 0x0004 (0x0004)
    int32_t v2; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.SplineMeshParams
struct SplineMeshParams {
    uint8_t StartPos[0xC]; // 0x0000 (0x000C)
    uint8_t StartTangent[0xC]; // 0x000C (0x000C)
    uint8_t StartScale[0x8]; // 0x0018 (0x0008)
    float StartRoll; // 0x0020 (0x0004)
    uint8_t StartOffset[0x8]; // 0x0024 (0x0008)
    uint8_t EndPos[0xC]; // 0x002C (0x000C)
    uint8_t EndTangent[0xC]; // 0x0038 (0x000C)
    uint8_t EndScale[0x8]; // 0x0044 (0x0008)
    float EndRoll; // 0x004C (0x0004)
    uint8_t EndOffset[0x8]; // 0x0050 (0x0008)
};

// ScriptStruct: Engine.LevelSimplificationDetails
struct LevelSimplificationDetails {
    bool bCreatePackagePerAsset; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float DetailsPercentage; // 0x0004 (0x0004)
    uint8_t StaticMeshMaterial[0x44]; // 0x0008 (0x0044)
    uint8_t StaticMeshMaterialSettings[0x74]; // 0x004C (0x0074)
    bool bOverrideLandscapeExportLOD; // 0x00C0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00C1 (0x0003)
    int32_t LandscapeExportLOD; // 0x00C4 (0x0004)
    uint8_t LandscapeMaterial[0x44]; // 0x00C8 (0x0044)
    uint8_t LandscapeMaterialSettings[0x74]; // 0x010C (0x0074)
    bool bBakeFoliageToLandscape; // 0x0180 (0x0001)
    bool bBakeGrassToLandscape; // 0x0181 (0x0001)
    bool bGenerateMeshNormalMap; // 0x0182 (0x0001)
    bool bGenerateMeshMetallicMap; // 0x0183 (0x0001)
    bool bGenerateMeshRoughnessMap; // 0x0184 (0x0001)
    bool bGenerateMeshSpecularMap; // 0x0185 (0x0001)
    bool bGenerateLandscapeNormalMap; // 0x0186 (0x0001)
    bool bGenerateLandscapeMetallicMap; // 0x0187 (0x0001)
    bool bGenerateLandscapeRoughnessMap; // 0x0188 (0x0001)
    bool bGenerateLandscapeSpecularMap; // 0x0189 (0x0001)
};

// ScriptStruct: Engine.DynamicTextureInstance
struct DynamicTextureInstance : public StreamableTextureInstance {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    class UObject* Texture; // 0x0028 (0x0008)
    bool bAttached; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float OriginalRadius; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.StreamableTextureInstance
struct StreamableTextureInstance {
};

// ScriptStruct: Engine.GeomSelection
struct GeomSelection {
    int32_t Type; // 0x0000 (0x0004)
    int32_t Index; // 0x0004 (0x0004)
    int32_t SelectionIndex; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.BendDecalCollectionMaterialEntry
struct BendDecalCollectionMaterialEntry {
    class UObject* Material; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.MeshDrivenBone
struct MeshDrivenBone {
    struct FName BoneName; // 0x0000 (0x0008)
    uint8_t Pad_0[0x4]; // 0x0008 (0x0004)
    int32_t Corners; // 0x000C (0x0004)
    uint8_t Pad_1[0x10]; // 0x0010 (0x0010)
    uint8_t Weights[0x10]; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.SkelMeshComponentLODInfo
struct SkelMeshComponentLODInfo {
    struct TArray<uint8_t> HiddenMaterials; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.ActiveVertexAnim
struct ActiveVertexAnim {
    class UObject* VertAnim; // 0x0000 (0x0008)
    float Weight; // 0x0008 (0x0004)
    float Time; // 0x000C (0x0004)
};

// ScriptStruct: Engine.ConstraintInstance
struct ConstraintInstance {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* OwnerComponent; // 0x0008 (0x0008)
    uint8_t Pad_1[0x10]; // 0x0010 (0x0010)
    struct FName JointName; // 0x0020 (0x0008)
    struct FName ConstraintBone1; // 0x0028 (0x0008)
    struct FName ConstraintBone2; // 0x0030 (0x0008)
    uint8_t Pos1[0xC]; // 0x0038 (0x000C)
    uint8_t PriAxis1[0xC]; // 0x0044 (0x000C)
    uint8_t SecAxis1[0xC]; // 0x0050 (0x000C)
    uint8_t Pos2[0xC]; // 0x005C (0x000C)
    uint8_t PriAxis2[0xC]; // 0x0068 (0x000C)
    uint8_t SecAxis2[0xC]; // 0x0074 (0x000C)
    bool bDisableCollision; // 0x0080 (0x0001)
    bool bEnableProjection; // 0x0080 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0081 (0x0003)
    float ProjectionLinearTolerance; // 0x0084 (0x0004)
    float ProjectionAngularTolerance; // 0x0088 (0x0004)
    uint8_t LinearXMotion; // 0x008C (0x0001)
    uint8_t LinearYMotion; // 0x008D (0x0001)
    uint8_t LinearZMotion; // 0x008E (0x0001)
    uint8_t Pad_3[0x1]; // 0x008F (0x0001)
    float LinearLimitSize; // 0x0090 (0x0004)
    bool bLinearLimitSoft; // 0x0094 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0095 (0x0003)
    float LinearLimitStiffness; // 0x0098 (0x0004)
    float LinearLimitDamping; // 0x009C (0x0004)
    bool bLinearBreakable; // 0x00A0 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00A1 (0x0003)
    float LinearBreakThreshold; // 0x00A4 (0x0004)
    uint8_t AngularSwing1Motion; // 0x00A8 (0x0001)
    uint8_t AngularTwistMotion; // 0x00A9 (0x0001)
    uint8_t AngularSwing2Motion; // 0x00AA (0x0001)
    uint8_t Pad_6[0x1]; // 0x00AB (0x0001)
    bool bSwingLimitSoft; // 0x00AC (0x0001)
    bool bTwistLimitSoft; // 0x00AC (0x0001)
    uint8_t Pad_7[0x3]; // 0x00AD (0x0003)
    float Swing1LimitAngle; // 0x00B0 (0x0004)
    float TwistLimitAngle; // 0x00B4 (0x0004)
    float Swing2LimitAngle; // 0x00B8 (0x0004)
    float SwingLimitStiffness; // 0x00BC (0x0004)
    float SwingLimitDamping; // 0x00C0 (0x0004)
    float TwistLimitStiffness; // 0x00C4 (0x0004)
    float TwistLimitDamping; // 0x00C8 (0x0004)
    uint8_t AngularRotationOffset[0xC]; // 0x00CC (0x000C)
    bool bAngularBreakable; // 0x00D8 (0x0001)
    uint8_t Pad_8[0x3]; // 0x00D9 (0x0003)
    float AngularBreakThreshold; // 0x00DC (0x0004)
    bool bLinearXPositionDrive; // 0x00E0 (0x0001)
    bool bLinearXVelocityDrive; // 0x00E0 (0x0001)
    bool bLinearYPositionDrive; // 0x00E0 (0x0001)
    bool bLinearYVelocityDrive; // 0x00E0 (0x0001)
    bool bLinearZPositionDrive; // 0x00E0 (0x0001)
    bool bLinearZVelocityDrive; // 0x00E0 (0x0001)
    bool bLinearPositionDrive; // 0x00E0 (0x0001)
    bool bLinearVelocityDrive; // 0x00E0 (0x0001)
    uint8_t Pad_9[0x3]; // 0x00E1 (0x0003)
    uint8_t LinearPositionTarget[0xC]; // 0x00E4 (0x000C)
    uint8_t LinearVelocityTarget[0xC]; // 0x00F0 (0x000C)
    float LinearDriveSpring; // 0x00FC (0x0004)
    float LinearDriveDamping; // 0x0100 (0x0004)
    float LinearDriveForceLimit; // 0x0104 (0x0004)
    bool bSwingPositionDrive; // 0x0108 (0x0001)
    bool bSwingVelocityDrive; // 0x0108 (0x0001)
    bool bTwistPositionDrive; // 0x0108 (0x0001)
    bool bTwistVelocityDrive; // 0x0108 (0x0001)
    bool bAngularSlerpDrive; // 0x0108 (0x0001)
    bool bAngularOrientationDrive; // 0x0108 (0x0001)
    bool bEnableSwingDrive; // 0x0108 (0x0001)
    bool bEnableTwistDrive; // 0x0108 (0x0001)
    bool bAngularVelocityDrive; // 0x0109 (0x0001)
    uint8_t Pad_10[0x6]; // 0x010A (0x0006)
    uint8_t AngularPositionTarget[0x10]; // 0x0110 (0x0010)
    uint8_t AngularDriveMode; // 0x0120 (0x0001)
    uint8_t Pad_11[0x3]; // 0x0121 (0x0003)
    uint8_t AngularOrientationTarget[0xC]; // 0x0124 (0x000C)
    uint8_t AngularVelocityTarget[0xC]; // 0x0130 (0x000C)
    float AngularDriveSpring; // 0x013C (0x0004)
    float AngularDriveDamping; // 0x0140 (0x0004)
    float AngularDriveForceLimit; // 0x0144 (0x0004)
};

// ScriptStruct: Engine.PreviewAssetAttachContainer
struct PreviewAssetAttachContainer {
    struct TArray<uint8_t> AttachedObjects; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.PreviewAttachedObjectPair
struct PreviewAttachedObjectPair {
    uint8_t AttachedObject[0x20]; // 0x0000 (0x0020)
    class UObject* Object; // 0x0020 (0x0008)
    struct FName AttachedTo; // 0x0028 (0x0008)
};

// ScriptStruct: Engine.SmartNameContainer
struct SmartNameContainer {
};

// ScriptStruct: Engine.SmartNameMapping
struct SmartNameMapping {
};

// ScriptStruct: Engine.AnimSlotGroup
struct AnimSlotGroup {
    struct FName GroupName; // 0x0000 (0x0008)
    struct TArray<uint8_t> SlotNames; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.RigConfiguration
struct RigConfiguration {
    class UObject* Rig; // 0x0000 (0x0008)
    struct TArray<uint8_t> BoneMappingTable; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.NameMapping
struct NameMapping {
    struct FName NodeName; // 0x0000 (0x0008)
    struct FName BoneName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.BoneReductionSetting
struct BoneReductionSetting {
    struct TArray<uint8_t> BonesToRemove; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.ReferencePose
struct ReferencePose {
    struct FName PoseName; // 0x0000 (0x0008)
    struct TArray<uint8_t> ReferencePose; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.BoneNode
struct BoneNode {
    struct FName Name; // 0x0000 (0x0008)
    int32_t ParentIndex; // 0x0008 (0x0004)
    uint8_t TranslationRetargetingMode; // 0x000C (0x0001)
};

// ScriptStruct: Engine.SkeletonToMeshLinkup
struct SkeletonToMeshLinkup {
    struct TArray<uint8_t> SkeletonToMeshTable; // 0x0000 (0x0010)
    struct TArray<uint8_t> MeshToSkeletonTable; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.IntegralCurve
struct IntegralCurve : public IndexedCurve {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    struct TArray<uint8_t> Keys; // 0x0058 (0x0010)
    int32_t DefaultValue; // 0x0068 (0x0004)
    bool bUseDefaultValueBeforeFirstKey; // 0x006C (0x0001)
};

// ScriptStruct: Engine.IntegralKey
struct IntegralKey {
    float Time; // 0x0000 (0x0004)
    int32_t Value; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.NameCurve
struct NameCurve : public IndexedCurve {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    struct TArray<uint8_t> Keys; // 0x0058 (0x0010)
};

// ScriptStruct: Engine.NameCurveKey
struct NameCurveKey {
    float Time; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName Value; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.FinInfo
struct FinInfo {
    uint8_t FinGenerationTechnique; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float FinScale; // 0x0004 (0x0004)
    float FinDensity; // 0x0008 (0x0004)
    float FinWidthScale; // 0x000C (0x0004)
    float FinTipScale; // 0x0010 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0014 (0x0004)
    class UObject* FinPlacementMap; // 0x0018 (0x0008)
    uint8_t FinDensityCurve[0x80]; // 0x0020 (0x0080)
    uint8_t FinWidthCurve[0x80]; // 0x00A0 (0x0080)
    uint8_t FinStripCurve[0x80]; // 0x0120 (0x0080)
    class UObject* FinFlowMap; // 0x01A0 (0x0008)
    float FlowScale0; // 0x01A8 (0x0004)
    float FlowScale1; // 0x01AC (0x0004)
    float FinAlignToFlowmap; // 0x01B0 (0x0004)
    float FinSilhouetteFactor; // 0x01B4 (0x0004)
    uint8_t FinSeed[0x4]; // 0x01B8 (0x0004)
    int32_t FinSegments; // 0x01BC (0x0004)
    int32_t FinStrips; // 0x01C0 (0x0004)
    bool bRegenerateFins; // 0x01C4 (0x0001)
    bool bHighlightSourceMaterial; // 0x01C4 (0x0001)
    bool bHighlightFinMaterial; // 0x01C4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x01C5 (0x0003)
    int32_t FinMaxTriangles; // 0x01C8 (0x0004)
    int32_t LOD; // 0x01CC (0x0004)
    struct TArray<uint8_t> SourceMaterialIndices; // 0x01D0 (0x0010)
    struct TArray<uint8_t> FinChunkIndices; // 0x01E0 (0x0010)
    struct TArray<uint8_t> FinMaterialIndices; // 0x01F0 (0x0010)
};

// ScriptStruct: Engine.FurMaterial
struct FurMaterial {
    class UObject* MaterialInterface; // 0x0000 (0x0008)
    bool bEnableShadowCasting; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    bool bConverted; // 0x000C (0x0001)
    uint8_t Pad_1[0x3]; // 0x000D (0x0003)
    int32_t ShellCount; // 0x0010 (0x0004)
    float ShellScale; // 0x0014 (0x0004)
    uint8_t ShellTangentDirection[0xC]; // 0x0018 (0x000C)
};

// ScriptStruct: Engine.BendAnimMirrorSetup
struct BendAnimMirrorSetup {
    bool bWasInitialized; // 0x0000 (0x0001)
    bool bEnableMirroring; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float SelfMirroringBoneMaxDistFromMirrorPlane; // 0x0004 (0x0004)
    struct TArray<uint8_t> TagPairs; // 0x0008 (0x0010)
    struct TArray<uint8_t> ExcludedBoneFilterStrings; // 0x0018 (0x0010)
    struct TArray<uint8_t> MirrorBoneIndexes; // 0x0028 (0x0010)
    struct TArray<uint8_t> MirroredRefPose; // 0x0038 (0x0010)
    struct TArray<uint8_t> RefPoseToMirroredRefPose; // 0x0048 (0x0010)
};

// ScriptStruct: Engine.BendAnimMirrorTagPair
struct BendAnimMirrorTagPair {
    struct FString Tag0; // 0x0000 (0x0010)
    struct FString Tag1; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.BendAnimMirrorTagPairFName
struct BendAnimMirrorTagPairFName {
    struct FName Tag0; // 0x0000 (0x0008)
    struct FName Tag1; // 0x0008 (0x0008)
    bool ShouldNegateScale; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.BendSkeletonEyelidBoneEncodedData
struct BendSkeletonEyelidBoneEncodedData {
    struct TArray<uint8_t> EncodedBoneList; // 0x0000 (0x0010)
    uint8_t StartIndexLeft[0x2]; // 0x0010 (0x0002)
    uint8_t StartIndexRight[0x2]; // 0x0012 (0x0002)
    uint8_t EyeBoneLeft[0x2]; // 0x0014 (0x0002)
    uint8_t EyeBoneRight[0x2]; // 0x0016 (0x0002)
    struct TArray<uint8_t> BoneReferencePositions; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.BendSkeletonEyelidBoneDesciption
struct BendSkeletonEyelidBoneDesciption {
    struct FName EyeCenterBone; // 0x0000 (0x0008)
    uint8_t InnerBone[0x10]; // 0x0008 (0x0010)
    uint8_t OuterBone[0x10]; // 0x0018 (0x0010)
    struct TArray<uint8_t> InnerToOuterBonesTop; // 0x0028 (0x0010)
    struct TArray<uint8_t> InnerToOuterBonesBottom; // 0x0038 (0x0010)
};

// ScriptStruct: Engine.BendSkeletonBoneDesciption
struct BendSkeletonBoneDesciption {
    struct FName Name; // 0x0000 (0x0008)
    float Smoothing; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.BendSkeletalMaterialAlternates
struct BendSkeletalMaterialAlternates {
};

// ScriptStruct: Engine.BendSkeletalMaterialChoice
struct BendSkeletalMaterialChoice {
};

// ScriptStruct: Engine.SkeletalMaterial
struct SkeletalMaterial {
    class UObject* MaterialInterface; // 0x0000 (0x0008)
    bool bEnableShadowCasting; // 0x0008 (0x0001)
    bool bEnableDynamicNormals; // 0x0009 (0x0001)
};

// ScriptStruct: Engine.ClothingAssetData
struct ClothingAssetData {
    struct FName AssetName; // 0x0000 (0x0008)
    struct FString ApexFileName; // 0x0008 (0x0010)
    bool bClothPropertiesChanged; // 0x0018 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0019 (0x0003)
    uint8_t PhysicsProperties[0x54]; // 0x001C (0x0054)
    float WindAdaption; // 0x0070 (0x0004)
    uint8_t Pad_1[0x84]; // 0x0074 (0x0084)
    bool bClothMeshDrivenBones; // 0x00F8 (0x0001)
    uint8_t Pad_2[0x7]; // 0x00F9 (0x0007)
    struct TArray<uint8_t> MeshDrivenBones; // 0x0100 (0x0010)
};

// ScriptStruct: Engine.ClothPhysicsProperties
struct ClothPhysicsProperties {
    float VerticalResistance; // 0x0000 (0x0004)
    float HorizontalResistance; // 0x0004 (0x0004)
    float BendResistance; // 0x0008 (0x0004)
    float ShearResistance; // 0x000C (0x0004)
    float Friction; // 0x0010 (0x0004)
    float Damping; // 0x0014 (0x0004)
    float TetherStiffness; // 0x0018 (0x0004)
    float TetherLimit; // 0x001C (0x0004)
    float Drag; // 0x0020 (0x0004)
    float StiffnessFrequency; // 0x0024 (0x0004)
    float GravityScale; // 0x0028 (0x0004)
    float MassScale; // 0x002C (0x0004)
    float InertiaBlend; // 0x0030 (0x0004)
    float SelfCollisionThickness; // 0x0034 (0x0004)
    float SelfCollisionSquashScale; // 0x0038 (0x0004)
    float SelfCollisionStiffness; // 0x003C (0x0004)
    float SolverFrequency; // 0x0040 (0x0004)
    float FiberCompression; // 0x0044 (0x0004)
    float FiberExpansion; // 0x0048 (0x0004)
    float FiberResistance; // 0x004C (0x0004)
    float WindAdaption; // 0x0050 (0x0004)
};

// ScriptStruct: Engine.MorphTargetMap
struct MorphTargetMap {
    struct FName Name; // 0x0000 (0x0008)
    class UObject* MorphTarget; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.SkeletalMeshLODInfo
struct SkeletalMeshLODInfo {
    float ScreenSize; // 0x0000 (0x0004)
    float LODHysteresis; // 0x0004 (0x0004)
    struct TArray<uint8_t> LODMaterialMap; // 0x0008 (0x0010)
    struct TArray<uint8_t> bEnableShadowCasting; // 0x0018 (0x0010)
    struct TArray<uint8_t> TriangleSortSettings; // 0x0028 (0x0010)
    bool bHasBeenSimplified; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    uint8_t ReductionSettings[0xE8]; // 0x0040 (0x00E8)
    uint8_t RemeshingSettings[0x50]; // 0x0128 (0x0050)
    uint8_t OptimizationSettings[0x1E0]; // 0x0178 (0x01E0)
    struct TArray<uint8_t> RemovedBones; // 0x0358 (0x0010)
};

// ScriptStruct: Engine.GroupedSkeletalOptimizationSettings
struct GroupedSkeletalOptimizationSettings {
    bool bAutoComputeLODDistance; // 0x0000 (0x0001)
    uint8_t LevelOfDetailType; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    uint8_t ReductionSettings[0xE8]; // 0x0008 (0x00E8)
    uint8_t ProxySettings[0xE8]; // 0x00F0 (0x00E8)
    bool bForceLODRebuild; // 0x01D8 (0x0001)
};

// ScriptStruct: Engine.SkeletalMeshOptimizationSettings
struct SkeletalMeshOptimizationSettings {
    uint8_t ReductionMethod; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float NumOfTrianglesPercentage; // 0x0004 (0x0004)
    float MaxDeviationPercentage; // 0x0008 (0x0004)
    int32_t ScreenSize; // 0x000C (0x0004)
    float WeldingThreshold; // 0x0010 (0x0004)
    bool bRecalcNormals; // 0x0014 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0015 (0x0003)
    float NormalsThreshold; // 0x0018 (0x0004)
    uint8_t SilhouetteImportance; // 0x001C (0x0001)
    uint8_t TextureImportance; // 0x001D (0x0001)
    uint8_t ShadingImportance; // 0x001E (0x0001)
    uint8_t SkinningImportance; // 0x001F (0x0001)
    float BoneReductionRatio; // 0x0020 (0x0004)
    int32_t MaxBonesPerVertex; // 0x0024 (0x0004)
    bool bTransferMorphTarget; // 0x0028 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0029 (0x0007)
    struct TArray<uint8_t> BonesToRemove; // 0x0030 (0x0010)
    int32_t BaseLOD; // 0x0040 (0x0004)
    int32_t LODChainLastIndex; // 0x0044 (0x0004)
    uint8_t MaterialLODSettings[0x28]; // 0x0048 (0x0028)
    uint8_t MaterialSettings[0x74]; // 0x0070 (0x0074)
    bool bForceRebuild; // 0x00E4 (0x0001)
    bool bSimplifyMaterials; // 0x00E5 (0x0001)
};

// ScriptStruct: Engine.TriangleSortSettings
struct TriangleSortSettings {
    uint8_t TriangleSorting; // 0x0000 (0x0001)
    uint8_t CustomLeftRightAxis; // 0x0001 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0002 (0x0006)
    struct FName CustomLeftRightBoneName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.BoneMirrorExport
struct BoneMirrorExport {
    struct FName BoneName; // 0x0000 (0x0008)
    struct FName SourceBoneName; // 0x0008 (0x0008)
    uint8_t BoneFlipAxis; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.BoneMirrorInfo
struct BoneMirrorInfo {
    int32_t SourceIndex; // 0x0000 (0x0004)
    uint8_t BoneFlipAxis; // 0x0004 (0x0001)
};

// ScriptStruct: Engine.AnimationGroupReference
struct AnimationGroupReference {
    struct FName GroupName; // 0x0000 (0x0008)
    uint8_t GroupRole; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.RootMotionMovementParams
struct RootMotionMovementParams {
    bool bHasRootMotion; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float BlendWeight; // 0x0004 (0x0004)
    uint8_t Pad_1[0x8]; // 0x0008 (0x0008)
    uint8_t RootMotionTransform[0x30]; // 0x0010 (0x0030)
};

// ScriptStruct: Engine.AnimGroupInstance
struct AnimGroupInstance {
};

// ScriptStruct: Engine.AnimTickRecord
struct AnimTickRecord {
    class UObject* SourceAsset; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.MarkerSyncAnimPosition
struct MarkerSyncAnimPosition {
    struct FName PreviousMarkerName; // 0x0000 (0x0008)
    struct FName NextMarkerName; // 0x0008 (0x0008)
    float PositionBetweenMarkers; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.AnimExtractContext
struct AnimExtractContext {
    bool bExtractRootMotion; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float CurrentTime; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.AnimLinkableElement
struct AnimLinkableElement {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* LinkedMontage; // 0x0008 (0x0008)
    int32_t SlotIndex; // 0x0010 (0x0004)
    int32_t SegmentIndex; // 0x0014 (0x0004)
    uint8_t LinkMethod; // 0x0018 (0x0001)
    uint8_t CachedLinkMethod; // 0x0019 (0x0001)
    uint8_t Pad_1[0x2]; // 0x001A (0x0002)
    float SegmentBeginTime; // 0x001C (0x0004)
    float SegmentLength; // 0x0020 (0x0004)
    float LinkValue; // 0x0024 (0x0004)
    class UObject* LinkedSequence; // 0x0028 (0x0008)
};

// ScriptStruct: Engine.MarkerSyncData
struct MarkerSyncData {
    struct TArray<uint8_t> AuthoredSyncMarkers; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.AnimSyncMarker
struct AnimSyncMarker {
    struct FName MarkerName; // 0x0000 (0x0008)
    float Time; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.AnimNotifyTrack
struct AnimNotifyTrack {
    struct FName TrackName; // 0x0000 (0x0008)
    uint8_t TrackColor[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.AnimNotifyEvent
struct AnimNotifyEvent : public AnimLinkableElement {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    float DisplayTime; // 0x0030 (0x0004)
    float TriggerTimeOffset; // 0x0034 (0x0004)
    float EndTriggerTimeOffset; // 0x0038 (0x0004)
    float TriggerWeightThreshold; // 0x003C (0x0004)
    struct FName NotifyName; // 0x0040 (0x0008)
    class UObject* Notify; // 0x0048 (0x0008)
    class UObject* NotifyStateClass; // 0x0050 (0x0008)
    float Duration; // 0x0058 (0x0004)
    uint8_t Pad_1[0x4]; // 0x005C (0x0004)
    uint8_t EndLink[0x30]; // 0x0060 (0x0030)
    bool bConvertedFromBranchingPoint; // 0x0090 (0x0001)
    uint8_t MontageTickType; // 0x0091 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0092 (0x0002)
    float NotifyTriggerChance; // 0x0094 (0x0004)
    uint8_t NotifyFilterType; // 0x0098 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0099 (0x0003)
    int32_t NotifyFilterLOD; // 0x009C (0x0004)
    bool bTriggerOnDedicatedServer; // 0x00A0 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00A1 (0x0003)
    int32_t TrackIndex; // 0x00A4 (0x0004)
};

// ScriptStruct: Engine.RawCurveTracks
struct RawCurveTracks {
    struct TArray<uint8_t> FloatCurves; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.FloatCurve
struct FloatCurve : public AnimCurveBase {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t FloatCurve[0x78]; // 0x0018 (0x0078)
};

// ScriptStruct: Engine.AnimCurveBase
struct AnimCurveBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FName LastObservedName; // 0x0008 (0x0008)
    uint8_t Pad_1[0x4]; // 0x0010 (0x0004)
    int32_t CurveTypeFlags; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.TransformCurve
struct TransformCurve : public AnimCurveBase {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t TranslationCurve[0x180]; // 0x0018 (0x0180)
    uint8_t RotationCurve[0x180]; // 0x0198 (0x0180)
    uint8_t ScaleCurve[0x180]; // 0x0318 (0x0180)
};

// ScriptStruct: Engine.VectorCurve
struct VectorCurve : public AnimCurveBase {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t FloatCurves[0x78]; // 0x0018 (0x0078)
};

// ScriptStruct: Engine.SingleAnimationPlayData
struct SingleAnimationPlayData {
    class UObject* AnimToPlay; // 0x0000 (0x0008)
    class UObject* VertexAnimToPlay; // 0x0008 (0x0008)
    bool bSavedLooping; // 0x0010 (0x0001)
    bool bSavedPlaying; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float SavedPosition; // 0x0014 (0x0004)
    float SavedPlayRate; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.SkeletalMeshComponentClothTickFunction
struct SkeletalMeshComponentClothTickFunction : public TickFunction {
};

// ScriptStruct: Engine.SkeletalMeshComponentPostPhysicsTickFunction
struct SkeletalMeshComponentPostPhysicsTickFunction : public TickFunction {
};

// ScriptStruct: Engine.BendStaticMeshInstance
struct BendStaticMeshInstance {
    class UObject* StaticMesh; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t Transform[0x30]; // 0x0010 (0x0030)
};

// ScriptStruct: Engine.BendStaticMeshCollectionMaterialEntry
struct BendStaticMeshCollectionMaterialEntry {
    class UObject* Material; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.BendStaticMeshCollectionEntry
struct BendStaticMeshCollectionEntry {
    class UObject* StaticMesh; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.KShapeElem
struct KShapeElem {
};

// ScriptStruct: Engine.KConvexElem
struct KConvexElem : public KShapeElem {
    uint8_t Pad_0[0x20]; // 0x0000 (0x0020)
    struct TArray<uint8_t> VertexData; // 0x0020 (0x0010)
    uint8_t ElemBox[0x1C]; // 0x0030 (0x001C)
    uint8_t Pad_1[0x4]; // 0x004C (0x0004)
    uint8_t Transform[0x30]; // 0x0050 (0x0030)
};

// ScriptStruct: Engine.KBoxElem
struct KBoxElem : public KShapeElem {
    uint8_t Pad_0[0x20]; // 0x0000 (0x0020)
    uint8_t TM[0x40]; // 0x0020 (0x0040)
    uint8_t Center[0xC]; // 0x0060 (0x000C)
    uint8_t Pad_1[0x4]; // 0x006C (0x0004)
    uint8_t Orientation[0x10]; // 0x0070 (0x0010)
    float X; // 0x0080 (0x0004)
    float Y; // 0x0084 (0x0004)
    float Z; // 0x0088 (0x0004)
};

// ScriptStruct: Engine.KSphereElem
struct KSphereElem : public KShapeElem {
    uint8_t Pad_0[0x20]; // 0x0000 (0x0020)
    uint8_t TM[0x40]; // 0x0020 (0x0040)
    uint8_t Center[0xC]; // 0x0060 (0x000C)
    float Radius; // 0x006C (0x0004)
};

// ScriptStruct: Engine.KSphylElem
struct KSphylElem : public KShapeElem {
    uint8_t Pad_0[0x20]; // 0x0000 (0x0020)
    uint8_t TM[0x40]; // 0x0020 (0x0040)
    uint8_t Center[0xC]; // 0x0060 (0x000C)
    uint8_t Pad_1[0x4]; // 0x006C (0x0004)
    uint8_t Orientation[0x10]; // 0x0070 (0x0010)
    float Radius; // 0x0080 (0x0004)
    float Length; // 0x0084 (0x0004)
};

// ScriptStruct: Engine.KAggregateGeom
struct KAggregateGeom {
    struct TArray<uint8_t> SphereElems; // 0x0000 (0x0010)
    struct TArray<uint8_t> BoxElems; // 0x0010 (0x0010)
    struct TArray<uint8_t> SphylElems; // 0x0020 (0x0010)
    struct TArray<uint8_t> ConvexElems; // 0x0030 (0x0010)
};

// ScriptStruct: Engine.BendBlockingVolumeCollectionEntry
struct BendBlockingVolumeCollectionEntry {
    class UObject* BodySetup; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.InteriorSettings
struct InteriorSettings {
    bool bIsWorldSettings; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float ExteriorVolume; // 0x0004 (0x0004)
    float ExteriorTime; // 0x0008 (0x0004)
    float ExteriorLPF; // 0x000C (0x0004)
    float ExteriorLPFTime; // 0x0010 (0x0004)
    float InteriorVolume; // 0x0014 (0x0004)
    float InteriorTime; // 0x0018 (0x0004)
    float InteriorLPF; // 0x001C (0x0004)
    float InteriorLPFTime; // 0x0020 (0x0004)
};

// ScriptStruct: Engine.ReverbSettings
struct ReverbSettings {
    bool bApplyReverb; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t ReverbType; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    class UObject* ReverbEffect; // 0x0008 (0x0008)
    float Volume; // 0x0010 (0x0004)
    float FadeTime; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.CullDistanceSizePair
struct CullDistanceSizePair {
    float Size; // 0x0000 (0x0004)
    float CullDistance; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.PostProcessSettings
struct PostProcessSettings {
    bool bOverride_WhiteTemp; // 0x0000 (0x0001)
    bool bOverride_WhiteTint; // 0x0000 (0x0001)
    bool bOverride_ColorSaturation; // 0x0000 (0x0001)
    bool bOverride_ColorContrast; // 0x0000 (0x0001)
    bool bOverride_ColorGamma; // 0x0000 (0x0001)
    bool bOverride_ColorGain; // 0x0000 (0x0001)
    bool bOverride_ColorOffset; // 0x0000 (0x0001)
    bool bOverride_FilmWhitePoint; // 0x0000 (0x0001)
    bool bOverride_FilmSaturation; // 0x0001 (0x0001)
    bool bOverride_FilmChannelMixerRed; // 0x0001 (0x0001)
    bool bOverride_FilmChannelMixerGreen; // 0x0001 (0x0001)
    bool bOverride_FilmChannelMixerBlue; // 0x0001 (0x0001)
    bool bOverride_FilmContrast; // 0x0001 (0x0001)
    bool bOverride_FilmDynamicRange; // 0x0001 (0x0001)
    bool bOverride_FilmHealAmount; // 0x0001 (0x0001)
    bool bOverride_FilmToeAmount; // 0x0001 (0x0001)
    bool bOverride_FilmShadowTint; // 0x0002 (0x0001)
    bool bOverride_FilmShadowTintBlend; // 0x0002 (0x0001)
    bool bOverride_FilmShadowTintAmount; // 0x0002 (0x0001)
    bool bOverride_FilmSlope; // 0x0002 (0x0001)
    bool bOverride_FilmToe; // 0x0002 (0x0001)
    bool bOverride_FilmShoulder; // 0x0002 (0x0001)
    bool bOverride_FilmBlackClip; // 0x0002 (0x0001)
    bool bOverride_FilmWhiteClip; // 0x0002 (0x0001)
    bool bOverride_SceneColorTint; // 0x0003 (0x0001)
    bool bOverride_SceneFringeIntensity; // 0x0003 (0x0001)
    bool bOverride_AmbientCubemapTint; // 0x0003 (0x0001)
    bool bOverride_AmbientCubemapIntensity; // 0x0003 (0x0001)
    bool bOverride_BloomIntensity; // 0x0003 (0x0001)
    bool bOverride_BloomThreshold; // 0x0003 (0x0001)
    bool bOverride_BloomMaxThreshold; // 0x0003 (0x0001)
    bool bOverride_BloomUseFixedResolution; // 0x0003 (0x0001)
    bool bOverride_AutoWhiteBalanceRedGainRange; // 0x0004 (0x0001)
    bool bOverride_AutoWhiteBalanceBlueGainRange; // 0x0004 (0x0001)
    bool bOverride_AutoWhiteBalanceBlend; // 0x0004 (0x0001)
    bool bOverride_AutoWhiteBalanceBlendRate; // 0x0004 (0x0001)
    bool bOverride_AutoWhiteBalanceBlendCameraCut; // 0x0004 (0x0001)
    bool bOverride_AutoWhiteBalanceBaseColorInfluence; // 0x0004 (0x0001)
    bool bOverride_Bloom1Tint; // 0x0004 (0x0001)
    bool bOverride_Bloom1Size; // 0x0004 (0x0001)
    bool bOverride_Bloom2Size; // 0x0005 (0x0001)
    bool bOverride_Bloom2Tint; // 0x0005 (0x0001)
    bool bOverride_Bloom3Tint; // 0x0005 (0x0001)
    bool bOverride_Bloom3Size; // 0x0005 (0x0001)
    bool bOverride_Bloom4Tint; // 0x0005 (0x0001)
    bool bOverride_Bloom4Size; // 0x0005 (0x0001)
    bool bOverride_Bloom5Tint; // 0x0005 (0x0001)
    bool bOverride_Bloom5Size; // 0x0005 (0x0001)
    bool bOverride_Bloom6Tint; // 0x0006 (0x0001)
    bool bOverride_Bloom6Size; // 0x0006 (0x0001)
    bool bOverride_BloomSizeScale; // 0x0006 (0x0001)
    bool bOverride_BloomDirtMaskIntensity; // 0x0006 (0x0001)
    bool bOverride_BloomDirtMaskTint; // 0x0006 (0x0001)
    bool bOverride_BloomDirtMask; // 0x0006 (0x0001)
    bool bOverride_AutoExposureMethod; // 0x0006 (0x0001)
    bool bOverride_AutoExposureLowPercent; // 0x0006 (0x0001)
    bool bOverride_AutoExposureHighPercent; // 0x0007 (0x0001)
    bool bOverride_AutoExposureMinBrightness; // 0x0007 (0x0001)
    bool bOverride_AutoExposureMaxBrightness; // 0x0007 (0x0001)
    bool bOverride_AutoExposureSpeedUp; // 0x0007 (0x0001)
    bool bOverride_AutoExposureSpeedDown; // 0x0007 (0x0001)
    bool bOverride_AutoExposureBias; // 0x0007 (0x0001)
    bool bOverride_HistogramLogMin; // 0x0007 (0x0001)
    bool bOverride_HistogramLogMax; // 0x0007 (0x0001)
    bool bOverride_LensFlareIntensity; // 0x0008 (0x0001)
    bool bOverride_LensFlareTint; // 0x0008 (0x0001)
    bool bOverride_LensFlareTints; // 0x0008 (0x0001)
    bool bOverride_LensFlareBokehSize; // 0x0008 (0x0001)
    bool bOverride_LensFlareBokehShape; // 0x0008 (0x0001)
    bool bOverride_LensFlareThreshold; // 0x0008 (0x0001)
    bool bOverride_VignetteIntensity; // 0x0008 (0x0001)
    bool bOverride_GrainIntensity; // 0x0008 (0x0001)
    bool bOverride_GrainJitter; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionIntensity; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionStaticFraction; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionRadius; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionFadeDistance; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionFadeRadius; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionDistance; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionRadiusInWS; // 0x0009 (0x0001)
    bool bOverride_AmbientOcclusionPower; // 0x000A (0x0001)
    bool bOverride_AmbientOcclusionBias; // 0x000A (0x0001)
    bool bOverride_AmbientOcclusionQuality; // 0x000A (0x0001)
    bool bOverride_AmbientOcclusionMipBlend; // 0x000A (0x0001)
    bool bOverride_AmbientOcclusionMipScale; // 0x000A (0x0001)
    bool bOverride_AmbientOcclusionMipThreshold; // 0x000A (0x0001)
    bool bOverride_LPVIntensity; // 0x000A (0x0001)
    bool bOverride_LPVDirectionalOcclusionIntensity; // 0x000A (0x0001)
    bool bOverride_LPVDirectionalOcclusionRadius; // 0x000B (0x0001)
    bool bOverride_LPVDiffuseOcclusionExponent; // 0x000B (0x0001)
    bool bOverride_LPVSpecularOcclusionExponent; // 0x000B (0x0001)
    bool bOverride_LPVDiffuseOcclusionIntensity; // 0x000B (0x0001)
    bool bOverride_LPVSpecularOcclusionIntensity; // 0x000B (0x0001)
    bool bOverride_LPVSize; // 0x000B (0x0001)
    bool bOverride_LPVSecondaryOcclusionIntensity; // 0x000B (0x0001)
    bool bOverride_LPVSecondaryBounceIntensity; // 0x000B (0x0001)
    bool bOverride_LPVGeometryVolumeBias; // 0x000C (0x0001)
    bool bOverride_LPVVplInjectionBias; // 0x000C (0x0001)
    bool bOverride_LPVEmissiveInjectionIntensity; // 0x000C (0x0001)
    bool bOverride_IndirectLightingColor; // 0x000C (0x0001)
    bool bOverride_IndirectLightingIntensity; // 0x000C (0x0001)
    bool bOverride_ColorGradingIntensity; // 0x000C (0x0001)
    bool bOverride_ColorGradingLUT; // 0x000C (0x0001)
    bool bOverride_DepthOfFieldFocalDistance; // 0x000C (0x0001)
    bool bOverride_DepthOfFieldFstop; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldDepthBlurRadius; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldDepthBlurAmount; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldFocalRegion; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldNearTransitionRegion; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldFarTransitionRegion; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldScale; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldMaxBokehSize; // 0x000D (0x0001)
    bool bOverride_DepthOfFieldNearBlurSize; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldFarBlurSize; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldMethod; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldBokehShape; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldOcclusion; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldColorThreshold; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldSizeThreshold; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldSkyFocusDistance; // 0x000E (0x0001)
    bool bOverride_DepthOfFieldEnableNearBlur; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldFarDistance; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldNearDistance; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldBlurStrength; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldNearAffectCharacters; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldNearClampToFoliageDitherRange; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldIncludeSky; // 0x000F (0x0001)
    bool bOverride_BendTemporalDepthOfFieldSkyDistanceKM; // 0x000F (0x0001)
    bool bOverride_BendExposureAbsoluteOffset; // 0x0010 (0x0001)
    bool bOverride_BendExposureAmbientScaledOffset; // 0x0010 (0x0001)
    bool bOverride_BendExposureThresholdingScale; // 0x0010 (0x0001)
    bool bOverride_BendExposureThresholdingReferenceAmbient; // 0x0010 (0x0001)
    bool bOverride_BendExposureSecondaryThresholdingScale; // 0x0010 (0x0001)
    bool bOverride_BendExposureSecondaryThresholdingReferenceAmbient; // 0x0010 (0x0001)
    bool bOverride_BendExposureDistanceWeightedFadeFalloff; // 0x0010 (0x0001)
    bool bOverride_BendExposureDistanceWeightedScale; // 0x0010 (0x0001)
    bool bOverride_BendExposureInteriorBaseColorScale; // 0x0011 (0x0001)
    bool bOverride_EnableBendBloom; // 0x0011 (0x0001)
    bool bOverride_BendBloomScale; // 0x0011 (0x0001)
    bool bOverride_BendBloomScale2; // 0x0011 (0x0001)
    bool bOverride_BendBloomInputMinimum; // 0x0011 (0x0001)
    bool bOverride_BendBloomInput2Minimum; // 0x0011 (0x0001)
    bool bOverride_BendBloomInputMaximum; // 0x0011 (0x0001)
    bool bOverride_BendBloomInput2Maximum; // 0x0011 (0x0001)
    bool bOverride_BendBloomTonemapMaximum; // 0x0012 (0x0001)
    bool bOverride_BendBloomTonemap2Maximum; // 0x0012 (0x0001)
    bool bOverride_BendBloom1Size; // 0x0012 (0x0001)
    bool bOverride_BendBloom2Size; // 0x0012 (0x0001)
    bool bOverride_BendBloom1Color; // 0x0012 (0x0001)
    bool bOverride_BendBloom2Color; // 0x0012 (0x0001)
    bool bOverride_DepthOfFieldVignetteSize; // 0x0012 (0x0001)
    bool bOverride_MotionBlurAmount; // 0x0012 (0x0001)
    bool bOverride_MotionBlurMax; // 0x0013 (0x0001)
    bool bOverride_MotionBlurPerObjectSize; // 0x0013 (0x0001)
    bool bOverride_ScreenPercentage; // 0x0013 (0x0001)
    bool bOverride_AntiAliasingMethod; // 0x0013 (0x0001)
    bool bOverride_ScreenSpaceReflectionIntensity; // 0x0013 (0x0001)
    bool bOverride_ScreenSpaceReflectionQuality; // 0x0013 (0x0001)
    bool bOverride_ScreenSpaceReflectionMaxRoughness; // 0x0013 (0x0001)
    bool bOverride_ScreenSpaceReflectionRoughnessScale; // 0x0013 (0x0001)
    bool bOverride_BendHorizontalResolutionScale; // 0x0014 (0x0001)
    bool bOverride_BendFoliageLodScale; // 0x0014 (0x0001)
    bool bOverride_ForceSunTemporalShadowBlend; // 0x0014 (0x0001)
    bool bOverride_ForcedSunSkinTemporalShadowBlurring; // 0x0014 (0x0001)
    bool bOverride_ForcedSunHairTemporalShadowBlurring; // 0x0014 (0x0001)
    bool bOverride_SMAAType; // 0x0014 (0x0001)
    bool bOverride_SMAABaseThreshold; // 0x0014 (0x0001)
    bool bOverride_SMAAPredicationThreshold; // 0x0014 (0x0001)
    bool bOverride_SMAAPredicationScale; // 0x0015 (0x0001)
    bool bOverride_SMAAPredicationStrength; // 0x0015 (0x0001)
    bool bOverride_SMAAXYSearchSteps; // 0x0015 (0x0001)
    bool bOverride_SMAADiagSearchSteps; // 0x0015 (0x0001)
    bool bOverride_SMAACornerRounding; // 0x0015 (0x0001)
    bool bOverride_SMAAReprojectionScale; // 0x0015 (0x0001)
    bool bOverride_SMAALowFrequencyWeight; // 0x0015 (0x0001)
    bool bOverride_SMAAHighFrequencyWeight; // 0x0015 (0x0001)
    bool bOverride_SMAAEnableCienmaticFaces; // 0x0016 (0x0001)
    bool bOverride_SMAASharpening; // 0x0016 (0x0001)
    bool bOverride_WeatherWetness; // 0x0016 (0x0001)
    bool bOverride_WeatherGroundWaterLevel; // 0x0016 (0x0001)
    bool bOverride_WeatherSnowAccumulation; // 0x0016 (0x0001)
    bool bOverride_WeatherWetnessRoughnessModifier; // 0x0016 (0x0001)
    bool bOverride_WeatherDepthBiasNoiseWaterLevel; // 0x0016 (0x0001)
    bool bOverride_WeatherWaterPuddleNoiseCoverage; // 0x0016 (0x0001)
    bool bOverride_WeatherSnowTextureScale; // 0x0017 (0x0001)
    bool bOverride_WeatherNoiseTextureScale; // 0x0017 (0x0001)
    bool bOverride_WeatherSnowZoneHeight; // 0x0017 (0x0001)
    bool bOverride_WeatherSnowZoneTransitionHeight; // 0x0017 (0x0001)
    bool bOverride_WeatherWaveIntensity; // 0x0017 (0x0001)
    bool bOverride_WeatherWaveFadeStartDistance; // 0x0017 (0x0001)
    bool bOverride_WeatherWaveFadeEndDistance; // 0x0017 (0x0001)
    bool bOverride_WeatherRainHitsTextureScale; // 0x0017 (0x0001)
    bool bOverride_WeatherRainHitsSpeed; // 0x0018 (0x0001)
    bool bOverride_WeatherRainHitsFadeStartDistance; // 0x0018 (0x0001)
    bool bOverride_WeatherRainHitsFadeEndDistance; // 0x0018 (0x0001)
    bool bOverride_EyeDebugViews; // 0x0018 (0x0001)
    bool bOverride_EyeBlurDistance; // 0x0018 (0x0001)
    bool bOverride_EyeOcclusionColor; // 0x0018 (0x0001)
    bool bOverride_EyeTopEdgeWetness; // 0x0018 (0x0001)
    bool bOverride_EyeBottomEdgeWetness; // 0x0018 (0x0001)
    bool bOverride_EyeBottomEdgeOcclusionScale; // 0x0019 (0x0001)
    bool bOverride_EyeGlobalReflectionScale; // 0x0019 (0x0001)
    bool bOverride_EnableWeightedLuminance; // 0x0019 (0x0001)
    bool bOverride_EnableAcesTonemapperInGame; // 0x0019 (0x0001)
    bool bOverride_LuminanceWeightCentreX; // 0x0019 (0x0001)
    bool bOverride_LuminanceWeightCentreY; // 0x0019 (0x0001)
    bool bOverride_SkinWeight; // 0x0019 (0x0001)
    bool bOverride_SkyWeight; // 0x0019 (0x0001)
    bool bOverride_EmissiveWeight; // 0x001A (0x0001)
    bool bOverride_BaseColorInfluence; // 0x001A (0x0001)
    bool bOverride_AssumedAverageBaseColor; // 0x001A (0x0001)
    bool bOverride_AssumedSkyBaseColor; // 0x001A (0x0001)
    bool bOverride_HighlightInfluence; // 0x001A (0x0001)
    bool bOverride_LocalAdaption; // 0x001A (0x0001)
    bool bOverride_AdaptiveTonemapping; // 0x001A (0x0001)
    bool bOverride_CCColorBalance; // 0x001A (0x0001)
    bool bOverride_CCBrightness; // 0x001B (0x0001)
    bool bOverride_CCContrast; // 0x001B (0x0001)
    bool bOverride_CCSaturation; // 0x001B (0x0001)
    bool bOverride_CCHue; // 0x001B (0x0001)
    bool bOverride_ScreenOverlayColor; // 0x001B (0x0001)
    bool bOverride_ScreenOverlay_VignetteStrength; // 0x001B (0x0001)
    bool bOverride_ScreenOverlay_VignetteFalloff; // 0x001B (0x0001)
    bool bOverride_ScreenOverlay_VignetteColor; // 0x001B (0x0001)
    bool bOverride_CVibrance; // 0x001C (0x0001)
    bool bOverride_CVibranceThreshold; // 0x001C (0x0001)
    bool bOverride_CVibranceChannelScale; // 0x001C (0x0001)
    bool bOverride_BendDepthGrade_NearTint; // 0x001C (0x0001)
    bool bOverride_BendDepthGrade_NearSaturation; // 0x001C (0x0001)
    bool bOverride_BendDepthGrade_NearGamma; // 0x001C (0x0001)
    bool bOverride_BendDepthGrade_FarTint; // 0x001C (0x0001)
    bool bOverride_BendDepthGrade_FarSaturation; // 0x001C (0x0001)
    bool bOverride_BendDepthGrade_FarGamma; // 0x001D (0x0001)
    bool bOverride_BendDepthGrade_TransitionPoint; // 0x001D (0x0001)
    bool bOverride_BendDepthGrade_TransitionSpread; // 0x001D (0x0001)
    bool bOverride_BendEmissiveIntensityChannels; // 0x001D (0x0001)
    bool bOverride_BendCinematicSunDirectLightIntensity; // 0x001D (0x0001)
    bool bOverride_BendCinematicSunGlobalIntensity; // 0x001D (0x0001)
    bool bOverride_BendCinematicOverrideTranslucentLightingRange; // 0x001D (0x0001)
    bool bOverride_BendCinematicOverrideDynamicShadowRange; // 0x001D (0x0001)
    bool bOverride_BendCinematicSkinShadowOpacity; // 0x001E (0x0001)
    bool bOverride_BendCinematicGlobalVoxelLightScale; // 0x001E (0x0001)
    bool bOverride_BendCinematicEmissiveVoxelInjectionScale; // 0x001E (0x0001)
    bool bOverride_BendCinematicDisableSeparateTranslucency; // 0x001E (0x0001)
    bool bOverride_BendDepthBiasNearScale; // 0x001E (0x0001)
    bool bOverride_BendDepthBiasFarScale; // 0x001E (0x0001)
    bool bOverride_EnableDepthFog; // 0x001E (0x0001)
    bool bOverride_DepthFogDensity; // 0x001E (0x0001)
    bool bOverride_DepthFogStartColor; // 0x001F (0x0001)
    bool bOverride_DepthFogStartDistance; // 0x001F (0x0001)
    bool bOverride_DepthFogHorizonColor; // 0x001F (0x0001)
    bool bOverride_DepthFogHorizonDistance; // 0x001F (0x0001)
    bool bOverride_DepthFogHorizonFalloff; // 0x001F (0x0001)
    bool bOverride_DepthFogZenithColor; // 0x001F (0x0001)
    bool bOverride_DepthFogZenithFalloff; // 0x001F (0x0001)
    bool bOverride_DepthFogSunGlowColor; // 0x001F (0x0001)
    bool bOverride_DepthFogSunGlowIntensity; // 0x0020 (0x0001)
    bool bOverride_DepthFogSunGlowFalloff; // 0x0020 (0x0001)
    bool bOverride_DepthFogSunGlowVerticalFalloff; // 0x0020 (0x0001)
    bool bOverride_DepthFogSunGlow2Color; // 0x0020 (0x0001)
    bool bOverride_DepthFogSunGlow2Intensity; // 0x0020 (0x0001)
    bool bOverride_DepthFogSunGlow2Falloff; // 0x0020 (0x0001)
    bool bOverride_DepthFogSunGlow2VerticalFalloff; // 0x0020 (0x0001)
    bool bOverride_DepthFogHeightFadeStart; // 0x0020 (0x0001)
    bool bOverride_DepthFogHeightFadeEnd; // 0x0021 (0x0001)
    bool bOverride_DepthFogHeightFadeFactor; // 0x0021 (0x0001)
    bool bOverride_EnableSunTint; // 0x0021 (0x0001)
    bool bOverride_SunTintBrightness; // 0x0021 (0x0001)
    bool bOverride_SunTintRadialFalloff; // 0x0021 (0x0001)
    bool bOverride_SunTintStartDistance; // 0x0021 (0x0001)
    bool bOverride_SunTintDistanceFalloff; // 0x0021 (0x0001)
    bool bOverride_BendFarDistanceFade; // 0x0021 (0x0001)
    bool bOverride_BendFarDistanceFadeExposureCompensation; // 0x0022 (0x0001)
    bool bOverride_EnableHeightFog; // 0x0022 (0x0001)
    bool bOverride_HeightFogDensity; // 0x0022 (0x0001)
    bool bOverride_HeightFogStartColor; // 0x0022 (0x0001)
    bool bOverride_HeightFogEndColor; // 0x0022 (0x0001)
    bool bOverride_HeightFogStartDistance; // 0x0022 (0x0001)
    bool bOverride_HeightFogEndDistance; // 0x0022 (0x0001)
    bool bOverride_TerrainShadowRegion; // 0x0022 (0x0001)
    bool bOverride_EnableVolumetricFog; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogDensity; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogTreeDensity; // 0x0023 (0x0001)
    bool bOverride_VolumetricCloudMultiplierDensity; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogColor; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogColorDirectional; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogZPosition; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogHeightDensityVariance; // 0x0023 (0x0001)
    bool bOverride_VolumetricFogNearFadeDistance; // 0x0024 (0x0001)
    bool bOverride_VolumetricFogFarFadeDistance; // 0x0024 (0x0001)
    bool bOverride_EnableSceneDepthReprojection; // 0x0024 (0x0001)
    bool bOverride_BendUseRealtimeSceneCubemap; // 0x0024 (0x0001)
    bool bOverride_BendScreenSpaceReflectionGlobalScale; // 0x0024 (0x0001)
    bool bOverride_BendScreenSpaceReflectionSkinScale; // 0x0024 (0x0001)
    bool bOverride_BendSceneAmbientCaptureSaturation; // 0x0024 (0x0001)
    bool bOverride_BendUseSceneCubemapAsOverlay; // 0x0024 (0x0001)
    bool bOverride_BendExaggeratedLocalBounceLight; // 0x0025 (0x0001)
    bool bOverride_BendFlatAmbientIntensityScaler; // 0x0025 (0x0001)
    bool bOverride_BendVoxelOverlapPopFix; // 0x0025 (0x0001)
    bool bOverride_BendVoxelPerMipMaxOcclusion; // 0x0025 (0x0001)
    bool bOverride_BendVoxelTreeColor; // 0x0025 (0x0001)
    bool bOverride_BendMipScalePower; // 0x0025 (0x0001)
    bool bOverride_TreeAmbientOcclusionStrength; // 0x0025 (0x0001)
    bool bOverride_TreeAmbientOcclusionFadeDistance; // 0x0025 (0x0001)
    bool bOverride_EnableFogTurbulence; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence0Direction; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence0Speed; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence0StartScale; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence0StartDensity; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence0EndScale; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence0EndDensity; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence1Direction; // 0x0026 (0x0001)
    bool bOverride_FogTurbulence1Speed; // 0x0027 (0x0001)
    bool bOverride_FogTurbulence1StartScale; // 0x0027 (0x0001)
    bool bOverride_FogTurbulence1StartDensity; // 0x0027 (0x0001)
    bool bOverride_FogTurbulence1EndScale; // 0x0027 (0x0001)
    bool bOverride_FogTurbulence1EndDensity; // 0x0027 (0x0001)
    bool bOverride_CloudsEnabled; // 0x0027 (0x0001)
    bool bOverride_CloudBoundsHeightBottom; // 0x0027 (0x0001)
    bool bOverride_CloudBoundsHeightTop; // 0x0027 (0x0001)
    bool bOverride_CloudNoise; // 0x0028 (0x0001)
    bool bOverride_CloudNoiseFrequency; // 0x0028 (0x0001)
    bool bOverride_CloudNoiseMagnitude; // 0x0028 (0x0001)
    bool bOverride_CloudDensityWorldScale; // 0x0028 (0x0001)
    bool bOverride_CloudDensityScale; // 0x0028 (0x0001)
    bool bOverride_CloudFogScale; // 0x0028 (0x0001)
    bool bOverride_CloudSunPhaseLowDensityStrength; // 0x0028 (0x0001)
    bool bOverride_CloudSunPhaseHighDensityStrength; // 0x0028 (0x0001)
    bool bOverride_CloudSunPhaseBrightness; // 0x0029 (0x0001)
    bool bOverride_EnableTangentSpaceBlur; // 0x0029 (0x0001)
    bool bOverride_TangentSpaceBlurSize; // 0x0029 (0x0001)
    bool bOverride_TangentSpaceBlurIntensity; // 0x0029 (0x0001)
    bool bOverride_EnableSSS; // 0x0029 (0x0001)
    bool bOverride_SSSQuality; // 0x0029 (0x0001)
    bool bOverride_SSSBlurSize; // 0x0029 (0x0001)
    bool bOverride_SSSBlurDepthFactor; // 0x0029 (0x0001)
    uint8_t Pad_0[0x2]; // 0x002A (0x0002)
    float WhiteTemp; // 0x002C (0x0004)
    float WhiteTint; // 0x0030 (0x0004)
    uint8_t AutoWhiteBalanceRedGainRange[0x8]; // 0x0034 (0x0008)
    uint8_t AutoWhiteBalanceBlueGainRange[0x8]; // 0x003C (0x0008)
    float AutoWhiteBalanceBlendRate; // 0x0044 (0x0004)
    float AutoWhiteBalanceBlendCameraCut; // 0x0048 (0x0004)
    float AutoWhiteBalanceBlend; // 0x004C (0x0004)
    float AutoWhiteBalanceBaseColorInfluence; // 0x0050 (0x0004)
    bool EnableAutoWhiteBalanceInEditor; // 0x0054 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0055 (0x0003)
    uint8_t ColorSaturation[0xC]; // 0x0058 (0x000C)
    uint8_t ColorContrast[0xC]; // 0x0064 (0x000C)
    uint8_t ColorGamma[0xC]; // 0x0070 (0x000C)
    uint8_t ColorGain[0xC]; // 0x007C (0x000C)
    uint8_t ColorOffset[0xC]; // 0x0088 (0x000C)
    uint8_t FilmWhitePoint[0x10]; // 0x0094 (0x0010)
    uint8_t FilmShadowTint[0x10]; // 0x00A4 (0x0010)
    float FilmShadowTintBlend; // 0x00B4 (0x0004)
    float FilmShadowTintAmount; // 0x00B8 (0x0004)
    float FilmSaturation; // 0x00BC (0x0004)
    uint8_t FilmChannelMixerRed[0x10]; // 0x00C0 (0x0010)
    uint8_t FilmChannelMixerGreen[0x10]; // 0x00D0 (0x0010)
    uint8_t FilmChannelMixerBlue[0x10]; // 0x00E0 (0x0010)
    float FilmContrast; // 0x00F0 (0x0004)
    float FilmToeAmount; // 0x00F4 (0x0004)
    float FilmHealAmount; // 0x00F8 (0x0004)
    float FilmDynamicRange; // 0x00FC (0x0004)
    float FilmSlope; // 0x0100 (0x0004)
    float FilmToe; // 0x0104 (0x0004)
    float FilmShoulder; // 0x0108 (0x0004)
    float FilmBlackClip; // 0x010C (0x0004)
    float FilmWhiteClip; // 0x0110 (0x0004)
    uint8_t SceneColorTint[0x10]; // 0x0114 (0x0010)
    float SceneFringeIntensity; // 0x0124 (0x0004)
    float BloomIntensity; // 0x0128 (0x0004)
    float BloomThreshold; // 0x012C (0x0004)
    float BloomSizeScale; // 0x0130 (0x0004)
    float BloomMaxThreshold; // 0x0134 (0x0004)
    bool BloomUseFixedResolution; // 0x0138 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0139 (0x0003)
    float Bloom1Size; // 0x013C (0x0004)
    float Bloom2Size; // 0x0140 (0x0004)
    float Bloom3Size; // 0x0144 (0x0004)
    float Bloom4Size; // 0x0148 (0x0004)
    float Bloom5Size; // 0x014C (0x0004)
    float Bloom6Size; // 0x0150 (0x0004)
    uint8_t Bloom1Tint[0x10]; // 0x0154 (0x0010)
    uint8_t Bloom2Tint[0x10]; // 0x0164 (0x0010)
    uint8_t Bloom3Tint[0x10]; // 0x0174 (0x0010)
    uint8_t Bloom4Tint[0x10]; // 0x0184 (0x0010)
    uint8_t Bloom5Tint[0x10]; // 0x0194 (0x0010)
    uint8_t Bloom6Tint[0x10]; // 0x01A4 (0x0010)
    float BloomDirtMaskIntensity; // 0x01B4 (0x0004)
    uint8_t BloomDirtMaskTint[0x10]; // 0x01B8 (0x0010)
    class UObject* BloomDirtMask; // 0x01C8 (0x0008)
    bool EnableBendBloom; // 0x01D0 (0x0001)
    bool EnableBendBloomInEditor; // 0x01D1 (0x0001)
    uint8_t Pad_3[0x2]; // 0x01D2 (0x0002)
    float BendBloomScale; // 0x01D4 (0x0004)
    float BendBloomInputMinimum; // 0x01D8 (0x0004)
    float BendBloomInputMaximum; // 0x01DC (0x0004)
    float BendBloomTonemapMaximum; // 0x01E0 (0x0004)
    float BendBloomScale2; // 0x01E4 (0x0004)
    float BendBloomInput2Minimum; // 0x01E8 (0x0004)
    float BendBloomInput2Maximum; // 0x01EC (0x0004)
    float BendBloomTonemap2Maximum; // 0x01F0 (0x0004)
    uint8_t BendBloom1Size[0x8]; // 0x01F4 (0x0008)
    uint8_t BendBloom2Size[0x8]; // 0x01FC (0x0008)
    uint8_t BendBloom1Color[0x10]; // 0x0204 (0x0010)
    uint8_t BendBloom2Color[0x10]; // 0x0214 (0x0010)
    float LPVIntensity; // 0x0224 (0x0004)
    float LPVVplInjectionBias; // 0x0228 (0x0004)
    float LPVSize; // 0x022C (0x0004)
    float LPVSecondaryOcclusionIntensity; // 0x0230 (0x0004)
    float LPVSecondaryBounceIntensity; // 0x0234 (0x0004)
    float LPVGeometryVolumeBias; // 0x0238 (0x0004)
    float LPVEmissiveInjectionIntensity; // 0x023C (0x0004)
    float LPVDirectionalOcclusionIntensity; // 0x0240 (0x0004)
    float LPVDirectionalOcclusionRadius; // 0x0244 (0x0004)
    float LPVDiffuseOcclusionExponent; // 0x0248 (0x0004)
    float LPVSpecularOcclusionExponent; // 0x024C (0x0004)
    float LPVDiffuseOcclusionIntensity; // 0x0250 (0x0004)
    float LPVSpecularOcclusionIntensity; // 0x0254 (0x0004)
    uint8_t AmbientCubemapTint[0x10]; // 0x0258 (0x0010)
    float AmbientCubemapIntensity; // 0x0268 (0x0004)
    uint8_t Pad_4[0x4]; // 0x026C (0x0004)
    class UObject* AmbientCubemap; // 0x0270 (0x0008)
    uint8_t AutoExposureMethod; // 0x0278 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0279 (0x0003)
    float BendUseSceneCubemapAsOverlay; // 0x027C (0x0004)
    bool BendUseRealtimeSceneCubemap; // 0x0280 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0281 (0x0003)
    float BendRealtimeSceneCubemapIntensity; // 0x0284 (0x0004)
    float BendScreenSpaceReflectionGlobalScale; // 0x0288 (0x0004)
    float BendScreenSpaceReflectionSkinScale; // 0x028C (0x0004)
    float BendSceneOcclusionMaximum; // 0x0290 (0x0004)
    float BendSceneAmbientCaptureSaturation; // 0x0294 (0x0004)
    struct TArray<uint8_t> BendSceneOcclusionMipScale; // 0x0298 (0x0010)
    struct TArray<uint8_t> BendSceneOcclusionMipPower; // 0x02A8 (0x0010)
    float BendExaggeratedLocalBounceLight; // 0x02B8 (0x0004)
    float BendFlatAmbientIntensityScaler; // 0x02BC (0x0004)
    float BendVoxelOverlapPopFix; // 0x02C0 (0x0004)
    float BendVoxelPerMipMaxOcclusion; // 0x02C4 (0x0004)
    uint8_t BendVoxelTreeColor[0x10]; // 0x02C8 (0x0010)
    float BendExposureAmbientScaledOffset; // 0x02D8 (0x0004)
    float BendExposureAbsoluteOffset; // 0x02DC (0x0004)
    float BendExposureThresholdingScale; // 0x02E0 (0x0004)
    float BendExposureThresholdingReferenceAmbient; // 0x02E4 (0x0004)
    bool BendDebugExposureThresholding; // 0x02E8 (0x0001)
    uint8_t Pad_7[0x3]; // 0x02E9 (0x0003)
    float BendExposureSecondaryThresholdingScale; // 0x02EC (0x0004)
    float BendExposureSecondaryThresholdingReferenceAmbient; // 0x02F0 (0x0004)
    bool BendDebugSecondaryExposureThresholding; // 0x02F4 (0x0001)
    uint8_t Pad_8[0x3]; // 0x02F5 (0x0003)
    float BendExposureDistanceWeightedScale; // 0x02F8 (0x0004)
    float BendExposureDistanceWeightedFadeFalloff; // 0x02FC (0x0004)
    float BendExposureInteriorBaseColorScale; // 0x0300 (0x0004)
    float AutoExposureLowPercent; // 0x0304 (0x0004)
    float AutoExposureHighPercent; // 0x0308 (0x0004)
    float AutoExposureMinBrightness; // 0x030C (0x0004)
    float AutoExposureMaxBrightness; // 0x0310 (0x0004)
    float AutoExposureSpeedUp; // 0x0314 (0x0004)
    float AutoExposureSpeedDown; // 0x0318 (0x0004)
    float AutoExposureBias; // 0x031C (0x0004)
    float HistogramLogMin; // 0x0320 (0x0004)
    float HistogramLogMax; // 0x0324 (0x0004)
    float LensFlareIntensity; // 0x0328 (0x0004)
    uint8_t LensFlareTint[0x10]; // 0x032C (0x0010)
    float LensFlareBokehSize; // 0x033C (0x0004)
    float LensFlareThreshold; // 0x0340 (0x0004)
    uint8_t Pad_9[0x4]; // 0x0344 (0x0004)
    class UObject* LensFlareBokehShape; // 0x0348 (0x0008)
    uint8_t LensFlareTints[0x10]; // 0x0350 (0x0010)
    uint8_t Pad_10[0x70]; // 0x0360 (0x0070)
    float VignetteIntensity; // 0x03D0 (0x0004)
    float GrainJitter; // 0x03D4 (0x0004)
    float GrainIntensity; // 0x03D8 (0x0004)
    float AmbientOcclusionIntensity; // 0x03DC (0x0004)
    float AmbientOcclusionStaticFraction; // 0x03E0 (0x0004)
    float AmbientOcclusionRadius; // 0x03E4 (0x0004)
    bool AmbientOcclusionRadiusInWS; // 0x03E8 (0x0001)
    uint8_t Pad_11[0x3]; // 0x03E9 (0x0003)
    float AmbientOcclusionFadeDistance; // 0x03EC (0x0004)
    float AmbientOcclusionFadeRadius; // 0x03F0 (0x0004)
    float AmbientOcclusionDistance; // 0x03F4 (0x0004)
    float AmbientOcclusionPower; // 0x03F8 (0x0004)
    float AmbientOcclusionBias; // 0x03FC (0x0004)
    float AmbientOcclusionQuality; // 0x0400 (0x0004)
    float AmbientOcclusionMipBlend; // 0x0404 (0x0004)
    float AmbientOcclusionMipScale; // 0x0408 (0x0004)
    float AmbientOcclusionMipThreshold; // 0x040C (0x0004)
    uint8_t IndirectLightingColor[0x10]; // 0x0410 (0x0010)
    float IndirectLightingIntensity; // 0x0420 (0x0004)
    float ColorGradingIntensity; // 0x0424 (0x0004)
    class UObject* ColorGradingLUT; // 0x0428 (0x0008)
    uint8_t DepthOfFieldMethod; // 0x0430 (0x0001)
    uint8_t Pad_12[0x3]; // 0x0431 (0x0003)
    float DepthOfFieldFstop; // 0x0434 (0x0004)
    float DepthOfFieldFocalDistance; // 0x0438 (0x0004)
    bool DepthOfFieldEnableNearBlur; // 0x043C (0x0001)
    uint8_t Pad_13[0x3]; // 0x043D (0x0003)
    float DepthOfFieldDepthBlurAmount; // 0x0440 (0x0004)
    float DepthOfFieldDepthBlurRadius; // 0x0444 (0x0004)
    float DepthOfFieldFocalRegion; // 0x0448 (0x0004)
    float DepthOfFieldNearTransitionRegion; // 0x044C (0x0004)
    float DepthOfFieldFarTransitionRegion; // 0x0450 (0x0004)
    float DepthOfFieldScale; // 0x0454 (0x0004)
    float DepthOfFieldMaxBokehSize; // 0x0458 (0x0004)
    float DepthOfFieldNearBlurSize; // 0x045C (0x0004)
    float DepthOfFieldFarBlurSize; // 0x0460 (0x0004)
    uint8_t Pad_14[0x4]; // 0x0464 (0x0004)
    class UObject* DepthOfFieldBokehShape; // 0x0468 (0x0008)
    float DepthOfFieldOcclusion; // 0x0470 (0x0004)
    float DepthOfFieldColorThreshold; // 0x0474 (0x0004)
    float DepthOfFieldSizeThreshold; // 0x0478 (0x0004)
    float DepthOfFieldSkyFocusDistance; // 0x047C (0x0004)
    float BendTemporalDepthOfFieldFarDistance; // 0x0480 (0x0004)
    float BendTemporalDepthOfFieldNearDistance; // 0x0484 (0x0004)
    float BendTemporalDepthOfFieldBlurStrength; // 0x0488 (0x0004)
    bool BendTemporalDepthOfFieldNearAffectCharacters; // 0x048C (0x0001)
    bool BendTemporalDepthOfFieldNearClampToFoliageDitherRange; // 0x048D (0x0001)
    bool BendTemporalDepthOfFieldIncludeSky; // 0x048E (0x0001)
    uint8_t Pad_15[0x1]; // 0x048F (0x0001)
    float BendTemporalDepthOfFieldSkyDistanceKM; // 0x0490 (0x0004)
    float DepthOfFieldVignetteSize; // 0x0494 (0x0004)
    float MotionBlurAmount; // 0x0498 (0x0004)
    float MotionBlurMax; // 0x049C (0x0004)
    float MotionBlurPerObjectSize; // 0x04A0 (0x0004)
    float ScreenPercentage; // 0x04A4 (0x0004)
    float BendHorizontalResolutionScale; // 0x04A8 (0x0004)
    bool BendHorizontalResolutionScaleEditorPreview; // 0x04AC (0x0001)
    uint8_t Pad_16[0x3]; // 0x04AD (0x0003)
    float BendFoliageLodScale; // 0x04B0 (0x0004)
    bool BendIsPhotoMode; // 0x04B4 (0x0001)
    bool BendIsDisplayCalibration; // 0x04B5 (0x0001)
    bool ForceSunTemporalShadowBlend; // 0x04B6 (0x0001)
    uint8_t Pad_17[0x1]; // 0x04B7 (0x0001)
    float ForcedSunSkinTemporalShadowBlurring; // 0x04B8 (0x0004)
    float ForcedSunHairTemporalShadowBlurring; // 0x04BC (0x0004)
    uint8_t AntiAliasingMethod; // 0x04C0 (0x0001)
    uint8_t Pad_18[0x3]; // 0x04C1 (0x0003)
    float ScreenSpaceReflectionIntensity; // 0x04C4 (0x0004)
    float ScreenSpaceReflectionQuality; // 0x04C8 (0x0004)
    float ScreenSpaceReflectionMaxRoughness; // 0x04CC (0x0004)
    uint8_t SMAAType; // 0x04D0 (0x0001)
    uint8_t Pad_19[0x3]; // 0x04D1 (0x0003)
    float SMAABaseThreshold; // 0x04D4 (0x0004)
    float SMAAPredicationThreshold; // 0x04D8 (0x0004)
    float SMAAPredicationScale; // 0x04DC (0x0004)
    float SMAAPredicationStrength; // 0x04E0 (0x0004)
    int32_t SMAAXYSearchSteps; // 0x04E4 (0x0004)
    int32_t SMAADiagSearchSteps; // 0x04E8 (0x0004)
    int32_t SMAACornerRounding; // 0x04EC (0x0004)
    float SMAAReprojectionScale; // 0x04F0 (0x0004)
    float SMAALowFrequencyWeight; // 0x04F4 (0x0004)
    float SMAAHighFrequencyWeight; // 0x04F8 (0x0004)
    bool SMAAEnableCienmaticFaces; // 0x04FC (0x0001)
    uint8_t Pad_20[0x3]; // 0x04FD (0x0003)
    float SMAASharpening; // 0x0500 (0x0004)
    float WeatherWetness; // 0x0504 (0x0004)
    float WeatherGroundWaterLevel; // 0x0508 (0x0004)
    float WeatherSnowAccumulation; // 0x050C (0x0004)
    float WeatherWetnessRoughnessModifier; // 0x0510 (0x0004)
    float WeatherDepthBiasNoiseWaterLevel; // 0x0514 (0x0004)
    class UObject* WeatherFBMNoiseTexture; // 0x0518 (0x0008)
    float WeatherWaterPuddleNoiseCoverage; // 0x0520 (0x0004)
    float WeatherNoiseTextureScale; // 0x0524 (0x0004)
    class UObject* WeatherSnowColorTexture; // 0x0528 (0x0008)
    class UObject* WeatherSnowMaterialTexture; // 0x0530 (0x0008)
    class UObject* WeatherSnowNormalTexture; // 0x0538 (0x0008)
    float WeatherSnowTextureScale; // 0x0540 (0x0004)
    float WeatherSnowZoneHeight; // 0x0544 (0x0004)
    float WeatherSnowZoneTransitionHeight; // 0x0548 (0x0004)
    uint8_t Pad_21[0x4]; // 0x054C (0x0004)
    class UObject* WeatherRippleDataTexture; // 0x0550 (0x0008)
    class UObject* WeatherWaveNormalTexture; // 0x0558 (0x0008)
    float WeatherWaveIntensity; // 0x0560 (0x0004)
    float WeatherWaveFadeStartDistance; // 0x0564 (0x0004)
    float WeatherWaveFadeEndDistance; // 0x0568 (0x0004)
    uint8_t Pad_22[0x4]; // 0x056C (0x0004)
    class UObject* WeatherRainHitsNoiseTexture; // 0x0570 (0x0008)
    class UObject* WeatherRainHitsColorTexture; // 0x0578 (0x0008)
    float WeatherRainHitsTextureScale; // 0x0580 (0x0004)
    float WeatherRainHitsSpeed; // 0x0584 (0x0004)
    float WeatherRainHitsFadeStartDistance; // 0x0588 (0x0004)
    float WeatherRainHitsFadeEndDistance; // 0x058C (0x0004)
    class UObject* EyeOcclusionTexture; // 0x0590 (0x0008)
    float EyeDebugViews; // 0x0598 (0x0004)
    float EyeBlurDistance; // 0x059C (0x0004)
    uint8_t EyeOcclusionColor[0x10]; // 0x05A0 (0x0010)
    float EyeTopEdgeWetness; // 0x05B0 (0x0004)
    float EyeBottomEdgeWetness; // 0x05B4 (0x0004)
    float EyeBottomEdgeOcclusionScale; // 0x05B8 (0x0004)
    float EyeGlobalReflectionScale; // 0x05BC (0x0004)
    class UObject* EyeReflectionSetTexture; // 0x05C0 (0x0008)
    int32_t EyeReflectionSetTextureCount; // 0x05C8 (0x0004)
    bool EnableWeightedLuminance; // 0x05CC (0x0001)
    bool EnableExponentialTonemap; // 0x05CC (0x0001)
    bool EnableAcesTonemapperInGame; // 0x05CC (0x0001)
    bool PreviewAcesTonemapperInEditor; // 0x05CC (0x0001)
    uint8_t Pad_23[0x3]; // 0x05CD (0x0003)
    float LuminanceWeightCentreX; // 0x05D0 (0x0004)
    float LuminanceWeightCentreY; // 0x05D4 (0x0004)
    float SkinWeight; // 0x05D8 (0x0004)
    float SkyWeight; // 0x05DC (0x0004)
    float EmissiveWeight; // 0x05E0 (0x0004)
    float BaseColorInfluence; // 0x05E4 (0x0004)
    float AssumedAverageBaseColor; // 0x05E8 (0x0004)
    float AssumedSkyBaseColor; // 0x05EC (0x0004)
    float HighlightInfluence; // 0x05F0 (0x0004)
    float LocalAdaption; // 0x05F4 (0x0004)
    float AdaptiveTonemapping; // 0x05F8 (0x0004)
    uint8_t CCColorBalance[0x10]; // 0x05FC (0x0010)
    float CCBrightness; // 0x060C (0x0004)
    float CCContrast; // 0x0610 (0x0004)
    float CCSaturation; // 0x0614 (0x0004)
    float CCHue; // 0x0618 (0x0004)
    uint8_t ScreenOverlayColor[0x10]; // 0x061C (0x0010)
    float ScreenOverlay_VignetteStrength; // 0x062C (0x0004)
    float ScreenOverlay_VignetteFalloff; // 0x0630 (0x0004)
    uint8_t ScreenOverlay_VignetteColor[0x10]; // 0x0634 (0x0010)
    float CVibrance; // 0x0644 (0x0004)
    float CVibranceThreshold; // 0x0648 (0x0004)
    uint8_t CVibranceChannelScale[0x10]; // 0x064C (0x0010)
    uint8_t BendDepthGrade_NearTint[0x10]; // 0x065C (0x0010)
    uint8_t BendDepthGrade_NearSaturation[0x10]; // 0x066C (0x0010)
    uint8_t BendDepthGrade_NearGamma[0x10]; // 0x067C (0x0010)
    uint8_t BendDepthGrade_FarTint[0x10]; // 0x068C (0x0010)
    uint8_t BendDepthGrade_FarSaturation[0x10]; // 0x069C (0x0010)
    uint8_t BendDepthGrade_FarGamma[0x10]; // 0x06AC (0x0010)
    float BendDepthGrade_TransitionPoint; // 0x06BC (0x0004)
    float BendDepthGrade_TransitionSpread; // 0x06C0 (0x0004)
    uint8_t Pad_24[0xC]; // 0x06C4 (0x000C)
    uint8_t BendEmissiveIntensityChannels[0x10]; // 0x06D0 (0x0010)
    class UObject* BendTreeShadowNoiseTexture; // 0x06E0 (0x0008)
    float BendAtmosphereNearClip; // 0x06E8 (0x0004)
    float BendCinematicSunGlobalIntensity; // 0x06EC (0x0004)
    float BendCinematicSunDirectLightIntensity; // 0x06F0 (0x0004)
    float BendCinematicOverrideTranslucentLightingRange; // 0x06F4 (0x0004)
    float BendCinematicOverrideTranslucentLightingRangeWeight; // 0x06F8 (0x0004)
    float BendCinematicOverrideDynamicShadowRange; // 0x06FC (0x0004)
    float BendCinematicSkinShadowOpacity; // 0x0700 (0x0004)
    float BendCinematicOverrideDynamicShadowRangeWeight; // 0x0704 (0x0004)
    float BendCinematicGlobalVoxelLightScale; // 0x0708 (0x0004)
    float BendCinematicEmissiveVoxelInjectionScale; // 0x070C (0x0004)
    bool BendCinematicDisableSeparateTranslucency; // 0x0710 (0x0001)
    uint8_t Pad_25[0x3]; // 0x0711 (0x0003)
    float BendDepthBiasNearScale; // 0x0714 (0x0004)
    float BendDepthBiasFarScale; // 0x0718 (0x0004)
    bool EnableDepthFog; // 0x071C (0x0001)
    uint8_t Pad_26[0x3]; // 0x071D (0x0003)
    float DepthFogDensity; // 0x0720 (0x0004)
    uint8_t DepthFogStartColor[0x10]; // 0x0724 (0x0010)
    float DepthFogStartDistance; // 0x0734 (0x0004)
    uint8_t DepthFogHorizonColor[0x10]; // 0x0738 (0x0010)
    float DepthFogHorizonDistance; // 0x0748 (0x0004)
    float DepthFogHorizonFalloff; // 0x074C (0x0004)
    uint8_t DepthFogZenithColor[0x10]; // 0x0750 (0x0010)
    float DepthFogZenithFalloff; // 0x0760 (0x0004)
    uint8_t DepthFogSunGlowColor[0x10]; // 0x0764 (0x0010)
    float DepthFogSunGlowIntensity; // 0x0774 (0x0004)
    float DepthFogSunGlowFalloff; // 0x0778 (0x0004)
    float DepthFogSunGlowVerticalFalloff; // 0x077C (0x0004)
    uint8_t DepthFogSunGlow2Color[0x10]; // 0x0780 (0x0010)
    float DepthFogSunGlow2Intensity; // 0x0790 (0x0004)
    float DepthFogSunGlow2Falloff; // 0x0794 (0x0004)
    float DepthFogSunGlow2VerticalFalloff; // 0x0798 (0x0004)
    float DepthFogHeightFadeStart; // 0x079C (0x0004)
    float DepthFogHeightFadeEnd; // 0x07A0 (0x0004)
    float DepthFogHeightFadeFactor; // 0x07A4 (0x0004)
    bool EnableSunTint; // 0x07A8 (0x0001)
    uint8_t Pad_27[0x3]; // 0x07A9 (0x0003)
    float SunTintBrightness; // 0x07AC (0x0004)
    float SunTintRadialFalloff; // 0x07B0 (0x0004)
    float SunTintStartDistance; // 0x07B4 (0x0004)
    float SunTintDistanceFalloff; // 0x07B8 (0x0004)
    float BendFarDistanceFadeScale; // 0x07BC (0x0004)
    float BendFarDistanceFadeFalloff; // 0x07C0 (0x0004)
    float BendFarDistanceFadeExposureCompensation; // 0x07C4 (0x0004)
    bool EnableHeightFog; // 0x07C8 (0x0001)
    uint8_t Pad_28[0x3]; // 0x07C9 (0x0003)
    float HeightFogDensity; // 0x07CC (0x0004)
    uint8_t HeightFogStartColor[0x10]; // 0x07D0 (0x0010)
    float HeightFogStartDistance; // 0x07E0 (0x0004)
    uint8_t HeightFogEndColor[0x10]; // 0x07E4 (0x0010)
    float HeightFogEndDistance; // 0x07F4 (0x0004)
    class UObject* TerrainShadowHeightmap; // 0x07F8 (0x0008)
    uint8_t TerrainShadowRegion[0x1C]; // 0x0800 (0x001C)
    bool EnableVolumetricFog; // 0x081C (0x0001)
    uint8_t Pad_29[0x3]; // 0x081D (0x0003)
    float VolumetricFogDensity; // 0x0820 (0x0004)
    float VolumetricFogTreeDensity; // 0x0824 (0x0004)
    float VolumetricCloudMultiplierDensity; // 0x0828 (0x0004)
    uint8_t VolumetricFogColor[0x10]; // 0x082C (0x0010)
    uint8_t VolumetricFogColorDirectional[0x10]; // 0x083C (0x0010)
    float VolumetricFogZPosition; // 0x084C (0x0004)
    float VolumetricFogHeightDensityVariance; // 0x0850 (0x0004)
    float VolumetricFogNearFadeDistance; // 0x0854 (0x0004)
    float VolumetricFogFarFadeDistance; // 0x0858 (0x0004)
    uint8_t Pad_30[0x4]; // 0x085C (0x0004)
    class UObject* VolumetricFogHeightmap; // 0x0860 (0x0008)
    class UObject* VolumetricFogColorMap; // 0x0868 (0x0008)
    class UObject* VolumetricFogDensityMaterial; // 0x0870 (0x0008)
    uint8_t VolumetricFogHeightmapRegion[0x1C]; // 0x0878 (0x001C)
    float TreeAmbientOcclusionStrength; // 0x0894 (0x0004)
    float TreeAmbientOcclusionFadeDistance; // 0x0898 (0x0004)
    bool EnableSceneDepthReprojection; // 0x089C (0x0001)
    bool EnableSceneDepthReprojectionDebug; // 0x089C (0x0001)
    uint8_t Pad_31[0x3]; // 0x089D (0x0003)
    class UObject* WaterFlowTexture; // 0x08A0 (0x0008)
    bool EnableFogTurbulence; // 0x08A8 (0x0001)
    uint8_t Pad_32[0x3]; // 0x08A9 (0x0003)
    uint8_t FogTurbulence0Direction[0xC]; // 0x08AC (0x000C)
    float FogTurbulence0Speed; // 0x08B8 (0x0004)
    float FogTurbulence0StartScale; // 0x08BC (0x0004)
    float FogTurbulence0StartDensity; // 0x08C0 (0x0004)
    float FogTurbulence0EndScale; // 0x08C4 (0x0004)
    float FogTurbulence0EndDensity; // 0x08C8 (0x0004)
    uint8_t FogTurbulence1Direction[0xC]; // 0x08CC (0x000C)
    float FogTurbulence1Speed; // 0x08D8 (0x0004)
    float FogTurbulence1StartScale; // 0x08DC (0x0004)
    float FogTurbulence1StartDensity; // 0x08E0 (0x0004)
    float FogTurbulence1EndScale; // 0x08E4 (0x0004)
    float FogTurbulence1EndDensity; // 0x08E8 (0x0004)
    bool CloudsEnabled; // 0x08EC (0x0001)
    uint8_t Pad_33[0x3]; // 0x08ED (0x0003)
    float CloudBoundsHeightBottom; // 0x08F0 (0x0004)
    float CloudBoundsHeightTop; // 0x08F4 (0x0004)
    class UObject* CloudNoise; // 0x08F8 (0x0008)
    float CloudNoiseFrequency; // 0x0900 (0x0004)
    float CloudNoiseMagnitude; // 0x0904 (0x0004)
    float CloudDensityWorldScale; // 0x0908 (0x0004)
    float CloudDensityScale; // 0x090C (0x0004)
    float CloudFogScale; // 0x0910 (0x0004)
    float CloudSunPhaseLowDensityStrength; // 0x0914 (0x0004)
    float CloudSunPhaseHighDensityStrength; // 0x0918 (0x0004)
    float CloudSunPhaseBrightness; // 0x091C (0x0004)
    bool EnableTangentSpaceBlur; // 0x0920 (0x0001)
    uint8_t Pad_34[0x3]; // 0x0921 (0x0003)
    float TangentSpaceBlurSize; // 0x0924 (0x0004)
    float TangentSpaceBlurIntensity; // 0x0928 (0x0004)
    bool EnableSSS; // 0x092C (0x0001)
    uint8_t Pad_35[0x3]; // 0x092D (0x0003)
    uint8_t SSSQuality; // 0x0930 (0x0001)
    uint8_t Pad_36[0x3]; // 0x0931 (0x0003)
    float SSSBlurSize; // 0x0934 (0x0004)
    float SSSBlurDepthFactor; // 0x0938 (0x0004)
    uint8_t Pad_37[0x4]; // 0x093C (0x0004)
    uint8_t WeightedBlendables[0x10]; // 0x0940 (0x0010)
    struct TArray<uint8_t> Blendables; // 0x0950 (0x0010)
};

// ScriptStruct: Engine.WeightedBlendables
struct WeightedBlendables {
    struct TArray<uint8_t> Array; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.WeightedBlendable
struct WeightedBlendable {
    float Weight; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* Object; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.PlayerMuteList
struct PlayerMuteList {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    bool bHasVoiceHandshakeCompleted; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    int32_t VoiceChannelIdx; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.MinimalViewInfo
struct MinimalViewInfo {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Rotation[0xC]; // 0x000C (0x000C)
    float FOV; // 0x0018 (0x0004)
    float OrthoWidth; // 0x001C (0x0004)
    float OrthoNearClipPlane; // 0x0020 (0x0004)
    float OrthoFarClipPlane; // 0x0024 (0x0004)
    float AspectRatio; // 0x0028 (0x0004)
    float PerspectiveNearClipPlane; // 0x002C (0x0004)
    bool bUsePerspectiveNearClipPlane; // 0x0030 (0x0001)
    bool bConstrainAspectRatio; // 0x0030 (0x0001)
    bool bFlipConstrainAxis; // 0x0030 (0x0001)
    bool bUseFieldOfViewForLOD; // 0x0030 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0031 (0x0003)
    uint8_t ProjectionMode; // 0x0034 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0035 (0x0003)
    float PostProcessBlendWeight; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    uint8_t PostProcessSettings[0x960]; // 0x0040 (0x0960)
};

// ScriptStruct: Engine.VOscillator
struct VOscillator {
    uint8_t X[0xC]; // 0x0000 (0x000C)
    uint8_t Y[0xC]; // 0x000C (0x000C)
    uint8_t Z[0xC]; // 0x0018 (0x000C)
};

// ScriptStruct: Engine.FOscillator
struct FOscillator {
    float Amplitude; // 0x0000 (0x0004)
    float Frequency; // 0x0004 (0x0004)
    uint8_t InitialOffset; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.ROscillator
struct ROscillator {
    uint8_t Pitch[0xC]; // 0x0000 (0x000C)
    uint8_t Yaw[0xC]; // 0x000C (0x000C)
    uint8_t Roll[0xC]; // 0x0018 (0x000C)
};

// ScriptStruct: Engine.ViewTargetTransitionParams
struct ViewTargetTransitionParams {
    float BlendTime; // 0x0000 (0x0004)
    uint8_t BlendFunction; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    float BlendExp; // 0x0008 (0x0004)
    bool bLockOutgoing; // 0x000C (0x0001)
};

// ScriptStruct: Engine.TViewTarget
struct TViewTarget {
    class UObject* Target; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t POV[0x9A0]; // 0x0010 (0x09A0)
    class UObject* PlayerState; // 0x09B0 (0x0008)
};

// ScriptStruct: Engine.CameraCacheEntry
struct CameraCacheEntry {
    float TimeStamp; // 0x0000 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0004 (0x000C)
    uint8_t POV[0x9A0]; // 0x0010 (0x09A0)
};

// ScriptStruct: Engine.ActiveForceFeedbackEffect
struct ActiveForceFeedbackEffect {
    class UObject* ForceFeedbackEffect; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.ForceFeedbackChannelDetails
struct ForceFeedbackChannelDetails {
    bool bAffectsLeftLarge; // 0x0000 (0x0001)
    bool bAffectsLeftSmall; // 0x0000 (0x0001)
    bool bAffectsRightLarge; // 0x0000 (0x0001)
    bool bAffectsRightSmall; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t Curve[0x80]; // 0x0008 (0x0080)
};

// ScriptStruct: Engine.DebugTextInfo
struct DebugTextInfo {
    class UObject* SrcActor; // 0x0000 (0x0008)
    uint8_t SrcActorOffset[0xC]; // 0x0008 (0x000C)
    uint8_t SrcActorDesiredOffset[0xC]; // 0x0014 (0x000C)
    struct FString DebugText; // 0x0020 (0x0010)
    float TimeRemaining; // 0x0030 (0x0004)
    float Duration; // 0x0034 (0x0004)
    uint8_t TextColor[0x4]; // 0x0038 (0x0004)
    bool bAbsoluteLocation; // 0x003C (0x0001)
    bool bKeepAttachedToActor; // 0x003C (0x0001)
    bool bDrawShadow; // 0x003C (0x0001)
    uint8_t Pad_0[0x3]; // 0x003D (0x0003)
    uint8_t OrigActorLocation[0xC]; // 0x0040 (0x000C)
    uint8_t Pad_1[0x4]; // 0x004C (0x0004)
    class UObject* Font; // 0x0050 (0x0008)
    float FontScale; // 0x0058 (0x0004)
};

// ScriptStruct: Engine.GameClassShortName
struct GameClassShortName {
    struct FString ShortName; // 0x0000 (0x0010)
    struct FString GameClassName; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.HierarchicalSimplification
struct HierarchicalSimplification {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    float TransitionScreenSize; // 0x0004 (0x0004)
    bool bSimplifyMesh; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    uint8_t ProxySetting[0xE8]; // 0x000C (0x00E8)
    uint8_t MergeSetting[0x90]; // 0x00F4 (0x0090)
    float DesiredBoundRadius; // 0x0184 (0x0004)
    float DesiredFillingPercentage; // 0x0188 (0x0004)
    int32_t MinNumberOfActorsToBuild; // 0x018C (0x0004)
};

// ScriptStruct: Engine.NetViewer
struct NetViewer {
    class UObject* InViewer; // 0x0000 (0x0008)
    class UObject* ViewTarget; // 0x0008 (0x0008)
    uint8_t ViewLocation[0xC]; // 0x0010 (0x000C)
    uint8_t ViewDir[0xC]; // 0x001C (0x000C)
};

// ScriptStruct: Engine.LightmassWorldInfoSettings
struct LightmassWorldInfoSettings {
    float StaticLightingLevelScale; // 0x0000 (0x0004)
    int32_t NumIndirectLightingBounces; // 0x0004 (0x0004)
    float IndirectLightingQuality; // 0x0008 (0x0004)
    float IndirectLightingSmoothness; // 0x000C (0x0004)
    uint8_t EnvironmentColor[0x4]; // 0x0010 (0x0004)
    float EnvironmentIntensity; // 0x0014 (0x0004)
    float EmissiveBoost; // 0x0018 (0x0004)
    float DiffuseBoost; // 0x001C (0x0004)
    bool bUseAmbientOcclusion; // 0x0020 (0x0001)
    bool bGenerateAmbientOcclusionMaterialMask; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    float DirectIlluminationOcclusionFraction; // 0x0024 (0x0004)
    float IndirectIlluminationOcclusionFraction; // 0x0028 (0x0004)
    float OcclusionExponent; // 0x002C (0x0004)
    float FullyOccludedSamplesFraction; // 0x0030 (0x0004)
    float MaxOcclusionDistance; // 0x0034 (0x0004)
    bool bVisualizeMaterialDiffuse; // 0x0038 (0x0001)
    bool bVisualizeAmbientOcclusion; // 0x0038 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0039 (0x0003)
    float VolumeLightSamplePlacementScale; // 0x003C (0x0004)
    bool bCompressLightmaps; // 0x0040 (0x0001)
};

// ScriptStruct: Engine.GameModePrefix
struct GameModePrefix {
    struct FString Prefix; // 0x0000 (0x0010)
    struct FString GameMode; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.BendMapOverlay
struct BendMapOverlay {
    struct FName MapOverlayName; // 0x0000 (0x0008)
    uint8_t MapOrigin[0x8]; // 0x0008 (0x0008)
    uint8_t MapSize[0x8]; // 0x0010 (0x0008)
    uint8_t MapMax[0x8]; // 0x0018 (0x0008)
    class UObject* MapTexture; // 0x0020 (0x0008)
    uint8_t MapTextureAsset[0x10]; // 0x0028 (0x0010)
    uint8_t MapColor[0x10]; // 0x0038 (0x0010)
    int32_t MapLayerOffset; // 0x0048 (0x0004)
    bool bMapEnabled; // 0x004C (0x0001)
    bool bIsSelected; // 0x004C (0x0001)
    uint8_t Pad_0[0x3]; // 0x004D (0x0003)
    uint8_t MapFocusBox[0x14]; // 0x0050 (0x0014)
    uint8_t Pad_1[0x4]; // 0x0064 (0x0004)
    struct FString Label; // 0x0068 (0x0010)
    uint8_t LabelPosition[0x8]; // 0x0078 (0x0008)
    float LabelSize; // 0x0080 (0x0004)
    uint8_t LabelColor[0x10]; // 0x0084 (0x0010)
    uint8_t Pad_2[0x4]; // 0x0094 (0x0004)
    struct TArray<uint8_t> MapLevels; // 0x0098 (0x0010)
};

// ScriptStruct: Engine.InterpGroupActorInfo
struct InterpGroupActorInfo {
    struct FName ObjectName; // 0x0000 (0x0008)
    struct TArray<uint8_t> Actors; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.CameraCutInfo
struct CameraCutInfo {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    float TimeStamp; // 0x000C (0x0004)
};

// ScriptStruct: Engine.SwappedWeaponInfo
struct SwappedWeaponInfo {
};

// ScriptStruct: Engine.SupportedAreaData
struct SupportedAreaData {
    struct FString AreaClassName; // 0x0000 (0x0010)
    int32_t AreaID; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    class UClass* AreaClass; // 0x0018 (0x0008)
};

// ScriptStruct: Engine.NavGraphNode
struct NavGraphNode {
    class UObject* Owner; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.NavGraphEdge
struct NavGraphEdge {
};

// ScriptStruct: Engine.RootMotionSourceGroup
struct RootMotionSourceGroup {
    uint8_t Pad_0[0xE8]; // 0x0000 (0x00E8)
    bool bHasAdditiveSources; // 0x00E8 (0x0001)
    bool bHasOverrideSources; // 0x00E9 (0x0001)
    uint8_t Pad_1[0x2]; // 0x00EA (0x0002)
    uint8_t LastPreAdditiveVelocity[0xC]; // 0x00EC (0x000C)
    bool bIsAdditiveVelocityApplied; // 0x00F8 (0x0001)
    uint8_t LastAccumulatedSettings; // 0x00F9 (0x0001)
};

// ScriptStruct: Engine.RootMotionSourceSettings
struct RootMotionSourceSettings {
    uint8_t Flags; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.RootMotionSource_JumpForce
struct RootMotionSource_JumpForce : public RootMotionSource {
    uint8_t Pad_0[0x80]; // 0x0000 (0x0080)
    uint8_t Rotation[0xC]; // 0x0080 (0x000C)
    float Distance; // 0x008C (0x0004)
    float Height; // 0x0090 (0x0004)
    bool bDisableTimeout; // 0x0094 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0095 (0x0003)
    class UObject* PathOffsetCurve; // 0x0098 (0x0008)
    class UObject* TimeMappingCurve; // 0x00A0 (0x0008)
};

// ScriptStruct: Engine.RootMotionSource
struct RootMotionSource {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t Priority[0x2]; // 0x0010 (0x0002)
    uint8_t LocalID[0x2]; // 0x0012 (0x0002)
    uint8_t AccumulateMode; // 0x0014 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0015 (0x0003)
    struct FName InstanceName; // 0x0018 (0x0008)
    float StartTime; // 0x0020 (0x0004)
    float CurrentTime; // 0x0024 (0x0004)
    float PreviousTime; // 0x0028 (0x0004)
    float Duration; // 0x002C (0x0004)
    uint8_t Status; // 0x0030 (0x0001)
    uint8_t Settings; // 0x0031 (0x0001)
    bool bInLocalSpace; // 0x0032 (0x0001)
    bool bImpartsVelocityOnRemoval; // 0x0033 (0x0001)
    uint8_t Pad_2[0xC]; // 0x0034 (0x000C)
    uint8_t RootMotionParams[0x40]; // 0x0040 (0x0040)
};

// ScriptStruct: Engine.RootMotionSourceStatus
struct RootMotionSourceStatus {
    uint8_t Flags; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.RootMotionSource_MoveToForce
struct RootMotionSource_MoveToForce : public RootMotionSource {
    uint8_t Pad_0[0x80]; // 0x0000 (0x0080)
    uint8_t StartLocation[0xC]; // 0x0080 (0x000C)
    uint8_t TargetLocation[0xC]; // 0x008C (0x000C)
    bool bRestrictSpeedToExpected; // 0x0098 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0099 (0x0007)
    class UObject* PathOffsetCurve; // 0x00A0 (0x0008)
};

// ScriptStruct: Engine.RootMotionSource_RadialForce
struct RootMotionSource_RadialForce : public RootMotionSource {
    uint8_t Pad_0[0x80]; // 0x0000 (0x0080)
    uint8_t Location[0xC]; // 0x0080 (0x000C)
    uint8_t Pad_1[0x4]; // 0x008C (0x0004)
    class UObject* LocationActor; // 0x0090 (0x0008)
    float Radius; // 0x0098 (0x0004)
    float Strength; // 0x009C (0x0004)
    bool bIsPush; // 0x00A0 (0x0001)
    bool bNoZForce; // 0x00A1 (0x0001)
    uint8_t Pad_2[0x6]; // 0x00A2 (0x0006)
    class UObject* StrengthDistanceFalloff; // 0x00A8 (0x0008)
    class UObject* StrengthOverTime; // 0x00B0 (0x0008)
};

// ScriptStruct: Engine.RootMotionSource_ConstantForce
struct RootMotionSource_ConstantForce : public RootMotionSource {
    uint8_t Pad_0[0x80]; // 0x0000 (0x0080)
    uint8_t Force[0xC]; // 0x0080 (0x000C)
};

// ScriptStruct: Engine.BasedMovementInfo
struct BasedMovementInfo {
    uint64_t MovementBase; // 0x0000 (0x0008)
    struct FName BoneName; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    bool bServerHasBaseComponent; // 0x0028 (0x0001)
    bool bRelativeRotation; // 0x0029 (0x0001)
    bool bServerHasVelocity; // 0x002A (0x0001)
};

// ScriptStruct: Engine.SimulatedRootMotionReplicatedMove
struct SimulatedRootMotionReplicatedMove {
    float Time; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t RootMotion[0x160]; // 0x0008 (0x0160)
};

// ScriptStruct: Engine.RepRootMotionMontage
struct RepRootMotionMontage {
    bool bIsActive; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* AnimMontage; // 0x0008 (0x0008)
    float Position; // 0x0010 (0x0004)
    uint8_t Location[0xC]; // 0x0014 (0x000C)
    uint8_t Rotation[0xC]; // 0x0020 (0x000C)
    uint8_t Pad_1[0x4]; // 0x002C (0x0004)
    class UObject* MovementBase; // 0x0030 (0x0008)
    struct FName MovementBaseBoneName; // 0x0038 (0x0008)
    bool bRelativePosition; // 0x0040 (0x0001)
    bool bRelativeRotation; // 0x0041 (0x0001)
    uint8_t Pad_2[0x6]; // 0x0042 (0x0006)
    uint8_t AuthoritativeRootMotion[0x100]; // 0x0048 (0x0100)
    uint8_t Acceleration[0xC]; // 0x0148 (0x000C)
    uint8_t LinearVelocity[0xC]; // 0x0154 (0x000C)
};

// ScriptStruct: Engine.NavAvoidanceMask
struct NavAvoidanceMask {
    bool bGroup0; // 0x0000 (0x0001)
    bool bGroup1; // 0x0000 (0x0001)
    bool bGroup2; // 0x0000 (0x0001)
    bool bGroup3; // 0x0000 (0x0001)
    bool bGroup4; // 0x0000 (0x0001)
    bool bGroup5; // 0x0000 (0x0001)
    bool bGroup6; // 0x0000 (0x0001)
    bool bGroup7; // 0x0000 (0x0001)
    bool bGroup8; // 0x0001 (0x0001)
    bool bGroup9; // 0x0001 (0x0001)
    bool bGroup10; // 0x0001 (0x0001)
    bool bGroup11_Fire; // 0x0001 (0x0001)
    bool bGroup12; // 0x0001 (0x0001)
    bool bGroup13; // 0x0001 (0x0001)
    bool bGroup14; // 0x0001 (0x0001)
    bool bGroup15; // 0x0001 (0x0001)
    bool bGroup16; // 0x0002 (0x0001)
    bool bGroup17; // 0x0002 (0x0001)
    bool bGroup18; // 0x0002 (0x0001)
    bool bGroup19; // 0x0002 (0x0001)
    bool bGroup20; // 0x0002 (0x0001)
    bool bGroup21; // 0x0002 (0x0001)
    bool bGroup22; // 0x0002 (0x0001)
    bool bGroup23; // 0x0002 (0x0001)
    bool bGroup24; // 0x0003 (0x0001)
    bool bGroup25; // 0x0003 (0x0001)
    bool bGroup26; // 0x0003 (0x0001)
    bool bGroup27; // 0x0003 (0x0001)
    bool bGroup28; // 0x0003 (0x0001)
    bool bGroup29; // 0x0003 (0x0001)
    bool bGroup30; // 0x0003 (0x0001)
    bool bGroup31; // 0x0003 (0x0001)
};

// ScriptStruct: Engine.CharacterMovementComponentPostPhysicsTickFunction
struct CharacterMovementComponentPostPhysicsTickFunction : public TickFunction {
};

// ScriptStruct: Engine.FindFloorResult
struct FindFloorResult {
    bool bBlockingHit; // 0x0000 (0x0001)
    bool bWalkableFloor; // 0x0000 (0x0001)
    bool bLineTrace; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float FloorDist; // 0x0004 (0x0004)
    float LineDist; // 0x0008 (0x0004)
    uint8_t Pad_1[0x4]; // 0x000C (0x0004)
    uint8_t HitResult[0x88]; // 0x0010 (0x0088)
};

// ScriptStruct: Engine.VehicleInputRate
struct VehicleInputRate {
    float RiseRate; // 0x0000 (0x0004)
    float FallRate; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.ReplicatedVehicleState
struct ReplicatedVehicleState {
    float SteeringInput; // 0x0000 (0x0004)
    float ThrottleInput; // 0x0004 (0x0004)
    float BrakeInput; // 0x0008 (0x0004)
    float HandbrakeInput; // 0x000C (0x0004)
    int32_t CurrentGear; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.WheelSetup
struct WheelSetup {
    class UClass* WheelClass; // 0x0000 (0x0008)
    class UObject* TireTypeOverride; // 0x0008 (0x0008)
    struct FName BoneName; // 0x0010 (0x0008)
    uint8_t AdditionalOffset[0xC]; // 0x0018 (0x000C)
    float DriveTorqueFactor; // 0x0024 (0x0004)
    bool bIsEnabled; // 0x0028 (0x0001)
};

// ScriptStruct: Engine.VehicleTransmissionData
struct VehicleTransmissionData {
    bool bUseGearAutoBox; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float GearSwitchTime; // 0x0004 (0x0004)
    float GearAutoBoxLatency; // 0x0008 (0x0004)
    float FinalRatio; // 0x000C (0x0004)
    struct TArray<uint8_t> ForwardGears; // 0x0010 (0x0010)
    float ReverseGearRatio; // 0x0020 (0x0004)
    float NeutralGearUpRatio; // 0x0024 (0x0004)
    float ClutchStrength; // 0x0028 (0x0004)
};

// ScriptStruct: Engine.VehicleGearData
struct VehicleGearData {
    float Ratio; // 0x0000 (0x0004)
    float DownRatio; // 0x0004 (0x0004)
    float UpRatio; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.VehicleEngineData
struct VehicleEngineData {
    uint8_t TorqueCurve[0x80]; // 0x0000 (0x0080)
    float MaxRPM; // 0x0080 (0x0004)
    float MOI; // 0x0084 (0x0004)
    float DampingRateFullThrottle; // 0x0088 (0x0004)
    float DampingRateZeroThrottleClutchEngaged; // 0x008C (0x0004)
    float DampingRateZeroThrottleClutchDisengaged; // 0x0090 (0x0004)
};

// ScriptStruct: Engine.VehicleDifferential4WData
struct VehicleDifferential4WData {
    uint8_t DifferentialType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float FrontRearSplit; // 0x0004 (0x0004)
    float FrontLeftRightSplit; // 0x0008 (0x0004)
    float RearLeftRightSplit; // 0x000C (0x0004)
    float CentreBias; // 0x0010 (0x0004)
    float FrontBias; // 0x0014 (0x0004)
    float RearBias; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.AtmospherePrecomputeParameters
struct AtmospherePrecomputeParameters {
    float DensityHeight; // 0x0000 (0x0004)
    float DecayHeight; // 0x0004 (0x0004)
    int32_t MaxScatteringOrder; // 0x0008 (0x0004)
    int32_t TransmittanceTexWidth; // 0x000C (0x0004)
    int32_t TransmittanceTexHeight; // 0x0010 (0x0004)
    int32_t IrradianceTexWidth; // 0x0014 (0x0004)
    int32_t IrradianceTexHeight; // 0x0018 (0x0004)
    int32_t InscatterAltitudeSampleNum; // 0x001C (0x0004)
    int32_t InscatterMuNum; // 0x0020 (0x0004)
    int32_t InscatterMuSNum; // 0x0024 (0x0004)
    int32_t InscatterNuNum; // 0x0028 (0x0004)
};

// ScriptStruct: Engine.AttenuationSettings
struct AttenuationSettings {
    bool bAttenuate; // 0x0000 (0x0001)
    bool bSpatialize; // 0x0000 (0x0001)
    bool bAttenuateWithLPF; // 0x0000 (0x0001)
    bool bEnableListenerFocus; // 0x0000 (0x0001)
    bool bEnableOcclusion; // 0x0000 (0x0001)
    bool bUseComplexCollisionForOcclusion; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t DistanceAlgorithm; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    uint8_t CustomAttenuationCurve[0x80]; // 0x0008 (0x0080)
    uint8_t DistanceType; // 0x0088 (0x0001)
    uint8_t AttenuationShape; // 0x0089 (0x0001)
    uint8_t Pad_2[0x2]; // 0x008A (0x0002)
    float dBAttenuationAtMax; // 0x008C (0x0004)
    float OmniRadius; // 0x0090 (0x0004)
    float StereoSpread; // 0x0094 (0x0004)
    uint8_t SpatializationAlgorithm; // 0x0098 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0099 (0x0003)
    float RadiusMin; // 0x009C (0x0004)
    float RadiusMax; // 0x00A0 (0x0004)
    uint8_t AttenuationShapeExtents[0xC]; // 0x00A4 (0x000C)
    float ConeOffset; // 0x00B0 (0x0004)
    float FalloffDistance; // 0x00B4 (0x0004)
    float LPFRadiusMin; // 0x00B8 (0x0004)
    float LPFRadiusMax; // 0x00BC (0x0004)
    float LPFFrequencyAtMin; // 0x00C0 (0x0004)
    float LPFFrequencyAtMax; // 0x00C4 (0x0004)
    float FocusAzimuth; // 0x00C8 (0x0004)
    float NonFocusAzimuth; // 0x00CC (0x0004)
    float FocusDistanceScale; // 0x00D0 (0x0004)
    float NonFocusDistanceScale; // 0x00D4 (0x0004)
    float FocusPriorityScale; // 0x00D8 (0x0004)
    float NonFocusPriorityScale; // 0x00DC (0x0004)
    float FocusVolumeAttenuation; // 0x00E0 (0x0004)
    float NonFocusVolumeAttenuation; // 0x00E4 (0x0004)
    float OcclusionLowPassFilterFrequency; // 0x00E8 (0x0004)
    float OcclusionVolumeAttenuation; // 0x00EC (0x0004)
    float OcclusionInterpolationTime; // 0x00F0 (0x0004)
};

// ScriptStruct: Engine.AudioComponentParam
struct AudioComponentParam {
    struct FName ParamName; // 0x0000 (0x0008)
    float FloatParam; // 0x0008 (0x0004)
    bool BoolParam; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    int32_t IntParam; // 0x0010 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0014 (0x0004)
    class UObject* SoundWaveParam; // 0x0018 (0x0008)
};

// ScriptStruct: Engine.BakedAnimationStateMachine
struct BakedAnimationStateMachine {
    struct FName MachineName; // 0x0000 (0x0008)
    int32_t InitialState; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct TArray<uint8_t> States; // 0x0010 (0x0010)
    struct TArray<uint8_t> Transitions; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.AnimationTransitionBetweenStates
struct AnimationTransitionBetweenStates : public AnimationStateBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    int32_t PreviousState; // 0x0008 (0x0004)
    int32_t NextState; // 0x000C (0x0004)
    float CrossfadeDuration; // 0x0010 (0x0004)
    int32_t StartNotify; // 0x0014 (0x0004)
    int32_t EndNotify; // 0x0018 (0x0004)
    int32_t InterruptNotify; // 0x001C (0x0004)
    uint8_t BlendMode; // 0x0020 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0021 (0x0007)
    class UObject* CustomCurve; // 0x0028 (0x0008)
    class UObject* BlendProfile; // 0x0030 (0x0008)
    uint8_t LogicType; // 0x0038 (0x0001)
};

// ScriptStruct: Engine.AnimationStateBase
struct AnimationStateBase {
    struct FName StateName; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.BakedAnimationState
struct BakedAnimationState {
    struct FName StateName; // 0x0000 (0x0008)
    struct TArray<uint8_t> Transitions; // 0x0008 (0x0010)
    int32_t StateRootNodeIndex; // 0x0018 (0x0004)
    int32_t StartNotify; // 0x001C (0x0004)
    int32_t EndNotify; // 0x0020 (0x0004)
    int32_t FullyBlendedNotify; // 0x0024 (0x0004)
    bool bIsAConduit; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    int32_t EntryRuleNodeIndex; // 0x002C (0x0004)
    struct TArray<uint8_t> PlayerNodeIndices; // 0x0030 (0x0010)
};

// ScriptStruct: Engine.BakedStateExitTransition
struct BakedStateExitTransition {
    int32_t CanTakeDelegateIndex; // 0x0000 (0x0004)
    int32_t CustomResultNodeIndex; // 0x0004 (0x0004)
    int32_t TransitionIndex; // 0x0008 (0x0004)
    bool bDesiredTransitionReturnValue; // 0x000C (0x0001)
    bool bAutomaticRemainingTimeRule; // 0x000D (0x0001)
    bool TransitionAlwaysTrue; // 0x000E (0x0001)
    uint8_t Pad_0[0x1]; // 0x000F (0x0001)
    struct TArray<uint8_t> PoseEvaluatorLinks; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.AnimationState
struct AnimationState : public AnimationStateBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct TArray<uint8_t> Transitions; // 0x0008 (0x0010)
    int32_t StateRootNodeIndex; // 0x0018 (0x0004)
    int32_t StartNotify; // 0x001C (0x0004)
    int32_t EndNotify; // 0x0020 (0x0004)
    int32_t FullyBlendedNotify; // 0x0024 (0x0004)
};

// ScriptStruct: Engine.AnimationTransitionRule
struct AnimationTransitionRule {
    struct FName RuleToExecute; // 0x0000 (0x0008)
    bool TransitionReturnVal; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    int32_t TransitionIndex; // 0x000C (0x0004)
};

// ScriptStruct: Engine.AnimNotifyEventInstance_Copy
struct AnimNotifyEventInstance_Copy {
    uint8_t AnimNotify[0xA8]; // 0x0000 (0x00A8)
};

// ScriptStruct: Engine.SlotEvaluationPose
struct SlotEvaluationPose {
    uint8_t AdditiveType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Weight; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.PerBoneBlendWeights
struct PerBoneBlendWeights {
    struct TArray<uint8_t> BoneBlendWeights; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.PerBoneBlendWeight
struct PerBoneBlendWeight {
    int32_t SourceIndex; // 0x0000 (0x0004)
    float BlendWeight; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.A2CSPose
struct A2CSPose : public A2Pose {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    struct TArray<uint8_t> ComponentSpaceFlags; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.A2Pose
struct A2Pose {
    struct TArray<uint8_t> Bones; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.BatchedPoint
struct BatchedPoint {
    uint8_t Position[0xC]; // 0x0000 (0x000C)
    uint8_t Color[0x10]; // 0x000C (0x0010)
    float PointSize; // 0x001C (0x0004)
    float RemainingLifeTime; // 0x0020 (0x0004)
    uint8_t DepthPriority; // 0x0024 (0x0001)
};

// ScriptStruct: Engine.BatchedLine
struct BatchedLine {
    uint8_t Start[0xC]; // 0x0000 (0x000C)
    uint8_t End[0xC]; // 0x000C (0x000C)
    uint8_t Color[0x10]; // 0x0018 (0x0010)
    float Thickness; // 0x0028 (0x0004)
    float RemainingLifeTime; // 0x002C (0x0004)
    uint8_t DepthPriority; // 0x0030 (0x0001)
};

// ScriptStruct: Engine.MaterialSpriteElement
struct MaterialSpriteElement {
    class UObject* Material; // 0x0000 (0x0008)
    class UObject* DistanceToOpacityCurve; // 0x0008 (0x0008)
    bool bSizeIsInScreenSpace; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float BaseSizeX; // 0x0014 (0x0004)
    float BaseSizeY; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    class UObject* DistanceToSizeCurve; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.InstancedStaticMeshMappingInfo
struct InstancedStaticMeshMappingInfo {
};

// ScriptStruct: Engine.InstancedStaticMeshInstanceData
struct InstancedStaticMeshInstanceData {
    uint8_t Transform[0x40]; // 0x0000 (0x0040)
    uint8_t LightmapUVBias[0x8]; // 0x0040 (0x0008)
    uint8_t ShadowmapUVBias[0x8]; // 0x0048 (0x0008)
};

// ScriptStruct: Engine.ClusterNode
struct ClusterNode {
    uint8_t BoundMin[0xC]; // 0x0000 (0x000C)
    int32_t FirstChild; // 0x000C (0x0004)
    uint8_t BoundMax[0xC]; // 0x0010 (0x000C)
    int32_t LastChild; // 0x001C (0x0004)
    int32_t FirstInstance; // 0x0020 (0x0004)
    int32_t LastInstance; // 0x0024 (0x0004)
};

// ScriptStruct: Engine.LightmassMaterialInterfaceSettings
struct LightmassMaterialInterfaceSettings {
    bool bCastShadowAsMasked; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float EmissiveBoost; // 0x0004 (0x0004)
    float DiffuseBoost; // 0x0008 (0x0004)
    float ExportResolutionScale; // 0x000C (0x0004)
    bool bOverrideCastShadowAsMasked; // 0x0010 (0x0001)
    bool bOverrideEmissiveBoost; // 0x0010 (0x0001)
    bool bOverrideDiffuseBoost; // 0x0010 (0x0001)
    bool bOverrideExportResolutionScale; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.MaterialRelevance
struct MaterialRelevance {
    bool bOpaque; // 0x0000 (0x0001)
    bool bMasked; // 0x0000 (0x0001)
    bool bDistortion; // 0x0000 (0x0001)
    bool bSeparateTranslucency; // 0x0000 (0x0001)
    bool bNormalTranslucency; // 0x0000 (0x0001)
    bool bDisableDepthTest; // 0x0000 (0x0001)
    bool bOutputsVelocityInBasePass; // 0x0000 (0x0001)
    bool bUsesGlobalDistanceField; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t ShadingModelMask[0x2]; // 0x0004 (0x0002)
};

// ScriptStruct: Engine.ParameterNameCache
struct ParameterNameCache {
    class UClass* ExpressionClass; // 0x0000 (0x0008)
    struct TArray<uint8_t> ParameterNames; // 0x0008 (0x0010)
    struct TArray<uint8_t> ParameterIds; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.VectorParameterValue
struct VectorParameterValue {
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t ParameterValue[0x10]; // 0x0008 (0x0010)
    uint8_t ExpressionGUID[0x10]; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.TextureParameterValue
struct TextureParameterValue {
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* ParameterValue; // 0x0008 (0x0008)
    uint8_t ExpressionGUID[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.ScalarParameterValue
struct ScalarParameterValue {
    struct FName ParameterName; // 0x0000 (0x0008)
    float ParameterValue; // 0x0008 (0x0004)
    uint8_t ExpressionGUID[0x10]; // 0x000C (0x0010)
};

// ScriptStruct: Engine.FontParameterValue
struct FontParameterValue {
    struct FName ParameterName; // 0x0000 (0x0008)
    class UObject* FontValue; // 0x0008 (0x0008)
    int32_t FontPage; // 0x0010 (0x0004)
    uint8_t ExpressionGUID[0x10]; // 0x0014 (0x0010)
};

// ScriptStruct: Engine.NamedEmitterMaterial
struct NamedEmitterMaterial {
    struct FName Name; // 0x0000 (0x0008)
    class UObject* Material; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.LODSoloTrack
struct LODSoloTrack {
    struct TArray<uint8_t> SoloEnableSetting; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.ParticleSystemLOD
struct ParticleSystemLOD {
};

// ScriptStruct: Engine.ProcessNextUpdate
struct ProcessNextUpdate {
    class UObject* Template; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.ParticleSysParam
struct ParticleSysParam {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t ParamType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float Scalar; // 0x000C (0x0004)
    float Scalar_Low; // 0x0010 (0x0004)
    uint8_t Vector[0xC]; // 0x0014 (0x000C)
    uint8_t Vector_Low[0xC]; // 0x0020 (0x000C)
    uint8_t Color[0x4]; // 0x002C (0x0004)
    class UObject* Actor; // 0x0030 (0x0008)
    class UObject* Material; // 0x0038 (0x0008)
};

// ScriptStruct: Engine.OcclusionSettings
struct OcclusionSettings {
    bool bApplyOcclusion; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* OcclusionEffect; // 0x0008 (0x0008)
    float Volume; // 0x0010 (0x0004)
    float FadeTime; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.EngineShowFlagsSetting
struct EngineShowFlagsSetting {
    struct FString ShowFlagName; // 0x0000 (0x0010)
    bool Enabled; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.Timeline
struct Timeline {
    uint8_t LengthMode; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Length; // 0x0004 (0x0004)
    bool bLooping; // 0x0008 (0x0001)
    bool bReversePlayback; // 0x0008 (0x0001)
    bool bPlaying; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    float PlayRate; // 0x000C (0x0004)
    float Position; // 0x0010 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0014 (0x0004)
    struct TArray<uint8_t> Events; // 0x0018 (0x0010)
    struct TArray<uint8_t> InterpVectors; // 0x0028 (0x0010)
    struct TArray<uint8_t> InterpFloats; // 0x0038 (0x0010)
    struct TArray<uint8_t> InterpLinearColors; // 0x0048 (0x0010)
    uint8_t TimelinePostUpdateFunc[0x10]; // 0x0058 (0x0010)
    uint8_t TimelineFinishedFunc[0x10]; // 0x0068 (0x0010)
    uint8_t Pad_3[0x48]; // 0x0078 (0x0048)
    uint64_t PropertySetObject; // 0x00C0 (0x0008)
    struct FName DirectionPropertyName; // 0x00C8 (0x0008)
    class UObject* DirectionProperty; // 0x00D0 (0x0008)
};

// ScriptStruct: Engine.TimelineLinearColorTrack
struct TimelineLinearColorTrack {
    class UObject* LinearColorCurve; // 0x0000 (0x0008)
    uint8_t InterpFunc[0x10]; // 0x0008 (0x0010)
    struct FName LinearColorPropertyName; // 0x0018 (0x0008)
    class UObject* LinearColorProperty; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.TimelineFloatTrack
struct TimelineFloatTrack {
    class UObject* FloatCurve; // 0x0000 (0x0008)
    uint8_t InterpFunc[0x10]; // 0x0008 (0x0010)
    struct FName FloatPropertyName; // 0x0018 (0x0008)
    class UObject* FloatProperty; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.TimelineVectorTrack
struct TimelineVectorTrack {
    class UObject* VectorCurve; // 0x0000 (0x0008)
    uint8_t InterpFunc[0x10]; // 0x0008 (0x0010)
    struct FName VectorPropertyName; // 0x0018 (0x0008)
    class UObject* VectorProperty; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.TimelineEventEntry
struct TimelineEventEntry {
    float Time; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t EventFunc[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.AnimTrack
struct AnimTrack {
    struct TArray<uint8_t> AnimSegments; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.AnimSegment
struct AnimSegment {
    class UObject* AnimReference; // 0x0000 (0x0008)
    float StartPos; // 0x0008 (0x0004)
    float AnimStartTime; // 0x000C (0x0004)
    float AnimEndTime; // 0x0010 (0x0004)
    float AnimPlayRate; // 0x0014 (0x0004)
    int32_t LoopingCount; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.RootMotionExtractionStep
struct RootMotionExtractionStep {
    class UObject* AnimSequence; // 0x0000 (0x0008)
    float StartPosition; // 0x0008 (0x0004)
    float EndPosition; // 0x000C (0x0004)
};

// ScriptStruct: Engine.AnimMontageInstance
struct AnimMontageInstance {
    class UObject* Montage; // 0x0000 (0x0008)
    uint8_t Pad_0[0x88]; // 0x0008 (0x0088)
    bool bPlaying; // 0x0090 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0091 (0x0003)
    float DefaultBlendTimeMultiplier; // 0x0094 (0x0004)
    uint8_t Pad_2[0x28]; // 0x0098 (0x0028)
    struct TArray<uint8_t> NextSections; // 0x00C0 (0x0010)
    struct TArray<uint8_t> PrevSections; // 0x00D0 (0x0010)
    uint8_t Pad_3[0x8]; // 0x00E0 (0x0008)
    struct TArray<uint8_t> ActiveStateBranchingPoints; // 0x00E8 (0x0010)
    float Position; // 0x00F8 (0x0004)
    float PlayRate; // 0x00FC (0x0004)
    uint8_t Blend[0x38]; // 0x0100 (0x0038)
};

// ScriptStruct: Engine.BranchingPointMarker
struct BranchingPointMarker {
    int32_t NotifyIndex; // 0x0000 (0x0004)
    float TriggerTime; // 0x0004 (0x0004)
    uint8_t NotifyEventType; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.BranchingPoint
struct BranchingPoint : public AnimLinkableElement {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    struct FName EventName; // 0x0030 (0x0008)
    float DisplayTime; // 0x0038 (0x0004)
    float TriggerTimeOffset; // 0x003C (0x0004)
};

// ScriptStruct: Engine.SlotAnimationTrack
struct SlotAnimationTrack {
    struct FName SlotName; // 0x0000 (0x0008)
    uint8_t AnimTrack[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.CompositeSection
struct CompositeSection : public AnimLinkableElement {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    struct FName SectionName; // 0x0030 (0x0008)
    float StartTime; // 0x0038 (0x0004)
    uint8_t Pad_1[0x4]; // 0x003C (0x0004)
    struct FName NextSectionName; // 0x0040 (0x0008)
    struct TArray<uint8_t> MetaData; // 0x0048 (0x0010)
};

// ScriptStruct: Engine.AnimSyncMarkerAnalyzer
struct AnimSyncMarkerAnalyzer {
    struct FName Bone; // 0x0000 (0x0008)
    float StepThreshold; // 0x0008 (0x0004)
    float ReleaseThreshold; // 0x000C (0x0004)
    struct FName StepSyncMarker; // 0x0010 (0x0008)
    struct FName ReleaseSyncMarker; // 0x0018 (0x0008)
    uint8_t StepSyncMarkerColor[0x10]; // 0x0020 (0x0010)
    uint8_t ReleaseSyncMarkerColor[0x10]; // 0x0030 (0x0010)
    uint8_t TrackColor[0x10]; // 0x0040 (0x0010)
    struct FName BodySide; // 0x0050 (0x0008)
    struct FName BodyPart; // 0x0058 (0x0008)
};

// ScriptStruct: Engine.CompressedOffsetData
struct CompressedOffsetData {
    struct TArray<uint8_t> OffsetData; // 0x0000 (0x0010)
    int32_t StripSize; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.CompressedTrack
struct CompressedTrack {
    struct TArray<uint8_t> ByteStream; // 0x0000 (0x0010)
    struct TArray<uint8_t> Times; // 0x0010 (0x0010)
    float Mins; // 0x0020 (0x0004)
    uint8_t Pad_0[0x8]; // 0x0024 (0x0008)
    float Ranges; // 0x002C (0x0004)
};

// ScriptStruct: Engine.CurveTrack
struct CurveTrack {
    struct FName CurveName; // 0x0000 (0x0008)
    struct TArray<uint8_t> CurveWeights; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.ScaleTrack
struct ScaleTrack {
    struct TArray<uint8_t> ScaleKeys; // 0x0000 (0x0010)
    struct TArray<uint8_t> Times; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.RotationTrack
struct RotationTrack {
    struct TArray<uint8_t> RotKeys; // 0x0000 (0x0010)
    struct TArray<uint8_t> Times; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.TranslationTrack
struct TranslationTrack {
    struct TArray<uint8_t> PosKeys; // 0x0000 (0x0010)
    struct TArray<uint8_t> Times; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.TrackToSkeletonMap
struct TrackToSkeletonMap {
    int32_t BoneTreeIndex; // 0x0000 (0x0004)
};

// ScriptStruct: Engine.AnimSequenceTrackContainer
struct AnimSequenceTrackContainer {
    struct TArray<uint8_t> AnimationTracks; // 0x0000 (0x0010)
    struct TArray<uint8_t> TrackNames; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.RawAnimSequenceTrack
struct RawAnimSequenceTrack {
    struct TArray<uint8_t> PosKeys; // 0x0000 (0x0010)
    struct TArray<uint8_t> RotKeys; // 0x0010 (0x0010)
    struct TArray<uint8_t> ScaleKeys; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.PerBoneInterpolation
struct PerBoneInterpolation {
    uint8_t BoneReference[0x10]; // 0x0000 (0x0010)
    float InterpolationSpeedPerSec; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.GridBlendSample
struct GridBlendSample {
    uint8_t GridElement[0x18]; // 0x0000 (0x0018)
    float BlendWeight; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.EditorElement
struct EditorElement {
    int32_t Indices; // 0x0000 (0x0004)
    uint8_t Pad_0[0x8]; // 0x0004 (0x0008)
    float Weights; // 0x000C (0x0004)
};

// ScriptStruct: Engine.BlendSample
struct BlendSample {
    class UObject* Animation; // 0x0000 (0x0008)
    uint8_t SampleValue[0xC]; // 0x0008 (0x000C)
};

// ScriptStruct: Engine.BlendParameter
struct BlendParameter {
    struct FString DisplayName; // 0x0000 (0x0010)
    float Min; // 0x0010 (0x0004)
    float Max; // 0x0014 (0x0004)
    int32_t GridNum; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.AnimSetMeshLinkup
struct AnimSetMeshLinkup {
    struct TArray<uint8_t> BoneToTrackTable; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.AssetImportInfo
struct AssetImportInfo {
};

// ScriptStruct: Engine.LaunchOnTestSettings
struct LaunchOnTestSettings {
    uint8_t LaunchOnTestmap[0x10]; // 0x0000 (0x0010)
    struct FString DeviceID; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.EditorMapPerformanceTestDefinition
struct EditorMapPerformanceTestDefinition {
    uint8_t PerformanceTestmap[0x10]; // 0x0000 (0x0010)
    int32_t TestTimer; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.BuildPromotionTestSettings
struct BuildPromotionTestSettings {
    uint8_t DefaultStaticMeshAsset[0x10]; // 0x0000 (0x0010)
    uint8_t ImportWorkflow[0x150]; // 0x0010 (0x0150)
    uint8_t OpenAssets[0x60]; // 0x0160 (0x0060)
    uint8_t NewProjectSettings[0x20]; // 0x01C0 (0x0020)
    uint8_t SourceControlMaterial[0x10]; // 0x01E0 (0x0010)
};

// ScriptStruct: Engine.BuildPromotionNewProjectSettings
struct BuildPromotionNewProjectSettings {
    uint8_t NewProjectFolderOverride[0x10]; // 0x0000 (0x0010)
    struct FString NewProjectNameOverride; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.BuildPromotionOpenAssetSettings
struct BuildPromotionOpenAssetSettings {
    uint8_t BlueprintAsset[0x10]; // 0x0000 (0x0010)
    uint8_t MaterialAsset[0x10]; // 0x0010 (0x0010)
    uint8_t ParticleSystemAsset[0x10]; // 0x0020 (0x0010)
    uint8_t SkeletalMeshAsset[0x10]; // 0x0030 (0x0010)
    uint8_t StaticMeshAsset[0x10]; // 0x0040 (0x0010)
    uint8_t TextureAsset[0x10]; // 0x0050 (0x0010)
};

// ScriptStruct: Engine.BuildPromotionImportWorkflowSettings
struct BuildPromotionImportWorkflowSettings {
    uint8_t Diffuse[0x20]; // 0x0000 (0x0020)
    uint8_t Normal[0x20]; // 0x0020 (0x0020)
    uint8_t StaticMesh[0x20]; // 0x0040 (0x0020)
    uint8_t ReimportStaticMesh[0x20]; // 0x0060 (0x0020)
    uint8_t BlendShapeMesh[0x20]; // 0x0080 (0x0020)
    uint8_t MorphMesh[0x20]; // 0x00A0 (0x0020)
    uint8_t SkeletalMesh[0x20]; // 0x00C0 (0x0020)
    uint8_t Animation[0x20]; // 0x00E0 (0x0020)
    uint8_t Sound[0x20]; // 0x0100 (0x0020)
    uint8_t SurroundSound[0x20]; // 0x0120 (0x0020)
    struct TArray<uint8_t> OtherAssetsToImport; // 0x0140 (0x0010)
};

// ScriptStruct: Engine.EditorImportWorkflowDefinition
struct EditorImportWorkflowDefinition {
    uint8_t ImportFilePath[0x10]; // 0x0000 (0x0010)
    struct TArray<uint8_t> FactorySettings; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.ImportFactorySettingValues
struct ImportFactorySettingValues {
    struct FString SettingName; // 0x0000 (0x0010)
    struct FString Value; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.BlueprintEditorPromotionSettings
struct BlueprintEditorPromotionSettings {
    uint8_t FirstMeshPath[0x10]; // 0x0000 (0x0010)
    uint8_t SecondMeshPath[0x10]; // 0x0010 (0x0010)
    uint8_t DefaultParticleAsset[0x10]; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.ParticleEditorPromotionSettings
struct ParticleEditorPromotionSettings {
    uint8_t DefaultParticleAsset[0x10]; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.MaterialEditorPromotionSettings
struct MaterialEditorPromotionSettings {
    uint8_t DefaultMaterialAsset[0x10]; // 0x0000 (0x0010)
    uint8_t DefaultDiffuseTexture[0x10]; // 0x0010 (0x0010)
    uint8_t DefaultNormalTexture[0x10]; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.EditorImportExportTestDefinition
struct EditorImportExportTestDefinition {
    uint8_t ImportFilePath[0x10]; // 0x0000 (0x0010)
    struct FString ExportFileExtension; // 0x0010 (0x0010)
    bool bSkipExport; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    struct TArray<uint8_t> FactorySettings; // 0x0028 (0x0010)
};

// ScriptStruct: Engine.ExternalToolDefinition
struct ExternalToolDefinition {
    struct FString ToolName; // 0x0000 (0x0010)
    uint8_t ExecutablePath[0x10]; // 0x0010 (0x0010)
    struct FString CommandLineOptions; // 0x0020 (0x0010)
    uint8_t WorkingDirectory[0x10]; // 0x0030 (0x0010)
    struct FString ScriptExtension; // 0x0040 (0x0010)
    uint8_t ScriptDirectory[0x10]; // 0x0050 (0x0010)
};

// ScriptStruct: Engine.OpenTestAsset
struct OpenTestAsset {
    uint8_t AssetToOpen[0x10]; // 0x0000 (0x0010)
    bool bSkipTestWhenUnAttended; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.NavEdgeSegment
struct NavEdgeSegment {
    uint8_t P0[0xC]; // 0x0000 (0x000C)
    uint8_t P1[0xC]; // 0x000C (0x000C)
};

// ScriptStruct: Engine.NavAvoidanceData
struct NavAvoidanceData {
};

// ScriptStruct: Engine.BendSkeletonCoreJointList
struct BendSkeletonCoreJointList {
};

// ScriptStruct: Engine.BendAnimBoneControllerSetupInstance
struct BendAnimBoneControllerSetupInstance {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_Base
struct BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_AimConstraint
struct BendAnimBoneControllerInstance_AimConstraint : public BendAnimBoneControllerInstance_Base {
    uint8_t Pad_0[0x2C]; // 0x0000 (0x002C)
    uint8_t Axes; // 0x002C (0x0001)
};

// ScriptStruct: Engine.BlendSource
struct BlendSource {
    uint8_t SourceBone[0x10]; // 0x0000 (0x0010)
    uint8_t SourceControlType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    int32_t SourceControlIndex; // 0x0014 (0x0004)
    float Weight; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_BlendNode
struct BendAnimBoneControllerInstance_BlendNode : public BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_ConeAngleConstraint
struct BendAnimBoneControllerInstance_ConeAngleConstraint : public BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.ConstraintSource
struct ConstraintSource {
    uint8_t SourceBone[0x10]; // 0x0000 (0x0010)
    float Weight; // 0x0010 (0x0004)
    uint8_t Offset[0xC]; // 0x0014 (0x000C)
    uint8_t Rotation[0x10]; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_ConstraintBase
struct BendAnimBoneControllerInstance_ConstraintBase : public BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_OrientConstraint
struct BendAnimBoneControllerInstance_OrientConstraint : public BendAnimBoneControllerInstance_ConstraintBase {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_ParentConstraint
struct BendAnimBoneControllerInstance_ParentConstraint : public BendAnimBoneControllerInstance_ConstraintBase {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_PointConstraint
struct BendAnimBoneControllerInstance_PointConstraint : public BendAnimBoneControllerInstance_ConstraintBase {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_SetDrivenKey
struct BendAnimBoneControllerInstance_SetDrivenKey : public BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.TransformSource
struct TransformSource {
    uint8_t SourceBone[0x10]; // 0x0000 (0x0010)
    uint8_t SourceControlType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    int32_t SourceControlIndex; // 0x0014 (0x0004)
    uint8_t TransformControlType; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    int32_t TransformControlIndex; // 0x001C (0x0004)
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_TransformNode
struct BendAnimBoneControllerInstance_TransformNode : public BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.BendAnimBoneControllerInstance_TwistConstraint
struct BendAnimBoneControllerInstance_TwistConstraint : public BendAnimBoneControllerInstance_Base {
};

// ScriptStruct: Engine.SwappedActorInfo
struct SwappedActorInfo {
};

// ScriptStruct: Engine.NavEdgeGroup
struct NavEdgeGroup {
    uint8_t Box[0x1C]; // 0x0000 (0x001C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> RoadEdgeSegments; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.BlendProfileBoneEntry
struct BlendProfileBoneEntry {
    uint8_t BoneReference[0x10]; // 0x0000 (0x0010)
    float BlendScale; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.AnimParentNodeAssetOverride
struct AnimParentNodeAssetOverride {
    class UObject* NewAsset; // 0x0000 (0x0008)
    uint8_t ParentNodeGuid[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.AnimGroupInfo
struct AnimGroupInfo {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t Color[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.DataTableCategoryHandle
struct DataTableCategoryHandle {
    class UObject* DataTable; // 0x0000 (0x0008)
    struct FName ColumnName; // 0x0008 (0x0008)
    struct FName RowContents; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.DataTableRowHandle
struct DataTableRowHandle {
    class UObject* DataTable; // 0x0000 (0x0008)
    struct FName RowName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.DialogueWaveParameter
struct DialogueWaveParameter {
    class UObject* DialogueWave; // 0x0000 (0x0008)
    uint8_t Context[0x18]; // 0x0008 (0x0018)
};

// ScriptStruct: Engine.DialogueContext
struct DialogueContext {
    class UObject* Speaker; // 0x0000 (0x0008)
    struct TArray<uint8_t> Targets; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.CustomProfile
struct CustomProfile {
    struct FName Name; // 0x0000 (0x0008)
    struct TArray<uint8_t> CustomResponses; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.CustomChannelSetup
struct CustomChannelSetup {
    uint8_t Channel; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName Name; // 0x0008 (0x0008)
    uint8_t DefaultResponse; // 0x0010 (0x0001)
    bool bTraceType; // 0x0011 (0x0001)
    bool bStaticObject; // 0x0012 (0x0001)
};

// ScriptStruct: Engine.CollisionResponseTemplate
struct CollisionResponseTemplate {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t CollisionEnabled; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FName ObjectTypeName; // 0x0010 (0x0008)
    struct TArray<uint8_t> CustomResponses; // 0x0018 (0x0010)
    struct FString HelpMessage; // 0x0028 (0x0010)
    bool bCanModify; // 0x0038 (0x0001)
};

// ScriptStruct: Engine.EventGraphFastCallPair
struct EventGraphFastCallPair {
    class UObject* FunctionToPatch; // 0x0000 (0x0008)
    int32_t EventGraphCallOffset; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.BlueprintDebugData
struct BlueprintDebugData {
};

// ScriptStruct: Engine.PointerToUberGraphFrame
struct PointerToUberGraphFrame {
};

// ScriptStruct: Engine.DebuggingInfoForSingleFunction
struct DebuggingInfoForSingleFunction {
};

// ScriptStruct: Engine.NodeToCodeAssociation
struct NodeToCodeAssociation {
};

// ScriptStruct: Engine.AnimBlueprintDebugData
struct AnimBlueprintDebugData {
};

// ScriptStruct: Engine.AnimationFrameSnapshot
struct AnimationFrameSnapshot {
};

// ScriptStruct: Engine.StateMachineDebugData
struct StateMachineDebugData {
};

// ScriptStruct: Engine.AggregateGeometry2D
struct AggregateGeometry2D {
    struct TArray<uint8_t> CircleElements; // 0x0000 (0x0010)
    struct TArray<uint8_t> BoxElements; // 0x0010 (0x0010)
    struct TArray<uint8_t> ConvexElements; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.ConvexElement2D
struct ConvexElement2D {
    struct TArray<uint8_t> VertexData; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.BoxElement2D
struct BoxElement2D {
    uint8_t Center[0x8]; // 0x0000 (0x0008)
    float Width; // 0x0008 (0x0004)
    float Height; // 0x000C (0x0004)
    float angle; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.CircleElement2D
struct CircleElement2D {
    uint8_t Center[0x8]; // 0x0000 (0x0008)
    float Radius; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.BuilderPoly
struct BuilderPoly {
    struct TArray<uint8_t> VertexIndices; // 0x0000 (0x0010)
    int32_t Direction; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FName ItemName; // 0x0018 (0x0008)
    int32_t PolyFlags; // 0x0020 (0x0004)
};

// ScriptStruct: Engine.PluginRedirect
struct PluginRedirect {
    struct FString OldPluginName; // 0x0000 (0x0010)
    struct FString NewPluginName; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.StructRedirect
struct StructRedirect {
    struct FName OldStructName; // 0x0000 (0x0008)
    struct FName NewStructName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.ClassRedirect
struct ClassRedirect {
    struct FName ObjectName; // 0x0000 (0x0008)
    struct FName OldClassName; // 0x0008 (0x0008)
    struct FName NewClassName; // 0x0010 (0x0008)
    struct FName OldSubobjName; // 0x0018 (0x0008)
    struct FName NewSubobjName; // 0x0020 (0x0008)
    struct FName NewClassClass; // 0x0028 (0x0008)
    struct FName NewClassPackage; // 0x0030 (0x0008)
    bool InstanceOnly; // 0x0038 (0x0001)
};

// ScriptStruct: Engine.GameNameRedirect
struct GameNameRedirect {
    struct FName OldGameName; // 0x0000 (0x0008)
    struct FName NewGameName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.ScreenMessageString
struct ScreenMessageString {
    uint8_t Key[0x8]; // 0x0000 (0x0008)
    struct FString ScreenMessage; // 0x0008 (0x0010)
    uint8_t DisplayColor[0x4]; // 0x0018 (0x0004)
    float TimeToDisplay; // 0x001C (0x0004)
    float CurrentTimeDisplayed; // 0x0020 (0x0004)
    uint8_t TextScale[0x8]; // 0x0024 (0x0008)
};

// ScriptStruct: Engine.DropNoteInfo
struct DropNoteInfo {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Rotation[0xC]; // 0x000C (0x000C)
    struct FString Comment; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.StatColorMapping
struct StatColorMapping {
    struct FString StatName; // 0x0000 (0x0010)
    struct TArray<uint8_t> ColorMap; // 0x0010 (0x0010)
    bool DisableBlend; // 0x0020 (0x0001)
};

// ScriptStruct: Engine.StatColorMapEntry
struct StatColorMapEntry {
    float In; // 0x0000 (0x0004)
    uint8_t Out[0x4]; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.WorldContext
struct WorldContext {
    uint8_t Pad_0[0xE0]; // 0x0000 (0x00E0)
    uint8_t LastURL[0x70]; // 0x00E0 (0x0070)
    uint8_t LastRemoteURL[0x70]; // 0x0150 (0x0070)
    class UObject* PendingNetGame; // 0x01C0 (0x0008)
    struct TArray<uint8_t> PackagesToFullyLoad; // 0x01C8 (0x0010)
    uint8_t Pad_1[0x10]; // 0x01D8 (0x0010)
    struct TArray<uint8_t> LoadedLevelsForPendingMapChange; // 0x01E8 (0x0010)
    uint8_t Pad_2[0x18]; // 0x01F8 (0x0018)
    struct TArray<uint8_t> ObjectReferencers; // 0x0210 (0x0010)
    struct TArray<uint8_t> PendingLevelStreamingStatusUpdates; // 0x0220 (0x0010)
    class UObject* GameViewport; // 0x0230 (0x0008)
    class UObject* OwningGameInstance; // 0x0238 (0x0008)
    struct TArray<uint8_t> ActiveNetDrivers; // 0x0240 (0x0010)
};

// ScriptStruct: Engine.NamedNetDriver
struct NamedNetDriver {
    class UObject* NetDriver; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.LevelStreamingStatus
struct LevelStreamingStatus {
    struct FName PackageName; // 0x0000 (0x0008)
    bool bShouldBeLoaded; // 0x0008 (0x0001)
    bool bShouldBeVisible; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    uint8_t LODIndex[0x4]; // 0x000C (0x0004)
};

// ScriptStruct: Engine.FullyLoadedPackagesInfo
struct FullyLoadedPackagesInfo {
    uint8_t FullyLoadType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString Tag; // 0x0008 (0x0010)
    struct TArray<uint8_t> PackagesToLoad; // 0x0018 (0x0010)
    struct TArray<uint8_t> LoadedObjects; // 0x0028 (0x0010)
};

// ScriptStruct: Engine.NetDriverDefinition
struct NetDriverDefinition {
    struct FName DefName; // 0x0000 (0x0008)
    struct FName DriverClassName; // 0x0008 (0x0008)
    struct FName DriverClassNameFallback; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.WrappedStringElement
struct WrappedStringElement {
    struct FString Value; // 0x0000 (0x0010)
    uint8_t LineExtent[0x8]; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.TextSizingParameters
struct TextSizingParameters {
    float DrawX; // 0x0000 (0x0004)
    float DrawY; // 0x0004 (0x0004)
    float DrawXL; // 0x0008 (0x0004)
    float DrawYL; // 0x000C (0x0004)
    uint8_t Scaling[0x8]; // 0x0010 (0x0008)
    class UObject* DrawFont; // 0x0018 (0x0008)
    uint8_t SpacingAdjust[0x8]; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.CanvasIcon
struct CanvasIcon {
    class UObject* Texture; // 0x0000 (0x0008)
    float U; // 0x0008 (0x0004)
    float V; // 0x000C (0x0004)
    float UL; // 0x0010 (0x0004)
    float VL; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.AutoCompleteNode
struct AutoCompleteNode {
    int32_t IndexChar; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> AutoCompleteListIndices; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.SoundConcurrencySettings
struct SoundConcurrencySettings {
    int32_t MaxCount; // 0x0000 (0x0004)
    bool bLimitToOwner; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    uint8_t ResolutionRule; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    float VolumeScale; // 0x000C (0x0004)
};

// ScriptStruct: Engine.HapticsConfiguration
struct HapticsConfiguration {
    bool bUsesHaptics; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct TArray<uint8_t> HapticsIntensities; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.HapticsIntensity
struct HapticsIntensity {
    struct FName PropertyName; // 0x0000 (0x0008)
    float HapticsIntensity; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.SoundNodeEditorData
struct SoundNodeEditorData {
};

// ScriptStruct: Engine.BendDestructionMapData
struct BendDestructionMapData {
};

// ScriptStruct: Engine.BendDestructionFXData
struct BendDestructionFXData {
    struct FName BoneName; // 0x0000 (0x0008)
    int32_t PartsSlot; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    bool OnlyApplyOnDeath; // 0x0010 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0011 (0x0007)
    struct FName FXSocketName; // 0x0018 (0x0008)
    uint8_t BloodStainData[0x20]; // 0x0020 (0x0020)
    struct TArray<uint8_t> DestructionFX; // 0x0040 (0x0010)
};

// ScriptStruct: Engine.BendDestructionFXBasedOnDamageData
struct BendDestructionFXBasedOnDamageData {
    struct TArray<uint8_t> DamageType; // 0x0000 (0x0010)
    int32_t NumberOfHits; // 0x0010 (0x0004)
    float ChanceItWillHappen; // 0x0014 (0x0004)
    class UObject* ParticleFX; // 0x0018 (0x0008)
    class UObject* DestructionSound; // 0x0020 (0x0008)
    uint8_t SeveredLimbData[0x20]; // 0x0028 (0x0020)
};

// ScriptStruct: Engine.BendSeveredLimbData
struct BendSeveredLimbData {
    struct FName LimbInitalPositionSocketName; // 0x0000 (0x0008)
    class UObject* SeveredLimb; // 0x0008 (0x0008)
    class UObject* ParticleFX; // 0x0010 (0x0008)
    struct FName ParticleFXSocketName; // 0x0018 (0x0008)
};

// ScriptStruct: Engine.BendBloodStainData
struct BendBloodStainData {
    struct FName BloodStainSocketName; // 0x0000 (0x0008)
    float BloodStainRadiusInitial; // 0x0008 (0x0004)
    float BloodStainRadiusFinal; // 0x000C (0x0004)
    float BloodStainRadiusTransitionTime; // 0x0010 (0x0004)
    float BloodStainRadiusIntensity; // 0x0014 (0x0004)
    float BloodStainRadiusRandomizationLevel; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.BendLensFlareComponentSection
struct BendLensFlareComponentSection {
    class UObject* Material; // 0x0000 (0x0008)
    int32_t InstanceCount; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.BendMeshMaterialParameterVariationData_ArrayEntry
struct BendMeshMaterialParameterVariationData_ArrayEntry {
    struct FName ParameterName; // 0x0000 (0x0008)
    struct FName MaxNumberName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.BendMeshMaterialVariationData_Struct
struct BendMeshMaterialVariationData_Struct {
    struct TArray<uint8_t> VariationExtraData; // 0x0000 (0x0010)
    struct TArray<uint8_t> Variations; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.BendMeshMaterialVariationsForElement
struct BendMeshMaterialVariationsForElement {
    int32_t ElementIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* OriginalMaterial; // 0x0008 (0x0008)
    struct TArray<uint8_t> Variations; // 0x0010 (0x0010)
    bool bHasOriginalMaterial; // 0x0020 (0x0001)
};

// ScriptStruct: Engine.BendMeshMaterialVariation
struct BendMeshMaterialVariation {
    class UObject* Material; // 0x0000 (0x0008)
    float ProbabilityWeight; // 0x0008 (0x0004)
    float ProbabilityRangeEnd0To1; // 0x000C (0x0004)
};

// ScriptStruct: Engine.BendMeshMaterialVariationExtraData
struct BendMeshMaterialVariationExtraData {
    float ProbabilityWeight; // 0x0000 (0x0004)
    float ProbabilityRangeEnd0To1; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.BendSkeletalMeshLookPart
struct BendSkeletalMeshLookPart {
    bool bIsMaterialVariationEnabledForAnyMaterial; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* Mesh; // 0x0008 (0x0008)
    struct TArray<uint8_t> Materials_Runtime_UsingMaterialIndex; // 0x0010 (0x0010)
    struct TArray<uint8_t> Materials_Runtime_UsingMaterialIndex_NEW; // 0x0020 (0x0010)
};

// ScriptStruct: Engine.BendSkeletalMeshLookMaterial
struct BendSkeletalMeshLookMaterial {
    class UObject* Material; // 0x0000 (0x0008)
    bool bDisableVariation; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.BendStaticMeshImposterPolygon
struct BendStaticMeshImposterPolygon {
    uint8_t v0[0x10]; // 0x0000 (0x0010)
    uint8_t v1[0x10]; // 0x0010 (0x0010)
    uint8_t v2[0x10]; // 0x0020 (0x0010)
    uint8_t V3[0x10]; // 0x0030 (0x0010)
    uint8_t V4[0x10]; // 0x0040 (0x0010)
    uint8_t V5[0x10]; // 0x0050 (0x0010)
    uint8_t V6[0x10]; // 0x0060 (0x0010)
    uint8_t V7[0x10]; // 0x0070 (0x0010)
    float Radius; // 0x0080 (0x0004)
    uint8_t Origin[0xC]; // 0x0084 (0x000C)
};

// ScriptStruct: Engine.BendStaticMeshImposterVertex
struct BendStaticMeshImposterVertex {
    uint8_t UV[0x8]; // 0x0000 (0x0008)
    uint8_t XY[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.BendStaticMeshImposterTextureLayout
struct BendStaticMeshImposterTextureLayout {
    uint8_t SliceCount[0x2]; // 0x0000 (0x0002)
    uint8_t ImageSetCount[0x2]; // 0x0002 (0x0002)
    uint8_t ImageCountX[0x2]; // 0x0004 (0x0002)
    uint8_t ImageCountY[0x2]; // 0x0006 (0x0002)
    float ImageWidth; // 0x0008 (0x0004)
    float ImageHeight; // 0x000C (0x0004)
};

// ScriptStruct: Engine.BendStaticMeshImposterEncodingRange
struct BendStaticMeshImposterEncodingRange {
    uint8_t ImageChannelMask[0x2]; // 0x0000 (0x0002)
    uint8_t EncodedAsPseudoSRGB; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    uint8_t Average[0x4]; // 0x0004 (0x0004)
    uint8_t MinValue[0x4]; // 0x0008 (0x0004)
    uint8_t MaxValue[0x4]; // 0x000C (0x0004)
};

// ScriptStruct: Engine.DestructibleChunkParameters
struct DestructibleChunkParameters {
    bool bIsSupportChunk; // 0x0000 (0x0001)
    bool bDoNotFracture; // 0x0001 (0x0001)
    bool bDoNotDamage; // 0x0002 (0x0001)
    bool bDoNotCrumble; // 0x0003 (0x0001)
};

// ScriptStruct: Engine.FractureMaterial
struct FractureMaterial {
    uint8_t UVScale[0x8]; // 0x0000 (0x0008)
    uint8_t UVOffset[0x8]; // 0x0008 (0x0008)
    uint8_t Tangent[0xC]; // 0x0010 (0x000C)
    float UAngle; // 0x001C (0x0004)
    int32_t InteriorElementIndex; // 0x0020 (0x0004)
};

// ScriptStruct: Engine.AudioQualitySettings
struct AudioQualitySettings {
    struct FText DisplayName; // 0x0000 (0x0018)
    int32_t MaxChannels; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.BendAutoNavLinkGenerationSettings
struct BendAutoNavLinkGenerationSettings {
    bool bEnableAutoNavLinksSystem; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float UnitEdgeLength; // 0x0004 (0x0004)
    float HeightLimit; // 0x0008 (0x0004)
    float MaxHeight; // 0x000C (0x0004)
    float EndPointOffsetAmount; // 0x0010 (0x0004)
    int32_t EndPointOffsetTries; // 0x0014 (0x0004)
    float MinNavMeshDistance; // 0x0018 (0x0004)
    float MaxEndGap; // 0x001C (0x0004)
    float MaxEndAngle; // 0x0020 (0x0004)
    float HordeMaxDropHeight; // 0x0024 (0x0004)
    float HordeMaxClimbHeight; // 0x0028 (0x0004)
    float HordeProbeHeightIncrement; // 0x002C (0x0004)
    float HordeProbeMaxDepthDifference; // 0x0030 (0x0004)
    float HordeProbeHeightDeadZone; // 0x0034 (0x0004)
    float HordeMaxOverHang; // 0x0038 (0x0004)
    float HordeOverHangDrop; // 0x003C (0x0004)
};

// ScriptStruct: Engine.BendCoverGenerationSettings
struct BendCoverGenerationSettings {
    bool bGenerateSlots; // 0x0000 (0x0001)
    bool bGenerateTrees; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float SlotDistanceFromCorner; // 0x0004 (0x0004)
    float SlotPaddingMultiple; // 0x0008 (0x0004)
    float MinFullCoverMultiple; // 0x000C (0x0004)
    float MinHalfCoverMultiple; // 0x0010 (0x0004)
    float DistanceFromBlockingCollisionToBeCoveredMultiple; // 0x0014 (0x0004)
    float MaxHalfCoverForPopUpMultiple; // 0x0018 (0x0004)
    float PopUpVerticalClearanceMultiple; // 0x001C (0x0004)
    float PopOutSideClearanceMultiple; // 0x0020 (0x0004)
    float MaxCoverOverlapMultiple; // 0x0024 (0x0004)
    float PopOutForwardClearanceDistance; // 0x0028 (0x0004)
    float PopOutDropLimit; // 0x002C (0x0004)
    float BottomClearanceForHangingCoverMultiple; // 0x0030 (0x0004)
    float GroundProbeHeightOffset; // 0x0034 (0x0004)
    float MaxTreeRadius; // 0x0038 (0x0004)
};

// ScriptStruct: Engine.BendCoverDebugSettings
struct BendCoverDebugSettings {
    bool bDrawSlots; // 0x0000 (0x0001)
    bool bDrawSlotFlanking; // 0x0000 (0x0001)
    bool bDrawSlotLinks; // 0x0000 (0x0001)
    bool bDrawPopOuts; // 0x0000 (0x0001)
    bool bDrawNormals; // 0x0000 (0x0001)
    bool bDrawTangents; // 0x0000 (0x0001)
    bool bDrawNavLocation; // 0x0000 (0x0001)
    bool bDrawTrees; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.PhysicalSurfaceName
struct PhysicalSurfaceName {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName Name; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.TextureLODGroup
struct TextureLODGroup {
    uint8_t Group; // 0x0000 (0x0001)
    uint8_t Pad_0[0xB]; // 0x0001 (0x000B)
    int32_t LODBias; // 0x000C (0x0004)
    uint8_t Pad_1[0x4]; // 0x0010 (0x0004)
    int32_t NumStreamedMips; // 0x0014 (0x0004)
    uint8_t MipGenSettings; // 0x0018 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0019 (0x0003)
    int32_t MinLODSize; // 0x001C (0x0004)
    int32_t MaxLODSize; // 0x0020 (0x0004)
    uint8_t Pad_3[0x4]; // 0x0024 (0x0004)
    struct FName MinMagFilter; // 0x0028 (0x0008)
    struct FName MipFilter; // 0x0030 (0x0008)
};

// ScriptStruct: Engine.DialogueContextMapping
struct DialogueContextMapping {
    uint8_t Context[0x18]; // 0x0000 (0x0018)
    class UObject* SoundWave; // 0x0018 (0x0008)
    class UObject* Proxy; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.RawDistributionFloat
struct RawDistributionFloat : public RawDistribution {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    float MinValue; // 0x0028 (0x0004)
    float MaxValue; // 0x002C (0x0004)
    class UObject* Distribution; // 0x0030 (0x0008)
};

// ScriptStruct: Engine.RawDistributionVector
struct RawDistributionVector : public RawDistribution {
    uint8_t Pad_0[0x28]; // 0x0000 (0x0028)
    float MinValue; // 0x0028 (0x0004)
    float MaxValue; // 0x002C (0x0004)
    class UObject* Distribution; // 0x0030 (0x0008)
};

// ScriptStruct: Engine.BlueprintComponentDelegateBinding
struct BlueprintComponentDelegateBinding {
    struct FName ComponentPropertyName; // 0x0000 (0x0008)
    struct FName DelegatePropertyName; // 0x0008 (0x0008)
    struct FName FunctionNameToBind; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.BlueprintInputDelegateBinding
struct BlueprintInputDelegateBinding {
    bool bConsumeInput; // 0x0000 (0x0001)
    bool bExecuteWhenPaused; // 0x0000 (0x0001)
    bool bOverrideParentBinding; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.BlueprintInputActionDelegateBinding
struct BlueprintInputActionDelegateBinding : public BlueprintInputDelegateBinding {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FName InputActionName; // 0x0008 (0x0008)
    uint8_t InputKeyEvent; // 0x0010 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0011 (0x0007)
    struct FName FunctionNameToBind; // 0x0018 (0x0008)
};

// ScriptStruct: Engine.BlueprintInputAxisDelegateBinding
struct BlueprintInputAxisDelegateBinding : public BlueprintInputDelegateBinding {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FName InputAxisName; // 0x0008 (0x0008)
    struct FName FunctionNameToBind; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.BlueprintInputAxisKeyDelegateBinding
struct BlueprintInputAxisKeyDelegateBinding : public BlueprintInputDelegateBinding {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t AxisKey[0x18]; // 0x0008 (0x0018)
    struct FName FunctionNameToBind; // 0x0020 (0x0008)
};

// ScriptStruct: Engine.BlueprintInputKeyDelegateBinding
struct BlueprintInputKeyDelegateBinding : public BlueprintInputDelegateBinding {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t InputChord[0x20]; // 0x0008 (0x0020)
    uint8_t InputKeyEvent; // 0x0028 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0029 (0x0007)
    struct FName FunctionNameToBind; // 0x0030 (0x0008)
};

// ScriptStruct: Engine.BlueprintInputTouchDelegateBinding
struct BlueprintInputTouchDelegateBinding : public BlueprintInputDelegateBinding {
    uint8_t Pad_0[0x4]; // 0x0000 (0x0004)
    uint8_t InputKeyEvent; // 0x0004 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0005 (0x0003)
    struct FName FunctionNameToBind; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.GraphReference
struct GraphReference {
    class UObject* MacroGraph; // 0x0000 (0x0008)
    class UObject* GraphBlueprint; // 0x0008 (0x0008)
    uint8_t GraphGuid[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.EdGraphSchemaAction_NewNode
struct EdGraphSchemaAction_NewNode : public EdGraphSchemaAction {
    uint8_t Pad_0[0xB8]; // 0x0000 (0x00B8)
    class UObject* NodeTemplate; // 0x00B8 (0x0008)
};

// ScriptStruct: Engine.EdGraphSchemaAction
struct EdGraphSchemaAction {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    struct FText MenuDescription; // 0x0008 (0x0018)
    struct FString TooltipDescription; // 0x0020 (0x0010)
    struct FText Category; // 0x0030 (0x0018)
    struct FText Keywords; // 0x0048 (0x0018)
    int32_t Grouping; // 0x0060 (0x0004)
    int32_t SectionID; // 0x0064 (0x0004)
    struct TArray<uint8_t> MenuDescriptionArray; // 0x0068 (0x0010)
    struct TArray<uint8_t> FullSearchTitlesArray; // 0x0078 (0x0010)
    struct TArray<uint8_t> FullSearchKeywordsArray; // 0x0088 (0x0010)
    struct TArray<uint8_t> FullSearchCategoryArray; // 0x0098 (0x0010)
    struct FString SearchText; // 0x00A8 (0x0010)
};

// ScriptStruct: Engine.FontImportOptionsData
struct FontImportOptionsData {
    struct FString FontName; // 0x0000 (0x0010)
    float Height; // 0x0010 (0x0004)
    bool bEnableAntialiasing; // 0x0014 (0x0001)
    bool bEnableBold; // 0x0014 (0x0001)
    bool bEnableItalic; // 0x0014 (0x0001)
    bool bEnableUnderline; // 0x0014 (0x0001)
    bool bAlphaOnly; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    uint8_t CharacterSet; // 0x0018 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0019 (0x0007)
    struct FString Chars; // 0x0020 (0x0010)
    struct FString UnicodeRange; // 0x0030 (0x0010)
    struct FString CharsFilePath; // 0x0040 (0x0010)
    struct FString CharsFileWildcard; // 0x0050 (0x0010)
    bool bCreatePrintableOnly; // 0x0060 (0x0001)
    bool bIncludeASCIIRange; // 0x0060 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0061 (0x0003)
    uint8_t ForegroundColor[0x10]; // 0x0064 (0x0010)
    bool bEnableDropShadow; // 0x0074 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0075 (0x0003)
    int32_t TexturePageWidth; // 0x0078 (0x0004)
    int32_t TexturePageMaxHeight; // 0x007C (0x0004)
    int32_t XPadding; // 0x0080 (0x0004)
    int32_t YPadding; // 0x0084 (0x0004)
    int32_t ExtendBoxTop; // 0x0088 (0x0004)
    int32_t ExtendBoxBottom; // 0x008C (0x0004)
    int32_t ExtendBoxRight; // 0x0090 (0x0004)
    int32_t ExtendBoxLeft; // 0x0094 (0x0004)
    bool bEnableLegacyMode; // 0x0098 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0099 (0x0003)
    int32_t Kerning; // 0x009C (0x0004)
    bool bUseDistanceFieldAlpha; // 0x00A0 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00A1 (0x0003)
    int32_t DistanceFieldScaleFactor; // 0x00A4 (0x0004)
    float DistanceFieldScanRadiusScale; // 0x00A8 (0x0004)
};

// ScriptStruct: Engine.FontCharacter
struct FontCharacter {
    int32_t StartU; // 0x0000 (0x0004)
    int32_t StartV; // 0x0004 (0x0004)
    int32_t USize; // 0x0008 (0x0004)
    int32_t VSize; // 0x000C (0x0004)
    uint8_t TextureIndex; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    int32_t VerticalOffset; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.GameplayDebuggerReplicatedBlob
struct GameplayDebuggerReplicatedBlob {
    struct TArray<uint8_t> RepData; // 0x0000 (0x0010)
    int32_t VersionNum; // 0x0010 (0x0004)
    int32_t RepDataOffset; // 0x0014 (0x0004)
    int32_t RepDataSize; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.GameplayDebuggerShapeElement
struct GameplayDebuggerShapeElement {
    struct FString Description; // 0x0000 (0x0010)
    struct TArray<uint8_t> Points; // 0x0010 (0x0010)
    uint8_t TransformationMatrix[0x40]; // 0x0020 (0x0040)
    uint8_t Type; // 0x0060 (0x0001)
    uint8_t Color; // 0x0061 (0x0001)
    uint8_t ThicknesOrRadius[0x2]; // 0x0062 (0x0002)
};

// ScriptStruct: Engine.InputAxisKeyMapping
struct InputAxisKeyMapping {
    struct FName AxisName; // 0x0000 (0x0008)
    uint8_t Key[0x18]; // 0x0008 (0x0018)
    float Scale; // 0x0020 (0x0004)
    uint8_t Primary; // 0x0024 (0x0001)
};

// ScriptStruct: Engine.InputActionKeyMapping
struct InputActionKeyMapping {
    struct FName ActionName; // 0x0000 (0x0008)
    uint8_t Key[0x18]; // 0x0008 (0x0018)
    bool bShift; // 0x0020 (0x0001)
    bool bCtrl; // 0x0020 (0x0001)
    bool bAlt; // 0x0020 (0x0001)
    bool bCmd; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    uint8_t Primary; // 0x0024 (0x0001)
};

// ScriptStruct: Engine.InputAxisConfigEntry
struct InputAxisConfigEntry {
    struct FName AxisKeyName; // 0x0000 (0x0008)
    uint8_t AxisProperties[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.InputAxisProperties
struct InputAxisProperties {
    float DeadZone; // 0x0000 (0x0004)
    float Sensitivity; // 0x0004 (0x0004)
    float Exponent; // 0x0008 (0x0004)
    bool bInvert; // 0x000C (0x0001)
};

// ScriptStruct: Engine.KeyBind
struct KeyBind {
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    struct FString Command; // 0x0018 (0x0010)
    bool Control; // 0x0028 (0x0001)
    bool Shift; // 0x0028 (0x0001)
    bool Alt; // 0x0028 (0x0001)
    bool Cmd; // 0x0028 (0x0001)
    bool bIgnoreCtrl; // 0x0028 (0x0001)
    bool bIgnoreShift; // 0x0028 (0x0001)
    bool bIgnoreAlt; // 0x0028 (0x0001)
    bool bIgnoreCmd; // 0x0028 (0x0001)
};

// ScriptStruct: Engine.CollectionVectorParameter
struct CollectionVectorParameter : public CollectionParameterBase {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    uint8_t DefaultValue[0x10]; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.CollectionParameterBase
struct CollectionParameterBase {
    struct FName ParameterName; // 0x0000 (0x0008)
    uint8_t Id[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.CollectionScalarParameter
struct CollectionScalarParameter : public CollectionParameterBase {
    uint8_t Pad_0[0x18]; // 0x0000 (0x0018)
    float DefaultValue; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.OutputMode
struct OutputMode {
    uint8_t RefreshRate; // 0x0000 (0x0001)
    bool bHighFrameRate; // 0x0001 (0x0001)
};

// ScriptStruct: Engine.AdaptiveTriggerSettings
struct AdaptiveTriggerSettings {
    bool bAdaptiveTriggersMasterEnabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float AdaptiveTriggerMasterStrength; // 0x0004 (0x0004)
    bool bAdaptiveTriggersBikeEnabled; // 0x0008 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0009 (0x0003)
    float AdaptiveTriggerBikeStrength; // 0x000C (0x0004)
    bool bAdaptiveTriggersWeaponEnabled; // 0x0010 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0011 (0x0003)
    float AdaptiveTriggerWeaponStrength; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.HapticSettings
struct HapticSettings {
    bool bHapticsEnabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float MasterHapticIntensity; // 0x0004 (0x0004)
    float BikeHapticIntensity; // 0x0008 (0x0004)
    float EngineHapticIntensity; // 0x000C (0x0004)
    float WeaponHapticIntensity; // 0x0010 (0x0004)
    float MeleeWeaponHapticIntensity; // 0x0014 (0x0004)
    float ExplosionHapticIntensity; // 0x0018 (0x0004)
    float PlayerDamageHapticIntensity; // 0x001C (0x0004)
    float CollectibleHapticIntensity; // 0x0020 (0x0004)
    float HordeHapticIntensity; // 0x0024 (0x0004)
    float EnvironmentalHapticIntensity; // 0x0028 (0x0004)
};

// ScriptStruct: Engine.ColorStruct
struct ColorStruct : public TableRowBase {
    uint8_t HCMColor[0x28]; // 0x0000 (0x0028)
    uint8_t HCMHeroPreview[0x20]; // 0x0028 (0x0020)
    uint8_t HCMFriendlyPreview[0x20]; // 0x0048 (0x0020)
    uint8_t HCMEnemyPreview[0x20]; // 0x0068 (0x0020)
    uint8_t HCMInteractablePreview[0x20]; // 0x0088 (0x0020)
};

// ScriptStruct: Engine.ActiveHapticFeedbackEffect
struct ActiveHapticFeedbackEffect {
    class UObject* HapticEffect; // 0x0000 (0x0008)
};

// ScriptStruct: Engine.HapticFeedbackDetails
struct HapticFeedbackDetails {
    uint8_t Frequency[0x80]; // 0x0000 (0x0080)
    uint8_t Amplitude[0x80]; // 0x0080 (0x0080)
};

// ScriptStruct: Engine.ComponentOverrideRecord
struct ComponentOverrideRecord {
    class UObject* ComponentTemplate; // 0x0000 (0x0008)
    uint8_t ComponentKey[0x20]; // 0x0008 (0x0020)
};

// ScriptStruct: Engine.ComponentKey
struct ComponentKey {
    class UClass* OwnerClass; // 0x0000 (0x0008)
    struct FName SCSVariableName; // 0x0008 (0x0008)
    uint8_t AssociatedGuid[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.CurveEdTab
struct CurveEdTab {
    struct FString TabName; // 0x0000 (0x0010)
    struct TArray<uint8_t> Curves; // 0x0010 (0x0010)
    float ViewStartInput; // 0x0020 (0x0004)
    float ViewEndInput; // 0x0024 (0x0004)
    float ViewStartOutput; // 0x0028 (0x0004)
    float ViewEndOutput; // 0x002C (0x0004)
};

// ScriptStruct: Engine.CurveEdEntry
struct CurveEdEntry {
    class UObject* CurveObject; // 0x0000 (0x0008)
    uint8_t CurveColor[0x4]; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FString CurveName; // 0x0010 (0x0010)
    int32_t bHideCurve; // 0x0020 (0x0004)
    int32_t bColorCurve; // 0x0024 (0x0004)
    int32_t bFloatingPointColorCurve; // 0x0028 (0x0004)
    int32_t bClamp; // 0x002C (0x0004)
    float ClampLow; // 0x0030 (0x0004)
    float ClampHigh; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.InterpEdSelKey
struct InterpEdSelKey {
    class UObject* Group; // 0x0000 (0x0008)
    class UObject* Track; // 0x0008 (0x0008)
    int32_t KeyIndex; // 0x0010 (0x0004)
    float UnsnappedPosition; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.CameraPreviewInfo
struct CameraPreviewInfo {
    class UClass* PawnClass; // 0x0000 (0x0008)
    class UObject* AnimSeq; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    class UObject* PawnInst; // 0x0028 (0x0008)
};

// ScriptStruct: Engine.SubTrackGroup
struct SubTrackGroup {
    struct FString GroupName; // 0x0000 (0x0010)
    struct TArray<uint8_t> TrackIndices; // 0x0010 (0x0010)
    bool bIsCollapsed; // 0x0020 (0x0001)
    bool bIsSelected; // 0x0020 (0x0001)
};

// ScriptStruct: Engine.SupportedSubTrackInfo
struct SupportedSubTrackInfo {
    class UClass* SupportedClass; // 0x0000 (0x0008)
    struct FString SubTrackName; // 0x0008 (0x0010)
    int32_t GroupIndex; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.BoolTrackKey
struct BoolTrackKey {
    float Time; // 0x0000 (0x0004)
    bool Value; // 0x0004 (0x0001)
};

// ScriptStruct: Engine.DirectorTrackCut
struct DirectorTrackCut {
    float Time; // 0x0000 (0x0004)
    float TransitionTime; // 0x0004 (0x0004)
    struct FName TargetCamGroup; // 0x0008 (0x0008)
    int32_t ShotNumber; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.EventTrackKey
struct EventTrackKey {
    float Time; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FName EventName; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.FocusTrackKey
struct FocusTrackKey {
    float StartTime; // 0x0000 (0x0004)
    float Duration; // 0x0004 (0x0004)
    struct FName FocusBone; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.AnimControlTrackKey
struct AnimControlTrackKey {
    float StartTime; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* AnimSeq; // 0x0008 (0x0008)
    float AnimStartOffset; // 0x0010 (0x0004)
    float AnimEndOffset; // 0x0014 (0x0004)
    float AnimPlayRate; // 0x0018 (0x0004)
    bool bLooping; // 0x001C (0x0001)
    bool bReverse; // 0x001C (0x0001)
};

// ScriptStruct: Engine.InterpLookupTrack
struct InterpLookupTrack {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.InterpLookupPoint
struct InterpLookupPoint {
    struct FName GroupName; // 0x0000 (0x0008)
    float Time; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.ParticleReplayTrackKey
struct ParticleReplayTrackKey {
    float Time; // 0x0000 (0x0004)
    float Duration; // 0x0004 (0x0004)
    int32_t ClipIDNumber; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.ToggleTrackKey
struct ToggleTrackKey {
    float Time; // 0x0000 (0x0004)
    uint8_t ToggleAction; // 0x0004 (0x0001)
};

// ScriptStruct: Engine.SoundTrackKey
struct SoundTrackKey {
    float Time; // 0x0000 (0x0004)
    float Volume; // 0x0004 (0x0004)
    float Pitch; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* Sound; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.VisibilityTrackKey
struct VisibilityTrackKey {
    float Time; // 0x0000 (0x0004)
    uint8_t Action; // 0x0004 (0x0001)
    uint8_t ActiveCondition; // 0x0005 (0x0001)
};

// ScriptStruct: Engine.LayerActorStats
struct LayerActorStats {
    class UClass* Type; // 0x0000 (0x0008)
    int32_t Total; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.ClientReceiveData
struct ClientReceiveData {
    class UObject* LocalPC; // 0x0000 (0x0008)
    struct FName MessageType; // 0x0008 (0x0008)
    int32_t MessageIndex; // 0x0010 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0014 (0x0004)
    struct FString MessageString; // 0x0018 (0x0010)
    class UObject* RelatedPlayerState_1; // 0x0028 (0x0008)
    class UObject* RelatedPlayerState_2; // 0x0030 (0x0008)
    class UObject* OptionalObject; // 0x0038 (0x0008)
};

// ScriptStruct: Engine.CustomInput
struct CustomInput {
    struct FString InputName; // 0x0000 (0x0010)
    uint8_t Input[0x38]; // 0x0010 (0x0038)
};

// ScriptStruct: Engine.FunctionExpressionOutput
struct FunctionExpressionOutput {
    class UObject* ExpressionOutput; // 0x0000 (0x0008)
    uint8_t ExpressionOutputId[0x10]; // 0x0008 (0x0010)
    uint8_t Output[0x28]; // 0x0018 (0x0028)
};

// ScriptStruct: Engine.FunctionExpressionInput
struct FunctionExpressionInput {
    class UObject* ExpressionInput; // 0x0000 (0x0008)
    uint8_t ExpressionInputId[0x10]; // 0x0008 (0x0010)
    uint8_t Input[0x38]; // 0x0018 (0x0038)
};

// ScriptStruct: Engine.MaterialParameterCollectionInfo
struct MaterialParameterCollectionInfo {
    uint8_t StateId[0x10]; // 0x0000 (0x0010)
    class UObject* ParameterCollection; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.MaterialFunctionInfo
struct MaterialFunctionInfo {
    uint8_t StateId[0x10]; // 0x0000 (0x0010)
    class UObject* Function; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.MaterialInstanceBasePropertyOverrides
struct MaterialInstanceBasePropertyOverrides {
    bool bOverride_OpacityMaskClipValue; // 0x0000 (0x0001)
    bool bOverride_BlendMode; // 0x0001 (0x0001)
    bool bOverride_ShadingModel; // 0x0002 (0x0001)
    bool bOverride_DitheredLODTransition; // 0x0003 (0x0001)
    bool bOverride_TwoSided; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    float OpacityMaskClipValue; // 0x0008 (0x0004)
    uint8_t BlendMode; // 0x000C (0x0001)
    uint8_t ShadingModel; // 0x000D (0x0001)
    uint8_t Pad_1[0x2]; // 0x000E (0x0002)
    bool TwoSided; // 0x0010 (0x0001)
    bool DitheredLODTransition; // 0x0010 (0x0001)
};

// ScriptStruct: Engine.NavCollisionBox
struct NavCollisionBox {
    uint8_t Offset[0xC]; // 0x0000 (0x000C)
    uint8_t Extent[0xC]; // 0x000C (0x000C)
};

// ScriptStruct: Engine.NavCollisionCylinder
struct NavCollisionCylinder {
    uint8_t Offset[0xC]; // 0x0000 (0x000C)
    float Radius; // 0x000C (0x0004)
    float Height; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.PacketSimulationSettings
struct PacketSimulationSettings {
    int32_t PktLoss; // 0x0000 (0x0004)
    int32_t PktOrder; // 0x0004 (0x0004)
    int32_t PktDup; // 0x0008 (0x0004)
    int32_t PktLag; // 0x000C (0x0004)
    int32_t PktLagVariance; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.ParticleBurst
struct ParticleBurst {
    int32_t Count; // 0x0000 (0x0004)
    int32_t CountLow; // 0x0004 (0x0004)
    float Time; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.ParticleRandomSeedInfo
struct ParticleRandomSeedInfo {
    struct FName ParameterName; // 0x0000 (0x0008)
    bool bGetSeedFromInstance; // 0x0008 (0x0001)
    bool bInstanceSeedIsIndex; // 0x0008 (0x0001)
    bool bResetSeedOnEmitterLooping; // 0x0008 (0x0001)
    bool bRandomlySelectSeedArray; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct TArray<uint8_t> RandomSeeds; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.ParticleCurvePair
struct ParticleCurvePair {
    struct FString CurveName; // 0x0000 (0x0010)
    class UObject* CurveObject; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.BeamModifierOptions
struct BeamModifierOptions {
    bool bModify; // 0x0000 (0x0001)
    bool bScale; // 0x0000 (0x0001)
    bool bLock; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.ParticleEvent_GenerateInfo
struct ParticleEvent_GenerateInfo {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t Frequency; // 0x0004 (0x0004)
    int32_t ParticleFrequency; // 0x0008 (0x0004)
    bool FirstTimeOnly; // 0x000C (0x0001)
    bool LastTimeOnly; // 0x000C (0x0001)
    bool UseReflectedImpactVector; // 0x000C (0x0001)
    bool bUseOrbitOffset; // 0x000C (0x0001)
    uint8_t Pad_1[0x3]; // 0x000D (0x0003)
    struct FName CustomName; // 0x0010 (0x0008)
    struct TArray<uint8_t> ParticleModuleEventsToSendToGame; // 0x0018 (0x0010)
};

// ScriptStruct: Engine.LocationBoneSocketInfo
struct LocationBoneSocketInfo {
    struct FName BoneSocketName; // 0x0000 (0x0008)
    uint8_t Offset[0xC]; // 0x0008 (0x000C)
};

// ScriptStruct: Engine.OrbitOptions
struct OrbitOptions {
    bool bProcessDuringSpawn; // 0x0000 (0x0001)
    bool bProcessDuringUpdate; // 0x0000 (0x0001)
    bool bUseEmitterTime; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.EmitterDynamicParameter
struct EmitterDynamicParameter {
    struct FName ParamName; // 0x0000 (0x0008)
    bool bUseEmitterTime; // 0x0008 (0x0001)
    bool bSpawnTimeOnly; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    uint8_t ValueMethod; // 0x000C (0x0001)
    uint8_t Pad_1[0x3]; // 0x000D (0x0003)
    bool bScaleVelocityByParamValue; // 0x0010 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0011 (0x0007)
    uint8_t ParamValue[0x38]; // 0x0018 (0x0038)
};

// ScriptStruct: Engine.BeamTargetData
struct BeamTargetData {
    struct FName TargetName; // 0x0000 (0x0008)
    float TargetPercentage; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.GPUSpriteResourceData
struct GPUSpriteResourceData {
    struct TArray<uint8_t> QuantizedColorSamples; // 0x0000 (0x0010)
    struct TArray<uint8_t> QuantizedMiscSamples; // 0x0010 (0x0010)
    struct TArray<uint8_t> QuantizedSimulationAttrSamples; // 0x0020 (0x0010)
    uint8_t ColorScale[0x10]; // 0x0030 (0x0010)
    uint8_t ColorBias[0x10]; // 0x0040 (0x0010)
    uint8_t MiscScale[0x10]; // 0x0050 (0x0010)
    uint8_t MiscBias[0x10]; // 0x0060 (0x0010)
    uint8_t SimulationAttrCurveScale[0x10]; // 0x0070 (0x0010)
    uint8_t SimulationAttrCurveBias[0x10]; // 0x0080 (0x0010)
    uint8_t SubImageSize[0x10]; // 0x0090 (0x0010)
    uint8_t SizeBySpeed[0x10]; // 0x00A0 (0x0010)
    uint8_t ConstantAcceleration[0xC]; // 0x00B0 (0x000C)
    uint8_t OrbitOffsetBase[0xC]; // 0x00BC (0x000C)
    uint8_t OrbitOffsetRange[0xC]; // 0x00C8 (0x000C)
    uint8_t OrbitFrequencyBase[0xC]; // 0x00D4 (0x000C)
    uint8_t OrbitFrequencyRange[0xC]; // 0x00E0 (0x000C)
    uint8_t OrbitPhaseBase[0xC]; // 0x00EC (0x000C)
    uint8_t OrbitPhaseRange[0xC]; // 0x00F8 (0x000C)
    float GlobalVectorFieldScale; // 0x0104 (0x0004)
    float GlobalVectorFieldTightness; // 0x0108 (0x0004)
    float PerParticleVectorFieldScale; // 0x010C (0x0004)
    float PerParticleVectorFieldBias; // 0x0110 (0x0004)
    float DragCoefficientScale; // 0x0114 (0x0004)
    float DragCoefficientBias; // 0x0118 (0x0004)
    float ResilienceScale; // 0x011C (0x0004)
    float ResilienceBias; // 0x0120 (0x0004)
    float CollisionRadiusScale; // 0x0124 (0x0004)
    float CollisionRadiusBias; // 0x0128 (0x0004)
    float CollisionTimeBias; // 0x012C (0x0004)
    float OneMinusFriction; // 0x0130 (0x0004)
    float RotationRateScale; // 0x0134 (0x0004)
    float CameraMotionBlurAmount; // 0x0138 (0x0004)
    uint8_t ScreenAlignment; // 0x013C (0x0001)
    uint8_t LockAxisFlag; // 0x013D (0x0001)
    uint8_t Pad_0[0x2]; // 0x013E (0x0002)
    uint8_t PivotOffset[0x8]; // 0x0140 (0x0008)
    bool HeightMapKill; // 0x0148 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0149 (0x0003)
    float HeightMapKillOffset; // 0x014C (0x0004)
    float ScreenSizeMinimum; // 0x0150 (0x0004)
    float ScreenSizeMaximum; // 0x0154 (0x0004)
};

// ScriptStruct: Engine.GPUSpriteEmitterInfo
struct GPUSpriteEmitterInfo {
    class UObject* RequiredModule; // 0x0000 (0x0008)
    class UObject* SpawnModule; // 0x0008 (0x0008)
    class UObject* SpawnPerUnitModule; // 0x0010 (0x0008)
    struct TArray<uint8_t> SpawnModules; // 0x0018 (0x0010)
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t LocalVectorField[0x70]; // 0x0030 (0x0070)
    uint8_t VectorFieldScale[0x28]; // 0x00A0 (0x0028)
    float MatchedVectorFieldScale; // 0x00C8 (0x0004)
    float MatchedVectorFieldBias; // 0x00CC (0x0004)
    uint8_t DragCoefficient[0x28]; // 0x00D0 (0x0028)
    uint8_t PointAttractorStrength[0x28]; // 0x00F8 (0x0028)
    uint8_t Resilience[0x28]; // 0x0120 (0x0028)
    uint8_t ConstantAcceleration[0xC]; // 0x0148 (0x000C)
    uint8_t PointAttractorPosition[0xC]; // 0x0154 (0x000C)
    float PointAttractorRadiusSq; // 0x0160 (0x0004)
    uint8_t OrbitOffsetBase[0xC]; // 0x0164 (0x000C)
    uint8_t OrbitOffsetRange[0xC]; // 0x0170 (0x000C)
    uint8_t InvMaxSize[0x8]; // 0x017C (0x0008)
    float InvRotationRateScale; // 0x0184 (0x0004)
    float MaxLifetime; // 0x0188 (0x0004)
    int32_t MaxParticleCount; // 0x018C (0x0004)
    uint8_t ScreenAlignment; // 0x0190 (0x0001)
    uint8_t LockAxisFlag; // 0x0191 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0192 (0x0002)
    bool bAxisLockUseWorldSpace; // 0x0194 (0x0001)
    bool bEnableCollision; // 0x0194 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0195 (0x0003)
    uint8_t CollisionMode; // 0x0198 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0199 (0x0003)
    bool BoundingBoxWrap; // 0x019C (0x0001)
    bool SpawnOnDepthBuffer; // 0x019C (0x0001)
    uint8_t Pad_4[0x3]; // 0x019D (0x0003)
    uint8_t DynamicColor[0x38]; // 0x01A0 (0x0038)
    uint8_t DynamicAlpha[0x38]; // 0x01D8 (0x0038)
    uint8_t DynamicColorScale[0x38]; // 0x0210 (0x0038)
    uint8_t DynamicAlphaScale[0x38]; // 0x0248 (0x0038)
};

// ScriptStruct: Engine.GPUSpriteLocalVectorFieldInfo
struct GPUSpriteLocalVectorFieldInfo {
    class UObject* Field; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t Transform[0x30]; // 0x0010 (0x0030)
    uint8_t MinInitialRotation[0xC]; // 0x0040 (0x000C)
    uint8_t MaxInitialRotation[0xC]; // 0x004C (0x000C)
    uint8_t RotationRate[0xC]; // 0x0058 (0x000C)
    float intensity; // 0x0064 (0x0004)
    float Tightness; // 0x0068 (0x0004)
    bool bIgnoreComponentTransform; // 0x006C (0x0001)
    bool bTileX; // 0x006C (0x0001)
    bool bTileY; // 0x006C (0x0001)
    bool bTileZ; // 0x006C (0x0001)
    bool bCompositeToGlobalVectorField; // 0x006C (0x0001)
    bool bApplyToLocalAlways; // 0x006C (0x0001)
};

// ScriptStruct: Engine.ParticleSystemReplayFrame
struct ParticleSystemReplayFrame {
};

// ScriptStruct: Engine.ParticleEmitterReplayFrame
struct ParticleEmitterReplayFrame {
};

// ScriptStruct: Engine.TireFrictionScalePair
struct TireFrictionScalePair {
    class UObject* TireType; // 0x0000 (0x0008)
    float FrictionScale; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.DelegateArray
struct DelegateArray {
    struct TArray<uint8_t> Delegates; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.PurchaseInfo
struct PurchaseInfo {
    struct FString Identifier; // 0x0000 (0x0010)
    struct FString DisplayName; // 0x0010 (0x0010)
    struct FString DisplayDescription; // 0x0020 (0x0010)
    struct FString DisplayPrice; // 0x0030 (0x0010)
};

// ScriptStruct: Engine.TransformBase
struct TransformBase {
    struct FName Node; // 0x0000 (0x0008)
    uint8_t Constraints[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Engine.TransformBaseConstraint
struct TransformBaseConstraint {
    struct TArray<uint8_t> TransformConstraints; // 0x0000 (0x0010)
};

// ScriptStruct: Engine.RigTransformConstraint
struct RigTransformConstraint {
    uint8_t TranformType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName ParentSpace; // 0x0008 (0x0008)
    float Weight; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.Node
struct Node {
    struct FName Name; // 0x0000 (0x0008)
    struct FName ParentName; // 0x0008 (0x0008)
    uint8_t Transform[0x30]; // 0x0010 (0x0030)
    struct FString DisplayName; // 0x0040 (0x0010)
    bool bAdvanced; // 0x0050 (0x0001)
};

// ScriptStruct: Engine.DebugDisplayProperty
struct DebugDisplayProperty {
    class UObject* Obj; // 0x0000 (0x0008)
    class UClass* WithinClass; // 0x0008 (0x0008)
};

// ScriptStruct: Engine.DestructibleParameters
struct DestructibleParameters {
    uint8_t DamageParameters[0x1C]; // 0x0000 (0x001C)
    uint8_t DebrisParameters[0x2C]; // 0x001C (0x002C)
    uint8_t AdvancedParameters[0x10]; // 0x0048 (0x0010)
    uint8_t SpecialHierarchyDepths[0x14]; // 0x0058 (0x0014)
    uint8_t Pad_0[0x4]; // 0x006C (0x0004)
    struct TArray<uint8_t> DepthParameters; // 0x0070 (0x0010)
    uint8_t Flags[0x4]; // 0x0080 (0x0004)
};

// ScriptStruct: Engine.DestructibleParametersFlag
struct DestructibleParametersFlag {
    bool bAccumulateDamage; // 0x0000 (0x0001)
    bool bAssetDefinedSupport; // 0x0000 (0x0001)
    bool bWorldSupport; // 0x0000 (0x0001)
    bool bDebrisTimeout; // 0x0000 (0x0001)
    bool bDebrisMaxSeparation; // 0x0000 (0x0001)
    bool bCrumbleSmallestChunks; // 0x0000 (0x0001)
    bool bAccurateRaycasts; // 0x0000 (0x0001)
    bool bUseValidBounds; // 0x0000 (0x0001)
    bool bFormExtendedStructures; // 0x0001 (0x0001)
};

// ScriptStruct: Engine.DestructibleDepthParameters
struct DestructibleDepthParameters {
    uint8_t ImpactDamageOverride; // 0x0000 (0x0001)
};

// ScriptStruct: Engine.DestructibleSpecialHierarchyDepths
struct DestructibleSpecialHierarchyDepths {
    int32_t SupportDepth; // 0x0000 (0x0004)
    int32_t MinimumFractureDepth; // 0x0004 (0x0004)
    bool bEnableDebris; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    int32_t DebrisDepth; // 0x000C (0x0004)
    int32_t EssentialDepth; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.DestructibleAdvancedParameters
struct DestructibleAdvancedParameters {
    float DamageCap; // 0x0000 (0x0004)
    float ImpactVelocityThreshold; // 0x0004 (0x0004)
    float MaxChunkSpeed; // 0x0008 (0x0004)
    float FractureImpulseScale; // 0x000C (0x0004)
};

// ScriptStruct: Engine.DestructibleDebrisParameters
struct DestructibleDebrisParameters {
    float DebrisLifetimeMin; // 0x0000 (0x0004)
    float DebrisLifetimeMax; // 0x0004 (0x0004)
    float DebrisMaxSeparationMin; // 0x0008 (0x0004)
    float DebrisMaxSeparationMax; // 0x000C (0x0004)
    uint8_t ValidBounds[0x1C]; // 0x0010 (0x001C)
};

// ScriptStruct: Engine.DestructibleDamageParameters
struct DestructibleDamageParameters {
    float DamageThreshold; // 0x0000 (0x0004)
    float DamageSpread; // 0x0004 (0x0004)
    bool bEnableImpactDamage; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float ImpactDamage; // 0x000C (0x0004)
    int32_t DefaultImpactDamageDepth; // 0x0010 (0x0004)
    bool bCustomImpactResistance; // 0x0014 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0015 (0x0003)
    float ImpactResistance; // 0x0018 (0x0004)
};

// ScriptStruct: Engine.SoundGroup
struct SoundGroup {
    uint8_t SoundGroup; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString DisplayName; // 0x0008 (0x0010)
    bool bAlwaysDecompressOnLoad; // 0x0018 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0019 (0x0003)
    float DecompressedDuration; // 0x001C (0x0004)
};

// ScriptStruct: Engine.StreamedAudioPlatformData
struct StreamedAudioPlatformData {
};

// ScriptStruct: Engine.PassiveSoundMixModifier
struct PassiveSoundMixModifier {
    class UObject* SoundMix; // 0x0000 (0x0008)
    float MinVolumeThreshold; // 0x0008 (0x0004)
    float MaxVolumeThreshold; // 0x000C (0x0004)
};

// ScriptStruct: Engine.SoundClassProperties
struct SoundClassProperties {
    float Volume; // 0x0000 (0x0004)
    float Pitch; // 0x0004 (0x0004)
    float StereoBleed; // 0x0008 (0x0004)
    float LFEBleed; // 0x000C (0x0004)
    float VoiceCenterChannelVolume; // 0x0010 (0x0004)
    float RadioFilterVolume; // 0x0014 (0x0004)
    float RadioFilterVolumeThreshold; // 0x0018 (0x0004)
    bool bApplyEffects; // 0x001C (0x0001)
    bool bAlwaysPlay; // 0x001C (0x0001)
    bool bIsUISound; // 0x001C (0x0001)
    bool bIsMusic; // 0x001C (0x0001)
    bool bReverb; // 0x001C (0x0001)
    bool bCenterChannelOnly; // 0x001C (0x0001)
    bool bApplyAmbientVolumes; // 0x001C (0x0001)
    uint8_t Pad_0[0x3]; // 0x001D (0x0003)
    uint8_t OutputTarget; // 0x0020 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0021 (0x0003)
    bool IgnoreOcclusion; // 0x0024 (0x0001)
};

// ScriptStruct: Engine.SoundClassEditorData
struct SoundClassEditorData {
};

// ScriptStruct: Engine.SoundClassAdjuster
struct SoundClassAdjuster {
    class UObject* SoundClassObject; // 0x0000 (0x0008)
    float VolumeAdjuster; // 0x0008 (0x0004)
    float PitchAdjuster; // 0x000C (0x0004)
    bool bApplyToChildren; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float VoiceCenterChannelVolumeAdjuster; // 0x0014 (0x0004)
};

// ScriptStruct: Engine.AudioEQEffect
struct AudioEQEffect {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    float FrequencyCenter0; // 0x0008 (0x0004)
    float Gain0; // 0x000C (0x0004)
    float Bandwidth0; // 0x0010 (0x0004)
    float FrequencyCenter1; // 0x0014 (0x0004)
    float Gain1; // 0x0018 (0x0004)
    float Bandwidth1; // 0x001C (0x0004)
    float FrequencyCenter2; // 0x0020 (0x0004)
    float Gain2; // 0x0024 (0x0004)
    float Bandwidth2; // 0x0028 (0x0004)
    float FrequencyCenter3; // 0x002C (0x0004)
    float Gain3; // 0x0030 (0x0004)
    float Bandwidth3; // 0x0034 (0x0004)
};

// ScriptStruct: Engine.DistanceDatum
struct DistanceDatum {
    float FadeInDistanceStart; // 0x0000 (0x0004)
    float FadeInDistanceEnd; // 0x0004 (0x0004)
    float FadeOutDistanceStart; // 0x0008 (0x0004)
    float FadeOutDistanceEnd; // 0x000C (0x0004)
    float Volume; // 0x0010 (0x0004)
};

// ScriptStruct: Engine.ModulatorContinuousParams
struct ModulatorContinuousParams {
    struct FName ParameterName; // 0x0000 (0x0008)
    float Default; // 0x0008 (0x0004)
    float MinInput; // 0x000C (0x0004)
    float MaxInput; // 0x0010 (0x0004)
    float MinOutput; // 0x0014 (0x0004)
    float MaxOutput; // 0x0018 (0x0004)
    uint8_t ParamMode; // 0x001C (0x0001)
};

// ScriptStruct: Engine.AssetEditorOrbitCameraPosition
struct AssetEditorOrbitCameraPosition {
    bool bIsSet; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t CamOrbitPoint[0xC]; // 0x0004 (0x000C)
    uint8_t CamOrbitZoom[0xC]; // 0x0010 (0x000C)
    uint8_t CamOrbitRotation[0xC]; // 0x001C (0x000C)
};

// ScriptStruct: Engine.MeshSectionInfoMap
struct MeshSectionInfoMap {
};

// ScriptStruct: Engine.MeshSectionInfo
struct MeshSectionInfo {
    int32_t MaterialIndex; // 0x0000 (0x0004)
    bool bEnableCollision; // 0x0004 (0x0001)
    bool bCastShadow; // 0x0005 (0x0001)
};

// ScriptStruct: Engine.StaticMeshSourceModel
struct StaticMeshSourceModel {
    uint8_t BuildSettings[0x40]; // 0x0000 (0x0040)
    uint8_t ReductionSettings[0xD0]; // 0x0040 (0x00D0)
    uint8_t RemeshingSettings[0x50]; // 0x0110 (0x0050)
    bool bHasBeenSimplified; // 0x0160 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0161 (0x0007)
    uint8_t OptimizationSettings[0x1C8]; // 0x0168 (0x01C8)
    int32_t OverriddenLightMapRes; // 0x0330 (0x0004)
    float LODDistance; // 0x0334 (0x0004)
    float ScreenSize; // 0x0338 (0x0004)
};

// ScriptStruct: Engine.GroupedStaticMeshOptimizationSettings
struct GroupedStaticMeshOptimizationSettings {
    uint8_t LevelOfDetailType; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    uint8_t ReductionSettings[0xD0]; // 0x0008 (0x00D0)
    uint8_t ProxySettings[0xE8]; // 0x00D8 (0x00E8)
};

// ScriptStruct: Engine.StaticMeshOptimizationSettings
struct StaticMeshOptimizationSettings {
    uint8_t ReductionMethod; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float NumOfTrianglesPercentage; // 0x0004 (0x0004)
    float MaxDeviationPercentage; // 0x0008 (0x0004)
    float WeldingThreshold; // 0x000C (0x0004)
    bool bRecalcNormals; // 0x0010 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0011 (0x0003)
    float NormalsThreshold; // 0x0014 (0x0004)
    uint8_t SilhouetteImportance; // 0x0018 (0x0001)
    uint8_t TextureImportance; // 0x0019 (0x0001)
    uint8_t ShadingImportance; // 0x001A (0x0001)
};

// ScriptStruct: Engine.SubsurfaceProfileStruct
struct SubsurfaceProfileStruct {
    float ScatterRadius; // 0x0000 (0x0004)
    uint8_t SubsurfaceColor[0x10]; // 0x0004 (0x0010)
    uint8_t FalloffColor[0x10]; // 0x0014 (0x0010)
};

// ScriptStruct: Engine.TextureFormatSettings
struct TextureFormatSettings {
    uint8_t CompressionSettings; // 0x0000 (0x0001)
    bool CompressionNoAlpha; // 0x0001 (0x0001)
    bool CompressionNone; // 0x0001 (0x0001)
    bool CompressionYCoCg; // 0x0001 (0x0001)
    bool SRGB; // 0x0001 (0x0001)
};

// ScriptStruct: Engine.TexturePlatformData
struct TexturePlatformData {
};

// ScriptStruct: Engine.TextureSource
struct TextureSource {
};

// ScriptStruct: Engine.TTLinearColorTrack
struct TTLinearColorTrack : public TTTrackBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    class UObject* CurveLinearColor; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.TTTrackBase
struct TTTrackBase {
    struct FName TrackName; // 0x0000 (0x0008)
    bool bIsExternalCurve; // 0x0008 (0x0001)
};

// ScriptStruct: Engine.TTVectorTrack
struct TTVectorTrack : public TTTrackBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    class UObject* CurveVector; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.TTFloatTrack
struct TTFloatTrack : public TTTrackBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    class UObject* CurveFloat; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.TTEventTrack
struct TTEventTrack : public TTTrackBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    class UObject* CurveKeys; // 0x0010 (0x0008)
};

// ScriptStruct: Engine.TouchInputControl
struct TouchInputControl {
    class UObject* Image1; // 0x0000 (0x0008)
    class UObject* Image2; // 0x0008 (0x0008)
    uint8_t Center[0x8]; // 0x0010 (0x0008)
    uint8_t VisualSize[0x8]; // 0x0018 (0x0008)
    uint8_t ThumbSize[0x8]; // 0x0020 (0x0008)
    uint8_t InteractionSize[0x8]; // 0x0028 (0x0008)
    uint8_t InputScale[0x8]; // 0x0030 (0x0008)
    uint8_t MainInputKey[0x18]; // 0x0038 (0x0018)
    uint8_t AltInputKey[0x18]; // 0x0050 (0x0018)
};

// ScriptStruct: Engine.AnimNode_ApplyMeshSpaceAdditive
struct AnimNode_ApplyMeshSpaceAdditive : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Base[0x18]; // 0x0030 (0x0018)
    uint8_t Additive[0x18]; // 0x0048 (0x0018)
    float Alpha; // 0x0060 (0x0004)
    uint8_t AlphaScaleBias[0x8]; // 0x0064 (0x0008)
    int32_t LODThreshold; // 0x006C (0x0004)
};

// ScriptStruct: Engine.AnimNode_StateMachine
struct AnimNode_StateMachine : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    int32_t StateMachineIndexInClass; // 0x0030 (0x0004)
    int32_t MaxTransitionsPerFrame; // 0x0034 (0x0004)
    bool LockoutTransitions; // 0x0038 (0x0001)
    uint8_t Pad_1[0xF]; // 0x0039 (0x000F)
    int32_t CurrentState; // 0x0048 (0x0004)
    float ElapsedTime; // 0x004C (0x0004)
};

// ScriptStruct: Engine.AnimationPotentialTransition
struct AnimationPotentialTransition {
};

// ScriptStruct: Engine.AnimationActiveTransitionEntry
struct AnimationActiveTransitionEntry {
    uint8_t Pad_0[0x70]; // 0x0000 (0x0070)
    class UObject* BlendProfile; // 0x0070 (0x0008)
};

// ScriptStruct: Engine.AnimNode_TransitionPoseEvaluator
struct AnimNode_TransitionPoseEvaluator : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t DataSource; // 0x0030 (0x0001)
    uint8_t EvaluatorMode; // 0x0031 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0032 (0x0002)
    int32_t FramesToCachePose; // 0x0034 (0x0004)
    uint8_t Pad_2[0x98]; // 0x0038 (0x0098)
    int32_t CacheFramesRemaining; // 0x00D0 (0x0004)
};

// ScriptStruct: Engine.AnimNode_TransitionResult
struct AnimNode_TransitionResult : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    bool bCanEnterTransition; // 0x0030 (0x0001)
    bool OverrideCrossfadeDuration; // 0x0031 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0032 (0x0002)
    float OverriddenCrossfadeDuration; // 0x0034 (0x0004)
    uint8_t Pad_2[0x48]; // 0x0038 (0x0048)
    struct FName NativeTransitionFunctionName; // 0x0080 (0x0008)
};

// ScriptStruct: Engine.AnimNode_UseCachedPose
struct AnimNode_UseCachedPose : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t LinkToCachingNode[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: Engine.AnimNode_ConvertLocalToComponentSpace
struct AnimNode_ConvertLocalToComponentSpace : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t LocalPose[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: Engine.AnimNode_ConvertComponentToLocalSpace
struct AnimNode_ConvertComponentToLocalSpace : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t ComponentPose[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: Engine.AnimNode_ModifyRootMotionAndAnchoring
struct AnimNode_ModifyRootMotionAndAnchoring : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    uint8_t TranslationReplace[0xC]; // 0x0048 (0x000C)
    uint8_t Pad_1[0xC]; // 0x0054 (0x000C)
    uint8_t TranslationAdd[0x30]; // 0x0060 (0x0030)
    uint8_t Rotation[0xC]; // 0x0090 (0x000C)
    uint8_t Scale[0xC]; // 0x009C (0x000C)
    uint8_t TranslationMode; // 0x00A8 (0x0001)
    uint8_t RotationMode; // 0x00A9 (0x0001)
    uint8_t ScaleMode; // 0x00AA (0x0001)
    uint8_t TranslationSpace; // 0x00AB (0x0001)
    uint8_t RotationSpace; // 0x00AC (0x0001)
    uint8_t ScaleSpace; // 0x00AD (0x0001)
};

// ScriptStruct: Engine.DummySpacerCameraTypes
struct DummySpacerCameraTypes {
};

// ScriptStruct: Engine.StreamableManager
struct StreamableManager {
};

// ScriptStruct: Engine.StreamingTextureBuildInfo
struct StreamingTextureBuildInfo {
    uint8_t PackedRelativeBox[0x4]; // 0x0000 (0x0004)
    int32_t TextureLevelIndex; // 0x0004 (0x0004)
    float TexelFactor; // 0x0008 (0x0004)
};

// ScriptStruct: Engine.StreamingTexturePrimitiveInfo
struct StreamingTexturePrimitiveInfo {
    class UObject* Texture; // 0x0000 (0x0008)
    uint8_t Bounds[0x1C]; // 0x0008 (0x001C)
    float TexelFactor; // 0x0024 (0x0004)
    uint8_t PackedRelativeBox[0x4]; // 0x0028 (0x0004)
};

// ScriptStruct: Engine.BendPhysExtension
struct BendPhysExtension {
};

// ScriptStruct: Engine.BendPhysX_MBP_BroadphaseRegionManager_TickFunction
struct BendPhysX_MBP_BroadphaseRegionManager_TickFunction : public TickFunction {
};

// ScriptStruct: Engine.BendStaticMeshLODSettings
struct BendStaticMeshLODSettings {
    uint8_t BendLODSettings[0x50]; // 0x0000 (0x0050)
};

// ScriptStruct: Engine.BendMeshLODConfig
struct BendMeshLODConfig {
    struct FName Name; // 0x0000 (0x0008)
    bool AutoComputeLODDistances; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    float AutoDistanceError; // 0x000C (0x0004)
    struct TArray<uint8_t> LODs; // 0x0010 (0x0010)
};

// ScriptStruct: Engine.MeshUVChannelInfo
struct MeshUVChannelInfo {
    bool bInitialized; // 0x0000 (0x0001)
    bool bOverrideDensities; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    float LocalUVDensities; // 0x0004 (0x0004)
};

// ScriptStruct: Engine.Default__UserDefinedStruct
struct Default__UserDefinedStruct {
};

} // namespace SDK

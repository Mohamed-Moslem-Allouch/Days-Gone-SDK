#pragma once
#include "Basic.hpp"
#include "Foliage_structs.hpp"

namespace SDK {

// Class: Foliage.BendFoliageMeshComponent
class BendFoliageMeshComponent : public MeshComponent {
public:
    uint8_t Pad_0[0x660]; // 0x0028 (0x0660)
    float StreamingDistanceMultiplier; // 0x0688 (0x0004)
};

// Class: Foliage.BendFoliagePhysicsComponent
class BendFoliagePhysicsComponent : public BendFoliageMeshComponent {
public:
    uint8_t Pad_0[0x670]; // 0x0028 (0x0670)
    struct TArray<uint8_t> PhysicsSerializers; // 0x0698 (0x0010)
};

// Class: Foliage.InstancedFoliageActorComponent
class InstancedFoliageActorComponent : public BendFoliagePhysicsComponent {
public:
};

// Class: Foliage.BendFoliageProxyComponent
class BendFoliageProxyComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    struct TArray<uint8_t> InstanceGroups; // 0x00D0 (0x0010)
    uint8_t FoliageUID[0x10]; // 0x00E0 (0x0010)
    struct FString SourceLevelName; // 0x00F0 (0x0010)
};

// Class: Foliage.BendFoliageProxyActor
class BendFoliageProxyActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* ProxyComponent; // 0x0348 (0x0008)
};

// Class: Foliage.FoliageInstancedStaticMeshComponent
class FoliageInstancedStaticMeshComponent : public HierarchicalInstancedStaticMeshComponent {
public:
    uint8_t Pad_0[0x890]; // 0x0028 (0x0890)
    uint8_t OnInstanceTakePointDamage[0x10]; // 0x08B8 (0x0010)
    uint8_t OnInstanceTakeRadialDamage[0x10]; // 0x08C8 (0x0010)
};

// Class: Foliage.FoliageStatistics
class FoliageStatistics : public BlueprintFunctionLibrary {
public:

public:
    int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UObject* StaticMesh, uint8_t CenterPosition, float Radius);
    int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UObject* StaticMesh, uint8_t Box);
};

// Class: Foliage.FoliageType
class FoliageType : public Object {
public:
    uint8_t UpdateGuid[0x10]; // 0x0028 (0x0010)
    float Density; // 0x0038 (0x0004)
    float DensityAdjustmentFactor; // 0x003C (0x0004)
    float Radius; // 0x0040 (0x0004)
    uint8_t Scaling; // 0x0044 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0045 (0x0003)
    uint8_t ScaleX[0x8]; // 0x0048 (0x0008)
    uint8_t ScaleY[0x8]; // 0x0050 (0x0008)
    uint8_t ScaleZ[0x8]; // 0x0058 (0x0008)
    uint8_t VertexColorMask; // 0x0060 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0061 (0x0003)
    float VertexColorMaskThreshold; // 0x0064 (0x0004)
    bool VertexColorMaskInvert; // 0x0068 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0069 (0x0003)
    int32_t MaxInstancesPerCluster; // 0x006C (0x0004)
    float MaxClusterRadius; // 0x0070 (0x0004)
    bool SharedOverlap; // 0x0074 (0x0001)
    bool EnableCollision; // 0x0074 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0075 (0x0003)
    float SharedOverlapRadius; // 0x0078 (0x0004)
    uint8_t PlantType; // 0x007C (0x0001)
    uint8_t Pad_4[0x3]; // 0x007D (0x0003)
    uint8_t ZOffset[0x8]; // 0x0080 (0x0008)
    uint8_t NormalZOffsetCurve[0x80]; // 0x0088 (0x0080)
    bool AlignToNormal; // 0x0108 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0109 (0x0003)
    float AlignMaxAngle; // 0x010C (0x0004)
    bool RandomYaw; // 0x0110 (0x0001)
    bool RandomYawRelative; // 0x0110 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0111 (0x0003)
    uint8_t RandomYawAngle[0x8]; // 0x0114 (0x0008)
    float RandomPitchAngle; // 0x011C (0x0004)
    uint8_t GroundSlopeAngle[0x8]; // 0x0120 (0x0008)
    uint8_t Height[0x8]; // 0x0128 (0x0008)
    struct TArray<uint8_t> LandscapeLayers; // 0x0130 (0x0010)
    struct FName LandscapeLayer; // 0x0140 (0x0008)
    bool CollisionWithWorld; // 0x0148 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0149 (0x0003)
    uint8_t CollisionScale[0xC]; // 0x014C (0x000C)
    float MinimumLayerWeight; // 0x0158 (0x0004)
    uint8_t MeshBounds[0x1C]; // 0x015C (0x001C)
    uint8_t LowBoundOriginRadius[0xC]; // 0x0178 (0x000C)
    uint8_t Mobility; // 0x0184 (0x0001)
    uint8_t Pad_8[0x3]; // 0x0185 (0x0003)
    uint8_t CullDistance[0x8]; // 0x0188 (0x0008)
    bool bEnableStaticLighting; // 0x0190 (0x0001)
    bool CastShadow; // 0x0190 (0x0001)
    bool bAffectDynamicIndirectLighting; // 0x0190 (0x0001)
    bool bAffectDistanceFieldLighting; // 0x0190 (0x0001)
    bool bCastDynamicShadow; // 0x0190 (0x0001)
    bool bCastStaticShadow; // 0x0190 (0x0001)
    bool bCastShadowAsTwoSided; // 0x0190 (0x0001)
    bool bReceivesDecals; // 0x0190 (0x0001)
    bool bOverrideLightMapRes; // 0x0191 (0x0001)
    bool bProvidesCover; // 0x0191 (0x0001)
    bool bCanHide; // 0x0191 (0x0001)
    bool bTallBushHurt; // 0x0191 (0x0001)
    uint8_t Pad_9[0x2]; // 0x0192 (0x0002)
    int32_t OverriddenLightMapRes; // 0x0194 (0x0004)
    bool bUseAsOccluder; // 0x0198 (0x0001)
    uint8_t Pad_10[0x7]; // 0x0199 (0x0007)
    uint8_t BodyInstance[0x1B0]; // 0x01A0 (0x01B0)
    uint8_t CustomNavigableGeometry; // 0x0350 (0x0001)
    uint8_t Pad_11[0x7]; // 0x0351 (0x0007)
    uint8_t HiddenEditorViews[0x8]; // 0x0358 (0x0008)
    bool IsSelected; // 0x0360 (0x0001)
    uint8_t Pad_12[0x3]; // 0x0361 (0x0003)
    float CollisionRadius; // 0x0364 (0x0004)
    float ShadeRadius; // 0x0368 (0x0004)
    bool bAllowLandscape; // 0x036C (0x0001)
    bool bAllowStaticMesh; // 0x036C (0x0001)
    bool bAllowSplineMesh; // 0x036C (0x0001)
    bool bAllowBSP; // 0x036C (0x0001)
    bool bAllowTranslucent; // 0x036C (0x0001)
    uint8_t Pad_13[0x3]; // 0x036D (0x0003)
    uint8_t AllowWater[0x8]; // 0x0370 (0x0008)
    bool bSimulationSweeps; // 0x0378 (0x0001)
    uint8_t Pad_14[0x7]; // 0x0379 (0x0007)
    struct TArray<uint8_t> IncludeMeshes; // 0x0380 (0x0010)
    struct TArray<uint8_t> ExcludeMeshes; // 0x0390 (0x0010)
    struct TArray<uint8_t> IncludePhysicalMaterials; // 0x03A0 (0x0010)
    struct TArray<uint8_t> ExcludePhysicalMaterials; // 0x03B0 (0x0010)
    int32_t NumSteps; // 0x03C0 (0x0004)
    float InitialSeedDensity; // 0x03C4 (0x0004)
    float AverageSpreadDistance; // 0x03C8 (0x0004)
    float SpreadVariance; // 0x03CC (0x0004)
    int32_t SeedsPerStep; // 0x03D0 (0x0004)
    int32_t DistributionSeed; // 0x03D4 (0x0004)
    float MaxInitialSeedOffset; // 0x03D8 (0x0004)
    bool bCanGrowInShade; // 0x03DC (0x0001)
    bool bSpawnsInShade; // 0x03DD (0x0001)
    bool bRequiresShade; // 0x03DE (0x0001)
    uint8_t Pad_15[0x1]; // 0x03DF (0x0001)
    float MaxInitialAge; // 0x03E0 (0x0004)
    float MaxAge; // 0x03E4 (0x0004)
    float OverlapPriority; // 0x03E8 (0x0004)
    uint8_t ProceduralScale[0x8]; // 0x03EC (0x0008)
    uint8_t Pad_16[0x4]; // 0x03F4 (0x0004)
    uint8_t ScaleCurve[0x80]; // 0x03F8 (0x0080)
    int32_t ChangeCount; // 0x0478 (0x0004)
    bool ReapplyDensity; // 0x047C (0x0001)
    bool ReapplyRadius; // 0x047C (0x0001)
    bool ReapplyAlignToNormal; // 0x047C (0x0001)
    bool ReapplyRandomYaw; // 0x047C (0x0001)
    bool ReapplyScaling; // 0x047C (0x0001)
    bool ReapplyScaleX; // 0x047C (0x0001)
    bool ReapplyScaleY; // 0x047C (0x0001)
    bool ReapplyScaleZ; // 0x047C (0x0001)
    bool ReapplyRandomPitchAngle; // 0x047D (0x0001)
    bool ReapplyGroundSlope; // 0x047D (0x0001)
    bool ReapplyHeight; // 0x047D (0x0001)
    bool ReapplyLandscapeLayers; // 0x047D (0x0001)
    bool ReapplyZOffset; // 0x047D (0x0001)
    bool ReapplyCollisionWithWorld; // 0x047D (0x0001)
    bool ReapplyVertexColorMask; // 0x047D (0x0001)
    bool ReapplybProvidesCover; // 0x047D (0x0001)
};

// Class: Foliage.FoliageType_InstancedStaticMesh
class FoliageType_InstancedStaticMesh : public FoliageType {
public:
    uint8_t Pad_0[0x458]; // 0x0028 (0x0458)
    class UObject* Mesh; // 0x0480 (0x0008)
    struct TArray<uint8_t> OverrideMaterials; // 0x0488 (0x0010)
    class UClass* ComponentClass; // 0x0498 (0x0008)
};

// Class: Foliage.InstancedFoliageActor
class InstancedFoliageActor : public Actor {
public:
    uint8_t Pad_0[0x370]; // 0x0028 (0x0370)
    uint8_t FoliageProxyUID[0x10]; // 0x0398 (0x0010)
};

// Class: Foliage.InstancedFoliageActorSettings
class InstancedFoliageActorSettings : public Info {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    int32_t ShadowCascadeLODOffset; // 0x0348 (0x0004)
    uint8_t Pad_1[0x14]; // 0x034C (0x0014)
    float BeginFadeoutPixelCoverage; // 0x0360 (0x0004)
    float CullPixelCoverage; // 0x0364 (0x0004)
    bool bEnableBillboardFade; // 0x0368 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0369 (0x0003)
    float CellSize; // 0x036C (0x0004)
    bool bOcclusionQueryCells; // 0x0370 (0x0001)
};

// Class: Foliage.InstancedFoliageCellComponent
class InstancedFoliageCellComponent : public PrimitiveComponent {
public:
};

// Class: Foliage.InteractiveFoliageActor
class InteractiveFoliageActor : public StaticMeshActor {
public:
    uint8_t Pad_0[0x330]; // 0x0028 (0x0330)
    class UObject* CapsuleComponent; // 0x0358 (0x0008)
    uint8_t TouchingActorEntryPosition[0xC]; // 0x0360 (0x000C)
    uint8_t FoliageVelocity[0xC]; // 0x036C (0x000C)
    uint8_t FoliageForce[0xC]; // 0x0378 (0x000C)
    uint8_t FoliagePosition[0xC]; // 0x0384 (0x000C)
    float FoliageDamageImpulseScale; // 0x0390 (0x0004)
    float FoliageTouchImpulseScale; // 0x0394 (0x0004)
    float FoliageStiffness; // 0x0398 (0x0004)
    float FoliageStiffnessQuadratic; // 0x039C (0x0004)
    float FoliageDamping; // 0x03A0 (0x0004)
    float MaxDamageImpulse; // 0x03A4 (0x0004)
    float MaxTouchImpulse; // 0x03A8 (0x0004)
    float MaxForce; // 0x03AC (0x0004)
    float Mass; // 0x03B0 (0x0004)

public:
    void CapsuleTouched(class UObject* Other, class UObject* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, uint8_t OverlapInfo);
};

// Class: Foliage.InteractiveFoliageComponent
class InteractiveFoliageComponent : public StaticMeshComponent {
public:
};

// Class: Foliage.ProceduralFoliageBlockingVolume
class ProceduralFoliageBlockingVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    class UObject* ProceduralFoliageVolume; // 0x0388 (0x0008)
};

// Class: Foliage.ProceduralFoliageComponent
class ProceduralFoliageComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* FoliageSpawner; // 0x00D0 (0x0008)
    float TileOverlap; // 0x00D8 (0x0004)
    uint8_t Pad_1[0x4]; // 0x00DC (0x0004)
    class UObject* SpawningVolume; // 0x00E0 (0x0008)
    uint8_t ProceduralGuid[0x10]; // 0x00E8 (0x0010)
};

// Class: Foliage.ProceduralFoliageSpawner
class ProceduralFoliageSpawner : public Object {
public:
    int32_t RandomSeed; // 0x0028 (0x0004)
    float TileSize; // 0x002C (0x0004)
    int32_t NumUniqueTiles; // 0x0030 (0x0004)
    bool bUniqueTiles; // 0x0034 (0x0001)
    bool bSimulationSweeps; // 0x0035 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0036 (0x0002)
    float RadialPower; // 0x0038 (0x0004)
    int32_t NumTilesY; // 0x003C (0x0004)
    uint8_t WorldPosition[0xC]; // 0x0040 (0x000C)
    float TileOverlap; // 0x004C (0x0004)
    int32_t HashCellBits; // 0x0050 (0x0004)
    float SweepCacheGridSize; // 0x0054 (0x0004)
    uint8_t Pad_1[0x8]; // 0x0058 (0x0008)
    struct TArray<uint8_t> FoliageTypes; // 0x0060 (0x0010)
    bool bNeedsSimulation; // 0x0070 (0x0001)

public:
    void Simulate(int32_t NumSteps);
};

// Class: Foliage.ProceduralFoliageTile
class ProceduralFoliageTile : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    class UObject* FoliageSpawner; // 0x0030 (0x0008)
    uint8_t Pad_1[0xA0]; // 0x0038 (0x00A0)
    struct TArray<uint8_t> InstancesArray; // 0x00D8 (0x0010)
};

// Class: Foliage.ProceduralFoliageVolume
class ProceduralFoliageVolume : public Volume {
public:
    uint8_t Pad_0[0x360]; // 0x0028 (0x0360)
    class UObject* ProceduralComponent; // 0x0388 (0x0008)
};

} // namespace SDK

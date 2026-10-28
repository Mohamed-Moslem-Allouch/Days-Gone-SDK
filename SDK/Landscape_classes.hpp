#pragma once
#include "Basic.hpp"
#include "Landscape_structs.hpp"

namespace SDK {

// Class: Landscape.ControlPointMeshComponent
class ControlPointMeshComponent : public StaticMeshComponent {
public:
};

// Class: Landscape.LandscapeGrassType
class LandscapeGrassType : public Object {
public:
    struct TArray<uint8_t> GrassVarieties; // 0x0028 (0x0010)
    class UObject* GrassMesh; // 0x0038 (0x0008)
    float GrassDensity; // 0x0040 (0x0004)
    float PlacementJitter; // 0x0044 (0x0004)
    int32_t StartCullDistance; // 0x0048 (0x0004)
    int32_t EndCullDistance; // 0x004C (0x0004)
    bool RandomRotation; // 0x0050 (0x0001)
    bool AlignToSurface; // 0x0051 (0x0001)
};

// Class: Landscape.LandscapeComponent
class LandscapeComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    int32_t SectionBaseX; // 0x05D0 (0x0004)
    int32_t SectionBaseY; // 0x05D4 (0x0004)
    int32_t ComponentSizeQuads; // 0x05D8 (0x0004)
    int32_t SubsectionSizeQuads; // 0x05DC (0x0004)
    int32_t NumSubsections; // 0x05E0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x05E4 (0x0004)
    class UObject* OverrideMaterial; // 0x05E8 (0x0008)
    class UObject* OverrideHoleMaterial; // 0x05F0 (0x0008)
    class UObject* MaterialInstance; // 0x05F8 (0x0008)
    struct TArray<uint8_t> WeightmapLayerAllocations; // 0x0600 (0x0010)
    struct TArray<uint8_t> WeightmapTextures; // 0x0610 (0x0010)
    class UObject* XYOffsetmapTexture; // 0x0620 (0x0008)
    uint8_t Pad_2[0x8]; // 0x0628 (0x0008)
    uint8_t WeightmapScaleBias[0x10]; // 0x0630 (0x0010)
    float WeightmapSubsectionOffset; // 0x0640 (0x0004)
    uint8_t Pad_3[0xC]; // 0x0644 (0x000C)
    uint8_t HeightmapScaleBias[0x10]; // 0x0650 (0x0010)
    class UObject* HeightmapTexture; // 0x0660 (0x0008)
    uint8_t CachedLocalBox[0x1C]; // 0x0668 (0x001C)
    uint8_t CollisionComponent[0x1C]; // 0x0684 (0x001C)
    struct TArray<uint8_t> IrrelevantLights; // 0x06A0 (0x0010)
    uint8_t Pad_4[0x10]; // 0x06B0 (0x0010)
    int32_t CollisionMipLevel; // 0x06C0 (0x0004)
    float StaticLightingResolution; // 0x06C4 (0x0004)
    int32_t ForcedLOD; // 0x06C8 (0x0004)
    int32_t LODBias; // 0x06CC (0x0004)
    uint8_t StateId[0x10]; // 0x06D0 (0x0010)
    uint8_t BakedTextureMaterialGuid[0x10]; // 0x06E0 (0x0010)
    class UObject* GIBakedBaseColorTexture; // 0x06F0 (0x0008)
    uint8_t MobileBlendableLayerMask; // 0x06F8 (0x0001)
    uint8_t Pad_5[0x7]; // 0x06F9 (0x0007)
    class UObject* MobileMaterialInterface; // 0x0700 (0x0008)
    class UObject* MobileWeightNormalmapTexture; // 0x0708 (0x0008)
};

// Class: Landscape.LandscapeGizmoActor
class LandscapeGizmoActor : public Actor {
public:
};

// Class: Landscape.LandscapeGizmoActiveActor
class LandscapeGizmoActiveActor : public LandscapeGizmoActor {
public:
};

// Class: Landscape.LandscapeGizmoRenderComponent
class LandscapeGizmoRenderComponent : public PrimitiveComponent {
public:
};

// Class: Landscape.LandscapeHeightfieldCollisionComponent
class LandscapeHeightfieldCollisionComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    struct TArray<uint8_t> ComponentLayerInfos; // 0x05D0 (0x0010)
    int32_t SectionBaseX; // 0x05E0 (0x0004)
    int32_t SectionBaseY; // 0x05E4 (0x0004)
    int32_t CollisionSizeQuads; // 0x05E8 (0x0004)
    float CollisionScale; // 0x05EC (0x0004)
    struct TArray<uint8_t> CollisionQuadFlags; // 0x05F0 (0x0010)
    uint8_t HeightfieldGuid[0x10]; // 0x0600 (0x0010)
    uint8_t CachedLocalBox[0x1C]; // 0x0610 (0x001C)
    uint8_t RenderComponent[0x1C]; // 0x062C (0x001C)
    uint8_t Pad_1[0x10]; // 0x0648 (0x0010)
    struct TArray<uint8_t> CookedPhysicalMaterials; // 0x0658 (0x0010)
};

// Class: Landscape.LandscapeMeshCollisionComponent
class LandscapeMeshCollisionComponent : public LandscapeHeightfieldCollisionComponent {
public:
    uint8_t Pad_0[0x680]; // 0x0028 (0x0680)
    uint8_t MeshGuid[0x10]; // 0x06A8 (0x0010)
};

// Class: Landscape.LandscapeInfo
class LandscapeInfo : public Object {
public:
    uint8_t LandscapeActor[0x1C]; // 0x0028 (0x001C)
    uint8_t LandscapeGuid[0x10]; // 0x0044 (0x0010)
    int32_t ComponentSizeQuads; // 0x0054 (0x0004)
    int32_t SubsectionSizeQuads; // 0x0058 (0x0004)
    int32_t ComponentNumSubsections; // 0x005C (0x0004)
    uint8_t DrawScale[0xC]; // 0x0060 (0x000C)
};

// Class: Landscape.LandscapeInfoMap
class LandscapeInfoMap : public Object {
public:
};

// Class: Landscape.LandscapeLayerInfoObject
class LandscapeLayerInfoObject : public Object {
public:
    struct FName LayerName; // 0x0028 (0x0008)
    class UObject* PhysMaterial; // 0x0030 (0x0008)
    float Hardness; // 0x0038 (0x0004)
    uint8_t LayerUsageDebugColor[0x10]; // 0x003C (0x0010)
};

// Class: Landscape.LandscapeMaterialInstanceConstant
class LandscapeMaterialInstanceConstant : public MaterialInstanceConstant {
public:
    uint8_t Pad_0[0x178]; // 0x0028 (0x0178)
    bool bIsLayerThumbnail; // 0x01A0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x01A1 (0x0003)
    int32_t DataWeightmapIndex; // 0x01A4 (0x0004)
    int32_t DataWeightmapSize; // 0x01A8 (0x0004)
};

// Class: Landscape.LandscapeMeshProxyActor
class LandscapeMeshProxyActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* LandscapeMeshProxyComponent; // 0x0348 (0x0008)
};

// Class: Landscape.LandscapeMeshProxyComponent
class LandscapeMeshProxyComponent : public StaticMeshComponent {
public:
    uint8_t Pad_0[0x6D8]; // 0x0028 (0x06D8)
    uint8_t LandscapeGuid[0x10]; // 0x0700 (0x0010)
    struct TArray<uint8_t> ProxyComponentBases; // 0x0710 (0x0010)
    uint8_t ProxyLOD; // 0x0720 (0x0001)
};

// Class: Landscape.LandscapeProxy
class LandscapeProxy : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    class UObject* SplineComponent; // 0x0350 (0x0008)
    uint8_t LandscapeGuid[0x10]; // 0x0358 (0x0010)
    uint8_t LandscapeSectionOffset[0x8]; // 0x0368 (0x0008)
    int32_t MaxLODLevel; // 0x0370 (0x0004)
    int32_t StaticLightingLOD; // 0x0374 (0x0004)
    class UObject* DefaultPhysMaterial; // 0x0378 (0x0008)
    float StreamingDistanceMultiplier; // 0x0380 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0384 (0x0004)
    class UObject* LandscapeMaterial; // 0x0388 (0x0008)
    class UObject* LandscapeHoleMaterial; // 0x0390 (0x0008)
    float LODDistanceFactor; // 0x0398 (0x0004)
    uint8_t Pad_2[0x4]; // 0x039C (0x0004)
    struct TArray<uint8_t> LandscapeComponents; // 0x03A0 (0x0010)
    struct TArray<uint8_t> CollisionComponents; // 0x03B0 (0x0010)
    struct TArray<uint8_t> FoliageComponents; // 0x03C0 (0x0010)
    uint8_t Pad_3[0x60]; // 0x03D0 (0x0060)
    bool bExcludeFromHeightMap; // 0x0430 (0x0001)
    bool bAttachWorldHeightMap; // 0x0430 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0431 (0x0007)
    class UObject* CaptureComponent; // 0x0438 (0x0008)
    uint8_t RoadEdgeGroup[0x30]; // 0x0440 (0x0030)
    struct TArray<uint8_t> RoadSplines; // 0x0470 (0x0010)
    struct TArray<uint8_t> WaterWaySplines; // 0x0480 (0x0010)
    float StaticLightingResolution; // 0x0490 (0x0004)
    uint8_t LandscapeActor[0x1C]; // 0x0494 (0x001C)
    bool bCastStaticShadow; // 0x04B0 (0x0001)
    bool bCastShadowAsTwoSided; // 0x04B0 (0x0001)
    bool bCastFarShadow; // 0x04B0 (0x0001)
    bool bIsProxy; // 0x04B0 (0x0001)
    uint8_t Pad_5[0x3]; // 0x04B1 (0x0003)
    uint8_t LightmassSettings[0x18]; // 0x04B4 (0x0018)
    int32_t CollisionMipLevel; // 0x04CC (0x0004)
    float CollisionThickness; // 0x04D0 (0x0004)
    uint8_t Pad_6[0xC]; // 0x04D4 (0x000C)
    uint8_t BodyInstance[0x1B0]; // 0x04E0 (0x01B0)
    bool bBakeMaterialPositionOffsetIntoCollision; // 0x0690 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0691 (0x0003)
    int32_t ComponentSizeQuads; // 0x0694 (0x0004)
    int32_t SubsectionSizeQuads; // 0x0698 (0x0004)
    int32_t NumSubsections; // 0x069C (0x0004)
    bool bUsedForNavigation; // 0x06A0 (0x0001)
    uint8_t Pad_8[0x3]; // 0x06A1 (0x0003)
    uint8_t NavigationGeometryGatheringMode; // 0x06A4 (0x0001)
    uint8_t LODFalloff; // 0x06A5 (0x0001)

public:
    void EditorApplySpline(class UObject* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class UObject* PaintLayer);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
};

// Class: Landscape.Landscape
class Landscape : public LandscapeProxy {
public:
};

// Class: Landscape.LandscapeSplinesComponent
class LandscapeSplinesComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    struct TArray<uint8_t> ControlPoints; // 0x05D0 (0x0010)
    struct TArray<uint8_t> Segments; // 0x05E0 (0x0010)
    struct TArray<uint8_t> CookedForeignMeshComponents; // 0x05F0 (0x0010)
};

// Class: Landscape.LandscapeSplineSegment
class LandscapeSplineSegment : public Object {
public:
    uint8_t Connections[0x18]; // 0x0028 (0x0018)
    uint8_t Pad_0[0x18]; // 0x0040 (0x0018)
    struct FName BendBelongsToLevelName; // 0x0058 (0x0008)
    uint8_t WaterWayInfo[0x8]; // 0x0060 (0x0008)
    uint8_t SplineInfo[0x18]; // 0x0068 (0x0018)
    struct TArray<uint8_t> Points; // 0x0080 (0x0010)
    uint8_t Bounds[0x1C]; // 0x0090 (0x001C)
    uint8_t Pad_1[0x4]; // 0x00AC (0x0004)
    struct TArray<uint8_t> LocalMeshComponents; // 0x00B0 (0x0010)
};

// Class: Landscape.LandscapeSplineControlPoint
class LandscapeSplineControlPoint : public Object {
public:
    uint8_t Location[0xC]; // 0x0028 (0x000C)
    uint8_t Rotation[0xC]; // 0x0034 (0x000C)
    uint8_t BendRoadWidth; // 0x0040 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0041 (0x0003)
    float Width; // 0x0044 (0x0004)
    float SideFalloff; // 0x0048 (0x0004)
    float EndFalloff; // 0x004C (0x0004)
    uint8_t RoadInfo[0x8]; // 0x0050 (0x0008)
    int32_t BendID; // 0x0058 (0x0004)
    uint8_t Pad_1[0x4]; // 0x005C (0x0004)
    struct TArray<uint8_t> ConnectedSegments; // 0x0060 (0x0010)
    struct TArray<uint8_t> Points; // 0x0070 (0x0010)
    uint8_t Bounds[0x1C]; // 0x0080 (0x001C)
    uint8_t Pad_2[0x4]; // 0x009C (0x0004)
    class UObject* LocalMeshComponent; // 0x00A0 (0x0008)
};

// Class: Landscape.MaterialExpressionLandscapeGrassOutput
class MaterialExpressionLandscapeGrassOutput : public MaterialExpressionCustomOutput {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> GrassTypes; // 0x0070 (0x0010)
};

// Class: Landscape.MaterialExpressionLandscapeLayerBlend
class MaterialExpressionLandscapeLayerBlend : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct TArray<uint8_t> Layers; // 0x0070 (0x0010)
    uint8_t ExpressionGUID[0x10]; // 0x0080 (0x0010)
};

// Class: Landscape.MaterialExpressionLandscapeLayerCoords
class MaterialExpressionLandscapeLayerCoords : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t MappingType; // 0x0070 (0x0001)
    uint8_t CustomUVType; // 0x0071 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0072 (0x0002)
    float MappingScale; // 0x0074 (0x0004)
    float MappingRotation; // 0x0078 (0x0004)
    float MappingPanU; // 0x007C (0x0004)
    float MappingPanV; // 0x0080 (0x0004)
};

// Class: Landscape.MaterialExpressionLandscapeLayerSample
class MaterialExpressionLandscapeLayerSample : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    struct FName ParameterName; // 0x0070 (0x0008)
    float PreviewWeight; // 0x0078 (0x0004)
    uint8_t ExpressionGUID[0x10]; // 0x007C (0x0010)
};

// Class: Landscape.MaterialExpressionLandscapeLayerSwitch
class MaterialExpressionLandscapeLayerSwitch : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t LayerUsed[0x38]; // 0x0070 (0x0038)
    uint8_t LayerNotUsed[0x38]; // 0x00A8 (0x0038)
    struct FName ParameterName; // 0x00E0 (0x0008)
    bool PreviewUsed; // 0x00E8 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00E9 (0x0003)
    uint8_t ExpressionGUID[0x10]; // 0x00EC (0x0010)
};

// Class: Landscape.MaterialExpressionLandscapeLayerWeight
class MaterialExpressionLandscapeLayerWeight : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t Base[0x38]; // 0x0070 (0x0038)
    uint8_t Layer[0x38]; // 0x00A8 (0x0038)
    struct FName ParameterName; // 0x00E0 (0x0008)
    float PreviewWeight; // 0x00E8 (0x0004)
    uint8_t ConstBase[0xC]; // 0x00EC (0x000C)
    uint8_t ExpressionGUID[0x10]; // 0x00F8 (0x0010)
};

// Class: Landscape.MaterialExpressionLandscapeVisibilityMask
class MaterialExpressionLandscapeVisibilityMask : public MaterialExpression {
public:
    uint8_t Pad_0[0x48]; // 0x0028 (0x0048)
    uint8_t ExpressionGUID[0x10]; // 0x0070 (0x0010)
};

} // namespace SDK

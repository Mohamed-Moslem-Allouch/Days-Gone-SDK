#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Landscape.GrassVariety
struct GrassVariety {
    class UObject* GrassMesh; // 0x0000 (0x0008)
    float GrassDensity; // 0x0008 (0x0004)
    bool bUseGrid; // 0x000C (0x0001)
    uint8_t Pad_0[0x3]; // 0x000D (0x0003)
    float PlacementJitter; // 0x0010 (0x0004)
    int32_t StartCullDistance; // 0x0014 (0x0004)
    int32_t EndCullDistance; // 0x0018 (0x0004)
    int32_t MinLOD; // 0x001C (0x0004)
    bool RandomRotation; // 0x0020 (0x0001)
    bool AlignToSurface; // 0x0021 (0x0001)
};

// ScriptStruct: Landscape.WeightmapLayerAllocationInfo
struct WeightmapLayerAllocationInfo {
    class UObject* LayerInfo; // 0x0000 (0x0008)
    uint8_t WeightmapTextureIndex; // 0x0008 (0x0001)
    uint8_t WeightmapTextureChannel; // 0x0009 (0x0001)
    uint8_t GrassMapChannelIndex; // 0x000A (0x0001)
};

// ScriptStruct: Landscape.GizmoSelectData
struct GizmoSelectData {
};

// ScriptStruct: Landscape.LandscapeInfoLayerSettings
struct LandscapeInfoLayerSettings {
    class UObject* LayerInfoObj; // 0x0000 (0x0008)
    struct FName LayerName; // 0x0008 (0x0008)
};

// ScriptStruct: Landscape.WaterWaySpline
struct WaterWaySpline {
    uint8_t Box[0x1C]; // 0x0000 (0x001C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> Segments; // 0x0020 (0x0010)
};

// ScriptStruct: Landscape.WaterWaySegment
struct WaterWaySegment {
    uint8_t WaterWayInfo[0x8]; // 0x0000 (0x0008)
    uint8_t SplineInfo[0x18]; // 0x0008 (0x0018)
    uint8_t Box[0x1C]; // 0x0020 (0x001C)
};

// ScriptStruct: Landscape.WaterWayParameters
struct WaterWayParameters {
    uint8_t WaterWayKind; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t WaterWayIndex; // 0x0004 (0x0004)
};

// ScriptStruct: Landscape.LandscapeRoadSpline
struct LandscapeRoadSpline {
    uint8_t Box[0x1C]; // 0x0000 (0x001C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> Segments; // 0x0020 (0x0010)
};

// ScriptStruct: Landscape.LandscapeRoadSegment
struct LandscapeRoadSegment {
    uint8_t RoadInfo[0x8]; // 0x0000 (0x0008)
    uint8_t SplineInfo[0x18]; // 0x0008 (0x0018)
    uint8_t Box[0x1C]; // 0x0020 (0x001C)
};

// ScriptStruct: Landscape.RoadParameters
struct RoadParameters {
    bool Road; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t NumberOfLanes; // 0x0004 (0x0004)
};

// ScriptStruct: Landscape.LandscapeImportLayerInfo
struct LandscapeImportLayerInfo {
};

// ScriptStruct: Landscape.LandscapeLayerStruct
struct LandscapeLayerStruct {
    class UObject* LayerInfoObj; // 0x0000 (0x0008)
};

// ScriptStruct: Landscape.LandscapeEditorLayerSettings
struct LandscapeEditorLayerSettings {
};

// ScriptStruct: Landscape.LandscapeWeightmapUsage
struct LandscapeWeightmapUsage {
    class UObject* ChannelUsage; // 0x0000 (0x0008)
};

// ScriptStruct: Landscape.SegmentOverideLink
struct SegmentOverideLink {
    int32_t BendID; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString LevelPath; // 0x0008 (0x0010)
};

// ScriptStruct: Landscape.LandscapeSplineMeshEntry
struct LandscapeSplineMeshEntry {
    class UObject* Mesh; // 0x0000 (0x0008)
    struct TArray<uint8_t> MaterialOverrides; // 0x0008 (0x0010)
    bool bForceNavMeshEvenIfNotCollidable; // 0x0018 (0x0001)
    bool bInstancedFoliage; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    uint8_t FoliageType[0x20]; // 0x0020 (0x0020)
    bool bCenterH; // 0x0040 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0041 (0x0003)
    uint8_t CenterAdjust[0x8]; // 0x0044 (0x0008)
    bool bScaleToWidth; // 0x004C (0x0001)
    uint8_t Pad_2[0x3]; // 0x004D (0x0003)
    uint8_t Scale[0xC]; // 0x0050 (0x000C)
    uint8_t Orientation; // 0x005C (0x0001)
    uint8_t ForwardAxis; // 0x005D (0x0001)
    uint8_t UpAxis; // 0x005E (0x0001)
};

// ScriptStruct: Landscape.LandscapeSplineSegmentConnection
struct LandscapeSplineSegmentConnection {
    class UObject* ControlPoint; // 0x0000 (0x0008)
    float TangentLen; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName SocketName; // 0x0010 (0x0008)
};

// ScriptStruct: Landscape.LandscapeSplineInterpPoint
struct LandscapeSplineInterpPoint {
    uint8_t Center[0xC]; // 0x0000 (0x000C)
    uint8_t Left[0xC]; // 0x000C (0x000C)
    uint8_t Right[0xC]; // 0x0018 (0x000C)
    uint8_t FalloffLeft[0xC]; // 0x0024 (0x000C)
    uint8_t FalloffRight[0xC]; // 0x0030 (0x000C)
    float StartEndFalloff; // 0x003C (0x0004)
};

// ScriptStruct: Landscape.LandscapeSplineConnection
struct LandscapeSplineConnection {
    class UObject* Segment; // 0x0000 (0x0008)
    bool End; // 0x0008 (0x0001)
};

// ScriptStruct: Landscape.ForeignWorldSplineData
struct ForeignWorldSplineData {
};

// ScriptStruct: Landscape.ForeignSplineSegmentData
struct ForeignSplineSegmentData {
};

// ScriptStruct: Landscape.ForeignControlPointData
struct ForeignControlPointData {
};

// ScriptStruct: Landscape.GrassInput
struct GrassInput {
    struct FName Name; // 0x0000 (0x0008)
    class UObject* GrassType; // 0x0008 (0x0008)
    uint8_t Input[0x38]; // 0x0010 (0x0038)
};

// ScriptStruct: Landscape.LayerBlendInput
struct LayerBlendInput {
    struct FName LayerName; // 0x0000 (0x0008)
    uint8_t BlendType; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t LayerInput[0x38]; // 0x0010 (0x0038)
    uint8_t HeightInput[0x38]; // 0x0048 (0x0038)
    float PreviewWeight; // 0x0080 (0x0004)
    uint8_t ConstLayerInput[0xC]; // 0x0084 (0x000C)
    float ConstHeightInput; // 0x0090 (0x0004)
};

} // namespace SDK

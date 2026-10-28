#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: CoreUObject.Guid
struct Guid {
    int32_t A; // 0x0000 (0x0004)
    int32_t B; // 0x0004 (0x0004)
    int32_t C; // 0x0008 (0x0004)
    int32_t D; // 0x000C (0x0004)
};

// ScriptStruct: CoreUObject.Default__ScriptStruct
struct Default__ScriptStruct {
};

// ScriptStruct: CoreUObject.Vector
struct Vector {
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
    float Z; // 0x0008 (0x0004)
};

// ScriptStruct: CoreUObject.Vector4
struct Vector4 {
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
    float Z; // 0x0008 (0x0004)
    float W; // 0x000C (0x0004)
};

// ScriptStruct: CoreUObject.Vector2D
struct Vector2D {
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
};

// ScriptStruct: CoreUObject.TwoVectors
struct TwoVectors {
    uint8_t v1[0xC]; // 0x0000 (0x000C)
    uint8_t v2[0xC]; // 0x000C (0x000C)
};

// ScriptStruct: CoreUObject.Plane
struct Plane : public Vector {
    uint8_t Pad_0[0xC]; // 0x0000 (0x000C)
    float W; // 0x000C (0x0004)
};

// ScriptStruct: CoreUObject.Rotator
struct Rotator {
    float Pitch; // 0x0000 (0x0004)
    float Yaw; // 0x0004 (0x0004)
    float Roll; // 0x0008 (0x0004)
};

// ScriptStruct: CoreUObject.Quat
struct Quat {
    float X; // 0x0000 (0x0004)
    float Y; // 0x0004 (0x0004)
    float Z; // 0x0008 (0x0004)
    float W; // 0x000C (0x0004)
};

// ScriptStruct: CoreUObject.PackedNormal
struct PackedNormal {
    uint8_t X; // 0x0000 (0x0001)
    uint8_t Y; // 0x0001 (0x0001)
    uint8_t Z; // 0x0002 (0x0001)
    uint8_t W; // 0x0003 (0x0001)
};

// ScriptStruct: CoreUObject.IntPoint
struct IntPoint {
    int32_t X; // 0x0000 (0x0004)
    int32_t Y; // 0x0004 (0x0004)
};

// ScriptStruct: CoreUObject.IntVector
struct IntVector {
    int32_t X; // 0x0000 (0x0004)
    int32_t Y; // 0x0004 (0x0004)
    int32_t Z; // 0x0008 (0x0004)
};

// ScriptStruct: CoreUObject.Color
struct Color {
    uint8_t B; // 0x0000 (0x0001)
    uint8_t G; // 0x0001 (0x0001)
    uint8_t R; // 0x0002 (0x0001)
    uint8_t A; // 0x0003 (0x0001)
};

// ScriptStruct: CoreUObject.LinearColor
struct LinearColor {
    float R; // 0x0000 (0x0004)
    float G; // 0x0004 (0x0004)
    float B; // 0x0008 (0x0004)
    float A; // 0x000C (0x0004)
};

// ScriptStruct: CoreUObject.Box
struct Box {
    uint8_t Min[0xC]; // 0x0000 (0x000C)
    uint8_t Max[0xC]; // 0x000C (0x000C)
    uint8_t IsValid; // 0x0018 (0x0001)
};

// ScriptStruct: CoreUObject.Box2D
struct Box2D {
    uint8_t Min[0x8]; // 0x0000 (0x0008)
    uint8_t Max[0x8]; // 0x0008 (0x0008)
    uint8_t IsValid; // 0x0010 (0x0001)
};

// ScriptStruct: CoreUObject.BoxSphereBounds
struct BoxSphereBounds {
    uint8_t Origin[0xC]; // 0x0000 (0x000C)
    uint8_t BoxExtent[0xC]; // 0x000C (0x000C)
    float SphereRadius; // 0x0018 (0x0004)
};

// ScriptStruct: CoreUObject.OrientedBox
struct OrientedBox {
    uint8_t Center[0xC]; // 0x0000 (0x000C)
    uint8_t AxisX[0xC]; // 0x000C (0x000C)
    uint8_t AxisY[0xC]; // 0x0018 (0x000C)
    uint8_t AxisZ[0xC]; // 0x0024 (0x000C)
    float ExtentX; // 0x0030 (0x0004)
    float ExtentY; // 0x0034 (0x0004)
    float ExtentZ; // 0x0038 (0x0004)
};

// ScriptStruct: CoreUObject.Matrix
struct Matrix {
    uint8_t XPlane[0x10]; // 0x0000 (0x0010)
    uint8_t YPlane[0x10]; // 0x0010 (0x0010)
    uint8_t ZPlane[0x10]; // 0x0020 (0x0010)
    uint8_t WPlane[0x10]; // 0x0030 (0x0010)
};

// ScriptStruct: CoreUObject.InterpCurvePointFloat
struct InterpCurvePointFloat {
    float InVal; // 0x0000 (0x0004)
    float OutVal; // 0x0004 (0x0004)
    float ArriveTangent; // 0x0008 (0x0004)
    float LeaveTangent; // 0x000C (0x0004)
    uint8_t InterpMode; // 0x0010 (0x0001)
};

// ScriptStruct: CoreUObject.InterpCurveFloat
struct InterpCurveFloat {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    bool bIsLooped; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float LoopKeyOffset; // 0x0014 (0x0004)
};

// ScriptStruct: CoreUObject.InterpCurvePointVector2D
struct InterpCurvePointVector2D {
    float InVal; // 0x0000 (0x0004)
    uint8_t OutVal[0x8]; // 0x0004 (0x0008)
    uint8_t ArriveTangent[0x8]; // 0x000C (0x0008)
    uint8_t LeaveTangent[0x8]; // 0x0014 (0x0008)
    uint8_t InterpMode; // 0x001C (0x0001)
};

// ScriptStruct: CoreUObject.InterpCurveVector2D
struct InterpCurveVector2D {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    bool bIsLooped; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float LoopKeyOffset; // 0x0014 (0x0004)
};

// ScriptStruct: CoreUObject.InterpCurvePointVector
struct InterpCurvePointVector {
    float InVal; // 0x0000 (0x0004)
    uint8_t OutVal[0xC]; // 0x0004 (0x000C)
    uint8_t ArriveTangent[0xC]; // 0x0010 (0x000C)
    uint8_t LeaveTangent[0xC]; // 0x001C (0x000C)
    uint8_t InterpMode; // 0x0028 (0x0001)
};

// ScriptStruct: CoreUObject.InterpCurveVector
struct InterpCurveVector {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    bool bIsLooped; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float LoopKeyOffset; // 0x0014 (0x0004)
};

// ScriptStruct: CoreUObject.InterpCurvePointQuat
struct InterpCurvePointQuat {
    float InVal; // 0x0000 (0x0004)
    uint8_t Pad_0[0xC]; // 0x0004 (0x000C)
    uint8_t OutVal[0x10]; // 0x0010 (0x0010)
    uint8_t ArriveTangent[0x10]; // 0x0020 (0x0010)
    uint8_t LeaveTangent[0x10]; // 0x0030 (0x0010)
    uint8_t InterpMode; // 0x0040 (0x0001)
};

// ScriptStruct: CoreUObject.InterpCurveQuat
struct InterpCurveQuat {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    bool bIsLooped; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float LoopKeyOffset; // 0x0014 (0x0004)
};

// ScriptStruct: CoreUObject.InterpCurvePointTwoVectors
struct InterpCurvePointTwoVectors {
    float InVal; // 0x0000 (0x0004)
    uint8_t OutVal[0x18]; // 0x0004 (0x0018)
    uint8_t ArriveTangent[0x18]; // 0x001C (0x0018)
    uint8_t LeaveTangent[0x18]; // 0x0034 (0x0018)
    uint8_t InterpMode; // 0x004C (0x0001)
};

// ScriptStruct: CoreUObject.InterpCurveTwoVectors
struct InterpCurveTwoVectors {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    bool bIsLooped; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float LoopKeyOffset; // 0x0014 (0x0004)
};

// ScriptStruct: CoreUObject.InterpCurvePointLinearColor
struct InterpCurvePointLinearColor {
    float InVal; // 0x0000 (0x0004)
    uint8_t OutVal[0x10]; // 0x0004 (0x0010)
    uint8_t ArriveTangent[0x10]; // 0x0014 (0x0010)
    uint8_t LeaveTangent[0x10]; // 0x0024 (0x0010)
    uint8_t InterpMode; // 0x0034 (0x0001)
};

// ScriptStruct: CoreUObject.InterpCurveLinearColor
struct InterpCurveLinearColor {
    struct TArray<uint8_t> Points; // 0x0000 (0x0010)
    bool bIsLooped; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float LoopKeyOffset; // 0x0014 (0x0004)
};

// ScriptStruct: CoreUObject.Transform
struct Transform {
    uint8_t Rotation[0x10]; // 0x0000 (0x0010)
    uint8_t Translation[0xC]; // 0x0010 (0x000C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t Scale3D[0xC]; // 0x0020 (0x000C)
};

// ScriptStruct: CoreUObject.RandomStream
struct RandomStream {
    int32_t InitialSeed; // 0x0000 (0x0004)
    int32_t Seed; // 0x0004 (0x0004)
};

// ScriptStruct: CoreUObject.DateTime
struct DateTime {
};

// ScriptStruct: CoreUObject.Timespan
struct Timespan {
};

// ScriptStruct: CoreUObject.StringAssetReference
struct StringAssetReference {
    struct FString AssetLongPathname; // 0x0000 (0x0010)
};

// ScriptStruct: CoreUObject.StringClassReference
struct StringClassReference : public StringAssetReference {
};

// ScriptStruct: CoreUObject.FallbackStruct
struct FallbackStruct {
};

// ScriptStruct: CoreUObject.FloatRangeBound
struct FloatRangeBound {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float Value; // 0x0004 (0x0004)
};

// ScriptStruct: CoreUObject.FloatRange
struct FloatRange {
    uint8_t LowerBound[0x8]; // 0x0000 (0x0008)
    uint8_t UpperBound[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: CoreUObject.Int32RangeBound
struct Int32RangeBound {
    uint8_t Type; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    int32_t Value; // 0x0004 (0x0004)
};

// ScriptStruct: CoreUObject.Int32Range
struct Int32Range {
    uint8_t LowerBound[0x8]; // 0x0000 (0x0008)
    uint8_t UpperBound[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: CoreUObject.FloatInterval
struct FloatInterval {
    float Min; // 0x0000 (0x0004)
    float Max; // 0x0004 (0x0004)
};

// ScriptStruct: CoreUObject.Int32Interval
struct Int32Interval {
    int32_t Min; // 0x0000 (0x0004)
    int32_t Max; // 0x0004 (0x0004)
};

} // namespace SDK

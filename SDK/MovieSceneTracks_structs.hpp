#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: MovieSceneTracks.MovieSceneEventSectionKey
struct MovieSceneEventSectionKey {
    struct TArray<uint8_t> EventNames; // 0x0000 (0x0010)
    float Time; // 0x0010 (0x0004)
};

// ScriptStruct: MovieSceneTracks.ColorParameterNameAndCurves
struct ColorParameterNameAndCurves {
    struct FName ParameterName; // 0x0000 (0x0008)
    int32_t Index; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t RedCurve[0x78]; // 0x0010 (0x0078)
    uint8_t GreenCurve[0x78]; // 0x0088 (0x0078)
    uint8_t BlueCurve[0x78]; // 0x0100 (0x0078)
    uint8_t AlphaCurve[0x78]; // 0x0178 (0x0078)
};

// ScriptStruct: MovieSceneTracks.VectorParameterNameAndCurves
struct VectorParameterNameAndCurves {
    struct FName ParameterName; // 0x0000 (0x0008)
    int32_t Index; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t XCurve[0x78]; // 0x0010 (0x0078)
    uint8_t YCurve[0x78]; // 0x0088 (0x0078)
    uint8_t ZCurve[0x78]; // 0x0100 (0x0078)
};

// ScriptStruct: MovieSceneTracks.ScalarParameterNameAndCurve
struct ScalarParameterNameAndCurve {
    struct FName ParameterName; // 0x0000 (0x0008)
    int32_t Index; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t ParameterCurve[0x78]; // 0x0010 (0x0078)
};

} // namespace SDK

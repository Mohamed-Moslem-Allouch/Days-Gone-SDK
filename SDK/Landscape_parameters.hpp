#pragma once
#include "Basic.hpp"
#include "Landscape_structs.hpp"

namespace SDK {

// Function: Landscape.LandscapeProxy.EditorApplySpline
// Size: 0x0030
struct LandscapeProxy_EditorApplySpline_Params {
public:
    class UObject* InSplineComponent; // 0x0000 (0x0008)
    float StartWidth; // 0x0008 (0x0004)
    float EndWidth; // 0x000C (0x0004)
    float StartSideFalloff; // 0x0010 (0x0004)
    float EndSideFalloff; // 0x0014 (0x0004)
    float StartRoll; // 0x0018 (0x0004)
    float EndRoll; // 0x001C (0x0004)
    int32_t NumSubdivisions; // 0x0020 (0x0004)
    bool bRaiseHeights; // 0x0024 (0x0001)
    bool bLowerHeights; // 0x0025 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0026 (0x0002)
    class UObject* PaintLayer; // 0x0028 (0x0008)
};

// Function: Landscape.LandscapeProxy.ChangeLODDistanceFactor
// Size: 0x0004
struct LandscapeProxy_ChangeLODDistanceFactor_Params {
public:
    float InLODDistanceFactor; // 0x0000 (0x0004)
};

} // namespace SDK

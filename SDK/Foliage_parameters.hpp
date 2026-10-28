#pragma once
#include "Basic.hpp"
#include "Foliage_structs.hpp"

namespace SDK {

// Function: Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// Size: 0x0024
struct FoliageStatistics_FoliageOverlappingSphereCount_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* StaticMesh; // 0x0008 (0x0008)
    uint8_t CenterPosition[0xC]; // 0x0010 (0x000C)
    float Radius; // 0x001C (0x0004)
    int32_t ReturnValue; // 0x0020 (0x0004)
};

// Function: Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// Size: 0x0030
struct FoliageStatistics_FoliageOverlappingBoxCount_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* StaticMesh; // 0x0008 (0x0008)
    uint8_t Box[0x1C]; // 0x0010 (0x001C)
    int32_t ReturnValue; // 0x002C (0x0004)
};

// Function: Foliage.InteractiveFoliageActor.CapsuleTouched
// Size: 0x00A0
struct InteractiveFoliageActor_CapsuleTouched_Params {
public:
    class UObject* Other; // 0x0000 (0x0008)
    class UObject* OtherComp; // 0x0008 (0x0008)
    int32_t OtherBodyIndex; // 0x0010 (0x0004)
    bool bFromSweep; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    uint8_t OverlapInfo[0x88]; // 0x0018 (0x0088)
};

// Function: Foliage.ProceduralFoliageSpawner.Simulate
// Size: 0x0004
struct ProceduralFoliageSpawner_Simulate_Params {
public:
    int32_t NumSteps; // 0x0000 (0x0004)
};

} // namespace SDK

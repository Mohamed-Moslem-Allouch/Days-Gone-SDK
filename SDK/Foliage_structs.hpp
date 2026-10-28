#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Foliage.PackedFoliageProxyInstanceExtents
struct PackedFoliageProxyInstanceExtents {
    uint8_t PositionMin[0xC]; // 0x0000 (0x000C)
    uint8_t PositionMax[0xC]; // 0x000C (0x000C)
    float ZMin; // 0x0018 (0x0004)
    float ZMax; // 0x001C (0x0004)
    float ScaleMin; // 0x0020 (0x0004)
    float ScaleMax; // 0x0024 (0x0004)
    int32_t InstanceStart; // 0x0028 (0x0004)
    int32_t InstanceCount; // 0x002C (0x0004)
    class UObject* MeshImposterData; // 0x0030 (0x0008)
};

// ScriptStruct: Foliage.ProceduralFoliageInstance
struct ProceduralFoliageInstance {
    uint8_t Location[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    uint8_t Rotation[0x10]; // 0x0010 (0x0010)
    uint8_t Normal[0xC]; // 0x0020 (0x000C)
    float Age; // 0x002C (0x0004)
    float Scale; // 0x0030 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0034 (0x0004)
    class UObject* Type; // 0x0038 (0x0008)
};

// ScriptStruct: Foliage.FoliageTypeObject
struct FoliageTypeObject {
    class UObject* FoliageTypeObject; // 0x0000 (0x0008)
    class UObject* TypeInstance; // 0x0008 (0x0008)
    bool bIsAsset; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UClass* Type; // 0x0018 (0x0008)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: ProceduralMeshComponent.ProcMeshSection
struct ProcMeshSection {
    struct TArray<uint8_t> ProcVertexBuffer; // 0x0000 (0x0010)
    struct TArray<uint8_t> ProcIndexBuffer; // 0x0010 (0x0010)
    uint8_t SectionLocalBox[0x1C]; // 0x0020 (0x001C)
    bool bEnableCollision; // 0x003C (0x0001)
    bool bSectionVisible; // 0x003D (0x0001)
};

// ScriptStruct: ProceduralMeshComponent.ProcMeshVertex
struct ProcMeshVertex {
    uint8_t Position[0xC]; // 0x0000 (0x000C)
    uint8_t Normal[0xC]; // 0x000C (0x000C)
    uint8_t Tangent[0x10]; // 0x0018 (0x0010)
    uint8_t Color[0x4]; // 0x0028 (0x0004)
    uint8_t UV0[0x8]; // 0x002C (0x0008)
};

// ScriptStruct: ProceduralMeshComponent.ProcMeshTangent
struct ProcMeshTangent {
    uint8_t TangentX[0xC]; // 0x0000 (0x000C)
    bool bFlipTangentY; // 0x000C (0x0001)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: CustomMeshComponent.CustomMeshTriangle
struct CustomMeshTriangle {
    uint8_t Vertex0[0xC]; // 0x0000 (0x000C)
    uint8_t Vertex1[0xC]; // 0x000C (0x000C)
    uint8_t Vertex2[0xC]; // 0x0018 (0x000C)
};

} // namespace SDK

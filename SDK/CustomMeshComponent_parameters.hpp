#pragma once
#include "Basic.hpp"
#include "CustomMeshComponent_structs.hpp"

namespace SDK {

// Function: CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// Size: 0x0011
struct CustomMeshComponent_SetCustomMeshTriangles_Params {
public:
    struct TArray<uint8_t> Triangles; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// Size: 0x0000
struct CustomMeshComponent_ClearCustomMeshTriangles_Params {
public:
};

// Function: CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// Size: 0x0010
struct CustomMeshComponent_AddCustomMeshTriangles_Params {
public:
    struct TArray<uint8_t> Triangles; // 0x0000 (0x0010)
};

} // namespace SDK

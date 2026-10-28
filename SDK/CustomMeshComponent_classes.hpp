#pragma once
#include "Basic.hpp"
#include "CustomMeshComponent_structs.hpp"

namespace SDK {

// Class: CustomMeshComponent.CustomMeshComponent
class CustomMeshComponent : public MeshComponent {
public:

public:
    bool SetCustomMeshTriangles(struct TArray<uint8_t> Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(struct TArray<uint8_t> Triangles);
};

} // namespace SDK

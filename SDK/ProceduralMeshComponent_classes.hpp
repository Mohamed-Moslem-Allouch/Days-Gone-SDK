#pragma once
#include "Basic.hpp"
#include "ProceduralMeshComponent_structs.hpp"

namespace SDK {

// Class: ProceduralMeshComponent.ProceduralMeshComponent
class ProceduralMeshComponent : public MeshComponent {
public:
    uint8_t Pad_0[0x668]; // 0x0028 (0x0668)
    class UObject* ProcMeshBodySetup; // 0x0690 (0x0008)
    struct TArray<uint8_t> ProcMeshSections; // 0x0698 (0x0010)
    uint8_t LocalBounds[0x1C]; // 0x06A8 (0x001C)

public:
    void UpdateMeshSection(int32_t SectionIndex, struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Normals, struct TArray<uint8_t> UV0, struct TArray<uint8_t> VertexColors, struct TArray<uint8_t> Tangents);
    void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
    bool IsMeshSectionVisible(int32_t SectionIndex);
    void CreateMeshSection(int32_t SectionIndex, struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Triangles, struct TArray<uint8_t> Normals, struct TArray<uint8_t> UV0, struct TArray<uint8_t> VertexColors, struct TArray<uint8_t> Tangents, bool bCreateCollision);
    void ClearMeshSection(int32_t SectionIndex);
    void ClearAllMeshSections();
};

// Class: ProceduralMeshComponent.KismetProceduralMeshLibrary
class KismetProceduralMeshLibrary : public BlueprintFunctionLibrary {
public:

public:
    void GenerateBoxMesh(uint8_t BoxRadius, struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Triangles, struct TArray<uint8_t> Normals, struct TArray<uint8_t> UVs, struct TArray<uint8_t> Tangents);
    void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<uint8_t> Triangles);
    void ConvertQuadToTriangles(struct TArray<uint8_t> Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);
    void CalculateTangentsForMesh(struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Triangles, struct TArray<uint8_t> UVs, struct TArray<uint8_t> Normals, struct TArray<uint8_t> Tangents);
};

} // namespace SDK

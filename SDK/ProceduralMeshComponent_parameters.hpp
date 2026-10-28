#pragma once
#include "Basic.hpp"
#include "ProceduralMeshComponent_structs.hpp"

namespace SDK {

// Function: ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// Size: 0x0058
struct ProceduralMeshComponent_UpdateMeshSection_Params {
public:
    int32_t SectionIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> Vertices; // 0x0008 (0x0010)
    struct TArray<uint8_t> Normals; // 0x0018 (0x0010)
    struct TArray<uint8_t> UV0; // 0x0028 (0x0010)
    struct TArray<uint8_t> VertexColors; // 0x0038 (0x0010)
    struct TArray<uint8_t> Tangents; // 0x0048 (0x0010)
};

// Function: ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// Size: 0x0005
struct ProceduralMeshComponent_SetMeshSectionVisible_Params {
public:
    int32_t SectionIndex; // 0x0000 (0x0004)
    bool bNewVisibility; // 0x0004 (0x0001)
};

// Function: ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// Size: 0x0005
struct ProceduralMeshComponent_IsMeshSectionVisible_Params {
public:
    int32_t SectionIndex; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// Size: 0x0069
struct ProceduralMeshComponent_CreateMeshSection_Params {
public:
    int32_t SectionIndex; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> Vertices; // 0x0008 (0x0010)
    struct TArray<uint8_t> Triangles; // 0x0018 (0x0010)
    struct TArray<uint8_t> Normals; // 0x0028 (0x0010)
    struct TArray<uint8_t> UV0; // 0x0038 (0x0010)
    struct TArray<uint8_t> VertexColors; // 0x0048 (0x0010)
    struct TArray<uint8_t> Tangents; // 0x0058 (0x0010)
    bool bCreateCollision; // 0x0068 (0x0001)
};

// Function: ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// Size: 0x0004
struct ProceduralMeshComponent_ClearMeshSection_Params {
public:
    int32_t SectionIndex; // 0x0000 (0x0004)
};

// Function: ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// Size: 0x0000
struct ProceduralMeshComponent_ClearAllMeshSections_Params {
public:
};

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// Size: 0x0060
struct KismetProceduralMeshLibrary_GenerateBoxMesh_Params {
public:
    uint8_t BoxRadius[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct TArray<uint8_t> Vertices; // 0x0010 (0x0010)
    struct TArray<uint8_t> Triangles; // 0x0020 (0x0010)
    struct TArray<uint8_t> Normals; // 0x0030 (0x0010)
    struct TArray<uint8_t> UVs; // 0x0040 (0x0010)
    struct TArray<uint8_t> Tangents; // 0x0050 (0x0010)
};

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// Size: 0x0020
struct KismetProceduralMeshLibrary_CreateGridMeshTriangles_Params {
public:
    int32_t NumX; // 0x0000 (0x0004)
    int32_t NumY; // 0x0004 (0x0004)
    bool bWinding; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct TArray<uint8_t> Triangles; // 0x0010 (0x0010)
};

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// Size: 0x0020
struct KismetProceduralMeshLibrary_ConvertQuadToTriangles_Params {
public:
    struct TArray<uint8_t> Triangles; // 0x0000 (0x0010)
    int32_t Vert0; // 0x0010 (0x0004)
    int32_t Vert1; // 0x0014 (0x0004)
    int32_t Vert2; // 0x0018 (0x0004)
    int32_t Vert3; // 0x001C (0x0004)
};

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// Size: 0x0050
struct KismetProceduralMeshLibrary_CalculateTangentsForMesh_Params {
public:
    struct TArray<uint8_t> Vertices; // 0x0000 (0x0010)
    struct TArray<uint8_t> Triangles; // 0x0010 (0x0010)
    struct TArray<uint8_t> UVs; // 0x0020 (0x0010)
    struct TArray<uint8_t> Normals; // 0x0030 (0x0010)
    struct TArray<uint8_t> Tangents; // 0x0040 (0x0010)
};

} // namespace SDK

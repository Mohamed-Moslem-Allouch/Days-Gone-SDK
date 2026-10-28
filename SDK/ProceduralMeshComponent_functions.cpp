#include "Basic.hpp"
#include "ProceduralMeshComponent_classes.hpp"
#include "ProceduralMeshComponent_parameters.hpp"

namespace SDK {

// Function: ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
void ProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Normals, struct TArray<uint8_t> UV0, struct TArray<uint8_t> VertexColors, struct TArray<uint8_t> Tangents) {
    static class UFunction* Func = nullptr;
    ProceduralMeshComponent_UpdateMeshSection_Params Parms{};
    Parms.SectionIndex = SectionIndex;
    Parms.Vertices = Vertices;
    Parms.Normals = Normals;
    Parms.UV0 = UV0;
    Parms.VertexColors = VertexColors;
    Parms.Tangents = Tangents;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
void ProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility) {
    static class UFunction* Func = nullptr;
    ProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};
    Parms.SectionIndex = SectionIndex;
    Parms.bNewVisibility = bNewVisibility;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
bool ProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex) {
    static class UFunction* Func = nullptr;
    ProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};
    Parms.SectionIndex = SectionIndex;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
void ProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Triangles, struct TArray<uint8_t> Normals, struct TArray<uint8_t> UV0, struct TArray<uint8_t> VertexColors, struct TArray<uint8_t> Tangents, bool bCreateCollision) {
    static class UFunction* Func = nullptr;
    ProceduralMeshComponent_CreateMeshSection_Params Parms{};
    Parms.SectionIndex = SectionIndex;
    Parms.Vertices = Vertices;
    Parms.Triangles = Triangles;
    Parms.Normals = Normals;
    Parms.UV0 = UV0;
    Parms.VertexColors = VertexColors;
    Parms.Tangents = Tangents;
    Parms.bCreateCollision = bCreateCollision;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
void ProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex) {
    static class UFunction* Func = nullptr;
    ProceduralMeshComponent_ClearMeshSection_Params Parms{};
    Parms.SectionIndex = SectionIndex;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
void ProceduralMeshComponent::ClearAllMeshSections() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
void KismetProceduralMeshLibrary::GenerateBoxMesh(uint8_t BoxRadius, struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Triangles, struct TArray<uint8_t> Normals, struct TArray<uint8_t> UVs, struct TArray<uint8_t> Tangents) {
    static class UFunction* Func = nullptr;
    KismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};
    Parms.BoxRadius = BoxRadius;
    Parms.Vertices = Vertices;
    Parms.Triangles = Triangles;
    Parms.Normals = Normals;
    Parms.UVs = UVs;
    Parms.Tangents = Tangents;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
void KismetProceduralMeshLibrary::CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<uint8_t> Triangles) {
    static class UFunction* Func = nullptr;
    KismetProceduralMeshLibrary_CreateGridMeshTriangles_Params Parms{};
    Parms.NumX = NumX;
    Parms.NumY = NumY;
    Parms.bWinding = bWinding;
    Parms.Triangles = Triangles;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
void KismetProceduralMeshLibrary::ConvertQuadToTriangles(struct TArray<uint8_t> Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3) {
    static class UFunction* Func = nullptr;
    KismetProceduralMeshLibrary_ConvertQuadToTriangles_Params Parms{};
    Parms.Triangles = Triangles;
    Parms.Vert0 = Vert0;
    Parms.Vert1 = Vert1;
    Parms.Vert2 = Vert2;
    Parms.Vert3 = Vert3;
    ProcessEvent(Func, &Parms);
}

// Function: ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
void KismetProceduralMeshLibrary::CalculateTangentsForMesh(struct TArray<uint8_t> Vertices, struct TArray<uint8_t> Triangles, struct TArray<uint8_t> UVs, struct TArray<uint8_t> Normals, struct TArray<uint8_t> Tangents) {
    static class UFunction* Func = nullptr;
    KismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};
    Parms.Vertices = Vertices;
    Parms.Triangles = Triangles;
    Parms.UVs = UVs;
    Parms.Normals = Normals;
    Parms.Tangents = Tangents;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

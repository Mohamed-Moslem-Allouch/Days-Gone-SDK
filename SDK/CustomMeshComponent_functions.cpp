#include "Basic.hpp"
#include "CustomMeshComponent_classes.hpp"
#include "CustomMeshComponent_parameters.hpp"

namespace SDK {

// Function: CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
bool CustomMeshComponent::SetCustomMeshTriangles(struct TArray<uint8_t> Triangles) {
    static class UFunction* Func = nullptr;
    CustomMeshComponent_SetCustomMeshTriangles_Params Parms{};
    Parms.Triangles = Triangles;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
void CustomMeshComponent::ClearCustomMeshTriangles() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
void CustomMeshComponent::AddCustomMeshTriangles(struct TArray<uint8_t> Triangles) {
    static class UFunction* Func = nullptr;
    CustomMeshComponent_AddCustomMeshTriangles_Params Parms{};
    Parms.Triangles = Triangles;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

#include "Basic.hpp"
#include "CableComponent_classes.hpp"
#include "CableComponent_parameters.hpp"

namespace SDK {

// Function: CableComponent.CableComponent.SetAttachEndTo
void CableComponent::SetAttachEndTo(class UObject* Actor, struct FName ComponentProperty) {
    static class UFunction* Func = nullptr;
    CableComponent_SetAttachEndTo_Params Parms{};
    Parms.Actor = Actor;
    Parms.ComponentProperty = ComponentProperty;
    ProcessEvent(Func, &Parms);
}

// Function: CableComponent.CableComponent.GetAttachedComponent
class UObject* CableComponent::GetAttachedComponent() {
    static class UFunction* Func = nullptr;
    CableComponent_GetAttachedComponent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: CableComponent.CableComponent.GetAttachedActor
class UObject* CableComponent::GetAttachedActor() {
    static class UFunction* Func = nullptr;
    CableComponent_GetAttachedActor_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK

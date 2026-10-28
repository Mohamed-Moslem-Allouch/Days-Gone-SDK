#pragma once
#include "Basic.hpp"

namespace SDK {

// Function: CableComponent.CableComponent.SetAttachEndTo
// Size: 0x0010
struct CableComponent_SetAttachEndTo_Params {
public:
    class UObject* Actor; // 0x0000 (0x0008)
    struct FName ComponentProperty; // 0x0008 (0x0008)
};

// Function: CableComponent.CableComponent.GetAttachedComponent
// Size: 0x0008
struct CableComponent_GetAttachedComponent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: CableComponent.CableComponent.GetAttachedActor
// Size: 0x0008
struct CableComponent_GetAttachedActor_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: CableComponent.CableActor
class CableActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* CableComponent; // 0x0348 (0x0008)
};

// Class: CableComponent.CableComponent
class CableComponent : public MeshComponent {
public:
    uint8_t Pad_0[0x660]; // 0x0028 (0x0660)
    uint8_t AttachEndTo[0x18]; // 0x0688 (0x0018)
    uint8_t EndLocation[0xC]; // 0x06A0 (0x000C)
    float CableLength; // 0x06AC (0x0004)
    int32_t NumSegments; // 0x06B0 (0x0004)
    float SubstepTime; // 0x06B4 (0x0004)
    int32_t SolverIterations; // 0x06B8 (0x0004)
    float CableWidth; // 0x06BC (0x0004)
    int32_t NumSides; // 0x06C0 (0x0004)
    float TileMaterial; // 0x06C4 (0x0004)

public:
    void SetAttachEndTo(class UObject* Actor, struct FName ComponentProperty);
    class UObject* GetAttachedComponent();
    class UObject* GetAttachedActor();
};

} // namespace SDK

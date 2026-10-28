#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: Fur.FurComponent
class FurComponent : public MeshComponent {
public:
    uint8_t Pad_0[0x660]; // 0x0028 (0x0660)
    class UObject* SkeletalMeshComponent; // 0x0688 (0x0008)
    float StreamingDistanceMultiplier; // 0x0690 (0x0004)
};

// Class: Fur.FurType
class FurType : public Object {
public:
    float Density; // 0x0028 (0x0004)
};

} // namespace SDK

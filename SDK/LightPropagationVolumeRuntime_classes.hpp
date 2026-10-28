#pragma once
#include "Basic.hpp"
#include "LightPropagationVolumeRuntime_structs.hpp"

namespace SDK {

// Class: LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
class LightPropagationVolumeBlendable : public Object {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t Settings[0x38]; // 0x0030 (0x0038)
    float BlendWeight; // 0x0068 (0x0004)
};

} // namespace SDK

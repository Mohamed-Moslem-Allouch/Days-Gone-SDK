#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: HeadMountedDisplay.MotionControllerComponent
class MotionControllerComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    int32_t PlayerIndex; // 0x05D0 (0x0004)
    uint8_t Hand; // 0x05D4 (0x0001)
    uint8_t Pad_1[0x3]; // 0x05D5 (0x0003)
    bool bDisableLowLatencyUpdate; // 0x05D8 (0x0001)
    uint8_t Pad_2[0x3]; // 0x05D9 (0x0003)
    uint8_t CurrentTrackingStatus; // 0x05DC (0x0001)

public:
    bool IsTracked();
};

// Class: HeadMountedDisplay.VRNotificationsComponent
class VRNotificationsComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    uint8_t HMDRecenteredDelegate[0x10]; // 0x00D0 (0x0010)
    uint8_t HMDLostDelegate[0x10]; // 0x00E0 (0x0010)
    uint8_t HMDReconnectedDelegate[0x10]; // 0x00F0 (0x0010)

public:
    void VRNotificationsDelegate__DelegateSignature();
};

} // namespace SDK

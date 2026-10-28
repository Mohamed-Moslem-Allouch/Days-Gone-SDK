#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: ArchVisCharacter.ArchVisCharacter
class ArchVisCharacter : public Character {
public:
    uint8_t Pad_0[0x748]; // 0x0028 (0x0748)
    struct FString LookUpAxisName; // 0x0770 (0x0010)
    struct FString LookUpAtRateAxisName; // 0x0780 (0x0010)
    struct FString TurnAxisName; // 0x0790 (0x0010)
    struct FString TurnAtRateAxisName; // 0x07A0 (0x0010)
    struct FString MoveForwardAxisName; // 0x07B0 (0x0010)
    struct FString MoveRightAxisName; // 0x07C0 (0x0010)
    float MouseSensitivityScale_Pitch; // 0x07D0 (0x0004)
    float MouseSensitivityScale_Yaw; // 0x07D4 (0x0004)
};

// Class: ArchVisCharacter.ArchVisCharMovementComponent
class ArchVisCharMovementComponent : public CharacterMovementComponent {
public:
    uint8_t Pad_0[0x770]; // 0x0028 (0x0770)
    uint8_t RotationalAcceleration[0xC]; // 0x0798 (0x000C)
    uint8_t RotationalDeceleration[0xC]; // 0x07A4 (0x000C)
    uint8_t MaxRotationalVelocity[0xC]; // 0x07B0 (0x000C)
    float MinPitch; // 0x07BC (0x0004)
    float MaxPitch; // 0x07C0 (0x0004)
    float WalkingFriction; // 0x07C4 (0x0004)
    float WalkingSpeed; // 0x07C8 (0x0004)
    float WalkingAcceleration; // 0x07CC (0x0004)
};

} // namespace SDK

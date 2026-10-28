#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: OnlineSubsystemUtils.BlueprintSessionResult
struct BlueprintSessionResult {
};

// ScriptStruct: OnlineSubsystemUtils.PartyReservation
struct PartyReservation {
    int32_t TeamNum; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    uint8_t PartyLeader[0x10]; // 0x0008 (0x0010)
    struct TArray<uint8_t> PartyMembers; // 0x0018 (0x0010)
};

// ScriptStruct: OnlineSubsystemUtils.PlayerReservation
struct PlayerReservation {
    uint8_t UniqueId[0x10]; // 0x0000 (0x0010)
    struct FString ValidationStr; // 0x0010 (0x0010)
    float ElapsedTime; // 0x0020 (0x0004)
};

// ScriptStruct: OnlineSubsystemUtils.PIELoginSettingsInternal
struct PIELoginSettingsInternal {
    struct FString Id; // 0x0000 (0x0010)
    struct FString Token; // 0x0010 (0x0010)
    struct FString Type; // 0x0020 (0x0010)
    struct TArray<uint8_t> TokenBytes; // 0x0030 (0x0010)
};

} // namespace SDK

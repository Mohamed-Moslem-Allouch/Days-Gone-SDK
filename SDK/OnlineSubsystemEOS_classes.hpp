#pragma once
#include "Basic.hpp"
#include "OnlineSubsystemEOS_structs.hpp"

namespace SDK {

// Class: OnlineSubsystemEOS.EOSArtifactSettings
class EOSArtifactSettings : public DataAsset {
public:
};

// Class: OnlineSubsystemEOS.EOSSettings
class EOSSettings : public Object {
public:
    struct FString CacheDir; // 0x0028 (0x0010)
    struct FString DefaultArtifactName; // 0x0038 (0x0010)
    int32_t TickBudgetInMilliseconds; // 0x0048 (0x0004)
    bool bEnableOverlay; // 0x004C (0x0001)
    bool bEnableSocialOverlay; // 0x004D (0x0001)
    uint8_t Pad_0[0x2]; // 0x004E (0x0002)
    struct TArray<uint8_t> Artifacts; // 0x0050 (0x0010)
};

} // namespace SDK

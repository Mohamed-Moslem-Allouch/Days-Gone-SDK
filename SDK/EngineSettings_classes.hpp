#pragma once
#include "Basic.hpp"
#include "EngineSettings_structs.hpp"

namespace SDK {

// Class: EngineSettings.ConsoleSettings
class ConsoleSettings : public Object {
public:
    int32_t MaxScrollbackSize; // 0x0028 (0x0004)
    uint8_t Pad_0[0x4]; // 0x002C (0x0004)
    struct TArray<uint8_t> ManualAutoCompleteList; // 0x0030 (0x0010)
    struct TArray<uint8_t> AutoCompleteMapPaths; // 0x0040 (0x0010)
};

// Class: EngineSettings.GameMapsSettings
class GameMapsSettings : public Object {
public:
    uint8_t EditorStartupMap[0x10]; // 0x0028 (0x0010)
    struct FString LocalMapOptions; // 0x0038 (0x0010)
    uint8_t TransitionMap[0x10]; // 0x0048 (0x0010)
    bool bUseSplitscreen; // 0x0058 (0x0001)
    uint8_t TwoPlayerSplitscreenLayout; // 0x0059 (0x0001)
    uint8_t ThreePlayerSplitscreenLayout; // 0x005A (0x0001)
    uint8_t Pad_0[0x5]; // 0x005B (0x0005)
    uint8_t GameInstanceClass[0x10]; // 0x0060 (0x0010)
    uint8_t GameDefaultMap[0x10]; // 0x0070 (0x0010)
    uint8_t ServerDefaultMap[0x10]; // 0x0080 (0x0010)
    uint8_t GlobalDefaultGameMode[0x10]; // 0x0090 (0x0010)
    uint8_t GlobalDefaultServerGameMode[0x10]; // 0x00A0 (0x0010)
};

// Class: EngineSettings.GameNetworkManagerSettings
class GameNetworkManagerSettings : public Object {
public:
    int32_t MinDynamicBandwidth; // 0x0028 (0x0004)
    int32_t MaxDynamicBandwidth; // 0x002C (0x0004)
    int32_t TotalNetBandwidth; // 0x0030 (0x0004)
    int32_t BadPingThreshold; // 0x0034 (0x0004)
    bool bIsStandbyCheckingEnabled; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    float StandbyRxCheatTime; // 0x003C (0x0004)
    float StandbyTxCheatTime; // 0x0040 (0x0004)
    float PercentMissingForRxStandby; // 0x0044 (0x0004)
    float PercentMissingForTxStandby; // 0x0048 (0x0004)
    float PercentForBadPing; // 0x004C (0x0004)
    float JoinInProgressStandbyWaitTime; // 0x0050 (0x0004)
};

// Class: EngineSettings.GameSessionSettings
class GameSessionSettings : public Object {
public:
    int32_t MaxSpectators; // 0x0028 (0x0004)
    int32_t MaxPlayers; // 0x002C (0x0004)
    bool bRequiresPushToTalk; // 0x0030 (0x0001)
};

// Class: EngineSettings.GeneralEngineSettings
class GeneralEngineSettings : public Object {
public:
};

// Class: EngineSettings.GeneralProjectSettings
class GeneralProjectSettings : public Object {
public:
    struct FString CompanyName; // 0x0028 (0x0010)
    struct FString CompanyDistinguishedName; // 0x0038 (0x0010)
    struct FString CopyrightNotice; // 0x0048 (0x0010)
    struct FString Description; // 0x0058 (0x0010)
    struct FString Homepage; // 0x0068 (0x0010)
    struct FString LicensingTerms; // 0x0078 (0x0010)
    struct FString PrivacyPolicy; // 0x0088 (0x0010)
    uint8_t ProjectID[0x10]; // 0x0098 (0x0010)
    struct FString ProjectName; // 0x00A8 (0x0010)
    struct FString ProjectVersion; // 0x00B8 (0x0010)
    struct FString SupportContact; // 0x00C8 (0x0010)
    struct FText ProjectDisplayedTitle; // 0x00D8 (0x0018)
};

// Class: EngineSettings.HudSettings
class HudSettings : public Object {
public:
    bool bShowHUD; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    struct TArray<uint8_t> DebugDisplay; // 0x0030 (0x0010)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: GameLiveStreaming.BlueprintLiveStreamInfo
struct BlueprintLiveStreamInfo {
    struct FString GameName; // 0x0000 (0x0010)
    struct FString StreamName; // 0x0010 (0x0010)
    struct FString URL; // 0x0020 (0x0010)
};

} // namespace SDK

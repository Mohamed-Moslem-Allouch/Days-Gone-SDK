#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: LevelSequence.LevelSequenceObject
struct LevelSequenceObject {
    uint8_t ObjectOrOwner[0x1C]; // 0x0000 (0x001C)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct FString ComponentName; // 0x0020 (0x0010)
    uint64_t CachedComponent; // 0x0030 (0x0008)
};

// ScriptStruct: LevelSequence.LevelSequenceObjectReferenceMap
struct LevelSequenceObjectReferenceMap {
};

// ScriptStruct: LevelSequence.LevelSequenceObjectReference
struct LevelSequenceObjectReference {
};

// ScriptStruct: LevelSequence.LevelSequencePlaybackSettings
struct LevelSequencePlaybackSettings {
    int32_t LoopCount; // 0x0000 (0x0004)
    float PlayRate; // 0x0004 (0x0004)
};

} // namespace SDK

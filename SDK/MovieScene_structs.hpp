#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: MovieScene.MovieSceneBinding
struct MovieSceneBinding {
    uint8_t ObjectGuid[0x10]; // 0x0000 (0x0010)
    struct FString BindingName; // 0x0010 (0x0010)
    struct TArray<uint8_t> Tracks; // 0x0020 (0x0010)
};

// ScriptStruct: MovieScene.MovieScenePossessable
struct MovieScenePossessable {
    uint8_t Guid[0x10]; // 0x0000 (0x0010)
    struct FString Name; // 0x0010 (0x0010)
    class UClass* PossessedObjectClass; // 0x0020 (0x0008)
    uint8_t ParentGuid[0x10]; // 0x0028 (0x0010)
};

// ScriptStruct: MovieScene.MovieSceneSpawnable
struct MovieSceneSpawnable {
    uint8_t Guid[0x10]; // 0x0000 (0x0010)
    struct FString Name; // 0x0010 (0x0010)
    class UClass* GeneratedClass; // 0x0020 (0x0008)
    struct TArray<uint8_t> ChildPossessables; // 0x0028 (0x0010)
    uint8_t Ownership; // 0x0038 (0x0001)
};

// ScriptStruct: MovieScene.MovieSceneTrackLabels
struct MovieSceneTrackLabels {
    struct TArray<uint8_t> Strings; // 0x0000 (0x0010)
};

// ScriptStruct: MovieScene.MovieSceneEditorData
struct MovieSceneEditorData {
    uint8_t ExpansionStates[0x50]; // 0x0000 (0x0050)
    uint8_t WorkingRange[0x10]; // 0x0050 (0x0010)
    uint8_t ViewRange[0x10]; // 0x0060 (0x0010)
};

// ScriptStruct: MovieScene.MovieSceneExpansionState
struct MovieSceneExpansionState {
    bool bExpanded; // 0x0000 (0x0001)
};

} // namespace SDK

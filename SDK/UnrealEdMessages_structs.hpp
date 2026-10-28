#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: UnrealEdMessages.AssetEditorRequestOpenAsset
struct AssetEditorRequestOpenAsset {
    struct FString AssetName; // 0x0000 (0x0010)
};

// ScriptStruct: UnrealEdMessages.FileServerReady
struct FileServerReady {
    struct TArray<uint8_t> AddressList; // 0x0000 (0x0010)
    uint8_t InstanceId[0x10]; // 0x0010 (0x0010)
};

} // namespace SDK

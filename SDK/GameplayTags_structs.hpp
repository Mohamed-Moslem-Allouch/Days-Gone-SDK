#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: GameplayTags.GameplayTag
struct GameplayTag {
    struct FName TagName; // 0x0000 (0x0008)
};

// ScriptStruct: GameplayTags.GameplayTagContainer
struct GameplayTagContainer {
    struct TArray<uint8_t> GameplayTags; // 0x0000 (0x0010)
    struct TArray<uint8_t> Tags; // 0x0010 (0x0010)
};

// ScriptStruct: GameplayTags.GameplayTagQuery
struct GameplayTagQuery {
    int32_t TokenStreamVersion; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> TagDictionary; // 0x0008 (0x0010)
    struct TArray<uint8_t> QueryTokenStream; // 0x0018 (0x0010)
    struct FString UserDescription; // 0x0028 (0x0010)
    struct FString AutoDescription; // 0x0038 (0x0010)
};

// ScriptStruct: GameplayTags.GameplayTagNode
struct GameplayTagNode {
};

// ScriptStruct: GameplayTags.GameplayTagTableRow
struct GameplayTagTableRow : public TableRowBase {
    struct FString Tag; // 0x0000 (0x0010)
    struct FText CategoryText; // 0x0010 (0x0018)
};

} // namespace SDK

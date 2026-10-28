#pragma once
#include "Basic.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK {

// Function: GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// Size: 0x0009
struct GameplayTagAssetInterface_HasMatchingGameplayTag_Params {
public:
    uint8_t TagToCheck[0x8]; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// Size: 0x0022
struct GameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    bool bCountEmptyAsMatch; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// Size: 0x0022
struct GameplayTagAssetInterface_HasAllMatchingGameplayTags_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    bool bCountEmptyAsMatch; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// Size: 0x0020
struct GameplayTagAssetInterface_GetOwnedGameplayTags_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// Size: 0x0019
struct BlueprintGameplayTagLibrary_NotEqual_TagTag_Params {
public:
    uint8_t A[0x8]; // 0x0000 (0x0008)
    struct FString B; // 0x0008 (0x0010)
    bool ReturnValue; // 0x0018 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// Size: 0x0031
struct BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params {
public:
    uint8_t A[0x20]; // 0x0000 (0x0020)
    struct FString B; // 0x0020 (0x0010)
    bool ReturnValue; // 0x0030 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// Size: 0x0010
struct BlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params {
public:
    uint8_t Value[0x8]; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// Size: 0x0090
struct BlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params {
public:
    uint8_t TagQuery[0x48]; // 0x0000 (0x0048)
    uint8_t ReturnValue[0x48]; // 0x0048 (0x0048)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// Size: 0x0032
struct BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params {
public:
    uint8_t TagContainerInterface[0x10]; // 0x0000 (0x0010)
    uint8_t OtherContainer[0x20]; // 0x0010 (0x0020)
    bool bCountEmptyAsMatch; // 0x0030 (0x0001)
    bool ReturnValue; // 0x0031 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// Size: 0x0024
struct BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    int32_t ReturnValue; // 0x0020 (0x0004)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
// Size: 0x0013
struct BlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params {
public:
    uint8_t TagOne[0x8]; // 0x0000 (0x0008)
    uint8_t TagTwo[0x8]; // 0x0008 (0x0008)
    uint8_t TagOneMatchType; // 0x0010 (0x0001)
    uint8_t TagTwoMatchType; // 0x0011 (0x0001)
    bool ReturnValue; // 0x0012 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// Size: 0x0022
struct BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params {
public:
    uint8_t TagContainerInterface[0x10]; // 0x0000 (0x0010)
    uint8_t ContainerTagsMatchType; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    uint8_t Tag[0x8]; // 0x0018 (0x0008)
    uint8_t TagMatchType; // 0x0020 (0x0001)
    bool ReturnValue; // 0x0021 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// Size: 0x0069
struct BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    uint8_t TagQuery[0x48]; // 0x0020 (0x0048)
    bool ReturnValue; // 0x0068 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
// Size: 0x0042
struct BlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    uint8_t OtherContainer[0x20]; // 0x0020 (0x0020)
    bool bCountEmptyAsMatch; // 0x0040 (0x0001)
    bool ReturnValue; // 0x0041 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
// Size: 0x0042
struct BlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    uint8_t OtherContainer[0x20]; // 0x0020 (0x0020)
    bool bCountEmptyAsMatch; // 0x0040 (0x0001)
    bool ReturnValue; // 0x0041 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
// Size: 0x0032
struct BlueprintGameplayTagLibrary_DoesContainerHaveTag_Params {
public:
    uint8_t TagContainer[0x20]; // 0x0000 (0x0020)
    uint8_t ContainerTagsMatchType; // 0x0020 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0021 (0x0007)
    uint8_t Tag[0x8]; // 0x0028 (0x0008)
    uint8_t TagMatchType; // 0x0030 (0x0001)
    bool ReturnValue; // 0x0031 (0x0001)
};

// Function: GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// Size: 0x0041
struct BlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params {
public:
    uint8_t InTagContainer[0x20]; // 0x0000 (0x0020)
    uint8_t InOutTagContainer[0x20]; // 0x0020 (0x0020)
    bool ReturnValue; // 0x0040 (0x0001)
};

// Function: GameplayTags.GameplayTagsManager.RequestGameplayTag
// Size: 0x0018
struct GameplayTagsManager_RequestGameplayTag_Params {
public:
    struct FName TagName; // 0x0000 (0x0008)
    bool ErrorIfNotFound; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    uint8_t ReturnValue[0x8]; // 0x0010 (0x0008)
};

} // namespace SDK

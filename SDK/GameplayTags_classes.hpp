#pragma once
#include "Basic.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK {

// Class: GameplayTags.EditableGameplayTagQuery
class EditableGameplayTagQuery : public Object {
public:
    struct FString UserDescription; // 0x0028 (0x0010)
    uint8_t Pad_0[0x10]; // 0x0038 (0x0010)
    class UObject* RootExpression; // 0x0048 (0x0008)
    uint8_t TagQueryExportText_Helper[0x48]; // 0x0050 (0x0048)
};

// Class: GameplayTags.EditableGameplayTagQueryExpression
class EditableGameplayTagQueryExpression : public Object {
public:
};

// Class: GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class EditableGameplayTagQueryExpression_AnyTagsMatch : public EditableGameplayTagQueryExpression {
public:
    uint8_t Tags[0x20]; // 0x0028 (0x0020)
};

// Class: GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class EditableGameplayTagQueryExpression_AllTagsMatch : public EditableGameplayTagQueryExpression {
public:
    uint8_t Tags[0x20]; // 0x0028 (0x0020)
};

// Class: GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class EditableGameplayTagQueryExpression_NoTagsMatch : public EditableGameplayTagQueryExpression {
public:
    uint8_t Tags[0x20]; // 0x0028 (0x0020)
};

// Class: GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class EditableGameplayTagQueryExpression_AnyExprMatch : public EditableGameplayTagQueryExpression {
public:
    struct TArray<uint8_t> Expressions; // 0x0028 (0x0010)
};

// Class: GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class EditableGameplayTagQueryExpression_AllExprMatch : public EditableGameplayTagQueryExpression {
public:
    struct TArray<uint8_t> Expressions; // 0x0028 (0x0010)
};

// Class: GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class EditableGameplayTagQueryExpression_NoExprMatch : public EditableGameplayTagQueryExpression {
public:
    struct TArray<uint8_t> Expressions; // 0x0028 (0x0010)
};

// Class: GameplayTags.GameplayTagAssetInterface
class GameplayTagAssetInterface : public Interface {
public:

public:
    bool HasMatchingGameplayTag(uint8_t TagToCheck);
    bool HasAnyMatchingGameplayTags(uint8_t TagContainer, bool bCountEmptyAsMatch);
    bool HasAllMatchingGameplayTags(uint8_t TagContainer, bool bCountEmptyAsMatch);
    void GetOwnedGameplayTags(uint8_t TagContainer);
};

// Class: GameplayTags.BlueprintGameplayTagLibrary
class BlueprintGameplayTagLibrary : public BlueprintFunctionLibrary {
public:

public:
    bool NotEqual_TagTag(uint8_t A, struct FString B);
    bool NotEqual_TagContainerTagContainer(uint8_t A, struct FString B);
    uint8_t MakeLiteralGameplayTag(uint8_t Value);
    uint8_t MakeGameplayTagQuery(uint8_t TagQuery);
    bool HasAllMatchingGameplayTags(uint8_t TagContainerInterface, uint8_t OtherContainer, bool bCountEmptyAsMatch);
    int32_t GetNumGameplayTagsInContainer(uint8_t TagContainer);
    bool DoGameplayTagsMatch(uint8_t TagOne, uint8_t TagTwo, uint8_t TagOneMatchType, uint8_t TagTwoMatchType);
    bool DoesTagAssetInterfaceHaveTag(uint8_t TagContainerInterface, uint8_t ContainerTagsMatchType, uint8_t Tag, uint8_t TagMatchType);
    bool DoesContainerMatchTagQuery(uint8_t TagContainer, uint8_t TagQuery);
    bool DoesContainerMatchAnyTagsInContainer(uint8_t TagContainer, uint8_t OtherContainer, bool bCountEmptyAsMatch);
    bool DoesContainerMatchAllTagsInContainer(uint8_t TagContainer, uint8_t OtherContainer, bool bCountEmptyAsMatch);
    bool DoesContainerHaveTag(uint8_t TagContainer, uint8_t ContainerTagsMatchType, uint8_t Tag, uint8_t TagMatchType);
    bool AppendGameplayTagContainers(uint8_t InTagContainer, uint8_t InOutTagContainer);
};

// Class: GameplayTags.GameplayTagsManager
class GameplayTagsManager : public Object {
public:
    uint8_t Pad_0[0xC0]; // 0x0028 (0x00C0)
    struct TArray<uint8_t> GameplayTagTables; // 0x00E8 (0x0010)

public:
    uint8_t RequestGameplayTag(struct FName TagName, bool ErrorIfNotFound);
};

// Class: GameplayTags.GameplayTagsSettings
class GameplayTagsSettings : public Object {
public:
    struct TArray<uint8_t> GameplayTags; // 0x0028 (0x0010)
};

} // namespace SDK

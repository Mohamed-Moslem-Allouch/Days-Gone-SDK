#include "Basic.hpp"
#include "GameplayTags_classes.hpp"
#include "GameplayTags_parameters.hpp"

namespace SDK {

// Function: GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
bool GameplayTagAssetInterface::HasMatchingGameplayTag(uint8_t TagToCheck) {
    static class UFunction* Func = nullptr;
    GameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms{};
    Parms.TagToCheck = TagToCheck;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
bool GameplayTagAssetInterface::HasAnyMatchingGameplayTags(uint8_t TagContainer, bool bCountEmptyAsMatch) {
    static class UFunction* Func = nullptr;
    GameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms{};
    Parms.TagContainer = TagContainer;
    Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
bool GameplayTagAssetInterface::HasAllMatchingGameplayTags(uint8_t TagContainer, bool bCountEmptyAsMatch) {
    static class UFunction* Func = nullptr;
    GameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms{};
    Parms.TagContainer = TagContainer;
    Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
void GameplayTagAssetInterface::GetOwnedGameplayTags(uint8_t TagContainer) {
    static class UFunction* Func = nullptr;
    GameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms{};
    Parms.TagContainer = TagContainer;
    ProcessEvent(Func, &Parms);
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
bool BlueprintGameplayTagLibrary::NotEqual_TagTag(uint8_t A, struct FString B) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_NotEqual_TagTag_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
bool BlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(uint8_t A, struct FString B) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params Parms{};
    Parms.A = A;
    Parms.B = B;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
uint8_t BlueprintGameplayTagLibrary::MakeLiteralGameplayTag(uint8_t Value) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params Parms{};
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
uint8_t BlueprintGameplayTagLibrary::MakeGameplayTagQuery(uint8_t TagQuery) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params Parms{};
    Parms.TagQuery = TagQuery;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
bool BlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(uint8_t TagContainerInterface, uint8_t OtherContainer, bool bCountEmptyAsMatch) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params Parms{};
    Parms.TagContainerInterface = TagContainerInterface;
    Parms.OtherContainer = OtherContainer;
    Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
int32_t BlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(uint8_t TagContainer) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params Parms{};
    Parms.TagContainer = TagContainer;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
bool BlueprintGameplayTagLibrary::DoGameplayTagsMatch(uint8_t TagOne, uint8_t TagTwo, uint8_t TagOneMatchType, uint8_t TagTwoMatchType) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params Parms{};
    Parms.TagOne = TagOne;
    Parms.TagTwo = TagTwo;
    Parms.TagOneMatchType = TagOneMatchType;
    Parms.TagTwoMatchType = TagTwoMatchType;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
bool BlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(uint8_t TagContainerInterface, uint8_t ContainerTagsMatchType, uint8_t Tag, uint8_t TagMatchType) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params Parms{};
    Parms.TagContainerInterface = TagContainerInterface;
    Parms.ContainerTagsMatchType = ContainerTagsMatchType;
    Parms.Tag = Tag;
    Parms.TagMatchType = TagMatchType;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
bool BlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(uint8_t TagContainer, uint8_t TagQuery) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params Parms{};
    Parms.TagContainer = TagContainer;
    Parms.TagQuery = TagQuery;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
bool BlueprintGameplayTagLibrary::DoesContainerMatchAnyTagsInContainer(uint8_t TagContainer, uint8_t OtherContainer, bool bCountEmptyAsMatch) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params Parms{};
    Parms.TagContainer = TagContainer;
    Parms.OtherContainer = OtherContainer;
    Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
bool BlueprintGameplayTagLibrary::DoesContainerMatchAllTagsInContainer(uint8_t TagContainer, uint8_t OtherContainer, bool bCountEmptyAsMatch) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params Parms{};
    Parms.TagContainer = TagContainer;
    Parms.OtherContainer = OtherContainer;
    Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
bool BlueprintGameplayTagLibrary::DoesContainerHaveTag(uint8_t TagContainer, uint8_t ContainerTagsMatchType, uint8_t Tag, uint8_t TagMatchType) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_DoesContainerHaveTag_Params Parms{};
    Parms.TagContainer = TagContainer;
    Parms.ContainerTagsMatchType = ContainerTagsMatchType;
    Parms.Tag = Tag;
    Parms.TagMatchType = TagMatchType;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
bool BlueprintGameplayTagLibrary::AppendGameplayTagContainers(uint8_t InTagContainer, uint8_t InOutTagContainer) {
    static class UFunction* Func = nullptr;
    BlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params Parms{};
    Parms.InTagContainer = InTagContainer;
    Parms.InOutTagContainer = InOutTagContainer;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameplayTags.GameplayTagsManager.RequestGameplayTag
uint8_t GameplayTagsManager::RequestGameplayTag(struct FName TagName, bool ErrorIfNotFound) {
    static class UFunction* Func = nullptr;
    GameplayTagsManager_RequestGameplayTag_Params Parms{};
    Parms.TagName = TagName;
    Parms.ErrorIfNotFound = ErrorIfNotFound;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK

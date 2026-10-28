#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: OnlineSubsystem.InAppPurchaseProductInfo
struct InAppPurchaseProductInfo {
    struct FString Identifier; // 0x0000 (0x0010)
    struct FString TransactionIdentifier; // 0x0010 (0x0010)
    struct FString DisplayName; // 0x0020 (0x0010)
    struct FString DisplayDescription; // 0x0030 (0x0010)
    struct FString DisplayPrice; // 0x0040 (0x0010)
    struct FString CurrencyCode; // 0x0050 (0x0010)
    struct FString CurrencySymbol; // 0x0060 (0x0010)
    struct FString DecimalSeparator; // 0x0070 (0x0010)
    struct FString GroupingSeparator; // 0x0080 (0x0010)
    struct FString ReceiptData; // 0x0090 (0x0010)
};

// ScriptStruct: OnlineSubsystem.InAppPurchaseRestoreInfo
struct InAppPurchaseRestoreInfo {
    struct FString Identifier; // 0x0000 (0x0010)
    struct FString ReceiptData; // 0x0010 (0x0010)
};

// ScriptStruct: OnlineSubsystem.NamedInterfaceDef
struct NamedInterfaceDef {
    struct FName InterfaceName; // 0x0000 (0x0008)
    struct FString InterfaceClassName; // 0x0008 (0x0010)
};

// ScriptStruct: OnlineSubsystem.NamedInterface
struct NamedInterface {
    struct FName InterfaceName; // 0x0000 (0x0008)
    class UObject* InterfaceObject; // 0x0008 (0x0008)
};

// ScriptStruct: OnlineSubsystem.InAppPurchaseProductRequest
struct InAppPurchaseProductRequest {
    struct FString ProductIdentifier; // 0x0000 (0x0010)
    bool bIsConsumable; // 0x0010 (0x0001)
};

// ScriptStruct: OnlineSubsystem.JoinabilitySettings
struct JoinabilitySettings {
    struct FName SessionName; // 0x0000 (0x0008)
    bool bPublicSearchable; // 0x0008 (0x0001)
    bool bAllowInvites; // 0x0009 (0x0001)
    bool bJoinViaPresence; // 0x000A (0x0001)
    bool bJoinViaPresenceFriendsOnly; // 0x000B (0x0001)
    int32_t MaxPlayers; // 0x000C (0x0004)
    int32_t MaxPartySize; // 0x0010 (0x0004)
};

} // namespace SDK

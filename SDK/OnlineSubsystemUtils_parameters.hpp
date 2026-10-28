#pragma once
#include "Basic.hpp"
#include "OnlineSubsystemUtils_structs.hpp"

namespace SDK {

// Function: OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// Size: 0x0020
struct AchievementBlueprintLibrary_GetCachedAchievementProgress_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FName AchievementID; // 0x0010 (0x0008)
    bool bFoundID; // 0x0018 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0019 (0x0003)
    float Progress; // 0x001C (0x0004)
};

// Function: OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// Size: 0x0069
struct AchievementBlueprintLibrary_GetCachedAchievementDescription_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FName AchievementID; // 0x0010 (0x0008)
    bool bFoundID; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    struct FText Title; // 0x0020 (0x0018)
    struct FText LockedDescription; // 0x0038 (0x0018)
    struct FText UnlockedDescription; // 0x0050 (0x0018)
    bool bHidden; // 0x0068 (0x0001)
};

// Function: OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// Size: 0x0028
struct InAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    uint8_t ProductRequest[0x18]; // 0x0008 (0x0018)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// Size: 0x0020
struct InAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    struct TArray<uint8_t> ProductIdentifiers; // 0x0008 (0x0010)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// Size: 0x0010
struct InAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// Size: 0x0015
struct LeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    struct FName StatName; // 0x0008 (0x0008)
    int32_t StatValue; // 0x0010 (0x0004)
    bool ReturnValue; // 0x0014 (0x0001)
};

// Function: OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// Size: 0x0018
struct LeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    struct FName SessionName; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// Size: 0x0018
struct LeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    struct FName StatName; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// Size: 0x0018
struct LogoutCallbackProxy_Logout_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// Size: 0x0000
struct OnlineBeaconClient_ClientOnConnected_Params {
public:
};

// Function: OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// Size: 0x0038
struct PartyBeaconClient_ServerUpdateReservationRequest_Params {
public:
    struct FString SessionId; // 0x0000 (0x0010)
    uint8_t ReservationUpdate[0x28]; // 0x0010 (0x0028)
};

// Function: OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// Size: 0x0038
struct PartyBeaconClient_ServerReservationRequest_Params {
public:
    struct FString SessionId; // 0x0000 (0x0010)
    uint8_t Reservation[0x28]; // 0x0010 (0x0028)
};

// Function: OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// Size: 0x0010
struct PartyBeaconClient_ServerCancelReservationRequest_Params {
public:
    uint8_t PartyLeader[0x10]; // 0x0000 (0x0010)
};

// Function: OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// Size: 0x0004
struct PartyBeaconClient_ClientSendReservationUpdates_Params {
public:
    int32_t NumRemainingReservations; // 0x0000 (0x0004)
};

// Function: OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// Size: 0x0000
struct PartyBeaconClient_ClientSendReservationFull_Params {
public:
};

// Function: OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// Size: 0x0001
struct PartyBeaconClient_ClientReservationResponse_Params {
public:
    uint8_t ReservationResponse; // 0x0000 (0x0001)
};

// Function: OnlineSubsystemUtils.TestBeaconClient.ServerPong
// Size: 0x0000
struct TestBeaconClient_ServerPong_Params {
public:
};

// Function: OnlineSubsystemUtils.TestBeaconClient.ClientPing
// Size: 0x0000
struct TestBeaconClient_ClientPing_Params {
public:
};

// Function: OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
// Size: 0x0000
struct OnlineBlueprintCallProxyBase_Activate_Params {
public:
};

// Function: OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// Size: 0x0018
struct AchievementQueryCallbackProxy_CacheAchievements_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// Size: 0x0018
struct AchievementQueryCallbackProxy_CacheAchievementDescriptions_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// Size: 0x0028
struct AchievementWriteCallbackProxy_WriteAchievementProgress_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FName AchievementName; // 0x0010 (0x0008)
    float Progress; // 0x0018 (0x0004)
    int32_t UserTag; // 0x001C (0x0004)
    class UObject* ReturnValue; // 0x0020 (0x0008)
};

// Function: OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// Size: 0x0018
struct ConnectionCallbackProxy_ConnectToService_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// Size: 0x0020
struct CreateSessionCallbackProxy_CreateSession_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    int32_t PublicConnections; // 0x0010 (0x0004)
    bool bUseLAN; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// Size: 0x0018
struct DestroySessionCallbackProxy_DestroySession_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// Size: 0x0040
struct EndMatchCallbackProxy_EndMatch_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    uint8_t MatchActor[0x10]; // 0x0010 (0x0010)
    struct FString MatchID; // 0x0020 (0x0010)
    uint8_t LocalPlayerOutcome; // 0x0030 (0x0001)
    uint8_t OtherPlayersOutcome; // 0x0031 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0032 (0x0006)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// Size: 0x0038
struct EndTurnCallbackProxy_EndTurn_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FString MatchID; // 0x0010 (0x0010)
    uint8_t TurnBasedMatchInterface[0x10]; // 0x0020 (0x0010)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// Size: 0x00C8
struct FindSessionsCallbackProxy_GetServerName_Params {
public:
    uint8_t Result[0xB8]; // 0x0000 (0x00B8)
    struct FString ReturnValue; // 0x00B8 (0x0010)
};

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// Size: 0x00BC
struct FindSessionsCallbackProxy_GetPingInMs_Params {
public:
    uint8_t Result[0xB8]; // 0x0000 (0x00B8)
    int32_t ReturnValue; // 0x00B8 (0x0004)
};

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// Size: 0x00BC
struct FindSessionsCallbackProxy_GetMaxPlayers_Params {
public:
    uint8_t Result[0xB8]; // 0x0000 (0x00B8)
    int32_t ReturnValue; // 0x00B8 (0x0004)
};

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// Size: 0x00BC
struct FindSessionsCallbackProxy_GetCurrentPlayers_Params {
public:
    uint8_t Result[0xB8]; // 0x0000 (0x00B8)
    int32_t ReturnValue; // 0x00B8 (0x0004)
};

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// Size: 0x0020
struct FindSessionsCallbackProxy_FindSessions_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    int32_t MaxResults; // 0x0010 (0x0004)
    bool bUseLAN; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// Size: 0x0038
struct FindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    uint8_t MatchActor[0x10]; // 0x0010 (0x0010)
    int32_t MinPlayers; // 0x0020 (0x0004)
    int32_t MaxPlayers; // 0x0024 (0x0004)
    int32_t PlayerGroup; // 0x0028 (0x0004)
    bool ShowExistingMatches; // 0x002C (0x0001)
    uint8_t Pad_0[0x3]; // 0x002D (0x0003)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// Size: 0x00D0
struct JoinSessionCallbackProxy_JoinSession_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    uint8_t SearchResult[0xB8]; // 0x0010 (0x00B8)
    class UObject* ReturnValue; // 0x00C8 (0x0008)
};

// Function: OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// Size: 0x0030
struct QuitMatchCallbackProxy_QuitMatch_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FString MatchID; // 0x0010 (0x0010)
    uint8_t Outcome; // 0x0020 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0021 (0x0003)
    int32_t TurnTimeoutInSeconds; // 0x0024 (0x0004)
    class UObject* ReturnValue; // 0x0028 (0x0008)
};

// Function: OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// Size: 0x0018
struct ShowLoginUICallbackProxy_ShowExternalLoginUI_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* InPlayerController; // 0x0008 (0x0008)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// Size: 0x0018
struct TurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    class UObject* Object; // 0x0010 (0x0008)
};

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// Size: 0x0038
struct TurnBasedBlueprintLibrary_GetPlayerDisplayName_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FString MatchID; // 0x0010 (0x0010)
    int32_t PlayerIndex; // 0x0020 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0024 (0x0004)
    struct FString PlayerDisplayName; // 0x0028 (0x0010)
};

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// Size: 0x0024
struct TurnBasedBlueprintLibrary_GetMyPlayerIndex_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FString MatchID; // 0x0010 (0x0010)
    int32_t PlayerIndex; // 0x0020 (0x0004)
};

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// Size: 0x0021
struct TurnBasedBlueprintLibrary_GetIsMyTurn_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* PlayerController; // 0x0008 (0x0008)
    struct FString MatchID; // 0x0010 (0x0010)
    bool bIsMyTurn; // 0x0020 (0x0001)
};

} // namespace SDK

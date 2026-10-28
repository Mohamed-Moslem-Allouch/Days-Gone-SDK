#pragma once
#include "Basic.hpp"
#include "OnlineSubsystemUtils_structs.hpp"

namespace SDK {

// Class: OnlineSubsystemUtils.AchievementBlueprintLibrary
class AchievementBlueprintLibrary : public BlueprintFunctionLibrary {
public:

public:
    void GetCachedAchievementProgress(class UObject* WorldContextObject, class UObject* PlayerController, struct FName AchievementID, bool bFoundID, float Progress);
    void GetCachedAchievementDescription(class UObject* WorldContextObject, class UObject* PlayerController, struct FName AchievementID, bool bFoundID, struct FText Title, struct FText LockedDescription, struct FText UnlockedDescription, bool bHidden);
};

// Class: OnlineSubsystemUtils.InAppPurchaseCallbackProxy
class InAppPurchaseCallbackProxy : public Object {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CreateProxyObjectForInAppPurchase(class UObject* PlayerController, uint8_t ProductRequest);
};

// Class: OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
class InAppPurchaseQueryCallbackProxy : public Object {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CreateProxyObjectForInAppPurchaseQuery(class UObject* PlayerController, struct TArray<uint8_t> ProductIdentifiers);
};

// Class: OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
class InAppPurchaseRestoreCallbackProxy : public Object {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CreateProxyObjectForInAppPurchaseRestore(class UObject* PlayerController);
};

// Class: OnlineSubsystemUtils.IpConnection
class IpConnection : public NetConnection {
public:
};

// Class: OnlineSubsystemUtils.IpNetDriver
class IpNetDriver : public NetDriver {
public:
    uint8_t Pad_0[0x300]; // 0x0028 (0x0300)
    bool LogPortUnreach; // 0x0328 (0x0001)
    bool AllowPlayerPortUnreach; // 0x0328 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0329 (0x0003)
    uint8_t MaxPortCountToTry[0x4]; // 0x032C (0x0004)
};

// Class: OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class LeaderboardBlueprintLibrary : public BlueprintFunctionLibrary {
public:

public:
    bool WriteLeaderboardInteger(class UObject* PlayerController, struct FName StatName, int32_t StatValue);
};

// Class: OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class LeaderboardFlushCallbackProxy : public Object {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CreateProxyObjectForFlush(class UObject* PlayerController, struct FName SessionName);
};

// Class: OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class LeaderboardQueryCallbackProxy : public Object {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CreateProxyObjectForIntQuery(class UObject* PlayerController, struct FName StatName);
};

// Class: OnlineSubsystemUtils.LogoutCallbackProxy
class LogoutCallbackProxy : public BlueprintAsyncActionBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* Logout(class UObject* WorldContextObject, class UObject* PlayerController);
};

// Class: OnlineSubsystemUtils.OnlineBeacon
class OnlineBeacon : public Actor {
public:
    uint8_t Pad_0[0x328]; // 0x0028 (0x0328)
    float BeaconConnectionInitialTimeout; // 0x0350 (0x0004)
    float BeaconConnectionTimeout; // 0x0354 (0x0004)
    class UObject* NetDriver; // 0x0358 (0x0008)
};

// Class: OnlineSubsystemUtils.OnlineBeaconClient
class OnlineBeaconClient : public OnlineBeacon {
public:
    uint8_t Pad_0[0x348]; // 0x0028 (0x0348)
    class UObject* BeaconOwner; // 0x0370 (0x0008)
    class UObject* BeaconConnection; // 0x0378 (0x0008)
    uint8_t ConnectionState; // 0x0380 (0x0001)

public:
    void ClientOnConnected();
};

// Class: OnlineSubsystemUtils.PartyBeaconState
class PartyBeaconState : public Object {
public:
    struct FName SessionName; // 0x0028 (0x0008)
    int32_t NumConsumedReservations; // 0x0030 (0x0004)
    int32_t MaxReservations; // 0x0034 (0x0004)
    int32_t NumTeams; // 0x0038 (0x0004)
    int32_t NumPlayersPerTeam; // 0x003C (0x0004)
    int32_t ReservedHostTeamNum; // 0x0040 (0x0004)
    int32_t ForceTeamNum; // 0x0044 (0x0004)
    struct TArray<uint8_t> Reservations; // 0x0048 (0x0010)
};

// Class: OnlineSubsystemUtils.PartyBeaconClient
class PartyBeaconClient : public OnlineBeaconClient {
public:
    uint8_t Pad_0[0x478]; // 0x0028 (0x0478)
    struct FString DestSessionId; // 0x04A0 (0x0010)
    uint8_t PendingReservation[0x28]; // 0x04B0 (0x0028)
    uint8_t RequestType; // 0x04D8 (0x0001)
    bool bPendingReservationSent; // 0x04D9 (0x0001)
    bool bCancelReservation; // 0x04DA (0x0001)

public:
    void ServerUpdateReservationRequest(struct FString SessionId, uint8_t ReservationUpdate);
    void ServerReservationRequest(struct FString SessionId, uint8_t Reservation);
    void ServerCancelReservationRequest(uint8_t PartyLeader);
    void ClientSendReservationUpdates(int32_t NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(uint8_t ReservationResponse);
};

// Class: OnlineSubsystemUtils.TestBeaconClient
class TestBeaconClient : public OnlineBeaconClient {
public:

public:
    void ServerPong();
    void ClientPing();
};

// Class: OnlineSubsystemUtils.OnlineBeaconHost
class OnlineBeaconHost : public OnlineBeacon {
public:
    uint8_t Pad_0[0x348]; // 0x0028 (0x0348)
    int32_t ListenPort; // 0x0370 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0374 (0x0004)
    struct TArray<uint8_t> ClientActors; // 0x0378 (0x0010)
};

// Class: OnlineSubsystemUtils.OnlineBeaconHostObject
class OnlineBeaconHostObject : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    struct FString BeaconTypeName; // 0x0348 (0x0010)
    class UClass* ClientBeaconActorClass; // 0x0358 (0x0008)
    struct TArray<uint8_t> ClientActors; // 0x0360 (0x0010)
};

// Class: OnlineSubsystemUtils.PartyBeaconHost
class PartyBeaconHost : public OnlineBeaconHostObject {
public:
    uint8_t Pad_0[0x348]; // 0x0028 (0x0348)
    class UObject* State; // 0x0370 (0x0008)
    uint8_t Pad_1[0x148]; // 0x0378 (0x0148)
    bool bNoTimeouts; // 0x04C0 (0x0001)
    uint8_t Pad_2[0x3]; // 0x04C1 (0x0003)
    float SessionTimeoutSecs; // 0x04C4 (0x0004)
    float TravelSessionTimeoutSecs; // 0x04C8 (0x0004)
};

// Class: OnlineSubsystemUtils.TestBeaconHost
class TestBeaconHost : public OnlineBeaconHostObject {
public:
};

// Class: OnlineSubsystemUtils.OnlineBlueprintCallProxyBase
class OnlineBlueprintCallProxyBase : public Object {
public:

public:
    void Activate();
};

// Class: OnlineSubsystemUtils.AchievementQueryCallbackProxy
class AchievementQueryCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CacheAchievements(class UObject* WorldContextObject, class UObject* PlayerController);
    class UObject* CacheAchievementDescriptions(class UObject* WorldContextObject, class UObject* PlayerController);
};

// Class: OnlineSubsystemUtils.AchievementWriteCallbackProxy
class AchievementWriteCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* WriteAchievementProgress(class UObject* WorldContextObject, class UObject* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag);
};

// Class: OnlineSubsystemUtils.ConnectionCallbackProxy
class ConnectionCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* ConnectToService(class UObject* WorldContextObject, class UObject* PlayerController);
};

// Class: OnlineSubsystemUtils.CreateSessionCallbackProxy
class CreateSessionCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* CreateSession(class UObject* WorldContextObject, class UObject* PlayerController, int32_t PublicConnections, bool bUseLAN);
};

// Class: OnlineSubsystemUtils.DestroySessionCallbackProxy
class DestroySessionCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* DestroySession(class UObject* WorldContextObject, class UObject* PlayerController);
};

// Class: OnlineSubsystemUtils.EndMatchCallbackProxy
class EndMatchCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* EndMatch(class UObject* WorldContextObject, class UObject* PlayerController, uint8_t MatchActor, struct FString MatchID, uint8_t LocalPlayerOutcome, uint8_t OtherPlayersOutcome);
};

// Class: OnlineSubsystemUtils.EndTurnCallbackProxy
class EndTurnCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* EndTurn(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, uint8_t TurnBasedMatchInterface);
};

// Class: OnlineSubsystemUtils.FindSessionsCallbackProxy
class FindSessionsCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    struct FString GetServerName(uint8_t Result);
    int32_t GetPingInMs(uint8_t Result);
    int32_t GetMaxPlayers(uint8_t Result);
    int32_t GetCurrentPlayers(uint8_t Result);
    class UObject* FindSessions(class UObject* WorldContextObject, class UObject* PlayerController, int32_t MaxResults, bool bUseLAN);
};

// Class: OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class FindTurnBasedMatchCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* FindTurnBasedMatch(class UObject* WorldContextObject, class UObject* PlayerController, uint8_t MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
};

// Class: OnlineSubsystemUtils.JoinSessionCallbackProxy
class JoinSessionCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* JoinSession(class UObject* WorldContextObject, class UObject* PlayerController, uint8_t SearchResult);
};

// Class: OnlineSubsystemUtils.QuitMatchCallbackProxy
class QuitMatchCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* QuitMatch(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, uint8_t Outcome, int32_t TurnTimeoutInSeconds);
};

// Class: OnlineSubsystemUtils.OnlinePIESettings
class OnlinePIESettings : public DeveloperSettings {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bOnlinePIEEnabled; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    struct TArray<uint8_t> Logins; // 0x0040 (0x0010)
};

// Class: OnlineSubsystemUtils.OnlineSessionClient
class OnlineSessionClient : public OnlineSession {
public:
    uint8_t Pad_0[0x1F8]; // 0x0028 (0x01F8)
    bool bIsFromInvite; // 0x0220 (0x0001)
    bool bHandlingDisconnect; // 0x0221 (0x0001)
};

// Class: OnlineSubsystemUtils.ShowLoginUICallbackProxy
class ShowLoginUICallbackProxy : public BlueprintAsyncActionBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFailure[0x10]; // 0x0038 (0x0010)

public:
    class UObject* ShowExternalLoginUI(class UObject* WorldContextObject, class UObject* InPlayerController);
};

// Class: OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class TurnBasedBlueprintLibrary : public BlueprintFunctionLibrary {
public:

public:
    void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class UObject* PlayerController, class UObject* Object);
    void GetPlayerDisplayName(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString PlayerDisplayName);
    void GetMyPlayerIndex(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, int32_t PlayerIndex);
    void GetIsMyTurn(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, bool bIsMyTurn);
};

} // namespace SDK

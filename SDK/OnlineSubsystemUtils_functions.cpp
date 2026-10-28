#include "Basic.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "OnlineSubsystemUtils_parameters.hpp"

namespace SDK {

// Function: OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
void AchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class UObject* PlayerController, struct FName AchievementID, bool bFoundID, float Progress) {
    static class UFunction* Func = nullptr;
    AchievementBlueprintLibrary_GetCachedAchievementProgress_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.AchievementID = AchievementID;
    Parms.bFoundID = bFoundID;
    Parms.Progress = Progress;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
void AchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class UObject* PlayerController, struct FName AchievementID, bool bFoundID, struct FText Title, struct FText LockedDescription, struct FText UnlockedDescription, bool bHidden) {
    static class UFunction* Func = nullptr;
    AchievementBlueprintLibrary_GetCachedAchievementDescription_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.AchievementID = AchievementID;
    Parms.bFoundID = bFoundID;
    Parms.Title = Title;
    Parms.LockedDescription = LockedDescription;
    Parms.UnlockedDescription = UnlockedDescription;
    Parms.bHidden = bHidden;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
class UObject* InAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class UObject* PlayerController, uint8_t ProductRequest) {
    static class UFunction* Func = nullptr;
    InAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params Parms{};
    Parms.PlayerController = PlayerController;
    Parms.ProductRequest = ProductRequest;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
class UObject* InAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class UObject* PlayerController, struct TArray<uint8_t> ProductIdentifiers) {
    static class UFunction* Func = nullptr;
    InAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params Parms{};
    Parms.PlayerController = PlayerController;
    Parms.ProductIdentifiers = ProductIdentifiers;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
class UObject* InAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    InAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params Parms{};
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
bool LeaderboardBlueprintLibrary::WriteLeaderboardInteger(class UObject* PlayerController, struct FName StatName, int32_t StatValue) {
    static class UFunction* Func = nullptr;
    LeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params Parms{};
    Parms.PlayerController = PlayerController;
    Parms.StatName = StatName;
    Parms.StatValue = StatValue;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
class UObject* LeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class UObject* PlayerController, struct FName SessionName) {
    static class UFunction* Func = nullptr;
    LeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params Parms{};
    Parms.PlayerController = PlayerController;
    Parms.SessionName = SessionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
class UObject* LeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class UObject* PlayerController, struct FName StatName) {
    static class UFunction* Func = nullptr;
    LeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params Parms{};
    Parms.PlayerController = PlayerController;
    Parms.StatName = StatName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.LogoutCallbackProxy.Logout
class UObject* LogoutCallbackProxy::Logout(class UObject* WorldContextObject, class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    LogoutCallbackProxy_Logout_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
void OnlineBeaconClient::ClientOnConnected() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
void PartyBeaconClient::ServerUpdateReservationRequest(struct FString SessionId, uint8_t ReservationUpdate) {
    static class UFunction* Func = nullptr;
    PartyBeaconClient_ServerUpdateReservationRequest_Params Parms{};
    Parms.SessionId = SessionId;
    Parms.ReservationUpdate = ReservationUpdate;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
void PartyBeaconClient::ServerReservationRequest(struct FString SessionId, uint8_t Reservation) {
    static class UFunction* Func = nullptr;
    PartyBeaconClient_ServerReservationRequest_Params Parms{};
    Parms.SessionId = SessionId;
    Parms.Reservation = Reservation;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
void PartyBeaconClient::ServerCancelReservationRequest(uint8_t PartyLeader) {
    static class UFunction* Func = nullptr;
    PartyBeaconClient_ServerCancelReservationRequest_Params Parms{};
    Parms.PartyLeader = PartyLeader;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
void PartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
    static class UFunction* Func = nullptr;
    PartyBeaconClient_ClientSendReservationUpdates_Params Parms{};
    Parms.NumRemainingReservations = NumRemainingReservations;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
void PartyBeaconClient::ClientSendReservationFull() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
void PartyBeaconClient::ClientReservationResponse(uint8_t ReservationResponse) {
    static class UFunction* Func = nullptr;
    PartyBeaconClient_ClientReservationResponse_Params Parms{};
    Parms.ReservationResponse = ReservationResponse;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.TestBeaconClient.ServerPong
void TestBeaconClient::ServerPong() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: OnlineSubsystemUtils.TestBeaconClient.ClientPing
void TestBeaconClient::ClientPing() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
void OnlineBlueprintCallProxyBase::Activate() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
class UObject* AchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    AchievementQueryCallbackProxy_CacheAchievements_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
class UObject* AchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    AchievementQueryCallbackProxy_CacheAchievementDescriptions_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
class UObject* AchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class UObject* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag) {
    static class UFunction* Func = nullptr;
    AchievementWriteCallbackProxy_WriteAchievementProgress_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.AchievementName = AchievementName;
    Parms.Progress = Progress;
    Parms.UserTag = UserTag;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
class UObject* ConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    ConnectionCallbackProxy_ConnectToService_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
class UObject* CreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class UObject* PlayerController, int32_t PublicConnections, bool bUseLAN) {
    static class UFunction* Func = nullptr;
    CreateSessionCallbackProxy_CreateSession_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.PublicConnections = PublicConnections;
    Parms.bUseLAN = bUseLAN;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
class UObject* DestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    DestroySessionCallbackProxy_DestroySession_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
class UObject* EndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class UObject* PlayerController, uint8_t MatchActor, struct FString MatchID, uint8_t LocalPlayerOutcome, uint8_t OtherPlayersOutcome) {
    static class UFunction* Func = nullptr;
    EndMatchCallbackProxy_EndMatch_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchActor = MatchActor;
    Parms.MatchID = MatchID;
    Parms.LocalPlayerOutcome = LocalPlayerOutcome;
    Parms.OtherPlayersOutcome = OtherPlayersOutcome;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
class UObject* EndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, uint8_t TurnBasedMatchInterface) {
    static class UFunction* Func = nullptr;
    EndTurnCallbackProxy_EndTurn_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchID = MatchID;
    Parms.TurnBasedMatchInterface = TurnBasedMatchInterface;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct FString FindSessionsCallbackProxy::GetServerName(uint8_t Result) {
    static class UFunction* Func = nullptr;
    FindSessionsCallbackProxy_GetServerName_Params Parms{};
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
int32_t FindSessionsCallbackProxy::GetPingInMs(uint8_t Result) {
    static class UFunction* Func = nullptr;
    FindSessionsCallbackProxy_GetPingInMs_Params Parms{};
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
int32_t FindSessionsCallbackProxy::GetMaxPlayers(uint8_t Result) {
    static class UFunction* Func = nullptr;
    FindSessionsCallbackProxy_GetMaxPlayers_Params Parms{};
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
int32_t FindSessionsCallbackProxy::GetCurrentPlayers(uint8_t Result) {
    static class UFunction* Func = nullptr;
    FindSessionsCallbackProxy_GetCurrentPlayers_Params Parms{};
    Parms.Result = Result;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
class UObject* FindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class UObject* PlayerController, int32_t MaxResults, bool bUseLAN) {
    static class UFunction* Func = nullptr;
    FindSessionsCallbackProxy_FindSessions_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MaxResults = MaxResults;
    Parms.bUseLAN = bUseLAN;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
class UObject* FindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class UObject* PlayerController, uint8_t MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches) {
    static class UFunction* Func = nullptr;
    FindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchActor = MatchActor;
    Parms.MinPlayers = MinPlayers;
    Parms.MaxPlayers = MaxPlayers;
    Parms.PlayerGroup = PlayerGroup;
    Parms.ShowExistingMatches = ShowExistingMatches;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
class UObject* JoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class UObject* PlayerController, uint8_t SearchResult) {
    static class UFunction* Func = nullptr;
    JoinSessionCallbackProxy_JoinSession_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.SearchResult = SearchResult;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
class UObject* QuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, uint8_t Outcome, int32_t TurnTimeoutInSeconds) {
    static class UFunction* Func = nullptr;
    QuitMatchCallbackProxy_QuitMatch_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchID = MatchID;
    Parms.Outcome = Outcome;
    Parms.TurnTimeoutInSeconds = TurnTimeoutInSeconds;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
class UObject* ShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class UObject* InPlayerController) {
    static class UFunction* Func = nullptr;
    ShowLoginUICallbackProxy_ShowExternalLoginUI_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.InPlayerController = InPlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
void TurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class UObject* PlayerController, class UObject* Object) {
    static class UFunction* Func = nullptr;
    TurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.Object = Object;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
void TurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString PlayerDisplayName) {
    static class UFunction* Func = nullptr;
    TurnBasedBlueprintLibrary_GetPlayerDisplayName_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchID = MatchID;
    Parms.PlayerIndex = PlayerIndex;
    Parms.PlayerDisplayName = PlayerDisplayName;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
void TurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, int32_t PlayerIndex) {
    static class UFunction* Func = nullptr;
    TurnBasedBlueprintLibrary_GetMyPlayerIndex_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchID = MatchID;
    Parms.PlayerIndex = PlayerIndex;
    ProcessEvent(Func, &Parms);
}

// Function: OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
void TurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class UObject* PlayerController, struct FString MatchID, bool bIsMyTurn) {
    static class UFunction* Func = nullptr;
    TurnBasedBlueprintLibrary_GetIsMyTurn_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.PlayerController = PlayerController;
    Parms.MatchID = MatchID;
    Parms.bIsMyTurn = bIsMyTurn;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

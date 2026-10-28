#pragma once
#include "Basic.hpp"
#include "GameplayDebugger_structs.hpp"

namespace SDK {

// Class: GameplayDebugger.GameplayDebuggingComponent
class GameplayDebuggingComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5B0]; // 0x0028 (0x05B0)
    struct FString DebugComponentClassName; // 0x05D8 (0x0010)
    int32_t ShowExtendedInformatiomCounter; // 0x05E8 (0x0004)
    uint8_t Pad_1[0x4]; // 0x05EC (0x0004)
    struct TArray<uint8_t> ReplicateViewDataCounters; // 0x05F0 (0x0010)
    struct FString ControllerName; // 0x0600 (0x0010)
    struct FString pawnName; // 0x0610 (0x0010)
    struct FString PawnClass; // 0x0620 (0x0010)
    struct FString DebugIcon; // 0x0630 (0x0010)
    struct FString MovementBaseInfo; // 0x0640 (0x0010)
    struct FString MovementModeInfo; // 0x0650 (0x0010)
    struct FString PathFollowingInfo; // 0x0660 (0x0010)
    struct FString CurrentAITask; // 0x0670 (0x0010)
    struct FString CurrentAIState; // 0x0680 (0x0010)
    struct FString CurrentAIAssets; // 0x0690 (0x0010)
    struct FString GameplayTasksState; // 0x06A0 (0x0010)
    struct FString NavDataInfo; // 0x06B0 (0x0010)
    struct FString AbilityInfo; // 0x06C0 (0x0010)
    struct FString MontageInfo; // 0x06D0 (0x0010)
    struct FString BrainComponentName; // 0x06E0 (0x0010)
    struct FString BrainComponentString; // 0x06F0 (0x0010)
    struct TArray<uint8_t> BlackboardRepData; // 0x0700 (0x0010)
    uint8_t Pad_2[0x10]; // 0x0710 (0x0010)
    struct TArray<uint8_t> PathPoints; // 0x0720 (0x0010)
    struct TArray<uint8_t> PathCorridorData; // 0x0730 (0x0010)
    uint8_t Pad_3[0x10]; // 0x0740 (0x0010)
    struct TArray<uint8_t> NavmeshRepData; // 0x0750 (0x0010)
    struct TArray<uint8_t> EQSRepData; // 0x0760 (0x0010)
    int32_t NextPathPointIndex; // 0x0770 (0x0004)
    bool bIsUsingPathFollowing; // 0x0774 (0x0001)
    bool bIsUsingCharacter; // 0x0774 (0x0001)
    bool bIsUsingBehaviorTree; // 0x0774 (0x0001)
    bool bIsUsingAbilities; // 0x0774 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0775 (0x0003)
    struct FString PerceptionLegend; // 0x0778 (0x0010)
    float DistanceFromPlayer; // 0x0788 (0x0004)
    float DistanceFromSensor; // 0x078C (0x0004)
    uint8_t SensingComponentLocation[0xC]; // 0x0790 (0x000C)
    uint8_t Pad_5[0x4]; // 0x079C (0x0004)
    struct TArray<uint8_t> PerceptionShapeElements; // 0x07A0 (0x0010)
    class UObject* TargetActor; // 0x07B0 (0x0008)
    uint8_t Pad_6[0x20]; // 0x07B8 (0x0020)
    uint8_t ActivationCounter; // 0x07D8 (0x0001)

public:
    void ServerReplicateData(uint8_t InMessage, uint8_t DataView);
    void ServerDiscardNavmeshData();
    void ServerCollectNavmeshData(uint8_t TargetLocation);
    void OnRep_UpdateNavmesh();
    void OnRep_UpdateEQS();
    void OnRep_UpdateBlackboard();
    void OnRep_PathCorridorData();
    void OnRep_ActivationCounter();
    void OnCycleDetailsView();
    void ClientEnableTargetSelection(bool bEnable);
};

// Class: GameplayDebugger.GameplayDebuggingHUDComponent
class GameplayDebuggingHUDComponent : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    float MenuStartX; // 0x0348 (0x0004)
    float MenuStartY; // 0x034C (0x0004)
    float DebugInfoStartX; // 0x0350 (0x0004)
    float DebugInfoStartY; // 0x0354 (0x0004)
    class UObject* Canvas; // 0x0358 (0x0008)
    class UObject* PlayerOwner; // 0x0360 (0x0008)
};

// Class: GameplayDebugger.GameplayDebuggerSettings
class GameplayDebuggerSettings : public Object {
public:
    uint8_t CustomViewNames[0x50]; // 0x0028 (0x0050)
    bool OverHead; // 0x0078 (0x0001)
    bool Basic; // 0x0079 (0x0001)
    bool BehaviorTree; // 0x007A (0x0001)
    bool EQS; // 0x007B (0x0001)
    bool EnableEQSOnHUD; // 0x007C (0x0001)
    uint8_t Pad_0[0x3]; // 0x007D (0x0003)
    int32_t ActiveEQSIndex; // 0x0080 (0x0004)
    bool Perception; // 0x0084 (0x0001)
    bool GameView1; // 0x0085 (0x0001)
    bool GameView2; // 0x0086 (0x0001)
    bool GameView3; // 0x0087 (0x0001)
    bool GameView4; // 0x0088 (0x0001)
    bool GameView5; // 0x0089 (0x0001)
};

// Class: GameplayDebugger.GameplayDebuggingControllerComponent
class GameplayDebuggingControllerComponent : public ActorComponent {
public:
    uint8_t Pad_0[0xA8]; // 0x0028 (0x00A8)
    class UObject* OnDebugAIHUD; // 0x00D0 (0x0008)
    class UObject* DebugAITargetActor; // 0x00D8 (0x0008)
    class UObject* AIDebugViewInputComponent; // 0x00E0 (0x0008)
    class UObject* DebugCameraInputComponent; // 0x00E8 (0x0008)
    uint8_t Pad_1[0x28]; // 0x00F0 (0x0028)
    uint8_t ActivationKey[0x20]; // 0x0118 (0x0020)
    uint8_t CategoryZeroBind[0x20]; // 0x0138 (0x0020)
    uint8_t CategoryOneBind[0x20]; // 0x0158 (0x0020)
    uint8_t CategoryTwoBind[0x20]; // 0x0178 (0x0020)
    uint8_t CategoryThreeBind[0x20]; // 0x0198 (0x0020)
    uint8_t CategoryFourBind[0x20]; // 0x01B8 (0x0020)
    uint8_t CategoryFiveBind[0x20]; // 0x01D8 (0x0020)
    uint8_t CategorySixBind[0x20]; // 0x01F8 (0x0020)
    uint8_t CategorySevenBind[0x20]; // 0x0218 (0x0020)
    uint8_t CategoryEightBind[0x20]; // 0x0238 (0x0020)
    uint8_t CategoryNineBind[0x20]; // 0x0258 (0x0020)
    uint8_t CycleDetailsViewBind[0x20]; // 0x0278 (0x0020)
    uint8_t Pad_2[0x20]; // 0x0298 (0x0020)
    uint8_t DebugCameraBind[0x20]; // 0x02B8 (0x0020)
    uint8_t OnScreenDebugMessagesBind[0x20]; // 0x02D8 (0x0020)
    uint8_t GameHUDBind[0x20]; // 0x02F8 (0x0020)
};

// Class: GameplayDebugger.GaneplayDebuggerProxyHUD
class GaneplayDebuggerProxyHUD : public HUD {
public:
};

// Class: GameplayDebugger.GameplayDebuggingReplicator
class GameplayDebuggingReplicator : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    struct FString DebugComponentClassName; // 0x0348 (0x0010)
    struct FString DebugComponentHUDClassName; // 0x0358 (0x0010)
    struct FString DebugComponentControllerClassName; // 0x0368 (0x0010)
    int32_t MaxEQSQueries; // 0x0378 (0x0004)
    uint8_t Pad_1[0x4]; // 0x037C (0x0004)
    class UObject* DebugComponent; // 0x0380 (0x0008)
    class UObject* LocalPlayerOwner; // 0x0388 (0x0008)
    class UObject* LastSelectedActorToDebug; // 0x0390 (0x0008)
    bool bIsGlobalInWorld; // 0x0398 (0x0001)
    bool bAutoActivate; // 0x0399 (0x0001)
    bool OverHead; // 0x039A (0x0001)
    bool Basic; // 0x039B (0x0001)
    bool BehaviorTree; // 0x039C (0x0001)
    bool EQS; // 0x039D (0x0001)
    bool EnableEQSOnHUD; // 0x039E (0x0001)
    uint8_t Pad_2[0x1]; // 0x039F (0x0001)
    int32_t ActiveEQSIndex; // 0x03A0 (0x0004)
    bool Perception; // 0x03A4 (0x0001)
    bool GameView1; // 0x03A5 (0x0001)
    bool GameView2; // 0x03A6 (0x0001)
    bool GameView3; // 0x03A7 (0x0001)
    bool GameView4; // 0x03A8 (0x0001)
    bool GameView5; // 0x03A9 (0x0001)
    uint8_t Pad_3[0x6]; // 0x03AA (0x0006)
    class UObject* DefaultTexture_Red; // 0x03B0 (0x0008)
    class UObject* DefaultTexture_Green; // 0x03B8 (0x0008)

public:
    void ServerSetActorToDebug(class UObject* InActor);
    void ServerReplicateMessage(class UObject* Actor, uint8_t InMessage, uint8_t DataView);
    void OnRep_AutoActivate();
    void ClientReplicateMessage(class UObject* Actor, uint8_t InMessage, uint8_t DataView);
    void ClientEnableTargetSelection(bool bEnable, class UObject* Context);
    void ClientAutoActivate();
};

} // namespace SDK

#pragma once
#include "Basic.hpp"
#include "GameLiveStreaming_structs.hpp"

namespace SDK {

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
// Size: 0x0000
struct GameLiveStreamingFunctionLibrary_StopWebCam_Params {
public:
};

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// Size: 0x0000
struct GameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params {
public:
};

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
// Size: 0x000A
struct GameLiveStreamingFunctionLibrary_StartWebCam_Params {
public:
    int32_t DesiredWebCamWidth; // 0x0000 (0x0004)
    int32_t DesiredWebCamHeight; // 0x0004 (0x0004)
    bool bMirrorWebCamImage; // 0x0008 (0x0001)
    bool bDrawSimpleWebCamVideo; // 0x0009 (0x0001)
};

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// Size: 0x0040
struct GameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params {
public:
    struct FString LoginUserName; // 0x0000 (0x0010)
    struct FString LoginPassword; // 0x0010 (0x0010)
    int32_t FrameRate; // 0x0020 (0x0004)
    float ScreenScaling; // 0x0024 (0x0004)
    bool bStartWebCam; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    int32_t DesiredWebCamWidth; // 0x002C (0x0004)
    int32_t DesiredWebCamHeight; // 0x0030 (0x0004)
    bool bMirrorWebCamImage; // 0x0034 (0x0001)
    bool bDrawSimpleWebCamVideo; // 0x0035 (0x0001)
    bool bCaptureAudioFromComputer; // 0x0036 (0x0001)
    bool bCaptureAudioFromMicrophone; // 0x0037 (0x0001)
    class UObject* CoverUpImage; // 0x0038 (0x0008)
};

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
// Size: 0x0001
struct GameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// Size: 0x0001
struct GameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// Size: 0x0018
struct QueryLiveStreamsCallbackProxy_QueryLiveStreams_Params {
public:
    struct FString GameName; // 0x0000 (0x0010)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

} // namespace SDK

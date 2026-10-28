#pragma once
#include "Basic.hpp"
#include "GameLiveStreaming_structs.hpp"

namespace SDK {

// Class: GameLiveStreaming.GameLiveStreamingFunctionLibrary
class GameLiveStreamingFunctionLibrary : public BlueprintFunctionLibrary {
public:

public:
    void StopWebCam();
    void StopBroadcastingGame();
    void StartWebCam(int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo);
    void StartBroadcastingGame(struct FString LoginUserName, struct FString LoginPassword, int32_t FrameRate, float ScreenScaling, bool bStartWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UObject* CoverUpImage);
    bool IsWebCamEnabled();
    bool IsBroadcastingGame();
};

// Class: GameLiveStreaming.QueryLiveStreamsCallbackProxy
class QueryLiveStreamsCallbackProxy : public OnlineBlueprintCallProxyBase {
public:
    uint8_t OnQueriedLiveStreams[0x10]; // 0x0028 (0x0010)

public:
    class UObject* QueryLiveStreams(struct FString GameName);
};

} // namespace SDK

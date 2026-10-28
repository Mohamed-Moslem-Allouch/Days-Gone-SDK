#include "Basic.hpp"
#include "GameLiveStreaming_classes.hpp"
#include "GameLiveStreaming_parameters.hpp"

namespace SDK {

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
void GameLiveStreamingFunctionLibrary::StopWebCam() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
void GameLiveStreamingFunctionLibrary::StopBroadcastingGame() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
void GameLiveStreamingFunctionLibrary::StartWebCam(int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo) {
    static class UFunction* Func = nullptr;
    GameLiveStreamingFunctionLibrary_StartWebCam_Params Parms{};
    Parms.DesiredWebCamWidth = DesiredWebCamWidth;
    Parms.DesiredWebCamHeight = DesiredWebCamHeight;
    Parms.bMirrorWebCamImage = bMirrorWebCamImage;
    Parms.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
    ProcessEvent(Func, &Parms);
}

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
void GameLiveStreamingFunctionLibrary::StartBroadcastingGame(struct FString LoginUserName, struct FString LoginPassword, int32_t FrameRate, float ScreenScaling, bool bStartWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UObject* CoverUpImage) {
    static class UFunction* Func = nullptr;
    GameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params Parms{};
    Parms.LoginUserName = LoginUserName;
    Parms.LoginPassword = LoginPassword;
    Parms.FrameRate = FrameRate;
    Parms.ScreenScaling = ScreenScaling;
    Parms.bStartWebCam = bStartWebCam;
    Parms.DesiredWebCamWidth = DesiredWebCamWidth;
    Parms.DesiredWebCamHeight = DesiredWebCamHeight;
    Parms.bMirrorWebCamImage = bMirrorWebCamImage;
    Parms.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
    Parms.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
    Parms.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
    Parms.CoverUpImage = CoverUpImage;
    ProcessEvent(Func, &Parms);
}

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
bool GameLiveStreamingFunctionLibrary::IsWebCamEnabled() {
    static class UFunction* Func = nullptr;
    GameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
bool GameLiveStreamingFunctionLibrary::IsBroadcastingGame() {
    static class UFunction* Func = nullptr;
    GameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
class UObject* QueryLiveStreamsCallbackProxy::QueryLiveStreams(struct FString GameName) {
    static class UFunction* Func = nullptr;
    QueryLiveStreamsCallbackProxy_QueryLiveStreams_Params Parms{};
    Parms.GameName = GameName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK

#include "Basic.hpp"
#include "MediaAssets_classes.hpp"
#include "MediaAssets_parameters.hpp"

namespace SDK {

// Function: MediaAssets.MediaPlayer.SupportsSeeking
bool MediaPlayer::SupportsSeeking() {
    static class UFunction* Func = nullptr;
    MediaPlayer_SupportsSeeking_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.SupportsScrubbing
bool MediaPlayer::SupportsScrubbing() {
    static class UFunction* Func = nullptr;
    MediaPlayer_SupportsScrubbing_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.SupportsRate
bool MediaPlayer::SupportsRate(float Rate, bool Unthinned) {
    static class UFunction* Func = nullptr;
    MediaPlayer_SupportsRate_Params Parms{};
    Parms.Rate = Rate;
    Parms.Unthinned = Unthinned;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.SetRate
bool MediaPlayer::SetRate(float Rate) {
    static class UFunction* Func = nullptr;
    MediaPlayer_SetRate_Params Parms{};
    Parms.Rate = Rate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.SetLooping
bool MediaPlayer::SetLooping(bool InLooping) {
    static class UFunction* Func = nullptr;
    MediaPlayer_SetLooping_Params Parms{};
    Parms.InLooping = InLooping;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.Seek
bool MediaPlayer::Seek(uint8_t InTime) {
    static class UFunction* Func = nullptr;
    MediaPlayer_Seek_Params Parms{};
    Parms.InTime = InTime;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.Rewind
bool MediaPlayer::Rewind() {
    static class UFunction* Func = nullptr;
    MediaPlayer_Rewind_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.Play
bool MediaPlayer::Play() {
    static class UFunction* Func = nullptr;
    MediaPlayer_Play_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.Pause
bool MediaPlayer::Pause() {
    static class UFunction* Func = nullptr;
    MediaPlayer_Pause_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.OpenUrl
bool MediaPlayer::OpenUrl(struct FString NewUrl) {
    static class UFunction* Func = nullptr;
    MediaPlayer_OpenUrl_Params Parms{};
    Parms.NewUrl = NewUrl;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.IsReady
bool MediaPlayer::IsReady() {
    static class UFunction* Func = nullptr;
    MediaPlayer_IsReady_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.IsPlaying
bool MediaPlayer::IsPlaying() {
    static class UFunction* Func = nullptr;
    MediaPlayer_IsPlaying_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.IsPaused
bool MediaPlayer::IsPaused() {
    static class UFunction* Func = nullptr;
    MediaPlayer_IsPaused_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.IsLooping
bool MediaPlayer::IsLooping() {
    static class UFunction* Func = nullptr;
    MediaPlayer_IsLooping_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.GetUrl
struct FString MediaPlayer::GetUrl() {
    static class UFunction* Func = nullptr;
    MediaPlayer_GetUrl_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.GetTime
uint8_t MediaPlayer::GetTime() {
    static class UFunction* Func = nullptr;
    MediaPlayer_GetTime_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.GetRate
float MediaPlayer::GetRate() {
    static class UFunction* Func = nullptr;
    MediaPlayer_GetRate_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.GetDuration
uint8_t MediaPlayer::GetDuration() {
    static class UFunction* Func = nullptr;
    MediaPlayer_GetDuration_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.Close
void MediaPlayer::Close() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: MediaAssets.MediaPlayer.CanPlay
bool MediaPlayer::CanPlay() {
    static class UFunction* Func = nullptr;
    MediaPlayer_CanPlay_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaPlayer.CanPause
bool MediaPlayer::CanPause() {
    static class UFunction* Func = nullptr;
    MediaPlayer_CanPause_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MediaAssets.MediaSoundWave.SetMediaPlayer
void MediaSoundWave::SetMediaPlayer(class UObject* InMediaPlayer) {
    static class UFunction* Func = nullptr;
    MediaSoundWave_SetMediaPlayer_Params Parms{};
    Parms.InMediaPlayer = InMediaPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: MediaAssets.MediaTexture.SetMediaPlayer
void MediaTexture::SetMediaPlayer(class UObject* InMediaPlayer) {
    static class UFunction* Func = nullptr;
    MediaTexture_SetMediaPlayer_Params Parms{};
    Parms.InMediaPlayer = InMediaPlayer;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

#include "Basic.hpp"
#include "LevelSequence_classes.hpp"
#include "LevelSequence_parameters.hpp"

namespace SDK {

// Function: LevelSequence.LevelSequencePlayer.Stop
void LevelSequencePlayer::Stop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: LevelSequence.LevelSequencePlayer.SetPlayRate
void LevelSequencePlayer::SetPlayRate(float PlayRate) {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_SetPlayRate_Params Parms{};
    Parms.PlayRate = PlayRate;
    ProcessEvent(Func, &Parms);
}

// Function: LevelSequence.LevelSequencePlayer.SetPlaybackRange
void LevelSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime) {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_SetPlaybackRange_Params Parms{};
    Parms.NewStartTime = NewStartTime;
    Parms.NewEndTime = NewEndTime;
    ProcessEvent(Func, &Parms);
}

// Function: LevelSequence.LevelSequencePlayer.SetPlaybackPosition
void LevelSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition) {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_SetPlaybackPosition_Params Parms{};
    Parms.NewPlaybackPosition = NewPlaybackPosition;
    ProcessEvent(Func, &Parms);
}

// Function: LevelSequence.LevelSequencePlayer.PlayLooping
void LevelSequencePlayer::PlayLooping(int32_t NumLoops) {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_PlayLooping_Params Parms{};
    Parms.NumLoops = NumLoops;
    ProcessEvent(Func, &Parms);
}

// Function: LevelSequence.LevelSequencePlayer.Play
void LevelSequencePlayer::Play() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: LevelSequence.LevelSequencePlayer.Pause
void LevelSequencePlayer::Pause() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: LevelSequence.LevelSequencePlayer.IsPlaying
bool LevelSequencePlayer::IsPlaying() {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_IsPlaying_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: LevelSequence.LevelSequencePlayer.GetPlayRate
float LevelSequencePlayer::GetPlayRate() {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_GetPlayRate_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: LevelSequence.LevelSequencePlayer.GetPlaybackPosition
float LevelSequencePlayer::GetPlaybackPosition() {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_GetPlaybackPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: LevelSequence.LevelSequencePlayer.GetLength
float LevelSequencePlayer::GetLength() {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_GetLength_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
class UObject* LevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class UObject* LevelSequence, uint8_t Settings) {
    static class UFunction* Func = nullptr;
    LevelSequencePlayer_CreateLevelSequencePlayer_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.LevelSequence = LevelSequence;
    Parms.Settings = Settings;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: LevelSequence.LevelSequenceActor.SetSequence
void LevelSequenceActor::SetSequence(class UObject* InSequence) {
    static class UFunction* Func = nullptr;
    LevelSequenceActor_SetSequence_Params Parms{};
    Parms.InSequence = InSequence;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

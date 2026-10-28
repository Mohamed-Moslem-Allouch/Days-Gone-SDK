#pragma once
#include "Basic.hpp"
#include "LevelSequence_structs.hpp"

namespace SDK {

// Class: LevelSequence.LevelSequence
class LevelSequence : public MovieSceneSequence {
public:
    class UObject* MovieScene; // 0x0028 (0x0008)
    uint8_t ObjectReferences[0x50]; // 0x0030 (0x0050)
    uint8_t PossessedObjects[0x50]; // 0x0080 (0x0050)
};

// Class: LevelSequence.LevelSequencePlayer
class LevelSequencePlayer : public Object {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    class UObject* LevelSequence; // 0x0048 (0x0008)
    bool bIsPlaying; // 0x0050 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0051 (0x0003)
    float TimeCursorPosition; // 0x0054 (0x0004)
    uint8_t Pad_2[0x8]; // 0x0058 (0x0008)
    uint8_t PlaybackSettings[0x8]; // 0x0060 (0x0008)

public:
    void Stop();
    void SetPlayRate(float PlayRate);
    void SetPlaybackRange(float NewStartTime, float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition);
    void PlayLooping(int32_t NumLoops);
    void Play();
    void Pause();
    bool IsPlaying();
    float GetPlayRate();
    float GetPlaybackPosition();
    float GetLength();
    class UObject* CreateLevelSequencePlayer(class UObject* WorldContextObject, class UObject* LevelSequence, uint8_t Settings);
};

// Class: LevelSequence.LevelSequenceActor
class LevelSequenceActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    bool bAutoPlay; // 0x0348 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0349 (0x0003)
    uint8_t PlaybackSettings[0x8]; // 0x034C (0x0008)
    uint8_t Pad_2[0x4]; // 0x0354 (0x0004)
    class UObject* SequencePlayer; // 0x0358 (0x0008)
    uint8_t LevelSequence[0x10]; // 0x0360 (0x0010)

public:
    void SetSequence(class UObject* InSequence);
};

} // namespace SDK

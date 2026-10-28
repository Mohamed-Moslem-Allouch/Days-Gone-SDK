#pragma once
#include "Basic.hpp"
#include "LevelSequence_structs.hpp"

namespace SDK {

// Function: LevelSequence.LevelSequencePlayer.Stop
// Size: 0x0000
struct LevelSequencePlayer_Stop_Params {
public:
};

// Function: LevelSequence.LevelSequencePlayer.SetPlayRate
// Size: 0x0004
struct LevelSequencePlayer_SetPlayRate_Params {
public:
    float PlayRate; // 0x0000 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.SetPlaybackRange
// Size: 0x0008
struct LevelSequencePlayer_SetPlaybackRange_Params {
public:
    float NewStartTime; // 0x0000 (0x0004)
    float NewEndTime; // 0x0004 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.SetPlaybackPosition
// Size: 0x0004
struct LevelSequencePlayer_SetPlaybackPosition_Params {
public:
    float NewPlaybackPosition; // 0x0000 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.PlayLooping
// Size: 0x0004
struct LevelSequencePlayer_PlayLooping_Params {
public:
    int32_t NumLoops; // 0x0000 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.Play
// Size: 0x0000
struct LevelSequencePlayer_Play_Params {
public:
};

// Function: LevelSequence.LevelSequencePlayer.Pause
// Size: 0x0000
struct LevelSequencePlayer_Pause_Params {
public:
};

// Function: LevelSequence.LevelSequencePlayer.IsPlaying
// Size: 0x0001
struct LevelSequencePlayer_IsPlaying_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: LevelSequence.LevelSequencePlayer.GetPlayRate
// Size: 0x0004
struct LevelSequencePlayer_GetPlayRate_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.GetPlaybackPosition
// Size: 0x0004
struct LevelSequencePlayer_GetPlaybackPosition_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.GetLength
// Size: 0x0004
struct LevelSequencePlayer_GetLength_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// Size: 0x0020
struct LevelSequencePlayer_CreateLevelSequencePlayer_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* LevelSequence; // 0x0008 (0x0008)
    uint8_t Settings[0x8]; // 0x0010 (0x0008)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: LevelSequence.LevelSequenceActor.SetSequence
// Size: 0x0008
struct LevelSequenceActor_SetSequence_Params {
public:
    class UObject* InSequence; // 0x0000 (0x0008)
};

} // namespace SDK

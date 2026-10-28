#pragma once
#include "Basic.hpp"

namespace SDK {

// Function: MediaAssets.MediaPlayer.SupportsSeeking
// Size: 0x0001
struct MediaPlayer_SupportsSeeking_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.SupportsScrubbing
// Size: 0x0001
struct MediaPlayer_SupportsScrubbing_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.SupportsRate
// Size: 0x0006
struct MediaPlayer_SupportsRate_Params {
public:
    float Rate; // 0x0000 (0x0004)
    bool Unthinned; // 0x0004 (0x0001)
    bool ReturnValue; // 0x0005 (0x0001)
};

// Function: MediaAssets.MediaPlayer.SetRate
// Size: 0x0005
struct MediaPlayer_SetRate_Params {
public:
    float Rate; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: MediaAssets.MediaPlayer.SetLooping
// Size: 0x0002
struct MediaPlayer_SetLooping_Params {
public:
    bool InLooping; // 0x0000 (0x0001)
    bool ReturnValue; // 0x0001 (0x0001)
};

// Function: MediaAssets.MediaPlayer.Seek
// Size: 0x0009
struct MediaPlayer_Seek_Params {
public:
    uint8_t InTime[0x8]; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: MediaAssets.MediaPlayer.Rewind
// Size: 0x0001
struct MediaPlayer_Rewind_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.Play
// Size: 0x0001
struct MediaPlayer_Play_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.Pause
// Size: 0x0001
struct MediaPlayer_Pause_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.OpenUrl
// Size: 0x0011
struct MediaPlayer_OpenUrl_Params {
public:
    struct FString NewUrl; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: MediaAssets.MediaPlayer.IsReady
// Size: 0x0001
struct MediaPlayer_IsReady_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.IsPlaying
// Size: 0x0001
struct MediaPlayer_IsPlaying_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.IsPaused
// Size: 0x0001
struct MediaPlayer_IsPaused_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.IsLooping
// Size: 0x0001
struct MediaPlayer_IsLooping_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.GetUrl
// Size: 0x0010
struct MediaPlayer_GetUrl_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: MediaAssets.MediaPlayer.GetTime
// Size: 0x0008
struct MediaPlayer_GetTime_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: MediaAssets.MediaPlayer.GetRate
// Size: 0x0004
struct MediaPlayer_GetRate_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: MediaAssets.MediaPlayer.GetDuration
// Size: 0x0008
struct MediaPlayer_GetDuration_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: MediaAssets.MediaPlayer.Close
// Size: 0x0000
struct MediaPlayer_Close_Params {
public:
};

// Function: MediaAssets.MediaPlayer.CanPlay
// Size: 0x0001
struct MediaPlayer_CanPlay_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaPlayer.CanPause
// Size: 0x0001
struct MediaPlayer_CanPause_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: MediaAssets.MediaSoundWave.SetMediaPlayer
// Size: 0x0008
struct MediaSoundWave_SetMediaPlayer_Params {
public:
    class UObject* InMediaPlayer; // 0x0000 (0x0008)
};

// Function: MediaAssets.MediaTexture.SetMediaPlayer
// Size: 0x0008
struct MediaTexture_SetMediaPlayer_Params {
public:
    class UObject* InMediaPlayer; // 0x0000 (0x0008)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: MediaAssets.MediaPlayer
class MediaPlayer : public Object {
public:
    uint8_t OnEndReached[0x10]; // 0x0028 (0x0010)
    uint8_t OnMediaClosed[0x10]; // 0x0038 (0x0010)
    uint8_t OnMediaOpened[0x10]; // 0x0048 (0x0010)
    uint8_t OnMediaOpenFailed[0x10]; // 0x0058 (0x0010)
    uint8_t OnPlaybackResumed[0x10]; // 0x0068 (0x0010)
    uint8_t OnPlaybackSuspended[0x10]; // 0x0078 (0x0010)
    bool Looping; // 0x0088 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0089 (0x0007)
    struct FString URL; // 0x0090 (0x0010)

public:
    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    bool SetRate(float Rate);
    bool SetLooping(bool InLooping);
    bool Seek(uint8_t InTime);
    bool Rewind();
    bool Play();
    bool Pause();
    bool OpenUrl(struct FString NewUrl);
    bool IsReady();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    struct FString GetUrl();
    uint8_t GetTime();
    float GetRate();
    uint8_t GetDuration();
    void Close();
    bool CanPlay();
    bool CanPause();
};

// Class: MediaAssets.MediaSoundWave
class MediaSoundWave : public SoundWave {
public:
    uint8_t Pad_0[0x218]; // 0x0028 (0x0218)
    int32_t AudioTrackIndex; // 0x0240 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0244 (0x0004)
    class UObject* MediaPlayer; // 0x0248 (0x0008)
    uint8_t Pad_2[0x20]; // 0x0250 (0x0020)
    uint64_t CurrentMediaPlayer; // 0x0270 (0x0008)

public:
    void SetMediaPlayer(class UObject* InMediaPlayer);
};

// Class: MediaAssets.MediaTexture
class MediaTexture : public Texture {
public:
    uint8_t Pad_0[0x80]; // 0x0028 (0x0080)
    uint8_t AddressX; // 0x00A8 (0x0001)
    uint8_t AddressY; // 0x00A9 (0x0001)
    uint8_t Pad_1[0x2]; // 0x00AA (0x0002)
    uint8_t ClearColor[0x10]; // 0x00AC (0x0010)
    int32_t VideoTrackIndex; // 0x00BC (0x0004)
    class UObject* MediaPlayer; // 0x00C0 (0x0008)
    uint8_t Pad_2[0x8]; // 0x00C8 (0x0008)
    uint64_t CurrentMediaPlayer; // 0x00D0 (0x0008)

public:
    void SetMediaPlayer(class UObject* InMediaPlayer);
};

} // namespace SDK

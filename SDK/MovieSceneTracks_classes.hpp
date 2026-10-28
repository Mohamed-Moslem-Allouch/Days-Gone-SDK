#pragma once
#include "Basic.hpp"
#include "MovieSceneTracks_structs.hpp"

namespace SDK {

// Class: MovieSceneTracks.MovieScene3DConstraintSection
class MovieScene3DConstraintSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t ConstraintId[0x10]; // 0x0040 (0x0010)
};

// Class: MovieSceneTracks.MovieScene3DAttachSection
class MovieScene3DAttachSection : public MovieScene3DConstraintSection {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    struct FName AttachSocketName; // 0x0050 (0x0008)
    bool bConstrainTx; // 0x0058 (0x0001)
    bool bConstrainTy; // 0x0058 (0x0001)
    bool bConstrainTz; // 0x0058 (0x0001)
    bool bConstrainRx; // 0x0058 (0x0001)
    bool bConstrainRy; // 0x0058 (0x0001)
    bool bConstrainRz; // 0x0058 (0x0001)
};

// Class: MovieSceneTracks.MovieScene3DPathSection
class MovieScene3DPathSection : public MovieScene3DConstraintSection {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    uint8_t TimingCurve[0x78]; // 0x0050 (0x0078)
    uint8_t FrontAxisEnum; // 0x00C8 (0x0001)
    uint8_t UpAxisEnum; // 0x00C9 (0x0001)
    uint8_t Pad_1[0x2]; // 0x00CA (0x0002)
    bool bFollow; // 0x00CC (0x0001)
    bool bReverse; // 0x00CC (0x0001)
    bool bForceUpright; // 0x00CC (0x0001)
};

// Class: MovieSceneTracks.MovieScene3DConstraintTrack
class MovieScene3DConstraintTrack : public MovieSceneTrack {
public:
    struct TArray<uint8_t> ConstraintSections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieScene3DAttachTrack
class MovieScene3DAttachTrack : public MovieScene3DConstraintTrack {
public:
};

// Class: MovieSceneTracks.MovieScene3DPathTrack
class MovieScene3DPathTrack : public MovieScene3DConstraintTrack {
public:
};

// Class: MovieSceneTracks.MovieScene3DTransformSection
class MovieScene3DTransformSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t Translation[0x78]; // 0x0048 (0x0078)
    uint8_t Pad_1[0xF0]; // 0x00C0 (0x00F0)
    uint8_t Rotation[0x78]; // 0x01B0 (0x0078)
    uint8_t Pad_2[0xF0]; // 0x0228 (0x00F0)
    uint8_t Scale[0x78]; // 0x0318 (0x0078)
};

// Class: MovieSceneTracks.MovieSceneAudioSection
class MovieSceneAudioSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    class UObject* Sound; // 0x0040 (0x0008)
    float AudioStartTime; // 0x0048 (0x0004)
    float AudioDilationFactor; // 0x004C (0x0004)
};

// Class: MovieSceneTracks.MovieSceneAudioTrack
class MovieSceneAudioTrack : public MovieSceneNameableTrack {
public:
    struct TArray<uint8_t> AudioSections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneBoolSection
class MovieSceneBoolSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    bool DefaultValue; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    uint8_t BoolCurve[0x70]; // 0x0050 (0x0070)
};

// Class: MovieSceneTracks.MovieSceneVisibilitySection
class MovieSceneVisibilitySection : public MovieSceneBoolSection {
public:
};

// Class: MovieSceneTracks.MovieSceneByteSection
class MovieSceneByteSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t ByteCurve[0x70]; // 0x0048 (0x0070)
};

// Class: MovieSceneTracks.MovieSceneColorSection
class MovieSceneColorSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t RedCurve[0x78]; // 0x0048 (0x0078)
    uint8_t GreenCurve[0x78]; // 0x00C0 (0x0078)
    uint8_t BlueCurve[0x78]; // 0x0138 (0x0078)
    uint8_t AlphaCurve[0x78]; // 0x01B0 (0x0078)
};

// Class: MovieSceneTracks.MovieSceneEventSection
class MovieSceneEventSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t Events[0x68]; // 0x0040 (0x0068)
};

// Class: MovieSceneTracks.MovieSceneEventTrack
class MovieSceneEventTrack : public MovieSceneNameableTrack {
public:
    bool bFireEventsWhenForwards; // 0x0028 (0x0001)
    bool bFireEventsWhenBackwards; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    struct TArray<uint8_t> Sections; // 0x0030 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneFloatSection
class MovieSceneFloatSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t FloatCurve[0x78]; // 0x0048 (0x0078)
};

// Class: MovieSceneTracks.MovieSceneFadeSection
class MovieSceneFadeSection : public MovieSceneFloatSection {
public:
    uint8_t Pad_0[0x98]; // 0x0028 (0x0098)
    uint8_t FadeColor[0x10]; // 0x00C0 (0x0010)
    bool bFadeAudio; // 0x00D0 (0x0001)
};

// Class: MovieSceneTracks.MovieSceneSlomoSection
class MovieSceneSlomoSection : public MovieSceneFloatSection {
public:
};

// Class: MovieSceneTracks.MovieSceneParameterSection
class MovieSceneParameterSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    struct TArray<uint8_t> ScalarParameterNamesAndCurves; // 0x0040 (0x0010)
    struct TArray<uint8_t> VectorParameterNamesAndCurves; // 0x0050 (0x0010)
    struct TArray<uint8_t> ColorParameterNamesAndCurves; // 0x0060 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneMaterialTrack
class MovieSceneMaterialTrack : public MovieSceneNameableTrack {
public:
    struct TArray<uint8_t> Sections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneComponentMaterialTrack
class MovieSceneComponentMaterialTrack : public MovieSceneMaterialTrack {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    int32_t MaterialIndex; // 0x0038 (0x0004)
};

// Class: MovieSceneTracks.MovieSceneParticleParameterTrack
class MovieSceneParticleParameterTrack : public MovieSceneTrack {
public:
    struct TArray<uint8_t> Sections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneParticleSection
class MovieSceneParticleSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t ParticleKeys[0x70]; // 0x0040 (0x0070)
};

// Class: MovieSceneTracks.MovieSceneParticleTrack
class MovieSceneParticleTrack : public MovieSceneNameableTrack {
public:
    struct TArray<uint8_t> ParticleSections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieScenePropertyTrack
class MovieScenePropertyTrack : public MovieSceneTrack {
public:
    struct FName PropertyName; // 0x0028 (0x0008)
    struct FString PropertyPath; // 0x0030 (0x0010)
    struct TArray<uint8_t> Sections; // 0x0040 (0x0010)
};

// Class: MovieSceneTracks.MovieScene3DTransformTrack
class MovieScene3DTransformTrack : public MovieScenePropertyTrack {
public:
};

// Class: MovieSceneTracks.MovieSceneBoolTrack
class MovieSceneBoolTrack : public MovieScenePropertyTrack {
public:
};

// Class: MovieSceneTracks.MovieSceneVisibilityTrack
class MovieSceneVisibilityTrack : public MovieSceneBoolTrack {
public:
};

// Class: MovieSceneTracks.MovieSceneByteTrack
class MovieSceneByteTrack : public MovieScenePropertyTrack {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    class UObject* Enum; // 0x0050 (0x0008)
};

// Class: MovieSceneTracks.MovieSceneColorTrack
class MovieSceneColorTrack : public MovieScenePropertyTrack {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    bool bIsSlateColor; // 0x0050 (0x0001)
};

// Class: MovieSceneTracks.MovieSceneFloatTrack
class MovieSceneFloatTrack : public MovieScenePropertyTrack {
public:
};

// Class: MovieSceneTracks.MovieSceneFadeTrack
class MovieSceneFadeTrack : public MovieSceneFloatTrack {
public:
};

// Class: MovieSceneTracks.MovieSceneSlomoTrack
class MovieSceneSlomoTrack : public MovieSceneFloatTrack {
public:
};

// Class: MovieSceneTracks.MovieSceneVectorTrack
class MovieSceneVectorTrack : public MovieScenePropertyTrack {
public:
    uint8_t Pad_0[0x28]; // 0x0028 (0x0028)
    int32_t NumChannelsUsed; // 0x0050 (0x0004)
};

// Class: MovieSceneTracks.MovieSceneShotSection
class MovieSceneShotSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    uint8_t CameraGuid[0x10]; // 0x0040 (0x0010)
    struct FText DisplayName; // 0x0050 (0x0018)
    int32_t ShotNumber; // 0x0068 (0x0004)
};

// Class: MovieSceneTracks.MovieSceneSubTrack
class MovieSceneSubTrack : public MovieSceneNameableTrack {
public:
    struct TArray<uint8_t> Sections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneShotTrack
class MovieSceneShotTrack : public MovieSceneTrack {
public:
    struct TArray<uint8_t> Sections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneSkeletalAnimationSection
class MovieSceneSkeletalAnimationSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    class UObject* AnimSequence; // 0x0040 (0x0008)
    float StartOffset; // 0x0048 (0x0004)
    float EndOffset; // 0x004C (0x0004)
    float PlayRate; // 0x0050 (0x0004)
    bool bReverse; // 0x0054 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0055 (0x0003)
    struct FName SlotName; // 0x0058 (0x0008)
};

// Class: MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class MovieSceneSkeletalAnimationTrack : public MovieSceneNameableTrack {
public:
    struct TArray<uint8_t> AnimationSections; // 0x0028 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneSpawnTrack
class MovieSceneSpawnTrack : public MovieSceneNameableTrack {
public:
    struct TArray<uint8_t> Sections; // 0x0028 (0x0010)
    uint8_t ObjectGuid[0x10]; // 0x0038 (0x0010)
};

// Class: MovieSceneTracks.MovieSceneSubSection
class MovieSceneSubSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x18]; // 0x0028 (0x0018)
    float StartOffset; // 0x0040 (0x0004)
    float TimeScale; // 0x0044 (0x0004)
    class UObject* SubSequence; // 0x0048 (0x0008)
};

// Class: MovieSceneTracks.MovieSceneVectorSection
class MovieSceneVectorSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t Curves[0x78]; // 0x0048 (0x0078)
    uint8_t Pad_1[0x168]; // 0x00C0 (0x0168)
    int32_t ChannelsUsed; // 0x0228 (0x0004)
};

} // namespace SDK

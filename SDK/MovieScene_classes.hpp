#pragma once
#include "Basic.hpp"
#include "MovieScene_structs.hpp"

namespace SDK {

// Class: MovieScene.MovieScene
class MovieScene : public Object {
public:
    struct TArray<uint8_t> Spawnables; // 0x0028 (0x0010)
    struct TArray<uint8_t> Possessables; // 0x0038 (0x0010)
    struct TArray<uint8_t> ObjectBindings; // 0x0048 (0x0010)
    struct TArray<uint8_t> MasterTracks; // 0x0058 (0x0010)
    class UObject* ShotTrack; // 0x0068 (0x0008)
    uint8_t PlaybackRange[0x10]; // 0x0070 (0x0010)
    float InTime; // 0x0080 (0x0004)
    float OutTime; // 0x0084 (0x0004)
    float StartTime; // 0x0088 (0x0004)
    float EndTime; // 0x008C (0x0004)
};

// Class: MovieScene.MovieSceneSection
class MovieSceneSection : public Object {
public:
    float StartTime; // 0x0028 (0x0004)
    float EndTime; // 0x002C (0x0004)
    int32_t RowIndex; // 0x0030 (0x0004)
    int32_t OverlapPriority; // 0x0034 (0x0004)
    bool bIsActive; // 0x0038 (0x0001)
    bool bIsLocked; // 0x0038 (0x0001)
    bool bIsInfinite; // 0x0038 (0x0001)
};

// Class: MovieScene.MovieSceneSequence
class MovieSceneSequence : public Object {
public:
};

// Class: MovieScene.MovieSceneTrack
class MovieSceneTrack : public Object {
public:
};

// Class: MovieScene.MovieSceneNameableTrack
class MovieSceneNameableTrack : public MovieSceneTrack {
public:
};

} // namespace SDK

#pragma once
#include "Basic.hpp"
#include "MovieSceneCapture_structs.hpp"

namespace SDK {

// Class: MovieSceneCapture.CompositionGraphCaptureSettings
class CompositionGraphCaptureSettings : public Object {
public:
    uint8_t IncludeRenderPasses[0x10]; // 0x0028 (0x0010)
    bool bCaptureFramesInHDR; // 0x0038 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0039 (0x0007)
    uint8_t PostProcessingMaterial[0x10]; // 0x0040 (0x0010)
};

// Class: MovieSceneCapture.FrameGrabberProtocolSettings
class FrameGrabberProtocolSettings : public Object {
public:
};

// Class: MovieSceneCapture.ImageCaptureSettings
class ImageCaptureSettings : public FrameGrabberProtocolSettings {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    int32_t CompressionQuality; // 0x0030 (0x0004)
};

// Class: MovieSceneCapture.VideoCaptureSettings
class VideoCaptureSettings : public FrameGrabberProtocolSettings {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    bool bUseCompression; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float CompressionQuality; // 0x0034 (0x0004)
    struct FString VideoCodec; // 0x0038 (0x0010)
};

// Class: MovieSceneCapture.MovieSceneCaptureInterface
class MovieSceneCaptureInterface : public Interface {
public:
};

// Class: MovieSceneCapture.MovieSceneCapture
class MovieSceneCapture : public Object {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t CaptureType[0x8]; // 0x0038 (0x0008)
    class UObject* ProtocolSettings; // 0x0040 (0x0008)
    uint8_t Settings[0x48]; // 0x0048 (0x0048)
    bool bUseSeparateProcess; // 0x0090 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0091 (0x0007)
    struct FString AdditionalCommandLineArguments; // 0x0098 (0x0010)
    struct FString InheritedCommandLineArguments; // 0x00A8 (0x0010)
};

// Class: MovieSceneCapture.AutomatedLevelSequenceCapture
class AutomatedLevelSequenceCapture : public MovieSceneCapture {
public:
};

// Class: MovieSceneCapture.LevelCapture
class LevelCapture : public MovieSceneCapture {
public:
    uint8_t Pad_0[0x1C8]; // 0x0028 (0x01C8)
    bool bAutoStartCapture; // 0x01F0 (0x0001)
    uint8_t Pad_1[0xB]; // 0x01F1 (0x000B)
    uint8_t PrerequisiteActorId[0x10]; // 0x01FC (0x0010)
};

// Class: MovieSceneCapture.MovieSceneCaptureEnvironment
class MovieSceneCaptureEnvironment : public Object {
public:

public:
    int32_t GetCaptureFrameNumber();
    float GetCaptureElapsedTime();
};

} // namespace SDK

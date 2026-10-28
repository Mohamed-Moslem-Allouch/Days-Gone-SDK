#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: MovieSceneCapture.CompositionGraphCapturePasses
struct CompositionGraphCapturePasses {
    struct TArray<uint8_t> Value; // 0x0000 (0x0010)
};

// ScriptStruct: MovieSceneCapture.MovieSceneCaptureSettings
struct MovieSceneCaptureSettings {
    uint8_t OutputDirectory[0x10]; // 0x0000 (0x0010)
    bool bCreateTemporaryCopiesOfLevels; // 0x0010 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0011 (0x0007)
    class UClass* GameModeOverride; // 0x0018 (0x0008)
    struct FString OutputFormat; // 0x0020 (0x0010)
    bool bOverwriteExisting; // 0x0030 (0x0001)
    bool bUseRelativeFrameNumbers; // 0x0031 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0032 (0x0002)
    int32_t FrameRate; // 0x0034 (0x0004)
    uint8_t Resolution[0x8]; // 0x0038 (0x0008)
    bool bEnableTextureStreaming; // 0x0040 (0x0001)
    bool bCinematicMode; // 0x0041 (0x0001)
    bool bAllowMovement; // 0x0042 (0x0001)
    bool bAllowTurning; // 0x0043 (0x0001)
    bool bShowPlayer; // 0x0044 (0x0001)
    bool bShowHUD; // 0x0045 (0x0001)
};

// ScriptStruct: MovieSceneCapture.CaptureResolution
struct CaptureResolution {
    uint8_t ResX[0x4]; // 0x0000 (0x0004)
    uint8_t ResY[0x4]; // 0x0004 (0x0004)
};

// ScriptStruct: MovieSceneCapture.CaptureProtocolID
struct CaptureProtocolID {
    struct FName Identifier; // 0x0000 (0x0008)
};

} // namespace SDK

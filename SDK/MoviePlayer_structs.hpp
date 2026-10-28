#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: MoviePlayer.BendMoviePlayerDetails
struct BendMoviePlayerDetails {
    struct FName FontName; // 0x0000 (0x0008)
    uint8_t LoadIconTexture[0x10]; // 0x0008 (0x0010)
    uint8_t StudioTexture[0x10]; // 0x0018 (0x0010)
};

// ScriptStruct: MoviePlayer.BendMoviePlayerScreenDef
struct BendMoviePlayerScreenDef {
    struct FName Name; // 0x0000 (0x0008)
    float FadeTime; // 0x0008 (0x0004)
    float DisplayTime; // 0x000C (0x0004)
    uint8_t OverlayHAlign; // 0x0010 (0x0001)
    uint8_t OverlayVAlign; // 0x0011 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0012 (0x0006)
    struct TArray<uint8_t> Panels; // 0x0018 (0x0010)
};

// ScriptStruct: MoviePlayer.BendMoviePlayerPanel
struct BendMoviePlayerPanel {
    struct FName PanelType; // 0x0000 (0x0008)
    struct TArray<uint8_t> Slots; // 0x0008 (0x0010)
};

// ScriptStruct: MoviePlayer.BendMoviePlayerElementSlot
struct BendMoviePlayerElementSlot {
    struct FName ElementName; // 0x0000 (0x0008)
    uint8_t HAlign; // 0x0008 (0x0001)
    uint8_t VAlign; // 0x0009 (0x0001)
};

// ScriptStruct: MoviePlayer.BendMoviePlayerImageElement
struct BendMoviePlayerImageElement {
    struct FName ElementName; // 0x0000 (0x0008)
    uint8_t DisplayImage[0x10]; // 0x0008 (0x0010)
    class UObject* TextureAsset; // 0x0018 (0x0008)
    uint8_t Brush[0x90]; // 0x0020 (0x0090)
};

// ScriptStruct: MoviePlayer.BendMoviePlayerTextElement
struct BendMoviePlayerTextElement {
    struct FName ElementName; // 0x0000 (0x0008)
    struct FString DisplayText; // 0x0008 (0x0010)
    int32_t FontSize; // 0x0018 (0x0004)
};

} // namespace SDK

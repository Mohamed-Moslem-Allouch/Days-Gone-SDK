#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: SlateCore.SlateBrush
struct SlateBrush {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t ImageSize[0x8]; // 0x0008 (0x0008)
    uint8_t DrawAs; // 0x0010 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0011 (0x0003)
    uint8_t Margin[0x10]; // 0x0014 (0x0010)
    uint8_t Tint[0x10]; // 0x0024 (0x0010)
    uint8_t Pad_2[0x4]; // 0x0034 (0x0004)
    uint8_t TintColor[0x28]; // 0x0038 (0x0028)
    uint8_t Tiling; // 0x0060 (0x0001)
    uint8_t Mirroring; // 0x0061 (0x0001)
    uint8_t ImageType; // 0x0062 (0x0001)
    uint8_t Pad_3[0x5]; // 0x0063 (0x0005)
    class UObject* ResourceObject; // 0x0068 (0x0008)
    struct FName ResourceName; // 0x0070 (0x0008)
    bool bIsDynamicallyLoaded; // 0x0078 (0x0001)
    bool bHasUObject; // 0x0079 (0x0001)
    uint8_t Pad_4[0x2]; // 0x007A (0x0002)
    uint8_t UVRegion[0x14]; // 0x007C (0x0014)
};

// ScriptStruct: SlateCore.SlateColor
struct SlateColor {
    uint8_t SpecifiedColor[0x10]; // 0x0000 (0x0010)
    uint8_t ColorUseRule; // 0x0010 (0x0001)
};

// ScriptStruct: SlateCore.Margin
struct Margin {
    float Left; // 0x0000 (0x0004)
    float Top; // 0x0004 (0x0004)
    float Right; // 0x0008 (0x0004)
    float Bottom; // 0x000C (0x0004)
};

// ScriptStruct: SlateCore.PointerEvent
struct PointerEvent : public InputEvent {
};

// ScriptStruct: SlateCore.InputEvent
struct InputEvent {
};

// ScriptStruct: SlateCore.Geometry
struct Geometry {
};

// ScriptStruct: SlateCore.ComboBoxStyle
struct ComboBoxStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t ComboButtonStyle[0x3E0]; // 0x0008 (0x03E0)
    uint8_t PressedSlateSound[0x18]; // 0x03E8 (0x0018)
    uint8_t SelectionChangeSlateSound[0x18]; // 0x0400 (0x0018)
    struct FName PressedSound; // 0x0418 (0x0008)
    struct FName SelectionChangeSound; // 0x0420 (0x0008)
};

// ScriptStruct: SlateCore.SlateWidgetStyle
struct SlateWidgetStyle {
};

// ScriptStruct: SlateCore.SlateSound
struct SlateSound {
    class UObject* ResourceObject; // 0x0000 (0x0008)
};

// ScriptStruct: SlateCore.ComboButtonStyle
struct ComboButtonStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t ButtonStyle[0x2A8]; // 0x0008 (0x02A8)
    uint8_t DownArrowImage[0x90]; // 0x02B0 (0x0090)
    uint8_t MenuBorderBrush[0x90]; // 0x0340 (0x0090)
    uint8_t MenuBorderPadding[0x10]; // 0x03D0 (0x0010)
};

// ScriptStruct: SlateCore.ButtonStyle
struct ButtonStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t Normal[0x90]; // 0x0008 (0x0090)
    uint8_t Hovered[0x90]; // 0x0098 (0x0090)
    uint8_t Pressed[0x90]; // 0x0128 (0x0090)
    uint8_t Disabled[0x90]; // 0x01B8 (0x0090)
    uint8_t NormalPadding[0x10]; // 0x0248 (0x0010)
    uint8_t PressedPadding[0x10]; // 0x0258 (0x0010)
    uint8_t PressedSlateSound[0x18]; // 0x0268 (0x0018)
    uint8_t HoveredSlateSound[0x18]; // 0x0280 (0x0018)
    struct FName PressedSound; // 0x0298 (0x0008)
    struct FName HoveredSound; // 0x02A0 (0x0008)
};

// ScriptStruct: SlateCore.SlateFontInfo
struct SlateFontInfo {
    class UObject* FontObject; // 0x0000 (0x0008)
    class UObject* FontMaterial; // 0x0008 (0x0008)
    uint8_t Pad_0[0x10]; // 0x0010 (0x0010)
    struct FName TypefaceFontName; // 0x0020 (0x0008)
    int32_t Size; // 0x0028 (0x0004)
    uint8_t Pad_1[0x4]; // 0x002C (0x0004)
    struct FName FontName; // 0x0030 (0x0008)
    uint8_t Hinting; // 0x0038 (0x0001)
};

// ScriptStruct: SlateCore.EditableTextStyle
struct EditableTextStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t Font[0x40]; // 0x0008 (0x0040)
    uint8_t ColorAndOpacity[0x28]; // 0x0048 (0x0028)
    uint8_t BackgroundImageSelected[0x90]; // 0x0070 (0x0090)
    uint8_t BackgroundImageComposing[0x90]; // 0x0100 (0x0090)
    uint8_t CaretImage[0x90]; // 0x0190 (0x0090)
};

// ScriptStruct: SlateCore.EditableTextBoxStyle
struct EditableTextBoxStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t BackgroundImageNormal[0x90]; // 0x0008 (0x0090)
    uint8_t BackgroundImageHovered[0x90]; // 0x0098 (0x0090)
    uint8_t BackgroundImageFocused[0x90]; // 0x0128 (0x0090)
    uint8_t BackgroundImageReadOnly[0x90]; // 0x01B8 (0x0090)
    uint8_t Padding[0x10]; // 0x0248 (0x0010)
    uint8_t Font[0x40]; // 0x0258 (0x0040)
    uint8_t ForegroundColor[0x28]; // 0x0298 (0x0028)
    uint8_t BackgroundColor[0x28]; // 0x02C0 (0x0028)
    uint8_t ReadOnlyForegroundColor[0x28]; // 0x02E8 (0x0028)
    uint8_t HScrollBarPadding[0x10]; // 0x0310 (0x0010)
    uint8_t VScrollBarPadding[0x10]; // 0x0320 (0x0010)
    uint8_t ScrollBarStyle[0x518]; // 0x0330 (0x0518)
};

// ScriptStruct: SlateCore.ScrollBarStyle
struct ScrollBarStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t HorizontalBackgroundImage[0x90]; // 0x0008 (0x0090)
    uint8_t VerticalBackgroundImage[0x90]; // 0x0098 (0x0090)
    uint8_t VerticalTopSlotImage[0x90]; // 0x0128 (0x0090)
    uint8_t HorizontalTopSlotImage[0x90]; // 0x01B8 (0x0090)
    uint8_t VerticalBottomSlotImage[0x90]; // 0x0248 (0x0090)
    uint8_t HorizontalBottomSlotImage[0x90]; // 0x02D8 (0x0090)
    uint8_t NormalThumbImage[0x90]; // 0x0368 (0x0090)
    uint8_t HoveredThumbImage[0x90]; // 0x03F8 (0x0090)
    uint8_t DraggedThumbImage[0x90]; // 0x0488 (0x0090)
};

// ScriptStruct: SlateCore.TextBlockStyle
struct TextBlockStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t Font[0x40]; // 0x0008 (0x0040)
    uint8_t ColorAndOpacity[0x28]; // 0x0048 (0x0028)
    uint8_t ShadowOffset[0x8]; // 0x0070 (0x0008)
    uint8_t ShadowColorAndOpacity[0x10]; // 0x0078 (0x0010)
    uint8_t SelectedBackgroundColor[0x28]; // 0x0088 (0x0028)
    uint8_t HighlightColor[0x10]; // 0x00B0 (0x0010)
    uint8_t HighlightShape[0x90]; // 0x00C0 (0x0090)
};

// ScriptStruct: SlateCore.SpinBoxStyle
struct SpinBoxStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t BackgroundBrush[0x90]; // 0x0008 (0x0090)
    uint8_t HoveredBackgroundBrush[0x90]; // 0x0098 (0x0090)
    uint8_t ActiveFillBrush[0x90]; // 0x0128 (0x0090)
    uint8_t InactiveFillBrush[0x90]; // 0x01B8 (0x0090)
    uint8_t ArrowsImage[0x90]; // 0x0248 (0x0090)
    uint8_t ForegroundColor[0x28]; // 0x02D8 (0x0028)
    uint8_t TextPadding[0x10]; // 0x0300 (0x0010)
};

// ScriptStruct: SlateCore.CompositeFont
struct CompositeFont {
    uint8_t DefaultTypeface[0x10]; // 0x0000 (0x0010)
    struct TArray<uint8_t> SubTypefaces; // 0x0010 (0x0010)
};

// ScriptStruct: SlateCore.CompositeSubFont
struct CompositeSubFont {
    uint8_t Typeface[0x10]; // 0x0000 (0x0010)
    struct TArray<uint8_t> CharacterRanges; // 0x0010 (0x0010)
    float ScalingFactor; // 0x0020 (0x0004)
};

// ScriptStruct: SlateCore.Typeface
struct Typeface {
    struct TArray<uint8_t> Fonts; // 0x0000 (0x0010)
};

// ScriptStruct: SlateCore.TypefaceEntry
struct TypefaceEntry {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t Font[0x30]; // 0x0008 (0x0030)
};

// ScriptStruct: SlateCore.FontData
struct FontData {
    struct FString FontFilename; // 0x0000 (0x0010)
    class UObject* BulkDataPtr; // 0x0010 (0x0008)
    uint8_t Hinting; // 0x0018 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0019 (0x0007)
    struct TArray<uint8_t> FontData; // 0x0020 (0x0010)
};

// ScriptStruct: SlateCore.WindowStyle
struct WindowStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t MinimizeButtonStyle[0x2A8]; // 0x0008 (0x02A8)
    uint8_t MaximizeButtonStyle[0x2A8]; // 0x02B0 (0x02A8)
    uint8_t RestoreButtonStyle[0x2A8]; // 0x0558 (0x02A8)
    uint8_t CloseButtonStyle[0x2A8]; // 0x0800 (0x02A8)
    uint8_t TitleTextStyle[0x150]; // 0x0AA8 (0x0150)
    uint8_t ActiveTitleBrush[0x90]; // 0x0BF8 (0x0090)
    uint8_t InactiveTitleBrush[0x90]; // 0x0C88 (0x0090)
    uint8_t FlashTitleBrush[0x90]; // 0x0D18 (0x0090)
    uint8_t OutlineBrush[0x90]; // 0x0DA8 (0x0090)
    uint8_t OutlineColor[0x28]; // 0x0E38 (0x0028)
    uint8_t BorderBrush[0x90]; // 0x0E60 (0x0090)
    uint8_t BackgroundBrush[0x90]; // 0x0EF0 (0x0090)
    uint8_t ChildBackgroundBrush[0x90]; // 0x0F80 (0x0090)
};

// ScriptStruct: SlateCore.ScrollBorderStyle
struct ScrollBorderStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t TopShadowBrush[0x90]; // 0x0008 (0x0090)
    uint8_t BottomShadowBrush[0x90]; // 0x0098 (0x0090)
};

// ScriptStruct: SlateCore.ScrollBoxStyle
struct ScrollBoxStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t TopShadowBrush[0x90]; // 0x0008 (0x0090)
    uint8_t BottomShadowBrush[0x90]; // 0x0098 (0x0090)
    uint8_t LeftShadowBrush[0x90]; // 0x0128 (0x0090)
    uint8_t RightShadowBrush[0x90]; // 0x01B8 (0x0090)
};

// ScriptStruct: SlateCore.DockTabStyle
struct DockTabStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t CloseButtonStyle[0x2A8]; // 0x0008 (0x02A8)
    uint8_t NormalBrush[0x90]; // 0x02B0 (0x0090)
    uint8_t ActiveBrush[0x90]; // 0x0340 (0x0090)
    uint8_t ColorOverlayBrush[0x90]; // 0x03D0 (0x0090)
    uint8_t ForegroundBrush[0x90]; // 0x0460 (0x0090)
    uint8_t HoveredBrush[0x90]; // 0x04F0 (0x0090)
    uint8_t ContentAreaBrush[0x90]; // 0x0580 (0x0090)
    uint8_t TabWellBrush[0x90]; // 0x0610 (0x0090)
    uint8_t TabPadding[0x10]; // 0x06A0 (0x0010)
    float OverlapWidth; // 0x06B0 (0x0004)
    uint8_t Pad_1[0x4]; // 0x06B4 (0x0004)
    uint8_t FlashColor[0x28]; // 0x06B8 (0x0028)
};

// ScriptStruct: SlateCore.HeaderRowStyle
struct HeaderRowStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t ColumnStyle[0x518]; // 0x0008 (0x0518)
    uint8_t LastColumnStyle[0x518]; // 0x0520 (0x0518)
    uint8_t ColumnSplitterStyle[0x128]; // 0x0A38 (0x0128)
    uint8_t BackgroundBrush[0x90]; // 0x0B60 (0x0090)
    uint8_t ForegroundColor[0x28]; // 0x0BF0 (0x0028)
};

// ScriptStruct: SlateCore.SplitterStyle
struct SplitterStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t HandleNormalBrush[0x90]; // 0x0008 (0x0090)
    uint8_t HandleHighlightBrush[0x90]; // 0x0098 (0x0090)
};

// ScriptStruct: SlateCore.TableColumnHeaderStyle
struct TableColumnHeaderStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t SortPrimaryAscendingImage[0x90]; // 0x0008 (0x0090)
    uint8_t SortPrimaryDescendingImage[0x90]; // 0x0098 (0x0090)
    uint8_t SortSecondaryAscendingImage[0x90]; // 0x0128 (0x0090)
    uint8_t SortSecondaryDescendingImage[0x90]; // 0x01B8 (0x0090)
    uint8_t NormalBrush[0x90]; // 0x0248 (0x0090)
    uint8_t HoveredBrush[0x90]; // 0x02D8 (0x0090)
    uint8_t MenuDropdownImage[0x90]; // 0x0368 (0x0090)
    uint8_t MenuDropdownNormalBorderBrush[0x90]; // 0x03F8 (0x0090)
    uint8_t MenuDropdownHoveredBorderBrush[0x90]; // 0x0488 (0x0090)
};

// ScriptStruct: SlateCore.TableRowStyle
struct TableRowStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t SelectorFocusedBrush[0x90]; // 0x0008 (0x0090)
    uint8_t ActiveHoveredBrush[0x90]; // 0x0098 (0x0090)
    uint8_t ActiveBrush[0x90]; // 0x0128 (0x0090)
    uint8_t InactiveHoveredBrush[0x90]; // 0x01B8 (0x0090)
    uint8_t InactiveBrush[0x90]; // 0x0248 (0x0090)
    uint8_t EvenRowBackgroundHoveredBrush[0x90]; // 0x02D8 (0x0090)
    uint8_t EvenRowBackgroundBrush[0x90]; // 0x0368 (0x0090)
    uint8_t OddRowBackgroundHoveredBrush[0x90]; // 0x03F8 (0x0090)
    uint8_t OddRowBackgroundBrush[0x90]; // 0x0488 (0x0090)
    uint8_t TextColor[0x28]; // 0x0518 (0x0028)
    uint8_t SelectedTextColor[0x28]; // 0x0540 (0x0028)
    uint8_t DropIndicator_Above[0x90]; // 0x0568 (0x0090)
    uint8_t DropIndicator_Onto[0x90]; // 0x05F8 (0x0090)
    uint8_t DropIndicator_Below[0x90]; // 0x0688 (0x0090)
};

// ScriptStruct: SlateCore.InlineTextImageStyle
struct InlineTextImageStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t Image[0x90]; // 0x0008 (0x0090)
    uint8_t Baseline[0x2]; // 0x0098 (0x0002)
};

// ScriptStruct: SlateCore.VolumeControlStyle
struct VolumeControlStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t SliderStyle[0x248]; // 0x0008 (0x0248)
    uint8_t HighVolumeImage[0x90]; // 0x0250 (0x0090)
    uint8_t MidVolumeImage[0x90]; // 0x02E0 (0x0090)
    uint8_t LowVolumeImage[0x90]; // 0x0370 (0x0090)
    uint8_t NoVolumeImage[0x90]; // 0x0400 (0x0090)
    uint8_t MutedImage[0x90]; // 0x0490 (0x0090)
};

// ScriptStruct: SlateCore.SliderStyle
struct SliderStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t NormalBarImage[0x90]; // 0x0008 (0x0090)
    uint8_t DisabledBarImage[0x90]; // 0x0098 (0x0090)
    uint8_t NormalThumbImage[0x90]; // 0x0128 (0x0090)
    uint8_t DisabledThumbImage[0x90]; // 0x01B8 (0x0090)
};

// ScriptStruct: SlateCore.SearchBoxStyle
struct SearchBoxStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t TextBoxStyle[0x848]; // 0x0008 (0x0848)
    uint8_t ActiveFontInfo[0x40]; // 0x0850 (0x0040)
    uint8_t UpArrowImage[0x90]; // 0x0890 (0x0090)
    uint8_t DownArrowImage[0x90]; // 0x0920 (0x0090)
    uint8_t GlassImage[0x90]; // 0x09B0 (0x0090)
    uint8_t ClearImage[0x90]; // 0x0A40 (0x0090)
    uint8_t ImagePadding[0x10]; // 0x0AD0 (0x0010)
    bool bLeftAlignButtons; // 0x0AE0 (0x0001)
};

// ScriptStruct: SlateCore.ExpandableAreaStyle
struct ExpandableAreaStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t CollapsedImage[0x90]; // 0x0008 (0x0090)
    uint8_t ExpandedImage[0x90]; // 0x0098 (0x0090)
};

// ScriptStruct: SlateCore.ProgressBarStyle
struct ProgressBarStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t BackgroundImage[0x90]; // 0x0008 (0x0090)
    uint8_t FillImage[0x90]; // 0x0098 (0x0090)
    uint8_t MarqueeImage[0x90]; // 0x0128 (0x0090)
};

// ScriptStruct: SlateCore.InlineEditableTextBlockStyle
struct InlineEditableTextBlockStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t EditableTextBoxStyle[0x848]; // 0x0008 (0x0848)
    uint8_t TextStyle[0x150]; // 0x0850 (0x0150)
};

// ScriptStruct: SlateCore.HyperlinkStyle
struct HyperlinkStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t UnderlineStyle[0x2A8]; // 0x0008 (0x02A8)
    uint8_t TextStyle[0x150]; // 0x02B0 (0x0150)
    uint8_t Padding[0x10]; // 0x0400 (0x0010)
};

// ScriptStruct: SlateCore.CheckBoxStyle
struct CheckBoxStyle : public SlateWidgetStyle {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    uint8_t CheckBoxType; // 0x0008 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0009 (0x0007)
    uint8_t UncheckedImage[0x90]; // 0x0010 (0x0090)
    uint8_t UncheckedHoveredImage[0x90]; // 0x00A0 (0x0090)
    uint8_t UncheckedPressedImage[0x90]; // 0x0130 (0x0090)
    uint8_t CheckedImage[0x90]; // 0x01C0 (0x0090)
    uint8_t CheckedHoveredImage[0x90]; // 0x0250 (0x0090)
    uint8_t CheckedPressedImage[0x90]; // 0x02E0 (0x0090)
    uint8_t UndeterminedImage[0x90]; // 0x0370 (0x0090)
    uint8_t UndeterminedHoveredImage[0x90]; // 0x0400 (0x0090)
    uint8_t UndeterminedPressedImage[0x90]; // 0x0490 (0x0090)
    uint8_t Padding[0x10]; // 0x0520 (0x0010)
    uint8_t ForegroundColor[0x28]; // 0x0530 (0x0028)
    uint8_t BorderBackgroundColor[0x28]; // 0x0558 (0x0028)
    uint8_t CheckedSlateSound[0x18]; // 0x0580 (0x0018)
    uint8_t UncheckedSlateSound[0x18]; // 0x0598 (0x0018)
    uint8_t HoveredSlateSound[0x18]; // 0x05B0 (0x0018)
    struct FName CheckedSound; // 0x05C8 (0x0008)
    struct FName UncheckedSound; // 0x05D0 (0x0008)
    struct FName HoveredSound; // 0x05D8 (0x0008)
};

// ScriptStruct: SlateCore.NavigationEvent
struct NavigationEvent : public InputEvent {
};

// ScriptStruct: SlateCore.MotionEvent
struct MotionEvent : public InputEvent {
};

// ScriptStruct: SlateCore.ControllerEvent
struct ControllerEvent : public InputEvent {
};

// ScriptStruct: SlateCore.CharacterEvent
struct CharacterEvent : public InputEvent {
};

// ScriptStruct: SlateCore.AnalogInputEvent
struct AnalogInputEvent : public KeyEvent {
};

// ScriptStruct: SlateCore.KeyEvent
struct KeyEvent : public InputEvent {
};

// ScriptStruct: SlateCore.FocusEvent
struct FocusEvent {
};

} // namespace SDK

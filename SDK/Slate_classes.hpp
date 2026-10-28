#pragma once
#include "Basic.hpp"
#include "Slate_structs.hpp"

namespace SDK {

// Class: Slate.ButtonWidgetStyle
class ButtonWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ButtonStyle[0x2A8]; // 0x0030 (0x02A8)
};

// Class: Slate.CheckBoxWidgetStyle
class CheckBoxWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t CheckBoxStyle[0x5E0]; // 0x0030 (0x05E0)
};

// Class: Slate.ComboBoxWidgetStyle
class ComboBoxWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ComboBoxStyle[0x428]; // 0x0030 (0x0428)
};

// Class: Slate.ComboButtonWidgetStyle
class ComboButtonWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ComboButtonStyle[0x3E0]; // 0x0030 (0x03E0)
};

// Class: Slate.EditableTextBoxWidgetStyle
class EditableTextBoxWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t EditableTextBoxStyle[0x848]; // 0x0030 (0x0848)
};

// Class: Slate.EditableTextWidgetStyle
class EditableTextWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t EditableTextStyle[0x220]; // 0x0030 (0x0220)
};

// Class: Slate.ProgressWidgetStyle
class ProgressWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ProgressBarStyle[0x1B8]; // 0x0030 (0x01B8)
};

// Class: Slate.ScrollBarWidgetStyle
class ScrollBarWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ScrollBarStyle[0x518]; // 0x0030 (0x0518)
};

// Class: Slate.ScrollBoxWidgetStyle
class ScrollBoxWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t ScrollBoxStyle[0x248]; // 0x0030 (0x0248)
};

// Class: Slate.SpinBoxWidgetStyle
class SpinBoxWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t SpinBoxStyle[0x310]; // 0x0030 (0x0310)
};

// Class: Slate.TextBlockWidgetStyle
class TextBlockWidgetStyle : public SlateWidgetStyleContainerBase {
public:
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t TextBlockStyle[0x150]; // 0x0030 (0x0150)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: EditorStyle.EditorStyleSettings
class EditorStyleSettings : public Object {
public:
    uint8_t SelectionColor[0x10]; // 0x0028 (0x0010)
    uint8_t PressedSelectionColor[0x10]; // 0x0038 (0x0010)
    uint8_t InactiveSelectionColor[0x10]; // 0x0048 (0x0010)
    uint8_t KeyboardFocusColor[0x10]; // 0x0058 (0x0010)
    uint8_t ColorVisionDeficiencyPreviewType; // 0x0068 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0069 (0x0003)
    bool bUseSmallToolBarIcons; // 0x006C (0x0001)
    bool bEnableWindowAnimations; // 0x006C (0x0001)
    bool bShowFriendlyNames; // 0x006C (0x0001)
    bool bExpandConfigurationMenus; // 0x006C (0x0001)
    bool bShowProjectMenus; // 0x006C (0x0001)
    bool bShowLaunchMenus; // 0x006C (0x0001)
    uint8_t Pad_1[0x3]; // 0x006D (0x0003)
    uint8_t LogTimestampMode; // 0x0070 (0x0001)
    bool bPromoteOutputLogWarningsDuringPIE; // 0x0071 (0x0001)
    bool bOpenAssetEditorTabsInNewWindow; // 0x0072 (0x0001)
};

} // namespace SDK

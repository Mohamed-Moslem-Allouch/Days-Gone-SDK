#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Slate.Anchors
struct Anchors {
    uint8_t Minimum[0x8]; // 0x0000 (0x0008)
    uint8_t Maximum[0x8]; // 0x0008 (0x0008)
};

// ScriptStruct: Slate.InputChord
struct InputChord {
    uint8_t Key[0x18]; // 0x0000 (0x0018)
    bool bShift; // 0x0018 (0x0001)
    bool bCtrl; // 0x0018 (0x0001)
    bool bAlt; // 0x0018 (0x0001)
    bool bCmd; // 0x0018 (0x0001)
};

} // namespace SDK

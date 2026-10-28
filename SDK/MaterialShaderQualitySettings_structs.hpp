#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: MaterialShaderQualitySettings.MaterialQualityOverrides
struct MaterialQualityOverrides {
    bool bEnableOverride; // 0x0000 (0x0001)
    bool bForceFullyRough; // 0x0001 (0x0001)
    bool bForceNonMetal; // 0x0002 (0x0001)
    bool bForceDisableLMDirectionality; // 0x0003 (0x0001)
    bool bForceLQReflections; // 0x0004 (0x0001)
};

// ScriptStruct: MaterialShaderQualitySettings.ShaderQualityOverridesListItem
struct ShaderQualityOverridesListItem {
    struct FString RangeName; // 0x0000 (0x0010)
    class UObject* QualityProperty; // 0x0010 (0x0008)
    class UObject* SettingContainer; // 0x0018 (0x0008)
};

} // namespace SDK

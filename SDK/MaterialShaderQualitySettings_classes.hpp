#pragma once
#include "Basic.hpp"
#include "MaterialShaderQualitySettings_structs.hpp"

namespace SDK {

// Class: MaterialShaderQualitySettings.ShaderPlatformQualitySettings
class ShaderPlatformQualitySettings : public Object {
public:
    uint8_t QualityOverrides[0x5]; // 0x0028 (0x0005)
};

// Class: MaterialShaderQualitySettings.MaterialShaderQualitySettings
class MaterialShaderQualitySettings : public Object {
public:
    uint8_t ForwardSettingMap[0x50]; // 0x0028 (0x0050)
};

} // namespace SDK

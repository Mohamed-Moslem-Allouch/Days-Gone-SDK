#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: LightPropagationVolumeRuntime.LightPropagationVolumeSettings
struct LightPropagationVolumeSettings {
    bool bOverride_LPVIntensity; // 0x0000 (0x0001)
    bool bOverride_LPVDirectionalOcclusionIntensity; // 0x0000 (0x0001)
    bool bOverride_LPVDirectionalOcclusionRadius; // 0x0000 (0x0001)
    bool bOverride_LPVDiffuseOcclusionExponent; // 0x0000 (0x0001)
    bool bOverride_LPVSpecularOcclusionExponent; // 0x0000 (0x0001)
    bool bOverride_LPVDiffuseOcclusionIntensity; // 0x0000 (0x0001)
    bool bOverride_LPVSpecularOcclusionIntensity; // 0x0000 (0x0001)
    bool bOverride_LPVSize; // 0x0000 (0x0001)
    bool bOverride_LPVSecondaryOcclusionIntensity; // 0x0001 (0x0001)
    bool bOverride_LPVSecondaryBounceIntensity; // 0x0001 (0x0001)
    bool bOverride_LPVGeometryVolumeBias; // 0x0001 (0x0001)
    bool bOverride_LPVVplInjectionBias; // 0x0001 (0x0001)
    bool bOverride_LPVEmissiveInjectionIntensity; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    float LPVIntensity; // 0x0004 (0x0004)
    float LPVVplInjectionBias; // 0x0008 (0x0004)
    float LPVSize; // 0x000C (0x0004)
    float LPVSecondaryOcclusionIntensity; // 0x0010 (0x0004)
    float LPVSecondaryBounceIntensity; // 0x0014 (0x0004)
    float LPVGeometryVolumeBias; // 0x0018 (0x0004)
    float LPVEmissiveInjectionIntensity; // 0x001C (0x0004)
    float LPVDirectionalOcclusionIntensity; // 0x0020 (0x0004)
    float LPVDirectionalOcclusionRadius; // 0x0024 (0x0004)
    float LPVDiffuseOcclusionExponent; // 0x0028 (0x0004)
    float LPVSpecularOcclusionExponent; // 0x002C (0x0004)
    float LPVDiffuseOcclusionIntensity; // 0x0030 (0x0004)
    float LPVSpecularOcclusionIntensity; // 0x0034 (0x0004)
};

} // namespace SDK

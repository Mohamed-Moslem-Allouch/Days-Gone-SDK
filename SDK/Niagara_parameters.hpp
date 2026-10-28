#pragma once
#include "Basic.hpp"
#include "Niagara_structs.hpp"

namespace SDK {

// Function: Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// Size: 0x0040
struct NiagaraFunctionLibrary_SpawnEffectAttached_Params {
public:
    class UObject* EffectTemplate; // 0x0000 (0x0008)
    class UObject* AttachToComponent; // 0x0008 (0x0008)
    struct FName AttachPointName; // 0x0010 (0x0008)
    uint8_t Location[0xC]; // 0x0018 (0x000C)
    uint8_t Rotation[0xC]; // 0x0024 (0x000C)
    uint8_t LocationType; // 0x0030 (0x0001)
    bool bAutoDestroy; // 0x0031 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0032 (0x0006)
    class UObject* ReturnValue; // 0x0038 (0x0008)
};

// Function: Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// Size: 0x0038
struct NiagaraFunctionLibrary_SpawnEffectAtLocation_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UObject* EffectTemplate; // 0x0008 (0x0008)
    uint8_t Location[0xC]; // 0x0010 (0x000C)
    uint8_t Rotation[0xC]; // 0x001C (0x000C)
    bool bAutoDestroy; // 0x0028 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0029 (0x0007)
    class UObject* ReturnValue; // 0x0030 (0x0008)
};

// Function: Niagara.NiagaraFunctionLibrary.SetUpdateScriptConstant
// Size: 0x0024
struct NiagaraFunctionLibrary_SetUpdateScriptConstant_Params {
public:
    class UObject* Component; // 0x0000 (0x0008)
    struct FName EmitterName; // 0x0008 (0x0008)
    struct FName ConstantName; // 0x0010 (0x0008)
    uint8_t Value[0xC]; // 0x0018 (0x000C)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Niagara.NiagaraDataSetID
struct NiagaraDataSetID {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t Type; // 0x0008 (0x0001)
};

// ScriptStruct: Niagara.NiagaraVariableInfo
struct NiagaraVariableInfo {
    struct FName Name; // 0x0000 (0x0008)
    uint8_t Type; // 0x0008 (0x0001)
};

// ScriptStruct: Niagara.NiagaraConstants
struct NiagaraConstants {
    struct TArray<uint8_t> ScalarConstants; // 0x0000 (0x0010)
    struct TArray<uint8_t> VectorConstants; // 0x0010 (0x0010)
    struct TArray<uint8_t> MatrixConstants; // 0x0020 (0x0010)
    struct TArray<uint8_t> DataObjectConstants; // 0x0030 (0x0010)
};

// ScriptStruct: Niagara.NiagaraConstants_DataObject
struct NiagaraConstants_DataObject : public NiagaraConstantBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    class UObject* Value; // 0x0008 (0x0008)
};

// ScriptStruct: Niagara.NiagaraConstantBase
struct NiagaraConstantBase {
    struct FName Name; // 0x0000 (0x0008)
};

// ScriptStruct: Niagara.NiagaraConstants_Matrix
struct NiagaraConstants_Matrix : public NiagaraConstantBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t Value[0x40]; // 0x0010 (0x0040)
};

// ScriptStruct: Niagara.NiagaraConstants_Vector
struct NiagaraConstants_Vector : public NiagaraConstantBase {
    uint8_t Pad_0[0x10]; // 0x0000 (0x0010)
    uint8_t Value[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: Niagara.NiagaraConstants_Float
struct NiagaraConstants_Float : public NiagaraConstantBase {
    uint8_t Pad_0[0x8]; // 0x0000 (0x0008)
    float Value; // 0x0008 (0x0004)
};

// ScriptStruct: Niagara.DeprecatedNiagaraConstants
struct DeprecatedNiagaraConstants {
    struct TArray<uint8_t> ScalarConstantsInfo; // 0x0000 (0x0010)
    struct TArray<uint8_t> VectorConstantsInfo; // 0x0010 (0x0010)
    struct TArray<uint8_t> MatrixConstantsInfo; // 0x0020 (0x0010)
    uint8_t Pad_0[0x10]; // 0x0030 (0x0010)
    struct TArray<uint8_t> ScalarConstants; // 0x0040 (0x0010)
    struct TArray<uint8_t> VectorConstants; // 0x0050 (0x0010)
    struct TArray<uint8_t> MatrixConstants; // 0x0060 (0x0010)
};

// ScriptStruct: Niagara.NiagaraConstantMap
struct NiagaraConstantMap {
};

// ScriptStruct: Niagara.NiagaraScriptConstantData
struct NiagaraScriptConstantData {
    uint8_t ExternalConstants[0x80]; // 0x0000 (0x0080)
    uint8_t InternalConstants[0x80]; // 0x0080 (0x0080)
    uint8_t ExternalConstantsNew[0x40]; // 0x0100 (0x0040)
    uint8_t InternalConstantsNew[0x40]; // 0x0140 (0x0040)
};

// ScriptStruct: Niagara.NiagaraScriptUsageInfo
struct NiagaraScriptUsageInfo {
    bool bReadsAttriubteData; // 0x0000 (0x0001)
};

// ScriptStruct: Niagara.NiagaraDataSetProperties
struct NiagaraDataSetProperties {
    uint8_t Id[0x10]; // 0x0000 (0x0010)
    struct TArray<uint8_t> Variables; // 0x0010 (0x0010)
};

// ScriptStruct: Niagara.DeprecatedNiagaraEmitterProperties
struct DeprecatedNiagaraEmitterProperties {
    struct FString Name; // 0x0000 (0x0010)
    bool bIsEnabled; // 0x0010 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0011 (0x0003)
    float SpawnRate; // 0x0014 (0x0004)
    class UObject* UpdateScript; // 0x0018 (0x0008)
    class UObject* SpawnScript; // 0x0020 (0x0008)
    class UObject* Material; // 0x0028 (0x0008)
    uint8_t RenderModuleType; // 0x0030 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0031 (0x0003)
    float StartTime; // 0x0034 (0x0004)
    float EndTime; // 0x0038 (0x0004)
    uint8_t Pad_2[0x4]; // 0x003C (0x0004)
    class UObject* RendererProperties; // 0x0040 (0x0008)
    uint8_t ExternalConstants[0x148]; // 0x0048 (0x0148)
    uint8_t ExternalSpawnConstants[0x148]; // 0x0190 (0x0148)
    int32_t NumLoops; // 0x02D8 (0x0004)
};

// ScriptStruct: Niagara.NiagaraEmitterScriptProperties
struct NiagaraEmitterScriptProperties {
    class UObject* Script; // 0x0000 (0x0008)
    uint8_t ExternalConstants[0x40]; // 0x0008 (0x0040)
    struct TArray<uint8_t> EventReceivers; // 0x0048 (0x0010)
    struct TArray<uint8_t> EventGenerators; // 0x0058 (0x0010)
};

// ScriptStruct: Niagara.NiagaraEventGeneratorProperties
struct NiagaraEventGeneratorProperties : public NiagaraDataSetProperties {
    uint8_t Pad_0[0x20]; // 0x0000 (0x0020)
    int32_t MaxEventsPerFrame; // 0x0020 (0x0004)
};

// ScriptStruct: Niagara.NiagaraEventReceiverProperties
struct NiagaraEventReceiverProperties {
    struct FName Name; // 0x0000 (0x0008)
    struct FName SourceEventGenerator; // 0x0008 (0x0008)
    struct FName SourceEmitter; // 0x0010 (0x0008)
    struct TArray<uint8_t> EmitterActions; // 0x0018 (0x0010)
};

} // namespace SDK

#pragma once
#include "Basic.hpp"
#include "Niagara_structs.hpp"

namespace SDK {

// Class: Niagara.NiagaraActor
class NiagaraActor : public Actor {
public:
    uint8_t Pad_0[0x320]; // 0x0028 (0x0320)
    class UObject* NiagaraComponent; // 0x0348 (0x0008)
};

// Class: Niagara.NiagaraComponent
class NiagaraComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    class UObject* Asset; // 0x05D0 (0x0008)
};

// Class: Niagara.NiagaraScript
class NiagaraScript : public Object {
public:
    struct TArray<uint8_t> ByteCode; // 0x0028 (0x0010)
    uint8_t ConstantData[0x180]; // 0x0038 (0x0180)
    struct TArray<uint8_t> Attributes; // 0x01B8 (0x0010)
    struct TArray<uint8_t> EventReceivers; // 0x01C8 (0x0010)
    struct TArray<uint8_t> EventGenerators; // 0x01D8 (0x0010)
    uint8_t Usage; // 0x01E8 (0x0001)
};

// Class: Niagara.NiagaraEmitterProperties
class NiagaraEmitterProperties : public Object {
public:
    struct FString EmitterName; // 0x0028 (0x0010)
    bool bIsEnabled; // 0x0038 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0039 (0x0003)
    float SpawnRate; // 0x003C (0x0004)
    class UObject* Material; // 0x0040 (0x0008)
    uint8_t RenderModuleType; // 0x0048 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0049 (0x0003)
    float StartTime; // 0x004C (0x0004)
    float EndTime; // 0x0050 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0054 (0x0004)
    class UObject* RendererProperties; // 0x0058 (0x0008)
    int32_t NumLoops; // 0x0060 (0x0004)
    uint8_t Pad_3[0x4]; // 0x0064 (0x0004)
    uint8_t UpdateScriptProps[0x68]; // 0x0068 (0x0068)
    uint8_t SpawnScriptProps[0x68]; // 0x00D0 (0x0068)
};

// Class: Niagara.NiagaraEffect
class NiagaraEffect : public Object {
public:
    struct TArray<uint8_t> EmitterPropsSerialized; // 0x0028 (0x0010)
    struct TArray<uint8_t> EmitterProps; // 0x0038 (0x0010)
};

// Class: Niagara.NiagaraEventReceiverEmitterAction
class NiagaraEventReceiverEmitterAction : public Object {
public:
};

// Class: Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class NiagaraEventReceiverEmitterAction_SpawnParticles : public NiagaraEventReceiverEmitterAction {
public:
    uint8_t NumParticles[0x4]; // 0x0028 (0x0004)
};

// Class: Niagara.NiagaraFunctionLibrary
class NiagaraFunctionLibrary : public BlueprintFunctionLibrary {
public:

public:
    class UObject* SpawnEffectAttached(class UObject* EffectTemplate, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bAutoDestroy);
    class UObject* SpawnEffectAtLocation(class UObject* WorldContextObject, class UObject* EffectTemplate, uint8_t Location, uint8_t Rotation, bool bAutoDestroy);
    void SetUpdateScriptConstant(class UObject* Component, struct FName EmitterName, struct FName ConstantName, uint8_t Value);
};

// Class: Niagara.NiagaraScriptSourceBase
class NiagaraScriptSourceBase : public Object {
public:
};

// Class: Niagara.NiagaraSequence
class NiagaraSequence : public MovieSceneSequence {
public:
    class UObject* MovieScene; // 0x0028 (0x0008)
};

} // namespace SDK

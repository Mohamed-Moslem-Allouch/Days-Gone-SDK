#include "Basic.hpp"
#include "Niagara_classes.hpp"
#include "Niagara_parameters.hpp"

namespace SDK {

// Function: Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
class UObject* NiagaraFunctionLibrary::SpawnEffectAttached(class UObject* EffectTemplate, class UObject* AttachToComponent, struct FName AttachPointName, uint8_t Location, uint8_t Rotation, uint8_t LocationType, bool bAutoDestroy) {
    static class UFunction* Func = nullptr;
    NiagaraFunctionLibrary_SpawnEffectAttached_Params Parms{};
    Parms.EffectTemplate = EffectTemplate;
    Parms.AttachToComponent = AttachToComponent;
    Parms.AttachPointName = AttachPointName;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.LocationType = LocationType;
    Parms.bAutoDestroy = bAutoDestroy;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
class UObject* NiagaraFunctionLibrary::SpawnEffectAtLocation(class UObject* WorldContextObject, class UObject* EffectTemplate, uint8_t Location, uint8_t Rotation, bool bAutoDestroy) {
    static class UFunction* Func = nullptr;
    NiagaraFunctionLibrary_SpawnEffectAtLocation_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.EffectTemplate = EffectTemplate;
    Parms.Location = Location;
    Parms.Rotation = Rotation;
    Parms.bAutoDestroy = bAutoDestroy;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Niagara.NiagaraFunctionLibrary.SetUpdateScriptConstant
void NiagaraFunctionLibrary::SetUpdateScriptConstant(class UObject* Component, struct FName EmitterName, struct FName ConstantName, uint8_t Value) {
    static class UFunction* Func = nullptr;
    NiagaraFunctionLibrary_SetUpdateScriptConstant_Params Parms{};
    Parms.Component = Component;
    Parms.EmitterName = EmitterName;
    Parms.ConstantName = ConstantName;
    Parms.Value = Value;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

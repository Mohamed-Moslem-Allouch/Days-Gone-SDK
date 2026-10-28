#include "Basic.hpp"
#include "Foliage_classes.hpp"
#include "Foliage_parameters.hpp"

namespace SDK {

// Function: Foliage.FoliageStatistics.FoliageOverlappingSphereCount
int32_t FoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UObject* StaticMesh, uint8_t CenterPosition, float Radius) {
    static class UFunction* Func = nullptr;
    FoliageStatistics_FoliageOverlappingSphereCount_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.StaticMesh = StaticMesh;
    Parms.CenterPosition = CenterPosition;
    Parms.Radius = Radius;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Foliage.FoliageStatistics.FoliageOverlappingBoxCount
int32_t FoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UObject* StaticMesh, uint8_t Box) {
    static class UFunction* Func = nullptr;
    FoliageStatistics_FoliageOverlappingBoxCount_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.StaticMesh = StaticMesh;
    Parms.Box = Box;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: Foliage.InteractiveFoliageActor.CapsuleTouched
void InteractiveFoliageActor::CapsuleTouched(class UObject* Other, class UObject* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, uint8_t OverlapInfo) {
    static class UFunction* Func = nullptr;
    InteractiveFoliageActor_CapsuleTouched_Params Parms{};
    Parms.Other = Other;
    Parms.OtherComp = OtherComp;
    Parms.OtherBodyIndex = OtherBodyIndex;
    Parms.bFromSweep = bFromSweep;
    Parms.OverlapInfo = OverlapInfo;
    ProcessEvent(Func, &Parms);
}

// Function: Foliage.ProceduralFoliageSpawner.Simulate
void ProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
    static class UFunction* Func = nullptr;
    ProceduralFoliageSpawner_Simulate_Params Parms{};
    Parms.NumSteps = NumSteps;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

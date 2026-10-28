#include "Basic.hpp"
#include "Landscape_classes.hpp"
#include "Landscape_parameters.hpp"

namespace SDK {

// Function: Landscape.LandscapeProxy.EditorApplySpline
void LandscapeProxy::EditorApplySpline(class UObject* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class UObject* PaintLayer) {
    static class UFunction* Func = nullptr;
    LandscapeProxy_EditorApplySpline_Params Parms{};
    Parms.InSplineComponent = InSplineComponent;
    Parms.StartWidth = StartWidth;
    Parms.EndWidth = EndWidth;
    Parms.StartSideFalloff = StartSideFalloff;
    Parms.EndSideFalloff = EndSideFalloff;
    Parms.StartRoll = StartRoll;
    Parms.EndRoll = EndRoll;
    Parms.NumSubdivisions = NumSubdivisions;
    Parms.bRaiseHeights = bRaiseHeights;
    Parms.bLowerHeights = bLowerHeights;
    Parms.PaintLayer = PaintLayer;
    ProcessEvent(Func, &Parms);
}

// Function: Landscape.LandscapeProxy.ChangeLODDistanceFactor
void LandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
    static class UFunction* Func = nullptr;
    LandscapeProxy_ChangeLODDistanceFactor_Params Parms{};
    Parms.InLODDistanceFactor = InLODDistanceFactor;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

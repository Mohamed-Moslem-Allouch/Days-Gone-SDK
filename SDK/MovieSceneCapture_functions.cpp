#include "Basic.hpp"
#include "MovieSceneCapture_classes.hpp"
#include "MovieSceneCapture_parameters.hpp"

namespace SDK {

// Function: MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
int32_t MovieSceneCaptureEnvironment::GetCaptureFrameNumber() {
    static class UFunction* Func = nullptr;
    MovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
float MovieSceneCaptureEnvironment::GetCaptureElapsedTime() {
    static class UFunction* Func = nullptr;
    MovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK

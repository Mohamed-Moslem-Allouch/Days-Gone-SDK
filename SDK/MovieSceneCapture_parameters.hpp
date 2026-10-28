#pragma once
#include "Basic.hpp"
#include "MovieSceneCapture_structs.hpp"

namespace SDK {

// Function: MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// Size: 0x0004
struct MovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// Size: 0x0004
struct MovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

} // namespace SDK

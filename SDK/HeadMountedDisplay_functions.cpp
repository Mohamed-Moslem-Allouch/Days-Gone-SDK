#include "Basic.hpp"
#include "HeadMountedDisplay_classes.hpp"
#include "HeadMountedDisplay_parameters.hpp"

namespace SDK {

// Function: HeadMountedDisplay.MotionControllerComponent.IsTracked
bool MotionControllerComponent::IsTracked() {
    static class UFunction* Func = nullptr;
    MotionControllerComponent_IsTracked_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: HeadMountedDisplay.VRNotificationsComponent.VRNotificationsDelegate__DelegateSignature
void VRNotificationsComponent::VRNotificationsDelegate__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

} // namespace SDK

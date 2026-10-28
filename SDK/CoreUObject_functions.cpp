#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "CoreUObject_parameters.hpp"

namespace SDK {

// Function: CoreUObject.Object.ExecuteUbergraph
void Object::ExecuteUbergraph(int32_t EntryPoint) {
    static class UFunction* Func = nullptr;
    Object_ExecuteUbergraph_Params Parms{};
    Parms.EntryPoint = EntryPoint;
    ProcessEvent(Func, &Parms);
}

} // namespace SDK

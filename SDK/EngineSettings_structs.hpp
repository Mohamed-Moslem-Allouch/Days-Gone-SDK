#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: EngineSettings.AutoCompleteCommand
struct AutoCompleteCommand {
    struct FString Command; // 0x0000 (0x0010)
    struct FString Desc; // 0x0010 (0x0010)
};

} // namespace SDK

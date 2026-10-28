#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: EngineMessages.EngineServiceNotification
struct EngineServiceNotification {
    struct FString Text; // 0x0000 (0x0010)
    double TimeSeconds; // 0x0010 (0x0008)
};

// ScriptStruct: EngineMessages.EngineServiceTerminate
struct EngineServiceTerminate {
    struct FString userName; // 0x0000 (0x0010)
};

// ScriptStruct: EngineMessages.EngineServiceExecuteCommand
struct EngineServiceExecuteCommand {
    struct FString Command; // 0x0000 (0x0010)
    struct FString userName; // 0x0010 (0x0010)
};

// ScriptStruct: EngineMessages.EngineServiceAuthGrant
struct EngineServiceAuthGrant {
    struct FString userName; // 0x0000 (0x0010)
    struct FString UserToGrant; // 0x0010 (0x0010)
};

// ScriptStruct: EngineMessages.EngineServiceAuthDeny
struct EngineServiceAuthDeny {
    struct FString userName; // 0x0000 (0x0010)
    struct FString UserToDeny; // 0x0010 (0x0010)
};

// ScriptStruct: EngineMessages.EngineServicePong
struct EngineServicePong {
    struct FString CurrentLevel; // 0x0000 (0x0010)
    int32_t EngineVersion; // 0x0010 (0x0004)
    bool HasBegunPlay; // 0x0014 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0015 (0x0003)
    uint8_t InstanceId[0x10]; // 0x0018 (0x0010)
    struct FString InstanceType; // 0x0028 (0x0010)
    uint8_t SessionId[0x10]; // 0x0038 (0x0010)
    float WorldTimeSeconds; // 0x0048 (0x0004)
};

// ScriptStruct: EngineMessages.EngineServicePing
struct EngineServicePing {
};

} // namespace SDK

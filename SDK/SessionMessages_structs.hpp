#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: SessionMessages.SessionServiceLogUnsubscribe
struct SessionServiceLogUnsubscribe {
};

// ScriptStruct: SessionMessages.SessionServiceLogSubscribe
struct SessionServiceLogSubscribe {
};

// ScriptStruct: SessionMessages.SessionServiceLog
struct SessionServiceLog {
    struct FName Category; // 0x0000 (0x0008)
    struct FString Data; // 0x0008 (0x0010)
    uint8_t InstanceId[0x10]; // 0x0018 (0x0010)
    double TimeSeconds; // 0x0028 (0x0008)
    uint8_t Verbosity; // 0x0030 (0x0001)
};

// ScriptStruct: SessionMessages.SessionServicePong
struct SessionServicePong {
    bool Authorized; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString BuildDate; // 0x0008 (0x0010)
    struct FString DeviceName; // 0x0018 (0x0010)
    uint8_t InstanceId[0x10]; // 0x0028 (0x0010)
    struct FString InstanceName; // 0x0038 (0x0010)
    bool IsConsoleBuild; // 0x0048 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0049 (0x0007)
    struct FString PlatformName; // 0x0050 (0x0010)
    uint8_t SessionId[0x10]; // 0x0060 (0x0010)
    struct FString SessionName; // 0x0070 (0x0010)
    struct FString SessionOwner; // 0x0080 (0x0010)
    bool Standalone; // 0x0090 (0x0001)
};

// ScriptStruct: SessionMessages.SessionServicePing
struct SessionServicePing {
    struct FString userName; // 0x0000 (0x0010)
};

} // namespace SDK

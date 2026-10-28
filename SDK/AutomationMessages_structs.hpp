#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: AutomationMessages.AutomationWorkerScreenImage
struct AutomationWorkerScreenImage {
    struct TArray<uint8_t> ScreenImage; // 0x0000 (0x0010)
    struct FString ScreenShotName; // 0x0010 (0x0010)
};

// ScriptStruct: AutomationMessages.AutomationWorkerNextNetworkCommandReply
struct AutomationWorkerNextNetworkCommandReply {
};

// ScriptStruct: AutomationMessages.AutomationWorkerRequestNextNetworkCommand
struct AutomationWorkerRequestNextNetworkCommand {
    uint8_t ExecutionCount[0x4]; // 0x0000 (0x0004)
};

// ScriptStruct: AutomationMessages.AutomationWorkerRunTestsReply
struct AutomationWorkerRunTestsReply {
    float Duration; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct TArray<uint8_t> Errors; // 0x0008 (0x0010)
    uint8_t ExecutionCount[0x4]; // 0x0018 (0x0004)
    uint8_t Pad_1[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> Logs; // 0x0020 (0x0010)
    bool Success; // 0x0030 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0031 (0x0007)
    struct FString TestName; // 0x0038 (0x0010)
    struct TArray<uint8_t> Warnings; // 0x0048 (0x0010)
};

// ScriptStruct: AutomationMessages.AutomationWorkerRunTests
struct AutomationWorkerRunTests {
    uint8_t ExecutionCount[0x4]; // 0x0000 (0x0004)
    int32_t RoleIndex; // 0x0004 (0x0004)
    struct FString TestName; // 0x0008 (0x0010)
    struct FString BeautifiedTestName; // 0x0018 (0x0010)
    bool bScreenshotsEnabled; // 0x0028 (0x0001)
    bool bUseFullSizeScreenShots; // 0x0029 (0x0001)
    bool bSendAnalytics; // 0x002A (0x0001)
};

// ScriptStruct: AutomationMessages.AutomationWorkerRequestTestsReplyComplete
struct AutomationWorkerRequestTestsReplyComplete {
};

// ScriptStruct: AutomationMessages.AutomationWorkerRequestTestsReply
struct AutomationWorkerRequestTestsReply {
    struct FString TestInfo; // 0x0000 (0x0010)
    int32_t TotalNumTests; // 0x0010 (0x0004)
};

// ScriptStruct: AutomationMessages.AutomationWorkerRequestTests
struct AutomationWorkerRequestTests {
    bool DeveloperDirectoryIncluded; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t RequestedTestFlags[0x4]; // 0x0004 (0x0004)
};

// ScriptStruct: AutomationMessages.AutomationWorkerPong
struct AutomationWorkerPong {
};

// ScriptStruct: AutomationMessages.AutomationWorkerResetTests
struct AutomationWorkerResetTests {
};

// ScriptStruct: AutomationMessages.AutomationWorkerPing
struct AutomationWorkerPing {
};

// ScriptStruct: AutomationMessages.AutomationWorkerWorkerOffline
struct AutomationWorkerWorkerOffline {
};

// ScriptStruct: AutomationMessages.AutomationWorkerFindWorkersResponse
struct AutomationWorkerFindWorkersResponse {
    struct FString DeviceName; // 0x0000 (0x0010)
    struct FString InstanceName; // 0x0010 (0x0010)
    struct FString Platform; // 0x0020 (0x0010)
    struct FString OSVersionName; // 0x0030 (0x0010)
    struct FString ModelName; // 0x0040 (0x0010)
    struct FString GPUName; // 0x0050 (0x0010)
    struct FString CPUModelName; // 0x0060 (0x0010)
    uint8_t RAMInGB[0x4]; // 0x0070 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0074 (0x0004)
    struct FString RenderModeName; // 0x0078 (0x0010)
    uint8_t SessionId[0x10]; // 0x0088 (0x0010)
};

// ScriptStruct: AutomationMessages.AutomationWorkerFindWorkers
struct AutomationWorkerFindWorkers {
    int32_t Changelist; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString GameName; // 0x0008 (0x0010)
    struct FString ProcessName; // 0x0018 (0x0010)
    uint8_t SessionId[0x10]; // 0x0028 (0x0010)
};

} // namespace SDK

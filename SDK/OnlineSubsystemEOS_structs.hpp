#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: OnlineSubsystemEOS.ArtifactSettings
struct ArtifactSettings {
    struct FString ArtifactName; // 0x0000 (0x0010)
    struct FString ClientID; // 0x0010 (0x0010)
    struct FString ClientSecret; // 0x0020 (0x0010)
    struct FString ProductId; // 0x0030 (0x0010)
    struct FString SandboxId; // 0x0040 (0x0010)
    struct FString DeploymentId; // 0x0050 (0x0010)
    struct FString EncryptionKey; // 0x0060 (0x0010)
};

} // namespace SDK

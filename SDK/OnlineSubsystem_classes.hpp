#pragma once
#include "Basic.hpp"
#include "OnlineSubsystem_structs.hpp"

namespace SDK {

// Class: OnlineSubsystem.NamedInterfaces
class NamedInterfaces : public Object {
public:
    struct TArray<uint8_t> NamedInterfaces; // 0x0028 (0x0010)
    struct TArray<uint8_t> NamedInterfaceDefs; // 0x0038 (0x0010)
};

// Class: OnlineSubsystem.TurnBasedMatchInterface
class TurnBasedMatchInterface : public Interface {
public:

public:
    void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive);
    void OnMatchEnded(struct FString Match);
};

} // namespace SDK

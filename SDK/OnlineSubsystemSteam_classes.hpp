#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: OnlineSubsystemSteam.SteamNetConnection
class SteamNetConnection : public IpConnection {
public:
    uint8_t Pad_0[0x33288]; // 0x0028 (0x33288)
    bool bIsPassthrough; // 0x332B0 (0x0001)
};

// Class: OnlineSubsystemSteam.SteamNetDriver
class SteamNetDriver : public IpNetDriver {
public:
};

} // namespace SDK

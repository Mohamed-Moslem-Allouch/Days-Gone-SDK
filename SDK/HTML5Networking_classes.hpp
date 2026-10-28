#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: HTML5Networking.WebSocketConnection
class WebSocketConnection : public NetConnection {
public:
};

// Class: HTML5Networking.WebSocketNetDriver
class WebSocketNetDriver : public NetDriver {
public:
    uint8_t Pad_0[0x300]; // 0x0028 (0x0300)
    int32_t WebSocketPort; // 0x0328 (0x0004)
};

} // namespace SDK

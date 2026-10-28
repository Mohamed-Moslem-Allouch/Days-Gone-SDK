#pragma once
#include "Basic.hpp"
#include "SlateCore_structs.hpp"

namespace SDK {

// Class: SlateCore.FontBulkData
class FontBulkData : public Object {
public:
};

// Class: SlateCore.FontProviderInterface
class FontProviderInterface : public Interface {
public:
};

// Class: SlateCore.SlateTypes
class SlateTypes : public Object {
public:
};

// Class: SlateCore.SlateWidgetStyleContainerInterface
class SlateWidgetStyleContainerInterface : public Interface {
public:
};

// Class: SlateCore.SlateWidgetStyleContainerBase
class SlateWidgetStyleContainerBase : public Object {
public:
};

// Class: SlateCore.SlateWidgetStyleAsset
class SlateWidgetStyleAsset : public Object {
public:
    class UObject* CustomStyle; // 0x0028 (0x0008)
};

} // namespace SDK

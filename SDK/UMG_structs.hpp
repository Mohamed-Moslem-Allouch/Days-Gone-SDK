#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: UMG.EventReply
struct EventReply {
};

// ScriptStruct: UMG.WidgetTransform
struct WidgetTransform {
    uint8_t Translation[0x8]; // 0x0000 (0x0008)
    uint8_t Scale[0x8]; // 0x0008 (0x0008)
    uint8_t Shear[0x8]; // 0x0010 (0x0008)
    float angle; // 0x0018 (0x0004)
};

// ScriptStruct: UMG.ShapedTextOptions
struct ShapedTextOptions {
    bool bOverride_TextShapingMethod; // 0x0000 (0x0001)
    bool bOverride_TextFlowDirection; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    uint8_t TextShapingMethod; // 0x0004 (0x0001)
    uint8_t TextFlowDirection; // 0x0005 (0x0001)
};

// ScriptStruct: UMG.DynamicPropertyPath
struct DynamicPropertyPath {
    struct TArray<uint8_t> Segments; // 0x0000 (0x0010)
};

// ScriptStruct: UMG.PropertyPathSegment
struct PropertyPathSegment {
    struct FName Name; // 0x0000 (0x0008)
    int32_t ArrayIndex; // 0x0008 (0x0004)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    class UObject* Struct; // 0x0010 (0x0008)
    class UObject* Field; // 0x0018 (0x0008)
};

// ScriptStruct: UMG.SlateChildSize
struct SlateChildSize {
    float Value; // 0x0000 (0x0004)
    uint8_t SizeRule; // 0x0004 (0x0001)
};

// ScriptStruct: UMG.SlateMeshVertex
struct SlateMeshVertex {
    uint8_t Position[0x8]; // 0x0000 (0x0008)
    uint8_t Color[0x4]; // 0x0008 (0x0004)
    uint8_t UV0[0x8]; // 0x000C (0x0008)
    uint8_t UV1[0x8]; // 0x0014 (0x0008)
    uint8_t UV2[0x8]; // 0x001C (0x0008)
    uint8_t UV3[0x8]; // 0x0024 (0x0008)
    uint8_t UV4[0x8]; // 0x002C (0x0008)
    uint8_t UV5[0x8]; // 0x0034 (0x0008)
};

// ScriptStruct: UMG.AnchorData
struct AnchorData {
    uint8_t Offsets[0x10]; // 0x0000 (0x0010)
    uint8_t Anchors[0x10]; // 0x0010 (0x0010)
    uint8_t Alignment[0x8]; // 0x0020 (0x0008)
};

// ScriptStruct: UMG.NamedSlotBinding
struct NamedSlotBinding {
    struct FName Name; // 0x0000 (0x0008)
    class UObject* Content; // 0x0008 (0x0008)
};

// ScriptStruct: UMG.PaintContext
struct PaintContext {
};

// ScriptStruct: UMG.WidgetAnimationBinding
struct WidgetAnimationBinding {
    struct FName WidgetName; // 0x0000 (0x0008)
    struct FName SlotWidgetName; // 0x0008 (0x0008)
    uint8_t AnimationGuid[0x10]; // 0x0010 (0x0010)
};

// ScriptStruct: UMG.DelegateRuntimeBinding
struct DelegateRuntimeBinding {
    struct FString ObjectName; // 0x0000 (0x0010)
    struct FName PropertyName; // 0x0010 (0x0008)
    struct FName FunctionName; // 0x0018 (0x0008)
    uint8_t SourcePath[0x10]; // 0x0020 (0x0010)
    uint8_t Kind; // 0x0030 (0x0001)
};

// ScriptStruct: UMG.WidgetNavigationData
struct WidgetNavigationData {
    uint8_t Rule; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FName WidgetToFocus; // 0x0008 (0x0008)
};

} // namespace SDK

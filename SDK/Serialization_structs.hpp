#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Serialization.StructSerializerTestStruct
struct StructSerializerTestStruct {
    uint8_t Numerics[0x30]; // 0x0000 (0x0030)
    uint8_t Booleans[0x8]; // 0x0030 (0x0008)
    uint8_t Objects[0x10]; // 0x0038 (0x0010)
    uint8_t Builtins[0x60]; // 0x0048 (0x0060)
    uint8_t Arrays[0x40]; // 0x00A8 (0x0040)
    uint8_t Maps[0xA0]; // 0x00E8 (0x00A0)
};

// ScriptStruct: Serialization.StructSerializerMapTestStruct
struct StructSerializerMapTestStruct {
    uint8_t IntToStr[0x50]; // 0x0000 (0x0050)
    uint8_t StrToVec[0x50]; // 0x0050 (0x0050)
};

// ScriptStruct: Serialization.StructSerializerArrayTestStruct
struct StructSerializerArrayTestStruct {
    struct TArray<uint8_t> Int32Array; // 0x0000 (0x0010)
    int32_t StaticSingleElement; // 0x0010 (0x0004)
    int32_t StaticInt32Array; // 0x0014 (0x0004)
    uint8_t Pad_0[0x8]; // 0x0018 (0x0008)
    float StaticFloatArray; // 0x0020 (0x0004)
    uint8_t Pad_1[0xC]; // 0x0024 (0x000C)
    struct TArray<uint8_t> VectorArray; // 0x0030 (0x0010)
};

// ScriptStruct: Serialization.StructSerializerBuiltinTestStruct
struct StructSerializerBuiltinTestStruct {
    uint8_t Guid[0x10]; // 0x0000 (0x0010)
    struct FName Name; // 0x0010 (0x0008)
    struct FString String; // 0x0018 (0x0010)
    uint8_t Rotator[0xC]; // 0x0028 (0x000C)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    struct FText Text; // 0x0038 (0x0018)
    uint8_t Vector[0xC]; // 0x0050 (0x000C)
};

// ScriptStruct: Serialization.StructSerializerObjectTestStruct
struct StructSerializerObjectTestStruct {
    class UClass* Class; // 0x0000 (0x0008)
    class UObject* ObjectPtr; // 0x0008 (0x0008)
};

// ScriptStruct: Serialization.StructSerializerBooleanTestStruct
struct StructSerializerBooleanTestStruct {
    bool BoolFalse; // 0x0000 (0x0001)
    bool BoolTrue; // 0x0001 (0x0001)
    uint8_t Pad_0[0x2]; // 0x0002 (0x0002)
    uint8_t Bitfield[0x4]; // 0x0004 (0x0004)
};

// ScriptStruct: Serialization.StructSerializerNumericTestStruct
struct StructSerializerNumericTestStruct {
    uint8_t Int8; // 0x0000 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0001 (0x0001)
    uint8_t Int16[0x2]; // 0x0002 (0x0002)
    int32_t Int32; // 0x0004 (0x0004)
    int64_t Int64; // 0x0008 (0x0008)
    uint8_t UInt8; // 0x0010 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0011 (0x0001)
    uint8_t UInt16[0x2]; // 0x0012 (0x0002)
    uint8_t UInt32[0x4]; // 0x0014 (0x0004)
    uint8_t UInt64[0x8]; // 0x0018 (0x0008)
    float Float; // 0x0020 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0024 (0x0004)
    double Double; // 0x0028 (0x0008)
};

} // namespace SDK

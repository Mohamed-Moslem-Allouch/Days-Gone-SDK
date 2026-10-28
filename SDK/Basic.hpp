#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace SDK {

struct FName {
    int32_t Index;
    int32_t Number;

    std::string ToString() const;
};

struct FString {
    wchar_t* Data;
    int32_t Count;
    int32_t Max;

    std::wstring ToWString() const {
        return (Data && Count > 0) ? std::wstring(Data, Count - 1) : L"";
    }
    std::string ToString() const {
        auto ws = ToWString();
        return std::string(ws.begin(), ws.end());
    }
};

struct FText {
    void* Data;
    uint8_t Pad[0x38];
};

struct FVector {
    float X, Y, Z;
};

struct FRotator {
    float Pitch, Yaw, Roll;
};

struct alignas(16) FQuat {
    float X, Y, Z, W;
};

struct alignas(16) FTransform {
    FQuat Rotation;
    FVector Translation;
    float Pad0;
    FVector Scale;
    float Pad1;
};

template<typename T>
struct TArray {
    T* Data;
    int32_t Count;
    int32_t Max;

    int32_t Num() const { return Count; }
    T& operator[](int32_t i) { return Data[i]; }
    const T& operator[](int32_t i) const { return Data[i]; }
};

class UClass;

class UObject {
public:
    void** VTable;                      // 0x0000 (0x0008)
    int32_t ObjectFlags;                // 0x0008 (0x0004)
    int32_t InternalIndex;              // 0x000C (0x0004)
    class UClass* ClassPrivate;         // 0x0010 (0x0008)
    FName NamePrivate;                  // 0x0018 (0x0008)
    UObject* OuterPrivate;              // 0x0020 (0x0008)

    void ProcessEvent(class UFunction* Function, void* Parms);
};

class UField : public UObject {
public:
    UField* Next;                       // 0x0028 (0x0008)
};

class UStruct : public UField {
public:
    UStruct* SuperStruct;               // 0x0030 (0x0008)
    UField* Children;                   // 0x0038 (0x0008)
    int32_t PropertiesSize;             // 0x0040 (0x0004)
    int32_t MinAlignment;               // 0x0044 (0x0004)
};

class UClass : public UStruct {
public:
    uint8_t Pad_Class[0x180];
};

class UFunction : public UStruct {
public:
    uint32_t FunctionFlags;             // 0x0088 (0x0004)
    uint16_t NumParms;                  // 0x008C (0x0002)
    uint16_t ParmsSize;                 // 0x008E (0x0002)
    uint16_t ReturnValueOffset;         // 0x0090 (0x0002)
    uint16_t RPCId;                     // 0x0092 (0x0002)
    uint16_t RPCResponseId;             // 0x0094 (0x0002)
    uint8_t Pad_Func[0x18];
    void* ExecFunction;                 // 0x00B0 (0x0008)
};

} // namespace SDK

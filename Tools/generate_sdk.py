#!/usr/bin/env python3
"""
Days Gone UE4.11 Full C++ SDK Generator (Clean & Grouped Dumper-7 Style)
Consolidates Blueprint cooked assets into Game_Blueprints rather than creating thousands of tiny files.
"""

import os
import re
import sys
from collections import defaultdict

BASIC_HPP = """#pragma once
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
"""

TYPE_MAP = {
    'BoolProperty': 'bool',
    'ByteProperty': 'uint8_t',
    'IntProperty': 'int32_t',
    'Int64Property': 'int64_t',
    'FloatProperty': 'float',
    'DoubleProperty': 'double',
    'StrProperty': 'struct FString',
    'NameProperty': 'struct FName',
    'TextProperty': 'struct FText',
    'ObjectProperty': 'class UObject*',
    'ClassProperty': 'class UClass*',
    'WeakObjectProperty': 'uint64_t',
    'ArrayProperty': 'struct TArray<uint8_t>',
    'MapProperty': 'uint8_t',
    'SetProperty': 'uint8_t',
    'StructProperty': 'uint8_t',
    'DelegateProperty': 'uint8_t',
    'MulticastDelegateProperty': 'uint8_t',
    'InterfaceProperty': 'uint8_t',
}

def clean_ident(name):
    clean = re.sub(r'[^a-zA-Z0-9_]', '_', name)
    if clean and clean[0].isdigit():
        clean = '_' + clean
    keywords = {'default', 'delete', 'register', 'auto', 'union', 'class', 'struct', 'case', 'inline', 'template', 'near', 'far'}
    if clean in keywords:
        clean = clean + '_Val'
    return clean

def parse_fn_params(param_str):
    params = []
    if not param_str.strip():
        return params
    for p in param_str.split(','):
        p = p.strip()
        if not p: continue
        m = re.match(r'^(\w+)\s+(\w+)@(\d+)\+(\d+)', p)
        if m:
            params.append({
                'type': m.group(1),
                'name': m.group(2),
                'offset': int(m.group(3)),
                'size': int(m.group(4))
            })
    return params

def parse_reflection(filepath):
    print(f"Reading reflection file: {filepath}...")
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        lines = f.readlines()

    packages_classes = defaultdict(list)
    packages_structs = defaultdict(list)
    current_item = None
    seen_names = set()

    class_re = re.compile(r'^CLASS\s+(\w+)\s+(\S+)\s*:\s*(\S+)')
    prop_re = re.compile(r'^\s+(\S+)\s+(\S+)\s+@(\d+)\+(\d+)(?:\s+pflags=(\S+))?')
    fn_re = re.compile(r'^\s+FN\s+(\S+)\((.*?)\)(?:\s+parms=(\d+))?(?:\s+flags=(\S+))?')

    for line in lines:
        line_clean = line.rstrip()
        cm = class_re.match(line_clean)
        if cm:
            kind = cm.group(1)
            full_name = cm.group(2)
            super_name = cm.group(3)
            
            # Normalize package name!
            if full_name.startswith('/Script/'):
                pkg = full_name.split('.')[0].replace('/Script/', '')
            elif full_name.startswith('/Game/'):
                pkg = 'Game_Blueprints'
            elif full_name.startswith('/Engine/'):
                pkg = 'Engine_Blueprints'
            else:
                pkg = full_name.split('.')[0]

            ident_name = full_name.split('.')[-1]

            # Avoid duplicates
            key = (pkg, ident_name)
            if key in seen_names:
                current_item = None
                continue
            seen_names.add(key)

            current_item = {
                'kind': kind,
                'package': pkg,
                'name': ident_name,
                'super': super_name if super_name != '-' else None,
                'properties': [],
                'functions': []
            }
            if 'Struct' in kind:
                packages_structs[pkg].append(current_item)
            else:
                packages_classes[pkg].append(current_item)
            continue

        if not current_item:
            continue

        pm = prop_re.match(line_clean)
        if pm:
            current_item['properties'].append({
                'type': pm.group(1),
                'name': pm.group(2),
                'offset': int(pm.group(3)),
                'size': int(pm.group(4)),
                'flags': pm.group(5) or '0'
            })
            continue

        fm = fn_re.match(line_clean)
        if fm:
            fn_name = fm.group(1)
            raw_params = fm.group(2)
            parms_size = int(fm.group(3)) if fm.group(3) else 0
            flags = fm.group(4) or '0'
            parsed_params = parse_fn_params(raw_params)
            current_item['functions'].append({
                'name': fn_name,
                'raw_params': raw_params,
                'params': parsed_params,
                'size': parms_size,
                'flags': flags
            })
            continue

    total_classes = sum(len(c) for c in packages_classes.values())
    total_structs = sum(len(s) for s in packages_structs.values())
    all_pkgs = sorted(list(set(list(packages_classes.keys()) + list(packages_structs.keys()))))
    print(f"Grouped into {len(all_pkgs)} clean packages ({total_classes} classes, {total_structs} structs).")
    return packages_classes, packages_structs

def write_structs(pkg, structs, out_dir):
    if not structs: return
    fname = f"{clean_ident(pkg)}_structs.hpp"
    path = os.path.join(out_dir, fname)
    with open(path, 'w', encoding='utf-8') as f:
        f.write(f"#pragma once\n#include \"Basic.hpp\"\n\nnamespace SDK {{\n\n")
        for s in structs:
            s_name = clean_ident(s['name'])
            super_name = clean_ident(s['super']) if s['super'] else ""
            inheritance = f" : public {super_name}" if super_name else ""
            f.write(f"// ScriptStruct: {s['package']}.{s['name']}\n")
            f.write(f"struct {s_name}{inheritance} {{\n")
            props = sorted(s['properties'], key=lambda p: p['offset'])
            last_offset = 0
            pad_idx = 0
            for p in props:
                p_offset = p['offset']
                p_size = p['size']
                p_name = clean_ident(p['name'])
                cpp_type = TYPE_MAP.get(p['type'], 'uint8_t')
                if p_offset > last_offset:
                    pad_len = p_offset - last_offset
                    f.write(f"    uint8_t Pad_{pad_idx}[0x{pad_len:X}]; // 0x{last_offset:04X} (0x{pad_len:04X})\n")
                    pad_idx += 1
                    last_offset = p_offset
                if cpp_type == 'uint8_t' and p_size > 1:
                    f.write(f"    uint8_t {p_name}[0x{p_size:X}]; // 0x{p_offset:04X} (0x{p_size:04X})\n")
                else:
                    f.write(f"    {cpp_type} {p_name}; // 0x{p_offset:04X} (0x{p_size:04X})\n")
                last_offset = max(last_offset, p_offset + p_size)
            f.write("};\n\n")
        f.write("} // namespace SDK\n")

def write_parameters(pkg, classes, out_dir):
    has_params = any(len(c['functions']) > 0 for c in classes)
    if not has_params: return
    fname = f"{clean_ident(pkg)}_parameters.hpp"
    path = os.path.join(out_dir, fname)
    structs_header = f"{clean_ident(pkg)}_structs.hpp"
    with open(path, 'w', encoding='utf-8') as f:
        f.write(f"#pragma once\n#include \"Basic.hpp\"\n")
        if os.path.exists(os.path.join(out_dir, structs_header)):
            f.write(f"#include \"{structs_header}\"\n")
        f.write(f"\nnamespace SDK {{\n\n")
        for cls in classes:
            c_name = clean_ident(cls['name'])
            for fn in cls['functions']:
                fn_name = clean_ident(fn['name'])
                param_struct_name = f"{c_name}_{fn_name}_Params"
                f.write(f"// Function: {cls['package']}.{cls['name']}.{fn['name']}\n")
                f.write(f"// Size: 0x{fn['size']:04X}\n")
                f.write(f"struct {param_struct_name} {{\npublic:\n")
                last_offset = 0
                pad_idx = 0
                for p in fn['params']:
                    p_offset = p['offset']
                    p_size = p['size']
                    p_name = clean_ident(p['name'])
                    cpp_type = TYPE_MAP.get(p['type'], 'uint8_t')
                    if p_offset > last_offset:
                        pad_len = p_offset - last_offset
                        f.write(f"    uint8_t Pad_{pad_idx}[0x{pad_len:X}]; // 0x{last_offset:04X} (0x{pad_len:04X})\n")
                        pad_idx += 1
                        last_offset = p_offset
                    if cpp_type == 'uint8_t' and p_size > 1:
                        f.write(f"    uint8_t {p_name}[0x{p_size:X}]; // 0x{p_offset:04X} (0x{p_size:04X})\n")
                    else:
                        f.write(f"    {cpp_type} {p_name}; // 0x{p_offset:04X} (0x{p_size:04X})\n")
                    last_offset = max(last_offset, p_offset + p_size)
                if fn['size'] > last_offset:
                    pad_len = fn['size'] - last_offset
                    f.write(f"    uint8_t Pad_{pad_idx}[0x{pad_len:X}]; // 0x{last_offset:04X} (0x{pad_len:04X})\n")
                f.write("};\n\n")
        f.write("} // namespace SDK\n")

def write_functions(pkg, classes, out_dir):
    has_funcs = any(len(c['functions']) > 0 for c in classes)
    if not has_funcs: return
    fname = f"{clean_ident(pkg)}_functions.cpp"
    path = os.path.join(out_dir, fname)
    classes_header = f"{clean_ident(pkg)}_classes.hpp"
    params_header = f"{clean_ident(pkg)}_parameters.hpp"
    with open(path, 'w', encoding='utf-8') as f:
        f.write(f"#include \"Basic.hpp\"\n#include \"{classes_header}\"\n#include \"{params_header}\"\n\nnamespace SDK {{\n\n")
        for cls in classes:
            c_name = clean_ident(cls['name'])
            for fn in cls['functions']:
                fn_name = clean_ident(fn['name'])
                param_struct_name = f"{c_name}_{fn_name}_Params"
                ret_param = next((p for p in fn['params'] if p['name'] == 'ReturnValue'), None)
                ret_type = TYPE_MAP.get(ret_param['type'], 'uint8_t') if ret_param else 'void'
                
                in_params = [p for p in fn['params'] if p['name'] != 'ReturnValue']
                arg_strs = []
                for p in in_params:
                    t = TYPE_MAP.get(p['type'], 'uint8_t')
                    arg_strs.append(f"{t} {clean_ident(p['name'])}")
                args_decl = ", ".join(arg_strs)

                f.write(f"// Function: {cls['package']}.{cls['name']}.{fn['name']}\n")
                f.write(f"{ret_type} {c_name}::{fn_name}({args_decl}) {{\n")
                f.write(f"    static class UFunction* Func = nullptr;\n")
                if fn['params']:
                    f.write(f"    {param_struct_name} Parms{{}};\n")
                    for p in in_params:
                        f.write(f"    Parms.{clean_ident(p['name'])} = {clean_ident(p['name'])};\n")
                    f.write(f"    ProcessEvent(Func, &Parms);\n")
                    if ret_param:
                        f.write(f"    return Parms.ReturnValue;\n")
                else:
                    f.write(f"    ProcessEvent(Func, nullptr);\n")
                f.write("}\n\n")
        f.write("} // namespace SDK\n")

def write_classes(pkg, classes, out_dir):
    fname = f"{clean_ident(pkg)}_classes.hpp"
    path = os.path.join(out_dir, fname)
    structs_header = f"{clean_ident(pkg)}_structs.hpp"
    with open(path, 'w', encoding='utf-8') as f:
        f.write(f"#pragma once\n#include \"Basic.hpp\"\n")
        if os.path.exists(os.path.join(out_dir, structs_header)):
            f.write(f"#include \"{structs_header}\"\n")
        f.write(f"\nnamespace SDK {{\n\n")

        for cls in classes:
            c_name = clean_ident(cls['name'])
            super_name = clean_ident(cls['super']) if cls['super'] else "UObject"
            if c_name == "Object": continue

            f.write(f"// Class: {cls['package']}.{cls['name']}\n")
            f.write(f"class {c_name} : public {super_name} {{\npublic:\n")

            props = sorted(cls['properties'], key=lambda p: p['offset'])
            last_offset = 0x28
            if props: last_offset = min(props[0]['offset'], 0x28)
            pad_idx = 0
            for p in props:
                p_offset = p['offset']
                p_size = p['size']
                p_name = clean_ident(p['name'])
                cpp_type = TYPE_MAP.get(p['type'], 'uint8_t')

                if p_offset > last_offset:
                    pad_len = p_offset - last_offset
                    f.write(f"    uint8_t Pad_{pad_idx}[0x{pad_len:X}]; // 0x{last_offset:04X} (0x{pad_len:04X})\n")
                    pad_idx += 1
                    last_offset = p_offset

                if cpp_type == 'uint8_t' and p_size > 1:
                    f.write(f"    uint8_t {p_name}[0x{p_size:X}]; // 0x{p_offset:04X} (0x{p_size:04X})\n")
                else:
                    f.write(f"    {cpp_type} {p_name}; // 0x{p_offset:04X} (0x{p_size:04X})\n")

                last_offset = max(last_offset, p_offset + p_size)

            if cls['functions']:
                f.write("\npublic:\n")
                for fn in cls['functions']:
                    fn_name = clean_ident(fn['name'])
                    ret_param = next((p for p in fn['params'] if p['name'] == 'ReturnValue'), None)
                    ret_type = TYPE_MAP.get(ret_param['type'], 'uint8_t') if ret_param else 'void'
                    in_params = [p for p in fn['params'] if p['name'] != 'ReturnValue']
                    args_decl = ", ".join(f"{TYPE_MAP.get(p['type'], 'uint8_t')} {clean_ident(p['name'])}" for p in in_params)
                    f.write(f"    {ret_type} {fn_name}({args_decl});\n")

            f.write("};\n\n")
        f.write("} // namespace SDK\n")

def generate_full_sdk(packages_classes, packages_structs, out_dir):
    os.makedirs(out_dir, exist_ok=True)
    with open(os.path.join(out_dir, "Basic.hpp"), 'w', encoding='utf-8') as f:
        f.write(BASIC_HPP)

    all_packages = sorted(list(set(list(packages_classes.keys()) + list(packages_structs.keys()))))
    master_includes = ['#pragma once', '#include "Basic.hpp"']

    for pkg in all_packages:
        write_structs(pkg, packages_structs.get(pkg, []), out_dir)
        write_classes(pkg, packages_classes.get(pkg, []), out_dir)
        write_parameters(pkg, packages_classes.get(pkg, []), out_dir)
        write_functions(pkg, packages_classes.get(pkg, []), out_dir)

        s_header = f"{clean_ident(pkg)}_structs.hpp"
        c_header = f"{clean_ident(pkg)}_classes.hpp"
        p_header = f"{clean_ident(pkg)}_parameters.hpp"

        if os.path.exists(os.path.join(out_dir, s_header)): master_includes.append(f'#include "{s_header}"')
        if os.path.exists(os.path.join(out_dir, c_header)): master_includes.append(f'#include "{c_header}"')
        if os.path.exists(os.path.join(out_dir, p_header)): master_includes.append(f'#include "{p_header}"')

    with open(os.path.join(out_dir, "SDK.hpp"), 'w', encoding='utf-8') as f:
        f.write("\n".join(master_includes) + "\n")

    print(f"Full SDK generation complete at: {out_dir}")

def main():
    default_input = r"D:\Days.Gone.Remastered\BendGame\Binaries\Win64\TheysGone-reflection.txt"
    out_dir = r"C:\Users\SlouMa\Desktop\days gone\DaysGone_SDK"
    txt_path = sys.argv[1] if len(sys.argv) > 1 else default_input
    classes, structs = parse_reflection(txt_path)
    generate_full_sdk(classes, structs, out_dir)

if __name__ == '__main__':
    main()

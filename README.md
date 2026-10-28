# Days Gone Complete Unreal Engine C++ SDK & Reflection Dump (PC)

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-4.11%20(Bend%20Fork)-blue.svg)](#)
[![Platform](https://img.shields.io/badge/Platform-Windows%20x64%20(Steam%20/%20Epic)-lightgrey.svg)](#)
[![Classes](https://img.shields.io/badge/Classes-5%2C686-green.svg)](#)
[![Structs](https://img.shields.io/badge/Structs-1%2C897-brightgreen.svg)](#)
[![Functions](https://img.shields.io/badge/Functions-29%2C301-orange.svg)](#)
[![Properties](https://img.shields.io/badge/Properties-55%2C157-yellow.svg)](#)

A complete, byte-exact, production-ready **C++ Software Development Kit (SDK)** and live **Reflection Dump** for **Days Gone (PC)**.

This SDK was reverse-engineered directly from the live runtime memory of Days Gone on PC (running on a custom fork of Unreal Engine 4.11).

---

## Features & Coverage

* **Complete Dumper-7 Architecture (4-Tier Package Format):**
  * `_classes.hpp` - Class declarations, inheritance, variables, and byte-exact padding (`Pad_X[...]`).
  * `_structs.hpp` - All `UScriptStruct` types (`FVector`, `FRotator`, `FHitResult`, etc.).
  * `_parameters.hpp` - Dedicated function argument and return parameter structs for invoking `ProcessEvent`.
  * `_functions.cpp` - Native callable wrappers that auto-pack arguments and call `ProcessEvent`.
* **Clean & Consolidated:**
  * Native packages are cleanly mapped: `BendGame`, `Engine`, `CoreUObject`, `UMG`, `AIModule`, `SlateCore`, etc.
  * In-game Blueprint cooked assets are cleanly organized into `Game_Blueprints` rather than thousands of fragmented folders.
* **100% Byte-Exact Memory Alignment:**
  * All member offsets, field sizes, bitfield flags, and struct padding align with the running game's memory layout.

---

## Key Engine Offsets & Reversing Notes

Days Gone runs on a proprietary, modified fork of **Unreal Engine 4.11**:

| Engine Component | Address / RVA / Detail | Description |
| :--- | :--- | :--- |
| **`GObjects` (FUObjectArray)** | `DaysGone.exe + 0x4C12290` | Root array managing all live engine objects. |
| **`GNames` (Chunked Array)** | `DaysGone.exe + 0x4AA22F8` | Pointer in `.data` to chunked table of 172,320 names. |
| **`UProperty::Offset_Internal`** | `+0x50` | Byte offset inside `UProperty` for field offset values. |
| **`FNameEntry` String Offset** | `+0x12` | 16-bit field inserted before the name string (stock UE 4.10/4.11 is `0x10`). |

---

## Repository Structure

```text
Days-Gone-SDK/
├── SDK/
│   ├── Basic.hpp                       # Core UE types (FName, FString, FText, TArray, UObject, UClass, UFunction)
│   ├── SDK.hpp                         # Master include header
│   ├── BendGame_classes.hpp            # Main Days Gone classes (Deacon, Motorcycle, Weapons, Missions)
│   ├── BendGame_structs.hpp            # BendGame script structs
│   ├── BendGame_parameters.hpp         # Function parameter structs for BendGame
│   ├── BendGame_functions.cpp          # Function caller implementations
│   ├── Engine_classes.hpp              # Core Unreal Engine classes (AActor, APawn, ACharacter, etc.)
│   ├── Engine_structs.hpp
│   ├── Engine_parameters.hpp
│   ├── Engine_functions.cpp
│   ├── Game_Blueprints_classes.hpp     # All gameplay blueprint classes, animations, and widgets
│   ├── Game_Blueprints_structs.hpp
│   ├── Game_Blueprints_parameters.hpp
│   ├── Game_Blueprints_functions.cpp
│   └── ...                             # 47 cleanly organized packages
├── Raw_Dump/
│   └── TheysGone-reflection.txt        # Full raw 11.5 MB engine reflection dump from memory
└── Tools/
    └── generate_sdk.py                 # Python SDK generator script
```

---

## How to Use in Your C++ Project

1. Add the `SDK/` folder to your C++ project's include path.
2. Include the master header:
   ```cpp
   #include "SDK/SDK.hpp"
   ```
3. Example usage in an internal hook or ASI mod:
   ```cpp
   // Access Deacon's player pawn directly
   SDK::BendPlayerPawn* Deacon = GetLocalDeacon();
   if (Deacon) {
       Deacon->DodgeStaminaCost = 0.0f;             // Zero stamina cost on roll
       Deacon->VehicleManualAimHoldTime = 0.0f;     // Instant manual bike aim
       Deacon->NoOutlineWhenHiding = true;          // Stealth enhancement
   }

   // Access and repair the player's motorcycle
   SDK::BendMotorcycle* Bike = GetLocalBike();
   if (Bike) {
       Bike->RepairVehicle();
       Bike->SetFuel(100.0f);
   }
   ```

---

## Author

Developed and maintained by **Mohamed Moslem Allouch**.

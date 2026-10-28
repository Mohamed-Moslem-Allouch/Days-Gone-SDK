#pragma once
#include "Basic.hpp"
#include "UMG_structs.hpp"

namespace SDK {

// Function: UMG.Widget.SetVisibility
// Size: 0x0001
struct Widget_SetVisibility_Params {
public:
    uint8_t InVisibility; // 0x0000 (0x0001)
};

// Function: UMG.Widget.SetUserFocus
// Size: 0x0008
struct Widget_SetUserFocus_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
};

// Function: UMG.Widget.SetToolTipText
// Size: 0x0018
struct Widget_SetToolTipText_Params {
public:
    struct FText InToolTipText; // 0x0000 (0x0018)
};

// Function: UMG.Widget.SetToolTip
// Size: 0x0008
struct Widget_SetToolTip_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
};

// Function: UMG.Widget.SetRenderTranslation
// Size: 0x0008
struct Widget_SetRenderTranslation_Params {
public:
    uint8_t Translation[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.Widget.SetRenderTransformPivot
// Size: 0x0008
struct Widget_SetRenderTransformPivot_Params {
public:
    uint8_t Pivot[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.Widget.SetRenderTransform
// Size: 0x001C
struct Widget_SetRenderTransform_Params {
public:
    uint8_t InTransform[0x1C]; // 0x0000 (0x001C)
};

// Function: UMG.Widget.SetRenderShear
// Size: 0x0008
struct Widget_SetRenderShear_Params {
public:
    uint8_t Shear[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.Widget.SetRenderScale
// Size: 0x0008
struct Widget_SetRenderScale_Params {
public:
    uint8_t Scale[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.Widget.SetRenderAngle
// Size: 0x0004
struct Widget_SetRenderAngle_Params {
public:
    float angle; // 0x0000 (0x0004)
};

// Function: UMG.Widget.SetKeyboardFocus
// Size: 0x0000
struct Widget_SetKeyboardFocus_Params {
public:
};

// Function: UMG.Widget.SetIsEnabled
// Size: 0x0001
struct Widget_SetIsEnabled_Params {
public:
    bool bInIsEnabled; // 0x0000 (0x0001)
};

// Function: UMG.Widget.SetCursor
// Size: 0x0001
struct Widget_SetCursor_Params {
public:
    uint8_t InCursor; // 0x0000 (0x0001)
};

// Function: UMG.Widget.ResetCursor
// Size: 0x0000
struct Widget_ResetCursor_Params {
public:
};

// Function: UMG.Widget.RemoveFromParent
// Size: 0x0000
struct Widget_RemoveFromParent_Params {
public:
};

// Function: UMG.Widget.OnReply__DelegateSignature
// Size: 0x00A8
struct Widget_OnReply__DelegateSignature_Params {
public:
    uint8_t ReturnValue[0xA8]; // 0x0000 (0x00A8)
};

// Function: UMG.Widget.OnPointerEvent__DelegateSignature
// Size: 0x0158
struct Widget_OnPointerEvent__DelegateSignature_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.Widget.IsVisible
// Size: 0x0001
struct Widget_IsVisible_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.IsHovered
// Size: 0x0001
struct Widget_IsHovered_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.InvalidateLayoutAndVolatility
// Size: 0x0000
struct Widget_InvalidateLayoutAndVolatility_Params {
public:
};

// Function: UMG.Widget.HasUserFocusedDescendants
// Size: 0x0009
struct Widget_HasUserFocusedDescendants_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: UMG.Widget.HasUserFocus
// Size: 0x0009
struct Widget_HasUserFocus_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: UMG.Widget.HasMouseCapture
// Size: 0x0001
struct Widget_HasMouseCapture_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.HasKeyboardFocus
// Size: 0x0001
struct Widget_HasKeyboardFocus_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.HasFocusedDescendants
// Size: 0x0001
struct Widget_HasFocusedDescendants_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.HasAnyUserFocus
// Size: 0x0001
struct Widget_HasAnyUserFocus_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GetWidget__DelegateSignature
// Size: 0x0008
struct Widget_GetWidget__DelegateSignature_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.Widget.GetVisibility
// Size: 0x0001
struct Widget_GetVisibility_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GetText__DelegateSignature
// Size: 0x0018
struct Widget_GetText__DelegateSignature_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.Widget.GetSlateVisibility__DelegateSignature
// Size: 0x0001
struct Widget_GetSlateVisibility__DelegateSignature_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GetSlateColor__DelegateSignature
// Size: 0x0028
struct Widget_GetSlateColor__DelegateSignature_Params {
public:
    uint8_t ReturnValue[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.Widget.GetSlateBrush__DelegateSignature
// Size: 0x0090
struct Widget_GetSlateBrush__DelegateSignature_Params {
public:
    uint8_t ReturnValue[0x90]; // 0x0000 (0x0090)
};

// Function: UMG.Widget.GetParent
// Size: 0x0008
struct Widget_GetParent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.Widget.GetMouseCursor__DelegateSignature
// Size: 0x0001
struct Widget_GetMouseCursor__DelegateSignature_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GetLinearColor__DelegateSignature
// Size: 0x0010
struct Widget_GetLinearColor__DelegateSignature_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Widget.GetIsEnabled
// Size: 0x0001
struct Widget_GetIsEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GetInt32__DelegateSignature
// Size: 0x0004
struct Widget_GetInt32__DelegateSignature_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.Widget.GetFloat__DelegateSignature
// Size: 0x0004
struct Widget_GetFloat__DelegateSignature_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.Widget.GetDesiredSize
// Size: 0x0008
struct Widget_GetDesiredSize_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.Widget.GetCheckBoxState__DelegateSignature
// Size: 0x0001
struct Widget_GetCheckBoxState__DelegateSignature_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GetBool__DelegateSignature
// Size: 0x0001
struct Widget_GetBool__DelegateSignature_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Widget.GenerateWidgetForString__DelegateSignature
// Size: 0x0018
struct Widget_GenerateWidgetForString__DelegateSignature_Params {
public:
    struct FString Item; // 0x0000 (0x0010)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: UMG.Widget.GenerateWidgetForObject__DelegateSignature
// Size: 0x0010
struct Widget_GenerateWidgetForObject__DelegateSignature_Params {
public:
    class UObject* Item; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.Widget.ForceVolatile
// Size: 0x0001
struct Widget_ForceVolatile_Params {
public:
    bool bForce; // 0x0000 (0x0001)
};

// Function: UMG.Widget.ForceLayoutPrepass
// Size: 0x0000
struct Widget_ForceLayoutPrepass_Params {
public:
};

// Function: UMG.UserWidget.Tick
// Size: 0x0038
struct UserWidget_Tick_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    float InDeltaTime; // 0x0034 (0x0004)
};

// Function: UMG.UserWidget.StopListeningForInputAction
// Size: 0x0009
struct UserWidget_StopListeningForInputAction_Params {
public:
    struct FName ActionName; // 0x0000 (0x0008)
    uint8_t eventType; // 0x0008 (0x0001)
};

// Function: UMG.UserWidget.StopListeningForAllInputActions
// Size: 0x0000
struct UserWidget_StopListeningForAllInputActions_Params {
public:
};

// Function: UMG.UserWidget.StopAnimation
// Size: 0x0008
struct UserWidget_StopAnimation_Params {
public:
    class UObject* InAnimation; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.SetWidgetTreeVisibility
// Size: 0x0001
struct UserWidget_SetWidgetTreeVisibility_Params {
public:
    uint8_t InVisibility; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.SetVisibilityAndTickFlag
// Size: 0x0002
struct UserWidget_SetVisibilityAndTickFlag_Params {
public:
    uint8_t InVisibility; // 0x0000 (0x0001)
    bool InTickEnabled; // 0x0001 (0x0001)
};

// Function: UMG.UserWidget.SetVisibilityAndSyncTick
// Size: 0x0001
struct UserWidget_SetVisibilityAndSyncTick_Params {
public:
    uint8_t InVisibility; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.SetTickEnabled
// Size: 0x0001
struct UserWidget_SetTickEnabled_Params {
public:
    bool IsEnabled; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.SetPositionInViewport
// Size: 0x0009
struct UserWidget_SetPositionInViewport_Params {
public:
    uint8_t Position[0x8]; // 0x0000 (0x0008)
    bool bRemoveDPIScale; // 0x0008 (0x0001)
};

// Function: UMG.UserWidget.SetPadding
// Size: 0x0010
struct UserWidget_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.UserWidget.SetOwningLocalPlayer
// Size: 0x0008
struct UserWidget_SetOwningLocalPlayer_Params {
public:
    class UObject* LocalPlayer; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.SetNumLoopsToPlay
// Size: 0x000C
struct UserWidget_SetNumLoopsToPlay_Params {
public:
    class UObject* InAnimation; // 0x0000 (0x0008)
    int32_t NumLoopsToPlay; // 0x0008 (0x0004)
};

// Function: UMG.UserWidget.SetNativeTickEnabled
// Size: 0x0001
struct UserWidget_SetNativeTickEnabled_Params {
public:
    bool IsEnabled; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.SetInputActionPriority
// Size: 0x0004
struct UserWidget_SetInputActionPriority_Params {
public:
    int32_t NewPriority; // 0x0000 (0x0004)
};

// Function: UMG.UserWidget.SetInputActionBlocking
// Size: 0x0001
struct UserWidget_SetInputActionBlocking_Params {
public:
    bool bShouldBlock; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.SetForegroundColor
// Size: 0x0028
struct UserWidget_SetForegroundColor_Params {
public:
    uint8_t InForegroundColor[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.UserWidget.SetDesiredSizeInViewport
// Size: 0x0008
struct UserWidget_SetDesiredSizeInViewport_Params {
public:
    uint8_t Size[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.SetColorAndOpacity
// Size: 0x0010
struct UserWidget_SetColorAndOpacity_Params {
public:
    uint8_t InColorAndOpacity[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.UserWidget.SetAnchorsInViewport
// Size: 0x0010
struct UserWidget_SetAnchorsInViewport_Params {
public:
    uint8_t Anchors[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.UserWidget.SetAlignmentInViewport
// Size: 0x0008
struct UserWidget_SetAlignmentInViewport_Params {
public:
    uint8_t Alignment[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.RemoveFromViewport
// Size: 0x0000
struct UserWidget_RemoveFromViewport_Params {
public:
};

// Function: UMG.UserWidget.PlaySound
// Size: 0x0008
struct UserWidget_PlaySound_Params {
public:
    class UObject* SoundToPlay; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.PlayAnimation
// Size: 0x0011
struct UserWidget_PlayAnimation_Params {
public:
    class UObject* InAnimation; // 0x0000 (0x0008)
    float StartAtTime; // 0x0008 (0x0004)
    int32_t NumLoopsToPlay; // 0x000C (0x0004)
    uint8_t PlayMode; // 0x0010 (0x0001)
};

// Function: UMG.UserWidget.PauseAnimation
// Size: 0x000C
struct UserWidget_PauseAnimation_Params {
public:
    class UObject* InAnimation; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: UMG.UserWidget.OnTouchStarted
// Size: 0x0158
struct UserWidget_OnTouchStarted_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InTouchEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnTouchMoved
// Size: 0x0158
struct UserWidget_OnTouchMoved_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InTouchEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnTouchGesture
// Size: 0x0158
struct UserWidget_OnTouchGesture_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t GestureEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnTouchEnded
// Size: 0x0158
struct UserWidget_OnTouchEnded_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InTouchEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnPreviewMouseButtonDown
// Size: 0x0158
struct UserWidget_OnPreviewMouseButtonDown_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnPreviewKeyDown
// Size: 0x0128
struct UserWidget_OnPreviewKeyDown_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InKeyEvent[0x48]; // 0x0038 (0x0048)
    uint8_t ReturnValue[0xA8]; // 0x0080 (0x00A8)
};

// Function: UMG.UserWidget.OnPaint
// Size: 0x0030
struct UserWidget_OnPaint_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
};

// Function: UMG.UserWidget.OnMouseWheel
// Size: 0x0158
struct UserWidget_OnMouseWheel_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnMouseMove
// Size: 0x0158
struct UserWidget_OnMouseMove_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnMouseLeave
// Size: 0x0078
struct UserWidget_OnMouseLeave_Params {
public:
    uint8_t MouseEvent[0x78]; // 0x0000 (0x0078)
};

// Function: UMG.UserWidget.OnMouseEnter
// Size: 0x00B0
struct UserWidget_OnMouseEnter_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
};

// Function: UMG.UserWidget.OnMouseButtonUp
// Size: 0x0158
struct UserWidget_OnMouseButtonUp_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnMouseButtonDown
// Size: 0x0158
struct UserWidget_OnMouseButtonDown_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t MouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnMouseButtonDoubleClick
// Size: 0x0158
struct UserWidget_OnMouseButtonDoubleClick_Params {
public:
    uint8_t InMyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InMouseEvent[0x78]; // 0x0038 (0x0078)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.UserWidget.OnMotionDetected
// Size: 0x0138
struct UserWidget_OnMotionDetected_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InMotionEvent[0x58]; // 0x0038 (0x0058)
    uint8_t ReturnValue[0xA8]; // 0x0090 (0x00A8)
};

// Function: UMG.UserWidget.OnKeyUp
// Size: 0x0128
struct UserWidget_OnKeyUp_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InKeyEvent[0x48]; // 0x0038 (0x0048)
    uint8_t ReturnValue[0xA8]; // 0x0080 (0x00A8)
};

// Function: UMG.UserWidget.OnKeyDown
// Size: 0x0128
struct UserWidget_OnKeyDown_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InKeyEvent[0x48]; // 0x0038 (0x0048)
    uint8_t ReturnValue[0xA8]; // 0x0080 (0x00A8)
};

// Function: UMG.UserWidget.OnKeyChar
// Size: 0x0110
struct UserWidget_OnKeyChar_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InCharacterEvent[0x30]; // 0x0038 (0x0030)
    uint8_t ReturnValue[0xA8]; // 0x0068 (0x00A8)
};

// Function: UMG.UserWidget.OnFocusReceived
// Size: 0x00E8
struct UserWidget_OnFocusReceived_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t InFocusEvent[0x8]; // 0x0034 (0x0008)
    uint8_t Pad_0[0x4]; // 0x003C (0x0004)
    uint8_t ReturnValue[0xA8]; // 0x0040 (0x00A8)
};

// Function: UMG.UserWidget.OnFocusLost
// Size: 0x0008
struct UserWidget_OnFocusLost_Params {
public:
    uint8_t InFocusEvent[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.OnDrop
// Size: 0x00B9
struct UserWidget_OnDrop_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t PointerEvent[0x78]; // 0x0038 (0x0078)
    class UObject* Operation; // 0x00B0 (0x0008)
    bool ReturnValue; // 0x00B8 (0x0001)
};

// Function: UMG.UserWidget.OnDragOver
// Size: 0x00B9
struct UserWidget_OnDragOver_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t PointerEvent[0x78]; // 0x0038 (0x0078)
    class UObject* Operation; // 0x00B0 (0x0008)
    bool ReturnValue; // 0x00B8 (0x0001)
};

// Function: UMG.UserWidget.OnDragLeave
// Size: 0x0080
struct UserWidget_OnDragLeave_Params {
public:
    uint8_t PointerEvent[0x78]; // 0x0000 (0x0078)
    class UObject* Operation; // 0x0078 (0x0008)
};

// Function: UMG.UserWidget.OnDragEnter
// Size: 0x00B8
struct UserWidget_OnDragEnter_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t PointerEvent[0x78]; // 0x0038 (0x0078)
    class UObject* Operation; // 0x00B0 (0x0008)
};

// Function: UMG.UserWidget.OnDragDetected
// Size: 0x00B8
struct UserWidget_OnDragDetected_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t PointerEvent[0x78]; // 0x0038 (0x0078)
    class UObject* Operation; // 0x00B0 (0x0008)
};

// Function: UMG.UserWidget.OnDragCancelled
// Size: 0x0080
struct UserWidget_OnDragCancelled_Params {
public:
    uint8_t PointerEvent[0x78]; // 0x0000 (0x0078)
    class UObject* Operation; // 0x0078 (0x0008)
};

// Function: UMG.UserWidget.OnControllerButtonReleased
// Size: 0x0128
struct UserWidget_OnControllerButtonReleased_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t ControllerEvent[0x48]; // 0x0038 (0x0048)
    uint8_t ReturnValue[0xA8]; // 0x0080 (0x00A8)
};

// Function: UMG.UserWidget.OnControllerButtonPressed
// Size: 0x0128
struct UserWidget_OnControllerButtonPressed_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t ControllerEvent[0x48]; // 0x0038 (0x0048)
    uint8_t ReturnValue[0xA8]; // 0x0080 (0x00A8)
};

// Function: UMG.UserWidget.OnControllerAnalogValueChanged
// Size: 0x0128
struct UserWidget_OnControllerAnalogValueChanged_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t ControllerEvent[0x48]; // 0x0038 (0x0048)
    uint8_t ReturnValue[0xA8]; // 0x0080 (0x00A8)
};

// Function: UMG.UserWidget.OnAnimationStarted
// Size: 0x0008
struct UserWidget_OnAnimationStarted_Params {
public:
    class UObject* Animation; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.OnAnimationFinished
// Size: 0x0008
struct UserWidget_OnAnimationFinished_Params {
public:
    class UObject* Animation; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.OnAnalogValueChanged
// Size: 0x0130
struct UserWidget_OnAnalogValueChanged_Params {
public:
    uint8_t MyGeometry[0x34]; // 0x0000 (0x0034)
    uint8_t Pad_0[0x4]; // 0x0034 (0x0004)
    uint8_t InAnalogInputEvent[0x50]; // 0x0038 (0x0050)
    uint8_t ReturnValue[0xA8]; // 0x0088 (0x00A8)
};

// Function: UMG.UserWidget.NewWeaponFinishedSpawning
// Size: 0x0000
struct UserWidget_NewWeaponFinishedSpawning_Params {
public:
};

// Function: UMG.UserWidget.ListenForInputAction
// Size: 0x0021
struct UserWidget_ListenForInputAction_Params {
public:
    struct FName ActionName; // 0x0000 (0x0008)
    uint8_t eventType; // 0x0008 (0x0001)
    bool bConsume; // 0x0009 (0x0001)
    uint8_t Pad_0[0x6]; // 0x000A (0x0006)
    uint8_t Callback[0x10]; // 0x0010 (0x0010)
    bool bExecuteWhenPaused; // 0x0020 (0x0001)
};

// Function: UMG.UserWidget.IsTickEnabled
// Size: 0x0001
struct UserWidget_IsTickEnabled_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.IsPlayingAnimation
// Size: 0x0001
struct UserWidget_IsPlayingAnimation_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.IsListeningForInputAction
// Size: 0x0009
struct UserWidget_IsListeningForInputAction_Params {
public:
    struct FName ActionName; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: UMG.UserWidget.IsInViewport
// Size: 0x0001
struct UserWidget_IsInViewport_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.IsInteractable
// Size: 0x0001
struct UserWidget_IsInteractable_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.IsAnimationPlaying
// Size: 0x0009
struct UserWidget_IsAnimationPlaying_Params {
public:
    class UObject* InAnimation; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: UMG.UserWidget.GetOwningPlayerPawn
// Size: 0x0008
struct UserWidget_GetOwningPlayerPawn_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.GetOwningPlayer
// Size: 0x0008
struct UserWidget_GetOwningPlayer_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.GetOwningLocalPlayer
// Size: 0x0008
struct UserWidget_GetOwningLocalPlayer_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.UserWidget.GetIsVisible
// Size: 0x0001
struct UserWidget_GetIsVisible_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.UserWidget.FindWidgetsByName
// Size: 0x0020
struct UserWidget_FindWidgetsByName_Params {
public:
    struct FString WidgetName; // 0x0000 (0x0010)
    struct TArray<uint8_t> OutWidgets; // 0x0010 (0x0010)
};

// Function: UMG.UserWidget.Destruct
// Size: 0x0000
struct UserWidget_Destruct_Params {
public:
};

// Function: UMG.UserWidget.Construct
// Size: 0x0000
struct UserWidget_Construct_Params {
public:
};

// Function: UMG.UserWidget.AddToViewport
// Size: 0x0004
struct UserWidget_AddToViewport_Params {
public:
    int32_t ZOrder; // 0x0000 (0x0004)
};

// Function: UMG.UserWidget.AddToPlayerScreen
// Size: 0x0005
struct UserWidget_AddToPlayerScreen_Params {
public:
    int32_t ZOrder; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: UMG.BendWidgetComponent.SetWidgetSpace
// Size: 0x0001
struct BendWidgetComponent_SetWidgetSpace_Params {
public:
    uint8_t NewSpace; // 0x0000 (0x0001)
};

// Function: UMG.BendWidgetComponent.SetWidget
// Size: 0x0008
struct BendWidgetComponent_SetWidget_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.SetUseImageTexture
// Size: 0x0001
struct BendWidgetComponent_SetUseImageTexture_Params {
public:
    bool bEnabled; // 0x0000 (0x0001)
};

// Function: UMG.BendWidgetComponent.SetStickToScreenEdge
// Size: 0x0001
struct BendWidgetComponent_SetStickToScreenEdge_Params {
public:
    bool Enabled; // 0x0000 (0x0001)
};

// Function: UMG.BendWidgetComponent.SetScreenScale
// Size: 0x0004
struct BendWidgetComponent_SetScreenScale_Params {
public:
    float InScale; // 0x0000 (0x0004)
};

// Function: UMG.BendWidgetComponent.SetOwnerPlayer
// Size: 0x0008
struct BendWidgetComponent_SetOwnerPlayer_Params {
public:
    class UObject* LocalPlayer; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.SetOpacity
// Size: 0x0004
struct BendWidgetComponent_SetOpacity_Params {
public:
    float Opacity; // 0x0000 (0x0004)
};

// Function: UMG.BendWidgetComponent.SetMaxInteractionDistance
// Size: 0x0004
struct BendWidgetComponent_SetMaxInteractionDistance_Params {
public:
    float Distance; // 0x0000 (0x0004)
};

// Function: UMG.BendWidgetComponent.SetImageTexture
// Size: 0x0008
struct BendWidgetComponent_SetImageTexture_Params {
public:
    class UObject* Texture; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.SetFarFade
// Size: 0x000C
struct BendWidgetComponent_SetFarFade_Params {
public:
    bool Enabled; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float StartDistance; // 0x0004 (0x0004)
    float EndDistance; // 0x0008 (0x0004)
};

// Function: UMG.BendWidgetComponent.SetDrawSize
// Size: 0x0008
struct BendWidgetComponent_SetDrawSize_Params {
public:
    uint8_t Size[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.SetDrawScale
// Size: 0x0004
struct BendWidgetComponent_SetDrawScale_Params {
public:
    float Scale; // 0x0000 (0x0004)
};

// Function: UMG.BendWidgetComponent.SetDisableOcclusion
// Size: 0x0001
struct BendWidgetComponent_SetDisableOcclusion_Params {
public:
    bool bDisabled; // 0x0000 (0x0001)
};

// Function: UMG.BendWidgetComponent.SetComponentTickOverride
// Size: 0x0002
struct BendWidgetComponent_SetComponentTickOverride_Params {
public:
    bool ShouldOverrideComponentTick; // 0x0000 (0x0001)
    bool Enabled; // 0x0001 (0x0001)
};

// Function: UMG.BendWidgetComponent.ReturnPooledWidget
// Size: 0x0000
struct BendWidgetComponent_ReturnPooledWidget_Params {
public:
};

// Function: UMG.BendWidgetComponent.RequestRedraw
// Size: 0x0000
struct BendWidgetComponent_RequestRedraw_Params {
public:
};

// Function: UMG.BendWidgetComponent.GetUserWidgetObject
// Size: 0x0008
struct BendWidgetComponent_GetUserWidgetObject_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.GetPooledWidget
// Size: 0x0000
struct BendWidgetComponent_GetPooledWidget_Params {
public:
};

// Function: UMG.BendWidgetComponent.GetOwnerPlayer
// Size: 0x0010
struct BendWidgetComponent_GetOwnerPlayer_Params {
public:
    class UObject* World; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.BendWidgetComponent.GetMaxInteractionDistance
// Size: 0x0004
struct BendWidgetComponent_GetMaxInteractionDistance_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.BendWidgetComponent.GetMaterialInstanceDynamic
// Size: 0x0008
struct BendWidgetComponent_GetMaterialInstanceDynamic_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.GetDrawSize
// Size: 0x0008
struct BendWidgetComponent_GetDrawSize_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.BendWidgetComponent.ForceRequestRedraw
// Size: 0x0000
struct BendWidgetComponent_ForceRequestRedraw_Params {
public:
};

// Function: UMG.PanelWidget.RemoveChildAt
// Size: 0x0005
struct PanelWidget_RemoveChildAt_Params {
public:
    int32_t Index; // 0x0000 (0x0004)
    bool ReturnValue; // 0x0004 (0x0001)
};

// Function: UMG.PanelWidget.RemoveChild
// Size: 0x0009
struct PanelWidget_RemoveChild_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: UMG.PanelWidget.HasChild
// Size: 0x0009
struct PanelWidget_HasChild_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    bool ReturnValue; // 0x0008 (0x0001)
};

// Function: UMG.PanelWidget.HasAnyChildren
// Size: 0x0001
struct PanelWidget_HasAnyChildren_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.PanelWidget.GetChildrenCount
// Size: 0x0004
struct PanelWidget_GetChildrenCount_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.PanelWidget.GetChildIndex
// Size: 0x000C
struct PanelWidget_GetChildIndex_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    int32_t ReturnValue; // 0x0008 (0x0004)
};

// Function: UMG.PanelWidget.GetChildAt
// Size: 0x0010
struct PanelWidget_GetChildAt_Params {
public:
    int32_t Index; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.PanelWidget.ClearChildren
// Size: 0x0000
struct PanelWidget_ClearChildren_Params {
public:
};

// Function: UMG.PanelWidget.AddChild
// Size: 0x0010
struct PanelWidget_AddChild_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.GridPanel.AddChildToGrid
// Size: 0x0010
struct GridPanel_AddChildToGrid_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.ContentWidget.GetContentSlot
// Size: 0x0008
struct ContentWidget_GetContentSlot_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.AsyncTaskDownloadImage.DownloadImage
// Size: 0x0018
struct AsyncTaskDownloadImage_DownloadImage_Params {
public:
    struct FString URL; // 0x0000 (0x0010)
    class UObject* ReturnValue; // 0x0010 (0x0008)
};

// Function: UMG.DragDropOperation.Drop
// Size: 0x0078
struct DragDropOperation_Drop_Params {
public:
    uint8_t PointerEvent[0x78]; // 0x0000 (0x0078)
};

// Function: UMG.DragDropOperation.Dragged
// Size: 0x0078
struct DragDropOperation_Dragged_Params {
public:
    uint8_t PointerEvent[0x78]; // 0x0000 (0x0078)
};

// Function: UMG.DragDropOperation.DragCancelled
// Size: 0x0078
struct DragDropOperation_DragCancelled_Params {
public:
    uint8_t PointerEvent[0x78]; // 0x0000 (0x0078)
};

// Function: UMG.BoolBinding.GetValue
// Size: 0x0001
struct BoolBinding_GetValue_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.BrushBinding.GetValue
// Size: 0x0090
struct BrushBinding_GetValue_Params {
public:
    uint8_t ReturnValue[0x90]; // 0x0000 (0x0090)
};

// Function: UMG.CheckedStateBinding.GetValue
// Size: 0x0001
struct CheckedStateBinding_GetValue_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.ColorBinding.GetSlateValue
// Size: 0x0028
struct ColorBinding_GetSlateValue_Params {
public:
    uint8_t ReturnValue[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.ColorBinding.GetLinearValue
// Size: 0x0010
struct ColorBinding_GetLinearValue_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.FloatBinding.GetValue
// Size: 0x0004
struct FloatBinding_GetValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.Int32Binding.GetValue
// Size: 0x0004
struct Int32Binding_GetValue_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.MouseCursorBinding.GetValue
// Size: 0x0001
struct MouseCursorBinding_GetValue_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.TextBinding.GetTextValue
// Size: 0x0018
struct TextBinding_GetTextValue_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.TextBinding.GetStringValue
// Size: 0x0010
struct TextBinding_GetStringValue_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: UMG.VisibilityBinding.GetValue
// Size: 0x0001
struct VisibilityBinding_GetValue_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.WidgetBinding.GetValue
// Size: 0x0008
struct WidgetBinding_GetValue_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.SlateBlueprintLibrary.LocalToViewport
// Size: 0x0054
struct SlateBlueprintLibrary_LocalToViewport_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t Geometry[0x34]; // 0x0008 (0x0034)
    uint8_t LocalCoordinate[0x8]; // 0x003C (0x0008)
    uint8_t PixelPosition[0x8]; // 0x0044 (0x0008)
    uint8_t ViewportPosition[0x8]; // 0x004C (0x0008)
};

// Function: UMG.SlateBlueprintLibrary.LocalToAbsolute
// Size: 0x0044
struct SlateBlueprintLibrary_LocalToAbsolute_Params {
public:
    uint8_t Geometry[0x34]; // 0x0000 (0x0034)
    uint8_t LocalCoordinate[0x8]; // 0x0034 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x003C (0x0008)
};

// Function: UMG.SlateBlueprintLibrary.IsUnderLocation
// Size: 0x003D
struct SlateBlueprintLibrary_IsUnderLocation_Params {
public:
    uint8_t Geometry[0x34]; // 0x0000 (0x0034)
    uint8_t AbsoluteCoordinate[0x8]; // 0x0034 (0x0008)
    bool ReturnValue; // 0x003C (0x0001)
};

// Function: UMG.SlateBlueprintLibrary.GetLocalSize
// Size: 0x003C
struct SlateBlueprintLibrary_GetLocalSize_Params {
public:
    uint8_t Geometry[0x34]; // 0x0000 (0x0034)
    uint8_t ReturnValue[0x8]; // 0x0034 (0x0008)
};

// Function: UMG.SlateBlueprintLibrary.AbsoluteToViewport
// Size: 0x0020
struct SlateBlueprintLibrary_AbsoluteToViewport_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t AbsoluteDesktopCoordinate[0x8]; // 0x0008 (0x0008)
    uint8_t PixelPosition[0x8]; // 0x0010 (0x0008)
    uint8_t ViewportPosition[0x8]; // 0x0018 (0x0008)
};

// Function: UMG.SlateBlueprintLibrary.AbsoluteToLocal
// Size: 0x0044
struct SlateBlueprintLibrary_AbsoluteToLocal_Params {
public:
    uint8_t Geometry[0x34]; // 0x0000 (0x0034)
    uint8_t AbsoluteCoordinate[0x8]; // 0x0034 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x003C (0x0008)
};

// Function: UMG.BorderSlot.SetVerticalAlignment
// Size: 0x0001
struct BorderSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.BorderSlot.SetPadding
// Size: 0x0010
struct BorderSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.BorderSlot.SetHorizontalAlignment
// Size: 0x0001
struct BorderSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.ButtonSlot.SetVerticalAlignment
// Size: 0x0001
struct ButtonSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.ButtonSlot.SetPadding
// Size: 0x0010
struct ButtonSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.ButtonSlot.SetHorizontalAlignment
// Size: 0x0001
struct ButtonSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.CanvasPanelSlot.SetZOrder
// Size: 0x0004
struct CanvasPanelSlot_SetZOrder_Params {
public:
    int32_t InZOrder; // 0x0000 (0x0004)
};

// Function: UMG.CanvasPanelSlot.SetSize
// Size: 0x0008
struct CanvasPanelSlot_SetSize_Params {
public:
    uint8_t InSize[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.SetPosition
// Size: 0x0008
struct CanvasPanelSlot_SetPosition_Params {
public:
    uint8_t InPosition[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.SetOffsets
// Size: 0x0010
struct CanvasPanelSlot_SetOffsets_Params {
public:
    uint8_t InOffset[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.CanvasPanelSlot.SetMinimum
// Size: 0x0008
struct CanvasPanelSlot_SetMinimum_Params {
public:
    uint8_t InMinimumAnchors[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.SetMaximum
// Size: 0x0008
struct CanvasPanelSlot_SetMaximum_Params {
public:
    uint8_t InMaximumAnchors[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.SetLayout
// Size: 0x0028
struct CanvasPanelSlot_SetLayout_Params {
public:
    uint8_t InLayoutData[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.CanvasPanelSlot.SetAutoSize
// Size: 0x0001
struct CanvasPanelSlot_SetAutoSize_Params {
public:
    bool InbAutoSize; // 0x0000 (0x0001)
};

// Function: UMG.CanvasPanelSlot.SetAnchors
// Size: 0x0010
struct CanvasPanelSlot_SetAnchors_Params {
public:
    uint8_t InAnchors[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.CanvasPanelSlot.SetAlignment
// Size: 0x0008
struct CanvasPanelSlot_SetAlignment_Params {
public:
    uint8_t InAlignment[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.GetZOrder
// Size: 0x0004
struct CanvasPanelSlot_GetZOrder_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.CanvasPanelSlot.GetSize
// Size: 0x0008
struct CanvasPanelSlot_GetSize_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.GetPosition
// Size: 0x0008
struct CanvasPanelSlot_GetPosition_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanelSlot.GetOffsets
// Size: 0x0010
struct CanvasPanelSlot_GetOffsets_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.CanvasPanelSlot.GetLayout
// Size: 0x0028
struct CanvasPanelSlot_GetLayout_Params {
public:
    uint8_t ReturnValue[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.CanvasPanelSlot.GetAutoSize
// Size: 0x0001
struct CanvasPanelSlot_GetAutoSize_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.CanvasPanelSlot.GetAnchors
// Size: 0x0010
struct CanvasPanelSlot_GetAnchors_Params {
public:
    uint8_t ReturnValue[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.CanvasPanelSlot.GetAlignment
// Size: 0x0008
struct CanvasPanelSlot_GetAlignment_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.GridSlot.SetVerticalAlignment
// Size: 0x0001
struct GridSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.GridSlot.SetRowSpan
// Size: 0x0004
struct GridSlot_SetRowSpan_Params {
public:
    int32_t InRowSpan; // 0x0000 (0x0004)
};

// Function: UMG.GridSlot.SetRow
// Size: 0x0004
struct GridSlot_SetRow_Params {
public:
    int32_t InRow; // 0x0000 (0x0004)
};

// Function: UMG.GridSlot.SetLayer
// Size: 0x0004
struct GridSlot_SetLayer_Params {
public:
    int32_t InLayer; // 0x0000 (0x0004)
};

// Function: UMG.GridSlot.SetHorizontalAlignment
// Size: 0x0001
struct GridSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.GridSlot.SetColumnSpan
// Size: 0x0004
struct GridSlot_SetColumnSpan_Params {
public:
    int32_t InColumnSpan; // 0x0000 (0x0004)
};

// Function: UMG.GridSlot.SetColumn
// Size: 0x0004
struct GridSlot_SetColumn_Params {
public:
    int32_t InColumn; // 0x0000 (0x0004)
};

// Function: UMG.HorizontalBoxSlot.SetVerticalAlignment
// Size: 0x0001
struct HorizontalBoxSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.HorizontalBoxSlot.SetSize
// Size: 0x0008
struct HorizontalBoxSlot_SetSize_Params {
public:
    uint8_t InSize[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.HorizontalBoxSlot.SetPadding
// Size: 0x0010
struct HorizontalBoxSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.HorizontalBoxSlot.SetHorizontalAlignment
// Size: 0x0001
struct HorizontalBoxSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.OverlaySlot.SetVerticalAlignment
// Size: 0x0001
struct OverlaySlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.OverlaySlot.SetPadding
// Size: 0x0010
struct OverlaySlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.OverlaySlot.SetHorizontalAlignment
// Size: 0x0001
struct OverlaySlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.ScaleBoxSlot.SetVerticalAlignment
// Size: 0x0001
struct ScaleBoxSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.ScaleBoxSlot.SetPadding
// Size: 0x0010
struct ScaleBoxSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.ScaleBoxSlot.SetHorizontalAlignment
// Size: 0x0001
struct ScaleBoxSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.ScrollBoxSlot.SetPadding
// Size: 0x0010
struct ScrollBoxSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.ScrollBoxSlot.SetHorizontalAlignment
// Size: 0x0001
struct ScrollBoxSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.SizeBoxSlot.SetVerticalAlignment
// Size: 0x0001
struct SizeBoxSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.SizeBoxSlot.SetPadding
// Size: 0x0010
struct SizeBoxSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.SizeBoxSlot.SetHorizontalAlignment
// Size: 0x0001
struct SizeBoxSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.UniformGridSlot.SetVerticalAlignment
// Size: 0x0001
struct UniformGridSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.UniformGridSlot.SetRow
// Size: 0x0004
struct UniformGridSlot_SetRow_Params {
public:
    int32_t InRow; // 0x0000 (0x0004)
};

// Function: UMG.UniformGridSlot.SetHorizontalAlignment
// Size: 0x0001
struct UniformGridSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.UniformGridSlot.SetColumn
// Size: 0x0004
struct UniformGridSlot_SetColumn_Params {
public:
    int32_t InColumn; // 0x0000 (0x0004)
};

// Function: UMG.VerticalBoxSlot.SetVerticalAlignment
// Size: 0x0001
struct VerticalBoxSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.VerticalBoxSlot.SetSize
// Size: 0x0008
struct VerticalBoxSlot_SetSize_Params {
public:
    uint8_t InSize[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.VerticalBoxSlot.SetPadding
// Size: 0x0010
struct VerticalBoxSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.VerticalBoxSlot.SetHorizontalAlignment
// Size: 0x0001
struct VerticalBoxSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.WidgetSwitcherSlot.SetVerticalAlignment
// Size: 0x0001
struct WidgetSwitcherSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.WidgetSwitcherSlot.SetPadding
// Size: 0x0010
struct WidgetSwitcherSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// Size: 0x0001
struct WidgetSwitcherSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.WrapBoxSlot.SetVerticalAlignment
// Size: 0x0001
struct WrapBoxSlot_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.WrapBoxSlot.SetPadding
// Size: 0x0010
struct WrapBoxSlot_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.WrapBoxSlot.SetHorizontalAlignment
// Size: 0x0001
struct WrapBoxSlot_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// Size: 0x0004
struct WrapBoxSlot_SetFillSpanWhenLessThan_Params {
public:
    float InFillSpanWhenLessThan; // 0x0000 (0x0004)
};

// Function: UMG.WrapBoxSlot.SetFillEmptySpace
// Size: 0x0001
struct WrapBoxSlot_SetFillEmptySpace_Params {
public:
    bool InbFillEmptySpace; // 0x0000 (0x0001)
};

// Function: UMG.CircularThrobber.SetRadius
// Size: 0x0004
struct CircularThrobber_SetRadius_Params {
public:
    float InRadius; // 0x0000 (0x0004)
};

// Function: UMG.CircularThrobber.SetPeriod
// Size: 0x0004
struct CircularThrobber_SetPeriod_Params {
public:
    float InPeriod; // 0x0000 (0x0004)
};

// Function: UMG.CircularThrobber.SetNumberOfPieces
// Size: 0x0004
struct CircularThrobber_SetNumberOfPieces_Params {
public:
    int32_t InNumberOfPieces; // 0x0000 (0x0004)
};

// Function: UMG.ComboBoxString.SetSelectedOption
// Size: 0x0010
struct ComboBoxString_SetSelectedOption_Params {
public:
    struct FString Option; // 0x0000 (0x0010)
};

// Function: UMG.ComboBoxString.RemoveOption
// Size: 0x0011
struct ComboBoxString_RemoveOption_Params {
public:
    struct FString Option; // 0x0000 (0x0010)
    bool ReturnValue; // 0x0010 (0x0001)
};

// Function: UMG.ComboBoxString.RefreshOptions
// Size: 0x0000
struct ComboBoxString_RefreshOptions_Params {
public:
};

// Function: UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// Size: 0x0011
struct ComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params {
public:
    struct FString SelectedItem; // 0x0000 (0x0010)
    uint8_t SelectionType; // 0x0010 (0x0001)
};

// Function: UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// Size: 0x0000
struct ComboBoxString_OnOpeningEvent__DelegateSignature_Params {
public:
};

// Function: UMG.ComboBoxString.GetSelectedOption
// Size: 0x0010
struct ComboBoxString_GetSelectedOption_Params {
public:
    struct FString ReturnValue; // 0x0000 (0x0010)
};

// Function: UMG.ComboBoxString.GetOptionCount
// Size: 0x0004
struct ComboBoxString_GetOptionCount_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.ComboBoxString.GetOptionAtIndex
// Size: 0x0018
struct ComboBoxString_GetOptionAtIndex_Params {
public:
    int32_t Index; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    struct FString ReturnValue; // 0x0008 (0x0010)
};

// Function: UMG.ComboBoxString.FindOptionIndex
// Size: 0x0014
struct ComboBoxString_FindOptionIndex_Params {
public:
    struct FString Option; // 0x0000 (0x0010)
    int32_t ReturnValue; // 0x0010 (0x0004)
};

// Function: UMG.ComboBoxString.ClearSelection
// Size: 0x0000
struct ComboBoxString_ClearSelection_Params {
public:
};

// Function: UMG.ComboBoxString.ClearOptions
// Size: 0x0000
struct ComboBoxString_ClearOptions_Params {
public:
};

// Function: UMG.ComboBoxString.AddOption
// Size: 0x0010
struct ComboBoxString_AddOption_Params {
public:
    struct FString Option; // 0x0000 (0x0010)
};

// Function: UMG.EditableText.SetText
// Size: 0x0018
struct EditableText_SetText_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
};

// Function: UMG.EditableText.SetIsReadOnly
// Size: 0x0001
struct EditableText_SetIsReadOnly_Params {
public:
    bool InbIsReadyOnly; // 0x0000 (0x0001)
};

// Function: UMG.EditableText.SetIsPassword
// Size: 0x0001
struct EditableText_SetIsPassword_Params {
public:
    bool InbIsPassword; // 0x0000 (0x0001)
};

// Function: UMG.EditableText.SetHintText
// Size: 0x0018
struct EditableText_SetHintText_Params {
public:
    struct FText InHintText; // 0x0000 (0x0018)
};

// Function: UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// Size: 0x0019
struct EditableText_OnEditableTextCommittedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
    uint8_t CommitMethod; // 0x0018 (0x0001)
};

// Function: UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// Size: 0x0018
struct EditableText_OnEditableTextChangedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
};

// Function: UMG.EditableText.GetText
// Size: 0x0018
struct EditableText_GetText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.EditableTextBox.SetText
// Size: 0x0018
struct EditableTextBox_SetText_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
};

// Function: UMG.EditableTextBox.SetError
// Size: 0x0018
struct EditableTextBox_SetError_Params {
public:
    struct FText InError; // 0x0000 (0x0018)
};

// Function: UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// Size: 0x0019
struct EditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
    uint8_t CommitMethod; // 0x0018 (0x0001)
};

// Function: UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// Size: 0x0018
struct EditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
};

// Function: UMG.EditableTextBox.GetText
// Size: 0x0018
struct EditableTextBox_GetText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.EditableTextBox.ClearError
// Size: 0x0000
struct EditableTextBox_ClearError_Params {
public:
};

// Function: UMG.ExpandableArea.SetIsExpanded
// Size: 0x0001
struct ExpandableArea_SetIsExpanded_Params {
public:
    bool IsExpanded; // 0x0000 (0x0001)
};

// Function: UMG.ExpandableArea.GetIsExpanded
// Size: 0x0001
struct ExpandableArea_GetIsExpanded_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.Image.SetOpacity
// Size: 0x0004
struct Image_SetOpacity_Params {
public:
    float InOpacity; // 0x0000 (0x0004)
};

// Function: UMG.Image.SetColorAndOpacity
// Size: 0x0010
struct Image_SetColorAndOpacity_Params {
public:
    uint8_t InColorAndOpacity[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Image.SetBrushFromTexture
// Size: 0x0009
struct Image_SetBrushFromTexture_Params {
public:
    class UObject* Texture; // 0x0000 (0x0008)
    bool bMatchSize; // 0x0008 (0x0001)
};

// Function: UMG.Image.SetBrushFromMaterial
// Size: 0x0008
struct Image_SetBrushFromMaterial_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
};

// Function: UMG.Image.SetBrushFromAsset
// Size: 0x0008
struct Image_SetBrushFromAsset_Params {
public:
    class UObject* Asset; // 0x0000 (0x0008)
};

// Function: UMG.Image.SetBrush
// Size: 0x0090
struct Image_SetBrush_Params {
public:
    uint8_t InBrush[0x90]; // 0x0000 (0x0090)
};

// Function: UMG.Image.GetDynamicMaterial
// Size: 0x0008
struct Image_GetDynamicMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.CanvasPanel.AddChildToCanvas
// Size: 0x0010
struct CanvasPanel_AddChildToCanvas_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.Border.SetVerticalAlignment
// Size: 0x0001
struct Border_SetVerticalAlignment_Params {
public:
    uint8_t InVerticalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.Border.SetPadding
// Size: 0x0010
struct Border_SetPadding_Params {
public:
    uint8_t InPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Border.SetHorizontalAlignment
// Size: 0x0001
struct Border_SetHorizontalAlignment_Params {
public:
    uint8_t InHorizontalAlignment; // 0x0000 (0x0001)
};

// Function: UMG.Border.SetContentOpacity
// Size: 0x0005
struct Border_SetContentOpacity_Params {
public:
    float InAlpha; // 0x0000 (0x0004)
    uint8_t HiddenVisibility; // 0x0004 (0x0001)
};

// Function: UMG.Border.SetContentColorAndOpacity
// Size: 0x0010
struct Border_SetContentColorAndOpacity_Params {
public:
    uint8_t InContentColorAndOpacity[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Border.SetBrushFromTexture
// Size: 0x0008
struct Border_SetBrushFromTexture_Params {
public:
    class UObject* Texture; // 0x0000 (0x0008)
};

// Function: UMG.Border.SetBrushFromMaterial
// Size: 0x0008
struct Border_SetBrushFromMaterial_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
};

// Function: UMG.Border.SetBrushFromAsset
// Size: 0x0008
struct Border_SetBrushFromAsset_Params {
public:
    class UObject* Asset; // 0x0000 (0x0008)
};

// Function: UMG.Border.SetBrushColor
// Size: 0x0010
struct Border_SetBrushColor_Params {
public:
    uint8_t InBrushColor[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Border.SetBrush
// Size: 0x0090
struct Border_SetBrush_Params {
public:
    uint8_t InBrush[0x90]; // 0x0000 (0x0090)
};

// Function: UMG.Border.GetDynamicMaterial
// Size: 0x0008
struct Border_GetDynamicMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.Button.SetStyle
// Size: 0x02A8
struct Button_SetStyle_Params {
public:
    uint8_t InStyle[0x2A8]; // 0x0000 (0x02A8)
};

// Function: UMG.Button.SetColorAndOpacity
// Size: 0x0010
struct Button_SetColorAndOpacity_Params {
public:
    uint8_t InColorAndOpacity[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Button.SetBackgroundColor
// Size: 0x0010
struct Button_SetBackgroundColor_Params {
public:
    uint8_t InBackgroundColor[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Button.IsPressed
// Size: 0x0001
struct Button_IsPressed_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.CheckBox.SetIsChecked
// Size: 0x0001
struct CheckBox_SetIsChecked_Params {
public:
    bool InIsChecked; // 0x0000 (0x0001)
};

// Function: UMG.CheckBox.SetCheckedState
// Size: 0x0001
struct CheckBox_SetCheckedState_Params {
public:
    uint8_t InCheckedState; // 0x0000 (0x0001)
};

// Function: UMG.CheckBox.IsPressed
// Size: 0x0001
struct CheckBox_IsPressed_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.CheckBox.IsChecked
// Size: 0x0001
struct CheckBox_IsChecked_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.CheckBox.GetCheckedState
// Size: 0x0001
struct CheckBox_GetCheckedState_Params {
public:
    uint8_t ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.InvalidationBox.SetCanCache
// Size: 0x0001
struct InvalidationBox_SetCanCache_Params {
public:
    bool CanCache; // 0x0000 (0x0001)
};

// Function: UMG.InvalidationBox.InvalidateCache
// Size: 0x0000
struct InvalidationBox_InvalidateCache_Params {
public:
};

// Function: UMG.InvalidationBox.GetCanCache
// Size: 0x0001
struct InvalidationBox_GetCanCache_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.MenuAnchor.ToggleOpen
// Size: 0x0001
struct MenuAnchor_ToggleOpen_Params {
public:
    bool bFocusOnOpen; // 0x0000 (0x0001)
};

// Function: UMG.MenuAnchor.ShouldOpenDueToClick
// Size: 0x0001
struct MenuAnchor_ShouldOpenDueToClick_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.MenuAnchor.Open
// Size: 0x0001
struct MenuAnchor_Open_Params {
public:
    bool bFocusMenu; // 0x0000 (0x0001)
};

// Function: UMG.MenuAnchor.IsOpen
// Size: 0x0001
struct MenuAnchor_IsOpen_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.MenuAnchor.HasOpenSubMenus
// Size: 0x0001
struct MenuAnchor_HasOpenSubMenus_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.MenuAnchor.GetMenuPosition
// Size: 0x0008
struct MenuAnchor_GetMenuPosition_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.MenuAnchor.Close
// Size: 0x0000
struct MenuAnchor_Close_Params {
public:
};

// Function: UMG.RetainerBox.SetTextureParameter
// Size: 0x0008
struct RetainerBox_SetTextureParameter_Params {
public:
    struct FName TextureParameter; // 0x0000 (0x0008)
};

// Function: UMG.RetainerBox.SetEffectMaterial
// Size: 0x0008
struct RetainerBox_SetEffectMaterial_Params {
public:
    class UObject* EffectMaterial; // 0x0000 (0x0008)
};

// Function: UMG.RetainerBox.GetEffectMaterial
// Size: 0x0008
struct RetainerBox_GetEffectMaterial_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.SizeBox.SetWidthOverride
// Size: 0x0004
struct SizeBox_SetWidthOverride_Params {
public:
    float InWidthOverride; // 0x0000 (0x0004)
};

// Function: UMG.SizeBox.SetMinDesiredWidth
// Size: 0x0004
struct SizeBox_SetMinDesiredWidth_Params {
public:
    float InMinDesiredWidth; // 0x0000 (0x0004)
};

// Function: UMG.SizeBox.SetMinDesiredHeight
// Size: 0x0004
struct SizeBox_SetMinDesiredHeight_Params {
public:
    float InMinDesiredHeight; // 0x0000 (0x0004)
};

// Function: UMG.SizeBox.SetMaxDesiredWidth
// Size: 0x0004
struct SizeBox_SetMaxDesiredWidth_Params {
public:
    float InMaxDesiredWidth; // 0x0000 (0x0004)
};

// Function: UMG.SizeBox.SetMaxDesiredHeight
// Size: 0x0004
struct SizeBox_SetMaxDesiredHeight_Params {
public:
    float InMaxDesiredHeight; // 0x0000 (0x0004)
};

// Function: UMG.SizeBox.SetHeightOverride
// Size: 0x0004
struct SizeBox_SetHeightOverride_Params {
public:
    float InHeightOverride; // 0x0000 (0x0004)
};

// Function: UMG.SizeBox.ClearWidthOverride
// Size: 0x0000
struct SizeBox_ClearWidthOverride_Params {
public:
};

// Function: UMG.SizeBox.ClearMinDesiredWidth
// Size: 0x0000
struct SizeBox_ClearMinDesiredWidth_Params {
public:
};

// Function: UMG.SizeBox.ClearMinDesiredHeight
// Size: 0x0000
struct SizeBox_ClearMinDesiredHeight_Params {
public:
};

// Function: UMG.SizeBox.ClearMaxDesiredWidth
// Size: 0x0000
struct SizeBox_ClearMaxDesiredWidth_Params {
public:
};

// Function: UMG.SizeBox.ClearMaxDesiredHeight
// Size: 0x0000
struct SizeBox_ClearMaxDesiredHeight_Params {
public:
};

// Function: UMG.SizeBox.ClearHeightOverride
// Size: 0x0000
struct SizeBox_ClearHeightOverride_Params {
public:
};

// Function: UMG.Viewport.Spawn
// Size: 0x0010
struct Viewport_Spawn_Params {
public:
    class UClass* ActorClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.Viewport.SetViewRotation
// Size: 0x000C
struct Viewport_SetViewRotation_Params {
public:
    uint8_t Rotation[0xC]; // 0x0000 (0x000C)
};

// Function: UMG.Viewport.SetViewLocation
// Size: 0x000C
struct Viewport_SetViewLocation_Params {
public:
    uint8_t Location[0xC]; // 0x0000 (0x000C)
};

// Function: UMG.Viewport.GetViewRotation
// Size: 0x000C
struct Viewport_GetViewRotation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: UMG.Viewport.GetViewportWorld
// Size: 0x0008
struct Viewport_GetViewportWorld_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.Viewport.GetViewLocation
// Size: 0x000C
struct Viewport_GetViewLocation_Params {
public:
    uint8_t ReturnValue[0xC]; // 0x0000 (0x000C)
};

// Function: UMG.HorizontalBox.AddChildToHorizontalBox
// Size: 0x0010
struct HorizontalBox_AddChildToHorizontalBox_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.Overlay.AddChildToOverlay
// Size: 0x0010
struct Overlay_AddChildToOverlay_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.ScrollBox.SetScrollOffset
// Size: 0x0004
struct ScrollBox_SetScrollOffset_Params {
public:
    float NewScrollOffset; // 0x0000 (0x0004)
};

// Function: UMG.ScrollBox.ScrollWidgetIntoView
// Size: 0x0009
struct ScrollBox_ScrollWidgetIntoView_Params {
public:
    class UObject* WidgetToFind; // 0x0000 (0x0008)
    bool AnimateScroll; // 0x0008 (0x0001)
};

// Function: UMG.ScrollBox.ScrollToStart
// Size: 0x0000
struct ScrollBox_ScrollToStart_Params {
public:
};

// Function: UMG.ScrollBox.ScrollToEnd
// Size: 0x0000
struct ScrollBox_ScrollToEnd_Params {
public:
};

// Function: UMG.ScrollBox.GetScrollOffset
// Size: 0x0004
struct ScrollBox_GetScrollOffset_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.UniformGridPanel.SetSlotPadding
// Size: 0x0010
struct UniformGridPanel_SetSlotPadding_Params {
public:
    uint8_t InSlotPadding[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.UniformGridPanel.SetMinDesiredSlotWidth
// Size: 0x0004
struct UniformGridPanel_SetMinDesiredSlotWidth_Params {
public:
    float InMinDesiredSlotWidth; // 0x0000 (0x0004)
};

// Function: UMG.UniformGridPanel.SetMinDesiredSlotHeight
// Size: 0x0004
struct UniformGridPanel_SetMinDesiredSlotHeight_Params {
public:
    float InMinDesiredSlotHeight; // 0x0000 (0x0004)
};

// Function: UMG.UniformGridPanel.AddChildToUniformGrid
// Size: 0x0010
struct UniformGridPanel_AddChildToUniformGrid_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.VerticalBox.AddChildToVerticalBox
// Size: 0x0010
struct VerticalBox_AddChildToVerticalBox_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetSwitcher.SetActiveWidgetIndex
// Size: 0x0004
struct WidgetSwitcher_SetActiveWidgetIndex_Params {
public:
    int32_t Index; // 0x0000 (0x0004)
};

// Function: UMG.WidgetSwitcher.SetActiveWidget
// Size: 0x0008
struct WidgetSwitcher_SetActiveWidget_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
};

// Function: UMG.WidgetSwitcher.GetWidgetAtIndex
// Size: 0x0010
struct WidgetSwitcher_GetWidgetAtIndex_Params {
public:
    int32_t Index; // 0x0000 (0x0004)
    uint8_t Pad_0[0x4]; // 0x0004 (0x0004)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetSwitcher.GetNumWidgets
// Size: 0x0004
struct WidgetSwitcher_GetNumWidgets_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.WidgetSwitcher.GetActiveWidgetIndex
// Size: 0x0004
struct WidgetSwitcher_GetActiveWidgetIndex_Params {
public:
    int32_t ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.WrapBox.SetInnerSlotPadding
// Size: 0x0008
struct WrapBox_SetInnerSlotPadding_Params {
public:
    uint8_t InPadding[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.WrapBox.AddChildWrapBox
// Size: 0x0010
struct WrapBox_AddChildWrapBox_Params {
public:
    class UObject* Content; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.ProgressBar.SetPercent
// Size: 0x0004
struct ProgressBar_SetPercent_Params {
public:
    float InPercent; // 0x0000 (0x0004)
};

// Function: UMG.ProgressBar.SetIsMarquee
// Size: 0x0001
struct ProgressBar_SetIsMarquee_Params {
public:
    bool InbIsMarquee; // 0x0000 (0x0001)
};

// Function: UMG.ProgressBar.SetFillColorAndOpacity
// Size: 0x0010
struct ProgressBar_SetFillColorAndOpacity_Params {
public:
    uint8_t InColor[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.ProgressBar.SetBarFillType
// Size: 0x0001
struct ProgressBar_SetBarFillType_Params {
public:
    uint8_t Type; // 0x0000 (0x0001)
};

// Function: UMG.ScrollBar.SetState
// Size: 0x0008
struct ScrollBar_SetState_Params {
public:
    float InOffsetFraction; // 0x0000 (0x0004)
    float InThumbSizeFraction; // 0x0004 (0x0004)
};

// Function: UMG.Slider.SetValue
// Size: 0x0004
struct Slider_SetValue_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: UMG.Slider.SetStepSize
// Size: 0x0004
struct Slider_SetStepSize_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: UMG.Slider.SetSliderHandleColor
// Size: 0x0010
struct Slider_SetSliderHandleColor_Params {
public:
    uint8_t InValue[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Slider.SetSliderBarColor
// Size: 0x0010
struct Slider_SetSliderBarColor_Params {
public:
    uint8_t InValue[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.Slider.SetLocked
// Size: 0x0001
struct Slider_SetLocked_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: UMG.Slider.SetIndentHandle
// Size: 0x0001
struct Slider_SetIndentHandle_Params {
public:
    bool InValue; // 0x0000 (0x0001)
};

// Function: UMG.Slider.GetValue
// Size: 0x0004
struct Slider_GetValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.Spacer.SetSize
// Size: 0x0008
struct Spacer_SetSize_Params {
public:
    uint8_t InSize[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.SpinBox.SetValue
// Size: 0x0004
struct SpinBox_SetValue_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.SetMinValue
// Size: 0x0004
struct SpinBox_SetMinValue_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.SetMinSliderValue
// Size: 0x0004
struct SpinBox_SetMinSliderValue_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.SetMaxValue
// Size: 0x0004
struct SpinBox_SetMaxValue_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.SetMaxSliderValue
// Size: 0x0004
struct SpinBox_SetMaxSliderValue_Params {
public:
    float NewValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.SetForegroundColor
// Size: 0x0028
struct SpinBox_SetForegroundColor_Params {
public:
    uint8_t InForegroundColor[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// Size: 0x0005
struct SpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params {
public:
    float InValue; // 0x0000 (0x0004)
    uint8_t CommitMethod; // 0x0004 (0x0001)
};

// Function: UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// Size: 0x0004
struct SpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params {
public:
    float InValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// Size: 0x0000
struct SpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params {
public:
};

// Function: UMG.SpinBox.GetValue
// Size: 0x0004
struct SpinBox_GetValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.GetMinValue
// Size: 0x0004
struct SpinBox_GetMinValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.GetMinSliderValue
// Size: 0x0004
struct SpinBox_GetMinSliderValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.GetMaxValue
// Size: 0x0004
struct SpinBox_GetMaxValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.GetMaxSliderValue
// Size: 0x0004
struct SpinBox_GetMaxSliderValue_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.SpinBox.ClearMinValue
// Size: 0x0000
struct SpinBox_ClearMinValue_Params {
public:
};

// Function: UMG.SpinBox.ClearMinSliderValue
// Size: 0x0000
struct SpinBox_ClearMinSliderValue_Params {
public:
};

// Function: UMG.SpinBox.ClearMaxValue
// Size: 0x0000
struct SpinBox_ClearMaxValue_Params {
public:
};

// Function: UMG.SpinBox.ClearMaxSliderValue
// Size: 0x0000
struct SpinBox_ClearMaxSliderValue_Params {
public:
};

// Function: UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
// Size: 0x0010
struct TableViewBase_OnGenerateRowUObject__DelegateSignature_Params {
public:
    class UObject* Item; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.TileView.SetItemWidth
// Size: 0x0004
struct TileView_SetItemWidth_Params {
public:
    float Width; // 0x0000 (0x0004)
};

// Function: UMG.TileView.SetItemHeight
// Size: 0x0004
struct TileView_SetItemHeight_Params {
public:
    float Height; // 0x0000 (0x0004)
};

// Function: UMG.TileView.RequestListRefresh
// Size: 0x0000
struct TileView_RequestListRefresh_Params {
public:
};

// Function: UMG.MultiLineEditableText.SetText
// Size: 0x0018
struct MultiLineEditableText_SetText_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
};

// Function: UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// Size: 0x0019
struct MultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
    uint8_t CommitMethod; // 0x0018 (0x0001)
};

// Function: UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// Size: 0x0018
struct MultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
};

// Function: UMG.MultiLineEditableText.GetText
// Size: 0x0018
struct MultiLineEditableText_GetText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.MultiLineEditableTextBox.SetText
// Size: 0x0018
struct MultiLineEditableTextBox_SetText_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
};

// Function: UMG.MultiLineEditableTextBox.SetError
// Size: 0x0018
struct MultiLineEditableTextBox_SetError_Params {
public:
    struct FText InError; // 0x0000 (0x0018)
};

// Function: UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// Size: 0x0019
struct MultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
    uint8_t CommitMethod; // 0x0018 (0x0001)
};

// Function: UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// Size: 0x0018
struct MultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params {
public:
    struct FText Text; // 0x0000 (0x0018)
};

// Function: UMG.MultiLineEditableTextBox.GetText
// Size: 0x0018
struct MultiLineEditableTextBox_GetText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.RichTextBlock.SetText
// Size: 0x0018
struct RichTextBlock_SetText_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
};

// Function: UMG.RichTextBlock.GetText
// Size: 0x0018
struct RichTextBlock_GetText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.TextBlock.SetText
// Size: 0x0018
struct TextBlock_SetText_Params {
public:
    struct FText InText; // 0x0000 (0x0018)
};

// Function: UMG.TextBlock.SetShadowOffset
// Size: 0x0008
struct TextBlock_SetShadowOffset_Params {
public:
    uint8_t InShadowOffset[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.TextBlock.SetShadowColorAndOpacity
// Size: 0x0010
struct TextBlock_SetShadowColorAndOpacity_Params {
public:
    uint8_t InShadowColorAndOpacity[0x10]; // 0x0000 (0x0010)
};

// Function: UMG.TextBlock.SetOpacity
// Size: 0x0004
struct TextBlock_SetOpacity_Params {
public:
    float InOpacity; // 0x0000 (0x0004)
};

// Function: UMG.TextBlock.SetJustification
// Size: 0x0001
struct TextBlock_SetJustification_Params {
public:
    uint8_t InJustification; // 0x0000 (0x0001)
};

// Function: UMG.TextBlock.SetFont
// Size: 0x0040
struct TextBlock_SetFont_Params {
public:
    uint8_t InFontInfo[0x40]; // 0x0000 (0x0040)
};

// Function: UMG.TextBlock.SetColorAndOpacity
// Size: 0x0028
struct TextBlock_SetColorAndOpacity_Params {
public:
    uint8_t InColorAndOpacity[0x28]; // 0x0000 (0x0028)
};

// Function: UMG.TextBlock.GetText
// Size: 0x0018
struct TextBlock_GetText_Params {
public:
    struct FText ReturnValue; // 0x0000 (0x0018)
};

// Function: UMG.Throbber.SetNumberOfPieces
// Size: 0x0004
struct Throbber_SetNumberOfPieces_Params {
public:
    int32_t InNumberOfPieces; // 0x0000 (0x0004)
};

// Function: UMG.Throbber.SetAnimateVertically
// Size: 0x0001
struct Throbber_SetAnimateVertically_Params {
public:
    bool bInAnimateVertically; // 0x0000 (0x0001)
};

// Function: UMG.Throbber.SetAnimateOpacity
// Size: 0x0001
struct Throbber_SetAnimateOpacity_Params {
public:
    bool bInAnimateOpacity; // 0x0000 (0x0001)
};

// Function: UMG.Throbber.SetAnimateHorizontally
// Size: 0x0001
struct Throbber_SetAnimateHorizontally_Params {
public:
    bool bInAnimateHorizontally; // 0x0000 (0x0001)
};

// Function: UMG.WidgetAnimation.GetStartTime
// Size: 0x0004
struct WidgetAnimation_GetStartTime_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.WidgetAnimation.GetEndTime
// Size: 0x0004
struct WidgetAnimation_GetEndTime_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.WidgetBlueprintLibrary.UnlockMouse
// Size: 0x0150
struct WidgetBlueprintLibrary_UnlockMouse_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    uint8_t ReturnValue[0xA8]; // 0x00A8 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.Unhandled
// Size: 0x00A8
struct WidgetBlueprintLibrary_Unhandled_Params {
public:
    uint8_t ReturnValue[0xA8]; // 0x0000 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.SetUserFocus
// Size: 0x0160
struct WidgetBlueprintLibrary_SetUserFocus_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    class UObject* FocusWidget; // 0x00A8 (0x0008)
    bool bInAllUsers; // 0x00B0 (0x0001)
    uint8_t Pad_0[0x7]; // 0x00B1 (0x0007)
    uint8_t ReturnValue[0xA8]; // 0x00B8 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.SetMousePosition
// Size: 0x0158
struct WidgetBlueprintLibrary_SetMousePosition_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    uint8_t NewMousePosition[0x8]; // 0x00A8 (0x0008)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// Size: 0x0011
struct WidgetBlueprintLibrary_SetInputMode_UIOnly_Params {
public:
    class UObject* Target; // 0x0000 (0x0008)
    class UObject* InWidgetToFocus; // 0x0008 (0x0008)
    bool bLockMouseToViewport; // 0x0010 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// Size: 0x0008
struct WidgetBlueprintLibrary_SetInputMode_GameOnly_Params {
public:
    class UObject* Target; // 0x0000 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// Size: 0x0012
struct WidgetBlueprintLibrary_SetInputMode_GameAndUI_Params {
public:
    class UObject* Target; // 0x0000 (0x0008)
    class UObject* InWidgetToFocus; // 0x0008 (0x0008)
    bool bLockMouseToViewport; // 0x0010 (0x0001)
    bool bHideCursorDuringCapture; // 0x0011 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// Size: 0x0000
struct WidgetBlueprintLibrary_SetFocusToGameViewport_Params {
public:
};

// Function: UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// Size: 0x0098
struct WidgetBlueprintLibrary_SetBrushResourceToTexture_Params {
public:
    uint8_t Brush[0x90]; // 0x0000 (0x0090)
    class UObject* Texture; // 0x0090 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// Size: 0x0098
struct WidgetBlueprintLibrary_SetBrushResourceToMaterial_Params {
public:
    uint8_t Brush[0x90]; // 0x0000 (0x0090)
    class UObject* Material; // 0x0090 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// Size: 0x0150
struct WidgetBlueprintLibrary_ReleaseMouseCapture_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    uint8_t ReturnValue[0xA8]; // 0x00A8 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// Size: 0x0158
struct WidgetBlueprintLibrary_ReleaseJoystickCapture_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    bool bInAllJoysticks; // 0x00A8 (0x0001)
    uint8_t Pad_0[0x7]; // 0x00A9 (0x0007)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.NoResourceBrush
// Size: 0x0090
struct WidgetBlueprintLibrary_NoResourceBrush_Params {
public:
    uint8_t ReturnValue[0x90]; // 0x0000 (0x0090)
};

// Function: UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// Size: 0x00A0
struct WidgetBlueprintLibrary_MakeBrushFromTexture_Params {
public:
    class UObject* Texture; // 0x0000 (0x0008)
    int32_t Width; // 0x0008 (0x0004)
    int32_t Height; // 0x000C (0x0004)
    uint8_t ReturnValue[0x90]; // 0x0010 (0x0090)
};

// Function: UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// Size: 0x00A0
struct WidgetBlueprintLibrary_MakeBrushFromMaterial_Params {
public:
    class UObject* Material; // 0x0000 (0x0008)
    int32_t Width; // 0x0008 (0x0004)
    int32_t Height; // 0x000C (0x0004)
    uint8_t ReturnValue[0x90]; // 0x0010 (0x0090)
};

// Function: UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// Size: 0x0098
struct WidgetBlueprintLibrary_MakeBrushFromAsset_Params {
public:
    class UObject* BrushAsset; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x90]; // 0x0008 (0x0090)
};

// Function: UMG.WidgetBlueprintLibrary.LockMouse
// Size: 0x0158
struct WidgetBlueprintLibrary_LockMouse_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    class UObject* CapturingWidget; // 0x00A8 (0x0008)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.IsDragDropping
// Size: 0x0001
struct WidgetBlueprintLibrary_IsDragDropping_Params {
public:
    bool ReturnValue; // 0x0000 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.Handled
// Size: 0x00A8
struct WidgetBlueprintLibrary_Handled_Params {
public:
    uint8_t ReturnValue[0xA8]; // 0x0000 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// Size: 0x0098
struct WidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params {
public:
    uint8_t Event[0x50]; // 0x0000 (0x0050)
    uint8_t ReturnValue[0x48]; // 0x0050 (0x0048)
};

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// Size: 0x00A0
struct WidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params {
public:
    uint8_t Event[0x78]; // 0x0000 (0x0078)
    uint8_t ReturnValue[0x28]; // 0x0078 (0x0028)
};

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// Size: 0x0058
struct WidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params {
public:
    uint8_t Event[0x30]; // 0x0000 (0x0030)
    uint8_t ReturnValue[0x28]; // 0x0030 (0x0028)
};

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// Size: 0x0070
struct WidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params {
public:
    uint8_t Event[0x48]; // 0x0000 (0x0048)
    uint8_t ReturnValue[0x28]; // 0x0048 (0x0028)
};

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
// Size: 0x0070
struct WidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params {
public:
    uint8_t Event[0x48]; // 0x0000 (0x0048)
    uint8_t ReturnValue[0x28]; // 0x0048 (0x0028)
};

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// Size: 0x0058
struct WidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params {
public:
    uint8_t Event[0x30]; // 0x0000 (0x0030)
    uint8_t ReturnValue[0x28]; // 0x0030 (0x0028)
};

// Function: UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// Size: 0x0098
struct WidgetBlueprintLibrary_GetDynamicMaterial_Params {
public:
    uint8_t Brush[0x90]; // 0x0000 (0x0090)
    class UObject* ReturnValue; // 0x0090 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// Size: 0x0008
struct WidgetBlueprintLibrary_GetDragDroppingContent_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// Size: 0x0098
struct WidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params {
public:
    uint8_t Brush[0x90]; // 0x0000 (0x0090)
    class UObject* ReturnValue; // 0x0090 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// Size: 0x0098
struct WidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params {
public:
    uint8_t Brush[0x90]; // 0x0000 (0x0090)
    class UObject* ReturnValue; // 0x0090 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.GetBrushResource
// Size: 0x0098
struct WidgetBlueprintLibrary_GetBrushResource_Params {
public:
    uint8_t Brush[0x90]; // 0x0000 (0x0090)
    class UObject* ReturnValue; // 0x0090 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// Size: 0x0021
struct WidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* Interface; // 0x0008 (0x0008)
    struct TArray<uint8_t> FoundWidgets; // 0x0010 (0x0010)
    bool TopLevelOnly; // 0x0020 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// Size: 0x0021
struct WidgetBlueprintLibrary_GetAllWidgetsOfClass_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    struct TArray<uint8_t> FoundWidgets; // 0x0008 (0x0010)
    class UClass* WidgetClass; // 0x0018 (0x0008)
    bool TopLevelOnly; // 0x0020 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.EndDragDrop
// Size: 0x0150
struct WidgetBlueprintLibrary_EndDragDrop_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    uint8_t ReturnValue[0xA8]; // 0x00A8 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.DrawTextFormatted
// Size: 0x0078
struct WidgetBlueprintLibrary_DrawTextFormatted_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    struct FText Text; // 0x0030 (0x0018)
    uint8_t Position[0x8]; // 0x0048 (0x0008)
    class UObject* Font; // 0x0050 (0x0008)
    int32_t FontSize; // 0x0058 (0x0004)
    uint8_t Pad_0[0x4]; // 0x005C (0x0004)
    struct FName FontTypeFace; // 0x0060 (0x0008)
    uint8_t Tint[0x10]; // 0x0068 (0x0010)
};

// Function: UMG.WidgetBlueprintLibrary.DrawText
// Size: 0x0058
struct WidgetBlueprintLibrary_DrawText_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    struct FString InString; // 0x0030 (0x0010)
    uint8_t Position[0x8]; // 0x0040 (0x0008)
    uint8_t Tint[0x10]; // 0x0048 (0x0010)
};

// Function: UMG.WidgetBlueprintLibrary.DrawLines
// Size: 0x0051
struct WidgetBlueprintLibrary_DrawLines_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    struct TArray<uint8_t> Points; // 0x0030 (0x0010)
    uint8_t Tint[0x10]; // 0x0040 (0x0010)
    bool bAntiAlias; // 0x0050 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.DrawLine
// Size: 0x0051
struct WidgetBlueprintLibrary_DrawLine_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    uint8_t PositionA[0x8]; // 0x0030 (0x0008)
    uint8_t PositionB[0x8]; // 0x0038 (0x0008)
    uint8_t Tint[0x10]; // 0x0040 (0x0010)
    bool bAntiAlias; // 0x0050 (0x0001)
};

// Function: UMG.WidgetBlueprintLibrary.DrawBox
// Size: 0x0058
struct WidgetBlueprintLibrary_DrawBox_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    uint8_t Position[0x8]; // 0x0030 (0x0008)
    uint8_t Size[0x8]; // 0x0038 (0x0008)
    class UObject* Brush; // 0x0040 (0x0008)
    uint8_t Tint[0x10]; // 0x0048 (0x0010)
};

// Function: UMG.WidgetBlueprintLibrary.DismissAllMenus
// Size: 0x0000
struct WidgetBlueprintLibrary_DismissAllMenus_Params {
public:
};

// Function: UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// Size: 0x0140
struct WidgetBlueprintLibrary_DetectDragIfPressed_Params {
public:
    uint8_t PointerEvent[0x78]; // 0x0000 (0x0078)
    class UObject* WidgetDetectingDrag; // 0x0078 (0x0008)
    uint8_t DragKey[0x18]; // 0x0080 (0x0018)
    uint8_t ReturnValue[0xA8]; // 0x0098 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.DetectDrag
// Size: 0x0170
struct WidgetBlueprintLibrary_DetectDrag_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    class UObject* WidgetDetectingDrag; // 0x00A8 (0x0008)
    uint8_t DragKey[0x18]; // 0x00B0 (0x0018)
    uint8_t ReturnValue[0xA8]; // 0x00C8 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// Size: 0x0010
struct WidgetBlueprintLibrary_CreateDragDropOperation_Params {
public:
    class UClass* OperationClass; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.Create
// Size: 0x0020
struct WidgetBlueprintLibrary_Create_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    class UClass* WidgetType; // 0x0008 (0x0008)
    class UObject* OwningPlayer; // 0x0010 (0x0008)
    class UObject* ReturnValue; // 0x0018 (0x0008)
};

// Function: UMG.WidgetBlueprintLibrary.ClearUserFocus
// Size: 0x0158
struct WidgetBlueprintLibrary_ClearUserFocus_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    bool bInAllUsers; // 0x00A8 (0x0001)
    uint8_t Pad_0[0x7]; // 0x00A9 (0x0007)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.CaptureMouse
// Size: 0x0158
struct WidgetBlueprintLibrary_CaptureMouse_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    class UObject* CapturingWidget; // 0x00A8 (0x0008)
    uint8_t ReturnValue[0xA8]; // 0x00B0 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.CaptureJoystick
// Size: 0x0160
struct WidgetBlueprintLibrary_CaptureJoystick_Params {
public:
    uint8_t Reply[0xA8]; // 0x0000 (0x00A8)
    class UObject* CapturingWidget; // 0x00A8 (0x0008)
    bool bInAllJoysticks; // 0x00B0 (0x0001)
    uint8_t Pad_0[0x7]; // 0x00B1 (0x0007)
    uint8_t ReturnValue[0xA8]; // 0x00B8 (0x00A8)
};

// Function: UMG.WidgetBlueprintLibrary.CancelDragDrop
// Size: 0x0000
struct WidgetBlueprintLibrary_CancelDragDrop_Params {
public:
};

// Function: UMG.WidgetBlueprintLibrary.BendDrawLines
// Size: 0x0060
struct WidgetBlueprintLibrary_BendDrawLines_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    struct TArray<uint8_t> Points; // 0x0030 (0x0010)
    uint8_t Tint[0x10]; // 0x0040 (0x0010)
    bool bAntiAlias; // 0x0050 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0051 (0x0003)
    float Thickness; // 0x0054 (0x0004)
    bool bIsPath; // 0x0058 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0059 (0x0003)
    float ClipRadius; // 0x005C (0x0004)
};

// Function: UMG.WidgetBlueprintLibrary.BendDrawLine
// Size: 0x0060
struct WidgetBlueprintLibrary_BendDrawLine_Params {
public:
    uint8_t Context[0x30]; // 0x0000 (0x0030)
    uint8_t PositionA[0x8]; // 0x0030 (0x0008)
    uint8_t PositionB[0x8]; // 0x0038 (0x0008)
    uint8_t Tint[0x10]; // 0x0040 (0x0010)
    bool bAntiAlias; // 0x0050 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0051 (0x0003)
    float Thickness; // 0x0054 (0x0004)
    bool bIsPath; // 0x0058 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0059 (0x0003)
    float ClipRadius; // 0x005C (0x0004)
};

// Function: UMG.WidgetComponent.SetWidget
// Size: 0x0008
struct WidgetComponent_SetWidget_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
};

// Function: UMG.WidgetComponent.SetOwnerPlayer
// Size: 0x0008
struct WidgetComponent_SetOwnerPlayer_Params {
public:
    class UObject* LocalPlayer; // 0x0000 (0x0008)
};

// Function: UMG.WidgetComponent.SetMaxInteractionDistance
// Size: 0x0004
struct WidgetComponent_SetMaxInteractionDistance_Params {
public:
    float Distance; // 0x0000 (0x0004)
};

// Function: UMG.WidgetComponent.SetDrawSize
// Size: 0x0008
struct WidgetComponent_SetDrawSize_Params {
public:
    uint8_t Size[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.WidgetComponent.GetUserWidgetObject
// Size: 0x0008
struct WidgetComponent_GetUserWidgetObject_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.WidgetComponent.GetOwnerPlayer
// Size: 0x0008
struct WidgetComponent_GetOwnerPlayer_Params {
public:
    class UObject* ReturnValue; // 0x0000 (0x0008)
};

// Function: UMG.WidgetComponent.GetMaxInteractionDistance
// Size: 0x0004
struct WidgetComponent_GetMaxInteractionDistance_Params {
public:
    float ReturnValue; // 0x0000 (0x0004)
};

// Function: UMG.WidgetComponent.GetDrawSize
// Size: 0x0008
struct WidgetComponent_GetDrawSize_Params {
public:
    uint8_t ReturnValue[0x8]; // 0x0000 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsUniformGridSlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsOverlaySlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsGridSlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsGridSlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsCanvasSlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// Size: 0x0010
struct WidgetLayoutLibrary_SlotAsBorderSlot_Params {
public:
    class UObject* Widget; // 0x0000 (0x0008)
    class UObject* ReturnValue; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.RemoveAllWidgets
// Size: 0x0008
struct WidgetLayoutLibrary_RemoveAllWidgets_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// Size: 0x001D
struct WidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params {
public:
    class UObject* PlayerController; // 0x0000 (0x0008)
    uint8_t WorldLocation[0xC]; // 0x0008 (0x000C)
    uint8_t ScreenPosition[0x8]; // 0x0014 (0x0008)
    bool ReturnValue; // 0x001C (0x0001)
};

// Function: UMG.WidgetLayoutLibrary.GetViewportSize
// Size: 0x0010
struct WidgetLayoutLibrary_GetViewportSize_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    uint8_t ReturnValue[0x8]; // 0x0008 (0x0008)
};

// Function: UMG.WidgetLayoutLibrary.GetViewportScale
// Size: 0x000C
struct WidgetLayoutLibrary_GetViewportScale_Params {
public:
    class UObject* WorldContextObject; // 0x0000 (0x0008)
    float ReturnValue; // 0x0008 (0x0004)
};

// Function: UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// Size: 0x0011
struct WidgetLayoutLibrary_GetMousePositionScaledByDPI_Params {
public:
    class UObject* Player; // 0x0000 (0x0008)
    float LocationX; // 0x0008 (0x0004)
    float LocationY; // 0x000C (0x0004)
    bool ReturnValue; // 0x0010 (0x0001)
};

} // namespace SDK

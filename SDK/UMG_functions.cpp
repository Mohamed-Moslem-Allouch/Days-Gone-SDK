#include "Basic.hpp"
#include "UMG_classes.hpp"
#include "UMG_parameters.hpp"

namespace SDK {

// Function: UMG.Widget.SetVisibility
void Widget::SetVisibility(uint8_t InVisibility) {
    static class UFunction* Func = nullptr;
    Widget_SetVisibility_Params Parms{};
    Parms.InVisibility = InVisibility;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetUserFocus
void Widget::SetUserFocus(class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    Widget_SetUserFocus_Params Parms{};
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetToolTipText
void Widget::SetToolTipText(struct FText InToolTipText) {
    static class UFunction* Func = nullptr;
    Widget_SetToolTipText_Params Parms{};
    Parms.InToolTipText = InToolTipText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetToolTip
void Widget::SetToolTip(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    Widget_SetToolTip_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetRenderTranslation
void Widget::SetRenderTranslation(uint8_t Translation) {
    static class UFunction* Func = nullptr;
    Widget_SetRenderTranslation_Params Parms{};
    Parms.Translation = Translation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetRenderTransformPivot
void Widget::SetRenderTransformPivot(uint8_t Pivot) {
    static class UFunction* Func = nullptr;
    Widget_SetRenderTransformPivot_Params Parms{};
    Parms.Pivot = Pivot;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetRenderTransform
void Widget::SetRenderTransform(uint8_t InTransform) {
    static class UFunction* Func = nullptr;
    Widget_SetRenderTransform_Params Parms{};
    Parms.InTransform = InTransform;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetRenderShear
void Widget::SetRenderShear(uint8_t Shear) {
    static class UFunction* Func = nullptr;
    Widget_SetRenderShear_Params Parms{};
    Parms.Shear = Shear;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetRenderScale
void Widget::SetRenderScale(uint8_t Scale) {
    static class UFunction* Func = nullptr;
    Widget_SetRenderScale_Params Parms{};
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetRenderAngle
void Widget::SetRenderAngle(float angle) {
    static class UFunction* Func = nullptr;
    Widget_SetRenderAngle_Params Parms{};
    Parms.angle = angle;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetKeyboardFocus
void Widget::SetKeyboardFocus() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.Widget.SetIsEnabled
void Widget::SetIsEnabled(bool bInIsEnabled) {
    static class UFunction* Func = nullptr;
    Widget_SetIsEnabled_Params Parms{};
    Parms.bInIsEnabled = bInIsEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.SetCursor
void Widget::SetCursor(uint8_t InCursor) {
    static class UFunction* Func = nullptr;
    Widget_SetCursor_Params Parms{};
    Parms.InCursor = InCursor;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.ResetCursor
void Widget::ResetCursor() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.Widget.RemoveFromParent
void Widget::RemoveFromParent() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.Widget.OnReply__DelegateSignature
uint8_t Widget::OnReply__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_OnReply__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.OnPointerEvent__DelegateSignature
uint8_t Widget::OnPointerEvent__DelegateSignature(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    Widget_OnPointerEvent__DelegateSignature_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.IsVisible
bool Widget::IsVisible() {
    static class UFunction* Func = nullptr;
    Widget_IsVisible_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.IsHovered
bool Widget::IsHovered() {
    static class UFunction* Func = nullptr;
    Widget_IsHovered_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.InvalidateLayoutAndVolatility
void Widget::InvalidateLayoutAndVolatility() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.Widget.HasUserFocusedDescendants
bool Widget::HasUserFocusedDescendants(class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    Widget_HasUserFocusedDescendants_Params Parms{};
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.HasUserFocus
bool Widget::HasUserFocus(class UObject* PlayerController) {
    static class UFunction* Func = nullptr;
    Widget_HasUserFocus_Params Parms{};
    Parms.PlayerController = PlayerController;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.HasMouseCapture
bool Widget::HasMouseCapture() {
    static class UFunction* Func = nullptr;
    Widget_HasMouseCapture_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.HasKeyboardFocus
bool Widget::HasKeyboardFocus() {
    static class UFunction* Func = nullptr;
    Widget_HasKeyboardFocus_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.HasFocusedDescendants
bool Widget::HasFocusedDescendants() {
    static class UFunction* Func = nullptr;
    Widget_HasFocusedDescendants_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.HasAnyUserFocus
bool Widget::HasAnyUserFocus() {
    static class UFunction* Func = nullptr;
    Widget_HasAnyUserFocus_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetWidget__DelegateSignature
class UObject* Widget::GetWidget__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetWidget__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetVisibility
uint8_t Widget::GetVisibility() {
    static class UFunction* Func = nullptr;
    Widget_GetVisibility_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetText__DelegateSignature
struct FText Widget::GetText__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetText__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetSlateVisibility__DelegateSignature
uint8_t Widget::GetSlateVisibility__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetSlateVisibility__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetSlateColor__DelegateSignature
uint8_t Widget::GetSlateColor__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetSlateColor__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetSlateBrush__DelegateSignature
uint8_t Widget::GetSlateBrush__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetSlateBrush__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetParent
class UObject* Widget::GetParent() {
    static class UFunction* Func = nullptr;
    Widget_GetParent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetMouseCursor__DelegateSignature
uint8_t Widget::GetMouseCursor__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetMouseCursor__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetLinearColor__DelegateSignature
uint8_t Widget::GetLinearColor__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetLinearColor__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetIsEnabled
bool Widget::GetIsEnabled() {
    static class UFunction* Func = nullptr;
    Widget_GetIsEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetInt32__DelegateSignature
int32_t Widget::GetInt32__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetInt32__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetFloat__DelegateSignature
float Widget::GetFloat__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetFloat__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetDesiredSize
uint8_t Widget::GetDesiredSize() {
    static class UFunction* Func = nullptr;
    Widget_GetDesiredSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetCheckBoxState__DelegateSignature
uint8_t Widget::GetCheckBoxState__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetCheckBoxState__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GetBool__DelegateSignature
bool Widget::GetBool__DelegateSignature() {
    static class UFunction* Func = nullptr;
    Widget_GetBool__DelegateSignature_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GenerateWidgetForString__DelegateSignature
class UObject* Widget::GenerateWidgetForString__DelegateSignature(struct FString Item) {
    static class UFunction* Func = nullptr;
    Widget_GenerateWidgetForString__DelegateSignature_Params Parms{};
    Parms.Item = Item;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.GenerateWidgetForObject__DelegateSignature
class UObject* Widget::GenerateWidgetForObject__DelegateSignature(class UObject* Item) {
    static class UFunction* Func = nullptr;
    Widget_GenerateWidgetForObject__DelegateSignature_Params Parms{};
    Parms.Item = Item;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Widget.ForceVolatile
void Widget::ForceVolatile(bool bForce) {
    static class UFunction* Func = nullptr;
    Widget_ForceVolatile_Params Parms{};
    Parms.bForce = bForce;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Widget.ForceLayoutPrepass
void Widget::ForceLayoutPrepass() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.UserWidget.Tick
void UserWidget::Tick(uint8_t MyGeometry, float InDeltaTime) {
    static class UFunction* Func = nullptr;
    UserWidget_Tick_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InDeltaTime = InDeltaTime;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.StopListeningForInputAction
void UserWidget::StopListeningForInputAction(struct FName ActionName, uint8_t eventType) {
    static class UFunction* Func = nullptr;
    UserWidget_StopListeningForInputAction_Params Parms{};
    Parms.ActionName = ActionName;
    Parms.eventType = eventType;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.StopListeningForAllInputActions
void UserWidget::StopListeningForAllInputActions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.UserWidget.StopAnimation
void UserWidget::StopAnimation(class UObject* InAnimation) {
    static class UFunction* Func = nullptr;
    UserWidget_StopAnimation_Params Parms{};
    Parms.InAnimation = InAnimation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetWidgetTreeVisibility
void UserWidget::SetWidgetTreeVisibility(uint8_t InVisibility) {
    static class UFunction* Func = nullptr;
    UserWidget_SetWidgetTreeVisibility_Params Parms{};
    Parms.InVisibility = InVisibility;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetVisibilityAndTickFlag
void UserWidget::SetVisibilityAndTickFlag(uint8_t InVisibility, bool InTickEnabled) {
    static class UFunction* Func = nullptr;
    UserWidget_SetVisibilityAndTickFlag_Params Parms{};
    Parms.InVisibility = InVisibility;
    Parms.InTickEnabled = InTickEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetVisibilityAndSyncTick
void UserWidget::SetVisibilityAndSyncTick(uint8_t InVisibility) {
    static class UFunction* Func = nullptr;
    UserWidget_SetVisibilityAndSyncTick_Params Parms{};
    Parms.InVisibility = InVisibility;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetTickEnabled
void UserWidget::SetTickEnabled(bool IsEnabled) {
    static class UFunction* Func = nullptr;
    UserWidget_SetTickEnabled_Params Parms{};
    Parms.IsEnabled = IsEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetPositionInViewport
void UserWidget::SetPositionInViewport(uint8_t Position, bool bRemoveDPIScale) {
    static class UFunction* Func = nullptr;
    UserWidget_SetPositionInViewport_Params Parms{};
    Parms.Position = Position;
    Parms.bRemoveDPIScale = bRemoveDPIScale;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetPadding
void UserWidget::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    UserWidget_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetOwningLocalPlayer
void UserWidget::SetOwningLocalPlayer(class UObject* LocalPlayer) {
    static class UFunction* Func = nullptr;
    UserWidget_SetOwningLocalPlayer_Params Parms{};
    Parms.LocalPlayer = LocalPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetNumLoopsToPlay
void UserWidget::SetNumLoopsToPlay(class UObject* InAnimation, int32_t NumLoopsToPlay) {
    static class UFunction* Func = nullptr;
    UserWidget_SetNumLoopsToPlay_Params Parms{};
    Parms.InAnimation = InAnimation;
    Parms.NumLoopsToPlay = NumLoopsToPlay;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetNativeTickEnabled
void UserWidget::SetNativeTickEnabled(bool IsEnabled) {
    static class UFunction* Func = nullptr;
    UserWidget_SetNativeTickEnabled_Params Parms{};
    Parms.IsEnabled = IsEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetInputActionPriority
void UserWidget::SetInputActionPriority(int32_t NewPriority) {
    static class UFunction* Func = nullptr;
    UserWidget_SetInputActionPriority_Params Parms{};
    Parms.NewPriority = NewPriority;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetInputActionBlocking
void UserWidget::SetInputActionBlocking(bool bShouldBlock) {
    static class UFunction* Func = nullptr;
    UserWidget_SetInputActionBlocking_Params Parms{};
    Parms.bShouldBlock = bShouldBlock;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetForegroundColor
void UserWidget::SetForegroundColor(uint8_t InForegroundColor) {
    static class UFunction* Func = nullptr;
    UserWidget_SetForegroundColor_Params Parms{};
    Parms.InForegroundColor = InForegroundColor;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetDesiredSizeInViewport
void UserWidget::SetDesiredSizeInViewport(uint8_t Size) {
    static class UFunction* Func = nullptr;
    UserWidget_SetDesiredSizeInViewport_Params Parms{};
    Parms.Size = Size;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetColorAndOpacity
void UserWidget::SetColorAndOpacity(uint8_t InColorAndOpacity) {
    static class UFunction* Func = nullptr;
    UserWidget_SetColorAndOpacity_Params Parms{};
    Parms.InColorAndOpacity = InColorAndOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetAnchorsInViewport
void UserWidget::SetAnchorsInViewport(uint8_t Anchors) {
    static class UFunction* Func = nullptr;
    UserWidget_SetAnchorsInViewport_Params Parms{};
    Parms.Anchors = Anchors;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.SetAlignmentInViewport
void UserWidget::SetAlignmentInViewport(uint8_t Alignment) {
    static class UFunction* Func = nullptr;
    UserWidget_SetAlignmentInViewport_Params Parms{};
    Parms.Alignment = Alignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.RemoveFromViewport
void UserWidget::RemoveFromViewport() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.UserWidget.PlaySound
void UserWidget::PlaySound(class UObject* SoundToPlay) {
    static class UFunction* Func = nullptr;
    UserWidget_PlaySound_Params Parms{};
    Parms.SoundToPlay = SoundToPlay;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.PlayAnimation
void UserWidget::PlayAnimation(class UObject* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode) {
    static class UFunction* Func = nullptr;
    UserWidget_PlayAnimation_Params Parms{};
    Parms.InAnimation = InAnimation;
    Parms.StartAtTime = StartAtTime;
    Parms.NumLoopsToPlay = NumLoopsToPlay;
    Parms.PlayMode = PlayMode;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.PauseAnimation
float UserWidget::PauseAnimation(class UObject* InAnimation) {
    static class UFunction* Func = nullptr;
    UserWidget_PauseAnimation_Params Parms{};
    Parms.InAnimation = InAnimation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnTouchStarted
uint8_t UserWidget::OnTouchStarted(uint8_t MyGeometry, uint8_t InTouchEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnTouchStarted_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InTouchEvent = InTouchEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnTouchMoved
uint8_t UserWidget::OnTouchMoved(uint8_t MyGeometry, uint8_t InTouchEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnTouchMoved_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InTouchEvent = InTouchEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnTouchGesture
uint8_t UserWidget::OnTouchGesture(uint8_t MyGeometry, uint8_t GestureEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnTouchGesture_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.GestureEvent = GestureEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnTouchEnded
uint8_t UserWidget::OnTouchEnded(uint8_t MyGeometry, uint8_t InTouchEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnTouchEnded_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InTouchEvent = InTouchEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnPreviewMouseButtonDown
uint8_t UserWidget::OnPreviewMouseButtonDown(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnPreviewMouseButtonDown_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnPreviewKeyDown
uint8_t UserWidget::OnPreviewKeyDown(uint8_t MyGeometry, uint8_t InKeyEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnPreviewKeyDown_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InKeyEvent = InKeyEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnPaint
void UserWidget::OnPaint(uint8_t Context) {
    static class UFunction* Func = nullptr;
    UserWidget_OnPaint_Params Parms{};
    Parms.Context = Context;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnMouseWheel
uint8_t UserWidget::OnMouseWheel(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseWheel_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnMouseMove
uint8_t UserWidget::OnMouseMove(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseMove_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnMouseLeave
void UserWidget::OnMouseLeave(uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseLeave_Params Parms{};
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnMouseEnter
void UserWidget::OnMouseEnter(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseEnter_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnMouseButtonUp
uint8_t UserWidget::OnMouseButtonUp(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseButtonUp_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnMouseButtonDown
uint8_t UserWidget::OnMouseButtonDown(uint8_t MyGeometry, uint8_t MouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseButtonDown_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.MouseEvent = MouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnMouseButtonDoubleClick
uint8_t UserWidget::OnMouseButtonDoubleClick(uint8_t InMyGeometry, uint8_t InMouseEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMouseButtonDoubleClick_Params Parms{};
    Parms.InMyGeometry = InMyGeometry;
    Parms.InMouseEvent = InMouseEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnMotionDetected
uint8_t UserWidget::OnMotionDetected(uint8_t MyGeometry, uint8_t InMotionEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnMotionDetected_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InMotionEvent = InMotionEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnKeyUp
uint8_t UserWidget::OnKeyUp(uint8_t MyGeometry, uint8_t InKeyEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnKeyUp_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InKeyEvent = InKeyEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnKeyDown
uint8_t UserWidget::OnKeyDown(uint8_t MyGeometry, uint8_t InKeyEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnKeyDown_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InKeyEvent = InKeyEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnKeyChar
uint8_t UserWidget::OnKeyChar(uint8_t MyGeometry, uint8_t InCharacterEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnKeyChar_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InCharacterEvent = InCharacterEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnFocusReceived
uint8_t UserWidget::OnFocusReceived(uint8_t MyGeometry, uint8_t InFocusEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnFocusReceived_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InFocusEvent = InFocusEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnFocusLost
void UserWidget::OnFocusLost(uint8_t InFocusEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnFocusLost_Params Parms{};
    Parms.InFocusEvent = InFocusEvent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnDrop
bool UserWidget::OnDrop(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnDrop_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.PointerEvent = PointerEvent;
    Parms.Operation = Operation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnDragOver
bool UserWidget::OnDragOver(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnDragOver_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.PointerEvent = PointerEvent;
    Parms.Operation = Operation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnDragLeave
void UserWidget::OnDragLeave(uint8_t PointerEvent, class UObject* Operation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnDragLeave_Params Parms{};
    Parms.PointerEvent = PointerEvent;
    Parms.Operation = Operation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnDragEnter
void UserWidget::OnDragEnter(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnDragEnter_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.PointerEvent = PointerEvent;
    Parms.Operation = Operation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnDragDetected
void UserWidget::OnDragDetected(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnDragDetected_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.PointerEvent = PointerEvent;
    Parms.Operation = Operation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnDragCancelled
void UserWidget::OnDragCancelled(uint8_t PointerEvent, class UObject* Operation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnDragCancelled_Params Parms{};
    Parms.PointerEvent = PointerEvent;
    Parms.Operation = Operation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnControllerButtonReleased
uint8_t UserWidget::OnControllerButtonReleased(uint8_t MyGeometry, uint8_t ControllerEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnControllerButtonReleased_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.ControllerEvent = ControllerEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnControllerButtonPressed
uint8_t UserWidget::OnControllerButtonPressed(uint8_t MyGeometry, uint8_t ControllerEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnControllerButtonPressed_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.ControllerEvent = ControllerEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnControllerAnalogValueChanged
uint8_t UserWidget::OnControllerAnalogValueChanged(uint8_t MyGeometry, uint8_t ControllerEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnControllerAnalogValueChanged_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.ControllerEvent = ControllerEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.OnAnimationStarted
void UserWidget::OnAnimationStarted(class UObject* Animation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnAnimationStarted_Params Parms{};
    Parms.Animation = Animation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnAnimationFinished
void UserWidget::OnAnimationFinished(class UObject* Animation) {
    static class UFunction* Func = nullptr;
    UserWidget_OnAnimationFinished_Params Parms{};
    Parms.Animation = Animation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.OnAnalogValueChanged
uint8_t UserWidget::OnAnalogValueChanged(uint8_t MyGeometry, uint8_t InAnalogInputEvent) {
    static class UFunction* Func = nullptr;
    UserWidget_OnAnalogValueChanged_Params Parms{};
    Parms.MyGeometry = MyGeometry;
    Parms.InAnalogInputEvent = InAnalogInputEvent;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.NewWeaponFinishedSpawning
void UserWidget::NewWeaponFinishedSpawning() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.UserWidget.ListenForInputAction
void UserWidget::ListenForInputAction(struct FName ActionName, uint8_t eventType, bool bConsume, uint8_t Callback, bool bExecuteWhenPaused) {
    static class UFunction* Func = nullptr;
    UserWidget_ListenForInputAction_Params Parms{};
    Parms.ActionName = ActionName;
    Parms.eventType = eventType;
    Parms.bConsume = bConsume;
    Parms.Callback = Callback;
    Parms.bExecuteWhenPaused = bExecuteWhenPaused;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.IsTickEnabled
bool UserWidget::IsTickEnabled() {
    static class UFunction* Func = nullptr;
    UserWidget_IsTickEnabled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.IsPlayingAnimation
bool UserWidget::IsPlayingAnimation() {
    static class UFunction* Func = nullptr;
    UserWidget_IsPlayingAnimation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.IsListeningForInputAction
bool UserWidget::IsListeningForInputAction(struct FName ActionName) {
    static class UFunction* Func = nullptr;
    UserWidget_IsListeningForInputAction_Params Parms{};
    Parms.ActionName = ActionName;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.IsInViewport
bool UserWidget::IsInViewport() {
    static class UFunction* Func = nullptr;
    UserWidget_IsInViewport_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.IsInteractable
bool UserWidget::IsInteractable() {
    static class UFunction* Func = nullptr;
    UserWidget_IsInteractable_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.IsAnimationPlaying
bool UserWidget::IsAnimationPlaying(class UObject* InAnimation) {
    static class UFunction* Func = nullptr;
    UserWidget_IsAnimationPlaying_Params Parms{};
    Parms.InAnimation = InAnimation;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.GetOwningPlayerPawn
class UObject* UserWidget::GetOwningPlayerPawn() {
    static class UFunction* Func = nullptr;
    UserWidget_GetOwningPlayerPawn_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.GetOwningPlayer
class UObject* UserWidget::GetOwningPlayer() {
    static class UFunction* Func = nullptr;
    UserWidget_GetOwningPlayer_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.GetOwningLocalPlayer
class UObject* UserWidget::GetOwningLocalPlayer() {
    static class UFunction* Func = nullptr;
    UserWidget_GetOwningLocalPlayer_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.GetIsVisible
bool UserWidget::GetIsVisible() {
    static class UFunction* Func = nullptr;
    UserWidget_GetIsVisible_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UserWidget.FindWidgetsByName
void UserWidget::FindWidgetsByName(struct FString WidgetName, struct TArray<uint8_t> OutWidgets) {
    static class UFunction* Func = nullptr;
    UserWidget_FindWidgetsByName_Params Parms{};
    Parms.WidgetName = WidgetName;
    Parms.OutWidgets = OutWidgets;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.Destruct
void UserWidget::Destruct() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.UserWidget.Construct
void UserWidget::Construct() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.UserWidget.AddToViewport
void UserWidget::AddToViewport(int32_t ZOrder) {
    static class UFunction* Func = nullptr;
    UserWidget_AddToViewport_Params Parms{};
    Parms.ZOrder = ZOrder;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UserWidget.AddToPlayerScreen
bool UserWidget::AddToPlayerScreen(int32_t ZOrder) {
    static class UFunction* Func = nullptr;
    UserWidget_AddToPlayerScreen_Params Parms{};
    Parms.ZOrder = ZOrder;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BendWidgetComponent.SetWidgetSpace
void BendWidgetComponent::SetWidgetSpace(uint8_t NewSpace) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetWidgetSpace_Params Parms{};
    Parms.NewSpace = NewSpace;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetWidget
void BendWidgetComponent::SetWidget(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetWidget_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetUseImageTexture
void BendWidgetComponent::SetUseImageTexture(bool bEnabled) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetUseImageTexture_Params Parms{};
    Parms.bEnabled = bEnabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetStickToScreenEdge
void BendWidgetComponent::SetStickToScreenEdge(bool Enabled) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetStickToScreenEdge_Params Parms{};
    Parms.Enabled = Enabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetScreenScale
void BendWidgetComponent::SetScreenScale(float InScale) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetScreenScale_Params Parms{};
    Parms.InScale = InScale;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetOwnerPlayer
void BendWidgetComponent::SetOwnerPlayer(class UObject* LocalPlayer) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetOwnerPlayer_Params Parms{};
    Parms.LocalPlayer = LocalPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetOpacity
void BendWidgetComponent::SetOpacity(float Opacity) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetOpacity_Params Parms{};
    Parms.Opacity = Opacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetMaxInteractionDistance
void BendWidgetComponent::SetMaxInteractionDistance(float Distance) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetMaxInteractionDistance_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetImageTexture
void BendWidgetComponent::SetImageTexture(class UObject* Texture) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetImageTexture_Params Parms{};
    Parms.Texture = Texture;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetFarFade
void BendWidgetComponent::SetFarFade(bool Enabled, float StartDistance, float EndDistance) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetFarFade_Params Parms{};
    Parms.Enabled = Enabled;
    Parms.StartDistance = StartDistance;
    Parms.EndDistance = EndDistance;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetDrawSize
void BendWidgetComponent::SetDrawSize(uint8_t Size) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetDrawSize_Params Parms{};
    Parms.Size = Size;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetDrawScale
void BendWidgetComponent::SetDrawScale(float Scale) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetDrawScale_Params Parms{};
    Parms.Scale = Scale;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetDisableOcclusion
void BendWidgetComponent::SetDisableOcclusion(bool bDisabled) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetDisableOcclusion_Params Parms{};
    Parms.bDisabled = bDisabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.SetComponentTickOverride
void BendWidgetComponent::SetComponentTickOverride(bool ShouldOverrideComponentTick, bool Enabled) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_SetComponentTickOverride_Params Parms{};
    Parms.ShouldOverrideComponentTick = ShouldOverrideComponentTick;
    Parms.Enabled = Enabled;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BendWidgetComponent.ReturnPooledWidget
void BendWidgetComponent::ReturnPooledWidget() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.BendWidgetComponent.RequestRedraw
void BendWidgetComponent::RequestRedraw() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.BendWidgetComponent.GetUserWidgetObject
class UObject* BendWidgetComponent::GetUserWidgetObject() {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_GetUserWidgetObject_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BendWidgetComponent.GetPooledWidget
void BendWidgetComponent::GetPooledWidget() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.BendWidgetComponent.GetOwnerPlayer
class UObject* BendWidgetComponent::GetOwnerPlayer(class UObject* World) {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_GetOwnerPlayer_Params Parms{};
    Parms.World = World;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BendWidgetComponent.GetMaxInteractionDistance
float BendWidgetComponent::GetMaxInteractionDistance() {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_GetMaxInteractionDistance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BendWidgetComponent.GetMaterialInstanceDynamic
class UObject* BendWidgetComponent::GetMaterialInstanceDynamic() {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_GetMaterialInstanceDynamic_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BendWidgetComponent.GetDrawSize
uint8_t BendWidgetComponent::GetDrawSize() {
    static class UFunction* Func = nullptr;
    BendWidgetComponent_GetDrawSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BendWidgetComponent.ForceRequestRedraw
void BendWidgetComponent::ForceRequestRedraw() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.PanelWidget.RemoveChildAt
bool PanelWidget::RemoveChildAt(int32_t Index) {
    static class UFunction* Func = nullptr;
    PanelWidget_RemoveChildAt_Params Parms{};
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.RemoveChild
bool PanelWidget::RemoveChild(class UObject* Content) {
    static class UFunction* Func = nullptr;
    PanelWidget_RemoveChild_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.HasChild
bool PanelWidget::HasChild(class UObject* Content) {
    static class UFunction* Func = nullptr;
    PanelWidget_HasChild_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.HasAnyChildren
bool PanelWidget::HasAnyChildren() {
    static class UFunction* Func = nullptr;
    PanelWidget_HasAnyChildren_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.GetChildrenCount
int32_t PanelWidget::GetChildrenCount() {
    static class UFunction* Func = nullptr;
    PanelWidget_GetChildrenCount_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.GetChildIndex
int32_t PanelWidget::GetChildIndex(class UObject* Content) {
    static class UFunction* Func = nullptr;
    PanelWidget_GetChildIndex_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.GetChildAt
class UObject* PanelWidget::GetChildAt(int32_t Index) {
    static class UFunction* Func = nullptr;
    PanelWidget_GetChildAt_Params Parms{};
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.PanelWidget.ClearChildren
void PanelWidget::ClearChildren() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.PanelWidget.AddChild
class UObject* PanelWidget::AddChild(class UObject* Content) {
    static class UFunction* Func = nullptr;
    PanelWidget_AddChild_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.GridPanel.AddChildToGrid
class UObject* GridPanel::AddChildToGrid(class UObject* Content) {
    static class UFunction* Func = nullptr;
    GridPanel_AddChildToGrid_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ContentWidget.GetContentSlot
class UObject* ContentWidget::GetContentSlot() {
    static class UFunction* Func = nullptr;
    ContentWidget_GetContentSlot_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.AsyncTaskDownloadImage.DownloadImage
class UObject* AsyncTaskDownloadImage::DownloadImage(struct FString URL) {
    static class UFunction* Func = nullptr;
    AsyncTaskDownloadImage_DownloadImage_Params Parms{};
    Parms.URL = URL;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.DragDropOperation.Drop
void DragDropOperation::Drop(uint8_t PointerEvent) {
    static class UFunction* Func = nullptr;
    DragDropOperation_Drop_Params Parms{};
    Parms.PointerEvent = PointerEvent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.DragDropOperation.Dragged
void DragDropOperation::Dragged(uint8_t PointerEvent) {
    static class UFunction* Func = nullptr;
    DragDropOperation_Dragged_Params Parms{};
    Parms.PointerEvent = PointerEvent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.DragDropOperation.DragCancelled
void DragDropOperation::DragCancelled(uint8_t PointerEvent) {
    static class UFunction* Func = nullptr;
    DragDropOperation_DragCancelled_Params Parms{};
    Parms.PointerEvent = PointerEvent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BoolBinding.GetValue
bool BoolBinding::GetValue() {
    static class UFunction* Func = nullptr;
    BoolBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BrushBinding.GetValue
uint8_t BrushBinding::GetValue() {
    static class UFunction* Func = nullptr;
    BrushBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CheckedStateBinding.GetValue
uint8_t CheckedStateBinding::GetValue() {
    static class UFunction* Func = nullptr;
    CheckedStateBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ColorBinding.GetSlateValue
uint8_t ColorBinding::GetSlateValue() {
    static class UFunction* Func = nullptr;
    ColorBinding_GetSlateValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ColorBinding.GetLinearValue
uint8_t ColorBinding::GetLinearValue() {
    static class UFunction* Func = nullptr;
    ColorBinding_GetLinearValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.FloatBinding.GetValue
float FloatBinding::GetValue() {
    static class UFunction* Func = nullptr;
    FloatBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Int32Binding.GetValue
int32_t Int32Binding::GetValue() {
    static class UFunction* Func = nullptr;
    Int32Binding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MouseCursorBinding.GetValue
uint8_t MouseCursorBinding::GetValue() {
    static class UFunction* Func = nullptr;
    MouseCursorBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.TextBinding.GetTextValue
struct FText TextBinding::GetTextValue() {
    static class UFunction* Func = nullptr;
    TextBinding_GetTextValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.TextBinding.GetStringValue
struct FString TextBinding::GetStringValue() {
    static class UFunction* Func = nullptr;
    TextBinding_GetStringValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.VisibilityBinding.GetValue
uint8_t VisibilityBinding::GetValue() {
    static class UFunction* Func = nullptr;
    VisibilityBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBinding.GetValue
class UObject* WidgetBinding::GetValue() {
    static class UFunction* Func = nullptr;
    WidgetBinding_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SlateBlueprintLibrary.LocalToViewport
void SlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, uint8_t Geometry, uint8_t LocalCoordinate, uint8_t PixelPosition, uint8_t ViewportPosition) {
    static class UFunction* Func = nullptr;
    SlateBlueprintLibrary_LocalToViewport_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Geometry = Geometry;
    Parms.LocalCoordinate = LocalCoordinate;
    Parms.PixelPosition = PixelPosition;
    Parms.ViewportPosition = ViewportPosition;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SlateBlueprintLibrary.LocalToAbsolute
uint8_t SlateBlueprintLibrary::LocalToAbsolute(uint8_t Geometry, uint8_t LocalCoordinate) {
    static class UFunction* Func = nullptr;
    SlateBlueprintLibrary_LocalToAbsolute_Params Parms{};
    Parms.Geometry = Geometry;
    Parms.LocalCoordinate = LocalCoordinate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SlateBlueprintLibrary.IsUnderLocation
bool SlateBlueprintLibrary::IsUnderLocation(uint8_t Geometry, uint8_t AbsoluteCoordinate) {
    static class UFunction* Func = nullptr;
    SlateBlueprintLibrary_IsUnderLocation_Params Parms{};
    Parms.Geometry = Geometry;
    Parms.AbsoluteCoordinate = AbsoluteCoordinate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SlateBlueprintLibrary.GetLocalSize
uint8_t SlateBlueprintLibrary::GetLocalSize(uint8_t Geometry) {
    static class UFunction* Func = nullptr;
    SlateBlueprintLibrary_GetLocalSize_Params Parms{};
    Parms.Geometry = Geometry;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SlateBlueprintLibrary.AbsoluteToViewport
void SlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, uint8_t AbsoluteDesktopCoordinate, uint8_t PixelPosition, uint8_t ViewportPosition) {
    static class UFunction* Func = nullptr;
    SlateBlueprintLibrary_AbsoluteToViewport_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
    Parms.PixelPosition = PixelPosition;
    Parms.ViewportPosition = ViewportPosition;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SlateBlueprintLibrary.AbsoluteToLocal
uint8_t SlateBlueprintLibrary::AbsoluteToLocal(uint8_t Geometry, uint8_t AbsoluteCoordinate) {
    static class UFunction* Func = nullptr;
    SlateBlueprintLibrary_AbsoluteToLocal_Params Parms{};
    Parms.Geometry = Geometry;
    Parms.AbsoluteCoordinate = AbsoluteCoordinate;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.BorderSlot.SetVerticalAlignment
void BorderSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    BorderSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BorderSlot.SetPadding
void BorderSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    BorderSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.BorderSlot.SetHorizontalAlignment
void BorderSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    BorderSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ButtonSlot.SetVerticalAlignment
void ButtonSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    ButtonSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ButtonSlot.SetPadding
void ButtonSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    ButtonSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ButtonSlot.SetHorizontalAlignment
void ButtonSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    ButtonSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetZOrder
void CanvasPanelSlot::SetZOrder(int32_t InZOrder) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetZOrder_Params Parms{};
    Parms.InZOrder = InZOrder;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetSize
void CanvasPanelSlot::SetSize(uint8_t InSize) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetSize_Params Parms{};
    Parms.InSize = InSize;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetPosition
void CanvasPanelSlot::SetPosition(uint8_t InPosition) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetPosition_Params Parms{};
    Parms.InPosition = InPosition;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetOffsets
void CanvasPanelSlot::SetOffsets(uint8_t InOffset) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetOffsets_Params Parms{};
    Parms.InOffset = InOffset;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetMinimum
void CanvasPanelSlot::SetMinimum(uint8_t InMinimumAnchors) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetMinimum_Params Parms{};
    Parms.InMinimumAnchors = InMinimumAnchors;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetMaximum
void CanvasPanelSlot::SetMaximum(uint8_t InMaximumAnchors) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetMaximum_Params Parms{};
    Parms.InMaximumAnchors = InMaximumAnchors;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetLayout
void CanvasPanelSlot::SetLayout(uint8_t InLayoutData) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetLayout_Params Parms{};
    Parms.InLayoutData = InLayoutData;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetAutoSize
void CanvasPanelSlot::SetAutoSize(bool InbAutoSize) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetAutoSize_Params Parms{};
    Parms.InbAutoSize = InbAutoSize;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetAnchors
void CanvasPanelSlot::SetAnchors(uint8_t InAnchors) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetAnchors_Params Parms{};
    Parms.InAnchors = InAnchors;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.SetAlignment
void CanvasPanelSlot::SetAlignment(uint8_t InAlignment) {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_SetAlignment_Params Parms{};
    Parms.InAlignment = InAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CanvasPanelSlot.GetZOrder
int32_t CanvasPanelSlot::GetZOrder() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetZOrder_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetSize
uint8_t CanvasPanelSlot::GetSize() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetPosition
uint8_t CanvasPanelSlot::GetPosition() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetOffsets
uint8_t CanvasPanelSlot::GetOffsets() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetOffsets_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetLayout
uint8_t CanvasPanelSlot::GetLayout() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetLayout_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetAutoSize
bool CanvasPanelSlot::GetAutoSize() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetAutoSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetAnchors
uint8_t CanvasPanelSlot::GetAnchors() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetAnchors_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanelSlot.GetAlignment
uint8_t CanvasPanelSlot::GetAlignment() {
    static class UFunction* Func = nullptr;
    CanvasPanelSlot_GetAlignment_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.GridSlot.SetVerticalAlignment
void GridSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    GridSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.GridSlot.SetRowSpan
void GridSlot::SetRowSpan(int32_t InRowSpan) {
    static class UFunction* Func = nullptr;
    GridSlot_SetRowSpan_Params Parms{};
    Parms.InRowSpan = InRowSpan;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.GridSlot.SetRow
void GridSlot::SetRow(int32_t InRow) {
    static class UFunction* Func = nullptr;
    GridSlot_SetRow_Params Parms{};
    Parms.InRow = InRow;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.GridSlot.SetLayer
void GridSlot::SetLayer(int32_t InLayer) {
    static class UFunction* Func = nullptr;
    GridSlot_SetLayer_Params Parms{};
    Parms.InLayer = InLayer;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.GridSlot.SetHorizontalAlignment
void GridSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    GridSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.GridSlot.SetColumnSpan
void GridSlot::SetColumnSpan(int32_t InColumnSpan) {
    static class UFunction* Func = nullptr;
    GridSlot_SetColumnSpan_Params Parms{};
    Parms.InColumnSpan = InColumnSpan;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.GridSlot.SetColumn
void GridSlot::SetColumn(int32_t InColumn) {
    static class UFunction* Func = nullptr;
    GridSlot_SetColumn_Params Parms{};
    Parms.InColumn = InColumn;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.HorizontalBoxSlot.SetVerticalAlignment
void HorizontalBoxSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    HorizontalBoxSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.HorizontalBoxSlot.SetSize
void HorizontalBoxSlot::SetSize(uint8_t InSize) {
    static class UFunction* Func = nullptr;
    HorizontalBoxSlot_SetSize_Params Parms{};
    Parms.InSize = InSize;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.HorizontalBoxSlot.SetPadding
void HorizontalBoxSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    HorizontalBoxSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.HorizontalBoxSlot.SetHorizontalAlignment
void HorizontalBoxSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    HorizontalBoxSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.OverlaySlot.SetVerticalAlignment
void OverlaySlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    OverlaySlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.OverlaySlot.SetPadding
void OverlaySlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    OverlaySlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.OverlaySlot.SetHorizontalAlignment
void OverlaySlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    OverlaySlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScaleBoxSlot.SetVerticalAlignment
void ScaleBoxSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    ScaleBoxSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScaleBoxSlot.SetPadding
void ScaleBoxSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    ScaleBoxSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScaleBoxSlot.SetHorizontalAlignment
void ScaleBoxSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    ScaleBoxSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScrollBoxSlot.SetPadding
void ScrollBoxSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    ScrollBoxSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScrollBoxSlot.SetHorizontalAlignment
void ScrollBoxSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    ScrollBoxSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBoxSlot.SetVerticalAlignment
void SizeBoxSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    SizeBoxSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBoxSlot.SetPadding
void SizeBoxSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    SizeBoxSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBoxSlot.SetHorizontalAlignment
void SizeBoxSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    SizeBoxSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridSlot.SetVerticalAlignment
void UniformGridSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    UniformGridSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridSlot.SetRow
void UniformGridSlot::SetRow(int32_t InRow) {
    static class UFunction* Func = nullptr;
    UniformGridSlot_SetRow_Params Parms{};
    Parms.InRow = InRow;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridSlot.SetHorizontalAlignment
void UniformGridSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    UniformGridSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridSlot.SetColumn
void UniformGridSlot::SetColumn(int32_t InColumn) {
    static class UFunction* Func = nullptr;
    UniformGridSlot_SetColumn_Params Parms{};
    Parms.InColumn = InColumn;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.VerticalBoxSlot.SetVerticalAlignment
void VerticalBoxSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    VerticalBoxSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.VerticalBoxSlot.SetSize
void VerticalBoxSlot::SetSize(uint8_t InSize) {
    static class UFunction* Func = nullptr;
    VerticalBoxSlot_SetSize_Params Parms{};
    Parms.InSize = InSize;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.VerticalBoxSlot.SetPadding
void VerticalBoxSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    VerticalBoxSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.VerticalBoxSlot.SetHorizontalAlignment
void VerticalBoxSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    VerticalBoxSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetSwitcherSlot.SetVerticalAlignment
void WidgetSwitcherSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    WidgetSwitcherSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetSwitcherSlot.SetPadding
void WidgetSwitcherSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    WidgetSwitcherSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetSwitcherSlot.SetHorizontalAlignment
void WidgetSwitcherSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    WidgetSwitcherSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WrapBoxSlot.SetVerticalAlignment
void WrapBoxSlot::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    WrapBoxSlot_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WrapBoxSlot.SetPadding
void WrapBoxSlot::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    WrapBoxSlot_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WrapBoxSlot.SetHorizontalAlignment
void WrapBoxSlot::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    WrapBoxSlot_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WrapBoxSlot.SetFillSpanWhenLessThan
void WrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
    static class UFunction* Func = nullptr;
    WrapBoxSlot_SetFillSpanWhenLessThan_Params Parms{};
    Parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WrapBoxSlot.SetFillEmptySpace
void WrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
    static class UFunction* Func = nullptr;
    WrapBoxSlot_SetFillEmptySpace_Params Parms{};
    Parms.InbFillEmptySpace = InbFillEmptySpace;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CircularThrobber.SetRadius
void CircularThrobber::SetRadius(float InRadius) {
    static class UFunction* Func = nullptr;
    CircularThrobber_SetRadius_Params Parms{};
    Parms.InRadius = InRadius;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CircularThrobber.SetPeriod
void CircularThrobber::SetPeriod(float InPeriod) {
    static class UFunction* Func = nullptr;
    CircularThrobber_SetPeriod_Params Parms{};
    Parms.InPeriod = InPeriod;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CircularThrobber.SetNumberOfPieces
void CircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
    static class UFunction* Func = nullptr;
    CircularThrobber_SetNumberOfPieces_Params Parms{};
    Parms.InNumberOfPieces = InNumberOfPieces;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ComboBoxString.SetSelectedOption
void ComboBoxString::SetSelectedOption(struct FString Option) {
    static class UFunction* Func = nullptr;
    ComboBoxString_SetSelectedOption_Params Parms{};
    Parms.Option = Option;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ComboBoxString.RemoveOption
bool ComboBoxString::RemoveOption(struct FString Option) {
    static class UFunction* Func = nullptr;
    ComboBoxString_RemoveOption_Params Parms{};
    Parms.Option = Option;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ComboBoxString.RefreshOptions
void ComboBoxString::RefreshOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
void ComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, uint8_t SelectionType) {
    static class UFunction* Func = nullptr;
    ComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms{};
    Parms.SelectedItem = SelectedItem;
    Parms.SelectionType = SelectionType;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
void ComboBoxString::OnOpeningEvent__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ComboBoxString.GetSelectedOption
struct FString ComboBoxString::GetSelectedOption() {
    static class UFunction* Func = nullptr;
    ComboBoxString_GetSelectedOption_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ComboBoxString.GetOptionCount
int32_t ComboBoxString::GetOptionCount() {
    static class UFunction* Func = nullptr;
    ComboBoxString_GetOptionCount_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ComboBoxString.GetOptionAtIndex
struct FString ComboBoxString::GetOptionAtIndex(int32_t Index) {
    static class UFunction* Func = nullptr;
    ComboBoxString_GetOptionAtIndex_Params Parms{};
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ComboBoxString.FindOptionIndex
int32_t ComboBoxString::FindOptionIndex(struct FString Option) {
    static class UFunction* Func = nullptr;
    ComboBoxString_FindOptionIndex_Params Parms{};
    Parms.Option = Option;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ComboBoxString.ClearSelection
void ComboBoxString::ClearSelection() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ComboBoxString.ClearOptions
void ComboBoxString::ClearOptions() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ComboBoxString.AddOption
void ComboBoxString::AddOption(struct FString Option) {
    static class UFunction* Func = nullptr;
    ComboBoxString_AddOption_Params Parms{};
    Parms.Option = Option;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.SetText
void EditableText::SetText(struct FText InText) {
    static class UFunction* Func = nullptr;
    EditableText_SetText_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.SetIsReadOnly
void EditableText::SetIsReadOnly(bool InbIsReadyOnly) {
    static class UFunction* Func = nullptr;
    EditableText_SetIsReadOnly_Params Parms{};
    Parms.InbIsReadyOnly = InbIsReadyOnly;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.SetIsPassword
void EditableText::SetIsPassword(bool InbIsPassword) {
    static class UFunction* Func = nullptr;
    EditableText_SetIsPassword_Params Parms{};
    Parms.InbIsPassword = InbIsPassword;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.SetHintText
void EditableText::SetHintText(struct FText InHintText) {
    static class UFunction* Func = nullptr;
    EditableText_SetHintText_Params Parms{};
    Parms.InHintText = InHintText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
void EditableText::OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod) {
    static class UFunction* Func = nullptr;
    EditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    Parms.CommitMethod = CommitMethod;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
void EditableText::OnEditableTextChangedEvent__DelegateSignature(struct FText Text) {
    static class UFunction* Func = nullptr;
    EditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableText.GetText
struct FText EditableText::GetText() {
    static class UFunction* Func = nullptr;
    EditableText_GetText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.EditableTextBox.SetText
void EditableTextBox::SetText(struct FText InText) {
    static class UFunction* Func = nullptr;
    EditableTextBox_SetText_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableTextBox.SetError
void EditableTextBox::SetError(struct FText InError) {
    static class UFunction* Func = nullptr;
    EditableTextBox_SetError_Params Parms{};
    Parms.InError = InError;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
void EditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod) {
    static class UFunction* Func = nullptr;
    EditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    Parms.CommitMethod = CommitMethod;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
void EditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text) {
    static class UFunction* Func = nullptr;
    EditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.EditableTextBox.GetText
struct FText EditableTextBox::GetText() {
    static class UFunction* Func = nullptr;
    EditableTextBox_GetText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.EditableTextBox.ClearError
void EditableTextBox::ClearError() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ExpandableArea.SetIsExpanded
void ExpandableArea::SetIsExpanded(bool IsExpanded) {
    static class UFunction* Func = nullptr;
    ExpandableArea_SetIsExpanded_Params Parms{};
    Parms.IsExpanded = IsExpanded;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ExpandableArea.GetIsExpanded
bool ExpandableArea::GetIsExpanded() {
    static class UFunction* Func = nullptr;
    ExpandableArea_GetIsExpanded_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Image.SetOpacity
void Image::SetOpacity(float InOpacity) {
    static class UFunction* Func = nullptr;
    Image_SetOpacity_Params Parms{};
    Parms.InOpacity = InOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Image.SetColorAndOpacity
void Image::SetColorAndOpacity(uint8_t InColorAndOpacity) {
    static class UFunction* Func = nullptr;
    Image_SetColorAndOpacity_Params Parms{};
    Parms.InColorAndOpacity = InColorAndOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Image.SetBrushFromTexture
void Image::SetBrushFromTexture(class UObject* Texture, bool bMatchSize) {
    static class UFunction* Func = nullptr;
    Image_SetBrushFromTexture_Params Parms{};
    Parms.Texture = Texture;
    Parms.bMatchSize = bMatchSize;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Image.SetBrushFromMaterial
void Image::SetBrushFromMaterial(class UObject* Material) {
    static class UFunction* Func = nullptr;
    Image_SetBrushFromMaterial_Params Parms{};
    Parms.Material = Material;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Image.SetBrushFromAsset
void Image::SetBrushFromAsset(class UObject* Asset) {
    static class UFunction* Func = nullptr;
    Image_SetBrushFromAsset_Params Parms{};
    Parms.Asset = Asset;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Image.SetBrush
void Image::SetBrush(uint8_t InBrush) {
    static class UFunction* Func = nullptr;
    Image_SetBrush_Params Parms{};
    Parms.InBrush = InBrush;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Image.GetDynamicMaterial
class UObject* Image::GetDynamicMaterial() {
    static class UFunction* Func = nullptr;
    Image_GetDynamicMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CanvasPanel.AddChildToCanvas
class UObject* CanvasPanel::AddChildToCanvas(class UObject* Content) {
    static class UFunction* Func = nullptr;
    CanvasPanel_AddChildToCanvas_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Border.SetVerticalAlignment
void Border::SetVerticalAlignment(uint8_t InVerticalAlignment) {
    static class UFunction* Func = nullptr;
    Border_SetVerticalAlignment_Params Parms{};
    Parms.InVerticalAlignment = InVerticalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetPadding
void Border::SetPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    Border_SetPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetHorizontalAlignment
void Border::SetHorizontalAlignment(uint8_t InHorizontalAlignment) {
    static class UFunction* Func = nullptr;
    Border_SetHorizontalAlignment_Params Parms{};
    Parms.InHorizontalAlignment = InHorizontalAlignment;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetContentOpacity
void Border::SetContentOpacity(float InAlpha, uint8_t HiddenVisibility) {
    static class UFunction* Func = nullptr;
    Border_SetContentOpacity_Params Parms{};
    Parms.InAlpha = InAlpha;
    Parms.HiddenVisibility = HiddenVisibility;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetContentColorAndOpacity
void Border::SetContentColorAndOpacity(uint8_t InContentColorAndOpacity) {
    static class UFunction* Func = nullptr;
    Border_SetContentColorAndOpacity_Params Parms{};
    Parms.InContentColorAndOpacity = InContentColorAndOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetBrushFromTexture
void Border::SetBrushFromTexture(class UObject* Texture) {
    static class UFunction* Func = nullptr;
    Border_SetBrushFromTexture_Params Parms{};
    Parms.Texture = Texture;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetBrushFromMaterial
void Border::SetBrushFromMaterial(class UObject* Material) {
    static class UFunction* Func = nullptr;
    Border_SetBrushFromMaterial_Params Parms{};
    Parms.Material = Material;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetBrushFromAsset
void Border::SetBrushFromAsset(class UObject* Asset) {
    static class UFunction* Func = nullptr;
    Border_SetBrushFromAsset_Params Parms{};
    Parms.Asset = Asset;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetBrushColor
void Border::SetBrushColor(uint8_t InBrushColor) {
    static class UFunction* Func = nullptr;
    Border_SetBrushColor_Params Parms{};
    Parms.InBrushColor = InBrushColor;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.SetBrush
void Border::SetBrush(uint8_t InBrush) {
    static class UFunction* Func = nullptr;
    Border_SetBrush_Params Parms{};
    Parms.InBrush = InBrush;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Border.GetDynamicMaterial
class UObject* Border::GetDynamicMaterial() {
    static class UFunction* Func = nullptr;
    Border_GetDynamicMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Button.SetStyle
void Button::SetStyle(uint8_t InStyle) {
    static class UFunction* Func = nullptr;
    Button_SetStyle_Params Parms{};
    Parms.InStyle = InStyle;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Button.SetColorAndOpacity
void Button::SetColorAndOpacity(uint8_t InColorAndOpacity) {
    static class UFunction* Func = nullptr;
    Button_SetColorAndOpacity_Params Parms{};
    Parms.InColorAndOpacity = InColorAndOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Button.SetBackgroundColor
void Button::SetBackgroundColor(uint8_t InBackgroundColor) {
    static class UFunction* Func = nullptr;
    Button_SetBackgroundColor_Params Parms{};
    Parms.InBackgroundColor = InBackgroundColor;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Button.IsPressed
bool Button::IsPressed() {
    static class UFunction* Func = nullptr;
    Button_IsPressed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CheckBox.SetIsChecked
void CheckBox::SetIsChecked(bool InIsChecked) {
    static class UFunction* Func = nullptr;
    CheckBox_SetIsChecked_Params Parms{};
    Parms.InIsChecked = InIsChecked;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CheckBox.SetCheckedState
void CheckBox::SetCheckedState(uint8_t InCheckedState) {
    static class UFunction* Func = nullptr;
    CheckBox_SetCheckedState_Params Parms{};
    Parms.InCheckedState = InCheckedState;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.CheckBox.IsPressed
bool CheckBox::IsPressed() {
    static class UFunction* Func = nullptr;
    CheckBox_IsPressed_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CheckBox.IsChecked
bool CheckBox::IsChecked() {
    static class UFunction* Func = nullptr;
    CheckBox_IsChecked_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.CheckBox.GetCheckedState
uint8_t CheckBox::GetCheckedState() {
    static class UFunction* Func = nullptr;
    CheckBox_GetCheckedState_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.InvalidationBox.SetCanCache
void InvalidationBox::SetCanCache(bool CanCache) {
    static class UFunction* Func = nullptr;
    InvalidationBox_SetCanCache_Params Parms{};
    Parms.CanCache = CanCache;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.InvalidationBox.InvalidateCache
void InvalidationBox::InvalidateCache() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.InvalidationBox.GetCanCache
bool InvalidationBox::GetCanCache() {
    static class UFunction* Func = nullptr;
    InvalidationBox_GetCanCache_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MenuAnchor.ToggleOpen
void MenuAnchor::ToggleOpen(bool bFocusOnOpen) {
    static class UFunction* Func = nullptr;
    MenuAnchor_ToggleOpen_Params Parms{};
    Parms.bFocusOnOpen = bFocusOnOpen;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MenuAnchor.ShouldOpenDueToClick
bool MenuAnchor::ShouldOpenDueToClick() {
    static class UFunction* Func = nullptr;
    MenuAnchor_ShouldOpenDueToClick_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MenuAnchor.Open
void MenuAnchor::Open(bool bFocusMenu) {
    static class UFunction* Func = nullptr;
    MenuAnchor_Open_Params Parms{};
    Parms.bFocusMenu = bFocusMenu;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MenuAnchor.IsOpen
bool MenuAnchor::IsOpen() {
    static class UFunction* Func = nullptr;
    MenuAnchor_IsOpen_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MenuAnchor.HasOpenSubMenus
bool MenuAnchor::HasOpenSubMenus() {
    static class UFunction* Func = nullptr;
    MenuAnchor_HasOpenSubMenus_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MenuAnchor.GetMenuPosition
uint8_t MenuAnchor::GetMenuPosition() {
    static class UFunction* Func = nullptr;
    MenuAnchor_GetMenuPosition_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MenuAnchor.Close
void MenuAnchor::Close() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.RetainerBox.SetTextureParameter
void RetainerBox::SetTextureParameter(struct FName TextureParameter) {
    static class UFunction* Func = nullptr;
    RetainerBox_SetTextureParameter_Params Parms{};
    Parms.TextureParameter = TextureParameter;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.RetainerBox.SetEffectMaterial
void RetainerBox::SetEffectMaterial(class UObject* EffectMaterial) {
    static class UFunction* Func = nullptr;
    RetainerBox_SetEffectMaterial_Params Parms{};
    Parms.EffectMaterial = EffectMaterial;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.RetainerBox.GetEffectMaterial
class UObject* RetainerBox::GetEffectMaterial() {
    static class UFunction* Func = nullptr;
    RetainerBox_GetEffectMaterial_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SizeBox.SetWidthOverride
void SizeBox::SetWidthOverride(float InWidthOverride) {
    static class UFunction* Func = nullptr;
    SizeBox_SetWidthOverride_Params Parms{};
    Parms.InWidthOverride = InWidthOverride;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBox.SetMinDesiredWidth
void SizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
    static class UFunction* Func = nullptr;
    SizeBox_SetMinDesiredWidth_Params Parms{};
    Parms.InMinDesiredWidth = InMinDesiredWidth;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBox.SetMinDesiredHeight
void SizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
    static class UFunction* Func = nullptr;
    SizeBox_SetMinDesiredHeight_Params Parms{};
    Parms.InMinDesiredHeight = InMinDesiredHeight;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBox.SetMaxDesiredWidth
void SizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
    static class UFunction* Func = nullptr;
    SizeBox_SetMaxDesiredWidth_Params Parms{};
    Parms.InMaxDesiredWidth = InMaxDesiredWidth;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBox.SetMaxDesiredHeight
void SizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
    static class UFunction* Func = nullptr;
    SizeBox_SetMaxDesiredHeight_Params Parms{};
    Parms.InMaxDesiredHeight = InMaxDesiredHeight;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBox.SetHeightOverride
void SizeBox::SetHeightOverride(float InHeightOverride) {
    static class UFunction* Func = nullptr;
    SizeBox_SetHeightOverride_Params Parms{};
    Parms.InHeightOverride = InHeightOverride;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SizeBox.ClearWidthOverride
void SizeBox::ClearWidthOverride() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SizeBox.ClearMinDesiredWidth
void SizeBox::ClearMinDesiredWidth() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SizeBox.ClearMinDesiredHeight
void SizeBox::ClearMinDesiredHeight() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SizeBox.ClearMaxDesiredWidth
void SizeBox::ClearMaxDesiredWidth() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SizeBox.ClearMaxDesiredHeight
void SizeBox::ClearMaxDesiredHeight() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SizeBox.ClearHeightOverride
void SizeBox::ClearHeightOverride() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.Viewport.Spawn
class UObject* Viewport::Spawn(class UClass* ActorClass) {
    static class UFunction* Func = nullptr;
    Viewport_Spawn_Params Parms{};
    Parms.ActorClass = ActorClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Viewport.SetViewRotation
void Viewport::SetViewRotation(uint8_t Rotation) {
    static class UFunction* Func = nullptr;
    Viewport_SetViewRotation_Params Parms{};
    Parms.Rotation = Rotation;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Viewport.SetViewLocation
void Viewport::SetViewLocation(uint8_t Location) {
    static class UFunction* Func = nullptr;
    Viewport_SetViewLocation_Params Parms{};
    Parms.Location = Location;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Viewport.GetViewRotation
uint8_t Viewport::GetViewRotation() {
    static class UFunction* Func = nullptr;
    Viewport_GetViewRotation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Viewport.GetViewportWorld
class UObject* Viewport::GetViewportWorld() {
    static class UFunction* Func = nullptr;
    Viewport_GetViewportWorld_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Viewport.GetViewLocation
uint8_t Viewport::GetViewLocation() {
    static class UFunction* Func = nullptr;
    Viewport_GetViewLocation_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.HorizontalBox.AddChildToHorizontalBox
class UObject* HorizontalBox::AddChildToHorizontalBox(class UObject* Content) {
    static class UFunction* Func = nullptr;
    HorizontalBox_AddChildToHorizontalBox_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Overlay.AddChildToOverlay
class UObject* Overlay::AddChildToOverlay(class UObject* Content) {
    static class UFunction* Func = nullptr;
    Overlay_AddChildToOverlay_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ScrollBox.SetScrollOffset
void ScrollBox::SetScrollOffset(float NewScrollOffset) {
    static class UFunction* Func = nullptr;
    ScrollBox_SetScrollOffset_Params Parms{};
    Parms.NewScrollOffset = NewScrollOffset;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScrollBox.ScrollWidgetIntoView
void ScrollBox::ScrollWidgetIntoView(class UObject* WidgetToFind, bool AnimateScroll) {
    static class UFunction* Func = nullptr;
    ScrollBox_ScrollWidgetIntoView_Params Parms{};
    Parms.WidgetToFind = WidgetToFind;
    Parms.AnimateScroll = AnimateScroll;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScrollBox.ScrollToStart
void ScrollBox::ScrollToStart() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ScrollBox.ScrollToEnd
void ScrollBox::ScrollToEnd() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.ScrollBox.GetScrollOffset
float ScrollBox::GetScrollOffset() {
    static class UFunction* Func = nullptr;
    ScrollBox_GetScrollOffset_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.UniformGridPanel.SetSlotPadding
void UniformGridPanel::SetSlotPadding(uint8_t InSlotPadding) {
    static class UFunction* Func = nullptr;
    UniformGridPanel_SetSlotPadding_Params Parms{};
    Parms.InSlotPadding = InSlotPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridPanel.SetMinDesiredSlotWidth
void UniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
    static class UFunction* Func = nullptr;
    UniformGridPanel_SetMinDesiredSlotWidth_Params Parms{};
    Parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridPanel.SetMinDesiredSlotHeight
void UniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
    static class UFunction* Func = nullptr;
    UniformGridPanel_SetMinDesiredSlotHeight_Params Parms{};
    Parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.UniformGridPanel.AddChildToUniformGrid
class UObject* UniformGridPanel::AddChildToUniformGrid(class UObject* Content) {
    static class UFunction* Func = nullptr;
    UniformGridPanel_AddChildToUniformGrid_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.VerticalBox.AddChildToVerticalBox
class UObject* VerticalBox::AddChildToVerticalBox(class UObject* Content) {
    static class UFunction* Func = nullptr;
    VerticalBox_AddChildToVerticalBox_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetSwitcher.SetActiveWidgetIndex
void WidgetSwitcher::SetActiveWidgetIndex(int32_t Index) {
    static class UFunction* Func = nullptr;
    WidgetSwitcher_SetActiveWidgetIndex_Params Parms{};
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetSwitcher.SetActiveWidget
void WidgetSwitcher::SetActiveWidget(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetSwitcher_SetActiveWidget_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetSwitcher.GetWidgetAtIndex
class UObject* WidgetSwitcher::GetWidgetAtIndex(int32_t Index) {
    static class UFunction* Func = nullptr;
    WidgetSwitcher_GetWidgetAtIndex_Params Parms{};
    Parms.Index = Index;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetSwitcher.GetNumWidgets
int32_t WidgetSwitcher::GetNumWidgets() {
    static class UFunction* Func = nullptr;
    WidgetSwitcher_GetNumWidgets_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetSwitcher.GetActiveWidgetIndex
int32_t WidgetSwitcher::GetActiveWidgetIndex() {
    static class UFunction* Func = nullptr;
    WidgetSwitcher_GetActiveWidgetIndex_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WrapBox.SetInnerSlotPadding
void WrapBox::SetInnerSlotPadding(uint8_t InPadding) {
    static class UFunction* Func = nullptr;
    WrapBox_SetInnerSlotPadding_Params Parms{};
    Parms.InPadding = InPadding;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WrapBox.AddChildWrapBox
class UObject* WrapBox::AddChildWrapBox(class UObject* Content) {
    static class UFunction* Func = nullptr;
    WrapBox_AddChildWrapBox_Params Parms{};
    Parms.Content = Content;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.ProgressBar.SetPercent
void ProgressBar::SetPercent(float InPercent) {
    static class UFunction* Func = nullptr;
    ProgressBar_SetPercent_Params Parms{};
    Parms.InPercent = InPercent;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ProgressBar.SetIsMarquee
void ProgressBar::SetIsMarquee(bool InbIsMarquee) {
    static class UFunction* Func = nullptr;
    ProgressBar_SetIsMarquee_Params Parms{};
    Parms.InbIsMarquee = InbIsMarquee;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ProgressBar.SetFillColorAndOpacity
void ProgressBar::SetFillColorAndOpacity(uint8_t InColor) {
    static class UFunction* Func = nullptr;
    ProgressBar_SetFillColorAndOpacity_Params Parms{};
    Parms.InColor = InColor;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ProgressBar.SetBarFillType
void ProgressBar::SetBarFillType(uint8_t Type) {
    static class UFunction* Func = nullptr;
    ProgressBar_SetBarFillType_Params Parms{};
    Parms.Type = Type;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.ScrollBar.SetState
void ScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
    static class UFunction* Func = nullptr;
    ScrollBar_SetState_Params Parms{};
    Parms.InOffsetFraction = InOffsetFraction;
    Parms.InThumbSizeFraction = InThumbSizeFraction;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.SetValue
void Slider::SetValue(float InValue) {
    static class UFunction* Func = nullptr;
    Slider_SetValue_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.SetStepSize
void Slider::SetStepSize(float InValue) {
    static class UFunction* Func = nullptr;
    Slider_SetStepSize_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.SetSliderHandleColor
void Slider::SetSliderHandleColor(uint8_t InValue) {
    static class UFunction* Func = nullptr;
    Slider_SetSliderHandleColor_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.SetSliderBarColor
void Slider::SetSliderBarColor(uint8_t InValue) {
    static class UFunction* Func = nullptr;
    Slider_SetSliderBarColor_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.SetLocked
void Slider::SetLocked(bool InValue) {
    static class UFunction* Func = nullptr;
    Slider_SetLocked_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.SetIndentHandle
void Slider::SetIndentHandle(bool InValue) {
    static class UFunction* Func = nullptr;
    Slider_SetIndentHandle_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Slider.GetValue
float Slider::GetValue() {
    static class UFunction* Func = nullptr;
    Slider_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Spacer.SetSize
void Spacer::SetSize(uint8_t InSize) {
    static class UFunction* Func = nullptr;
    Spacer_SetSize_Params Parms{};
    Parms.InSize = InSize;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.SetValue
void SpinBox::SetValue(float NewValue) {
    static class UFunction* Func = nullptr;
    SpinBox_SetValue_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.SetMinValue
void SpinBox::SetMinValue(float NewValue) {
    static class UFunction* Func = nullptr;
    SpinBox_SetMinValue_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.SetMinSliderValue
void SpinBox::SetMinSliderValue(float NewValue) {
    static class UFunction* Func = nullptr;
    SpinBox_SetMinSliderValue_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.SetMaxValue
void SpinBox::SetMaxValue(float NewValue) {
    static class UFunction* Func = nullptr;
    SpinBox_SetMaxValue_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.SetMaxSliderValue
void SpinBox::SetMaxSliderValue(float NewValue) {
    static class UFunction* Func = nullptr;
    SpinBox_SetMaxSliderValue_Params Parms{};
    Parms.NewValue = NewValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.SetForegroundColor
void SpinBox::SetForegroundColor(uint8_t InForegroundColor) {
    static class UFunction* Func = nullptr;
    SpinBox_SetForegroundColor_Params Parms{};
    Parms.InForegroundColor = InForegroundColor;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
void SpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, uint8_t CommitMethod) {
    static class UFunction* Func = nullptr;
    SpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};
    Parms.InValue = InValue;
    Parms.CommitMethod = CommitMethod;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
void SpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue) {
    static class UFunction* Func = nullptr;
    SpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};
    Parms.InValue = InValue;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
void SpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SpinBox.GetValue
float SpinBox::GetValue() {
    static class UFunction* Func = nullptr;
    SpinBox_GetValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SpinBox.GetMinValue
float SpinBox::GetMinValue() {
    static class UFunction* Func = nullptr;
    SpinBox_GetMinValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SpinBox.GetMinSliderValue
float SpinBox::GetMinSliderValue() {
    static class UFunction* Func = nullptr;
    SpinBox_GetMinSliderValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SpinBox.GetMaxValue
float SpinBox::GetMaxValue() {
    static class UFunction* Func = nullptr;
    SpinBox_GetMaxValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SpinBox.GetMaxSliderValue
float SpinBox::GetMaxSliderValue() {
    static class UFunction* Func = nullptr;
    SpinBox_GetMaxSliderValue_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.SpinBox.ClearMinValue
void SpinBox::ClearMinValue() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SpinBox.ClearMinSliderValue
void SpinBox::ClearMinSliderValue() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SpinBox.ClearMaxValue
void SpinBox::ClearMaxValue() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.SpinBox.ClearMaxSliderValue
void SpinBox::ClearMaxSliderValue() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
class UObject* TableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject* Item) {
    static class UFunction* Func = nullptr;
    TableViewBase_OnGenerateRowUObject__DelegateSignature_Params Parms{};
    Parms.Item = Item;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.TileView.SetItemWidth
void TileView::SetItemWidth(float Width) {
    static class UFunction* Func = nullptr;
    TileView_SetItemWidth_Params Parms{};
    Parms.Width = Width;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TileView.SetItemHeight
void TileView::SetItemHeight(float Height) {
    static class UFunction* Func = nullptr;
    TileView_SetItemHeight_Params Parms{};
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TileView.RequestListRefresh
void TileView::RequestListRefresh() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.MultiLineEditableText.SetText
void MultiLineEditableText::SetText(struct FText InText) {
    static class UFunction* Func = nullptr;
    MultiLineEditableText_SetText_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
void MultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod) {
    static class UFunction* Func = nullptr;
    MultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    Parms.CommitMethod = CommitMethod;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
void MultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text) {
    static class UFunction* Func = nullptr;
    MultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableText.GetText
struct FText MultiLineEditableText::GetText() {
    static class UFunction* Func = nullptr;
    MultiLineEditableText_GetText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.MultiLineEditableTextBox.SetText
void MultiLineEditableTextBox::SetText(struct FText InText) {
    static class UFunction* Func = nullptr;
    MultiLineEditableTextBox_SetText_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableTextBox.SetError
void MultiLineEditableTextBox::SetError(struct FText InError) {
    static class UFunction* Func = nullptr;
    MultiLineEditableTextBox_SetError_Params Parms{};
    Parms.InError = InError;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
void MultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod) {
    static class UFunction* Func = nullptr;
    MultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    Parms.CommitMethod = CommitMethod;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
void MultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text) {
    static class UFunction* Func = nullptr;
    MultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};
    Parms.Text = Text;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.MultiLineEditableTextBox.GetText
struct FText MultiLineEditableTextBox::GetText() {
    static class UFunction* Func = nullptr;
    MultiLineEditableTextBox_GetText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.RichTextBlock.SetText
void RichTextBlock::SetText(struct FText InText) {
    static class UFunction* Func = nullptr;
    RichTextBlock_SetText_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.RichTextBlock.GetText
struct FText RichTextBlock::GetText() {
    static class UFunction* Func = nullptr;
    RichTextBlock_GetText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.TextBlock.SetText
void TextBlock::SetText(struct FText InText) {
    static class UFunction* Func = nullptr;
    TextBlock_SetText_Params Parms{};
    Parms.InText = InText;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.SetShadowOffset
void TextBlock::SetShadowOffset(uint8_t InShadowOffset) {
    static class UFunction* Func = nullptr;
    TextBlock_SetShadowOffset_Params Parms{};
    Parms.InShadowOffset = InShadowOffset;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.SetShadowColorAndOpacity
void TextBlock::SetShadowColorAndOpacity(uint8_t InShadowColorAndOpacity) {
    static class UFunction* Func = nullptr;
    TextBlock_SetShadowColorAndOpacity_Params Parms{};
    Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.SetOpacity
void TextBlock::SetOpacity(float InOpacity) {
    static class UFunction* Func = nullptr;
    TextBlock_SetOpacity_Params Parms{};
    Parms.InOpacity = InOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.SetJustification
void TextBlock::SetJustification(uint8_t InJustification) {
    static class UFunction* Func = nullptr;
    TextBlock_SetJustification_Params Parms{};
    Parms.InJustification = InJustification;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.SetFont
void TextBlock::SetFont(uint8_t InFontInfo) {
    static class UFunction* Func = nullptr;
    TextBlock_SetFont_Params Parms{};
    Parms.InFontInfo = InFontInfo;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.SetColorAndOpacity
void TextBlock::SetColorAndOpacity(uint8_t InColorAndOpacity) {
    static class UFunction* Func = nullptr;
    TextBlock_SetColorAndOpacity_Params Parms{};
    Parms.InColorAndOpacity = InColorAndOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.TextBlock.GetText
struct FText TextBlock::GetText() {
    static class UFunction* Func = nullptr;
    TextBlock_GetText_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.Throbber.SetNumberOfPieces
void Throbber::SetNumberOfPieces(int32_t InNumberOfPieces) {
    static class UFunction* Func = nullptr;
    Throbber_SetNumberOfPieces_Params Parms{};
    Parms.InNumberOfPieces = InNumberOfPieces;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Throbber.SetAnimateVertically
void Throbber::SetAnimateVertically(bool bInAnimateVertically) {
    static class UFunction* Func = nullptr;
    Throbber_SetAnimateVertically_Params Parms{};
    Parms.bInAnimateVertically = bInAnimateVertically;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Throbber.SetAnimateOpacity
void Throbber::SetAnimateOpacity(bool bInAnimateOpacity) {
    static class UFunction* Func = nullptr;
    Throbber_SetAnimateOpacity_Params Parms{};
    Parms.bInAnimateOpacity = bInAnimateOpacity;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.Throbber.SetAnimateHorizontally
void Throbber::SetAnimateHorizontally(bool bInAnimateHorizontally) {
    static class UFunction* Func = nullptr;
    Throbber_SetAnimateHorizontally_Params Parms{};
    Parms.bInAnimateHorizontally = bInAnimateHorizontally;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetAnimation.GetStartTime
float WidgetAnimation::GetStartTime() {
    static class UFunction* Func = nullptr;
    WidgetAnimation_GetStartTime_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetAnimation.GetEndTime
float WidgetAnimation::GetEndTime() {
    static class UFunction* Func = nullptr;
    WidgetAnimation_GetEndTime_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.UnlockMouse
uint8_t WidgetBlueprintLibrary::UnlockMouse(uint8_t Reply) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_UnlockMouse_Params Parms{};
    Parms.Reply = Reply;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.Unhandled
uint8_t WidgetBlueprintLibrary::Unhandled() {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_Unhandled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.SetUserFocus
uint8_t WidgetBlueprintLibrary::SetUserFocus(uint8_t Reply, class UObject* FocusWidget, bool bInAllUsers) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetUserFocus_Params Parms{};
    Parms.Reply = Reply;
    Parms.FocusWidget = FocusWidget;
    Parms.bInAllUsers = bInAllUsers;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.SetMousePosition
uint8_t WidgetBlueprintLibrary::SetMousePosition(uint8_t Reply, uint8_t NewMousePosition) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetMousePosition_Params Parms{};
    Parms.Reply = Reply;
    Parms.NewMousePosition = NewMousePosition;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
void WidgetBlueprintLibrary::SetInputMode_UIOnly(class UObject* Target, class UObject* InWidgetToFocus, bool bLockMouseToViewport) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetInputMode_UIOnly_Params Parms{};
    Parms.Target = Target;
    Parms.InWidgetToFocus = InWidgetToFocus;
    Parms.bLockMouseToViewport = bLockMouseToViewport;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
void WidgetBlueprintLibrary::SetInputMode_GameOnly(class UObject* Target) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetInputMode_GameOnly_Params Parms{};
    Parms.Target = Target;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
void WidgetBlueprintLibrary::SetInputMode_GameAndUI(class UObject* Target, class UObject* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetInputMode_GameAndUI_Params Parms{};
    Parms.Target = Target;
    Parms.InWidgetToFocus = InWidgetToFocus;
    Parms.bLockMouseToViewport = bLockMouseToViewport;
    Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
void WidgetBlueprintLibrary::SetFocusToGameViewport() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
void WidgetBlueprintLibrary::SetBrushResourceToTexture(uint8_t Brush, class UObject* Texture) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms{};
    Parms.Brush = Brush;
    Parms.Texture = Texture;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
void WidgetBlueprintLibrary::SetBrushResourceToMaterial(uint8_t Brush, class UObject* Material) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms{};
    Parms.Brush = Brush;
    Parms.Material = Material;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
uint8_t WidgetBlueprintLibrary::ReleaseMouseCapture(uint8_t Reply) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms{};
    Parms.Reply = Reply;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
uint8_t WidgetBlueprintLibrary::ReleaseJoystickCapture(uint8_t Reply, bool bInAllJoysticks) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms{};
    Parms.Reply = Reply;
    Parms.bInAllJoysticks = bInAllJoysticks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.NoResourceBrush
uint8_t WidgetBlueprintLibrary::NoResourceBrush() {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_NoResourceBrush_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
uint8_t WidgetBlueprintLibrary::MakeBrushFromTexture(class UObject* Texture, int32_t Width, int32_t Height) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms{};
    Parms.Texture = Texture;
    Parms.Width = Width;
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
uint8_t WidgetBlueprintLibrary::MakeBrushFromMaterial(class UObject* Material, int32_t Width, int32_t Height) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms{};
    Parms.Material = Material;
    Parms.Width = Width;
    Parms.Height = Height;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
uint8_t WidgetBlueprintLibrary::MakeBrushFromAsset(class UObject* BrushAsset) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms{};
    Parms.BrushAsset = BrushAsset;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.LockMouse
uint8_t WidgetBlueprintLibrary::LockMouse(uint8_t Reply, class UObject* CapturingWidget) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_LockMouse_Params Parms{};
    Parms.Reply = Reply;
    Parms.CapturingWidget = CapturingWidget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.IsDragDropping
bool WidgetBlueprintLibrary::IsDragDropping() {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_IsDragDropping_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.Handled
uint8_t WidgetBlueprintLibrary::Handled() {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_Handled_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
uint8_t WidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(uint8_t Event) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms{};
    Parms.Event = Event;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
uint8_t WidgetBlueprintLibrary::GetInputEventFromPointerEvent(uint8_t Event) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms{};
    Parms.Event = Event;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
uint8_t WidgetBlueprintLibrary::GetInputEventFromNavigationEvent(uint8_t Event) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms{};
    Parms.Event = Event;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
uint8_t WidgetBlueprintLibrary::GetInputEventFromKeyEvent(uint8_t Event) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms{};
    Parms.Event = Event;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
uint8_t WidgetBlueprintLibrary::GetInputEventFromControllerEvent(uint8_t Event) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params Parms{};
    Parms.Event = Event;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
uint8_t WidgetBlueprintLibrary::GetInputEventFromCharacterEvent(uint8_t Event) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms{};
    Parms.Event = Event;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetDynamicMaterial
class UObject* WidgetBlueprintLibrary::GetDynamicMaterial(uint8_t Brush) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetDynamicMaterial_Params Parms{};
    Parms.Brush = Brush;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetDragDroppingContent
class UObject* WidgetBlueprintLibrary::GetDragDroppingContent() {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetDragDroppingContent_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
class UObject* WidgetBlueprintLibrary::GetBrushResourceAsTexture2D(uint8_t Brush) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms{};
    Parms.Brush = Brush;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
class UObject* WidgetBlueprintLibrary::GetBrushResourceAsMaterial(uint8_t Brush) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms{};
    Parms.Brush = Brush;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetBrushResource
class UObject* WidgetBlueprintLibrary::GetBrushResource(uint8_t Brush) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetBrushResource_Params Parms{};
    Parms.Brush = Brush;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
void WidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, struct TArray<uint8_t> FoundWidgets, bool TopLevelOnly) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.Interface = Interface;
    Parms.FoundWidgets = FoundWidgets;
    Parms.TopLevelOnly = TopLevelOnly;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
void WidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, struct TArray<uint8_t> FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.FoundWidgets = FoundWidgets;
    Parms.WidgetClass = WidgetClass;
    Parms.TopLevelOnly = TopLevelOnly;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.EndDragDrop
uint8_t WidgetBlueprintLibrary::EndDragDrop(uint8_t Reply) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_EndDragDrop_Params Parms{};
    Parms.Reply = Reply;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.DrawTextFormatted
void WidgetBlueprintLibrary::DrawTextFormatted(uint8_t Context, struct FText Text, uint8_t Position, class UObject* Font, int32_t FontSize, struct FName FontTypeFace, uint8_t Tint) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DrawTextFormatted_Params Parms{};
    Parms.Context = Context;
    Parms.Text = Text;
    Parms.Position = Position;
    Parms.Font = Font;
    Parms.FontSize = FontSize;
    Parms.FontTypeFace = FontTypeFace;
    Parms.Tint = Tint;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.DrawText
void WidgetBlueprintLibrary::DrawText(uint8_t Context, struct FString InString, uint8_t Position, uint8_t Tint) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DrawText_Params Parms{};
    Parms.Context = Context;
    Parms.InString = InString;
    Parms.Position = Position;
    Parms.Tint = Tint;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.DrawLines
void WidgetBlueprintLibrary::DrawLines(uint8_t Context, struct TArray<uint8_t> Points, uint8_t Tint, bool bAntiAlias) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DrawLines_Params Parms{};
    Parms.Context = Context;
    Parms.Points = Points;
    Parms.Tint = Tint;
    Parms.bAntiAlias = bAntiAlias;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.DrawLine
void WidgetBlueprintLibrary::DrawLine(uint8_t Context, uint8_t PositionA, uint8_t PositionB, uint8_t Tint, bool bAntiAlias) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DrawLine_Params Parms{};
    Parms.Context = Context;
    Parms.PositionA = PositionA;
    Parms.PositionB = PositionB;
    Parms.Tint = Tint;
    Parms.bAntiAlias = bAntiAlias;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.DrawBox
void WidgetBlueprintLibrary::DrawBox(uint8_t Context, uint8_t Position, uint8_t Size, class UObject* Brush, uint8_t Tint) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DrawBox_Params Parms{};
    Parms.Context = Context;
    Parms.Position = Position;
    Parms.Size = Size;
    Parms.Brush = Brush;
    Parms.Tint = Tint;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.DismissAllMenus
void WidgetBlueprintLibrary::DismissAllMenus() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.WidgetBlueprintLibrary.DetectDragIfPressed
uint8_t WidgetBlueprintLibrary::DetectDragIfPressed(uint8_t PointerEvent, class UObject* WidgetDetectingDrag, uint8_t DragKey) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DetectDragIfPressed_Params Parms{};
    Parms.PointerEvent = PointerEvent;
    Parms.WidgetDetectingDrag = WidgetDetectingDrag;
    Parms.DragKey = DragKey;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.DetectDrag
uint8_t WidgetBlueprintLibrary::DetectDrag(uint8_t Reply, class UObject* WidgetDetectingDrag, uint8_t DragKey) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_DetectDrag_Params Parms{};
    Parms.Reply = Reply;
    Parms.WidgetDetectingDrag = WidgetDetectingDrag;
    Parms.DragKey = DragKey;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.CreateDragDropOperation
class UObject* WidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_CreateDragDropOperation_Params Parms{};
    Parms.OperationClass = OperationClass;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.Create
class UObject* WidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class UObject* OwningPlayer) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_Create_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    Parms.WidgetType = WidgetType;
    Parms.OwningPlayer = OwningPlayer;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.ClearUserFocus
uint8_t WidgetBlueprintLibrary::ClearUserFocus(uint8_t Reply, bool bInAllUsers) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_ClearUserFocus_Params Parms{};
    Parms.Reply = Reply;
    Parms.bInAllUsers = bInAllUsers;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.CaptureMouse
uint8_t WidgetBlueprintLibrary::CaptureMouse(uint8_t Reply, class UObject* CapturingWidget) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_CaptureMouse_Params Parms{};
    Parms.Reply = Reply;
    Parms.CapturingWidget = CapturingWidget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.CaptureJoystick
uint8_t WidgetBlueprintLibrary::CaptureJoystick(uint8_t Reply, class UObject* CapturingWidget, bool bInAllJoysticks) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_CaptureJoystick_Params Parms{};
    Parms.Reply = Reply;
    Parms.CapturingWidget = CapturingWidget;
    Parms.bInAllJoysticks = bInAllJoysticks;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetBlueprintLibrary.CancelDragDrop
void WidgetBlueprintLibrary::CancelDragDrop() {
    static class UFunction* Func = nullptr;
    ProcessEvent(Func, nullptr);
}

// Function: UMG.WidgetBlueprintLibrary.BendDrawLines
void WidgetBlueprintLibrary::BendDrawLines(uint8_t Context, struct TArray<uint8_t> Points, uint8_t Tint, bool bAntiAlias, float Thickness, bool bIsPath, float ClipRadius) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_BendDrawLines_Params Parms{};
    Parms.Context = Context;
    Parms.Points = Points;
    Parms.Tint = Tint;
    Parms.bAntiAlias = bAntiAlias;
    Parms.Thickness = Thickness;
    Parms.bIsPath = bIsPath;
    Parms.ClipRadius = ClipRadius;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetBlueprintLibrary.BendDrawLine
void WidgetBlueprintLibrary::BendDrawLine(uint8_t Context, uint8_t PositionA, uint8_t PositionB, uint8_t Tint, bool bAntiAlias, float Thickness, bool bIsPath, float ClipRadius) {
    static class UFunction* Func = nullptr;
    WidgetBlueprintLibrary_BendDrawLine_Params Parms{};
    Parms.Context = Context;
    Parms.PositionA = PositionA;
    Parms.PositionB = PositionB;
    Parms.Tint = Tint;
    Parms.bAntiAlias = bAntiAlias;
    Parms.Thickness = Thickness;
    Parms.bIsPath = bIsPath;
    Parms.ClipRadius = ClipRadius;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetComponent.SetWidget
void WidgetComponent::SetWidget(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetComponent_SetWidget_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetComponent.SetOwnerPlayer
void WidgetComponent::SetOwnerPlayer(class UObject* LocalPlayer) {
    static class UFunction* Func = nullptr;
    WidgetComponent_SetOwnerPlayer_Params Parms{};
    Parms.LocalPlayer = LocalPlayer;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetComponent.SetMaxInteractionDistance
void WidgetComponent::SetMaxInteractionDistance(float Distance) {
    static class UFunction* Func = nullptr;
    WidgetComponent_SetMaxInteractionDistance_Params Parms{};
    Parms.Distance = Distance;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetComponent.SetDrawSize
void WidgetComponent::SetDrawSize(uint8_t Size) {
    static class UFunction* Func = nullptr;
    WidgetComponent_SetDrawSize_Params Parms{};
    Parms.Size = Size;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetComponent.GetUserWidgetObject
class UObject* WidgetComponent::GetUserWidgetObject() {
    static class UFunction* Func = nullptr;
    WidgetComponent_GetUserWidgetObject_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetComponent.GetOwnerPlayer
class UObject* WidgetComponent::GetOwnerPlayer() {
    static class UFunction* Func = nullptr;
    WidgetComponent_GetOwnerPlayer_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetComponent.GetMaxInteractionDistance
float WidgetComponent::GetMaxInteractionDistance() {
    static class UFunction* Func = nullptr;
    WidgetComponent_GetMaxInteractionDistance_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetComponent.GetDrawSize
uint8_t WidgetComponent::GetDrawSize() {
    static class UFunction* Func = nullptr;
    WidgetComponent_GetDrawSize_Params Parms{};
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
class UObject* WidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
class UObject* WidgetLayoutLibrary::SlotAsUniformGridSlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
class UObject* WidgetLayoutLibrary::SlotAsOverlaySlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
class UObject* WidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsGridSlot
class UObject* WidgetLayoutLibrary::SlotAsGridSlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsGridSlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
class UObject* WidgetLayoutLibrary::SlotAsCanvasSlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.SlotAsBorderSlot
class UObject* WidgetLayoutLibrary::SlotAsBorderSlot(class UObject* Widget) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_SlotAsBorderSlot_Params Parms{};
    Parms.Widget = Widget;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.RemoveAllWidgets
void WidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_RemoveAllWidgets_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
}

// Function: UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
bool WidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class UObject* PlayerController, uint8_t WorldLocation, uint8_t ScreenPosition) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms{};
    Parms.PlayerController = PlayerController;
    Parms.WorldLocation = WorldLocation;
    Parms.ScreenPosition = ScreenPosition;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.GetViewportSize
uint8_t WidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_GetViewportSize_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.GetViewportScale
float WidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_GetViewportScale_Params Parms{};
    Parms.WorldContextObject = WorldContextObject;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// Function: UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
bool WidgetLayoutLibrary::GetMousePositionScaledByDPI(class UObject* Player, float LocationX, float LocationY) {
    static class UFunction* Func = nullptr;
    WidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms{};
    Parms.Player = Player;
    Parms.LocationX = LocationX;
    Parms.LocationY = LocationY;
    ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK

#pragma once
#include "Basic.hpp"
#include "UMG_structs.hpp"

namespace SDK {

// Class: UMG.Visual
class Visual : public Object {
public:
};

// Class: UMG.Widget
class Widget : public Visual {
public:
    bool bIsVariable; // 0x0028 (0x0001)
    bool bCreatedByConstructionScript; // 0x0029 (0x0001)
    uint8_t Pad_0[0x6]; // 0x002A (0x0006)
    class UObject* Slot; // 0x0030 (0x0008)
    bool bIsEnabled; // 0x0038 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0039 (0x0007)
    uint8_t bIsEnabledDelegate[0x10]; // 0x0040 (0x0010)
    struct FText ToolTipText; // 0x0050 (0x0018)
    uint8_t ToolTipTextDelegate[0x10]; // 0x0068 (0x0010)
    class UObject* ToolTipWidget; // 0x0078 (0x0008)
    uint8_t ToolTipWidgetDelegate[0x10]; // 0x0080 (0x0010)
    uint8_t Visiblity; // 0x0090 (0x0001)
    uint8_t Visibility; // 0x0091 (0x0001)
    uint8_t Pad_2[0x6]; // 0x0092 (0x0006)
    uint8_t VisibilityDelegate[0x10]; // 0x0098 (0x0010)
    bool bOverride_Cursor; // 0x00A8 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00A9 (0x0003)
    uint8_t Cursor; // 0x00AC (0x0001)
    bool bIsVolatile; // 0x00AD (0x0001)
    uint8_t Pad_4[0x2]; // 0x00AE (0x0002)
    uint8_t RenderTransform[0x1C]; // 0x00B0 (0x001C)
    uint8_t RenderTransformPivot[0x8]; // 0x00CC (0x0008)
    uint8_t Pad_5[0x4]; // 0x00D4 (0x0004)
    class UObject* Navigation; // 0x00D8 (0x0008)
    uint8_t Pad_6[0x28]; // 0x00E0 (0x0028)
    struct TArray<uint8_t> NativeBindings; // 0x0108 (0x0010)

public:
    void SetVisibility(uint8_t InVisibility);
    void SetUserFocus(class UObject* PlayerController);
    void SetToolTipText(struct FText InToolTipText);
    void SetToolTip(class UObject* Widget);
    void SetRenderTranslation(uint8_t Translation);
    void SetRenderTransformPivot(uint8_t Pivot);
    void SetRenderTransform(uint8_t InTransform);
    void SetRenderShear(uint8_t Shear);
    void SetRenderScale(uint8_t Scale);
    void SetRenderAngle(float angle);
    void SetKeyboardFocus();
    void SetIsEnabled(bool bInIsEnabled);
    void SetCursor(uint8_t InCursor);
    void ResetCursor();
    void RemoveFromParent();
    uint8_t OnReply__DelegateSignature();
    uint8_t OnPointerEvent__DelegateSignature(uint8_t MyGeometry, uint8_t MouseEvent);
    bool IsVisible();
    bool IsHovered();
    void InvalidateLayoutAndVolatility();
    bool HasUserFocusedDescendants(class UObject* PlayerController);
    bool HasUserFocus(class UObject* PlayerController);
    bool HasMouseCapture();
    bool HasKeyboardFocus();
    bool HasFocusedDescendants();
    bool HasAnyUserFocus();
    class UObject* GetWidget__DelegateSignature();
    uint8_t GetVisibility();
    struct FText GetText__DelegateSignature();
    uint8_t GetSlateVisibility__DelegateSignature();
    uint8_t GetSlateColor__DelegateSignature();
    uint8_t GetSlateBrush__DelegateSignature();
    class UObject* GetParent();
    uint8_t GetMouseCursor__DelegateSignature();
    uint8_t GetLinearColor__DelegateSignature();
    bool GetIsEnabled();
    int32_t GetInt32__DelegateSignature();
    float GetFloat__DelegateSignature();
    uint8_t GetDesiredSize();
    uint8_t GetCheckBoxState__DelegateSignature();
    bool GetBool__DelegateSignature();
    class UObject* GenerateWidgetForString__DelegateSignature(struct FString Item);
    class UObject* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
    void ForceVolatile(bool bForce);
    void ForceLayoutPrepass();
};

// Class: UMG.UserWidget
class UserWidget : public Widget {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    uint8_t ColorAndOpacity[0x10]; // 0x0120 (0x0010)
    uint8_t ColorAndOpacityDelegate[0x10]; // 0x0130 (0x0010)
    uint8_t ForegroundColor[0x28]; // 0x0140 (0x0028)
    uint8_t ForegroundColorDelegate[0x10]; // 0x0168 (0x0010)
    uint8_t Padding[0x10]; // 0x0178 (0x0010)
    bool bSupportsKeyboardFocus; // 0x0188 (0x0001)
    bool bIsFocusable; // 0x0189 (0x0001)
    uint8_t Pad_1[0x6]; // 0x018A (0x0006)
    class UObject* WidgetTree; // 0x0190 (0x0008)
    struct TArray<uint8_t> ActiveSequencePlayers; // 0x0198 (0x0010)
    struct TArray<uint8_t> StoppedSequencePlayers; // 0x01A8 (0x0010)
    struct TArray<uint8_t> PooledSequencePlayers; // 0x01B8 (0x0010)
    struct TArray<uint8_t> NamedSlotBindings; // 0x01C8 (0x0010)
    bool bNativeTickEnabled; // 0x01D8 (0x0001)
    bool bBlueprintTickEnabled; // 0x01D9 (0x0001)
    bool bNativePaintEnabled; // 0x01DA (0x0001)
    bool bStopAction; // 0x01DB (0x0001)
    int32_t Priority; // 0x01DC (0x0004)
    uint8_t Pad_2[0x8]; // 0x01E0 (0x0008)
    class UObject* InputComponent; // 0x01E8 (0x0008)

public:
    void Tick(uint8_t MyGeometry, float InDeltaTime);
    void StopListeningForInputAction(struct FName ActionName, uint8_t eventType);
    void StopListeningForAllInputActions();
    void StopAnimation(class UObject* InAnimation);
    void SetWidgetTreeVisibility(uint8_t InVisibility);
    void SetVisibilityAndTickFlag(uint8_t InVisibility, bool InTickEnabled);
    void SetVisibilityAndSyncTick(uint8_t InVisibility);
    void SetTickEnabled(bool IsEnabled);
    void SetPositionInViewport(uint8_t Position, bool bRemoveDPIScale);
    void SetPadding(uint8_t InPadding);
    void SetOwningLocalPlayer(class UObject* LocalPlayer);
    void SetNumLoopsToPlay(class UObject* InAnimation, int32_t NumLoopsToPlay);
    void SetNativeTickEnabled(bool IsEnabled);
    void SetInputActionPriority(int32_t NewPriority);
    void SetInputActionBlocking(bool bShouldBlock);
    void SetForegroundColor(uint8_t InForegroundColor);
    void SetDesiredSizeInViewport(uint8_t Size);
    void SetColorAndOpacity(uint8_t InColorAndOpacity);
    void SetAnchorsInViewport(uint8_t Anchors);
    void SetAlignmentInViewport(uint8_t Alignment);
    void RemoveFromViewport();
    void PlaySound(class UObject* SoundToPlay);
    void PlayAnimation(class UObject* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode);
    float PauseAnimation(class UObject* InAnimation);
    uint8_t OnTouchStarted(uint8_t MyGeometry, uint8_t InTouchEvent);
    uint8_t OnTouchMoved(uint8_t MyGeometry, uint8_t InTouchEvent);
    uint8_t OnTouchGesture(uint8_t MyGeometry, uint8_t GestureEvent);
    uint8_t OnTouchEnded(uint8_t MyGeometry, uint8_t InTouchEvent);
    uint8_t OnPreviewMouseButtonDown(uint8_t MyGeometry, uint8_t MouseEvent);
    uint8_t OnPreviewKeyDown(uint8_t MyGeometry, uint8_t InKeyEvent);
    void OnPaint(uint8_t Context);
    uint8_t OnMouseWheel(uint8_t MyGeometry, uint8_t MouseEvent);
    uint8_t OnMouseMove(uint8_t MyGeometry, uint8_t MouseEvent);
    void OnMouseLeave(uint8_t MouseEvent);
    void OnMouseEnter(uint8_t MyGeometry, uint8_t MouseEvent);
    uint8_t OnMouseButtonUp(uint8_t MyGeometry, uint8_t MouseEvent);
    uint8_t OnMouseButtonDown(uint8_t MyGeometry, uint8_t MouseEvent);
    uint8_t OnMouseButtonDoubleClick(uint8_t InMyGeometry, uint8_t InMouseEvent);
    uint8_t OnMotionDetected(uint8_t MyGeometry, uint8_t InMotionEvent);
    uint8_t OnKeyUp(uint8_t MyGeometry, uint8_t InKeyEvent);
    uint8_t OnKeyDown(uint8_t MyGeometry, uint8_t InKeyEvent);
    uint8_t OnKeyChar(uint8_t MyGeometry, uint8_t InCharacterEvent);
    uint8_t OnFocusReceived(uint8_t MyGeometry, uint8_t InFocusEvent);
    void OnFocusLost(uint8_t InFocusEvent);
    bool OnDrop(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation);
    bool OnDragOver(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation);
    void OnDragLeave(uint8_t PointerEvent, class UObject* Operation);
    void OnDragEnter(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation);
    void OnDragDetected(uint8_t MyGeometry, uint8_t PointerEvent, class UObject* Operation);
    void OnDragCancelled(uint8_t PointerEvent, class UObject* Operation);
    uint8_t OnControllerButtonReleased(uint8_t MyGeometry, uint8_t ControllerEvent);
    uint8_t OnControllerButtonPressed(uint8_t MyGeometry, uint8_t ControllerEvent);
    uint8_t OnControllerAnalogValueChanged(uint8_t MyGeometry, uint8_t ControllerEvent);
    void OnAnimationStarted(class UObject* Animation);
    void OnAnimationFinished(class UObject* Animation);
    uint8_t OnAnalogValueChanged(uint8_t MyGeometry, uint8_t InAnalogInputEvent);
    void NewWeaponFinishedSpawning();
    void ListenForInputAction(struct FName ActionName, uint8_t eventType, bool bConsume, uint8_t Callback, bool bExecuteWhenPaused);
    bool IsTickEnabled();
    bool IsPlayingAnimation();
    bool IsListeningForInputAction(struct FName ActionName);
    bool IsInViewport();
    bool IsInteractable();
    bool IsAnimationPlaying(class UObject* InAnimation);
    class UObject* GetOwningPlayerPawn();
    class UObject* GetOwningPlayer();
    class UObject* GetOwningLocalPlayer();
    bool GetIsVisible();
    void FindWidgetsByName(struct FString WidgetName, struct TArray<uint8_t> OutWidgets);
    void Destruct();
    void Construct();
    void AddToViewport(int32_t ZOrder);
    bool AddToPlayerScreen(int32_t ZOrder);
};

// Class: UMG.BendWidgetComponent
class BendWidgetComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    uint8_t On2DPositionChanged[0x10]; // 0x05D0 (0x0010)
    uint8_t OnOffScreenChanged[0x10]; // 0x05E0 (0x0010)
    uint8_t OnAngleChanged[0x10]; // 0x05F0 (0x0010)
    bool bDelayInit; // 0x0600 (0x0001)
    uint8_t PooledWidgetType; // 0x0601 (0x0001)
    uint8_t Space; // 0x0602 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0603 (0x0001)
    uint8_t TimingPolicy; // 0x0604 (0x0001)
    uint8_t WorldOrientation; // 0x0605 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0606 (0x0002)
    bool bUseImageTexture; // 0x0608 (0x0001)
    uint8_t Pad_3[0x7]; // 0x0609 (0x0007)
    class UObject* ImageTexture; // 0x0610 (0x0008)
    class UClass* WidgetClass; // 0x0618 (0x0008)
    bool bSizeIsInScreenSpace; // 0x0620 (0x0001)
    uint8_t Pad_4[0x3]; // 0x0621 (0x0003)
    float ScreenScale; // 0x0624 (0x0004)
    uint8_t ScreenPixelOffset[0x8]; // 0x0628 (0x0008)
    bool bSizeFromWidget; // 0x0630 (0x0001)
    uint8_t Pad_5[0x3]; // 0x0631 (0x0003)
    uint8_t DrawSize[0x8]; // 0x0634 (0x0008)
    float DrawScale; // 0x063C (0x0004)
    bool bFarFade; // 0x0640 (0x0001)
    uint8_t Pad_6[0x3]; // 0x0641 (0x0003)
    float FarFadeStart; // 0x0644 (0x0004)
    float FarFadeEnd; // 0x0648 (0x0004)
    float Opacity; // 0x064C (0x0004)
    bool bStickToScreenEdge; // 0x0650 (0x0001)
    bool bDisableOcclusion; // 0x0651 (0x0001)
    bool bManuallyRedraw; // 0x0652 (0x0001)
    bool bRedrawRequested; // 0x0653 (0x0001)
    bool bForceRedrawRequested; // 0x0654 (0x0001)
    uint8_t Pad_7[0x3]; // 0x0655 (0x0003)
    float RedrawTime; // 0x0658 (0x0004)
    uint8_t Pad_8[0xC]; // 0x065C (0x000C)
    uint8_t Pivot[0x8]; // 0x0668 (0x0008)
    float MaxInteractionDistance; // 0x0670 (0x0004)
    uint8_t Pad_9[0x4]; // 0x0674 (0x0004)
    class UObject* OwnerPlayer; // 0x0678 (0x0008)
    uint8_t BackgroundColor[0x10]; // 0x0680 (0x0010)
    uint8_t BlendMode; // 0x0690 (0x0001)
    bool bIsOpaque; // 0x0691 (0x0001)
    bool bIsTwoSided; // 0x0692 (0x0001)
    bool TickWhenOffscreen; // 0x0693 (0x0001)
    uint8_t Pad_10[0x2C]; // 0x0694 (0x002C)
    class UObject* Widget; // 0x06C0 (0x0008)
    class UObject* TranslucentMaterial; // 0x06C8 (0x0008)
    class UObject* TranslucentMaterial_OneSided; // 0x06D0 (0x0008)
    class UObject* TranslucentMaterialPostAA; // 0x06D8 (0x0008)
    class UObject* TranslucentMaterialPostAA_OneSided; // 0x06E0 (0x0008)
    class UObject* OpaqueMaterial; // 0x06E8 (0x0008)
    class UObject* OpaqueMaterial_OneSided; // 0x06F0 (0x0008)
    class UObject* MaskedMaterial; // 0x06F8 (0x0008)
    class UObject* MaskedMaterial_OneSided; // 0x0700 (0x0008)
    class UObject* DitheredMaterial; // 0x0708 (0x0008)
    class UObject* DitheredMaterial_OneSided; // 0x0710 (0x0008)
    bool bUseCustomMaterial; // 0x0718 (0x0001)
    uint8_t Pad_11[0x7]; // 0x0719 (0x0007)
    class UObject* CustomMaterial; // 0x0720 (0x0008)
    class UObject* RenderTarget; // 0x0728 (0x0008)
    class UObject* MaterialInstanceDynamic; // 0x0730 (0x0008)
    bool bUseLegacyRotation; // 0x0738 (0x0001)
    bool bShouldOverrideComponentTick; // 0x0739 (0x0001)
    bool bComponentTickEnabled; // 0x073A (0x0001)
    uint8_t Pad_12[0x1]; // 0x073B (0x0001)
    bool bAddedToScreen; // 0x073C (0x0001)

public:
    void SetWidgetSpace(uint8_t NewSpace);
    void SetWidget(class UObject* Widget);
    void SetUseImageTexture(bool bEnabled);
    void SetStickToScreenEdge(bool Enabled);
    void SetScreenScale(float InScale);
    void SetOwnerPlayer(class UObject* LocalPlayer);
    void SetOpacity(float Opacity);
    void SetMaxInteractionDistance(float Distance);
    void SetImageTexture(class UObject* Texture);
    void SetFarFade(bool Enabled, float StartDistance, float EndDistance);
    void SetDrawSize(uint8_t Size);
    void SetDrawScale(float Scale);
    void SetDisableOcclusion(bool bDisabled);
    void SetComponentTickOverride(bool ShouldOverrideComponentTick, bool Enabled);
    void ReturnPooledWidget();
    void RequestRedraw();
    class UObject* GetUserWidgetObject();
    void GetPooledWidget();
    class UObject* GetOwnerPlayer(class UObject* World);
    float GetMaxInteractionDistance();
    class UObject* GetMaterialInstanceDynamic();
    uint8_t GetDrawSize();
    void ForceRequestRedraw();
};

// Class: UMG.PanelWidget
class PanelWidget : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    struct TArray<uint8_t> Slots; // 0x0118 (0x0010)

public:
    bool RemoveChildAt(int32_t Index);
    bool RemoveChild(class UObject* Content);
    bool HasChild(class UObject* Content);
    bool HasAnyChildren();
    int32_t GetChildrenCount();
    int32_t GetChildIndex(class UObject* Content);
    class UObject* GetChildAt(int32_t Index);
    void ClearChildren();
    class UObject* AddChild(class UObject* Content);
};

// Class: UMG.GridPanel
class GridPanel : public PanelWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    struct TArray<uint8_t> ColumnFill; // 0x0130 (0x0010)
    struct TArray<uint8_t> RowFill; // 0x0140 (0x0010)

public:
    class UObject* AddChildToGrid(class UObject* Content);
};

// Class: UMG.ContentWidget
class ContentWidget : public PanelWidget {
public:

public:
    class UObject* GetContentSlot();
};

// Class: UMG.PanelSlot
class PanelSlot : public Visual {
public:
    class UObject* Parent; // 0x0028 (0x0008)
    class UObject* Content; // 0x0030 (0x0008)
};

// Class: UMG.AsyncTaskDownloadImage
class AsyncTaskDownloadImage : public BlueprintAsyncActionBase {
public:
    uint8_t OnSuccess[0x10]; // 0x0028 (0x0010)
    uint8_t OnFail[0x10]; // 0x0038 (0x0010)

public:
    class UObject* DownloadImage(struct FString URL);
};

// Class: UMG.DragDropOperation
class DragDropOperation : public Object {
public:
    struct FString Tag; // 0x0028 (0x0010)
    class UObject* Payload; // 0x0038 (0x0008)
    class UObject* DefaultDragVisual; // 0x0040 (0x0008)
    uint8_t Pivot; // 0x0048 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0049 (0x0003)
    uint8_t Offset[0x8]; // 0x004C (0x0008)
    uint8_t Pad_1[0x4]; // 0x0054 (0x0004)
    uint8_t OnDrop[0x10]; // 0x0058 (0x0010)
    uint8_t OnDragCancelled[0x10]; // 0x0068 (0x0010)
    uint8_t OnDragged[0x10]; // 0x0078 (0x0010)

public:
    void Drop(uint8_t PointerEvent);
    void Dragged(uint8_t PointerEvent);
    void DragCancelled(uint8_t PointerEvent);
};

// Class: UMG.MovieScene2DTransformSection
class MovieScene2DTransformSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t Translation[0x78]; // 0x0048 (0x0078)
    uint8_t Pad_1[0x78]; // 0x00C0 (0x0078)
    uint8_t Rotation[0x78]; // 0x0138 (0x0078)
    uint8_t Scale[0x78]; // 0x01B0 (0x0078)
    uint8_t Pad_2[0x78]; // 0x0228 (0x0078)
    uint8_t Shear[0x78]; // 0x02A0 (0x0078)
};

// Class: UMG.MovieScene2DTransformTrack
class MovieScene2DTransformTrack : public MovieScenePropertyTrack {
public:
};

// Class: UMG.MovieSceneMarginSection
class MovieSceneMarginSection : public MovieSceneSection {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    uint8_t TopCurve[0x78]; // 0x0048 (0x0078)
    uint8_t LeftCurve[0x78]; // 0x00C0 (0x0078)
    uint8_t RightCurve[0x78]; // 0x0138 (0x0078)
    uint8_t BottomCurve[0x78]; // 0x01B0 (0x0078)
};

// Class: UMG.MovieSceneMarginTrack
class MovieSceneMarginTrack : public MovieScenePropertyTrack {
public:
};

// Class: UMG.NamedSlotInterface
class NamedSlotInterface : public Interface {
public:
};

// Class: UMG.PropertyBinding
class PropertyBinding : public Object {
public:
    uint64_t SourceObject; // 0x0028 (0x0008)
    uint8_t SourcePath[0x10]; // 0x0030 (0x0010)
    struct FName DestinationProperty; // 0x0040 (0x0008)
};

// Class: UMG.BoolBinding
class BoolBinding : public PropertyBinding {
public:

public:
    bool GetValue();
};

// Class: UMG.BrushBinding
class BrushBinding : public PropertyBinding {
public:

public:
    uint8_t GetValue();
};

// Class: UMG.CheckedStateBinding
class CheckedStateBinding : public PropertyBinding {
public:

public:
    uint8_t GetValue();
};

// Class: UMG.ColorBinding
class ColorBinding : public PropertyBinding {
public:

public:
    uint8_t GetSlateValue();
    uint8_t GetLinearValue();
};

// Class: UMG.FloatBinding
class FloatBinding : public PropertyBinding {
public:

public:
    float GetValue();
};

// Class: UMG.Int32Binding
class Int32Binding : public PropertyBinding {
public:

public:
    int32_t GetValue();
};

// Class: UMG.MouseCursorBinding
class MouseCursorBinding : public PropertyBinding {
public:

public:
    uint8_t GetValue();
};

// Class: UMG.TextBinding
class TextBinding : public PropertyBinding {
public:

public:
    struct FText GetTextValue();
    struct FString GetStringValue();
};

// Class: UMG.VisibilityBinding
class VisibilityBinding : public PropertyBinding {
public:

public:
    uint8_t GetValue();
};

// Class: UMG.WidgetBinding
class WidgetBinding : public PropertyBinding {
public:

public:
    class UObject* GetValue();
};

// Class: UMG.RichTextBlockDecorator
class RichTextBlockDecorator : public Object {
public:
    bool bReveal; // 0x0028 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0029 (0x0003)
    int32_t RevealedIndex; // 0x002C (0x0004)
};

// Class: UMG.SlateBlueprintLibrary
class SlateBlueprintLibrary : public BlueprintFunctionLibrary {
public:

public:
    void LocalToViewport(class UObject* WorldContextObject, uint8_t Geometry, uint8_t LocalCoordinate, uint8_t PixelPosition, uint8_t ViewportPosition);
    uint8_t LocalToAbsolute(uint8_t Geometry, uint8_t LocalCoordinate);
    bool IsUnderLocation(uint8_t Geometry, uint8_t AbsoluteCoordinate);
    uint8_t GetLocalSize(uint8_t Geometry);
    void AbsoluteToViewport(class UObject* WorldContextObject, uint8_t AbsoluteDesktopCoordinate, uint8_t PixelPosition, uint8_t ViewportPosition);
    uint8_t AbsoluteToLocal(uint8_t Geometry, uint8_t AbsoluteCoordinate);
};

// Class: UMG.SlateDataSheet
class SlateDataSheet : public Object {
public:
    class UObject* DataTexture; // 0x0028 (0x0008)
};

// Class: UMG.SlateVectorArtData
class SlateVectorArtData : public Object {
public:
    struct TArray<uint8_t> VertexData; // 0x0028 (0x0010)
    struct TArray<uint8_t> IndexData; // 0x0038 (0x0010)
    class UObject* Material; // 0x0048 (0x0008)
    uint8_t ExtentMin[0x8]; // 0x0050 (0x0008)
    uint8_t ExtentMax[0x8]; // 0x0058 (0x0008)
};

// Class: UMG.UMGSequencePlayer
class UMGSequencePlayer : public Object {
public:
    uint8_t Pad_0[0x20]; // 0x0028 (0x0020)
    class UObject* Animation; // 0x0048 (0x0008)
};

// Class: UMG.BorderSlot
class BorderSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)
    uint8_t VerticalAlignment; // 0x0049 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.ButtonSlot
class ButtonSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)
    uint8_t VerticalAlignment; // 0x0049 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.CanvasPanelSlot
class CanvasPanelSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t LayoutData[0x28]; // 0x0038 (0x0028)
    bool bAutoSize; // 0x0060 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0061 (0x0003)
    int32_t ZOrder; // 0x0064 (0x0004)

public:
    void SetZOrder(int32_t InZOrder);
    void SetSize(uint8_t InSize);
    void SetPosition(uint8_t InPosition);
    void SetOffsets(uint8_t InOffset);
    void SetMinimum(uint8_t InMinimumAnchors);
    void SetMaximum(uint8_t InMaximumAnchors);
    void SetLayout(uint8_t InLayoutData);
    void SetAutoSize(bool InbAutoSize);
    void SetAnchors(uint8_t InAnchors);
    void SetAlignment(uint8_t InAlignment);
    int32_t GetZOrder();
    uint8_t GetSize();
    uint8_t GetPosition();
    uint8_t GetOffsets();
    uint8_t GetLayout();
    bool GetAutoSize();
    uint8_t GetAnchors();
    uint8_t GetAlignment();
};

// Class: UMG.GridSlot
class GridSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t HorizontalAlignment; // 0x0038 (0x0001)
    uint8_t VerticalAlignment; // 0x0039 (0x0001)
    uint8_t Pad_1[0x2]; // 0x003A (0x0002)
    int32_t Row; // 0x003C (0x0004)
    int32_t RowSpan; // 0x0040 (0x0004)
    int32_t Column; // 0x0044 (0x0004)
    int32_t ColumnSpan; // 0x0048 (0x0004)
    int32_t Layer; // 0x004C (0x0004)
    uint8_t Nudge[0x8]; // 0x0050 (0x0008)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetRowSpan(int32_t InRowSpan);
    void SetRow(int32_t InRow);
    void SetLayer(int32_t InLayer);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
    void SetColumnSpan(int32_t InColumnSpan);
    void SetColumn(int32_t InColumn);
};

// Class: UMG.HorizontalBoxSlot
class HorizontalBoxSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t Size[0x8]; // 0x0048 (0x0008)
    uint8_t HorizontalAlignment; // 0x0050 (0x0001)
    uint8_t VerticalAlignment; // 0x0051 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetSize(uint8_t InSize);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.OverlaySlot
class OverlaySlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)
    uint8_t VerticalAlignment; // 0x0049 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.SafeZoneSlot
class SafeZoneSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    bool bIsTitleSafe; // 0x0038 (0x0001)
    uint8_t HAlign; // 0x0039 (0x0001)
    uint8_t VAlign; // 0x003A (0x0001)
    uint8_t Pad_1[0x1]; // 0x003B (0x0001)
    uint8_t Padding[0x10]; // 0x003C (0x0010)
};

// Class: UMG.ScaleBoxSlot
class ScaleBoxSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)
    uint8_t VerticalAlignment; // 0x0049 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.ScrollBoxSlot
class ScrollBoxSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)

public:
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.SizeBoxSlot
class SizeBoxSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)
    uint8_t VerticalAlignment; // 0x0049 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.UniformGridSlot
class UniformGridSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t HorizontalAlignment; // 0x0038 (0x0001)
    uint8_t VerticalAlignment; // 0x0039 (0x0001)
    uint8_t Pad_1[0x2]; // 0x003A (0x0002)
    int32_t Row; // 0x003C (0x0004)
    int32_t Column; // 0x0040 (0x0004)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetRow(int32_t InRow);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
    void SetColumn(int32_t InColumn);
};

// Class: UMG.VerticalBoxSlot
class VerticalBoxSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t Size[0x8]; // 0x0048 (0x0008)
    uint8_t HorizontalAlignment; // 0x0050 (0x0001)
    uint8_t VerticalAlignment; // 0x0051 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetSize(uint8_t InSize);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.WidgetSwitcherSlot
class WidgetSwitcherSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    uint8_t HorizontalAlignment; // 0x0048 (0x0001)
    uint8_t VerticalAlignment; // 0x0049 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Class: UMG.WrapBoxSlot
class WrapBoxSlot : public PanelSlot {
public:
    uint8_t Pad_0[0x10]; // 0x0028 (0x0010)
    uint8_t Padding[0x10]; // 0x0038 (0x0010)
    bool bFillEmptySpace; // 0x0048 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0049 (0x0003)
    float FillSpanWhenLessThan; // 0x004C (0x0004)
    uint8_t HorizontalAlignment; // 0x0050 (0x0001)
    uint8_t VerticalAlignment; // 0x0051 (0x0001)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Class: UMG.CircularThrobber
class CircularThrobber : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    int32_t NumberOfPieces; // 0x0118 (0x0004)
    float Period; // 0x011C (0x0004)
    float Radius; // 0x0120 (0x0004)
    uint8_t Pad_1[0x4]; // 0x0124 (0x0004)
    class UObject* PieceImage; // 0x0128 (0x0008)
    uint8_t Image[0x90]; // 0x0130 (0x0090)

public:
    void SetRadius(float InRadius);
    void SetPeriod(float InPeriod);
    void SetNumberOfPieces(int32_t InNumberOfPieces);
};

// Class: UMG.ComboBox
class ComboBox : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    struct TArray<uint8_t> Items; // 0x0118 (0x0010)
    uint8_t OnGenerateWidgetEvent[0x10]; // 0x0128 (0x0010)
};

// Class: UMG.ComboBoxString
class ComboBoxString : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    struct TArray<uint8_t> DefaultOptions; // 0x0118 (0x0010)
    struct FString SelectedOption; // 0x0128 (0x0010)
    uint8_t WidgetStyle[0x428]; // 0x0138 (0x0428)
    uint8_t ContentPadding[0x10]; // 0x0560 (0x0010)
    float MaxListHeight; // 0x0570 (0x0004)
    bool HasDownArrow; // 0x0574 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0575 (0x0003)
    uint8_t OnGenerateWidgetEvent[0x10]; // 0x0578 (0x0010)
    uint8_t OnSelectionChanged[0x10]; // 0x0588 (0x0010)
    uint8_t OnOpening[0x10]; // 0x0598 (0x0010)

public:
    void SetSelectedOption(struct FString Option);
    bool RemoveOption(struct FString Option);
    void RefreshOptions();
    void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, uint8_t SelectionType);
    void OnOpeningEvent__DelegateSignature();
    struct FString GetSelectedOption();
    int32_t GetOptionCount();
    struct FString GetOptionAtIndex(int32_t Index);
    int32_t FindOptionIndex(struct FString Option);
    void ClearSelection();
    void ClearOptions();
    void AddOption(struct FString Option);
};

// Class: UMG.EditableText
class EditableText : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    struct FText Text; // 0x0118 (0x0018)
    uint8_t TextDelegate[0x10]; // 0x0130 (0x0010)
    struct FText HintText; // 0x0140 (0x0018)
    uint8_t HintTextDelegate[0x10]; // 0x0158 (0x0010)
    uint8_t WidgetStyle[0x220]; // 0x0168 (0x0220)
    class UObject* Style; // 0x0388 (0x0008)
    class UObject* BackgroundImageSelected; // 0x0390 (0x0008)
    class UObject* BackgroundImageComposing; // 0x0398 (0x0008)
    class UObject* CaretImage; // 0x03A0 (0x0008)
    uint8_t Font[0x40]; // 0x03A8 (0x0040)
    uint8_t ColorAndOpacity[0x28]; // 0x03E8 (0x0028)
    bool IsReadOnly; // 0x0410 (0x0001)
    bool IsPassword; // 0x0411 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0412 (0x0002)
    float MinimumDesiredWidth; // 0x0414 (0x0004)
    bool IsCaretMovedWhenGainFocus; // 0x0418 (0x0001)
    bool SelectAllTextWhenFocused; // 0x0419 (0x0001)
    bool RevertTextOnEscape; // 0x041A (0x0001)
    bool ClearKeyboardFocusOnCommit; // 0x041B (0x0001)
    bool SelectAllTextOnCommit; // 0x041C (0x0001)
    bool AllowContextMenu; // 0x041D (0x0001)
    uint8_t KeyboardType; // 0x041E (0x0001)
    uint8_t Pad_2[0x1]; // 0x041F (0x0001)
    uint8_t OnTextChanged[0x10]; // 0x0420 (0x0010)
    uint8_t OnTextCommitted[0x10]; // 0x0430 (0x0010)

public:
    void SetText(struct FText InText);
    void SetIsReadOnly(bool InbIsReadyOnly);
    void SetIsPassword(bool InbIsPassword);
    void SetHintText(struct FText InHintText);
    void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod);
    void OnEditableTextChangedEvent__DelegateSignature(struct FText Text);
    struct FText GetText();
};

// Class: UMG.EditableTextBox
class EditableTextBox : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    struct FText Text; // 0x0118 (0x0018)
    uint8_t TextDelegate[0x10]; // 0x0130 (0x0010)
    uint8_t WidgetStyle[0x848]; // 0x0140 (0x0848)
    class UObject* Style; // 0x0988 (0x0008)
    struct FText HintText; // 0x0990 (0x0018)
    uint8_t HintTextDelegate[0x10]; // 0x09A8 (0x0010)
    uint8_t Font[0x40]; // 0x09B8 (0x0040)
    uint8_t ForegroundColor[0x10]; // 0x09F8 (0x0010)
    uint8_t BackgroundColor[0x10]; // 0x0A08 (0x0010)
    uint8_t ReadOnlyForegroundColor[0x10]; // 0x0A18 (0x0010)
    bool IsReadOnly; // 0x0A28 (0x0001)
    bool IsPassword; // 0x0A29 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0A2A (0x0002)
    float MinimumDesiredWidth; // 0x0A2C (0x0004)
    uint8_t Padding[0x10]; // 0x0A30 (0x0010)
    bool IsCaretMovedWhenGainFocus; // 0x0A40 (0x0001)
    bool SelectAllTextWhenFocused; // 0x0A41 (0x0001)
    bool RevertTextOnEscape; // 0x0A42 (0x0001)
    bool ClearKeyboardFocusOnCommit; // 0x0A43 (0x0001)
    bool SelectAllTextOnCommit; // 0x0A44 (0x0001)
    bool AllowContextMenu; // 0x0A45 (0x0001)
    uint8_t KeyboardType; // 0x0A46 (0x0001)
    uint8_t Pad_2[0x1]; // 0x0A47 (0x0001)
    uint8_t OnTextChanged[0x10]; // 0x0A48 (0x0010)
    uint8_t OnTextCommitted[0x10]; // 0x0A58 (0x0010)

public:
    void SetText(struct FText InText);
    void SetError(struct FText InError);
    void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod);
    void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text);
    struct FText GetText();
    void ClearError();
};

// Class: UMG.ExpandableArea
class ExpandableArea : public Widget {
public:
    uint8_t Pad_0[0xF8]; // 0x0028 (0x00F8)
    uint8_t Style[0x128]; // 0x0120 (0x0128)
    uint8_t BorderBrush[0x90]; // 0x0248 (0x0090)
    uint8_t BorderColor[0x28]; // 0x02D8 (0x0028)
    bool bIsExpanded; // 0x0300 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0301 (0x0003)
    float MaxHeight; // 0x0304 (0x0004)
    uint8_t HeaderPadding[0x10]; // 0x0308 (0x0010)
    uint8_t AreaPadding[0x10]; // 0x0318 (0x0010)
    uint8_t OnExpansionChanged[0x10]; // 0x0328 (0x0010)
    class UObject* HeaderContent; // 0x0338 (0x0008)
    class UObject* BodyContent; // 0x0340 (0x0008)

public:
    void SetIsExpanded(bool IsExpanded);
    bool GetIsExpanded();
};

// Class: UMG.Image
class Image : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    class UObject* Image; // 0x0118 (0x0008)
    uint8_t Brush[0x90]; // 0x0120 (0x0090)
    uint8_t BrushDelegate[0x10]; // 0x01B0 (0x0010)
    uint8_t ColorAndOpacity[0x10]; // 0x01C0 (0x0010)
    uint8_t ColorAndOpacityDelegate[0x10]; // 0x01D0 (0x0010)
    uint8_t OnMouseButtonDownEvent[0x10]; // 0x01E0 (0x0010)

public:
    void SetOpacity(float InOpacity);
    void SetColorAndOpacity(uint8_t InColorAndOpacity);
    void SetBrushFromTexture(class UObject* Texture, bool bMatchSize);
    void SetBrushFromMaterial(class UObject* Material);
    void SetBrushFromAsset(class UObject* Asset);
    void SetBrush(uint8_t InBrush);
    class UObject* GetDynamicMaterial();
};

// Class: UMG.NativeWidgetHost
class NativeWidgetHost : public Widget {
public:
};

// Class: UMG.CanvasPanel
class CanvasPanel : public PanelWidget {
public:

public:
    class UObject* AddChildToCanvas(class UObject* Content);
};

// Class: UMG.Border
class Border : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t ContentColorAndOpacity[0x10]; // 0x0130 (0x0010)
    uint8_t ContentColorAndOpacityDelegate[0x10]; // 0x0140 (0x0010)
    uint8_t Padding[0x10]; // 0x0150 (0x0010)
    uint8_t HorizontalAlignment; // 0x0160 (0x0001)
    uint8_t VerticalAlignment; // 0x0161 (0x0001)
    uint8_t Pad_1[0x6]; // 0x0162 (0x0006)
    uint8_t Background[0x90]; // 0x0168 (0x0090)
    uint8_t BackgroundDelegate[0x10]; // 0x01F8 (0x0010)
    uint8_t BrushColor[0x10]; // 0x0208 (0x0010)
    uint8_t BrushColorDelegate[0x10]; // 0x0218 (0x0010)
    bool bShowEffectWhenDisabled; // 0x0228 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0229 (0x0007)
    uint8_t OnMouseButtonDownEvent[0x10]; // 0x0230 (0x0010)
    uint8_t OnMouseButtonUpEvent[0x10]; // 0x0240 (0x0010)
    uint8_t OnMouseMoveEvent[0x10]; // 0x0250 (0x0010)
    uint8_t OnMouseDoubleClickEvent[0x10]; // 0x0260 (0x0010)
    uint8_t Pad_3[0x10]; // 0x0270 (0x0010)
    class UObject* Brush; // 0x0280 (0x0008)

public:
    void SetVerticalAlignment(uint8_t InVerticalAlignment);
    void SetPadding(uint8_t InPadding);
    void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
    void SetContentOpacity(float InAlpha, uint8_t HiddenVisibility);
    void SetContentColorAndOpacity(uint8_t InContentColorAndOpacity);
    void SetBrushFromTexture(class UObject* Texture);
    void SetBrushFromMaterial(class UObject* Material);
    void SetBrushFromAsset(class UObject* Asset);
    void SetBrushColor(uint8_t InBrushColor);
    void SetBrush(uint8_t InBrush);
    class UObject* GetDynamicMaterial();
};

// Class: UMG.Button
class Button : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    class UObject* Style; // 0x0130 (0x0008)
    uint8_t WidgetStyle[0x2A8]; // 0x0138 (0x02A8)
    uint8_t ColorAndOpacity[0x10]; // 0x03E0 (0x0010)
    uint8_t BackgroundColor[0x10]; // 0x03F0 (0x0010)
    uint8_t ClickMethod; // 0x0400 (0x0001)
    uint8_t TouchMethod; // 0x0401 (0x0001)
    bool IsFocusable; // 0x0402 (0x0001)
    uint8_t Pad_1[0x5]; // 0x0403 (0x0005)
    uint8_t OnClicked[0x10]; // 0x0408 (0x0010)
    uint8_t OnPressed[0x10]; // 0x0418 (0x0010)
    uint8_t OnReleased[0x10]; // 0x0428 (0x0010)
    uint8_t OnHovered[0x10]; // 0x0438 (0x0010)
    uint8_t OnUnhovered[0x10]; // 0x0448 (0x0010)

public:
    void SetStyle(uint8_t InStyle);
    void SetColorAndOpacity(uint8_t InColorAndOpacity);
    void SetBackgroundColor(uint8_t InBackgroundColor);
    bool IsPressed();
};

// Class: UMG.CheckBox
class CheckBox : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t CheckedState; // 0x0130 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0131 (0x0007)
    uint8_t CheckedStateDelegate[0x10]; // 0x0138 (0x0010)
    uint8_t WidgetStyle[0x5E0]; // 0x0148 (0x05E0)
    class UObject* Style; // 0x0728 (0x0008)
    class UObject* UncheckedImage; // 0x0730 (0x0008)
    class UObject* UncheckedHoveredImage; // 0x0738 (0x0008)
    class UObject* UncheckedPressedImage; // 0x0740 (0x0008)
    class UObject* CheckedImage; // 0x0748 (0x0008)
    class UObject* CheckedHoveredImage; // 0x0750 (0x0008)
    class UObject* CheckedPressedImage; // 0x0758 (0x0008)
    class UObject* UndeterminedImage; // 0x0760 (0x0008)
    class UObject* UndeterminedHoveredImage; // 0x0768 (0x0008)
    class UObject* UndeterminedPressedImage; // 0x0770 (0x0008)
    uint8_t HorizontalAlignment; // 0x0778 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0779 (0x0003)
    uint8_t Padding[0x10]; // 0x077C (0x0010)
    uint8_t Pad_3[0x4]; // 0x078C (0x0004)
    uint8_t BorderBackgroundColor[0x28]; // 0x0790 (0x0028)
    uint8_t OnCheckStateChanged[0x10]; // 0x07B8 (0x0010)

public:
    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(uint8_t InCheckedState);
    bool IsPressed();
    bool IsChecked();
    uint8_t GetCheckedState();
};

// Class: UMG.InvalidationBox
class InvalidationBox : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    bool bCanCache; // 0x0130 (0x0001)
    bool CacheRelativeTransforms; // 0x0131 (0x0001)

public:
    void SetCanCache(bool CanCache);
    void InvalidateCache();
    bool GetCanCache();
};

// Class: UMG.MenuAnchor
class MenuAnchor : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    class UClass* MenuClass; // 0x0130 (0x0008)
    uint8_t OnGetMenuContentEvent[0x10]; // 0x0138 (0x0010)
    uint8_t Placement; // 0x0148 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0149 (0x0007)
    uint8_t OnMenuOpenChanged[0x10]; // 0x0150 (0x0010)

public:
    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    uint8_t GetMenuPosition();
    void Close();
};

// Class: UMG.NamedSlot
class NamedSlot : public ContentWidget {
public:
};

// Class: UMG.RetainerBox
class RetainerBox : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    int32_t Phase; // 0x0130 (0x0004)
    int32_t PhaseCount; // 0x0134 (0x0004)
    class UObject* EffectMaterial; // 0x0138 (0x0008)
    struct FName TextureParameter; // 0x0140 (0x0008)
    bool bPreMultipliedAlpha; // 0x0148 (0x0001)

public:
    void SetTextureParameter(struct FName TextureParameter);
    void SetEffectMaterial(class UObject* EffectMaterial);
    class UObject* GetEffectMaterial();
};

// Class: UMG.SafeZone
class SafeZone : public ContentWidget {
public:
};

// Class: UMG.ScaleBox
class ScaleBox : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t StretchDirection; // 0x0130 (0x0001)
    uint8_t Stretch; // 0x0131 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0132 (0x0002)
    float UserSpecifiedScale; // 0x0134 (0x0004)
    bool IgnoreInheritedScale; // 0x0138 (0x0001)
};

// Class: UMG.SizeBox
class SizeBox : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    bool bOverride_WidthOverride; // 0x0130 (0x0001)
    bool bOverride_HeightOverride; // 0x0130 (0x0001)
    bool bOverride_MinDesiredWidth; // 0x0130 (0x0001)
    bool bOverride_MinDesiredHeight; // 0x0130 (0x0001)
    bool bOverride_MaxDesiredWidth; // 0x0130 (0x0001)
    bool bOverride_MaxDesiredHeight; // 0x0130 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0131 (0x0003)
    float WidthOverride; // 0x0134 (0x0004)
    float HeightOverride; // 0x0138 (0x0004)
    float MinDesiredWidth; // 0x013C (0x0004)
    float MinDesiredHeight; // 0x0140 (0x0004)
    float MaxDesiredWidth; // 0x0144 (0x0004)
    float MaxDesiredHeight; // 0x0148 (0x0004)

public:
    void SetWidthOverride(float InWidthOverride);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetMinDesiredHeight(float InMinDesiredHeight);
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    void SetHeightOverride(float InHeightOverride);
    void ClearWidthOverride();
    void ClearMinDesiredWidth();
    void ClearMinDesiredHeight();
    void ClearMaxDesiredWidth();
    void ClearMaxDesiredHeight();
    void ClearHeightOverride();
};

// Class: UMG.Viewport
class Viewport : public ContentWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t BackgroundColor[0x10]; // 0x0130 (0x0010)

public:
    class UObject* Spawn(class UClass* ActorClass);
    void SetViewRotation(uint8_t Rotation);
    void SetViewLocation(uint8_t Location);
    uint8_t GetViewRotation();
    class UObject* GetViewportWorld();
    uint8_t GetViewLocation();
};

// Class: UMG.HorizontalBox
class HorizontalBox : public PanelWidget {
public:

public:
    class UObject* AddChildToHorizontalBox(class UObject* Content);
};

// Class: UMG.Overlay
class Overlay : public PanelWidget {
public:

public:
    class UObject* AddChildToOverlay(class UObject* Content);
};

// Class: UMG.ScrollBox
class ScrollBox : public PanelWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t WidgetStyle[0x248]; // 0x0130 (0x0248)
    uint8_t WidgetBarStyle[0x518]; // 0x0378 (0x0518)
    class UObject* Style; // 0x0890 (0x0008)
    class UObject* BarStyle; // 0x0898 (0x0008)
    uint8_t Orientation; // 0x08A0 (0x0001)
    uint8_t ScrollBarVisibility; // 0x08A1 (0x0001)
    uint8_t ConsumeMouseWheel; // 0x08A2 (0x0001)
    uint8_t Pad_1[0x1]; // 0x08A3 (0x0001)
    uint8_t ScrollbarThickness[0x8]; // 0x08A4 (0x0008)
    bool AlwaysShowScrollbar; // 0x08AC (0x0001)

public:
    void SetScrollOffset(float NewScrollOffset);
    void ScrollWidgetIntoView(class UObject* WidgetToFind, bool AnimateScroll);
    void ScrollToStart();
    void ScrollToEnd();
    float GetScrollOffset();
};

// Class: UMG.UniformGridPanel
class UniformGridPanel : public PanelWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t SlotPadding[0x10]; // 0x0130 (0x0010)
    float MinDesiredSlotWidth; // 0x0140 (0x0004)
    float MinDesiredSlotHeight; // 0x0144 (0x0004)

public:
    void SetSlotPadding(uint8_t InSlotPadding);
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    class UObject* AddChildToUniformGrid(class UObject* Content);
};

// Class: UMG.VerticalBox
class VerticalBox : public PanelWidget {
public:

public:
    class UObject* AddChildToVerticalBox(class UObject* Content);
};

// Class: UMG.WidgetSwitcher
class WidgetSwitcher : public PanelWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    int32_t ActiveWidgetIndex; // 0x0130 (0x0004)

public:
    void SetActiveWidgetIndex(int32_t Index);
    void SetActiveWidget(class UObject* Widget);
    class UObject* GetWidgetAtIndex(int32_t Index);
    int32_t GetNumWidgets();
    int32_t GetActiveWidgetIndex();
};

// Class: UMG.WrapBox
class WrapBox : public PanelWidget {
public:
    uint8_t Pad_0[0x108]; // 0x0028 (0x0108)
    uint8_t InnerSlotPadding[0x8]; // 0x0130 (0x0008)

public:
    void SetInnerSlotPadding(uint8_t InPadding);
    class UObject* AddChildWrapBox(class UObject* Content);
};

// Class: UMG.ProgressBar
class ProgressBar : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    uint8_t WidgetStyle[0x1B8]; // 0x0118 (0x01B8)
    class UObject* Style; // 0x02D0 (0x0008)
    class UObject* BackgroundImage; // 0x02D8 (0x0008)
    class UObject* FillImage; // 0x02E0 (0x0008)
    class UObject* MarqueeImage; // 0x02E8 (0x0008)
    float Percent; // 0x02F0 (0x0004)
    uint8_t BarFillType; // 0x02F4 (0x0001)
    bool bIsMarquee; // 0x02F5 (0x0001)
    uint8_t Pad_1[0x2]; // 0x02F6 (0x0002)
    uint8_t PercentDelegate[0x10]; // 0x02F8 (0x0010)
    uint8_t FillColorAndOpacity[0x10]; // 0x0308 (0x0010)
    uint8_t FillColorAndOpacityDelegate[0x10]; // 0x0318 (0x0010)

public:
    void SetPercent(float InPercent);
    void SetIsMarquee(bool InbIsMarquee);
    void SetFillColorAndOpacity(uint8_t InColor);
    void SetBarFillType(uint8_t Type);
};

// Class: UMG.ScrollBar
class ScrollBar : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    uint8_t WidgetStyle[0x518]; // 0x0118 (0x0518)
    class UObject* Style; // 0x0630 (0x0008)
    bool bAlwaysShowScrollbar; // 0x0638 (0x0001)
    uint8_t Orientation; // 0x0639 (0x0001)
    uint8_t Pad_1[0x2]; // 0x063A (0x0002)
    uint8_t Thickness[0x8]; // 0x063C (0x0008)

public:
    void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class: UMG.Slider
class Slider : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    float Value; // 0x0118 (0x0004)
    uint8_t Pad_1[0x4]; // 0x011C (0x0004)
    uint8_t ValueDelegate[0x10]; // 0x0120 (0x0010)
    uint8_t WidgetStyle[0x248]; // 0x0130 (0x0248)
    uint8_t Orientation; // 0x0378 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0379 (0x0003)
    uint8_t SliderBarColor[0x10]; // 0x037C (0x0010)
    uint8_t SliderHandleColor[0x10]; // 0x038C (0x0010)
    bool IndentHandle; // 0x039C (0x0001)
    bool Locked; // 0x039D (0x0001)
    uint8_t Pad_3[0x2]; // 0x039E (0x0002)
    float StepSize; // 0x03A0 (0x0004)
    uint8_t Pad_4[0x4]; // 0x03A4 (0x0004)
    uint8_t OnMouseCaptureBegin[0x10]; // 0x03A8 (0x0010)
    uint8_t OnMouseCaptureEnd[0x10]; // 0x03B8 (0x0010)
    uint8_t OnControllerCaptureBegin[0x10]; // 0x03C8 (0x0010)
    uint8_t OnControllerCaptureEnd[0x10]; // 0x03D8 (0x0010)
    uint8_t OnValueChanged[0x10]; // 0x03E8 (0x0010)

public:
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(uint8_t InValue);
    void SetSliderBarColor(uint8_t InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    float GetValue();
};

// Class: UMG.Spacer
class Spacer : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    uint8_t Size[0x8]; // 0x0118 (0x0008)

public:
    void SetSize(uint8_t InSize);
};

// Class: UMG.SpinBox
class SpinBox : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    float Value; // 0x0118 (0x0004)
    uint8_t Pad_1[0x4]; // 0x011C (0x0004)
    uint8_t ValueDelegate[0x10]; // 0x0120 (0x0010)
    uint8_t WidgetStyle[0x310]; // 0x0130 (0x0310)
    class UObject* Style; // 0x0440 (0x0008)
    float Delta; // 0x0448 (0x0004)
    float SliderExponent; // 0x044C (0x0004)
    uint8_t Font[0x40]; // 0x0450 (0x0040)
    float MinDesiredWidth; // 0x0490 (0x0004)
    bool ClearKeyboardFocusOnCommit; // 0x0494 (0x0001)
    bool SelectAllTextOnCommit; // 0x0495 (0x0001)
    uint8_t Pad_2[0x2]; // 0x0496 (0x0002)
    uint8_t ForegroundColor[0x28]; // 0x0498 (0x0028)
    uint8_t OnValueChanged[0x10]; // 0x04C0 (0x0010)
    uint8_t OnValueCommitted[0x10]; // 0x04D0 (0x0010)
    uint8_t OnBeginSliderMovement[0x10]; // 0x04E0 (0x0010)
    uint8_t OnEndSliderMovement[0x10]; // 0x04F0 (0x0010)
    bool bOverride_MinValue; // 0x0500 (0x0001)
    bool bOverride_MaxValue; // 0x0500 (0x0001)
    bool bOverride_MinSliderValue; // 0x0500 (0x0001)
    bool bOverride_MaxSliderValue; // 0x0500 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0501 (0x0003)
    float MinValue; // 0x0504 (0x0004)
    float MaxValue; // 0x0508 (0x0004)
    float MinSliderValue; // 0x050C (0x0004)
    float MaxSliderValue; // 0x0510 (0x0004)

public:
    void SetValue(float NewValue);
    void SetMinValue(float NewValue);
    void SetMinSliderValue(float NewValue);
    void SetMaxValue(float NewValue);
    void SetMaxSliderValue(float NewValue);
    void SetForegroundColor(uint8_t InForegroundColor);
    void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, uint8_t CommitMethod);
    void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void OnSpinBoxBeginSliderMovement__DelegateSignature();
    float GetValue();
    float GetMinValue();
    float GetMinSliderValue();
    float GetMaxValue();
    float GetMaxSliderValue();
    void ClearMinValue();
    void ClearMinSliderValue();
    void ClearMaxValue();
    void ClearMaxSliderValue();
};

// Class: UMG.TableViewBase
class TableViewBase : public Widget {
public:

public:
    class UObject* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
};

// Class: UMG.ListView
class ListView : public TableViewBase {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    float ItemHeight; // 0x0118 (0x0004)
    uint8_t Pad_1[0x4]; // 0x011C (0x0004)
    struct TArray<uint8_t> Items; // 0x0120 (0x0010)
    uint8_t SelectionMode; // 0x0130 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0131 (0x0007)
    uint8_t OnGenerateRowEvent[0x10]; // 0x0138 (0x0010)
};

// Class: UMG.TileView
class TileView : public TableViewBase {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    float ItemWidth; // 0x0118 (0x0004)
    float ItemHeight; // 0x011C (0x0004)
    struct TArray<uint8_t> Items; // 0x0120 (0x0010)
    uint8_t SelectionMode; // 0x0130 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0131 (0x0007)
    uint8_t OnGenerateTileEvent[0x10]; // 0x0138 (0x0010)

public:
    void SetItemWidth(float Width);
    void SetItemHeight(float Height);
    void RequestListRefresh();
};

// Class: UMG.TextLayoutWidget
class TextLayoutWidget : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    uint8_t ShapedTextOptions[0x8]; // 0x0118 (0x0008)
    uint8_t Justification; // 0x0120 (0x0001)
    bool AutoWrapText; // 0x0121 (0x0001)
    uint8_t Pad_1[0x2]; // 0x0122 (0x0002)
    float WrapTextAt; // 0x0124 (0x0004)
    uint8_t Margin[0x10]; // 0x0128 (0x0010)
    float LineHeightPercentage; // 0x0138 (0x0004)
};

// Class: UMG.MultiLineEditableText
class MultiLineEditableText : public TextLayoutWidget {
public:
    uint8_t Pad_0[0x118]; // 0x0028 (0x0118)
    struct FText Text; // 0x0140 (0x0018)
    struct FText HintText; // 0x0158 (0x0018)
    uint8_t HintTextDelegate[0x10]; // 0x0170 (0x0010)
    uint8_t WidgetStyle[0x150]; // 0x0180 (0x0150)
    uint8_t Font[0x40]; // 0x02D0 (0x0040)
    bool AllowContextMenu; // 0x0310 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0311 (0x0007)
    uint8_t OnTextChanged[0x10]; // 0x0318 (0x0010)
    uint8_t OnTextCommitted[0x10]; // 0x0328 (0x0010)

public:
    void SetText(struct FText InText);
    void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod);
    void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text);
    struct FText GetText();
};

// Class: UMG.MultiLineEditableTextBox
class MultiLineEditableTextBox : public TextLayoutWidget {
public:
    uint8_t Pad_0[0x118]; // 0x0028 (0x0118)
    struct FText Text; // 0x0140 (0x0018)
    struct FText HintText; // 0x0158 (0x0018)
    uint8_t HintTextDelegate[0x10]; // 0x0170 (0x0010)
    uint8_t WidgetStyle[0x848]; // 0x0180 (0x0848)
    uint8_t TextStyle[0x150]; // 0x09C8 (0x0150)
    bool AllowContextMenu; // 0x0B18 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0B19 (0x0007)
    class UObject* Style; // 0x0B20 (0x0008)
    uint8_t Font[0x40]; // 0x0B28 (0x0040)
    uint8_t ForegroundColor[0x10]; // 0x0B68 (0x0010)
    uint8_t BackgroundColor[0x10]; // 0x0B78 (0x0010)
    uint8_t ReadOnlyForegroundColor[0x10]; // 0x0B88 (0x0010)
    uint8_t OnTextChanged[0x10]; // 0x0B98 (0x0010)
    uint8_t OnTextCommitted[0x10]; // 0x0BA8 (0x0010)

public:
    void SetText(struct FText InText);
    void SetError(struct FText InError);
    void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, uint8_t CommitMethod);
    void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text);
    struct FText GetText();
};

// Class: UMG.RichTextBlock
class RichTextBlock : public TextLayoutWidget {
public:
    uint8_t Pad_0[0x118]; // 0x0028 (0x0118)
    struct FText Text; // 0x0140 (0x0018)
    uint8_t TextDelegate[0x10]; // 0x0158 (0x0010)
    uint8_t Font[0x40]; // 0x0168 (0x0040)
    uint8_t Color[0x10]; // 0x01A8 (0x0010)
    struct TArray<uint8_t> Decorators; // 0x01B8 (0x0010)

public:
    void SetText(struct FText InText);
    struct FText GetText();
};

// Class: UMG.TextBlock
class TextBlock : public TextLayoutWidget {
public:
    uint8_t Pad_0[0x118]; // 0x0028 (0x0118)
    struct FText Text; // 0x0140 (0x0018)
    uint8_t TextDelegate[0x10]; // 0x0158 (0x0010)
    uint8_t ColorAndOpacity[0x28]; // 0x0168 (0x0028)
    uint8_t ColorAndOpacityDelegate[0x10]; // 0x0190 (0x0010)
    uint8_t Font[0x40]; // 0x01A0 (0x0040)
    uint8_t ShadowOffset[0x8]; // 0x01E0 (0x0008)
    uint8_t ShadowColorAndOpacity[0x10]; // 0x01E8 (0x0010)
    uint8_t ShadowColorAndOpacityDelegate[0x10]; // 0x01F8 (0x0010)
    float MinDesiredWidth; // 0x0208 (0x0004)
    bool bWrapWithInvalidationPanel; // 0x020C (0x0001)

public:
    void SetText(struct FText InText);
    void SetShadowOffset(uint8_t InShadowOffset);
    void SetShadowColorAndOpacity(uint8_t InShadowColorAndOpacity);
    void SetOpacity(float InOpacity);
    void SetJustification(uint8_t InJustification);
    void SetFont(uint8_t InFontInfo);
    void SetColorAndOpacity(uint8_t InColorAndOpacity);
    struct FText GetText();
};

// Class: UMG.Throbber
class Throbber : public Widget {
public:
    uint8_t Pad_0[0xF0]; // 0x0028 (0x00F0)
    int32_t NumberOfPieces; // 0x0118 (0x0004)
    bool bAnimateHorizontally; // 0x011C (0x0001)
    bool bAnimateVertically; // 0x011D (0x0001)
    bool bAnimateOpacity; // 0x011E (0x0001)
    uint8_t Pad_1[0x1]; // 0x011F (0x0001)
    class UObject* PieceImage; // 0x0120 (0x0008)
    uint8_t Image[0x90]; // 0x0128 (0x0090)

public:
    void SetNumberOfPieces(int32_t InNumberOfPieces);
    void SetAnimateVertically(bool bInAnimateVertically);
    void SetAnimateOpacity(bool bInAnimateOpacity);
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class: UMG.WidgetTree
class WidgetTree : public Object {
public:
    class UObject* RootWidget; // 0x0028 (0x0008)
    struct TArray<uint8_t> AllWidgets; // 0x0030 (0x0010)
};

// Class: UMG.WidgetAnimation
class WidgetAnimation : public MovieSceneSequence {
public:
    uint8_t OnAnimationStarted[0x10]; // 0x0028 (0x0010)
    uint8_t OnAnimationFinished[0x10]; // 0x0038 (0x0010)
    class UObject* MovieScene; // 0x0048 (0x0008)
    struct TArray<uint8_t> AnimationBindings; // 0x0050 (0x0010)

public:
    float GetStartTime();
    float GetEndTime();
};

// Class: UMG.WidgetBlueprintGeneratedClass
class WidgetBlueprintGeneratedClass : public BlueprintGeneratedClass {
public:
    uint8_t Pad_0[0x260]; // 0x0028 (0x0260)
    class UObject* WidgetTree; // 0x0288 (0x0008)
    struct TArray<uint8_t> Bindings; // 0x0290 (0x0010)
    struct TArray<uint8_t> Animations; // 0x02A0 (0x0010)
    struct TArray<uint8_t> NamedSlots; // 0x02B0 (0x0010)
    bool bCanEverTick; // 0x02C0 (0x0001)
    bool bCanEverPaint; // 0x02C0 (0x0001)
};

// Class: UMG.WidgetBlueprintLibrary
class WidgetBlueprintLibrary : public BlueprintFunctionLibrary {
public:

public:
    uint8_t UnlockMouse(uint8_t Reply);
    uint8_t Unhandled();
    uint8_t SetUserFocus(uint8_t Reply, class UObject* FocusWidget, bool bInAllUsers);
    uint8_t SetMousePosition(uint8_t Reply, uint8_t NewMousePosition);
    void SetInputMode_UIOnly(class UObject* Target, class UObject* InWidgetToFocus, bool bLockMouseToViewport);
    void SetInputMode_GameOnly(class UObject* Target);
    void SetInputMode_GameAndUI(class UObject* Target, class UObject* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    void SetFocusToGameViewport();
    void SetBrushResourceToTexture(uint8_t Brush, class UObject* Texture);
    void SetBrushResourceToMaterial(uint8_t Brush, class UObject* Material);
    uint8_t ReleaseMouseCapture(uint8_t Reply);
    uint8_t ReleaseJoystickCapture(uint8_t Reply, bool bInAllJoysticks);
    uint8_t NoResourceBrush();
    uint8_t MakeBrushFromTexture(class UObject* Texture, int32_t Width, int32_t Height);
    uint8_t MakeBrushFromMaterial(class UObject* Material, int32_t Width, int32_t Height);
    uint8_t MakeBrushFromAsset(class UObject* BrushAsset);
    uint8_t LockMouse(uint8_t Reply, class UObject* CapturingWidget);
    bool IsDragDropping();
    uint8_t Handled();
    uint8_t GetKeyEventFromAnalogInputEvent(uint8_t Event);
    uint8_t GetInputEventFromPointerEvent(uint8_t Event);
    uint8_t GetInputEventFromNavigationEvent(uint8_t Event);
    uint8_t GetInputEventFromKeyEvent(uint8_t Event);
    uint8_t GetInputEventFromControllerEvent(uint8_t Event);
    uint8_t GetInputEventFromCharacterEvent(uint8_t Event);
    class UObject* GetDynamicMaterial(uint8_t Brush);
    class UObject* GetDragDroppingContent();
    class UObject* GetBrushResourceAsTexture2D(uint8_t Brush);
    class UObject* GetBrushResourceAsMaterial(uint8_t Brush);
    class UObject* GetBrushResource(uint8_t Brush);
    void GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, struct TArray<uint8_t> FoundWidgets, bool TopLevelOnly);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, struct TArray<uint8_t> FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
    uint8_t EndDragDrop(uint8_t Reply);
    void DrawTextFormatted(uint8_t Context, struct FText Text, uint8_t Position, class UObject* Font, int32_t FontSize, struct FName FontTypeFace, uint8_t Tint);
    void DrawText(uint8_t Context, struct FString InString, uint8_t Position, uint8_t Tint);
    void DrawLines(uint8_t Context, struct TArray<uint8_t> Points, uint8_t Tint, bool bAntiAlias);
    void DrawLine(uint8_t Context, uint8_t PositionA, uint8_t PositionB, uint8_t Tint, bool bAntiAlias);
    void DrawBox(uint8_t Context, uint8_t Position, uint8_t Size, class UObject* Brush, uint8_t Tint);
    void DismissAllMenus();
    uint8_t DetectDragIfPressed(uint8_t PointerEvent, class UObject* WidgetDetectingDrag, uint8_t DragKey);
    uint8_t DetectDrag(uint8_t Reply, class UObject* WidgetDetectingDrag, uint8_t DragKey);
    class UObject* CreateDragDropOperation(class UClass* OperationClass);
    class UObject* Create(class UObject* WorldContextObject, class UClass* WidgetType, class UObject* OwningPlayer);
    uint8_t ClearUserFocus(uint8_t Reply, bool bInAllUsers);
    uint8_t CaptureMouse(uint8_t Reply, class UObject* CapturingWidget);
    uint8_t CaptureJoystick(uint8_t Reply, class UObject* CapturingWidget, bool bInAllJoysticks);
    void CancelDragDrop();
    void BendDrawLines(uint8_t Context, struct TArray<uint8_t> Points, uint8_t Tint, bool bAntiAlias, float Thickness, bool bIsPath, float ClipRadius);
    void BendDrawLine(uint8_t Context, uint8_t PositionA, uint8_t PositionB, uint8_t Tint, bool bAntiAlias, float Thickness, bool bIsPath, float ClipRadius);
};

// Class: UMG.WidgetComponent
class WidgetComponent : public PrimitiveComponent {
public:
    uint8_t Pad_0[0x5A8]; // 0x0028 (0x05A8)
    uint8_t Space; // 0x05D0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x05D1 (0x0007)
    class UClass* WidgetClass; // 0x05D8 (0x0008)
    uint8_t DrawSize[0x8]; // 0x05E0 (0x0008)
    uint8_t Pivot[0x8]; // 0x05E8 (0x0008)
    float MaxInteractionDistance; // 0x05F0 (0x0004)
    uint8_t Pad_2[0x4]; // 0x05F4 (0x0004)
    class UObject* OwnerPlayer; // 0x05F8 (0x0008)
    uint8_t BackgroundColor[0x10]; // 0x0600 (0x0010)
    uint8_t BlendMode; // 0x0610 (0x0001)
    bool bIsOpaque; // 0x0611 (0x0001)
    bool bIsTwoSided; // 0x0612 (0x0001)
    uint8_t Pad_3[0x1]; // 0x0613 (0x0001)
    float ParabolaDistortion; // 0x0614 (0x0004)
    bool TickWhenOffscreen; // 0x0618 (0x0001)
    uint8_t Pad_4[0x7]; // 0x0619 (0x0007)
    class UObject* Widget; // 0x0620 (0x0008)
    class UObject* BodySetup; // 0x0628 (0x0008)
    class UObject* TranslucentMaterial; // 0x0630 (0x0008)
    class UObject* TranslucentMaterial_OneSided; // 0x0638 (0x0008)
    class UObject* OpaqueMaterial; // 0x0640 (0x0008)
    class UObject* OpaqueMaterial_OneSided; // 0x0648 (0x0008)
    class UObject* MaskedMaterial; // 0x0650 (0x0008)
    class UObject* MaskedMaterial_OneSided; // 0x0658 (0x0008)
    class UObject* RenderTarget; // 0x0660 (0x0008)
    class UObject* MaterialInstance; // 0x0668 (0x0008)
    bool bUseLegacyRotation; // 0x0670 (0x0001)
    bool bAddedToScreen; // 0x0671 (0x0001)

public:
    void SetWidget(class UObject* Widget);
    void SetOwnerPlayer(class UObject* LocalPlayer);
    void SetMaxInteractionDistance(float Distance);
    void SetDrawSize(uint8_t Size);
    class UObject* GetUserWidgetObject();
    class UObject* GetOwnerPlayer();
    float GetMaxInteractionDistance();
    uint8_t GetDrawSize();
};

// Class: UMG.WidgetLayoutLibrary
class WidgetLayoutLibrary : public BlueprintFunctionLibrary {
public:

public:
    class UObject* SlotAsVerticalBoxSlot(class UObject* Widget);
    class UObject* SlotAsUniformGridSlot(class UObject* Widget);
    class UObject* SlotAsOverlaySlot(class UObject* Widget);
    class UObject* SlotAsHorizontalBoxSlot(class UObject* Widget);
    class UObject* SlotAsGridSlot(class UObject* Widget);
    class UObject* SlotAsCanvasSlot(class UObject* Widget);
    class UObject* SlotAsBorderSlot(class UObject* Widget);
    void RemoveAllWidgets(class UObject* WorldContextObject);
    bool ProjectWorldLocationToWidgetPosition(class UObject* PlayerController, uint8_t WorldLocation, uint8_t ScreenPosition);
    uint8_t GetViewportSize(class UObject* WorldContextObject);
    float GetViewportScale(class UObject* WorldContextObject);
    bool GetMousePositionScaledByDPI(class UObject* Player, float LocationX, float LocationY);
};

// Class: UMG.WidgetNavigation
class WidgetNavigation : public Object {
public:
    uint8_t Up[0x18]; // 0x0028 (0x0018)
    uint8_t Down[0x18]; // 0x0040 (0x0018)
    uint8_t Left[0x18]; // 0x0058 (0x0018)
    uint8_t Right[0x18]; // 0x0070 (0x0018)
    uint8_t Next[0x18]; // 0x0088 (0x0018)
    uint8_t Previous[0x18]; // 0x00A0 (0x0018)
};

// Class: UMG.Default__WidgetBlueprintGeneratedClass
class Default__WidgetBlueprintGeneratedClass : public UObject {
public:
};

} // namespace SDK

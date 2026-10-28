#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: AnimGraphRuntime.AnimNode_BlendListByBool
struct AnimNode_BlendListByBool : public AnimNode_BlendListBase {
    uint8_t Pad_0[0xE8]; // 0x0000 (0x00E8)
    bool bActiveValue; // 0x00E8 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_BlendListBase
struct AnimNode_BlendListBase : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    struct TArray<uint8_t> BlendPose; // 0x0030 (0x0010)
    struct TArray<uint8_t> BlendTime; // 0x0040 (0x0010)
    uint8_t BlendType; // 0x0050 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0051 (0x0007)
    class UObject* CustomBlendCurve; // 0x0058 (0x0008)
    class UObject* BlendProfile; // 0x0060 (0x0008)
    bool bSnapshotPinInputsWhenStateStartsBlendingIn; // 0x0068 (0x0001)
    bool bUpdatePoseEvenIfZeroWeight; // 0x0068 (0x0001)
    bool bHackFixRootMotionInBlendedCachedPoses; // 0x0068 (0x0001)
    bool bUseAsPseudoStateMachine; // 0x0068 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0069 (0x0007)
    struct TArray<uint8_t> BlendWeights; // 0x0070 (0x0010)
    int32_t LastActiveChildIndex; // 0x0080 (0x0004)
    uint8_t Pad_3[0x4]; // 0x0084 (0x0004)
    struct TArray<uint8_t> PerBoneSampleData; // 0x0088 (0x0010)
    uint8_t Pad_4[0x10]; // 0x0098 (0x0010)
    bool bResetChildOnActivation; // 0x00A8 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct AnimNode_BlendSpacePlayer : public AnimNode_AssetPlayerBase {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    float X; // 0x0058 (0x0004)
    float Y; // 0x005C (0x0004)
    float Z; // 0x0060 (0x0004)
    float PlayRate; // 0x0064 (0x0004)
    bool bLoop; // 0x0068 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0069 (0x0003)
    float StartPosition; // 0x006C (0x0004)
    class UObject* BlendSpace; // 0x0070 (0x0008)
    class UObject* OutputPlaybackTime; // 0x0078 (0x0008)
    bool bSnapshotPinInputsWhenStateStartsBlendingIn; // 0x0080 (0x0001)
    uint8_t Pad_2[0x7]; // 0x0081 (0x0007)
    struct FName MasterTimelineName; // 0x0088 (0x0008)
    uint8_t Pad_3[0x8]; // 0x0090 (0x0008)
    uint8_t OverrideInterpolationParam[0x8]; // 0x0098 (0x0008)
    uint8_t Pad_4[0x10]; // 0x00A0 (0x0010)
    float OverrideTargetWeightInterpolationSpeedPerSec; // 0x00B0 (0x0004)
    bool OverrideInterpolationParameters; // 0x00B4 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00B5 (0x0003)
    uint8_t BlendFilter[0x90]; // 0x00B8 (0x0090)
    struct TArray<uint8_t> BlendSampleDataCache; // 0x0148 (0x0010)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_RefPose
struct AnimNode_RefPose : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t RefPoseType; // 0x0030 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimationNode_TwoWayBlend
struct AnimationNode_TwoWayBlend : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t A[0x18]; // 0x0030 (0x0018)
    uint8_t B[0x18]; // 0x0048 (0x0018)
    float Alpha; // 0x0060 (0x0004)
    bool bUpdatePoseEvenIfZeroWeight; // 0x0064 (0x0001)
    bool bHackFixRootMotionInBlendedCachedPoses; // 0x0064 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0065 (0x0003)
    uint8_t AlphaScaleBias[0x8]; // 0x0068 (0x0008)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_SkeletalControlBase
struct AnimNode_SkeletalControlBase : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t ComponentPose[0x18]; // 0x0030 (0x0018)
    float Alpha; // 0x0048 (0x0004)
    uint8_t AlphaScaleBias[0x8]; // 0x004C (0x0008)
    int32_t LODThreshold; // 0x0054 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_ApplyAdditive
struct AnimNode_ApplyAdditive : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Base[0x18]; // 0x0030 (0x0018)
    uint8_t Additive[0x18]; // 0x0048 (0x0018)
    float Alpha; // 0x0060 (0x0004)
    uint8_t AlphaScaleBias[0x8]; // 0x0064 (0x0008)
    int32_t LODThreshold; // 0x006C (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_BlendListByEnum
struct AnimNode_BlendListByEnum : public AnimNode_BlendListBase {
    uint8_t Pad_0[0xE8]; // 0x0000 (0x00E8)
    struct TArray<uint8_t> EnumToPoseIndex; // 0x00E8 (0x0010)
    uint8_t ActiveEnumValue; // 0x00F8 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_BlendListByInt
struct AnimNode_BlendListByInt : public AnimNode_BlendListBase {
    uint8_t Pad_0[0xE8]; // 0x0000 (0x00E8)
    int32_t ActiveChildIndex; // 0x00E8 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct AnimNode_BlendSpaceEvaluator : public AnimNode_BlendSpacePlayer {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    float NormalizedTime; // 0x0160 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct AnimNode_CopyPoseFromMesh : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    class UObject* SourceMeshComponent; // 0x0030 (0x0008)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct AnimNode_LayeredBoneBlend : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t BasePose[0x18]; // 0x0030 (0x0018)
    struct TArray<uint8_t> BlendPoses; // 0x0048 (0x0010)
    struct TArray<uint8_t> LayerSetup; // 0x0058 (0x0010)
    struct TArray<uint8_t> BlendWeights; // 0x0068 (0x0010)
    bool bMeshSpaceRotationBlend; // 0x0078 (0x0001)
    uint8_t CurveBlendOption; // 0x0079 (0x0001)
    bool bHasRelevantPoses; // 0x007A (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_RandomPlayer
struct AnimNode_RandomPlayer : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    bool bShuffleMode; // 0x0030 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0031 (0x0007)
    struct TArray<uint8_t> Entries; // 0x0038 (0x0010)
};

// ScriptStruct: AnimGraphRuntime.RandomPlayerSequenceEntry
struct RandomPlayerSequenceEntry {
    class UObject* Sequence; // 0x0000 (0x0008)
    float ChanceToPlay; // 0x0008 (0x0004)
    int32_t MinLoopCount; // 0x000C (0x0004)
    int32_t MaxLoopCount; // 0x0010 (0x0004)
    float MinPlayRate; // 0x0014 (0x0004)
    float MaxPlayRate; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    uint8_t BlendIn[0x38]; // 0x0020 (0x0038)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct AnimNode_MeshSpaceRefPose : public AnimNode_Base {
};

// ScriptStruct: AnimGraphRuntime.AnimNode_Root
struct AnimNode_Root : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Result[0x18]; // 0x0030 (0x0018)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_RotateRootBone
struct AnimNode_RotateRootBone : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t BasePose[0x18]; // 0x0030 (0x0018)
    float Pitch; // 0x0048 (0x0004)
    float Yaw; // 0x004C (0x0004)
    uint8_t MeshToComponent[0xC]; // 0x0050 (0x000C)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct AnimNode_RotationOffsetBlendSpace : public AnimNode_BlendSpacePlayer {
    uint8_t Pad_0[0x160]; // 0x0000 (0x0160)
    uint8_t BasePose[0x18]; // 0x0160 (0x0018)
    int32_t LODThreshold; // 0x0178 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_SaveCachedPose
struct AnimNode_SaveCachedPose : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Pose[0x18]; // 0x0030 (0x0018)
    int32_t CacheNameIndex; // 0x0048 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_SequenceEvaluator
struct AnimNode_SequenceEvaluator : public AnimNode_AssetPlayerBase {
    uint8_t Pad_0[0x58]; // 0x0000 (0x0058)
    class UObject* Sequence; // 0x0058 (0x0008)
    float ExplicitTime; // 0x0060 (0x0004)
    bool bShouldLoopWhenInSyncGroup; // 0x0064 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_Slot
struct AnimNode_Slot : public AnimNode_Base {
    uint8_t Pad_0[0x30]; // 0x0000 (0x0030)
    uint8_t Source[0x18]; // 0x0030 (0x0018)
    struct FName SlotName; // 0x0048 (0x0008)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_AnimDynamics
struct AnimNode_AnimDynamics : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    bool bChain; // 0x0068 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0069 (0x0007)
    uint8_t BoundBone[0x28]; // 0x0070 (0x0028)
    uint8_t ChainEnd[0x28]; // 0x0098 (0x0028)
    uint8_t BoxExtents[0xC]; // 0x00C0 (0x000C)
    uint8_t LocalJointOffset[0xC]; // 0x00CC (0x000C)
    float GravityScale; // 0x00D8 (0x0004)
    bool bLinearSpring; // 0x00DC (0x0001)
    bool bAngularSpring; // 0x00DD (0x0001)
    uint8_t Pad_2[0x2]; // 0x00DE (0x0002)
    float LinearSpringConstant; // 0x00E0 (0x0004)
    float AngularSpringConstant; // 0x00E4 (0x0004)
    bool bEnableWind; // 0x00E8 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00E9 (0x0003)
    float WindScale; // 0x00EC (0x0004)
    bool bOverrideLinearDamping; // 0x00F0 (0x0001)
    uint8_t Pad_4[0x3]; // 0x00F1 (0x0003)
    float LinearDampingOverride; // 0x00F4 (0x0004)
    bool bOverrideAngularDamping; // 0x00F8 (0x0001)
    uint8_t Pad_5[0x3]; // 0x00F9 (0x0003)
    float AngularDampingOverride; // 0x00FC (0x0004)
    bool bDoUpdate; // 0x0100 (0x0001)
    bool bDoEval; // 0x0101 (0x0001)
    uint8_t Pad_6[0x2]; // 0x0102 (0x0002)
    int32_t NumSolverIterationsPreUpdate; // 0x0104 (0x0004)
    int32_t NumSolverIterationsPostUpdate; // 0x0108 (0x0004)
    uint8_t ConstraintSetup[0x5C]; // 0x010C (0x005C)
    bool bUsePlanarLimit; // 0x0168 (0x0001)
    uint8_t Pad_7[0x7]; // 0x0169 (0x0007)
    struct TArray<uint8_t> PlanarLimits; // 0x0170 (0x0010)
    uint8_t CollisionType; // 0x0180 (0x0001)
    uint8_t Pad_8[0x3]; // 0x0181 (0x0003)
    float SphereCollisionRadius; // 0x0184 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimPhysPlanarLimit
struct AnimPhysPlanarLimit {
    uint8_t DrivingBone[0x28]; // 0x0000 (0x0028)
    uint8_t Pad_0[0x8]; // 0x0028 (0x0008)
    uint8_t PlaneTransform[0x30]; // 0x0030 (0x0030)
};

// ScriptStruct: AnimGraphRuntime.AnimPhysConstraintSetup
struct AnimPhysConstraintSetup {
    uint8_t LinearXLimitType; // 0x0000 (0x0001)
    uint8_t LinearYLimitType; // 0x0001 (0x0001)
    uint8_t LinearZLimitType; // 0x0002 (0x0001)
    uint8_t Pad_0[0x1]; // 0x0003 (0x0001)
    uint8_t LinearAxesMin[0xC]; // 0x0004 (0x000C)
    uint8_t LinearAxesMax[0xC]; // 0x0010 (0x000C)
    uint8_t AngularConstraintType; // 0x001C (0x0001)
    uint8_t TwistAxis; // 0x001D (0x0001)
    uint8_t Pad_1[0x2]; // 0x001E (0x0002)
    float ConeAngle; // 0x0020 (0x0004)
    float AngularXAngle; // 0x0024 (0x0004)
    float AngularYAngle; // 0x0028 (0x0004)
    float AngularZAngle; // 0x002C (0x0004)
    uint8_t AngularLimitsMin[0xC]; // 0x0030 (0x000C)
    uint8_t AngularLimitsMax[0xC]; // 0x003C (0x000C)
    uint8_t AngularTargetAxis; // 0x0048 (0x0001)
    uint8_t Pad_2[0x3]; // 0x0049 (0x0003)
    uint8_t AngularTarget[0xC]; // 0x004C (0x000C)
    bool bLinearFullyLocked; // 0x0058 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_BoneDrivenController
struct AnimNode_BoneDrivenController : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t SourceBone[0x28]; // 0x0068 (0x0028)
    uint8_t SourceComponent; // 0x0090 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0091 (0x0007)
    class UObject* DrivingCurve; // 0x0098 (0x0008)
    float Multiplier; // 0x00A0 (0x0004)
    bool bUseRange; // 0x00A4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00A5 (0x0003)
    float RangeMin; // 0x00A8 (0x0004)
    float RangeMax; // 0x00AC (0x0004)
    float RemappedMin; // 0x00B0 (0x0004)
    float RemappedMax; // 0x00B4 (0x0004)
    uint8_t TargetBone[0x28]; // 0x00B8 (0x0028)
    uint8_t TargetComponent; // 0x00E0 (0x0001)
    uint8_t Pad_3[0x3]; // 0x00E1 (0x0003)
    bool bAffectTargetTranslationX; // 0x00E4 (0x0001)
    bool bAffectTargetTranslationY; // 0x00E4 (0x0001)
    bool bAffectTargetTranslationZ; // 0x00E4 (0x0001)
    bool bAffectTargetRotationX; // 0x00E4 (0x0001)
    bool bAffectTargetRotationY; // 0x00E4 (0x0001)
    bool bAffectTargetRotationZ; // 0x00E4 (0x0001)
    bool bAffectTargetScaleX; // 0x00E4 (0x0001)
    bool bAffectTargetScaleY; // 0x00E4 (0x0001)
    bool bAffectTargetScaleZ; // 0x00E5 (0x0001)
    uint8_t Pad_4[0x2]; // 0x00E6 (0x0002)
    uint8_t ModificationMode; // 0x00E8 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_CopyBone
struct AnimNode_CopyBone : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t SourceBone[0x10]; // 0x0068 (0x0010)
    uint8_t TargetBone[0x10]; // 0x0078 (0x0010)
    bool bCopyTranslation; // 0x0088 (0x0001)
    bool bCopyRotation; // 0x0089 (0x0001)
    bool bCopyScale; // 0x008A (0x0001)
    uint8_t ControlSpace; // 0x008B (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_Fabrik
struct AnimNode_Fabrik : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x70]; // 0x0000 (0x0070)
    uint8_t EffectorTransform[0x30]; // 0x0070 (0x0030)
    uint8_t EffectorTransformSpace; // 0x00A0 (0x0001)
    uint8_t Pad_1[0x7]; // 0x00A1 (0x0007)
    uint8_t EffectorTransformBone[0x10]; // 0x00A8 (0x0010)
    uint8_t EffectorRotationSource; // 0x00B8 (0x0001)
    uint8_t Pad_2[0x7]; // 0x00B9 (0x0007)
    uint8_t TipBone[0x10]; // 0x00C0 (0x0010)
    uint8_t RootBone[0x10]; // 0x00D0 (0x0010)
    float Precision; // 0x00E0 (0x0004)
    int32_t MaxIterations; // 0x00E4 (0x0004)
    bool bEnableDebugDraw; // 0x00E8 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_HandIKRetargeting
struct AnimNode_HandIKRetargeting : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t RightHandFK[0x10]; // 0x0068 (0x0010)
    uint8_t LeftHandFK[0x10]; // 0x0078 (0x0010)
    uint8_t RightHandIK[0x10]; // 0x0088 (0x0010)
    uint8_t LeftHandIK[0x10]; // 0x0098 (0x0010)
    struct TArray<uint8_t> IKBonesToMove; // 0x00A8 (0x0010)
    float HandFKWeight; // 0x00B8 (0x0004)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_LookAt
struct AnimNode_LookAt : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t BoneToModify[0x10]; // 0x0068 (0x0010)
    uint8_t LookAtBone[0x10]; // 0x0078 (0x0010)
    uint8_t LookAtLocation[0xC]; // 0x0088 (0x000C)
    uint8_t LookAtAxis; // 0x0094 (0x0001)
    bool bUseLookUpAxis; // 0x0095 (0x0001)
    uint8_t LookUpAxis; // 0x0096 (0x0001)
    uint8_t Pad_1[0x1]; // 0x0097 (0x0001)
    float LookAtClamp; // 0x0098 (0x0004)
    uint8_t InterpolationType; // 0x009C (0x0001)
    uint8_t Pad_2[0x3]; // 0x009D (0x0003)
    float InterpolationTime; // 0x00A0 (0x0004)
    float InterpolationTriggerThreashold; // 0x00A4 (0x0004)
    bool bEnableDebug; // 0x00A8 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_ModifyBone
struct AnimNode_ModifyBone : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t BoneToModify[0x10]; // 0x0068 (0x0010)
    uint8_t Translation[0xC]; // 0x0078 (0x000C)
    uint8_t Rotation[0xC]; // 0x0084 (0x000C)
    uint8_t Scale[0xC]; // 0x0090 (0x000C)
    uint8_t TranslationMode; // 0x009C (0x0001)
    uint8_t RotationMode; // 0x009D (0x0001)
    uint8_t ScaleMode; // 0x009E (0x0001)
    uint8_t TranslationSpace; // 0x009F (0x0001)
    uint8_t RotationSpace; // 0x00A0 (0x0001)
    uint8_t ScaleSpace; // 0x00A1 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_ObserveBone
struct AnimNode_ObserveBone : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t BoneToObserve[0x10]; // 0x0068 (0x0010)
    uint8_t DisplaySpace; // 0x0078 (0x0001)
    bool bRelativeToRefPose; // 0x0079 (0x0001)
    uint8_t Pad_1[0x2]; // 0x007A (0x0002)
    uint8_t Translation[0xC]; // 0x007C (0x000C)
    uint8_t Rotation[0xC]; // 0x0088 (0x000C)
    uint8_t Scale[0xC]; // 0x0094 (0x000C)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_RotationMultiplier
struct AnimNode_RotationMultiplier : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t TargetBone[0x10]; // 0x0068 (0x0010)
    uint8_t SourceBone[0x10]; // 0x0078 (0x0010)
    float Multiplier; // 0x0088 (0x0004)
    uint8_t RotationAxisToRefer; // 0x008C (0x0001)
    bool bIsAdditive; // 0x008D (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_SpringBone
struct AnimNode_SpringBone : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t SpringBone[0x10]; // 0x0068 (0x0010)
    bool bLimitDisplacement; // 0x0078 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0079 (0x0003)
    float MaxDisplacement; // 0x007C (0x0004)
    float SpringStiffness; // 0x0080 (0x0004)
    float SpringDamping; // 0x0084 (0x0004)
    float ErrorResetThresh; // 0x0088 (0x0004)
    bool bNoZSpring; // 0x008C (0x0001)
    bool bTranslateX; // 0x008D (0x0001)
    bool bTranslateY; // 0x008E (0x0001)
    bool bTranslateZ; // 0x008F (0x0001)
    bool bRotateX; // 0x0090 (0x0001)
    bool bRotateY; // 0x0091 (0x0001)
    bool bRotateZ; // 0x0092 (0x0001)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_Trail
struct AnimNode_Trail : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t TrailBone[0x10]; // 0x0068 (0x0010)
    int32_t ChainLength; // 0x0078 (0x0004)
    uint8_t ChainBoneAxis; // 0x007C (0x0001)
    bool bInvertChainBoneAxis; // 0x007D (0x0001)
    uint8_t Pad_1[0x2]; // 0x007E (0x0002)
    float TrailRelaxation; // 0x0080 (0x0004)
    uint8_t Pad_2[0x4]; // 0x0084 (0x0004)
    uint8_t TrailRelaxationSpeed[0x80]; // 0x0088 (0x0080)
    bool bLimitStretch; // 0x0108 (0x0001)
    uint8_t Pad_3[0x3]; // 0x0109 (0x0003)
    float StretchLimit; // 0x010C (0x0004)
    uint8_t FakeVelocity[0xC]; // 0x0110 (0x000C)
    bool bActorSpaceFakeVel; // 0x011C (0x0001)
    uint8_t Pad_4[0x3]; // 0x011D (0x0003)
    uint8_t BaseJoint[0x10]; // 0x0120 (0x0010)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_TwoBoneIK
struct AnimNode_TwoBoneIK : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    uint8_t IKBone[0x10]; // 0x0068 (0x0010)
    uint8_t EffectorLocation[0xC]; // 0x0078 (0x000C)
    uint8_t JointTargetLocation[0xC]; // 0x0084 (0x000C)
    uint8_t StretchLimits[0x8]; // 0x0090 (0x0008)
    struct FName EffectorSpaceBoneName; // 0x0098 (0x0008)
    bool bTakeRotationFromEffectorSpace; // 0x00A0 (0x0001)
    bool bMaintainEffectorRelRot; // 0x00A0 (0x0001)
    bool bAllowStretching; // 0x00A0 (0x0001)
    uint8_t Pad_1[0x3]; // 0x00A1 (0x0003)
    uint8_t EffectorLocationSpace; // 0x00A4 (0x0001)
    uint8_t JointTargetLocationSpace; // 0x00A5 (0x0001)
    uint8_t Pad_2[0x2]; // 0x00A6 (0x0002)
    struct FName JointTargetSpaceBoneName; // 0x00A8 (0x0008)
};

// ScriptStruct: AnimGraphRuntime.AnimNode_WheelHandler
struct AnimNode_WheelHandler : public AnimNode_SkeletalControlBase {
    uint8_t Pad_0[0x68]; // 0x0000 (0x0068)
    class UObject* VehicleSimComponent; // 0x0068 (0x0008)
};

} // namespace SDK

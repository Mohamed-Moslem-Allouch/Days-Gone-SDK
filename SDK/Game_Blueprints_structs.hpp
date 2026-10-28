#pragma once
#include "Basic.hpp"

namespace SDK {

// ScriptStruct: Game_Blueprints.Struct_Veh_TireState
struct Struct_Veh_TireState {
    struct TArray<uint8_t> StaticMesh_16_90BF7C954800230A51CFE5B92064227B; // 0x0000 (0x0010)
    struct TArray<uint8_t> SkeletalMesh_17_AB71408D4AA42DFA89D1A892E4EB1BC8; // 0x0010 (0x0010)
};

// ScriptStruct: Game_Blueprints.Struct_Veh_TireState_Static
struct Struct_Veh_TireState_Static {
    class UObject* StaticMeshAsset_9_98B5E87648C07D9B34DD74A06C1899F4; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t Transform_7_D86F5AF4465CD3F0DF5C96BC2012DEF6[0x30]; // 0x0010 (0x0030)
};

// ScriptStruct: Game_Blueprints.Struct_Veh_TireState_Skeletal
struct Struct_Veh_TireState_Skeletal {
    class UObject* SkeletalMeshAsset_12_98B5E87648C07D9B34DD74A06C1899F4; // 0x0000 (0x0008)
    uint8_t Pad_0[0x8]; // 0x0008 (0x0008)
    uint8_t Transform_9_D86F5AF4465CD3F0DF5C96BC2012DEF6[0x30]; // 0x0010 (0x0030)
};

// ScriptStruct: Game_Blueprints.UI_HudVisibilityOptions
struct UI_HudVisibilityOptions {
    bool ExcludeMiniMap_11_9D44CCDC44368BD0669E3899ADD2A129; // 0x0000 (0x0001)
    bool ExcludeWeaponInfo_12_2FBE40EC478E91463122C4B2FC86E517; // 0x0001 (0x0001)
    bool ExcludeNotifications_13_12004AF74F3AF5E9A9EDB7A37EE262C3; // 0x0002 (0x0001)
    bool ExcludeTooltips_15_226315FF4745BE7D049D8A8587B13B91; // 0x0003 (0x0001)
    bool ExcludeNpcMeter_24_0220B6DB47C5BF68437E7BB785DC832A; // 0x0004 (0x0001)
    bool ExcludeXpMeter_17_F546E21440807F9F2D2B46B906B8D679; // 0x0005 (0x0001)
    bool ExcludeReticles_18_4DADC523480BCE7A841809BDBC73A9D6; // 0x0006 (0x0001)
    bool ExcludeLocationInfo_19_3423F0F3443107996AB622B09EBD91F6; // 0x0007 (0x0001)
    bool ExcludeWaypoints_20_9CA44F034F26968D2EB5138B5DF9E4DF; // 0x0008 (0x0001)
    bool ExcludeCallouts_21_3F50FB214F21216C02F5C3A0C259F6B7; // 0x0009 (0x0001)
    bool ExcludeInteracts_23_63E1FF114479EA8BB19009B28CEB58A1; // 0x000A (0x0001)
    bool ExcludeStamina_33_222B98344D8F8D6AA18F80AEE7E7C229; // 0x000B (0x0001)
    bool ExcludeAdrenaline_34_DB8181C34D5CC4C59C6F3AA3D960187F; // 0x000C (0x0001)
    bool ExcludeHealth_36_0C19B62C42D7FC581E0AAFA08D6011D9; // 0x000D (0x0001)
    bool ExcludeSupplies_38_B50A6C68482BA8DC38D3E5BA46650A26; // 0x000E (0x0001)
    bool ExcludeWeapons_40_ED1C205B42BF0BDD9EE8BF998DFBEB2B; // 0x000F (0x0001)
};

// ScriptStruct: Game_Blueprints.UI_HudNotificationDetails
struct UI_HudNotificationDetails {
    uint8_t Type_2_7DE2B2A74F7056FC948EE9B3B1878391; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FString Title_5_7C367298434285774782F1AEACDF419B; // 0x0008 (0x0010)
    struct FText TitleText_48_4468CA344CD39E0DB77B0CA607E7122B; // 0x0018 (0x0018)
    struct FString Subtitle_10_9B72E47441F1AD58D0E265AA2F5C6D74; // 0x0030 (0x0010)
    struct FText SubtitleText_49_3BE9166A474A7C862138B394E0D4A53E; // 0x0040 (0x0018)
    struct FString Progress_24_4464D02F4E77C87CC66AF3BBD66F70A3; // 0x0058 (0x0010)
    struct FText ProgressText_50_E6B8049C4B5E29DD11CFB5A4C8CA2590; // 0x0068 (0x0018)
    uint8_t ProgressType_53_CB7D7A5848BD885FC0707181C43EBD75; // 0x0080 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0081 (0x0007)
    class UObject* Icon_11_56A2E9324640FDAF1CBC0CAA4A598E50; // 0x0088 (0x0008)
    class UObject* PlaySound_27_86D1CCCF4BA965D1347118B214AFF176; // 0x0090 (0x0008)
    float Value_41_4ABF4C534DC1CED9BE99219D9440592B; // 0x0098 (0x0004)
    float DisplayTime_17_176274F4495ABA2CCF5D9F977598FB94; // 0x009C (0x0004)
    bool Pause_19_B0D6E90A4CD4D2BD72D4D2B6FD89368D; // 0x00A0 (0x0001)
    bool MarkComplete_21_FB92BBDE4EEF66024B75FFA351CD5A61; // 0x00A1 (0x0001)
    uint8_t ObjectiveCategory_31_7AB067604C9E835D12CDF79A6C595D02; // 0x00A2 (0x0001)
    uint8_t BannerType_38_D4517CBA402622C57ECCDBAD1D83E161; // 0x00A3 (0x0001)
    bool IsWeapon_55_02057BD6478361553E3DA6AEE2AFE162; // 0x00A4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00A5 (0x0003)
    uint8_t StoryLine_61_D321C688441D33B9A3720F9898051CC2[0x108]; // 0x00A8 (0x0108)
};

// ScriptStruct: Game_Blueprints.UI_HudMissionPopupDetails
struct UI_HudMissionPopupDetails {
    uint8_t Type_2_BDD19BB8453ACD13EE0222A9F85FFF23; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    struct FText Title_5_A63DA2BD423A18DF31E0709873A34380; // 0x0008 (0x0018)
    uint8_t RewardType_8_93428DD54D8CED353A255E8B54B59307; // 0x0020 (0x0001)
    uint8_t Pad_1[0x3]; // 0x0021 (0x0003)
    int32_t RewardValue_11_32FAE68249DECCD0BD5E9BB7A9D4ED44; // 0x0024 (0x0004)
    struct FText Subtitle_14_E6EE23FC4F6C4D3FED1B3FB90D1F3633; // 0x0028 (0x0018)
    uint8_t InteractDetails_17_879D2BCB49FA0679B4AC4EB7217C0B6C[0x70]; // 0x0040 (0x0070)
    class UObject* UtilityObjectRef_22_C2BF6CF242EF9D945AF680867E0EA95B; // 0x00B0 (0x0008)
};

// ScriptStruct: Game_Blueprints.STRUCT_MenuInventoryData
struct STRUCT_MenuInventoryData {
    class UObject* InventoryItem_2_351E0C74423B22D72C456798F3B0E8D0; // 0x0000 (0x0008)
    int32_t Count_5_A1B358BA4DF66A54CABAF7B884898CB6; // 0x0008 (0x0004)
    bool Discovered_7_1BF0559F462506D5DB7220B1FED30952; // 0x000C (0x0001)
    bool ShouldDisplayCount_9_76C1FF264FE16B2D7F9D32AC6EA1B3EA; // 0x000D (0x0001)
    bool IsMerchantMenuOption_16_FA07F011408D9121C908EEA7D4D63089; // 0x000E (0x0001)
    bool IsUnlocked_18_0F27BB2440015D769ADB2FAB6CFAFFC8; // 0x000F (0x0001)
    bool IsMerchantItem_35_8E91D4F7413BA3BD62874A95C70750B1; // 0x0010 (0x0001)
    bool IsMerchantBikePart_38_539BB424487B306C95E525ACA9B32F00; // 0x0011 (0x0001)
    uint8_t Pad_0[0x6]; // 0x0012 (0x0006)
    uint8_t MerchantItem_21_68DAFADF46A58BCD6989D2B917571F11[0x50]; // 0x0018 (0x0050)
    bool IsMerchantWeapon_36_D690DAF742DA2D2053FBCD81EFD6E9DF; // 0x0068 (0x0001)
    uint8_t Pad_1[0x7]; // 0x0069 (0x0007)
    uint8_t MerchantWeapon_26_1BC720EC41B2486313A6E8A8F313BA92[0x60]; // 0x0070 (0x0060)
    int32_t SpecialAmmoInventoryIndex_43_11AD4970483C007A7253A9A883DCD798; // 0x00D0 (0x0004)
    bool Locker_AlreadyOwnedWeapon_45_BED46FDD470D3ECE09B2F2863EFCFF20; // 0x00D4 (0x0001)
    uint8_t Pad_2[0x3]; // 0x00D5 (0x0003)
    int32_t MerchantDataIndex_48_7F540FC040B6C7945AF052BB61A97D06; // 0x00D8 (0x0004)
    bool IsBikePartCategory_55_9D47618E40C56FA86790B784A4664C1C; // 0x00DC (0x0001)
    uint8_t Pad_3[0x3]; // 0x00DD (0x0003)
    uint8_t BikePartCategories_53_6022E16743E89C2761F8BFB9C80AECEC[0x58]; // 0x00E0 (0x0058)
    uint8_t BikePartMerchantData_61_B1DDCE0E4423D76E1B184CAD7CFAC872[0x80]; // 0x0138 (0x0080)
    bool BikePartIsCurrentlyEquipped_57_9389732D46F0CFDBEA3445B0187F6ABF; // 0x01B8 (0x0001)
    bool IsNewItem_63_58A502484020E8FA953D3E92E2BE29A8; // 0x01B9 (0x0001)
};

// ScriptStruct: Game_Blueprints.STRUCT_TextureRequest_UMG_Image
struct STRUCT_TextureRequest_UMG_Image {
    uint8_t TextureAsset_9_88916BD541CEF58453B880885C6099CC[0x20]; // 0x0000 (0x0020)
    class UObject* Image_5_BE23389A4E94ED87EBA7CB8B0A3C36AB; // 0x0020 (0x0008)
    bool MatchSize_8_892311FA4B27C5C7A27CEE879ABA74CF; // 0x0028 (0x0001)
};

// ScriptStruct: Game_Blueprints.STRUCT_TextureRequest_Menu_Material
struct STRUCT_TextureRequest_Menu_Material {
    uint8_t TextureAsset_2_88916BD541CEF58453B880885C6099CC[0x20]; // 0x0000 (0x0020)
    class UObject* MID_21_BE23389A4E94ED87EBA7CB8B0A3C36AB; // 0x0020 (0x0008)
    bool FadeInWhenLoaded_19_A0ACC82E42E3DBAFD49E10B6BA331230; // 0x0028 (0x0001)
};

// ScriptStruct: Game_Blueprints.Struct_ConvLineData
struct Struct_ConvLineData {
    struct TArray<uint8_t> Conversation_51_F832C1A643A20313E3718D9BE0EBF260; // 0x0000 (0x0010)
};

// ScriptStruct: Game_Blueprints.Struct_ConversationLineDetails
struct Struct_ConversationLineDetails {
    struct FName VOLineString_50_F832C1A643A20313E3718D9BE0EBF260; // 0x0000 (0x0008)
    bool ManuallySpecifySpeakingPosition_57_11F1A1184158EE2E632AD79717DEB9C2; // 0x0008 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0009 (0x0003)
    int32_t SpeakingPosition_53_2F9C3C11489035793813159EE03D8B0F; // 0x000C (0x0004)
    bool UseRadioFutz_47_10C10E12429DDBABE12DAD9860ABF3C6; // 0x0010 (0x0001)
    uint8_t RadioType_49_009D990D4079748231D43588FFA897A9; // 0x0011 (0x0001)
};

// ScriptStruct: Game_Blueprints.STRUCT_MenuInventoryContainer
struct STRUCT_MenuInventoryContainer {
    struct TArray<uint8_t> InventoryDataArray_10_351E0C74423B22D72C456798F3B0E8D0; // 0x0000 (0x0010)
    int32_t DiscoveredCount_13_FE85641643D624859FF575839D393ECC; // 0x0010 (0x0004)
};

// ScriptStruct: Game_Blueprints.Struct_RegionLevels
struct Struct_RegionLevels {
    struct FString SectorNumber_33_5C54A18D4A627811C63844ABD7629027; // 0x0000 (0x0010)
    struct FString LandscapePath_24_6506D5344E23A0B4CE583EA5B752A1C1; // 0x0010 (0x0010)
    struct FString EnvPath_25_E60FBAC74B1D2A451D1AB1B7F6435112; // 0x0020 (0x0010)
    struct FString PopPath_28_2BE9E5E94AD4EE0291FE788C7A5D3CAA; // 0x0030 (0x0010)
    struct FString Static_PopPath_29_39DDB589442059CB14489BB5B088A82E; // 0x0040 (0x0010)
    struct TArray<uint8_t> AmbientPaths_30_AACB6B61473332DA73486780D8741E2C; // 0x0050 (0x0010)
    struct TArray<uint8_t> InteriorPaths_31_F19F339241A882043805D0BF29163E11; // 0x0060 (0x0010)
    struct TArray<uint8_t> Lod1Paths_32_7B7EE93E4DCED943EC8A4ABF39BADCB4; // 0x0070 (0x0010)
    struct TArray<uint8_t> Uncategorized_37_B8D8FE8F4B552998F04FC587920C7CB3; // 0x0080 (0x0010)
};

// ScriptStruct: Game_Blueprints.STRUCT_TextureRequest_Menu_Mesh
struct STRUCT_TextureRequest_Menu_Mesh {
    uint8_t TextureAsset_2_88916BD541CEF58453B880885C6099CC[0x20]; // 0x0000 (0x0020)
    class UObject* Mesh_8_BE23389A4E94ED87EBA7CB8B0A3C36AB; // 0x0020 (0x0008)
    float Opacity_11_4723E490439EC24E9DAE51A6D7B5E081; // 0x0028 (0x0004)
    uint8_t Tint_14_A6BD2B604816C45EAFE1549AF96B4E5A[0x10]; // 0x002C (0x0010)
    bool SingleChannel_17_BD7721DB4F37FD70B6EA828DF77DE452; // 0x003C (0x0001)
    bool FadeInWhenLoaded_19_A0ACC82E42E3DBAFD49E10B6BA331230; // 0x003D (0x0001)
};

// ScriptStruct: Game_Blueprints.UI_ButtonMarkup
struct UI_ButtonMarkup {
    class UObject* ButtonTexture_8_40EA7D3841D54B5087D763A7E20270DF; // 0x0000 (0x0008)
    uint8_t ButtonEnum_12_7ECF7D7347B6E62DAE5B80AF1390DD25; // 0x0008 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0009 (0x0007)
    struct FString ButtonString_15_7805DE674DA3CB32B1EFFF9029EEBF43; // 0x0010 (0x0010)
};

// ScriptStruct: Game_Blueprints.UI_GrappleMeterDetails3
struct UI_GrappleMeterDetails3 {
    uint8_t Type_25_C6F7445D47E07B87E4054885BFB27FC9; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float TotalTime_17_B8BCDB3F4E258705FBD8939B77C03060; // 0x0004 (0x0004)
    float RotationTIme_2_23E0C65846F57037138F62BA9188B196; // 0x0008 (0x0004)
    float RotationDelay_5_ECAF916C476209DC2FC25B9B7F6EF648; // 0x000C (0x0004)
    float KickWindowTime_21_DA99AF20418C8CBCE3039EACA38FA238; // 0x0010 (0x0004)
    float KillWindowTime_22_4E28F3DC48D4B82FF6D5BD850C45A68F; // 0x0014 (0x0004)
    int32_t SegmentsTotal_29_687BDDD344071C33E6E2F19EB3A19E95; // 0x0018 (0x0004)
    int32_t SegmentsCurrent_32_6DC28B0B40D2F4BDB2BE4FAE4545E561; // 0x001C (0x0004)
    uint8_t Button_14_525397524D69D6C5434842BD1869E5B9; // 0x0020 (0x0001)
};

// ScriptStruct: Game_Blueprints.LogoPosition
struct LogoPosition {
    uint8_t Anchors_2_D15AF6694796AE35192DB594607DF8A8[0x10]; // 0x0000 (0x0010)
    uint8_t Position_5_84C64A1B4082300A54497DB4FC22679A[0x8]; // 0x0010 (0x0008)
    uint8_t Alignment_7_F5CC5D2F45CFFAFB7BF9E48C7AEC756E[0x8]; // 0x0018 (0x0008)
};

// ScriptStruct: Game_Blueprints.Struct_PeriodicTickers
struct Struct_PeriodicTickers {
    struct FString Label_7_BF53A2B2480C543DF031AE9BFEB81ECF; // 0x0000 (0x0010)
    float Period_2_35B83D344E613945A1FCDB9408EB7D92; // 0x0010 (0x0004)
    float Delta_4_9091E7CC45CCEA737FEC1B848BCEB0E1; // 0x0014 (0x0004)
    bool Triggered_10_9FDD87694D2BF01190EAA89324D7F652; // 0x0018 (0x0001)
};

// ScriptStruct: Game_Blueprints.StructAmbientEventDebugData
struct StructAmbientEventDebugData {
    class UObject* AmbientEventMarker_2_AAB434724AED4883D2FF5F928A430500; // 0x0000 (0x0008)
    struct TArray<uint8_t> Scores_12_FFED84F94148481AA8E779AAE1E65E9B; // 0x0008 (0x0010)
    float FinalScore_8_A1CA6C7E41444B1FA67AA9A466292802; // 0x0018 (0x0004)
};

// ScriptStruct: Game_Blueprints.AmbushCampsAndConditions
struct AmbushCampsAndConditions {
    struct TArray<uint8_t> Camps_6_BD4EA0CF458C52F9BC15E9846B5D7919; // 0x0000 (0x0010)
    struct TArray<uint8_t> ConditionsNotCleared_13_627C95A84190E9A1C827398020E70E66; // 0x0010 (0x0010)
};

// ScriptStruct: Game_Blueprints.STRUC_BikeSettings
struct STRUC_BikeSettings {
    uint8_t HeadlightBrightness_5_8A7AEF5341688001A88D2492B652F7A0; // 0x0000 (0x0001)
    uint8_t Pad_0[0x7]; // 0x0001 (0x0007)
    class UObject* VehicleStartWaypoint_11_8773710D47A382CE5690348D518A944D; // 0x0008 (0x0008)
    class UObject* VehicleEndWaypoint_14_7F9E473848025C80A3316ABBD7C80655; // 0x0010 (0x0008)
    bool EnableRideAssist_16_A1D1FE684E8C4D194EB566B5D6195623; // 0x0018 (0x0001)
};

// ScriptStruct: Game_Blueprints.Struct_DebugStringLocation
struct Struct_DebugStringLocation {
    struct FString NameOfLocation_2_029598E543E7FD91E4C90C985A0E5B5B; // 0x0000 (0x0010)
    uint8_t LocationAndRotation_5_838CA2C44E2313228B4A6DBE8847A578[0x30]; // 0x0010 (0x0030)
};

// ScriptStruct: Game_Blueprints.vo_nero_intel_struct
struct vo_nero_intel_struct {
    struct TArray<uint8_t> CaveLines_3_7BB3097848400678284038A3C1B64C37; // 0x0000 (0x0010)
    struct TArray<uint8_t> DeliberateLines_7_1E92A95B43F1B63ACA756E8C281E25FD; // 0x0010 (0x0010)
    struct TArray<uint8_t> MemoryLines_11_42FCD04B491CBFB51A59298569BA8C55; // 0x0020 (0x0010)
    struct TArray<uint8_t> NestLines_15_87B9EF414AE2AD5E7A5118963BDC515E; // 0x0030 (0x0010)
    struct TArray<uint8_t> ScatLines_19_A81C7DE2461695E26B97C1897A685514; // 0x0040 (0x0010)
    struct TArray<uint8_t> DeconLines_34_B5BB0B414B15611F2352FAA19E855A5D; // 0x0050 (0x0010)
    struct TArray<uint8_t> DutyLines_36_BA445C524714D8532F1DB88E35F5F99D; // 0x0060 (0x0010)
    struct TArray<uint8_t> HordeLines_38_60895ACA41026843CD71248A7A144CF4; // 0x0070 (0x0010)
    struct TArray<uint8_t> RebelRockLines_40_A70DDE064AD83A04529125A0217907FA; // 0x0080 (0x0010)
    struct TArray<uint8_t> RosterLines_43_D0E4965D4D92D7DEE1F36AB4E68CCF83; // 0x0090 (0x0010)
    struct TArray<uint8_t> TaggedLines_45_ED40FB664308B5A27BEEE886126531C3; // 0x00A0 (0x0010)
    struct TArray<uint8_t> OBrianLines_49_CDDDAFE24DA78525F0B6DF9D7C5BAFA9; // 0x00B0 (0x0010)
};

// ScriptStruct: Game_Blueprints.HALoadingTipStruct
struct HALoadingTipStruct {
    struct FText Description_4_D37309BC492D9F9E68A871AD61E0B634; // 0x0000 (0x0018)
    int32_t Priority_5_80714D1C48C740A426395BA64DD13F7B; // 0x0018 (0x0004)
};

// ScriptStruct: Game_Blueprints.LoadingTipStruct
struct LoadingTipStruct {
    struct FText Description_9_090CC2634F70A8100A4AFC9DABDDE6F5; // 0x0000 (0x0018)
    int32_t Priority_7_A5DD8DE6434CAB980B4273B975B70822; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    class UObject* MissionPrereq_22_3D66C46E4D9E201A65833EBABF4DAFDF; // 0x0020 (0x0008)
    class UObject* JobPrereq_20_CF19FD124CBAD6C21CB2A3A46A0DC52D; // 0x0028 (0x0008)
    struct TArray<uint8_t> DifficultyReq_26_A2FFE0C1473EEF5DF90A5F8F466434C4; // 0x0030 (0x0010)
};

// ScriptStruct: Game_Blueprints.DLCLoadingTipStruct
struct DLCLoadingTipStruct {
    struct FText Description_9_090CC2634F70A8100A4AFC9DABDDE6F5; // 0x0000 (0x0018)
    int32_t Priority_7_A5DD8DE6434CAB980B4273B975B70822; // 0x0018 (0x0004)
    uint8_t Pad_0[0x4]; // 0x001C (0x0004)
    struct TArray<uint8_t> ChallengeTagReq_45_CF19FD124CBAD6C21CB2A3A46A0DC52D; // 0x0020 (0x0010)
    struct TArray<uint8_t> ChallengeTypeReq_48_C9587E894B225C82938F659AB5BAC565; // 0x0030 (0x0010)
};

// ScriptStruct: Game_Blueprints.ViewControlsContextEntry
struct ViewControlsContextEntry {
    struct FName ActionName_2_AC9EC15C4085D674139CFF9CD756DF76; // 0x0000 (0x0008)
    struct FText LAMS_LocalizationID_9_2904163D476300EFA49FDFAF43A0DA25; // 0x0008 (0x0018)
    bool HoldKey__8_46357F974B195CA8F790E9AC1DC8D344; // 0x0020 (0x0001)
};

// ScriptStruct: Game_Blueprints.FoundBindingEntry
struct FoundBindingEntry {
    uint8_t Key_5_0F85708B4F10F77E0F858BB2A9740F36[0x18]; // 0x0000 (0x0018)
    struct TArray<uint8_t> FoundBindings_6_A94196F64324F0E728ED33B2520971A9; // 0x0018 (0x0010)
};

// ScriptStruct: Game_Blueprints.RemappingScreenCategoryStructure
struct RemappingScreenCategoryStructure {
    struct FString Category_Name_2_22CBD7A14AE86F11E8C1EE97CBA531F7; // 0x0000 (0x0010)
    struct FText Category_LAMS_13_F3589B3049CC6D719F1944BBE52F2704; // 0x0010 (0x0018)
    struct TArray<uint8_t> Category_ActionNames_12_B6B8A7B8482AD7B68C7E7884932ADBEE; // 0x0028 (0x0010)
};

// ScriptStruct: Game_Blueprints.Struct_ConvLineIDAndIndex
struct Struct_ConvLineIDAndIndex {
    int32_t ID_48_F832C1A643A20313E3718D9BE0EBF260; // 0x0000 (0x0004)
    int32_t Index_49_519321F146EB5B25F387B3B584A727A0; // 0x0004 (0x0004)
    uint8_t Conversation_53_8A7DE9664AD1BE7FA329FCA2A9166E6F[0x10]; // 0x0008 (0x0010)
};

// ScriptStruct: Game_Blueprints.XPEC_POIStruct_SmoothPath
struct XPEC_POIStruct_SmoothPath {
    struct TArray<uint8_t> EntryTransform_20_9FFE74094CC568BFE7C769BAC080524E; // 0x0000 (0x0010)
    bool NeedToAlign_9_869BA994426C74A555B85EBA7D740420; // 0x0010 (0x0001)
};

// ScriptStruct: Game_Blueprints.Struct_LGT_CinMeshToggle
struct Struct_LGT_CinMeshToggle {
    struct FName CinematicName_3_134F31974F767012ECF41DBF1231067C; // 0x0000 (0x0008)
    struct TArray<uint8_t> CinmaticActors_7_00EFA89F44614E4D4CCED2AC7AD9406D; // 0x0008 (0x0010)
};

// ScriptStruct: Game_Blueprints.Struct_LGT_lastFrameParentInfo
struct Struct_LGT_lastFrameParentInfo {
    uint8_t lastFrameBoneLocation_8_14A8C05A4931ECA099D102AAF0B1054B[0xC]; // 0x0000 (0x000C)
    uint8_t Pad_0[0x4]; // 0x000C (0x0004)
    struct FName lastFrameBoneName_7_D9CE322E47BA5FC39B93C48471A35809; // 0x0010 (0x0008)
    class UObject* ParentActorRef_11_018343404D7986FC566525AD2C05A98D; // 0x0018 (0x0008)
};

// ScriptStruct: Game_Blueprints.Struct_LGT_UpdateTimeOfDAy
struct Struct_LGT_UpdateTimeOfDAy {
    bool OverrideTimeOfDay_3_3CF5ACD44DDBDDE37847A3B295A772B0; // 0x0000 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0001 (0x0003)
    float NewTimeOfDay_6_645390E243E0F6A98918ED831E328734; // 0x0004 (0x0004)
};

// ScriptStruct: Game_Blueprints.Struct_LGT_ShotTimeOfDay
struct Struct_LGT_ShotTimeOfDay {
    struct TArray<uint8_t> CameraList_14_3748438144E14C686A2B61A1584C9657; // 0x0000 (0x0010)
    float pitchOffset_12_C5EDC4C84853219D7CFE83AEC071C8C3; // 0x0010 (0x0004)
    float rollOffset_13_75FEFB80464F28C1285B0D87CB90DE59; // 0x0014 (0x0004)
    float yawOffset_17_4CE686354E2BCD9E2914F68978B9DDC1; // 0x0018 (0x0004)
};

// ScriptStruct: Game_Blueprints.Struct_LGT_Flicker
struct Struct_LGT_Flicker {
    float BaseLightIntensity_37_5DC28A7446594AF69EF341AE21886F24; // 0x0000 (0x0004)
    uint8_t Type_32_33F1F3BA4D490149F742EE9DC972A67D; // 0x0004 (0x0001)
    uint8_t Pad_0[0x3]; // 0x0005 (0x0003)
    float FlickerIntensity_39_049E0101404954827F323891A045D0AB; // 0x0008 (0x0004)
    float FlickerRateMultiplier_40_2A6FBB024C27C80B8FC5B7B6DBA18E41; // 0x000C (0x0004)
    float FlickerOffset_41_9395901E4D98769D5200198646DE36A7; // 0x0010 (0x0004)
    float FlickerMovementMultiplier_43_CA8DFFFB4109A66DEC2A5BBD712A6AD2; // 0x0014 (0x0004)
    uint8_t LightOrigLocation_46_F29D2ABD48734BE822CB3F9A1ECDF969[0xC]; // 0x0018 (0x000C)
};

} // namespace SDK

#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.UpdateRarity
	 */
	struct UProgramTrialRewardWidget_C_UpdateRarity_Params
	{
	public:
		EPlayerCustomizationRarity                                 Rarity;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.MergeWith
	 */
	struct UProgramTrialRewardWidget_C_MergeWith_Params
	{
	public:
		struct FRewardUIData                                       RewardUIData;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.CanMergeWith
	 */
	struct UProgramTrialRewardWidget_C_CanMergeWith_Params
	{
	public:
		struct FRewardUIData                                       RewardUIData;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bCanMergeWith;                                           // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.InitFromRewardUIData
	 */
	struct UProgramTrialRewardWidget_C_InitFromRewardUIData_Params
	{
	public:
		bool                                                       bAcquired;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPerfect;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9UKG[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRewardUIData                                       RewardUIData;                                            // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PlayNewRewardAnimation
	 */
	struct UProgramTrialRewardWidget_C_PlayNewRewardAnimation_Params
	{	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Init
	 */
	struct UProgramTrialRewardWidget_C_Init_Params
	{
	public:
		bool                                                       bAcquired;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPerfect;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_28RT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconTexture;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         IconColor;                                               // 0x0010(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ForcedText;                                              // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Setup
	 */
	struct UProgramTrialRewardWidget_C_Setup_Params
	{	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.OnLoaded_A87C4866469F6493BA837AA40651E406
	 */
	struct UProgramTrialRewardWidget_C_OnLoaded_A87C4866469F6493BA837AA40651E406_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Construct
	 */
	struct UProgramTrialRewardWidget_C_Construct_Params
	{	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PreConstruct
	 */
	struct UProgramTrialRewardWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.LoadThumbnail
	 */
	struct UProgramTrialRewardWidget_C_LoadThumbnail_Params
	{	};

	/**
	 * Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.ExecuteUbergraph_ProgramTrialRewardWidget
	 */
	struct UProgramTrialRewardWidget_C_ExecuteUbergraph_ProgramTrialRewardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V5ZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

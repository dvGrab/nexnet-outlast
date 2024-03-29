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
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.UpdateRarity
	 */
	struct UNextLevelRewardWidget_C_UpdateRarity_Params
	{
	public:
		EPlayerCustomizationRarity                                 Rarity;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.InitFromRewardUIData
	 */
	struct UNextLevelRewardWidget_C_InitFromRewardUIData_Params
	{
	public:
		bool                                                       bAcquired;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPerfect;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EPD1[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRewardUIData                                       RewardUIData;                                            // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.Setup
	 */
	struct UNextLevelRewardWidget_C_Setup_Params
	{	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.OnLoaded_54A1EA1342F0219294453894BE060EF2
	 */
	struct UNextLevelRewardWidget_C_OnLoaded_54A1EA1342F0219294453894BE060EF2_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.Construct
	 */
	struct UNextLevelRewardWidget_C_Construct_Params
	{	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.PreConstruct
	 */
	struct UNextLevelRewardWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.LoadThumbnail
	 */
	struct UNextLevelRewardWidget_C_LoadThumbnail_Params
	{	};

	/**
	 * Function NextLevelRewardWidget.NextLevelRewardWidget_C.ExecuteUbergraph_NextLevelRewardWidget
	 */
	struct UNextLevelRewardWidget_C_ExecuteUbergraph_NextLevelRewardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RME6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.StartAnimation
	 */
	struct UStageIntroVariatorEntry_C_StartAnimation_Params
	{	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromVariatorInfo
	 */
	struct UStageIntroVariatorEntry_C_InitFromVariatorInfo_Params
	{
	public:
		class URBVariatorInfo*                                     variatorInfo;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromDifficulty
	 */
	struct UStageIntroVariatorEntry_C_InitFromDifficulty_Params
	{
	public:
		EGameDifficulty                                            Difficulty;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1GCH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Refresh
	 */
	struct UStageIntroVariatorEntry_C_Refresh_Params
	{	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.PreConstruct
	 */
	struct UStageIntroVariatorEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Construct
	 */
	struct UStageIntroVariatorEntry_C_Construct_Params
	{	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnShowFinished
	 */
	struct UStageIntroVariatorEntry_C_OnShowFinished_Params
	{	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.ExecuteUbergraph_StageIntroVariatorEntry
	 */
	struct UStageIntroVariatorEntry_C_ExecuteUbergraph_StageIntroVariatorEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnAnimationCompleted__DelegateSignature
	 */
	struct UStageIntroVariatorEntry_C_OnAnimationCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

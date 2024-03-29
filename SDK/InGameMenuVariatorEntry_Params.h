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
	 * Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromVariatorInfo
	 */
	struct UInGameMenuVariatorEntry_C_InitFromVariatorInfo_Params
	{
	public:
		class URBVariatorInfo*                                     variatorInfo;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromDifficulty
	 */
	struct UInGameMenuVariatorEntry_C_InitFromDifficulty_Params
	{
	public:
		EGameDifficulty                                            Difficulty;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2JG4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.Refresh
	 */
	struct UInGameMenuVariatorEntry_C_Refresh_Params
	{	};

	/**
	 * Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.PreConstruct
	 */
	struct UInGameMenuVariatorEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.ExecuteUbergraph_InGameMenuVariatorEntry
	 */
	struct UInGameMenuVariatorEntry_C_ExecuteUbergraph_InGameMenuVariatorEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnAnimationCompleted__DelegateSignature
	 */
	struct UInGameMenuVariatorEntry_C_OnAnimationCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

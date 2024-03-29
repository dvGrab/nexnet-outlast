#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_ScoreboardEntry.W_ScoreboardEntry_C.UpdateEntry
	 */
	struct UW_ScoreboardEntry_C_UpdateEntry_Params
	{	};

	/**
	 * Function W_ScoreboardEntry.W_ScoreboardEntry_C.SetScoreboardText
	 */
	struct UW_ScoreboardEntry_C_SetScoreboardText_Params
	{
	public:
		class UTextBlock*                                          InTextWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ScoreboardEntry.W_ScoreboardEntry_C.PreConstruct
	 */
	struct UW_ScoreboardEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ScoreboardEntry.W_ScoreboardEntry_C.ExecuteUbergraph_W_ScoreboardEntry
	 */
	struct UW_ScoreboardEntry_C_ExecuteUbergraph_W_ScoreboardEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

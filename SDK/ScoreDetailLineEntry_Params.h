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
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Show
	 */
	struct UScoreDetailLineEntry_C_Show_Params
	{	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Setup
	 */
	struct UScoreDetailLineEntry_C_Setup_Params
	{	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Init
	 */
	struct UScoreDetailLineEntry_C_Init_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Value;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bPositive;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStartVisible;                                           // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EUAS[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.PreConstruct
	 */
	struct UScoreDetailLineEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.ExecuteUbergraph_ScoreDetailLineEntry
	 */
	struct UScoreDetailLineEntry_C_ExecuteUbergraph_ScoreDetailLineEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

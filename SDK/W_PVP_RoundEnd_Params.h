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
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_4
	 */
	struct UW_PVP_RoundEnd_C_SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_4_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3
	 */
	struct UW_PVP_RoundEnd_C_SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2
	 */
	struct UW_PVP_RoundEnd_C_SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1
	 */
	struct UW_PVP_RoundEnd_C_SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTaglineText
	 */
	struct UW_PVP_RoundEnd_C_GetWinningTaglineText_Params
	{
	public:
		class FText                                                Return_Value;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetMLOScore
	 */
	struct UW_PVP_RoundEnd_C_GetMLOScore_Params
	{
	public:
		int32_t                                                    Return_Value;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K7H1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetSWATScore
	 */
	struct UW_PVP_RoundEnd_C_GetSWATScore_Params
	{
	public:
		int32_t                                                    Return_Value;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IPD0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetRoundWinningTeamText
	 */
	struct UW_PVP_RoundEnd_C_GetRoundWinningTeamText_Params
	{
	public:
		class FText                                                Return_Value;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetLosingTeamRibbonColor
	 */
	struct UW_PVP_RoundEnd_C_GetLosingTeamRibbonColor_Params
	{
	public:
		struct FLinearColor                                        Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetLosingTeamTextColor
	 */
	struct UW_PVP_RoundEnd_C_GetLosingTeamTextColor_Params
	{
	public:
		struct FSlateColor                                         Return_Value;                                            // 0x0000(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTeamRibbonColor
	 */
	struct UW_PVP_RoundEnd_C_GetWinningTeamRibbonColor_Params
	{
	public:
		struct FLinearColor                                        Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTeamTextColor
	 */
	struct UW_PVP_RoundEnd_C_GetWinningTeamTextColor_Params
	{
	public:
		struct FSlateColor                                         Return_Value;                                            // 0x0000(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateRoundColors
	 */
	struct UW_PVP_RoundEnd_C_UpdateRoundColors_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateSWATScore
	 */
	struct UW_PVP_RoundEnd_C_UpdateSWATScore_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateMLOScore
	 */
	struct UW_PVP_RoundEnd_C_UpdateMLOScore_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateRoundTagline
	 */
	struct UW_PVP_RoundEnd_C_UpdateRoundTagline_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.Construct
	 */
	struct UW_PVP_RoundEnd_C_Construct_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.OnWinsUpdated_Event_1
	 */
	struct UW_PVP_RoundEnd_C_OnWinsUpdated_Event_1_Params
	{	};

	/**
	 * Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.ExecuteUbergraph_W_PVP_RoundEnd
	 */
	struct UW_PVP_RoundEnd_C_ExecuteUbergraph_W_PVP_RoundEnd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJIH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

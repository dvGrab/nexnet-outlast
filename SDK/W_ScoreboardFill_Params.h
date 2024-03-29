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
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.GetTeamScoresVisibility
	 */
	struct UW_ScoreboardFill_C_GetTeamScoresVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJOI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Timelimit_Visibility_1
	 */
	struct UW_ScoreboardFill_C_Get_Timelimit_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LDFZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Timelimit_Text_1
	 */
	struct UW_ScoreboardFill_C_Get_Timelimit_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Status_Visibility_1
	 */
	struct UW_ScoreboardFill_C_Get_Status_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.UsesScoring
	 */
	struct UW_ScoreboardFill_C_UsesScoring_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_813V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.HasReinforcements
	 */
	struct UW_ScoreboardFill_C_HasReinforcements_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CPEZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.IsVIP
	 */
	struct UW_ScoreboardFill_C_IsVIP_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4WUN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.GetVisibility_1
	 */
	struct UW_ScoreboardFill_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75IG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.GetBlueTeamScoreText
	 */
	struct UW_ScoreboardFill_C_GetBlueTeamScoreText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.GetRedTeamScoreText
	 */
	struct UW_ScoreboardFill_C_GetRedTeamScoreText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Get_ReinforcementTimeRemaining_Text_1
	 */
	struct UW_ScoreboardFill_C_Get_ReinforcementTimeRemaining_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Get_HoldVIPTimeRemaining_Text_1
	 */
	struct UW_ScoreboardFill_C_Get_HoldVIPTimeRemaining_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Construct
	 */
	struct UW_ScoreboardFill_C_Construct_Params
	{	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.RefreshScoreboard
	 */
	struct UW_ScoreboardFill_C_RefreshScoreboard_Params
	{	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Destruct
	 */
	struct UW_ScoreboardFill_C_Destruct_Params
	{	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.PreConstruct
	 */
	struct UW_ScoreboardFill_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.Tick
	 */
	struct UW_ScoreboardFill_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ScoreboardFill.W_ScoreboardFill_C.ExecuteUbergraph_W_ScoreboardFill
	 */
	struct UW_ScoreboardFill_C_ExecuteUbergraph_W_ScoreboardFill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GVXE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

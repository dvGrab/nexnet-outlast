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
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Status_Visibility_1
	 */
	struct UW_Scoreboard_Line_C_Get_Status_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Status_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Status_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Incapacitations_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Incapacitations_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_TimesArrested_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_TimesArrested_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.GetCheckmarkVisibility
	 */
	struct UW_Scoreboard_Line_C_GetCheckmarkVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOBH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Name_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Name_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_TextBlock_0_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_TextBlock_0_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Score_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Score_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Damage_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Damage_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.GetDeathsText
	 */
	struct UW_Scoreboard_Line_C_GetDeathsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Arrests_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Arrests_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Get_Kills_Text_1
	 */
	struct UW_Scoreboard_Line_C_Get_Kills_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.GetBrush_1
	 */
	struct UW_Scoreboard_Line_C_GetBrush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.Construct
	 */
	struct UW_Scoreboard_Line_C_Construct_Params
	{	};

	/**
	 * Function W_Scoreboard_Line.W_Scoreboard_Line_C.ExecuteUbergraph_W_Scoreboard_Line
	 */
	struct UW_Scoreboard_Line_C_ExecuteUbergraph_W_Scoreboard_Line_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PLLJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

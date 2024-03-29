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
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.Get_RoundCount_Visibility_1
	 */
	struct UMatchStartInformationWidget_C_Get_RoundCount_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.GetColorAndOpacity_1
	 */
	struct UMatchStartInformationWidget_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.GetText_2
	 */
	struct UMatchStartInformationWidget_C_GetText_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.GetText_1
	 */
	struct UMatchStartInformationWidget_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.Get_RoundCount_Text_1
	 */
	struct UMatchStartInformationWidget_C_Get_RoundCount_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.Construct
	 */
	struct UMatchStartInformationWidget_C_Construct_Params
	{	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.TryDisplayMatchStart
	 */
	struct UMatchStartInformationWidget_C_TryDisplayMatchStart_Params
	{	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.OnGameStarted
	 */
	struct UMatchStartInformationWidget_C_OnGameStarted_Params
	{	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.CustomEvent_1
	 */
	struct UMatchStartInformationWidget_C_CustomEvent_1_Params
	{	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.FadeOut
	 */
	struct UMatchStartInformationWidget_C_FadeOut_Params
	{	};

	/**
	 * Function MatchStartInformationWidget.MatchStartInformationWidget_C.ExecuteUbergraph_MatchStartInformationWidget
	 */
	struct UMatchStartInformationWidget_C_ExecuteUbergraph_MatchStartInformationWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P2LF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

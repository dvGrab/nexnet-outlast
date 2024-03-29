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
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetVisibility_1
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9X06[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetMatchWinnerTextSimple
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetMatchWinnerTextSimple_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.OnKeyDown
	 */
	struct UW_MatchEndScreen_TeamGame_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetRoundWinnerText
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetRoundWinnerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetRoundWinnerColor
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetRoundWinnerColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetMatchWinnerColor
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetMatchWinnerColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetMatchWinnerText
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetMatchWinnerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetRoundCounterText
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetRoundCounterText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetRoundCounterVisibility
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetRoundCounterVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WEQN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.GetNextGameCountdownText
	 */
	struct UW_MatchEndScreen_TeamGame_C_GetNextGameCountdownText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.Tick
	 */
	struct UW_MatchEndScreen_TeamGame_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.Construct
	 */
	struct UW_MatchEndScreen_TeamGame_C_Construct_Params
	{	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.OnSequenceStarted_Event_1
	 */
	struct UW_MatchEndScreen_TeamGame_C_OnSequenceStarted_Event_1_Params
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.CustomEvent_1
	 */
	struct UW_MatchEndScreen_TeamGame_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_MatchEndScreen_TeamGame.W_MatchEndScreen_TeamGame_C.ExecuteUbergraph_W_MatchEndScreen_TeamGame
	 */
	struct UW_MatchEndScreen_TeamGame_C_ExecuteUbergraph_W_MatchEndScreen_TeamGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NH89[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

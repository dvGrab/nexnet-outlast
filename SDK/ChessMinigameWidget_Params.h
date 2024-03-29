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
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.RefreshPlayersRating
	 */
	struct UChessMinigameWidget_C_RefreshPlayersRating_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.Get_WaitingForPlayer_TXT_1_Text_1
	 */
	struct UChessMinigameWidget_C_Get_WaitingForPlayer_TXT_1_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.Get_MatchCountdownText_Text_1
	 */
	struct UChessMinigameWidget_C_Get_MatchCountdownText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.GetExitingPercent
	 */
	struct UChessMinigameWidget_C_GetExitingPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.OnExitingChange
	 */
	struct UChessMinigameWidget_C_OnExitingChange_Params
	{
	public:
		bool                                                       bExiting;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PBIV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartExitTimestamp;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.SetBindLocalPanel
	 */
	struct UChessMinigameWidget_C_SetBindLocalPanel_Params
	{
	public:
		bool                                                       bBind;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42Y2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.GetCroppedName
	 */
	struct UChessMinigameWidget_C_GetCroppedName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    MaxChars;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T2R8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.SetupPlayerNames
	 */
	struct UChessMinigameWidget_C_SetupPlayerNames_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.OnPlayerConnectionEvent
	 */
	struct UChessMinigameWidget_C_OnPlayerConnectionEvent_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessEndReasonChanged
	 */
	struct UChessMinigameWidget_C_OnChessEndReasonChanged_Params
	{
	public:
		EChessGameEndReason                                        ChessGameEndReason;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EChessTeam                                                 winningTeam;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.ChessGameTeamTurnChanged
	 */
	struct UChessMinigameWidget_C_ChessGameTeamTurnChanged_Params
	{
	public:
		EChessTeam                                                 Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GWRJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.ResetGame
	 */
	struct UChessMinigameWidget_C_ResetGame_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.PlayOuttro
	 */
	struct UChessMinigameWidget_C_PlayOuttro_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.PlayStartGame
	 */
	struct UChessMinigameWidget_C_PlayStartGame_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.Play Intro
	 */
	struct UChessMinigameWidget_C_Play_Intro_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.GetOpposingTeamTime
	 */
	struct UChessMinigameWidget_C_GetOpposingTeamTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.GetLocalTeamTime
	 */
	struct UChessMinigameWidget_C_GetLocalTeamTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessGameStateChanged
	 */
	struct UChessMinigameWidget_C_OnChessGameStateChanged_Params
	{
	public:
		EChessGameState                                            ChessGameState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.Init
	 */
	struct UChessMinigameWidget_C_Init_Params
	{
	public:
		class ARBChessBoardBase_C*                                 ChessBoard;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBChessBoardPanelComponent*                         LocalPanel;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.Construct
	 */
	struct UChessMinigameWidget_C_Construct_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.BindEvents
	 */
	struct UChessMinigameWidget_C_BindEvents_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.UnbindEvents
	 */
	struct UChessMinigameWidget_C_UnbindEvents_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.Destruct
	 */
	struct UChessMinigameWidget_C_Destruct_Params
	{	};

	/**
	 * Function ChessMinigameWidget.ChessMinigameWidget_C.ExecuteUbergraph_ChessMinigameWidget
	 */
	struct UChessMinigameWidget_C_ExecuteUbergraph_ChessMinigameWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

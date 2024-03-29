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
	 * Function ChessClock_BP.ChessClock_BP_C.OnTeamTurnChanged
	 */
	struct AChessClock_BP_C_OnTeamTurnChanged_Params
	{
	public:
		EChessTeam                                                 Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.OnGameStateChanged
	 */
	struct AChessClock_BP_C_OnGameStateChanged_Params
	{
	public:
		EChessGameState                                            ChessGameState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.ResetButtons
	 */
	struct AChessClock_BP_C_ResetButtons_Params
	{	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.SetButtonsTurnTo
	 */
	struct AChessClock_BP_C_SetButtonsTurnTo_Params
	{
	public:
		bool                                                       bPlayer1;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.UpdateTime
	 */
	struct AChessClock_BP_C_UpdateTime_Params
	{	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.SetTimeForPlayer
	 */
	struct AChessClock_BP_C_SetTimeForPlayer_Params
	{
	public:
		float                                                      TimeSeconds;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPlayer1;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NER[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.OnWorldFullyLoaded
	 */
	struct AChessClock_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.ReceiveTick
	 */
	struct AChessClock_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.OnWorldPopulateFinished
	 */
	struct AChessClock_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.SwitchButtonDelayed
	 */
	struct AChessClock_BP_C_SwitchButtonDelayed_Params
	{
	public:
		bool                                                       bPlayer1;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChessClock_BP.ChessClock_BP_C.ExecuteUbergraph_ChessClock_BP
	 */
	struct AChessClock_BP_C_ExecuteUbergraph_ChessClock_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

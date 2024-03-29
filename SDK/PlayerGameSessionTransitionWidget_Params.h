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
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.GetTransitionText
	 */
	struct UPlayerGameSessionTransitionWidget_C_GetTransitionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeOutCompleted
	 */
	struct UPlayerGameSessionTransitionWidget_C_FadeOutCompleted_Params
	{	};

	/**
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Show
	 */
	struct UPlayerGameSessionTransitionWidget_C_Event_Show_Params
	{	};

	/**
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Hide
	 */
	struct UPlayerGameSessionTransitionWidget_C_Event_Hide_Params
	{	};

	/**
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeInCompleted
	 */
	struct UPlayerGameSessionTransitionWidget_C_FadeInCompleted_Params
	{	};

	/**
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Update
	 */
	struct UPlayerGameSessionTransitionWidget_C_Update_Params
	{	};

	/**
	 * Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.ExecuteUbergraph_PlayerGameSessionTransitionWidget
	 */
	struct UPlayerGameSessionTransitionWidget_C_ExecuteUbergraph_PlayerGameSessionTransitionWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MWCD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

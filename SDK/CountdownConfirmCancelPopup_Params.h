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
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Update Countdown Text
	 */
	struct UCountdownConfirmCancelPopup_C_Update_Countdown_Text_Params
	{
	public:
		int32_t                                                    Countdown;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7T3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.OnCountdownEnds
	 */
	struct UCountdownConfirmCancelPopup_C_OnCountdownEnds_Params
	{	};

	/**
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.StartCountdown
	 */
	struct UCountdownConfirmCancelPopup_C_StartCountdown_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Event_InitializePopup
	 */
	struct UCountdownConfirmCancelPopup_C_Event_InitializePopup_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                MainText;                                                // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                ConfirmText;                                             // 0x0030(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                CancelText;                                              // 0x0048(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Destruct
	 */
	struct UCountdownConfirmCancelPopup_C_Destruct_Params
	{	};

	/**
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Tick
	 */
	struct UCountdownConfirmCancelPopup_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.ExecuteUbergraph_CountdownConfirmCancelPopup
	 */
	struct UCountdownConfirmCancelPopup_C_ExecuteUbergraph_CountdownConfirmCancelPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_2
	 */
	struct UPlayerHud_C_SequenceEvent__ENTRYPOINTPlayerHud_2_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_1
	 */
	struct UPlayerHud_C_SequenceEvent__ENTRYPOINTPlayerHud_1_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_HideBadgeProgress
	 */
	struct UPlayerHud_C_Event_HideBadgeProgress_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_ShowBadgeProgress
	 */
	struct UPlayerHud_C_Event_ShowBadgeProgress_Params
	{
	public:
		struct FRBBadgeHudProgressDisplayDetails                   progress;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PlayerHud.PlayerHud_C.PlayTransitionFeedback
	 */
	struct UPlayerHud_C_PlayTransitionFeedback_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.BlackoutCompleted
	 */
	struct UPlayerHud_C_BlackoutCompleted_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Construct
	 */
	struct UPlayerHud_C_Construct_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_OnResetHud
	 */
	struct UPlayerHud_C_Event_OnResetHud_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_StartTransitionFeedback
	 */
	struct UPlayerHud_C_Event_StartTransitionFeedback_Params
	{
	public:
		float                                                      blackoutDuration;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHud.PlayerHud_C.TransitionFeedbackFinished
	 */
	struct UPlayerHud_C_TransitionFeedbackFinished_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_ShowInteractionMessage
	 */
	struct UPlayerHud_C_Event_ShowInteractionMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EGameMessageCategory                                       GameMessageCategory;                                     // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_HideInteractionMessage
	 */
	struct UPlayerHud_C_Event_HideInteractionMessage_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Destruct
	 */
	struct UPlayerHud_C_Destruct_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_ForceUpdateSwapIcons
	 */
	struct UPlayerHud_C_Event_ForceUpdateSwapIcons_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.OnIncapacitatedVisibilityChanged
	 */
	struct UPlayerHud_C_OnIncapacitatedVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHud.PlayerHud_C.Event_OnHUDOpacityChanged
	 */
	struct UPlayerHud_C_Event_OnHUDOpacityChanged_Params
	{	};

	/**
	 * Function PlayerHud.PlayerHud_C.ChangeCrosshairVisibility
	 */
	struct UPlayerHud_C_ChangeCrosshairVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHud.PlayerHud_C.ExecuteUbergraph_PlayerHud
	 */
	struct UPlayerHud_C_ExecuteUbergraph_PlayerHud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHud.PlayerHud_C.FadeInCompleted__DelegateSignature
	 */
	struct UPlayerHud_C_FadeInCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

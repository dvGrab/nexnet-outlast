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
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText
	 */
	struct UBackToLobbyMenu_C_UpdateWarningText_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility
	 */
	struct UBackToLobbyMenu_C_UpdateLoadingWidgetVisibility_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility
	 */
	struct UBackToLobbyMenu_C_UpdateShowWithPartyVisibility_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility
	 */
	struct UBackToLobbyMenu_C_UpdateControlVisibility_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText
	 */
	struct UBackToLobbyMenu_C_GetWarningText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled
	 */
	struct UBackToLobbyMenu_C_IsLeaveWithPartyEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled
	 */
	struct UBackToLobbyMenu_C_AreButtonsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBackToLobbyMenu_C_BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh
	 */
	struct UBackToLobbyMenu_C_Event_Refresh_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPush
	 */
	struct UBackToLobbyMenu_C_Event_OnPush_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPop
	 */
	struct UBackToLobbyMenu_C_Event_OnPop_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBackToLobbyMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveWithParty
	 */
	struct UBackToLobbyMenu_C_LeaveWithParty_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveAlone
	 */
	struct UBackToLobbyMenu_C_LeaveAlone_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBackToLobbyMenu_C_BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu
	 */
	struct UBackToLobbyMenu_C_ExecuteUbergraph_BackToLobbyMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0D6O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

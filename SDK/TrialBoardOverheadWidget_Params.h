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
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.OnFocusLost
	 */
	struct UTrialBoardOverheadWidget_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.OnFocusReceived
	 */
	struct UTrialBoardOverheadWidget_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPerksList
	 */
	struct UTrialBoardOverheadWidget_C_SetupPerksList_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel
	 */
	struct UTrialBoardOverheadWidget_C_SetupPlayerLevel_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon
	 */
	struct UTrialBoardOverheadWidget_C_SetupPartyLeaderIcon_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill
	 */
	struct UTrialBoardOverheadWidget_C_SetupActiveSkill_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName
	 */
	struct UTrialBoardOverheadWidget_C_SetName_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh
	 */
	struct UTrialBoardOverheadWidget_C_Event_Refresh_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
	 */
	struct UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_1_OnHoveredEvent__DelegateSignature
	 */
	struct UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_1_OnHoveredEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_2_OnUnhoveredEvent__DelegateSignature
	 */
	struct UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_2_OnUnhoveredEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget
	 */
	struct UTrialBoardOverheadWidget_C_ExecuteUbergraph_TrialBoardOverheadWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

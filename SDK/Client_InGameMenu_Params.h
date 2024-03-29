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
	 * Function Client_InGameMenu.Client_InGameMenu_C.SetupTrialInfos
	 */
	struct UClient_InGameMenu_C_SetupTrialInfos_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Setup Loadout
	 */
	struct UClient_InGameMenu_C_Setup_Loadout_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.OnMouseButtonDown
	 */
	struct UClient_InGameMenu_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.SetupVariators
	 */
	struct UClient_InGameMenu_C_SetupVariators_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.ShowGroup
	 */
	struct UClient_InGameMenu_C_ShowGroup_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.ShowSystem
	 */
	struct UClient_InGameMenu_C_ShowSystem_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.GetQuitFacilityButtonsEnabled
	 */
	struct UClient_InGameMenu_C_GetQuitFacilityButtonsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnIsEnabled
	 */
	struct UClient_InGameMenu_C_GetReturnToLobbyBtnIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZBC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnVisibility
	 */
	struct UClient_InGameMenu_C_GetReturnToLobbyBtnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P4WF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.GetDevOptionsBtnVisibility
	 */
	struct UClient_InGameMenu_C_GetDevOptionsBtnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Construct
	 */
	struct UClient_InGameMenu_C_Construct_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.PreConstruct
	 */
	struct UClient_InGameMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Destruct
	 */
	struct UClient_InGameMenu_C_Destruct_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UClient_InGameMenu_C_BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Event_OnPush
	 */
	struct UClient_InGameMenu_C_Event_OnPush_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabLeft_Pressed
	 */
	struct UClient_InGameMenu_C_Event_MenuTabLeft_Pressed_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabRight_Pressed
	 */
	struct UClient_InGameMenu_C_Event_MenuTabRight_Pressed_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.Event_OnMenuSettingsModified
	 */
	struct UClient_InGameMenu_C_Event_OnMenuSettingsModified_Params
	{	};

	/**
	 * Function Client_InGameMenu.Client_InGameMenu_C.ExecuteUbergraph_Client_InGameMenu
	 */
	struct UClient_InGameMenu_C_ExecuteUbergraph_Client_InGameMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

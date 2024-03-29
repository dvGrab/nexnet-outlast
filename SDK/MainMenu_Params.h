#pragma once

/**
 * Name: OUTLAST
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
	 * Function MainMenu.MainMenu_C.GetFirstDisplayedEntry
	 */
	struct UMainMenu_C_GetFirstDisplayedEntry_Params
	{
	public:
		class UMainMenuButton_C*                                   NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.GamepadNav_NewsToButtons
	 */
	struct UMainMenu_C_GamepadNav_NewsToButtons_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FV6L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.GamepadNav_ButtonsToNews
	 */
	struct UMainMenu_C_GamepadNav_ButtonsToNews_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKGE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.OnFocusReceived
	 */
	struct UMainMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMenu.MainMenu_C.Get_TutorialButton_Visibility_1
	 */
	struct UMainMenu_C_Get_TutorialButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.Get_EnterButton_Visibility_1
	 */
	struct UMainMenu_C_Get_EnterButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.GetRejoinSoloGameSessionButtonVisibility
	 */
	struct UMainMenu_C_GetRejoinSoloGameSessionButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.GetRejoinPartyButtonVisibility
	 */
	struct UMainMenu_C_GetRejoinPartyButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.Get_Crossplay_Text_1
	 */
	struct UMainMenu_C_Get_Crossplay_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMenu.MainMenu_C.StartGame
	 */
	struct UMainMenu_C_StartGame_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.GetChangelist
	 */
	struct UMainMenu_C_GetChangelist_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.Get_SpectateGridPanel_Visibility_1
	 */
	struct UMainMenu_C_Get_SpectateGridPanel_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.Construct
	 */
	struct UMainMenu_C_Construct_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature
	 */
	struct UMainMenu_C_BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.OnMainMenuFocused
	 */
	struct UMainMenu_C_OnMainMenuFocused_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 */
	struct UMainMenu_C_ExecuteUbergraph_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YL93[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

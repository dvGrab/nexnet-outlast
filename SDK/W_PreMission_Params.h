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
	 * Function W_PreMission.W_PreMission_C.UpdateHeader
	 */
	struct UW_PreMission_C_UpdateHeader_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PageName;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ReadyCount_Container_Visibility_1
	 */
	struct UW_PreMission_C_Get_ReadyCount_Container_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ReadyUpResumeGameButton_Visibility_1
	 */
	struct UW_PreMission_C_Get_ReadyUpResumeGameButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.AllPlayersReady
	 */
	struct UW_PreMission_C_AllPlayersReady_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZTF2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.GetNumPlayers
	 */
	struct UW_PreMission_C_GetNumPlayers_Params
	{
	public:
		int32_t                                                    Return_Value;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5IRL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_WidgetFocusButton_Visibility_1
	 */
	struct UW_PreMission_C_Get_WidgetFocusButton_Visibility_1_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Set Hotkeys
	 */
	struct UW_PreMission_C_Set_Hotkeys_Params
	{
	public:
		EPreMissionHotkeyGroups                                    HotkeyGroup;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_INGA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.UpdateHotkeyEntries
	 */
	struct UW_PreMission_C_UpdateHotkeyEntries_Params
	{
	public:
		TArray<struct Fst_HotkeySettings>                          Hotkeys;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.ExitPlanningMap
	 */
	struct UW_PreMission_C_ExitPlanningMap_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SetActiveNav
	 */
	struct UW_PreMission_C_SetActiveNav_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnStartFadeToPlanningMap
	 */
	struct UW_PreMission_C_OnStartFadeToPlanningMap_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnStartFadeToLoadout
	 */
	struct UW_PreMission_C_OnStartFadeToLoadout_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnStartFadeToBriefing
	 */
	struct UW_PreMission_C_OnStartFadeToBriefing_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.HandleMenuWideMultiInput (Up)
	 */
	struct UW_PreMission_C_HandleMenuWideMultiInput_Up_Params
	{
	public:
		struct FKeyEvent                                           Input;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Return_Value;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BDG4[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.HandleMenuWideMultiInput (Down)
	 */
	struct UW_PreMission_C_HandleMenuWideMultiInput_Down_Params
	{
	public:
		struct FKeyEvent                                           Input;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Return_Value;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UQVB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnTransitionToQuartermasterFinished
	 */
	struct UW_PreMission_C_OnTransitionToQuartermasterFinished_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.HideHUD
	 */
	struct UW_PreMission_C_HideHUD_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ShowHUD
	 */
	struct UW_PreMission_C_ShowHUD_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ReflectHUDSettings
	 */
	struct UW_PreMission_C_ReflectHUDSettings_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SmoothCountdown
	 */
	struct UW_PreMission_C_SmoothCountdown_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.AllowTeamSwapping
	 */
	struct UW_PreMission_C_AllowTeamSwapping_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_31NS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_LoadoutMenu_Switcher_Visibility
	 */
	struct UW_PreMission_C_Get_LoadoutMenu_Switcher_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.HandleMenuWideInput
	 */
	struct UW_PreMission_C_HandleMenuWideInput_Params
	{
	public:
		struct FKeyEvent                                           Input;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Return_Value;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VBCB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_HideUIButton_Visibility
	 */
	struct UW_PreMission_C_Get_HideUIButton_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_RenamePresetButton_Visibility
	 */
	struct UW_PreMission_C_Get_RenamePresetButton_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnMouseButtonDown
	 */
	struct UW_PreMission_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.IsUIHidden
	 */
	struct UW_PreMission_C_IsUIHidden_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.EnteringQuartermasterMenu
	 */
	struct UW_PreMission_C_EnteringQuartermasterMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnKeyUp
	 */
	struct UW_PreMission_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_MetaGameInfo_Container_Visibility
	 */
	struct UW_PreMission_C_Get_MetaGameInfo_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_SwapTeams_Box_Visibility
	 */
	struct UW_PreMission_C_Get_SwapTeams_Box_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnMouseButtonUp
	 */
	struct UW_PreMission_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.IsValidSelectionIndex
	 */
	struct UW_PreMission_C_IsValidSelectionIndex_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.CanUnselect
	 */
	struct UW_PreMission_C_CanUnselect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.CanExit
	 */
	struct UW_PreMission_C_CanExit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.ToggleUIVisibility
	 */
	struct UW_PreMission_C_ToggleUIVisibility_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UpdateCountdownDescriptionText
	 */
	struct UW_PreMission_C_UpdateCountdownDescriptionText_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ToggleMetaGameInfo
	 */
	struct UW_PreMission_C_ToggleMetaGameInfo_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnselectSwapTeams
	 */
	struct UW_PreMission_C_UnselectSwapTeams_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SelectSwapTeams
	 */
	struct UW_PreMission_C_SelectSwapTeams_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.HoverSwapTeams
	 */
	struct UW_PreMission_C_HoverSwapTeams_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnhoverSwapTeams
	 */
	struct UW_PreMission_C_UnhoverSwapTeams_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SwapTeams
	 */
	struct UW_PreMission_C_SwapTeams_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UpdateTootipText
	 */
	struct UW_PreMission_C_UpdateTootipText_Params
	{
	public:
		class FText                                                NewTooltipText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_Tooltip_Text_Visibility
	 */
	struct UW_PreMission_C_Get_Tooltip_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnStartFadeToQuartermaster
	 */
	struct UW_PreMission_C_OnStartFadeToQuartermaster_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnFadeToQuartermasterFinished
	 */
	struct UW_PreMission_C_OnFadeToQuartermasterFinished_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ExitQuartermasterMenu
	 */
	struct UW_PreMission_C_ExitQuartermasterMenu_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.EnterQuartermasterMenu
	 */
	struct UW_PreMission_C_EnterQuartermasterMenu_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.HideItemSelectionUI
	 */
	struct UW_PreMission_C_HideItemSelectionUI_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ShowItemSelectionUI
	 */
	struct UW_PreMission_C_ShowItemSelectionUI_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_CountdownTimer_Container_Visibility
	 */
	struct UW_PreMission_C_Get_CountdownTimer_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.UpdateWidgetStates
	 */
	struct UW_PreMission_C_UpdateWidgetStates_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_NightOperation_Text_Visibility
	 */
	struct UW_PreMission_C_Get_NightOperation_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_InGame_Container_Visibility
	 */
	struct UW_PreMission_C_Get_InGame_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SOZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.UpdateDebugInfo
	 */
	struct UW_PreMission_C_UpdateDebugInfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.SetNavigationMode (Mouse)
	 */
	struct UW_PreMission_C_SetNavigationMode_Mouse_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SetNavigationMode (Keyboard)
	 */
	struct UW_PreMission_C_SetNavigationMode_Keyboard_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Escape
	 */
	struct UW_PreMission_C_Escape_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ResumeGame
	 */
	struct UW_PreMission_C_ResumeGame_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnMouseMove
	 */
	struct UW_PreMission_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.HoverReadyUp
	 */
	struct UW_PreMission_C_HoverReadyUp_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnhoverReadyUp
	 */
	struct UW_PreMission_C_UnhoverReadyUp_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnselectReadyUp
	 */
	struct UW_PreMission_C_UnselectReadyUp_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SelectReadyUp
	 */
	struct UW_PreMission_C_SelectReadyUp_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnselectLoadoutCategory
	 */
	struct UW_PreMission_C_UnselectLoadoutCategory_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SelectLoadoutCategory
	 */
	struct UW_PreMission_C_SelectLoadoutCategory_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnhoverLoadoutCategory
	 */
	struct UW_PreMission_C_UnhoverLoadoutCategory_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.HoverLoadoutCategory
	 */
	struct UW_PreMission_C_HoverLoadoutCategory_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnselectUIElement
	 */
	struct UW_PreMission_C_UnselectUIElement_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.SelectUIElement
	 */
	struct UW_PreMission_C_SelectUIElement_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.UnhoverUIElement
	 */
	struct UW_PreMission_C_UnhoverUIElement_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.HoverUIElement
	 */
	struct UW_PreMission_C_HoverUIElement_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.PreviousColumn
	 */
	struct UW_PreMission_C_PreviousColumn_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.PreviousRow
	 */
	struct UW_PreMission_C_PreviousRow_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.NextColumn
	 */
	struct UW_PreMission_C_NextColumn_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.NextRow
	 */
	struct UW_PreMission_C_NextRow_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ReadyUpControls_BackButton_Visibility
	 */
	struct UW_PreMission_C_Get_ReadyUpControls_BackButton_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ReadyUp_Controls_Container_Visibility
	 */
	struct UW_PreMission_C_Get_ReadyUp_Controls_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_NavigationMouseControls_Container_Visibility
	 */
	struct UW_PreMission_C_Get_NavigationMouseControls_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_NavigationKeyboardControls_Container_Visibility
	 */
	struct UW_PreMission_C_Get_NavigationKeyboardControls_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_KeyboardControls_Button_Visibility
	 */
	struct UW_PreMission_C_Get_KeyboardControls_Button_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_BackButton_Container_Visibility
	 */
	struct UW_PreMission_C_Get_BackButton_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnKeyDown
	 */
	struct UW_PreMission_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_GameStartTimeRemaining_Text
	 */
	struct UW_PreMission_C_Get_GameStartTimeRemaining_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_MetaGame_Spacer_1_Visibility
	 */
	struct UW_PreMission_C_Get_MetaGame_Spacer_1_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ReadyCount_Container_Visibility
	 */
	struct UW_PreMission_C_Get_ReadyCount_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.IsAnyoneOnMLOTeam
	 */
	struct UW_PreMission_C_IsAnyoneOnMLOTeam_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SV21[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.IsAnyoneOnSWATTeam
	 */
	struct UW_PreMission_C_IsAnyoneOnSWATTeam_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GPVQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_SWATReadyCount_Text
	 */
	struct UW_PreMission_C_Get_SWATReadyCount_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_SWAT_ReadyCount_Container_Visibility
	 */
	struct UW_PreMission_C_Get_SWAT_ReadyCount_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_MLO_ReadyCount_Container_Visibility
	 */
	struct UW_PreMission_C_Get_MLO_ReadyCount_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_MLOReadyCountText
	 */
	struct UW_PreMission_C_Get_MLOReadyCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ServerName_Text_Visibility
	 */
	struct UW_PreMission_C_Get_ServerName_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ServerName_Text
	 */
	struct UW_PreMission_C_Get_ServerName_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_MapName_Text
	 */
	struct UW_PreMission_C_Get_MapName_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Get_ModeName_Text
	 */
	struct UW_PreMission_C_Get_ModeName_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnInitialized
	 */
	struct UW_PreMission_C_OnInitialized_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.PreConstruct
	 */
	struct UW_PreMission_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.FocusOnWidget
	 */
	struct UW_PreMission_C_FocusOnWidget_Params
	{
	public:
		class UWidget*                                             WidgetToFocus;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.Tick
	 */
	struct UW_PreMission_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnLoadoutLoaded
	 */
	struct UW_PreMission_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.AutoDetermineWidgetFocus
	 */
	struct UW_PreMission_C_AutoDetermineWidgetFocus_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.CustomEvent_1
	 */
	struct UW_PreMission_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnLoadoutItemPresetsLoaded
	 */
	struct UW_PreMission_C_OnLoadoutItemPresetsLoaded_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnLoadoutItemPresetsSaved
	 */
	struct UW_PreMission_C_OnLoadoutItemPresetsSaved_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Construct
	 */
	struct UW_PreMission_C_Construct_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnLoadoutItemAttachmentsSaved
	 */
	struct UW_PreMission_C_OnLoadoutItemAttachmentsSaved_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnWeaponDefaultFireModesLoaded
	 */
	struct UW_PreMission_C_OnWeaponDefaultFireModesLoaded_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.GoToLoadout
	 */
	struct UW_PreMission_C_GoToLoadout_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.GoToBriefing
	 */
	struct UW_PreMission_C_GoToBriefing_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.GoToLoadoutNoDelay
	 */
	struct UW_PreMission_C_GoToLoadoutNoDelay_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.GoToPlanningMap
	 */
	struct UW_PreMission_C_GoToPlanningMap_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DDVB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCoreUObject_FVector2D                              CursorPos;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature
	 */
	struct UW_PreMission_C_BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature_Params
	{
	public:
		float                                                      ZoomValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission.W_PreMission_C.HideBriefing
	 */
	struct UW_PreMission_C_HideBriefing_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.Destruct
	 */
	struct UW_PreMission_C_Destruct_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ToggleReady
	 */
	struct UW_PreMission_C_ToggleReady_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.OnSwatCharacterChanged
	 */
	struct UW_PreMission_C_OnSwatCharacterChanged_Params
	{	};

	/**
	 * Function W_PreMission.W_PreMission_C.ExecuteUbergraph_W_PreMission
	 */
	struct UW_PreMission_C_ExecuteUbergraph_W_PreMission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UV83[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

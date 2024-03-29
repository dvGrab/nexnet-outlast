/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UpdateHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PageName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PreMission_C::UpdateHeader(const class FText& HeaderText, const class FText& PageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UpdateHeader");
		
		UW_PreMission_C_UpdateHeader_Params params {};
		params.HeaderText = HeaderText;
		params.PageName = PageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ReadyCount_Container_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_ReadyCount_Container_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ReadyCount_Container_Visibility_1");
		
		UW_PreMission_C_Get_ReadyCount_Container_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ReadyUpResumeGameButton_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_ReadyUpResumeGameButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ReadyUpResumeGameButton_Visibility_1");
		
		UW_PreMission_C_Get_ReadyUpResumeGameButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.AllPlayersReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::AllPlayersReady(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.AllPlayersReady");
		
		UW_PreMission_C_AllPlayersReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.GetNumPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::GetNumPlayers(int32_t* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.GetNumPlayers");
		
		UW_PreMission_C_GetNumPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_WidgetFocusButton_Visibility_1
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::Get_WidgetFocusButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_WidgetFocusButton_Visibility_1");
		
		UW_PreMission_C_Get_WidgetFocusButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Set Hotkeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPreMissionHotkeyGroups                            HotkeyGroup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::Set_Hotkeys(EPreMissionHotkeyGroups HotkeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Set Hotkeys");
		
		UW_PreMission_C_Set_Hotkeys_Params params {};
		params.HotkeyGroup = HotkeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UpdateHotkeyEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct Fst_HotkeySettings>                  Hotkeys                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_PreMission_C::UpdateHotkeyEntries(TArray<struct Fst_HotkeySettings> Hotkeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UpdateHotkeyEntries");
		
		UW_PreMission_C_UpdateHotkeyEntries_Params params {};
		params.Hotkeys = Hotkeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ExitPlanningMap
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ExitPlanningMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ExitPlanningMap");
		
		UW_PreMission_C_ExitPlanningMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SetActiveNav
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::SetActiveNav(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SetActiveNav");
		
		UW_PreMission_C_SetActiveNav_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnStartFadeToPlanningMap
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnStartFadeToPlanningMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnStartFadeToPlanningMap");
		
		UW_PreMission_C_OnStartFadeToPlanningMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnStartFadeToLoadout
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnStartFadeToLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnStartFadeToLoadout");
		
		UW_PreMission_C_OnStartFadeToLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnStartFadeToBriefing
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnStartFadeToBriefing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnStartFadeToBriefing");
		
		UW_PreMission_C_OnStartFadeToBriefing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HandleMenuWideMultiInput (Up)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::HandleMenuWideMultiInput_Up(const struct FKeyEvent& Input, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HandleMenuWideMultiInput (Up)");
		
		UW_PreMission_C_HandleMenuWideMultiInput_Up_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HandleMenuWideMultiInput (Down)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::HandleMenuWideMultiInput_Down(const struct FKeyEvent& Input, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HandleMenuWideMultiInput (Down)");
		
		UW_PreMission_C_HandleMenuWideMultiInput_Down_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnTransitionToQuartermasterFinished
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnTransitionToQuartermasterFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnTransitionToQuartermasterFinished");
		
		UW_PreMission_C_OnTransitionToQuartermasterFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HideHUD
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HideHUD");
		
		UW_PreMission_C_HideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ShowHUD
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ShowHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ShowHUD");
		
		UW_PreMission_C_ShowHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ReflectHUDSettings
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ReflectHUDSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ReflectHUDSettings");
		
		UW_PreMission_C_ReflectHUDSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SmoothCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::SmoothCountdown(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SmoothCountdown");
		
		UW_PreMission_C_SmoothCountdown_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.AllowTeamSwapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::AllowTeamSwapping(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.AllowTeamSwapping");
		
		UW_PreMission_C_AllowTeamSwapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_LoadoutMenu_Switcher_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_LoadoutMenu_Switcher_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_LoadoutMenu_Switcher_Visibility");
		
		UW_PreMission_C_Get_LoadoutMenu_Switcher_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HandleMenuWideInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::HandleMenuWideInput(const struct FKeyEvent& Input, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HandleMenuWideInput");
		
		UW_PreMission_C_HandleMenuWideInput_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_HideUIButton_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_HideUIButton_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_HideUIButton_Visibility");
		
		UW_PreMission_C_Get_HideUIButton_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_RenamePresetButton_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_RenamePresetButton_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_RenamePresetButton_Visibility");
		
		UW_PreMission_C_Get_RenamePresetButton_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_PreMission_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnMouseButtonDown");
		
		UW_PreMission_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.IsUIHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::IsUIHidden(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.IsUIHidden");
		
		UW_PreMission_C_IsUIHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.EnteringQuartermasterMenu
	 * 		Flags  -> ()
	 */
	bool UW_PreMission_C::EnteringQuartermasterMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.EnteringQuartermasterMenu");
		
		UW_PreMission_C_EnteringQuartermasterMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_PreMission_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnKeyUp");
		
		UW_PreMission_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_MetaGameInfo_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_MetaGameInfo_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_MetaGameInfo_Container_Visibility");
		
		UW_PreMission_C_Get_MetaGameInfo_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_SwapTeams_Box_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_SwapTeams_Box_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_SwapTeams_Box_Visibility");
		
		UW_PreMission_C_Get_SwapTeams_Box_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_PreMission_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnMouseButtonUp");
		
		UW_PreMission_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.IsValidSelectionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::IsValidSelectionIndex(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.IsValidSelectionIndex");
		
		UW_PreMission_C_IsValidSelectionIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.CanUnselect
	 * 		Flags  -> ()
	 */
	bool UW_PreMission_C::CanUnselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.CanUnselect");
		
		UW_PreMission_C_CanUnselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.CanExit
	 * 		Flags  -> ()
	 */
	bool UW_PreMission_C::CanExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.CanExit");
		
		UW_PreMission_C_CanExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ToggleUIVisibility
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ToggleUIVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ToggleUIVisibility");
		
		UW_PreMission_C_ToggleUIVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UpdateCountdownDescriptionText
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UpdateCountdownDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UpdateCountdownDescriptionText");
		
		UW_PreMission_C_UpdateCountdownDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ToggleMetaGameInfo
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ToggleMetaGameInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ToggleMetaGameInfo");
		
		UW_PreMission_C_ToggleMetaGameInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnselectSwapTeams
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnselectSwapTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnselectSwapTeams");
		
		UW_PreMission_C_UnselectSwapTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SelectSwapTeams
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SelectSwapTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SelectSwapTeams");
		
		UW_PreMission_C_SelectSwapTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HoverSwapTeams
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HoverSwapTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HoverSwapTeams");
		
		UW_PreMission_C_HoverSwapTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnhoverSwapTeams
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnhoverSwapTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnhoverSwapTeams");
		
		UW_PreMission_C_UnhoverSwapTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SwapTeams
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SwapTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SwapTeams");
		
		UW_PreMission_C_SwapTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UpdateTootipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewTooltipText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PreMission_C::UpdateTootipText(const class FText& NewTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UpdateTootipText");
		
		UW_PreMission_C_UpdateTootipText_Params params {};
		params.NewTooltipText = NewTooltipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_Tooltip_Text_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_Tooltip_Text_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_Tooltip_Text_Visibility");
		
		UW_PreMission_C_Get_Tooltip_Text_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnStartFadeToQuartermaster
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnStartFadeToQuartermaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnStartFadeToQuartermaster");
		
		UW_PreMission_C_OnStartFadeToQuartermaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnFadeToQuartermasterFinished
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnFadeToQuartermasterFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnFadeToQuartermasterFinished");
		
		UW_PreMission_C_OnFadeToQuartermasterFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ExitQuartermasterMenu
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ExitQuartermasterMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ExitQuartermasterMenu");
		
		UW_PreMission_C_ExitQuartermasterMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.EnterQuartermasterMenu
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::EnterQuartermasterMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.EnterQuartermasterMenu");
		
		UW_PreMission_C_EnterQuartermasterMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HideItemSelectionUI
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HideItemSelectionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HideItemSelectionUI");
		
		UW_PreMission_C_HideItemSelectionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ShowItemSelectionUI
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ShowItemSelectionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ShowItemSelectionUI");
		
		UW_PreMission_C_ShowItemSelectionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_CountdownTimer_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_CountdownTimer_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_CountdownTimer_Container_Visibility");
		
		UW_PreMission_C_Get_CountdownTimer_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UpdateWidgetStates
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UpdateWidgetStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UpdateWidgetStates");
		
		UW_PreMission_C_UpdateWidgetStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_NightOperation_Text_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_NightOperation_Text_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_NightOperation_Text_Visibility");
		
		UW_PreMission_C_Get_NightOperation_Text_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_InGame_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_InGame_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_InGame_Container_Visibility");
		
		UW_PreMission_C_Get_InGame_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UpdateDebugInfo
	 * 		Flags  -> ()
	 */
	bool UW_PreMission_C::UpdateDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UpdateDebugInfo");
		
		UW_PreMission_C_UpdateDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SetNavigationMode (Mouse)
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SetNavigationMode_Mouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SetNavigationMode (Mouse)");
		
		UW_PreMission_C_SetNavigationMode_Mouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SetNavigationMode (Keyboard)
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SetNavigationMode_Keyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SetNavigationMode (Keyboard)");
		
		UW_PreMission_C_SetNavigationMode_Keyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Escape
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Escape");
		
		UW_PreMission_C_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ResumeGame
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ResumeGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ResumeGame");
		
		UW_PreMission_C_ResumeGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_PreMission_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnMouseMove");
		
		UW_PreMission_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HoverReadyUp
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HoverReadyUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HoverReadyUp");
		
		UW_PreMission_C_HoverReadyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnhoverReadyUp
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnhoverReadyUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnhoverReadyUp");
		
		UW_PreMission_C_UnhoverReadyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnselectReadyUp
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnselectReadyUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnselectReadyUp");
		
		UW_PreMission_C_UnselectReadyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SelectReadyUp
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SelectReadyUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SelectReadyUp");
		
		UW_PreMission_C_SelectReadyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnselectLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnselectLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnselectLoadoutCategory");
		
		UW_PreMission_C_UnselectLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SelectLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SelectLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SelectLoadoutCategory");
		
		UW_PreMission_C_SelectLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnhoverLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnhoverLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnhoverLoadoutCategory");
		
		UW_PreMission_C_UnhoverLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HoverLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HoverLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HoverLoadoutCategory");
		
		UW_PreMission_C_HoverLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnselectUIElement
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnselectUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnselectUIElement");
		
		UW_PreMission_C_UnselectUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.SelectUIElement
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::SelectUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.SelectUIElement");
		
		UW_PreMission_C_SelectUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.UnhoverUIElement
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::UnhoverUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.UnhoverUIElement");
		
		UW_PreMission_C_UnhoverUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HoverUIElement
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HoverUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HoverUIElement");
		
		UW_PreMission_C_HoverUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.PreviousColumn
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::PreviousColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.PreviousColumn");
		
		UW_PreMission_C_PreviousColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.PreviousRow");
		
		UW_PreMission_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.NextColumn
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::NextColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.NextColumn");
		
		UW_PreMission_C_NextColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.NextRow");
		
		UW_PreMission_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ReadyUpControls_BackButton_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_ReadyUpControls_BackButton_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ReadyUpControls_BackButton_Visibility");
		
		UW_PreMission_C_Get_ReadyUpControls_BackButton_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ReadyUp_Controls_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_ReadyUp_Controls_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ReadyUp_Controls_Container_Visibility");
		
		UW_PreMission_C_Get_ReadyUp_Controls_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_NavigationMouseControls_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_NavigationMouseControls_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_NavigationMouseControls_Container_Visibility");
		
		UW_PreMission_C_Get_NavigationMouseControls_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_NavigationKeyboardControls_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_NavigationKeyboardControls_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_NavigationKeyboardControls_Container_Visibility");
		
		UW_PreMission_C_Get_NavigationKeyboardControls_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_KeyboardControls_Button_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_KeyboardControls_Button_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_KeyboardControls_Button_Visibility");
		
		UW_PreMission_C_Get_KeyboardControls_Button_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_BackButton_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_BackButton_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_BackButton_Container_Visibility");
		
		UW_PreMission_C_Get_BackButton_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_PreMission_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnKeyDown");
		
		UW_PreMission_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_GameStartTimeRemaining_Text
	 * 		Flags  -> ()
	 */
	class FText UW_PreMission_C::Get_GameStartTimeRemaining_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_GameStartTimeRemaining_Text");
		
		UW_PreMission_C_Get_GameStartTimeRemaining_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_MetaGame_Spacer_1_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_MetaGame_Spacer_1_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_MetaGame_Spacer_1_Visibility");
		
		UW_PreMission_C_Get_MetaGame_Spacer_1_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ReadyCount_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_ReadyCount_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ReadyCount_Container_Visibility");
		
		UW_PreMission_C_Get_ReadyCount_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.IsAnyoneOnMLOTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::IsAnyoneOnMLOTeam(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.IsAnyoneOnMLOTeam");
		
		UW_PreMission_C_IsAnyoneOnMLOTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.IsAnyoneOnSWATTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::IsAnyoneOnSWATTeam(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.IsAnyoneOnSWATTeam");
		
		UW_PreMission_C_IsAnyoneOnSWATTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_SWATReadyCount_Text
	 * 		Flags  -> ()
	 */
	class FText UW_PreMission_C::Get_SWATReadyCount_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_SWATReadyCount_Text");
		
		UW_PreMission_C_Get_SWATReadyCount_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_SWAT_ReadyCount_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_SWAT_ReadyCount_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_SWAT_ReadyCount_Container_Visibility");
		
		UW_PreMission_C_Get_SWAT_ReadyCount_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_MLO_ReadyCount_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_MLO_ReadyCount_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_MLO_ReadyCount_Container_Visibility");
		
		UW_PreMission_C_Get_MLO_ReadyCount_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_MLOReadyCountText
	 * 		Flags  -> ()
	 */
	class FText UW_PreMission_C::Get_MLOReadyCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_MLOReadyCountText");
		
		UW_PreMission_C_Get_MLOReadyCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ServerName_Text_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_PreMission_C::Get_ServerName_Text_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ServerName_Text_Visibility");
		
		UW_PreMission_C_Get_ServerName_Text_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ServerName_Text
	 * 		Flags  -> ()
	 */
	class FText UW_PreMission_C::Get_ServerName_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ServerName_Text");
		
		UW_PreMission_C_Get_ServerName_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_MapName_Text
	 * 		Flags  -> ()
	 */
	class FText UW_PreMission_C::Get_MapName_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_MapName_Text");
		
		UW_PreMission_C_Get_MapName_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Get_ModeName_Text
	 * 		Flags  -> ()
	 */
	class FText UW_PreMission_C::Get_ModeName_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Get_ModeName_Text");
		
		UW_PreMission_C_Get_ModeName_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnInitialized");
		
		UW_PreMission_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.PreConstruct");
		
		UW_PreMission_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_PreMission_C_BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UW_PreMission_C_BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");
		
		UW_PreMission_C_BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UW_PreMission_C_BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UW_PreMission_C_BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.FocusOnWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFocus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::FocusOnWidget(class UWidget* WidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.FocusOnWidget");
		
		UW_PreMission_C_FocusOnWidget_Params params {};
		params.WidgetToFocus = WidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Tick");
		
		UW_PreMission_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");
		
		UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature");
		
		UW_PreMission_C_BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature");
		
		UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature");
		
		UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature");
		
		UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature");
		
		UW_PreMission_C_BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnLoadoutLoaded");
		
		UW_PreMission_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.AutoDetermineWidgetFocus
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::AutoDetermineWidgetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.AutoDetermineWidgetFocus");
		
		UW_PreMission_C_AutoDetermineWidgetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.CustomEvent_1");
		
		UW_PreMission_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnLoadoutItemPresetsLoaded
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnLoadoutItemPresetsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnLoadoutItemPresetsLoaded");
		
		UW_PreMission_C_OnLoadoutItemPresetsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnLoadoutItemPresetsSaved
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnLoadoutItemPresetsSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnLoadoutItemPresetsSaved");
		
		UW_PreMission_C_OnLoadoutItemPresetsSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Construct");
		
		UW_PreMission_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnLoadoutItemAttachmentsSaved
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnLoadoutItemAttachmentsSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnLoadoutItemAttachmentsSaved");
		
		UW_PreMission_C_OnLoadoutItemAttachmentsSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnWeaponDefaultFireModesLoaded
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnWeaponDefaultFireModesLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnWeaponDefaultFireModesLoaded");
		
		UW_PreMission_C_OnWeaponDefaultFireModesLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.GoToLoadout
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::GoToLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.GoToLoadout");
		
		UW_PreMission_C_GoToLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.GoToBriefing
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::GoToBriefing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.GoToBriefing");
		
		UW_PreMission_C_GoToBriefing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.GoToLoadoutNoDelay
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::GoToLoadoutNoDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.GoToLoadoutNoDelay");
		
		UW_PreMission_C_GoToLoadoutNoDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.GoToPlanningMap
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::GoToPlanningMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.GoToPlanningMap");
		
		UW_PreMission_C_GoToPlanningMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature");
		
		UW_PreMission_C_BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature");
		
		UW_PreMission_C_BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature");
		
		UW_PreMission_C_BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCoreUObject_FVector2D                      CursorPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature(bool Pressed, const struct FCoreUObject_FVector2D& CursorPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature");
		
		UW_PreMission_C_BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature_Params params {};
		params.Pressed = Pressed;
		params.CursorPos = CursorPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ZoomValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature(float ZoomValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature");
		
		UW_PreMission_C_BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature_Params params {};
		params.ZoomValue = ZoomValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.HideBriefing
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::HideBriefing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.HideBriefing");
		
		UW_PreMission_C_HideBriefing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.Destruct");
		
		UW_PreMission_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ToggleReady
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::ToggleReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ToggleReady");
		
		UW_PreMission_C_ToggleReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.OnSwatCharacterChanged
	 * 		Flags  -> ()
	 */
	void UW_PreMission_C::OnSwatCharacterChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.OnSwatCharacterChanged");
		
		UW_PreMission_C_OnSwatCharacterChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission.W_PreMission_C.ExecuteUbergraph_W_PreMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_C::ExecuteUbergraph_W_PreMission(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission.W_PreMission_C.ExecuteUbergraph_W_PreMission");
		
		UW_PreMission_C_ExecuteUbergraph_W_PreMission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PreMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PreMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PreMission.W_PreMission_C");
		return ptr;
	}

}



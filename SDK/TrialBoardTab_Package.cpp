/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.SetupCanvasEntryNavigationRules
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::SetupCanvasEntryNavigationRules(class UWidget* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.SetupCanvasEntryNavigationRules");
		
		UTrialBoardTab_C_SetupCanvasEntryNavigationRules_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.StartGroupFinder
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::StartGroupFinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.StartGroupFinder");
		
		UTrialBoardTab_C_StartGroupFinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetFindAGroupButtonNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GetFindAGroupButtonNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetFindAGroupButtonNavigation");
		
		UTrialBoardTab_C_GetFindAGroupButtonNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetSelectedTrialNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GetSelectedTrialNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetSelectedTrialNavigation");
		
		UTrialBoardTab_C_GetSelectedTrialNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetSelectedProgramNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GetSelectedProgramNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetSelectedProgramNavigation");
		
		UTrialBoardTab_C_GetSelectedProgramNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetAnyTrialNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GetAnyTrialNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetAnyTrialNavigation");
		
		UTrialBoardTab_C_GetAnyTrialNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ChangeFilter
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ChangeFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ChangeFilter");
		
		UTrialBoardTab_C_ChangeFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnFilterButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::OnFilterButtonClicked(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnFilterButtonClicked");
		
		UTrialBoardTab_C_OnFilterButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.UpdateDisplayedTrialOptions
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::UpdateDisplayedTrialOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.UpdateDisplayedTrialOptions");
		
		UTrialBoardTab_C_UpdateDisplayedTrialOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ToggleGroupFinder
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ToggleGroupFinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ToggleGroupFinder");
		
		UTrialBoardTab_C_ToggleGroupFinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnAddAFriendButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::OnAddAFriendButtonClicked(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnAddAFriendButtonClicked");
		
		UTrialBoardTab_C_OnAddAFriendButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowAddAFriend
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ShowAddAFriend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowAddAFriend");
		
		UTrialBoardTab_C_ShowAddAFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetPageSubtitle
	 * 		Flags  -> ()
	 */
	class FText UTrialBoardTab_C::GetPageSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetPageSubtitle");
		
		UTrialBoardTab_C_GetPageSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTrialBoardTab_C::OnInputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnInputSourceChanged");
		
		UTrialBoardTab_C_OnInputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetFocusSelectTrialButton
	 * 		Flags  -> ()
	 */
	class UWidget* UTrialBoardTab_C::GetFocusSelectTrialButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetFocusSelectTrialButton");
		
		UTrialBoardTab_C_GetFocusSelectTrialButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.FocusNextVariator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::FocusNextVariator(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.FocusNextVariator");
		
		UTrialBoardTab_C_FocusNextVariator_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.FocusPreviousVariator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::FocusPreviousVariator(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.FocusPreviousVariator");
		
		UTrialBoardTab_C_FocusPreviousVariator_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.FocusFirstVariator
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::FocusFirstVariator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.FocusFirstVariator");
		
		UTrialBoardTab_C_FocusFirstVariator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.FocusNextTrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::FocusNextTrial(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.FocusNextTrial");
		
		UTrialBoardTab_C_FocusNextTrial_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.FocusPreviousTrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::FocusPreviousTrial(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.FocusPreviousTrial");
		
		UTrialBoardTab_C_FocusPreviousTrial_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.FocusInitialTrial
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::FocusInitialTrial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.FocusInitialTrial");
		
		UTrialBoardTab_C_FocusInitialTrial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.IsTrialListScrollButtonDownEnabled
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::IsTrialListScrollButtonDownEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.IsTrialListScrollButtonDownEnabled");
		
		UTrialBoardTab_C_IsTrialListScrollButtonDownEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.IsTrialListScrollButtonTopEnabled
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::IsTrialListScrollButtonTopEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.IsTrialListScrollButtonTopEnabled");
		
		UTrialBoardTab_C_IsTrialListScrollButtonTopEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetTrialBlockNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            blockNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::GetTrialBlockNumber(const class FName& TrialId, int32_t* blockNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetTrialBlockNumber");
		
		UTrialBoardTab_C_GetTrialBlockNumber_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (blockNumber != nullptr)
			*blockNumber = params.blockNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnTrialSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::OnTrialSelected(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnTrialSelected");
		
		UTrialBoardTab_C_OnTrialSelected_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetTrioNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GetTrioNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetTrioNavigation");
		
		UTrialBoardTab_C_GetTrioNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetQuadNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GetQuadNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetQuadNavigation");
		
		UTrialBoardTab_C_GetQuadNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetGroupFinderBtnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UTrialBoardTab_C::GetGroupFinderBtnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetGroupFinderBtnVisibility");
		
		UTrialBoardTab_C_GetGroupFinderBtnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.UpdateGroupFinderOptions
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::UpdateGroupFinderOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.UpdateGroupFinderOptions");
		
		UTrialBoardTab_C_UpdateGroupFinderOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowGroupFinder
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ShowGroupFinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowGroupFinder");
		
		UTrialBoardTab_C_ShowGroupFinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavRightFromGroupFinderButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GamepadNav_NavRightFromGroupFinderButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavRightFromGroupFinderButton");
		
		UTrialBoardTab_C_GamepadNav_NavRightFromGroupFinderButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GamepadNav_CycleTrialBoardSocialEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GamepadNav_CycleTrialBoardSocialEntries(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GamepadNav_CycleTrialBoardSocialEntries");
		
		UTrialBoardTab_C_GamepadNav_CycleTrialBoardSocialEntries_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavToTrialBoardSocialEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GamepadNav_NavToTrialBoardSocialEntries(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavToTrialBoardSocialEntries");
		
		UTrialBoardTab_C_GamepadNav_NavToTrialBoardSocialEntries_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.SortTrialBoardSocialEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSocialMenuEntry*                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::SortTrialBoardSocialEntries(class URBSocialMenuEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.SortTrialBoardSocialEntries");
		
		UTrialBoardTab_C_SortTrialBoardSocialEntries_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavToMMButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTrialBoardTab_C::GamepadNav_NavToMMButtons(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavToMMButtons");
		
		UTrialBoardTab_C_GamepadNav_NavToMMButtons_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UTrialBoardTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnFocusReceived");
		
		UTrialBoardTab_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetCancelButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UTrialBoardTab_C::GetCancelButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetCancelButtonVisibility");
		
		UTrialBoardTab_C_GetCancelButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetStartButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UTrialBoardTab_C::GetStartButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetStartButtonVisibility");
		
		UTrialBoardTab_C_GetStartButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.IsInTrialBoardPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIntrialBoardPage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTrialBoardTab_C::IsInTrialBoardPage(bool* bIntrialBoardPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.IsInTrialBoardPage");
		
		UTrialBoardTab_C_IsInTrialBoardPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIntrialBoardPage != nullptr)
			*bIntrialBoardPage = params.bIntrialBoardPage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Get_PosterButton_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UTrialBoardTab_C::Get_PosterButton_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Get_PosterButton_ToolTipWidget_1");
		
		UTrialBoardTab_C_Get_PosterButton_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.HandleMenuTabRight
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::HandleMenuTabRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.HandleMenuTabRight");
		
		UTrialBoardTab_C_HandleMenuTabRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.HandleMenuTabLeft
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::HandleMenuTabLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.HandleMenuTabLeft");
		
		UTrialBoardTab_C_HandleMenuTabLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BuildProgramList
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BuildProgramList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BuildProgramList");
		
		UTrialBoardTab_C_BuildProgramList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetTrialOptionsBtnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UTrialBoardTab_C::GetTrialOptionsBtnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetTrialOptionsBtnVisibility");
		
		UTrialBoardTab_C_GetTrialOptionsBtnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.HideVariatorDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramTrialVariatorWidget_C*               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::HideVariatorDetails(class UProgramTrialVariatorWidget_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.HideVariatorDetails");
		
		UTrialBoardTab_C_HideVariatorDetails_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowVariatorDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramTrialVariatorWidget_C*               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::ShowVariatorDetails(class UProgramTrialVariatorWidget_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowVariatorDetails");
		
		UTrialBoardTab_C_ShowVariatorDetails_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.AddProgramUnlockReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::AddProgramUnlockReward(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.AddProgramUnlockReward");
		
		UTrialBoardTab_C_AddProgramUnlockReward_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BuildTrialRewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardDataId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPerfect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAcquired                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTrialBoardTab_C::BuildTrialRewards(const class FName& RewardDataId, bool bPerfect, bool bAcquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BuildTrialRewards");
		
		UTrialBoardTab_C_BuildTrialRewards_Params params {};
		params.RewardDataId = RewardDataId;
		params.bPerfect = bPerfect;
		params.bAcquired = bAcquired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowTrialDetails
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ShowTrialDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowTrialDetails");
		
		UTrialBoardTab_C_ShowTrialDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowProgram
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::ShowProgram(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowProgram");
		
		UTrialBoardTab_C_ShowProgram_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowProgramSelection
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ShowProgramSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowProgramSelection");
		
		UTrialBoardTab_C_ShowProgramSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowTrialBoard
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ShowTrialBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowTrialBoard");
		
		UTrialBoardTab_C_ShowTrialBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShowSocial
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::ShowSocial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShowSocial");
		
		UTrialBoardTab_C_ShowSocial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.RefreshCurrentTrialDetails
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::RefreshCurrentTrialDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.RefreshCurrentTrialDetails");
		
		UTrialBoardTab_C_RefreshCurrentTrialDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Refresh
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Refresh");
		
		UTrialBoardTab_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UTrialBoardTab_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnMouseButtonDown");
		
		UTrialBoardTab_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.DeactivateCurrentSection
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::DeactivateCurrentSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.DeactivateCurrentSection");
		
		UTrialBoardTab_C_DeactivateCurrentSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ActivateSocialTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::ActivateSocialTab(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ActivateSocialTab");
		
		UTrialBoardTab_C_ActivateSocialTab_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShouldShowNavigation
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::ShouldShowNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShouldShowNavigation");
		
		UTrialBoardTab_C_ShouldShowNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ShouldShowPageTitle
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::ShouldShowPageTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ShouldShowPageTitle");
		
		UTrialBoardTab_C_ShouldShowPageTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.IsReadyToClose
	 * 		Flags  -> ()
	 */
	bool UTrialBoardTab_C::IsReadyToClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.IsReadyToClose");
		
		UTrialBoardTab_C_IsReadyToClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetPageSpecificButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         outButtons                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void UTrialBoardTab_C::GetPageSpecificButtons(TArray<class UUserWidget*>* outButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetPageSpecificButtons");
		
		UTrialBoardTab_C_GetPageSpecificButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outButtons != nullptr)
			*outButtons = params.outButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.GetPageTitle
	 * 		Flags  -> ()
	 */
	class FText UTrialBoardTab_C::GetPageTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.GetPageTitle");
		
		UTrialBoardTab_C_GetPageTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTrialBoardTab_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.PreConstruct");
		
		UTrialBoardTab_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Construct");
		
		UTrialBoardTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_ChangeActiveSkill
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Event_ChangeActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_ChangeActiveSkill");
		
		UTrialBoardTab_C_Event_ChangeActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnBackRequested
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::OnBackRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnBackRequested");
		
		UTrialBoardTab_C_OnBackRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_FriendsButton_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_FriendsButton_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_FriendsButton_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_FriendsButton_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SleepRoomButton_K2Node_ComponentBoundEvent_1_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_SleepRoomButton_K2Node_ComponentBoundEvent_1_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SleepRoomButton_K2Node_ComponentBoundEvent_1_OnMenuTabButtonClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_SleepRoomButton_K2Node_ComponentBoundEvent_1_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_RecentButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_RecentButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_RecentButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_RecentButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_BlockedButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_BlockedButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_BlockedButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_BlockedButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_ShowOptions
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Event_ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_ShowOptions");
		
		UTrialBoardTab_C_Event_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_Refresh");
		
		UTrialBoardTab_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_CancelBtn_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_CancelBtn_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_CancelBtn_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_CancelBtn_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_StartBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_StartBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_StartBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_StartBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_AddEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSocialMenuEntry*                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::Event_AddEntry(class URBSocialMenuEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_AddEntry");
		
		UTrialBoardTab_C_Event_AddEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_RemoveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSocialMenuEntry*                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::Event_RemoveEntry(class URBSocialMenuEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_RemoveEntry");
		
		UTrialBoardTab_C_Event_RemoveEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_SetEntryPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSocialMenuEntry*                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::Event_SetEntryPosition(class URBSocialMenuEntry* Entry, const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_SetEntryPosition");
		
		UTrialBoardTab_C_Event_SetEntryPosition_Params params {};
		params.Entry = Entry;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PartyButton_K2Node_ComponentBoundEvent_4_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_PartyButton_K2Node_ComponentBoundEvent_4_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PartyButton_K2Node_ComponentBoundEvent_4_OnMenuTabButtonClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_PartyButton_K2Node_ComponentBoundEvent_4_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_DuoButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_DuoButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_DuoButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_DuoButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_TrioButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_TrioButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_TrioButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_TrioButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_QuadButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_QuadButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_QuadButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_QuadButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_StartBtn_1_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_StartBtn_1_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_StartBtn_1_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_StartBtn_1_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ProgramPosterCarrousel_K2Node_ComponentBoundEvent_12_OnPosterClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_ProgramPosterCarrousel_K2Node_ComponentBoundEvent_12_OnPosterClicked__DelegateSignature(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ProgramPosterCarrousel_K2Node_ComponentBoundEvent_12_OnPosterClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_ProgramPosterCarrousel_K2Node_ComponentBoundEvent_12_OnPosterClicked__DelegateSignature_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectTrialButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_SelectTrialButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectTrialButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_SelectTrialButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTrialBoardTab_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_InputSourceChanged");
		
		UTrialBoardTab_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_OnTabSelected
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Event_OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_OnTabSelected");
		
		UTrialBoardTab_C_Event_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_OnTabUnselected");
		
		UTrialBoardTab_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_AddFriendWidget_K2Node_ComponentBoundEvent_8_OnBackRequested__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_AddFriendWidget_K2Node_ComponentBoundEvent_8_OnBackRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_AddFriendWidget_K2Node_ComponentBoundEvent_8_OnBackRequested__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_AddFriendWidget_K2Node_ComponentBoundEvent_8_OnBackRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_GroupFinderBtn_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_GroupFinderBtn_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_GroupFinderBtn_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_GroupFinderBtn_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.Event_OnFilterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERBSocialMenuEntryFilter                           Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::Event_OnFilterChanged(ERBSocialMenuEntryFilter Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.Event_OnFilterChanged");
		
		UTrialBoardTab_C_Event_OnFilterChanged_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_AnyTrialButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_AnyTrialButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_AnyTrialButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_AnyTrialButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectedProgramButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_SelectedProgramButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectedProgramButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_SelectedProgramButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectedTrialButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::BndEvt__TrialBoardTab_SelectedTrialButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectedTrialButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
		
		UTrialBoardTab_C_BndEvt__TrialBoardTab_SelectedTrialButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.ExecuteUbergraph_TrialBoardTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardTab_C::ExecuteUbergraph_TrialBoardTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.ExecuteUbergraph_TrialBoardTab");
		
		UTrialBoardTab_C_ExecuteUbergraph_TrialBoardTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardTab.TrialBoardTab_C.OnCurrentSectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardTab_C::OnCurrentSectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardTab.TrialBoardTab_C.OnCurrentSectionChanged__DelegateSignature");
		
		UTrialBoardTab_C_OnCurrentSectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrialBoardTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrialBoardTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrialBoardTab.TrialBoardTab_C");
		return ptr;
	}

}



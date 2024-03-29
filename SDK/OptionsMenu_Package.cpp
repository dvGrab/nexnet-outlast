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
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.UpdateApplyChangesBtnVisibility
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::UpdateApplyChangesBtnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.UpdateApplyChangesBtnVisibility");
		
		UOptionsMenu_C_UpdateApplyChangesBtnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.CreateOptionEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOptionsTab_C*                               OptionTab                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOptionData                                 OptionData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class URBMenuOptionsEntry*                         Entry_Created                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::CreateOptionEntry(class UOptionsTab_C* OptionTab, const struct FOptionData& OptionData, class URBMenuOptionsEntry** Entry_Created)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.CreateOptionEntry");
		
		UOptionsMenu_C_CreateOptionEntry_Params params {};
		params.OptionTab = OptionTab;
		params.OptionData = OptionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entry_Created != nullptr)
			*Entry_Created = params.Entry_Created;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.CreateOptionTabs
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::CreateOptionTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.CreateOptionTabs");
		
		UOptionsMenu_C_CreateOptionTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.ConditionalShowApplyDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Prompt                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsMenu_C::ConditionalShowApplyDialog(const class FText& Prompt, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ConditionalShowApplyDialog");
		
		UOptionsMenu_C_ConditionalShowApplyDialog_Params params {};
		params.Prompt = Prompt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Get_ApplyChangeBtn_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UOptionsMenu_C::Get_ApplyChangeBtn_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Get_ApplyChangeBtn_Visibility_1");
		
		UOptionsMenu_C_Get_ApplyChangeBtn_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.PreNavigationChangeAction
	 * 		Flags  -> ()
	 */
	bool UOptionsMenu_C::PreNavigationChangeAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.PreNavigationChangeAction");
		
		UOptionsMenu_C_PreNavigationChangeAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_UpdateNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanExitMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsMenu_C::Event_UpdateNavigation(bool CanExitMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_UpdateNavigation");
		
		UOptionsMenu_C_Event_UpdateNavigation_Params params {};
		params.CanExitMenu = CanExitMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.OnSubButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::OnSubButtonClicked(class URBMenuOptionsEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnSubButtonClicked");
		
		UOptionsMenu_C_OnSubButtonClicked_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.ExecuteChangesDecision
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::ExecuteChangesDecision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ExecuteChangesDecision");
		
		UOptionsMenu_C_ExecuteChangesDecision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.ApplyChangesToCurrentTab
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::ApplyChangesToCurrentTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ApplyChangesToCurrentTab");
		
		UOptionsMenu_C_ApplyChangesToCurrentTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Finished_B30461B244A64F1C78C486945F767F0A
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::Finished_B30461B244A64F1C78C486945F767F0A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Finished_B30461B244A64F1C78C486945F767F0A");
		
		UOptionsMenu_C_Finished_B30461B244A64F1C78C486945F767F0A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.PreConstruct");
		
		UOptionsMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Construct");
		
		UOptionsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_StartTransitionIn
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::Event_StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_StartTransitionIn");
		
		UOptionsMenu_C_Event_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_StartTransitionOut
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::Event_StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_StartTransitionOut");
		
		UOptionsMenu_C_Event_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.OnReleasedApply
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::OnReleasedApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnReleasedApply");
		
		UOptionsMenu_C_OnReleasedApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.OnReleasedReset
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::OnReleasedReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnReleasedReset");
		
		UOptionsMenu_C_OnReleasedReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.OnFullscreenOrDesktopSettingsChanged
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::OnFullscreenOrDesktopSettingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnFullscreenOrDesktopSettingsChanged");
		
		UOptionsMenu_C_OnFullscreenOrDesktopSettingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_OnMenuTabSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            previousIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::Event_OnMenuTabSwitched(int32_t previousIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_OnMenuTabSwitched");
		
		UOptionsMenu_C_Event_OnMenuTabSwitched_Params params {};
		params.previousIndex = previousIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsMenu_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_InputSourceChanged");
		
		UOptionsMenu_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_RefreshAllEntries
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::Event_RefreshAllEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_RefreshAllEntries");
		
		UOptionsMenu_C_Event_RefreshAllEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void UOptionsMenu_C::Event_OnFocusMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Event_OnFocusMenu");
		
		UOptionsMenu_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu");
		
		UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C");
		return ptr;
	}

}



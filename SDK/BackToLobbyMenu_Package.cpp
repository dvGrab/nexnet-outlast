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
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateWarningText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText");
		
		UBackToLobbyMenu_C_UpdateWarningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateLoadingWidgetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility");
		
		UBackToLobbyMenu_C_UpdateLoadingWidgetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateShowWithPartyVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility");
		
		UBackToLobbyMenu_C_UpdateShowWithPartyVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateControlVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility");
		
		UBackToLobbyMenu_C_UpdateControlVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBackToLobbyMenu_C::GetWarningText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText");
		
		UBackToLobbyMenu_C_GetWarningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled
	 * 		Flags  -> ()
	 */
	bool UBackToLobbyMenu_C::IsLeaveWithPartyEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled");
		
		UBackToLobbyMenu_C_IsLeaveWithPartyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled
	 * 		Flags  -> ()
	 */
	bool UBackToLobbyMenu_C::AreButtonsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled");
		
		UBackToLobbyMenu_C_AreButtonsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBackToLobbyMenu_C_BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh");
		
		UBackToLobbyMenu_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPush");
		
		UBackToLobbyMenu_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPop
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::Event_OnPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPop");
		
		UBackToLobbyMenu_C_Event_OnPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBackToLobbyMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveWithParty
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::LeaveWithParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveWithParty");
		
		UBackToLobbyMenu_C_LeaveWithParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveAlone
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::LeaveAlone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveAlone");
		
		UBackToLobbyMenu_C_LeaveAlone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBackToLobbyMenu_C_BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::ExecuteUbergraph_BackToLobbyMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu");
		
		UBackToLobbyMenu_C_ExecuteUbergraph_BackToLobbyMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackToLobbyMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackToLobbyMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BackToLobbyMenu.BackToLobbyMenu_C");
		return ptr;
	}

}



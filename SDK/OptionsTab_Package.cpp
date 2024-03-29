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
	 * 		Name   -> Function OptionsTab.OptionsTab_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsTab_C::OnInputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.OnInputSourceChanged");
		
		UOptionsTab_C_OnInputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.OnSubButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsTab_C::OnSubButtonClicked(class URBMenuOptionsEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.OnSubButtonClicked");
		
		UOptionsTab_C_OnSubButtonClicked_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Get_DLSSEntry_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UOptionsTab_C::Get_DLSSEntry_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Get_DLSSEntry_Visibility_1");
		
		UOptionsTab_C_Get_DLSSEntry_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.CreateResolutionPopup
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::CreateResolutionPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.CreateResolutionPopup");
		
		UOptionsTab_C_CreateResolutionPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Event_ResolutionChanged
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::Event_ResolutionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Event_ResolutionChanged");
		
		UOptionsTab_C_Event_ResolutionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Event_OnParentPopped
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::Event_OnParentPopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Event_OnParentPopped");
		
		UOptionsTab_C_Event_OnParentPopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Event_OnTabUnselected");
		
		UOptionsTab_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Event_AddRegionEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsTab_C::Event_AddRegionEntry(class URBMenuOptionsEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Event_AddRegionEntry");
		
		UOptionsTab_C_Event_AddRegionEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsTab_C_BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsTab_C_BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsTab_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Event_InputSourceChanged");
		
		UOptionsTab_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Construct");
		
		UOptionsTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.Event_OnTabSelected
	 * 		Flags  -> ()
	 */
	void UOptionsTab_C::Event_OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.Event_OnTabSelected");
		
		UOptionsTab_C_Event_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.ExecuteUbergraph_OptionsTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsTab_C::ExecuteUbergraph_OptionsTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.ExecuteUbergraph_OptionsTab");
		
		UOptionsTab_C_ExecuteUbergraph_OptionsTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsTab.OptionsTab_C.OnEntrySubButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsTab_C::OnEntrySubButtonClicked__DelegateSignature(class URBMenuOptionsEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsTab.OptionsTab_C.OnEntrySubButtonClicked__DelegateSignature");
		
		UOptionsTab_C_OnEntrySubButtonClicked__DelegateSignature_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsTab.OptionsTab_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply ULoadoutRecap_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.OnFocusReceived");
		
		ULoadoutRecap_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.Refresh
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.Refresh");
		
		ULoadoutRecap_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.Init
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.Init");
		
		ULoadoutRecap_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		ULoadoutRecap_C_BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		ULoadoutRecap_C_BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		ULoadoutRecap_C_BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.ExecuteUbergraph_LoadoutRecap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutRecap_C::ExecuteUbergraph_LoadoutRecap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.ExecuteUbergraph_LoadoutRecap");
		
		ULoadoutRecap_C_ExecuteUbergraph_LoadoutRecap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.OnCoreUpgradesButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::OnCoreUpgradesButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.OnCoreUpgradesButtonClicked__DelegateSignature");
		
		ULoadoutRecap_C_OnCoreUpgradesButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.OnPerkSlotsButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::OnPerkSlotsButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.OnPerkSlotsButtonClicked__DelegateSignature");
		
		ULoadoutRecap_C_OnPerkSlotsButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadoutRecap.LoadoutRecap_C.OnRigButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadoutRecap_C::OnRigButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutRecap.LoadoutRecap_C.OnRigButtonClicked__DelegateSignature");
		
		ULoadoutRecap_C_OnRigButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutRecap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutRecap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutRecap.LoadoutRecap_C");
		return ptr;
	}

}



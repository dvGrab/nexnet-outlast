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
	 * 		Name   -> Function W_RSReplayEntry.W_RSReplayEntry_C.OnUnselected
	 * 		Flags  -> ()
	 */
	void UW_RSReplayEntry_C::OnUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RSReplayEntry.W_RSReplayEntry_C.OnUnselected");
		
		UW_RSReplayEntry_C_OnUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RSReplayEntry.W_RSReplayEntry_C.BndEvt__W_RSReplayEntry_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_RSReplayEntry_C::BndEvt__W_RSReplayEntry_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RSReplayEntry.W_RSReplayEntry_C.BndEvt__W_RSReplayEntry_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_RSReplayEntry_C_BndEvt__W_RSReplayEntry_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RSReplayEntry.W_RSReplayEntry_C.ExecuteUbergraph_W_RSReplayEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_RSReplayEntry_C::ExecuteUbergraph_W_RSReplayEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RSReplayEntry.W_RSReplayEntry_C.ExecuteUbergraph_W_RSReplayEntry");
		
		UW_RSReplayEntry_C_ExecuteUbergraph_W_RSReplayEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_RSReplayEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_RSReplayEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RSReplayEntry.W_RSReplayEntry_C");
		return ptr;
	}

}



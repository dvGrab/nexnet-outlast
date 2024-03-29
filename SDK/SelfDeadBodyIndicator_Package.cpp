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
	 * 		Name   -> Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool USelfDeadBodyIndicator_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ShouldShow");
		
		USelfDeadBodyIndicator_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.UpdateDisplay
	 * 		Flags  -> ()
	 */
	void USelfDeadBodyIndicator_C::UpdateDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.UpdateDisplay");
		
		USelfDeadBodyIndicator_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void USelfDeadBodyIndicator_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.Event_Hide");
		
		USelfDeadBodyIndicator_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ExecuteUbergraph_SelfDeadBodyIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelfDeadBodyIndicator_C::ExecuteUbergraph_SelfDeadBodyIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ExecuteUbergraph_SelfDeadBodyIndicator");
		
		USelfDeadBodyIndicator_C_ExecuteUbergraph_SelfDeadBodyIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfDeadBodyIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfDeadBodyIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelfDeadBodyIndicator.SelfDeadBodyIndicator_C");
		return ptr;
	}

}



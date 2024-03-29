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
	 * 		Name   -> Function IRadialSlot.IRadialSlot_C.OnUnhighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Unselected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIRadialSlot_C::OnUnhighlight(bool Unselected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IRadialSlot.IRadialSlot_C.OnUnhighlight");
		
		UIRadialSlot_C_OnUnhighlight_Params params {};
		params.Unselected = Unselected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IRadialSlot.IRadialSlot_C.OnHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIRadialSlot_C::OnHighlight(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IRadialSlot.IRadialSlot_C.OnHighlight");
		
		UIRadialSlot_C_OnHighlight_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIRadialSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIRadialSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IRadialSlot.IRadialSlot_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function IRadioWidget.IRadioWidget_C.Equals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIRadioWidget_C::Equals(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IRadioWidget.IRadioWidget_C.Equals");
		
		UIRadioWidget_C_Equals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IRadioWidget.IRadioWidget_C.OnRadioDeselected
	 * 		Flags  -> ()
	 */
	void UIRadioWidget_C::OnRadioDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IRadioWidget.IRadioWidget_C.OnRadioDeselected");
		
		UIRadioWidget_C_OnRadioDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IRadioWidget.IRadioWidget_C.OnRadioSelected
	 * 		Flags  -> ()
	 */
	void UIRadioWidget_C::OnRadioSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IRadioWidget.IRadioWidget_C.OnRadioSelected");
		
		UIRadioWidget_C_OnRadioSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIRadioWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIRadioWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IRadioWidget.IRadioWidget_C");
		return ptr;
	}

}



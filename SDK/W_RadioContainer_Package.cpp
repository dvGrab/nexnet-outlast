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
	 * 		Name   -> Function W_RadioContainer.W_RadioContainer_C.OnNewChildSelected
	 * 		Flags  -> ()
	 */
	void UW_RadioContainer_C::OnNewChildSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadioContainer.W_RadioContainer_C.OnNewChildSelected");
		
		UW_RadioContainer_C_OnNewChildSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadioContainer.W_RadioContainer_C.RegisterRadioChild
	 * 		Flags  -> ()
	 */
	void UW_RadioContainer_C::RegisterRadioChild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadioContainer.W_RadioContainer_C.RegisterRadioChild");
		
		UW_RadioContainer_C_RegisterRadioChild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_RadioContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_RadioContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass W_RadioContainer.W_RadioContainer_C");
		return ptr;
	}

}



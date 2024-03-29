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
	 * 		Name   -> Function G19_Camera_Reload.G19_Camera_Reload_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UG19_Camera_Reload_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function G19_Camera_Reload.G19_Camera_Reload_C.NewFunction_1");
		
		UG19_Camera_Reload_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UG19_Camera_Reload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UG19_Camera_Reload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass G19_Camera_Reload.G19_Camera_Reload_C");
		return ptr;
	}

}



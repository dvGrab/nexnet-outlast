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
	 * 		Name   -> Function M4_Camera_Shake_Reload_Start.M4_Camera_Shake_Reload_Start_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UM4_Camera_Shake_Reload_Start_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function M4_Camera_Shake_Reload_Start.M4_Camera_Shake_Reload_Start_C.NewFunction_1");
		
		UM4_Camera_Shake_Reload_Start_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UM4_Camera_Shake_Reload_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UM4_Camera_Shake_Reload_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass M4_Camera_Shake_Reload_Start.M4_Camera_Shake_Reload_Start_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function M14_Camera_Fire.M14_Camera_Fire_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UM14_Camera_Fire_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function M14_Camera_Fire.M14_Camera_Fire_C.NewFunction_1");
		
		UM14_Camera_Fire_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UM14_Camera_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UM14_Camera_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass M14_Camera_Fire.M14_Camera_Fire_C");
		return ptr;
	}

}



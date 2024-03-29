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
	 * 		Name   -> Function MPL_Camera_Shake_Holster2.MPL_Camera_Shake_Holster2_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UMPL_Camera_Shake_Holster2_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPL_Camera_Shake_Holster2.MPL_Camera_Shake_Holster2_C.NewFunction_1");
		
		UMPL_Camera_Shake_Holster2_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMPL_Camera_Shake_Holster2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMPL_Camera_Shake_Holster2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPL_Camera_Shake_Holster2.MPL_Camera_Shake_Holster2_C");
		return ptr;
	}

}



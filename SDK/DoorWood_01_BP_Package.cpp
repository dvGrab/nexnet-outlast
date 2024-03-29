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
	 * 		Name   -> Function DoorWood-01_BP.DoorWood-01_BP_C.SetBarIcon
	 * 		Flags  -> ()
	 */
	void ADoorWood__BP_C::SetBarIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorWood-01_BP.DoorWood-01_BP_C.SetBarIcon");
		
		ADoorWood__BP_C_SetBarIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorWood__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorWood__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorWood_01_BP.DoorWood-01_BP_C");
		return ptr;
	}

}



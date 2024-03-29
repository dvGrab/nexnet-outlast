/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function WallLamp-01.WallLamp-01_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWallLamp01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WallLamp-01.WallLamp-01_C.UserConstructionScript");
		
		AWallLamp01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWallLamp01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallLamp01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallLamp_01.WallLamp-01_C");
		return ptr;
	}

}



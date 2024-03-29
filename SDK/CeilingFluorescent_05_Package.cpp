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
	 * 		Name   -> Function CeilingFluorescent-05.CeilingFluorescent-05_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACeilingFluorescent__C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CeilingFluorescent-05.CeilingFluorescent-05_C.UserConstructionScript");
		
		ACeilingFluorescent__C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACeilingFluorescent__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingFluorescent__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingFluorescent_05.CeilingFluorescent-05_C");
		return ptr;
	}

}



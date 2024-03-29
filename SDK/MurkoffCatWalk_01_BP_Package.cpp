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
	 * 		Name   -> Function MurkoffCatWalk-01_BP.MurkoffCatWalk-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMurkoffCatWalk__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MurkoffCatWalk-01_BP.MurkoffCatWalk-01_BP_C.UserConstructionScript");
		
		AMurkoffCatWalk__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMurkoffCatWalk__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMurkoffCatWalk__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MurkoffCatWalk_01_BP.MurkoffCatWalk-01_BP_C");
		return ptr;
	}

}



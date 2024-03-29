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
	 * 		Name   -> Function OldLookBus-01_BP.OldLookBus-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOldLookBus__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OldLookBus-01_BP.OldLookBus-01_BP_C.UserConstructionScript");
		
		AOldLookBus__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOldLookBus__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOldLookBus__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OldLookBus_01_BP.OldLookBus-01_BP_C");
		return ptr;
	}

}



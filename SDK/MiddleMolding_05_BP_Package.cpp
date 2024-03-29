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
	 * 		Name   -> Function MiddleMolding_05_BP.MiddleMolding_05_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMiddleMolding_05_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiddleMolding_05_BP.MiddleMolding_05_BP_C.UserConstructionScript");
		
		AMiddleMolding_05_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMiddleMolding_05_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMiddleMolding_05_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MiddleMolding_05_BP.MiddleMolding_05_BP_C");
		return ptr;
	}

}



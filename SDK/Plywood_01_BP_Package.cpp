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
	 * 		Name   -> Function Plywood-01_BP.Plywood-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APlywood__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Plywood-01_BP.Plywood-01_BP_C.UserConstructionScript");
		
		APlywood__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlywood__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlywood__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Plywood_01_BP.Plywood-01_BP_C");
		return ptr;
	}

}



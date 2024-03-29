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
	 * 		Name   -> Function Base_SplineActor_BP.Base_SplineActor_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_SplineActor_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SplineActor_BP.Base_SplineActor_BP_C.UserConstructionScript");
		
		ABase_SplineActor_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_SplineActor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_SplineActor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_SplineActor_BP.Base_SplineActor_BP_C");
		return ptr;
	}

}



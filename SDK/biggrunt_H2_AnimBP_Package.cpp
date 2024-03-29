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
	 * 		Name   -> Function biggrunt_H2_AnimBP.biggrunt_H2_AnimBP_C.UpdateAggressiveStance
	 * 		Flags  -> ()
	 */
	bool Ubiggrunt_H2_AnimBP_C::UpdateAggressiveStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function biggrunt_H2_AnimBP.biggrunt_H2_AnimBP_C.UpdateAggressiveStance");
		
		Ubiggrunt_H2_AnimBP_C_UpdateAggressiveStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ubiggrunt_H2_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ubiggrunt_H2_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass biggrunt_H2_AnimBP.biggrunt_H2_AnimBP_C");
		return ptr;
	}

}



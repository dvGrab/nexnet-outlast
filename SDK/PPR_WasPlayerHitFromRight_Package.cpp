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
	 * 		Name   -> Function PPR_WasPlayerHitFromRight.PPR_WasPlayerHitFromRight_C.EnablePostProcessEffect
	 * 		Flags  -> ()
	 */
	bool UPPR_WasPlayerHitFromRight_C::EnablePostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPR_WasPlayerHitFromRight.PPR_WasPlayerHitFromRight_C.EnablePostProcessEffect");
		
		UPPR_WasPlayerHitFromRight_C_EnablePostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPPR_WasPlayerHitFromRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPPR_WasPlayerHitFromRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PPR_WasPlayerHitFromRight.PPR_WasPlayerHitFromRight_C");
		return ptr;
	}

}



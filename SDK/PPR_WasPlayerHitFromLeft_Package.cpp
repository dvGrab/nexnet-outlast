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
	 * 		Name   -> Function PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C.EnablePostProcessEffect
	 * 		Flags  -> ()
	 */
	bool UPPR_WasPlayerHitFromLeft_C::EnablePostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C.EnablePostProcessEffect");
		
		UPPR_WasPlayerHitFromLeft_C_EnablePostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPPR_WasPlayerHitFromLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPPR_WasPlayerHitFromLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C");
		return ptr;
	}

}



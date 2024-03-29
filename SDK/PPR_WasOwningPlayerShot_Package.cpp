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
	 * 		Name   -> Function PPR_WasOwningPlayerShot.PPR_WasOwningPlayerShot_C.EnablePostProcessEffect
	 * 		Flags  -> ()
	 */
	bool UPPR_WasOwningPlayerShot_C::EnablePostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPR_WasOwningPlayerShot.PPR_WasOwningPlayerShot_C.EnablePostProcessEffect");
		
		UPPR_WasOwningPlayerShot_C_EnablePostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPPR_WasOwningPlayerShot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPPR_WasOwningPlayerShot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PPR_WasOwningPlayerShot.PPR_WasOwningPlayerShot_C");
		return ptr;
	}

}



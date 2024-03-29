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
	 * 		Name   -> Function PPR_BulletBlockedBySAPIPlate.PPR_BulletBlockedBySAPIPlate_C.EnablePostProcessEffect
	 * 		Flags  -> ()
	 */
	bool UPPR_BulletBlockedBySAPIPlate_C::EnablePostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPR_BulletBlockedBySAPIPlate.PPR_BulletBlockedBySAPIPlate_C.EnablePostProcessEffect");
		
		UPPR_BulletBlockedBySAPIPlate_C_EnablePostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPPR_BulletBlockedBySAPIPlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPPR_BulletBlockedBySAPIPlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PPR_BulletBlockedBySAPIPlate.PPR_BulletBlockedBySAPIPlate_C");
		return ptr;
	}

}



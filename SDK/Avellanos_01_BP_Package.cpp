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
	 * 		Name   -> Function Avellanos-01_BP.Avellanos-01_BP_C.SetPointingDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAvellanosPointing                                 AvellanosPointing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAvellanos__BP_C::SetPointingDirection(EAvellanosPointing AvellanosPointing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Avellanos-01_BP.Avellanos-01_BP_C.SetPointingDirection");
		
		AAvellanos__BP_C_SetPointingDirection_Params params {};
		params.AvellanosPointing = AvellanosPointing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Avellanos-01_BP.Avellanos-01_BP_C.OnRep_AvellanosPointing
	 * 		Flags  -> ()
	 */
	void AAvellanos__BP_C::OnRep_AvellanosPointing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Avellanos-01_BP.Avellanos-01_BP_C.OnRep_AvellanosPointing");
		
		AAvellanos__BP_C_OnRep_AvellanosPointing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAvellanos__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAvellanos__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Avellanos_01_BP.Avellanos-01_BP_C");
		return ptr;
	}

}



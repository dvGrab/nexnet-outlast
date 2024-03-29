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
	 * 		Name   -> Function SAS_TvChannel_BP.SAS_TvChannel_BP_C.DisableInteractibleUI
	 * 		Flags  -> ()
	 */
	void ASAS_TvChannel_BP_C::DisableInteractibleUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_TvChannel_BP.SAS_TvChannel_BP_C.DisableInteractibleUI");
		
		ASAS_TvChannel_BP_C_DisableInteractibleUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS_TvChannel_BP.SAS_TvChannel_BP_C.EnableInteractibleUI
	 * 		Flags  -> ()
	 */
	void ASAS_TvChannel_BP_C::EnableInteractibleUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_TvChannel_BP.SAS_TvChannel_BP_C.EnableInteractibleUI");
		
		ASAS_TvChannel_BP_C_EnableInteractibleUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASAS_TvChannel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASAS_TvChannel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SAS_TvChannel_BP.SAS_TvChannel_BP_C");
		return ptr;
	}

}



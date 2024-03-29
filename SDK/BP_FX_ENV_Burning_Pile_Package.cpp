/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function BP_FX_ENV_Burning_Pile.BP_FX_ENV_Burning_Pile_C.PickFireAudioTrack
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_Burning_Pile_C::PickFireAudioTrack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_Burning_Pile.BP_FX_ENV_Burning_Pile_C.PickFireAudioTrack");
		
		ABP_FX_ENV_Burning_Pile_C_PickFireAudioTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_Burning_Pile.BP_FX_ENV_Burning_Pile_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_Burning_Pile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_Burning_Pile.BP_FX_ENV_Burning_Pile_C.UserConstructionScript");
		
		ABP_FX_ENV_Burning_Pile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ENV_Burning_Pile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ENV_Burning_Pile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ENV_Burning_Pile.BP_FX_ENV_Burning_Pile_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function PS_BottomMoldingWoodHigh-01_BP.PS_BottomMoldingWoodHigh-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APS_BottomMoldingWoodHigh01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BottomMoldingWoodHigh-01_BP.PS_BottomMoldingWoodHigh-01_BP_C.UserConstructionScript");
		
		APS_BottomMoldingWoodHigh01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_BottomMoldingWoodHigh01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_BottomMoldingWoodHigh01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_BottomMoldingWoodHigh_01_BP.PS_BottomMoldingWoodHigh-01_BP_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function PS_BottomMoldingWood-02_BP.PS_BottomMoldingWood-02_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APS_BottomMoldingWood02_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BottomMoldingWood-02_BP.PS_BottomMoldingWood-02_BP_C.UserConstructionScript");
		
		APS_BottomMoldingWood02_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_BottomMoldingWood02_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_BottomMoldingWood02_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_BottomMoldingWood_02_BP.PS_BottomMoldingWood-02_BP_C");
		return ptr;
	}

}



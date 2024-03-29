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
	 * 		Name   -> Function BaseMoldingVinyl-01_BP.BaseMoldingVinyl-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABaseMoldingVinyl__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMoldingVinyl-01_BP.BaseMoldingVinyl-01_BP_C.UserConstructionScript");
		
		ABaseMoldingVinyl__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseMoldingVinyl__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseMoldingVinyl__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseMoldingVinyl_01_BP.BaseMoldingVinyl-01_BP_C");
		return ptr;
	}

}



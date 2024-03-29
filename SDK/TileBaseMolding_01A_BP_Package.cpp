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
	 * 		Name   -> Function TileBaseMolding-01A_BP.TileBaseMolding-01A_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATileBaseMolding01A_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBaseMolding-01A_BP.TileBaseMolding-01A_BP_C.UserConstructionScript");
		
		ATileBaseMolding01A_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATileBaseMolding01A_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATileBaseMolding01A_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TileBaseMolding_01A_BP.TileBaseMolding-01A_BP_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function TileMidMolding-02A_BP.TileMidMolding-02A_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATileMidMolding_A_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileMidMolding-02A_BP.TileMidMolding-02A_BP_C.UserConstructionScript");
		
		ATileMidMolding_A_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATileMidMolding_A_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATileMidMolding_A_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TileMidMolding_02A_BP.TileMidMolding-02A_BP_C");
		return ptr;
	}

}



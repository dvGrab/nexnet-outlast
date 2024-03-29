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
	 * 		Name   -> Function WallGrayBox_BP.WallGrayBox_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWallGrayBox_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WallGrayBox_BP.WallGrayBox_BP_C.UserConstructionScript");
		
		AWallGrayBox_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWallGrayBox_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallGrayBox_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallGrayBox_BP.WallGrayBox_BP_C");
		return ptr;
	}

}



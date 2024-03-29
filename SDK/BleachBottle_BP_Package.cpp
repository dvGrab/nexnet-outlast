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
	 * 		Name   -> Function BleachBottle_BP.BleachBottle_BP_C.GetObjectiveTypeIndex
	 * 		Flags  -> ()
	 */
	int32_t ABleachBottle_BP_C::GetObjectiveTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BleachBottle_BP.BleachBottle_BP_C.GetObjectiveTypeIndex");
		
		ABleachBottle_BP_C_GetObjectiveTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABleachBottle_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABleachBottle_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BleachBottle_BP.BleachBottle_BP_C");
		return ptr;
	}

}



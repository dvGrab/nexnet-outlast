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
	 * 		Name   -> Function StairMarkersOnly_BP.StairMarkersOnly_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AStairMarkersOnly_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StairMarkersOnly_BP.StairMarkersOnly_BP_C.UserConstructionScript");
		
		AStairMarkersOnly_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStairMarkersOnly_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStairMarkersOnly_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StairMarkersOnly_BP.StairMarkersOnly_BP_C");
		return ptr;
	}

}



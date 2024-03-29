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
	 * 		Name   -> Function Murkoff_Plexiglass-01_BP.Murkoff_Plexiglass-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMurkoff_Plexiglass01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Murkoff_Plexiglass-01_BP.Murkoff_Plexiglass-01_BP_C.UserConstructionScript");
		
		AMurkoff_Plexiglass01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMurkoff_Plexiglass01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMurkoff_Plexiglass01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Murkoff_Plexiglass_01_BP.Murkoff_Plexiglass-01_BP_C");
		return ptr;
	}

}



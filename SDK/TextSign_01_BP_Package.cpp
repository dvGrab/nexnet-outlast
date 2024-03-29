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
	 * 		Name   -> Function TextSign-01_BP.TextSign-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATextSign__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextSign-01_BP.TextSign-01_BP_C.UserConstructionScript");
		
		ATextSign__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATextSign__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATextSign__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextSign_01_BP.TextSign-01_BP_C");
		return ptr;
	}

}



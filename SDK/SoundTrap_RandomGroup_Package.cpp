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
	 * 		Name   -> Function SoundTrap_RandomGroup.SoundTrap_RandomGroup_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASoundTrap_RandomGroup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_RandomGroup.SoundTrap_RandomGroup_C.UserConstructionScript");
		
		ASoundTrap_RandomGroup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoundTrap_RandomGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundTrap_RandomGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundTrap_RandomGroup.SoundTrap_RandomGroup_C");
		return ptr;
	}

}



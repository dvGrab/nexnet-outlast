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
	 * 		Name   -> Function CineCorpseSearch-01.CineCorpseSearch-01_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACineCorpseSearch01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCorpseSearch-01.CineCorpseSearch-01_C.UserConstructionScript");
		
		ACineCorpseSearch01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACineCorpseSearch01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineCorpseSearch01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineCorpseSearch_01.CineCorpseSearch-01_C");
		return ptr;
	}

}



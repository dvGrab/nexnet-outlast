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
	 * 		Name   -> PredefinedFunction UGroupLeaderDisclaimerScrollStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupLeaderDisclaimerScrollStyle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GroupLeaderDisclaimerScrollStyle.GroupLeaderDisclaimerScrollStyle_C");
		return ptr;
	}

}



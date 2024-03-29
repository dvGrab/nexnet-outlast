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
	 * 		Name   -> PredefinedFunction UMannequinSetupAsset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMannequinSetupAsset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MannequinSetupAsset.MannequinSetupAsset_C");
		return ptr;
	}

}



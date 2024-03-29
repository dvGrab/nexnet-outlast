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
	 * 		Name   -> PredefinedFunction AIndoorRubbish_Clothes__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIndoorRubbish_Clothes__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IndoorRubbish_Clothes_01_BP.IndoorRubbish_Clothes-01_BP_C");
		return ptr;
	}

}



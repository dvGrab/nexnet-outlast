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
	 * 		Name   -> PredefinedFunction ASO_Poster__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASO_Poster__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SO_Poster_01_BP.SO-Poster-01_BP_C");
		return ptr;
	}

}



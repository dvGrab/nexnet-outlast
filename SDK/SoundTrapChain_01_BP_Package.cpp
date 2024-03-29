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
	 * 		Name   -> PredefinedFunction ASoundTrapChain__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundTrapChain__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundTrapChain_01_BP.SoundTrapChain-01_BP_C");
		return ptr;
	}

}



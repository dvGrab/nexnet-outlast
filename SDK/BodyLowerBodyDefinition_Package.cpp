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
	 * 		Name   -> PredefinedFunction UBodyLowerBodyDefinition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyLowerBodyDefinition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BodyLowerBodyDefinition.BodyLowerBodyDefinition_C");
		return ptr;
	}

}



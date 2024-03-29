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
	 * 		Name   -> PredefinedFunction UBodyLegsDefinition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyLegsDefinition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BodyLegsDefinition.BodyLegsDefinition_C");
		return ptr;
	}

}



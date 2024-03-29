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
	 * 		Name   -> PredefinedFunction UBodyHeadDefinition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyHeadDefinition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BodyHeadDefinition.BodyHeadDefinition_C");
		return ptr;
	}

}



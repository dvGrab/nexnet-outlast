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
	 * 		Name   -> PredefinedFunction UBodyUpperBodyDefinition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyUpperBodyDefinition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BodyUpperBodyDefinition.BodyUpperBodyDefinition_C");
		return ptr;
	}

}



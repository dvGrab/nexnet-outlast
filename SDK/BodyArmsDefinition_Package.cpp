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
	 * 		Name   -> PredefinedFunction UBodyArmsDefinition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyArmsDefinition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BodyArmsDefinition.BodyArmsDefinition_C");
		return ptr;
	}

}



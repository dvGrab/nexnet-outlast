/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction UNull_GripAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNull_GripAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Null_GripAttachment.Null_GripAttachment_C");
		return ptr;
	}

}



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
	 * 		Name   -> PredefinedFunction UNull_AmmunitionAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNull_AmmunitionAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Null_AmmunitionAttachment.Null_AmmunitionAttachment_C");
		return ptr;
	}

}



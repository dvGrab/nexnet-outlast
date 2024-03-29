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
	 * 		Name   -> PredefinedFunction AFlashbang_Thrown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashbang_Thrown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Flashbang_Thrown.Flashbang_Thrown_C");
		return ptr;
	}

}



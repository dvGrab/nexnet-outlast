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
	 * 		Name   -> PredefinedFunction APictureFrameLamp__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APictureFrameLamp__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PictureFrameLamp_01.PictureFrameLamp-01_C");
		return ptr;
	}

}



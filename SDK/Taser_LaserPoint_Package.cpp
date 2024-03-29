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
	 * 		Name   -> PredefinedFunction UTaser_LaserPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaser_LaserPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Taser_LaserPoint.Taser_LaserPoint_C");
		return ptr;
	}

}



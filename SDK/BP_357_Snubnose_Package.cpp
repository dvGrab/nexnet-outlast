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
	 * 		Name   -> PredefinedFunction UBP_357_Snubnose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_357_Snubnose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_357_Snubnose.BP_357_Snubnose_C");
		return ptr;
	}

}



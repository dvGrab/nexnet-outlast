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
	 * 		Name   -> PredefinedFunction UBP_Compensator_ASR_Var1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Compensator_ASR_Var1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Compensator_ASR_Var1.BP_Compensator_ASR_Var1_C");
		return ptr;
	}

}



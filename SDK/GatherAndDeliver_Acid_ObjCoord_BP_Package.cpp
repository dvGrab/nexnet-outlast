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
	 * 		Name   -> PredefinedFunction AGatherAndDeliver_Acid_ObjCoord_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGatherAndDeliver_Acid_ObjCoord_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GatherAndDeliver_Acid_ObjCoord_BP.GatherAndDeliver_Acid_ObjCoord_BP_C");
		return ptr;
	}

}



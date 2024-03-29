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
	 * 		Name   -> PredefinedFunction AOrphanage_Baseboard__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrphanage_Baseboard__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Orphanage_Baseboard_01_BP.Orphanage_Baseboard-01_BP_C");
		return ptr;
	}

}



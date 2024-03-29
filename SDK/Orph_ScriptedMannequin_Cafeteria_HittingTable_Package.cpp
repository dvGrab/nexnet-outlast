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
	 * 		Name   -> PredefinedFunction AOrph_ScriptedMannequin_Cafeteria_HittingTable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrph_ScriptedMannequin_Cafeteria_HittingTable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Orph_ScriptedMannequin_Cafeteria_HittingTable.Orph_ScriptedMannequin_Cafeteria_HittingTable_C");
		return ptr;
	}

}



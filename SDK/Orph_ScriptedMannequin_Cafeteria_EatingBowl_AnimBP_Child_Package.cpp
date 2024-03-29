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
	 * 		Name   -> PredefinedFunction UOrph_ScriptedMannequin_Cafeteria_EatingBowl_AnimBP_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrph_ScriptedMannequin_Cafeteria_EatingBowl_AnimBP_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Orph_ScriptedMannequin_Cafeteria_EatingBowl_AnimBP_Child.Orph_ScriptedMannequin_Cafeteria_EatingBowl_AnimBP_Child_C");
		return ptr;
	}

}


